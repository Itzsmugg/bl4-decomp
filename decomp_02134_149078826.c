// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149078826 FUN_149078826 body=54 status=ok
// SIG undefined FUN_149078826(void)

void FUN_149078826(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14907885c(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14907885c FUN_14907885c body=78 status=ok
// SIG undefined FUN_14907885c(void)

void FUN_14907885c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14ba9af60;
    FUN_1490788aa(param_1 + 10);
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x3b;
  }
  return;
}



// FUNCTION 1490788aa FUN_1490788aa body=112 status=ok
// SIG undefined FUN_1490788aa(void)

void FUN_1490788aa(longlong param_1)

{
  FUN_1400ea36e(param_1 + 0x158,param_1 + 0x158);
  FUN_1400ea36e(param_1 + 0x120,param_1 + 0x120);
  FUN_1400ea36e(param_1 + 0xe8,param_1 + 0xe8);
  FUN_1400ea36e(param_1 + 0xb0,param_1 + 0xb0);
  FUN_1400ea36e(param_1 + 0x78,param_1 + 0x78);
  FUN_1400ea36e(param_1 + 0x40,param_1 + 0x40);
  FUN_1400ea36e(param_1 + 8,param_1 + 8);
  return;
}



// FUNCTION 14907891a FUN_14907891a body=66 status=ok
// SIG undefined FUN_14907891a(void)

undefined8 * FUN_14907891a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba9af60;
  FUN_1490788aa(param_1 + 10);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907895c FUN_14907895c body=112 status=ok
// SIG undefined FUN_14907895c(void)

ulonglong FUN_14907895c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149078996;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_149078996:
  return param_2 & 0xffffffff;
}



// FUNCTION 1490789cc FUN_1490789cc body=121 status=ok
// SIG undefined FUN_1490789cc(void)

void FUN_1490789cc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149078aa4(param_1,iVar1);
    }
    FUN_149078a46((longlong)iVar1 * 0x1d8 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149078cec(param_1,param_2,iVar1 - param_2);
    FUN_149078d4e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149078a46 FUN_149078a46 body=94 status=ok
// SIG undefined FUN_149078a46(void)

void FUN_149078a46(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x50;
    do {
      *(undefined ***)(param_1 + -0x50) = &PTR_FUN_14ba9af60;
      *(undefined4 *)(param_1 + -0x48) = 0xffffffff;
      *(undefined8 *)(param_1 + -0x44) = 0;
      *(undefined8 *)(param_1 + -0x3c) = 0;
      *(undefined8 *)(param_1 + -0x34) = 0;
      *(undefined8 *)(param_1 + -0x2c) = 0;
      *(undefined8 *)(param_1 + -0x24) = 0;
      *(undefined8 *)(param_1 + -0x1c) = 0;
      *(undefined8 *)(param_1 + -0x14) = 0;
      *(undefined8 *)(param_1 + -0xc) = 0;
      FUN_149078b38(param_1);
      param_1 = param_1 + 0x1d8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149078aa4 FUN_149078aa4 body=146 status=ok
// SIG undefined FUN_149078aa4(void)

void FUN_149078aa4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1d8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1d8)) {
      uVar5 = uVar4 / 0x1d8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1d8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149078b38 FUN_149078b38 body=436 status=ok
// SIG undefined FUN_149078b38(void)

void FUN_149078b38(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x15) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = DAT_14c845dbc;
  param_1[10] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 0xff;
  *(undefined4 *)((longlong)param_1 + 0x4d) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x16) = DAT_14c845dbc;
  param_1[0x18] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x85) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x89) = 0xff;
  *(undefined8 *)(param_1 + 0x24) = DAT_14c845dbc;
  param_1[0x26] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbd) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0xff;
  *(undefined8 *)(param_1 + 0x32) = DAT_14c845dbc;
  param_1[0x34] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x36) = 0;
  param_1[0x38] = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf5) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xf9) = 0xff;
  *(undefined8 *)(param_1 + 0x40) = DAT_14c845dbc;
  param_1[0x42] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x44) = 0;
  param_1[0x46] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12d) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x131) = 0xff;
  *(undefined8 *)(param_1 + 0x4e) = DAT_14c845dbc;
  param_1[0x50] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x52) = 0;
  param_1[0x54] = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x165) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x169) = 0xff;
  *(undefined8 *)(param_1 + 0x5c) = DAT_14c845dbc;
  param_1[0x5e] = DAT_14c845dc4;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



// FUNCTION 149078cec FUN_149078cec body=98 status=ok
// SIG undefined FUN_149078cec(void)

void FUN_149078cec(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x1d8 + *param_1);
  FUN_14907885c(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x1d8 + (longlong)_Dst),(longlong)iVar2 * 0x1d8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149078d4e FUN_149078d4e body=62 status=ok
// SIG undefined FUN_149078d4e(void)

void FUN_149078d4e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149078d8c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x1d8,8);
  }
  return;
}



// FUNCTION 149078d8c FUN_149078d8c body=110 status=ok
// SIG undefined FUN_149078d8c(void)

ulonglong FUN_149078d8c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x1d8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149078dc5;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x1d8,8);
      param_2 = param_2 / 0x1d8;
    }
  }
LAB_149078dc5:
  return param_2 & 0xffffffff;
}



// FUNCTION 149078dfa FUN_149078dfa body=130 status=ok
// SIG undefined FUN_149078dfa(void)

void FUN_149078dfa(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149078e7e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149078f04(param_1,param_2,iVar1 - param_2);
    FUN_149078f5e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149078e7e FUN_149078e7e body=132 status=ok
// SIG undefined FUN_149078e7e(void)

void FUN_149078e7e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149078f04 FUN_149078f04 body=89 status=ok
// SIG undefined FUN_149078f04(void)

void FUN_149078f04(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_149078826(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149078f5e FUN_149078f5e body=62 status=ok
// SIG undefined FUN_149078f5e(void)

void FUN_149078f5e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149078f9c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149078f9c FUN_149078f9c body=93 status=ok
// SIG undefined FUN_149078f9c(void)

ulonglong FUN_149078f9c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 149078ff9 FUN_149078ff9 body=38 status=ok
// SIG undefined FUN_149078ff9(void)

void FUN_149078ff9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_149079020(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 149079020 FUN_149079020 body=54 status=ok
// SIG undefined FUN_149079020(void)

void FUN_149079020(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      FUN_144716208(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  FUN_14152e1c8(param_1);
  return;
}



// FUNCTION 149079056 FUN_149079056 body=115 status=ok
// SIG undefined FUN_149079056(void)

void FUN_149079056(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490790c9 FUN_1490790c9 body=60 status=ok
// SIG undefined FUN_1490790c9(void)

void FUN_1490790c9(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149079106(param_1,param_2);
    param_1 = param_1 + 0xa0;
    param_2 = param_2 + 0xa0;
  }
  return;
}



// FUNCTION 149079106 FUN_149079106 body=256 status=ok
// SIG undefined FUN_149079106(void)

longlong * FUN_149079106(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar5 = DAT_14c950c29;
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[1] = param_2[1];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if ((lVar2 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
    bVar5 = DAT_14c950c29;
  }
  *(short *)(param_1 + 4) = (short)param_2[4];
  lVar2 = param_2[5];
  param_1[5] = lVar2;
  if ((lVar2 != 0 & bVar5) == 1) {
    FUN_1456cec3c();
  }
  FUN_149079206(param_1 + 6,param_2 + 6);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar2 = param_2[0x11];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  param_1[0x12] = 0;
  iVar1 = (int)param_2[0x13];
  _Src = (void *)param_2[0x12];
  *(int *)(param_1 + 0x13) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy((void *)param_1[0x12],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 149079206 FUN_149079206 body=357 status=ok
// SIG undefined FUN_149079206(void)

undefined1 * FUN_149079206(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1474513c8(param_1 + 8,iVar1,0);
    FUN_14745142a(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  lVar3 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  lVar3 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(param_1 + 0x20) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_1 + 0x38) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
    bVar4 = DAT_14c950c29;
  }
  lVar3 = *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar3;
  if ((lVar3 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x48] = param_2[0x48];
  return param_1;
}



// FUNCTION 14907936c FUN_14907936c body=115 status=ok
// SIG undefined FUN_14907936c(void)

void FUN_14907936c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1490793e0 FUN_1490793e0 body=98 status=ok
// SIG undefined FUN_1490793e0(void)

void FUN_1490793e0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149079442 FUN_149079442 body=123 status=ok
// SIG undefined FUN_149079442(void)

void FUN_149079442(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_149076672(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x1c);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1490794be FUN_1490794be body=98 status=ok
// SIG undefined FUN_1490794be(void)

void FUN_1490794be(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149079520 FUN_149079520 body=96 status=ok
// SIG undefined FUN_149079520(void)

void FUN_149079520(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 149079580 FUN_149079580 body=98 status=ok
// SIG undefined FUN_149079580(void)

void FUN_149079580(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490795e2 FUN_1490795e2 body=60 status=ok
// SIG undefined FUN_1490795e2(void)

void FUN_1490795e2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14907961e(param_1,param_2);
    param_1 = param_1 + 0x80;
    param_2 = param_2 + 0x80;
  }
  return;
}



// FUNCTION 14907961e FUN_14907961e body=186 status=ok
// SIG undefined FUN_14907961e(void)

longlong * FUN_14907961e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  byte bVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  param_1[1] = param_2[1];
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  FUN_149079206(param_1 + 3,param_2 + 3);
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = 0;
  iVar1 = (int)param_2[0xf];
  _Src = (void *)param_2[0xe];
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490796d8 FUN_1490796d8 body=118 status=ok
// SIG undefined FUN_1490796d8(void)

void FUN_1490796d8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x2e8,8);
    iVar2 = (int)(uVar1 / 0x2e8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x2e8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14907974e FUN_14907974e body=60 status=ok
// SIG undefined FUN_14907974e(void)

void FUN_14907974e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14907978a(param_1,param_2);
    param_1 = param_1 + 0x2e8;
    param_2 = param_2 + 0x2e8;
  }
  return;
}



// FUNCTION 14907978a FUN_14907978a body=140 status=ok
// SIG undefined FUN_14907978a(void)

longlong FUN_14907978a(longlong param_1,longlong param_2)

{
  longlong lVar1;
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
  
  FUN_149079816();
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined4 *)(param_2 + 0x4c);
  uVar5 = *(undefined4 *)(param_2 + 0x50);
  uVar6 = *(undefined4 *)(param_2 + 0x54);
  uVar7 = *(undefined4 *)(param_2 + 0x58);
  uVar8 = *(undefined4 *)(param_2 + 0x5c);
  uVar9 = *(undefined4 *)(param_2 + 0x60);
  uVar10 = *(undefined4 *)(param_2 + 100);
  uVar11 = *(undefined4 *)(param_2 + 0x68);
  uVar12 = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x58) = uVar7;
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  *(undefined4 *)(param_1 + 0x60) = uVar9;
  *(undefined4 *)(param_1 + 100) = uVar10;
  *(undefined4 *)(param_1 + 0x68) = uVar11;
  *(undefined4 *)(param_1 + 0x6c) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  FUN_1490798a0(param_1 + 0x78,param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x254);
  uVar3 = *(undefined4 *)(param_2 + 600);
  uVar4 = *(undefined4 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x254) = uVar2;
  *(undefined4 *)(param_1 + 600) = uVar3;
  *(undefined4 *)(param_1 + 0x25c) = uVar4;
  FUN_140501b78(param_1 + 0x260,param_2 + 0x260);
  lVar1 = *(longlong *)(param_2 + 0x2e0);
  *(longlong *)(param_1 + 0x2e0) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 149079816 FUN_149079816 body=137 status=ok
// SIG undefined FUN_149079816(void)

undefined2 * FUN_149079816(undefined2 *param_1,undefined2 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 10);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0xe);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 10) = uVar3;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = *(int *)(param_2 + 0x14);
  _Src = *(void **)(param_2 + 0x10);
  *(int *)(param_1 + 0x14) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x16) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x10,iVar1,0);
    memcpy(*(void **)(param_1 + 0x10),_Src,(longlong)iVar1 * 2);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)((longlong)param_1 + 0x35) = *(undefined8 *)((longlong)param_2 + 0x35);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return param_1;
}



// FUNCTION 1490798a0 FUN_1490798a0 body=253 status=ok
// SIG undefined FUN_1490798a0(void)

undefined8 * FUN_1490798a0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  FUN_140501b78(param_1 + 2,param_2 + 2);
  lVar1 = param_2[0x12];
  param_1[0x12] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[0x13] = param_2[0x13];
  FUN_140501b78(param_1 + 0x15,param_2 + 0x15);
  lVar1 = param_2[0x25];
  param_1[0x25] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = *(undefined4 *)(param_2 + 0x26);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x134);
  uVar4 = *(undefined4 *)(param_2 + 0x27);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x13c);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x144);
  uVar7 = *(undefined4 *)(param_2 + 0x29);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x14c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar6;
  *(undefined4 *)(param_1 + 0x29) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar8;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x27) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar5;
  FUN_140501b78(param_1 + 0x2a,param_2 + 0x2a);
  lVar1 = param_2[0x3a];
  param_1[0x3a] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14907999e FUN_14907999e body=115 status=ok
// SIG undefined FUN_14907999e(void)

void FUN_14907999e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 149079a11 FUN_149079a11 body=116 status=ok
// SIG undefined FUN_149079a11(void)

void FUN_149079a11(longlong param_1,longlong param_2,int param_3)

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
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar11) = *(undefined8 *)(param_2 + lVar11);
      lVar2 = *(longlong *)(param_2 + 8 + lVar11);
      *(longlong *)(param_1 + 8 + lVar11) = lVar2;
      if (((bVar10 & 1) != 0) && (lVar2 != 0)) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      uVar3 = *(undefined4 *)(lVar1 + 0x10);
      uVar4 = *(undefined4 *)(lVar1 + 0x14);
      uVar5 = *(undefined4 *)(lVar1 + 0x18);
      uVar6 = *(undefined4 *)(lVar1 + 0x1c);
      uVar7 = *(undefined4 *)(lVar1 + 0x22);
      uVar8 = *(undefined4 *)(lVar1 + 0x26);
      uVar9 = *(undefined4 *)(lVar1 + 0x2a);
      *(undefined4 *)(lVar2 + 0x1e) = *(undefined4 *)(lVar1 + 0x1e);
      *(undefined4 *)(lVar2 + 0x22) = uVar7;
      *(undefined4 *)(lVar2 + 0x26) = uVar8;
      *(undefined4 *)(lVar2 + 0x2a) = uVar9;
      *(undefined4 *)(lVar2 + 0x10) = uVar3;
      *(undefined4 *)(lVar2 + 0x14) = uVar4;
      *(undefined4 *)(lVar2 + 0x18) = uVar5;
      *(undefined4 *)(lVar2 + 0x1c) = uVar6;
      lVar11 = lVar11 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 149079a85 FUN_149079a85 body=47 status=ok
// SIG undefined FUN_149079a85(void)

void FUN_149079a85(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 149079ab4 FUN_149079ab4 body=153 status=ok
// SIG undefined FUN_149079ab4(void)

void FUN_149079ab4(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_2;
  local_58 = param_2[2];
  param_2[2] = 0;
  local_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = (undefined4)param_2[6];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = (undefined4)param_2[7];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_68[0] != 0) {
    *param_2 = 0;
  }
  local_28 = 1;
  FUN_1401a96bc(local_48,local_68,L"ReleaseHairResourceCommand",param_3);
  (*(code *)(&PTR_LAB_14a3931f0)[local_28])(local_68);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149079b4e FUN_149079b4e body=153 status=ok
// SIG undefined FUN_149079b4e(void)

void FUN_149079b4e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *param_2;
  local_58 = param_2[2];
  param_2[2] = 0;
  local_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = (undefined4)param_2[6];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = (undefined4)param_2[7];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_68[0] != 0) {
    *param_2 = 0;
  }
  local_28 = 1;
  FUN_1401a98c8(local_48,local_68,L"ReleaseHairResourceCommand",param_3);
  (*(code *)(&PTR_LAB_14a3931f0)[local_28])(local_68);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149079be8 FUN_149079be8 body=51 status=ok
// SIG undefined FUN_149079be8(void)

void FUN_149079be8(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149079c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 149079c26 FUN_149079c26 body=29 status=ok
// SIG undefined FUN_149079c26(void)

void FUN_149079c26(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149079c44 FUN_149079c44 body=71 status=ok
// SIG undefined FUN_149079c44(void)

undefined8 * FUN_149079c44(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9afd0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079c8c FUN_149079c8c body=51 status=ok
// SIG undefined FUN_149079c8c(void)

void FUN_149079c8c(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149079cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149079cca FUN_149079cca body=12 status=ok
// SIG undefined FUN_149079cca(void)

void FUN_149079cca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149079cd3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 149079cd6 FUN_149079cd6 body=29 status=ok
// SIG undefined FUN_149079cd6(void)

undefined8 FUN_149079cd6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079cf4 FUN_149079cf4 body=51 status=ok
// SIG undefined FUN_149079cf4(void)

void FUN_149079cf4(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149079d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 149079d32 FUN_149079d32 body=29 status=ok
// SIG undefined FUN_149079d32(void)

void FUN_149079d32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149079d50 FUN_149079d50 body=71 status=ok
// SIG undefined FUN_149079d50(void)

undefined8 * FUN_149079d50(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b020;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079d98 FUN_149079d98 body=51 status=ok
// SIG undefined FUN_149079d98(void)

void FUN_149079d98(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149079dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149079dd6 FUN_149079dd6 body=12 status=ok
// SIG undefined FUN_149079dd6(void)

void FUN_149079dd6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149079ddf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 149079de2 FUN_149079de2 body=29 status=ok
// SIG undefined FUN_149079de2(void)

undefined8 FUN_149079de2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079e00 FUN_149079e00 body=51 status=ok
// SIG undefined FUN_149079e00(void)

void FUN_149079e00(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149079e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 149079e3e FUN_149079e3e body=29 status=ok
// SIG undefined FUN_149079e3e(void)

void FUN_149079e3e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149079e5c FUN_149079e5c body=71 status=ok
// SIG undefined FUN_149079e5c(void)

undefined8 * FUN_149079e5c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b070;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079ea4 FUN_149079ea4 body=51 status=ok
// SIG undefined FUN_149079ea4(void)

void FUN_149079ea4(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149079ecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149079ee2 FUN_149079ee2 body=12 status=ok
// SIG undefined FUN_149079ee2(void)

void FUN_149079ee2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149079eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 149079eee FUN_149079eee body=29 status=ok
// SIG undefined FUN_149079eee(void)

undefined8 FUN_149079eee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079f0c FUN_149079f0c body=51 status=ok
// SIG undefined FUN_149079f0c(void)

void FUN_149079f0c(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x000149079f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 149079f4a FUN_149079f4a body=29 status=ok
// SIG undefined FUN_149079f4a(void)

void FUN_149079f4a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149079f68 FUN_149079f68 body=71 status=ok
// SIG undefined FUN_149079f68(void)

undefined8 * FUN_149079f68(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b0c0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149079fb0 FUN_149079fb0 body=51 status=ok
// SIG undefined FUN_149079fb0(void)

void FUN_149079fb0(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149079fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149079fee FUN_149079fee body=12 status=ok
// SIG undefined FUN_149079fee(void)

void FUN_149079fee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149079ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 149079ffa FUN_149079ffa body=29 status=ok
// SIG undefined FUN_149079ffa(void)

undefined8 FUN_149079ffa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a018 FUN_14907a018 body=51 status=ok
// SIG undefined FUN_14907a018(void)

void FUN_14907a018(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014907a048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14907a056 FUN_14907a056 body=29 status=ok
// SIG undefined FUN_14907a056(void)

void FUN_14907a056(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14907a074 FUN_14907a074 body=71 status=ok
// SIG undefined FUN_14907a074(void)

undefined8 * FUN_14907a074(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b110;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a0bc FUN_14907a0bc body=51 status=ok
// SIG undefined FUN_14907a0bc(void)

void FUN_14907a0bc(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014907a0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14907a0fa FUN_14907a0fa body=12 status=ok
// SIG undefined FUN_14907a0fa(void)

void FUN_14907a0fa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014907a103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14907a106 FUN_14907a106 body=29 status=ok
// SIG undefined FUN_14907a106(void)

undefined8 FUN_14907a106(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a124 FUN_14907a124 body=51 status=ok
// SIG undefined FUN_14907a124(void)

void FUN_14907a124(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014907a154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14907a162 FUN_14907a162 body=29 status=ok
// SIG undefined FUN_14907a162(void)

void FUN_14907a162(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14907a180 FUN_14907a180 body=71 status=ok
// SIG undefined FUN_14907a180(void)

undefined8 * FUN_14907a180(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b160;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a1c8 FUN_14907a1c8 body=51 status=ok
// SIG undefined FUN_14907a1c8(void)

void FUN_14907a1c8(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014907a1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14907a206 FUN_14907a206 body=12 status=ok
// SIG undefined FUN_14907a206(void)

void FUN_14907a206(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014907a20f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14907a212 FUN_14907a212 body=29 status=ok
// SIG undefined FUN_14907a212(void)

undefined8 FUN_14907a212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a230 FUN_14907a230 body=51 status=ok
// SIG undefined FUN_14907a230(void)

void FUN_14907a230(undefined8 *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_1;
  plVar2 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar2 = (longlong *)param_1[2];
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014907a260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14907a26e FUN_14907a26e body=29 status=ok
// SIG undefined FUN_14907a26e(void)

void FUN_14907a26e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14907a28c FUN_14907a28c body=71 status=ok
// SIG undefined FUN_14907a28c(void)

undefined8 * FUN_14907a28c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_14ba9b1b0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a2d4 FUN_14907a2d4 body=51 status=ok
// SIG undefined FUN_14907a2d4(void)

void FUN_14907a2d4(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014907a2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14907a312 FUN_14907a312 body=12 status=ok
// SIG undefined FUN_14907a312(void)

void FUN_14907a312(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014907a31b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14907a31e FUN_14907a31e body=29 status=ok
// SIG undefined FUN_14907a31e(void)

undefined8 FUN_14907a31e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907a33b FUN_14907a33b body=38 status=ok
// SIG undefined FUN_14907a33b(void)

void FUN_14907a33b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14907a362 FUN_14907a362 body=132 status=ok
// SIG undefined FUN_14907a362(void)

void FUN_14907a362(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14907a3e8 FUN_14907a3e8 body=89 status=ok
// SIG undefined FUN_14907a3e8(void)

void FUN_14907a3e8(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_145c7eaa3(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14907a442 FUN_14907a442 body=62 status=ok
// SIG undefined FUN_14907a442(void)

void FUN_14907a442(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907a480(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 14907a480 FUN_14907a480 body=93 status=ok
// SIG undefined FUN_14907a480(void)

ulonglong FUN_14907a480(uint param_1,uint param_2)

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



// FUNCTION 14907a4de FUN_14907a4de body=145 status=ok
// SIG undefined FUN_14907a4de(void)

void FUN_14907a4de(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x30;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e03];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x30,8);
  }
  uVar2 = 0x7fffffff;
  if (5 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14907a570 FUN_14907a570 body=59 status=ok
// SIG undefined FUN_14907a570(void)

longlong FUN_14907a570(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14907a5b2(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14907a5ab(lVar2);
  return lVar2;
}



// FUNCTION 14907a5ab FUN_14907a5ab body=7 status=ok
// SIG undefined FUN_14907a5ab(void)

void FUN_14907a5ab(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14907a5b2 FUN_14907a5b2 body=132 status=ok
// SIG undefined FUN_14907a5b2(void)

void FUN_14907a5b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14907a638 FUN_14907a638 body=68 status=ok
// SIG undefined FUN_14907a638(void)

void FUN_14907a638(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145c7ead4(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14907a67e(param_1,param_2);
  return;
}



// FUNCTION 14907a67e FUN_14907a67e body=108 status=ok
// SIG undefined FUN_14907a67e(void)

void FUN_14907a67e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x58)) {
      uVar2 = uVar1 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x58,8);
  }
  return;
}



// FUNCTION 14907a6ea FUN_14907a6ea body=198 status=ok
// SIG undefined FUN_14907a6ea(void)

undefined4 * FUN_14907a6ea(undefined4 *param_1,undefined4 *param_2)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  pvVar2 = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_14907a840(param_1 + 0xc,iVar1);
    memcpy(*(void **)(param_1 + 0xc),pvVar2,(longlong)iVar1 * 0x30);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  iVar1 = param_2[0x12];
  pvVar2 = *(void **)(param_2 + 0x10);
  param_1[0x12] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x13] = 0;
  }
  else {
    FUN_14907a8aa(param_1 + 0x10,iVar1);
    memcpy(*(void **)(param_1 + 0x10),pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  return param_1;
}



// FUNCTION 14907a7b0 FUN_14907a7b0 body=143 status=ok
// SIG undefined FUN_14907a7b0(void)

void FUN_14907a7b0(longlong param_1,int param_2)

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



// FUNCTION 14907a840 FUN_14907a840 body=105 status=ok
// SIG undefined FUN_14907a840(void)

undefined8 FUN_14907a840(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x30,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x30)) {
    uVar5 = uVar2 / 0x30 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x30,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14907a8aa FUN_14907a8aa body=106 status=ok
// SIG undefined FUN_14907a8aa(void)

undefined8 FUN_14907a8aa(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x18)) {
    uVar5 = uVar2 / 0x18 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x18,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 14907a914 FUN_14907a914 body=182 status=ok
// SIG undefined FUN_14907a914(void)

void FUN_14907a914(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_147d70bba(param_1,iVar3);
    }
    FUN_14907aa83((longlong)iVar3 * 8 + *param_1,param_2 - iVar3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_147d70ac1(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_14907aa96(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14907a9cc FUN_14907a9cc body=182 status=ok
// SIG undefined FUN_14907a9cc(void)

void FUN_14907a9cc(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1[1];
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_14907ab44(param_1,iVar3);
    }
    FUN_14907ab31((longlong)iVar3 * 8 + *param_1,param_2 - iVar3);
    return;
  }
  if (-1 < (int)param_2) {
    iVar2 = iVar3 - param_2;
    if (iVar2 == 0 || iVar3 < (int)param_2) {
      return;
    }
    _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
    FUN_14907ac08(_Dst,iVar2);
    iVar1 = (int)param_1[1] - iVar3;
    if (iVar1 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - iVar2;
    FUN_14907abca(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14907aa83 FUN_14907aa83 body=19 status=ok
// SIG undefined FUN_14907aa83(void)

void FUN_14907aa83(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14907aa96 FUN_14907aa96 body=62 status=ok
// SIG undefined FUN_14907aa96(void)

void FUN_14907aa96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907aad4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14907aad4 FUN_14907aad4 body=93 status=ok
// SIG undefined FUN_14907aad4(void)

ulonglong FUN_14907aad4(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14907ab31 FUN_14907ab31 body=19 status=ok
// SIG undefined FUN_14907ab31(void)

void FUN_14907ab31(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 14907ab44 FUN_14907ab44 body=132 status=ok
// SIG undefined FUN_14907ab44(void)

void FUN_14907ab44(longlong param_1,int param_2)

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



// FUNCTION 14907abca FUN_14907abca body=62 status=ok
// SIG undefined FUN_14907abca(void)

void FUN_14907abca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907ac4c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14907ac08 FUN_14907ac08 body=67 status=ok
// SIG undefined FUN_14907ac08(void)

void FUN_14907ac08(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      lVar4 = lVar4 + 1;
    } while (param_2 != (int)lVar4);
  }
  return;
}



// FUNCTION 14907ac4c FUN_14907ac4c body=93 status=ok
// SIG undefined FUN_14907ac4c(void)

ulonglong FUN_14907ac4c(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14907acaa FUN_14907acaa body=38 status=ok
// SIG undefined FUN_14907acaa(void)

undefined8 FUN_14907acaa(undefined8 param_1,int param_2)

{
  FUN_146679c56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14907ad03 FUN_14907ad03 body=27 status=ok
// SIG undefined FUN_14907ad03(void)

void FUN_14907ad03(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 14907ad1e FUN_14907ad1e body=147 status=ok
// SIG undefined FUN_14907ad1e(void)

void FUN_14907ad1e(longlong param_1,int param_2)

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



// FUNCTION 14907adb2 FUN_14907adb2 body=62 status=ok
// SIG undefined FUN_14907adb2(void)

void FUN_14907adb2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907adf0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 14907adf0 FUN_14907adf0 body=112 status=ok
// SIG undefined FUN_14907adf0(void)

ulonglong FUN_14907adf0(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14907ae2a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14907ae2a:
  return param_2 & 0xffffffff;
}



// FUNCTION 14907ae60 FUN_14907ae60 body=23 status=ok
// SIG undefined FUN_14907ae60(void)

void FUN_14907ae60(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 14907ae78 FUN_14907ae78 body=147 status=ok
// SIG undefined FUN_14907ae78(void)

void FUN_14907ae78(longlong param_1,int param_2)

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



// FUNCTION 14907af0c FUN_14907af0c body=62 status=ok
// SIG undefined FUN_14907af0c(void)

void FUN_14907af0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907af4a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 14907af4a FUN_14907af4a body=112 status=ok
// SIG undefined FUN_14907af4a(void)

ulonglong FUN_14907af4a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14907af84;
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
LAB_14907af84:
  return param_2 & 0xffffffff;
}



// FUNCTION 14907afba FUN_14907afba body=98 status=ok
// SIG undefined FUN_14907afba(void)

void FUN_14907afba(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14907b01c FUN_14907b01c body=11 status=ok
// SIG undefined FUN_14907b01c(void)

void FUN_14907b01c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14907b028 FUN_14907b028 body=132 status=ok
// SIG undefined FUN_14907b028(void)

void FUN_14907b028(longlong param_1,int param_2)

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



// FUNCTION 14907b0ae FUN_14907b0ae body=132 status=ok
// SIG undefined FUN_14907b0ae(void)

void FUN_14907b0ae(longlong param_1,int param_2)

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



// FUNCTION 14907b134 FUN_14907b134 body=62 status=ok
// SIG undefined FUN_14907b134(void)

void FUN_14907b134(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14907b172(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14907b172 FUN_14907b172 body=93 status=ok
// SIG undefined FUN_14907b172(void)

ulonglong FUN_14907b172(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14907b1d0 FUN_14907b1d0 body=48 status=ok
// SIG undefined FUN_14907b1d0(void)

void FUN_14907b1d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 14907b200 FUN_14907b200 body=467 status=ok
// SIG undefined FUN_14907b200(void)

void FUN_14907b200(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907b3d4 FUN_14907b3d4 body=559 status=ok
// SIG undefined FUN_14907b3d4(void)

void FUN_14907b3d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907b604 FUN_14907b604 body=467 status=ok
// SIG undefined FUN_14907b604(void)

void FUN_14907b604(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_2c;
  undefined8 local_28;
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
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
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
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907b7d8 FUN_14907b7d8 body=559 status=ok
// SIG undefined FUN_14907b7d8(void)

void FUN_14907b7d8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907ba0e FUN_14907ba0e body=155 status=ok
// SIG undefined FUN_14907ba0e(void)

void FUN_14907ba0e(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14907baaa(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907baaa FUN_14907baaa body=79 status=ok
// SIG undefined FUN_14907baaa(void)

undefined8 FUN_14907baaa(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x218) != 0)) {
    uVar2 = FUN_140919df9(0,*(undefined2 *)
                             (&DAT_14ca85070 +
                             (longlong)*(int *)(*(longlong *)(lVar1 + 0x218) + 8) * 2));
    return uVar2;
  }
  return 0;
}



// FUNCTION 14907bafc FUN_14907bafc body=42 status=ok
// SIG undefined FUN_14907bafc(void)

void FUN_14907bafc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14907bb2e FUN_14907bb2e body=96 status=ok
// SIG undefined FUN_14907bb2e(void)

undefined8 FUN_14907bb2e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f1ff16();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbf8c88,1);
  return uVar3;
}



// FUNCTION 14907bb8e FUN_14907bb8e body=52 status=ok
// SIG undefined FUN_14907bb8e(void)

void FUN_14907bb8e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14907bbc6 FUN_14907bbc6 body=75 status=ok
// SIG undefined FUN_14907bbc6(void)

void FUN_14907bbc6(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14907bc12(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907bc12 FUN_14907bc12 body=236 status=ok
// SIG undefined FUN_14907bc12(void)

void FUN_14907bc12(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switchD_143c3d4dc::caseD_21();
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(longlong *)(param_1 + 0x30) = param_2[8];
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  local_2c = *(int *)(param_1 + 0x80);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_14907bd00(param_1 + 0x78);
  }
  if (0 < local_2c) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      FUN_14907bd7c(*(longlong *)(param_1 + 0x78) + lVar3,param_2,param_1);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x30;
    } while (lVar4 < local_2c);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907bd00 FUN_14907bd00 body=122 status=ok
// SIG undefined FUN_14907bd00(void)

void FUN_14907bd00(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1490892c2(param_1,iVar1);
    }
    FUN_14908927f((longlong)iVar1 * 0x30 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_149089356(param_1,param_2,iVar1 - param_2);
    FUN_1490893bc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14907bd7c FUN_14907bd7c body=216 status=ok
// SIG undefined FUN_14907bd7c(void)

void FUN_14907bd7c(undefined4 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14688874a(param_1 + 2,0x400);
  FUN_140430222(param_1 + 2,param_2,param_3,0,1,0);
  return;
}



// FUNCTION 14907be5a FUN_14907be5a body=77 status=ok
// SIG undefined FUN_14907be5a(void)

void FUN_14907be5a(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1427dc336(local_20);
  switchD_143c3d4dc::caseD_3d(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907bea8 FUN_14907bea8 body=6 status=ok
// SIG undefined FUN_14907bea8(void)

undefined4 FUN_14907bea8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 14907beae FUN_14907beae body=127 status=ok
// SIG undefined FUN_14907beae(void)

int FUN_14907beae(longlong param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  fVar4 = (float)param_2;
  fVar1 = *(float *)(param_1 + 0x5c);
  if ((fVar1 == 0.0) && (!NAN(fVar1))) {
    return 0;
  }
  if (param_3 == '\0') {
    fVar5 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 100);
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x60) + -0.0001;
    auVar7._8_4_ = in_XMM1_Dc;
    auVar7._0_8_ = param_2;
    auVar7._12_4_ = in_XMM1_Dd;
    auVar6._4_12_ = auVar7._4_12_;
    auVar6._0_4_ = fVar4 / fVar5;
    auVar7 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),1);
    fVar4 = fVar4 - auVar7._0_4_ * fVar5;
  }
  iVar2 = *(int *)(param_1 + 0x58) + -1;
  iVar3 = (int)ROUND(fVar4 / fVar1 + fVar4 / fVar1 + -0.5) >> 1;
  if (iVar2 <= iVar3) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 14907bf2e FUN_14907bf2e body=267 status=ok
// SIG undefined FUN_14907bf2e(void)

void FUN_14907bf2e(longlong param_1,undefined8 param_2,char param_3,int *param_4,int *param_5,
                  float *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 != 0) {
    fVar8 = *(float *)(param_1 + 0x60) + -0.0001;
    fVar7 = 0.0;
    if ((fVar8 != 0.0) || (NAN(fVar8))) {
      fVar5 = in_XMM1._0_4_;
      iVar2 = FUN_14907beae(param_1);
      *param_4 = iVar2;
      iVar4 = iVar4 + -1;
      iVar3 = iVar2 + 1;
      if (iVar4 <= iVar2 + 1) {
        iVar3 = iVar4;
      }
      *param_5 = iVar3;
      fVar1 = *(float *)(param_1 + 0x5c);
      if (1e-08 < ABS(fVar1)) {
        if (param_3 == '\0') {
          fVar7 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 100);
          if (fVar7 <= fVar5) {
            fVar5 = fVar7;
          }
          if (fVar5 <= 0.0) {
            fVar5 = 0.0;
          }
        }
        else {
          auVar6._4_12_ = in_XMM1._4_12_;
          auVar6._0_4_ = fVar5 / fVar8;
          auVar6 = roundps(auVar6,ZEXT416((uint)auVar6._0_4_),1);
          fVar5 = fVar5 - auVar6._0_4_ * fVar8;
        }
        fVar7 = (fVar5 - (float)*param_4 * fVar1) / fVar1;
      }
      goto LAB_14907bf8b;
    }
  }
  *param_4 = 0;
  *param_5 = 0;
  fVar7 = 0.0;
LAB_14907bf8b:
  *param_6 = fVar7;
  return;
}



// FUNCTION 14907c03a FUN_14907c03a body=334 status=ok
// SIG undefined FUN_14907c03a(void)

void FUN_14907c03a(longlong param_1,float param_2,float param_3,undefined4 param_4,longlong *param_5
                  )

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_2;
  if (param_2 <= param_3) {
    fVar5 = param_3;
  }
  uVar4 = -(uint)(fVar5 - param_2 < *(float *)(param_1 + 0x5c));
  fVar6 = (float)(~uVar4 & (uint)fVar5 | (uint)(*(float *)(param_1 + 0x5c) + param_2) & uVar4);
  uVar4 = FUN_14907beae(fVar5,param_2,param_4);
  uVar2 = FUN_14907beae(param_1,fVar6,param_4);
  if ((char)param_4 != '\0') {
    if ((uVar4 == uVar2) || (*(float *)(param_1 + 0x60) <= fVar6 - param_2)) {
      if (*(int *)(param_1 + 0x80) < 1) {
        return;
      }
      iVar3 = 0;
      do {
        iVar1 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_5,iVar1);
        }
        *(int *)(*param_5 + (longlong)iVar1 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x80));
      return;
    }
    if (uVar2 < uVar4) {
      for (; (int)uVar4 < *(int *)(param_1 + 0x58); uVar4 = uVar4 + 1) {
        iVar3 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
          FUN_1446f48e2(param_5,iVar3);
        }
        *(uint *)(*param_5 + (longlong)iVar3 * 4) = uVar4;
      }
      iVar3 = 0;
      do {
        iVar1 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
          FUN_1446f48e2(param_5,iVar1);
        }
        *(int *)(*param_5 + (longlong)iVar1 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (uVar2 + 1 != iVar3);
      return;
    }
  }
  if (uVar4 <= uVar2) {
    do {
      iVar3 = (int)param_5[1];
      *(uint *)(param_5 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar3 + 1U) {
        FUN_1446f48e2(param_5,iVar3);
      }
      *(uint *)(*param_5 + (longlong)iVar3 * 4) = uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar2 + 1 != uVar4);
  }
  return;
}



// FUNCTION 14907c188 FUN_14907c188 body=404 status=ok
// SIG undefined FUN_14907c188(void)

void FUN_14907c188(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong unaff_RBP;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [36];
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)((longlong)param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,1);
  }
  else {
    *(undefined1 *)(param_1 + 2) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  local_44 = (int)param_1[1];
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_44);
    }
  }
  else {
    local_44 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_14907c6ce(param_1);
  }
  if (0 < local_44) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      lVar5 = *param_1;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),(char)param_1[2]);
      FUN_140119d96(param_2,lVar5 + lVar6 + 0x68);
      FUN_14907c5cc(lVar5 + lVar6,param_2,unaff_RBP & 0xffffffff);
      FUN_14907c626(lVar5 + lVar6 + 0x50,param_2);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0xa0;
    } while (lVar7 < local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907c31e FUN_14907c31e body=251 status=ok
// SIG undefined FUN_14907c31e(void)

void FUN_14907c31e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 3);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[4];
    *(uint *)(param_1 + 4) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 3,iVar1);
    }
    *(longlong *)(param_1[3] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907c41a FUN_14907c41a body=172 status=ok
// SIG undefined FUN_14907c41a(void)

longlong FUN_14907c41a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_14907c45d:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_14907c47f;
        }
        else {
          if (lVar3 != 0) goto LAB_14907c45d;
LAB_14907c47f:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x20));
  }
  return 0;
}



// FUNCTION 14907c4c6 FUN_14907c4c6 body=256 status=ok
// SIG undefined FUN_14907c4c6(void)

void FUN_14907c4c6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x20);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_14907c513:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_14907c535;
        }
        else {
          if (lVar5 != 0) goto LAB_14907c513;
LAB_14907c535:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x20);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x20);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x20);
            }
            *(int *)(param_1 + 0x20) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x18));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 14907c5cc FUN_14907c5cc body=89 status=ok
// SIG undefined FUN_14907c5cc(void)

void FUN_14907c5cc(longlong param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_146c978d6(param_2,param_1);
  }
  if ((param_3 & 2) != 0) {
    FUN_146db24e8(param_2,param_1 + 0x10);
  }
  if ((param_3 & 4) == 0) {
    return;
  }
  FUN_14908946a(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 14907c626 FUN_14907c626 body=167 status=ok
// SIG undefined FUN_14907c626(void)

void FUN_14907c626(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x10),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x14),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146db24e8(param_2,param_1);
  return;
}



// FUNCTION 14907c6ce FUN_14907c6ce body=122 status=ok
// SIG undefined FUN_14907c6ce(void)

void FUN_14907c6ce(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_149089616(param_1,iVar1);
    }
    FUN_1490896aa((longlong)iVar1 * 0xa0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_1490896e4(param_1,param_2,iVar1 - param_2);
    FUN_14908974a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14907c74a FUN_14907c74a body=336 status=ok
// SIG undefined FUN_14907c74a(void)

undefined8 * FUN_14907c74a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15) = 0;
  param_1[0x2d] = puVar1;
  param_1[0x2c] = puVar1;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x38] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x39));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x39),4000);
  return param_1;
}



// FUNCTION 14907c89a FUN_14907c89a body=943 status=ok
// SIG undefined FUN_14907c89a(void)

void FUN_14907c89a(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  uint local_e0;
  int iStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  longlong *local_c8;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14907cc4a(param_1,0);
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_1490897f8(local_98,param_1 + 0x170);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar4 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar4 = local_70;
  }
  local_e0 = local_a8;
  iStack_dc = iStack_a4;
  local_d8 = local_a0;
  local_d4 = local_9c;
  local_f0 = local_b8;
  local_e8 = local_b0;
  local_f8 = local_98;
  if ((iStack_a4 != iVar4) || (local_b0 != local_88)) {
    do {
      puVar2 = *(undefined8 **)(*local_f8 + (longlong)iStack_dc * 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_e0 = local_e0 & ~local_f0._4_4_;
      FUN_1449c0562(&local_f0);
    } while (local_f8 != local_98 || (local_e8 != local_88 || iStack_dc != iVar4));
  }
  plVar1 = (longlong *)(param_1 + 0x108);
  local_b0 = (undefined1 *)(param_1 + 0x118);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  if (*(int *)(param_1 + 0x130) != 0) {
    FUN_1449c0562(&local_b8);
  }
  local_e0 = local_a8;
  iStack_dc = iStack_a4;
  local_d8 = local_a0;
  local_d4 = local_9c;
  local_f0 = local_b8;
  local_e8 = local_b0;
  local_c0 = 0;
  local_f8 = plVar1;
  local_d0 = plVar1;
  local_c8 = plVar1;
  if (iStack_a4 < *(int *)((longlong)local_b0 + 0x18)) {
    do {
      plVar3 = *(longlong **)(*local_f8 + 8 + (longlong)iStack_dc * 0x28);
      if (plVar3 != (longlong *)0x0) {
        FUN_149084299(*plVar3,(int)plVar3[1]);
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      local_e0 = local_e0 & ~local_f0._4_4_;
      FUN_1449c0562(&local_f0);
    } while (iStack_dc < *(int *)((longlong)local_e8 + 0x18));
    if (((local_c0 & 1) != 0) && (local_c0._1_1_ == '\x01')) {
      FUN_1490898e6(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34));
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(local_98);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_14017e2da(param_1 + 0x170);
  while (*(undefined8 **)(param_1 + 0x168) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x168) = **(undefined8 **)(param_1 + 0x168);
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  FUN_149084616(plVar1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x18);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907cc4a FUN_14907cc4a body=903 status=ok
// SIG undefined FUN_14907cc4a(void)

ulonglong FUN_14907cc4a(longlong param_1,float param_2)

{
  LARGE_INTEGER LVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_e8 [40];
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  undefined2 local_88;
  LARGE_INTEGER local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  if ((param_2 != 0.0) || (NAN(param_2))) {
    QueryPerformanceCounter(&local_c0);
    dVar3 = (double)local_c0.QuadPart * DAT_14c83f420;
    local_c0.QuadPart = param_1 + 0x108;
    local_78 = param_1 + 0x118;
    local_80.QuadPart = 0x100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_70;
    iStack_a4 = iStack_6c;
    local_a0 = local_68;
    local_9c = local_64;
    local_b8.s = local_80.s;
    local_b0 = local_78;
    local_88 = 0;
    local_98.QuadPart = local_c0.QuadPart;
    local_90.QuadPart = local_c0.QuadPart;
    if (*(int *)(local_78 + 0x18) <= iStack_6c) goto LAB_14907cf5e;
    do {
      if (*(longlong *)(*(longlong *)local_c0 + 0x10 + (longlong)iStack_a4 * 0x28) != 0) {
        QueryPerformanceCounter(&local_80);
        if (((float)(((double)param_2 + dVar3 + 16777216.0) -
                    ((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0)) < 0.001) ||
           (cVar4 = (**(code **)(**(longlong **)
                                   (*(longlong *)local_c0 + 0x10 + (longlong)iStack_a4 * 0x28) +
                                0x10))(), cVar4 == '\0')) {
          if (((char)local_88 == '\x01') && (local_88._1_1_ == '\x01')) {
            FUN_1490898e6(local_90.QuadPart,
                          *(int *)(local_90.QuadPart + 8) - *(int *)(local_90.QuadPart + 0x34));
          }
          uVar5 = 0;
          goto LAB_14907cf61;
        }
        FUN_144417a68(param_1);
      }
      local_a8 = local_a8 & ~local_b8.s.HighPart;
      FUN_1449c0562(&local_b8);
    } while (iStack_a4 < *(int *)(local_b0 + 0x18));
  }
  else {
    LVar1.QuadPart = param_1 + 0x108;
    local_78 = param_1 + 0x118;
    local_80.QuadPart = 0x100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x130) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_70;
    iStack_a4 = iStack_6c;
    local_a0 = local_68;
    local_9c = local_64;
    local_b8.s = local_80.s;
    local_b0 = local_78;
    local_88 = 0;
    local_c0.QuadPart = LVar1.QuadPart;
    local_98.QuadPart = LVar1.QuadPart;
    local_90.QuadPart = LVar1.QuadPart;
    if (*(int *)(local_78 + 0x18) <= iStack_6c) goto LAB_14907cf5e;
    do {
      plVar2 = *(longlong **)(*(longlong *)local_c0 + 0x10 + (longlong)iStack_a4 * 0x28);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,0);
        FUN_144417a68(param_1);
      }
      local_a8 = local_a8 & ~local_b8.s.HighPart;
      FUN_1449c0562(&local_b8);
    } while (iStack_a4 < *(int *)(local_b0 + 0x18));
  }
  if (((local_88 & 1) != 0) && (local_88._1_1_ == '\x01')) {
    FUN_1490898e6(local_90.QuadPart,
                  *(int *)(local_90.QuadPart + 8) - *(int *)(local_90.QuadPart + 0x34));
  }
LAB_14907cf5e:
  uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_14907cf61:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14907cfd2 FUN_14907cfd2 body=170 status=ok
// SIG undefined FUN_14907cfd2(void)

longlong * FUN_14907cfd2(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  plVar1 = (longlong *)FUN_149089ace(param_1 + 0x108,param_2,&local_34);
  *(undefined4 *)((longlong)plVar1 + 0x14) = *param_3;
  if (*plVar1 == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *plVar1 = (longlong)puVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c8));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907d07e FUN_14907d07e body=79 status=ok
// SIG undefined FUN_14907d07e(void)

void FUN_14907d07e(longlong *param_1)

{
  longlong *plVar1;
  
  if ((param_1[1] == 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
    FUN_149084299(*plVar1,(int)plVar1[1]);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14907d0ce FUN_14907d0ce body=528 status=ok
// SIG undefined FUN_14907d0ce(void)

undefined8 * FUN_14907d0ce(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_149089e80(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_14906e754(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar1 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar3 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar3 = param_3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)param_3[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ulonglong *)(*param_3 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_14907d24c;
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_3 + 8);
          } while (iVar2 != -1);
        }
      }
      FUN_14906e406(param_2,&local_58,*local_80 + (longlong)iStack_64 * 0x10,0);
LAB_14907d24c:
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907d2e0 FUN_14907d2e0 body=93 status=ok
// SIG undefined FUN_14907d2e0(void)

longlong FUN_14907d2e0(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14908a01e(param_1);
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



// FUNCTION 14907d33e FUN_14907d33e body=80 status=ok
// SIG undefined FUN_14907d33e(void)

bool FUN_14907d33e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    param_2[2] = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(lVar1 + 0x10);
    *param_2 = *(undefined8 *)(lVar1 + 8);
    param_2[1] = uVar3;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x15) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 14907d38e FUN_14907d38e body=847 status=ok
// SIG undefined FUN_14907d38e(void)

undefined8 FUN_14907d38e(longlong param_1,float param_2)

{
  LARGE_INTEGER LVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [40];
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  longlong local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  undefined2 local_88;
  LARGE_INTEGER local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if ((param_2 != 0.0) || (NAN(param_2))) {
    QueryPerformanceCounter(&local_c0);
    dVar2 = (double)local_c0.QuadPart * DAT_14c83f420;
    local_c0.QuadPart = param_1 + 0x10;
    local_78 = param_1 + 0x20;
    local_80.QuadPart = 0x100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_b8.s = local_80.s;
    local_b0 = local_78;
    local_a8 = local_70;
    iStack_a4 = iStack_6c;
    local_a0 = local_68;
    local_9c = local_64;
    local_88 = 0;
    uVar4 = 0;
    local_98.QuadPart = local_c0.QuadPart;
    local_90.QuadPart = local_c0.QuadPart;
    if (iStack_6c < *(int *)(local_78 + 0x18)) {
      uVar4 = 1;
      do {
        QueryPerformanceCounter(&local_80);
        if ((float)(((double)param_2 + dVar2 + 16777216.0) -
                   ((double)local_80.QuadPart * DAT_14c83f420 + 16777216.0)) < 0.001)
        goto LAB_14907d639;
        cVar3 = FUN_14907cc4a(*(undefined8 *)
                               (*(longlong *)local_c0 + 8 + (longlong)iStack_a4 * 0x18));
        if (cVar3 == '\0') goto LAB_14907d639;
        local_a8 = local_a8 & ~local_b8.s.HighPart;
        FUN_1449c0562(&local_b8);
      } while (iStack_a4 < *(int *)(local_b0 + 0x18));
      uVar4 = 0;
LAB_14907d639:
      if (((local_88 & 1) != 0) && (local_88._1_1_ == '\x01')) {
        FUN_14908a12c(local_90.QuadPart,
                      *(int *)(local_90.QuadPart + 8) - *(int *)(local_90.QuadPart + 0x34));
      }
    }
  }
  else {
    LVar1.QuadPart = param_1 + 0x10;
    local_78 = param_1 + 0x20;
    local_80.QuadPart = 0x100000000;
    local_70 = 0xffffffff;
    iStack_6c = 0;
    local_68 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      FUN_1449c0562(&local_80);
    }
    local_a8 = local_70;
    iStack_a4 = iStack_6c;
    local_a0 = local_68;
    local_9c = local_64;
    local_b8.s = local_80.s;
    local_b0 = local_78;
    local_88 = 0;
    local_c0.QuadPart = LVar1.QuadPart;
    local_98.QuadPart = LVar1.QuadPart;
    local_90.QuadPart = LVar1.QuadPart;
    if (iStack_6c < *(int *)(local_78 + 0x18)) {
      do {
        FUN_14907cc4a(*(undefined8 *)(*(longlong *)local_c0 + 8 + (longlong)iStack_a4 * 0x18),0);
        local_a8 = local_a8 & ~local_b8.s.HighPart;
        FUN_1449c0562(&local_b8);
      } while (iStack_a4 < *(int *)(local_b0 + 0x18));
      if (((local_88 & 1) != 0) && (local_88._1_1_ == '\x01')) {
        FUN_14908a12c(local_90.QuadPart,
                      *(int *)(local_90.QuadPart + 8) - *(int *)(local_90.QuadPart + 0x34));
      }
    }
    uVar4 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907d6de FUN_14907d6de body=891 status=ok
// SIG undefined FUN_14907d6de(void)

void FUN_14907d6de(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  longlong lVar6;
  int iVar7;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_108 [40];
  LPCRITICAL_SECTION local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  undefined8 local_c8;
  ulonglong *local_c0;
  ulonglong **local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  ulonglong *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x110);
  local_d0 = param_2;
  local_c8 = param_3;
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar6 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      lVar6 = *(longlong *)(param_1 + 0x10);
      do {
        if (*(ulonglong *)(lVar6 + (longlong)iVar7 * 0x18) == param_2) goto LAB_14907d8df;
        iVar7 = *(int *)(lVar6 + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  puVar5 = (ulonglong *)(param_1 + 0xb0);
  lVar6 = param_1 + 0xc0;
  local_c0 = (ulonglong *)0x100000000;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  iVar7 = 0;
  local_e0 = lpCriticalSection;
  local_b8 = (ulonglong **)lVar6;
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_1449c0562(&local_c0);
    iVar7 = *(int *)(param_1 + 0xd8);
  }
  local_80 = local_b0;
  uVar2 = local_80;
  local_78 = CONCAT44(local_a4,local_a8);
  uStack_90 = (ulonglong **)local_c0;
  local_88 = (longlong)local_b8;
  local_80._4_4_ = (int)((ulonglong)local_b0 >> 0x20);
  local_98 = puVar5;
  if ((local_80._4_4_ != iVar7) || (local_b8 != (ulonglong **)lVar6)) {
    iVar4 = local_80._4_4_;
    local_80 = uVar2;
    do {
      puVar1 = *(ulonglong **)(*local_98 + (longlong)iVar4 * 0x10);
      if (*puVar1 == param_2) {
        local_d8 = puVar1;
        FUN_14907da5a(puVar5,puVar1);
        uVar2 = local_80;
        if (puVar1 != (ulonglong *)0x0) goto LAB_14907d84b;
        break;
      }
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
      FUN_1449c0562(&uStack_90);
      iVar4 = local_80._4_4_;
      uVar2 = local_80;
    } while (local_98 != puVar5 || (local_88 != lVar6 || local_80._4_4_ != iVar7));
  }
  local_80 = uVar2;
  puVar5 = (ulonglong *)FUN_14001cc68(0x1f0,0x10);
  FUN_14907c74a(puVar5,param_2);
  local_d8 = puVar5;
LAB_14907d84b:
  uStack_90 = &local_d8;
  local_98 = &local_d0;
  FUN_14908ae2c((longlong *)(param_1 + 0x10),&local_c0,&local_98);
  local_78 = 0;
  local_70 = 0;
  local_98 = (ulonglong *)0x0;
  uStack_90 = (ulonglong **)0x0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_c0 = &local_d0;
  local_b8 = &local_98;
  FUN_14908b14c(param_1 + 0x60,local_9c,&local_c0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14908b7a6(&local_98);
  param_2 = local_d0;
  lpCriticalSection = local_e0;
LAB_14907d8df:
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar6 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xa0);
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x60) + (longlong)iVar7 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar7 * 0x60) == param_2)
        goto LAB_14907d93f;
        iVar7 = *(int *)(lVar6 + 0x58);
      } while (iVar7 != -1);
    }
  }
  lVar6 = 0;
LAB_14907d93f:
  FUN_14908b834(lVar6 + 8,&local_98,&local_c8);
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14907da5a FUN_14907da5a body=132 status=ok
// SIG undefined FUN_14907da5a(void)

void FUN_14907da5a(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14908add2(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14907dade FUN_14907dade body=459 status=ok
// SIG undefined FUN_14907dade(void)

void FUN_14907dade(longlong param_1,ulonglong param_2,undefined8 param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong *puVar7;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    uVar4 = uVar4 >> 0x10 ^ uVar4;
    lVar5 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & uVar4) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x60);
      do {
        lVar1 = lVar5 + (longlong)iVar6 * 0x60;
        if (*(ulonglong *)(lVar5 + (longlong)iVar6 * 0x60) == param_2) {
          if ((lVar1 + 8 != 0 && lVar1 != 0) &&
             (FUN_14907dcaa(lVar1 + 8,param_3), *(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c))) {
            if (*(int *)(param_1 + 0x18) == *(int *)(param_1 + 0x44)) goto LAB_14907dc22;
            lVar5 = param_1 + 0x48;
            if (*(longlong *)(param_1 + 0x50) != 0) {
              lVar5 = *(longlong *)(param_1 + 0x50);
            }
            iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar4) * 4);
            if (iVar6 == -1) goto LAB_14907dc22;
            goto LAB_14907dc39;
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x58);
      } while (iVar6 != -1);
    }
  }
  goto LAB_14907db1f;
  while (iVar6 = (int)puVar2[2], iVar6 != -1) {
LAB_14907dc39:
    puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
    if (*puVar2 == param_2) {
      puVar7 = puVar2 + 1;
      if (puVar7 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
        uVar3 = *puVar7;
        *(undefined4 *)(uVar3 + 0x10) = 0;
        if (*(int *)(uVar3 + 0x14) != 0) {
          FUN_14481578e(uVar3 + 8,0);
        }
        FUN_14908a748(param_1 + 0xb0,local_44,puVar7);
        FUN_14908bd7a((longlong *)(param_1 + 0x10),param_2);
      }
      break;
    }
  }
LAB_14907dc22:
  FUN_14908be56((longlong *)(param_1 + 0x60),param_2);
LAB_14907db1f:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014907db45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return;
}



// FUNCTION 14907dcaa FUN_14907dcaa body=132 status=ok
// SIG undefined FUN_14907dcaa(void)

void FUN_14907dcaa(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14908bd20(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14907dd2e FUN_14907dd2e body=136 status=ok
// SIG undefined FUN_14907dd2e(void)

void FUN_14907dd2e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x668) != 0)) {
    FUN_14908bf90(param_1 + 0x100,&local_28);
    FUN_14907d6de(param_1,*(undefined8 *)(param_2 + 0x668),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907ddca FUN_14907ddca body=113 status=ok
// SIG undefined FUN_14907ddca(void)

void FUN_14907ddca(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  if (param_2 != 0) {
    local_20 = &local_28;
    FUN_14908c082(param_1 + 0x100);
    if (*(longlong *)(local_28 + 0x668) != 0) {
      FUN_14907dade(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907de3c FUN_14907de3c body=221 status=ok
// SIG undefined FUN_14907de3c(void)

void FUN_14907de3c(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar2 = *(ulonglong *)(param_2 + 0x668);
  if (uVar2 == 0) {
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*puVar1 == uVar2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            FUN_144417694(puVar1[1],param_2);
          }
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014907de7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x110));
  return;
}



// FUNCTION 14907df1a FUN_14907df1a body=157 status=ok
// SIG undefined FUN_14907df1a(void)

void FUN_14907df1a(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  local_70 = 0;
  FUN_14485c47a(&local_70,param_2);
  local_58 = 0;
  local_48 = &PTR_LAB_14baa3630;
  local_38 = local_70;
  local_68 = FUN_14442998e;
  local_40 = param_1;
  FUN_1407461b0(1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907dfcc FUN_14907dfcc body=156 status=ok
// SIG undefined FUN_14907dfcc(void)

void FUN_14907dfcc(undefined8 param_1,longlong param_2)

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
  FUN_14907e06a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e06a FUN_14907e06a body=239 status=ok
// SIG undefined FUN_14907e06a(void)

void FUN_14907e06a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_40 = 0;
    FUN_14485c47a();
    iVar1 = *(int *)(param_1 + 0x6a0);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x698);
      uVar4 = 0;
      do {
        cVar3 = FUN_1480b7750(lVar2 + uVar4,&local_40);
        if (cVar3 != '\0') {
          if ((int)(~uVar4 >> 3) != 0) goto LAB_14907e127;
          break;
        }
        uVar4 = uVar4 + 8;
      } while ((longlong)iVar1 * 8 != uVar4);
    }
    local_40 = 0;
    FUN_14485c47a(&local_40,param_2);
    iVar1 = *(int *)(param_1 + 0x6a0);
    *(uint *)(param_1 + 0x6a0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x6a4) < iVar1 + 1U) {
      FUN_14181f664((longlong *)(param_1 + 0x698),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x698) + (longlong)iVar1 * 8) = local_40;
  }
LAB_14907e127:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14907e1ae FUN_14907e1ae body=208 status=ok
// SIG undefined FUN_14907e1ae(void)

void FUN_14907e1ae(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
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
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x678) <= local_24)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x670) + (longlong)local_24 * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
      FUN_1456cec3c(lVar1);
    }
  }
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e2d6 FUN_14907e2d6 body=156 status=ok
// SIG undefined FUN_14907e2d6(void)

void FUN_14907e2d6(undefined8 param_1,longlong param_2)

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
  FUN_14907e374(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e374 FUN_14907e374 body=128 status=ok
// SIG undefined FUN_14907e374(void)

void FUN_14907e374(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x688) != param_2)) {
    if (*(char *)(param_1 + 0x872) != '\x01') {
LAB_14907e3c2:
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(param_1 + 0x688) = param_2;
      FUN_14441a6a0(param_1,0);
      return;
    }
    cVar1 = FUN_144411c14(param_2,0,1);
    if (cVar1 != '\0') {
      cVar1 = FUN_144411a1a(*(undefined8 *)(param_1 + 0x660),param_2,
                            *(undefined1 *)(param_1 + 0x872));
      if (cVar1 != '\0') goto LAB_14907e3c2;
    }
  }
  return;
}



// FUNCTION 14907e3f8 FUN_14907e3f8 body=158 status=ok
// SIG undefined FUN_14907e3f8(void)

void FUN_14907e3f8(undefined8 param_1,longlong param_2)

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
  FUN_1444199de(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e498 FUN_14907e498 body=166 status=ok
// SIG undefined FUN_14907e498(void)

void FUN_14907e498(longlong param_1,longlong param_2)

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
  FUN_14908044c(param_1,local_20,*(undefined8 *)(param_1 + 0x688),1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e540 FUN_14907e540 body=156 status=ok
// SIG undefined FUN_14907e540(void)

void FUN_14907e540(undefined8 param_1,longlong param_2)

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
  FUN_14907e5de(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e5de FUN_14907e5de body=184 status=ok
// SIG undefined FUN_14907e5de(void)

void FUN_14907e5de(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x668) == param_2) {
    return;
  }
  FUN_145c58d0a();
  FUN_149082e02(param_1);
  if (DAT_14c7649dc == '\x01') {
    FUN_145d22e9c();
    (**(code **)(DAT_14cbf7f28 + 0xa0))(&DAT_14cbf7f28,param_1);
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x668) = param_2;
    FUN_145d22e9c();
    (**(code **)(DAT_14cbf7f28 + 0x98))(&DAT_14cbf7f28,param_1);
  }
  else {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x668) = param_2;
  }
  FUN_14441a6a0(param_1,0);
  return;
}



// FUNCTION 14907e696 FUN_14907e696 body=439 status=ok
// SIG undefined FUN_14907e696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14907e696(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  longlong lVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x828) != 0) {
    uVar3 = (longlong)*(int *)(param_1 + 0x828) + 0x3ffffffffffffff;
    uVar4 = uVar3 & 0x3ffffffffffffff;
    auVar7._8_4_ = (int)uVar4;
    auVar7._0_8_ = uVar4;
    auVar7._12_4_ = (int)(uVar4 >> 0x20);
    puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x820) + 0xf8);
    uVar5 = 0;
    auVar9 = pmovsxbq(in_XMM2,0x302);
    auVar10 = pmovsxbq(in_XMM3,0x100);
    auVar7 = auVar7 | _DAT_149931e80;
    do {
      lVar6 = auVar7._0_8_;
      lVar8 = auVar7._8_8_;
      if ((bool)(~(lVar6 < (longlong)(uVar5 ^ auVar1._0_8_)) & 1)) {
        puVar2[-0x30] = local_44;
      }
      auVar11._8_4_ = (int)uVar5;
      auVar11._0_8_ = uVar5;
      auVar11._12_4_ = (int)(uVar5 >> 0x20);
      if ((longlong)((auVar11._8_8_ | auVar10._8_8_) ^ auVar1._8_8_) <= lVar8) {
        puVar2[-0x20] = local_44;
      }
      auVar11 = (auVar11 | auVar9) ^ auVar1;
      if (auVar11._0_8_ <= lVar6) {
        puVar2[-0x10] = local_44;
      }
      if (auVar11._8_8_ <= lVar8) {
        *puVar2 = local_44;
      }
      uVar5 = uVar5 + 4;
      puVar2 = puVar2 + 0x40;
    } while ((uVar4 - ((uint)uVar3 & 3)) + 4 != uVar5);
  }
  FUN_1490805ee(param_1,0);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e852 FUN_14907e852 body=158 status=ok
// SIG undefined FUN_14907e852(void)

void FUN_14907e852(undefined8 param_1,longlong param_2)

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
  FUN_14907e8f2(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907e8f2 FUN_14907e8f2 body=1146 status=ok
// SIG undefined FUN_14907e8f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14907e8f2(longlong param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar23 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar26 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  longlong lVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar41 [16];
  
  auVar14 = _DAT_149931e80;
  if ((longlong)*(int *)(param_1 + 0x828) != 0) {
    uVar16 = (longlong)*(int *)(param_1 + 0x828) + 0x3ffffffffffffff;
    uVar17 = uVar16 & 0x3ffffffffffffff;
    auVar19._8_4_ = (int)uVar17;
    auVar19._0_8_ = uVar17;
    auVar19._12_4_ = (int)(uVar17 >> 0x20);
    puVar15 = (undefined1 *)(*(longlong *)(param_1 + 0x820) + 0x3fc);
    lVar18 = 0;
    auVar20 = pmovsxbq(in_XMM1,0xf0e);
    auVar21 = pmovsxbq(in_XMM2,0xd0c);
    auVar22 = pmovsxbq(in_XMM3,0xb0a);
    auVar23 = pmovsxbq(in_XMM4,0x908);
    auVar24 = pmovsxbq(in_XMM5,0x706);
    auVar25 = pmovsxbq(unaff_XMM6,0x504);
    auVar26 = pmovsxbq(unaff_XMM7,0x302);
    auVar27 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar28._8_4_ = (int)lVar18;
      auVar28._0_8_ = lVar18;
      auVar28._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      auVar31 = auVar19 | auVar14;
      auVar33 = (auVar28 | auVar27) ^ auVar14;
      lVar30 = auVar31._0_8_;
      auVar34._0_8_ = -(ulonglong)(lVar30 < auVar33._0_8_);
      lVar32 = auVar31._8_8_;
      auVar34._8_8_ = -(ulonglong)(lVar32 < auVar33._8_8_);
      auVar41 = pshuflw(unaff_XMM14,auVar34,0xe8);
      auVar33._8_4_ = 0xffffffff;
      auVar33._0_8_ = 0xffffffffffffffff;
      auVar33._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar41 ^ auVar33,auVar41 ^ auVar33);
      if ((auVar33._0_4_ & 1) != 0) {
        puVar15[-0x3c0] = param_2;
      }
      auVar34 = packssdw(auVar34,auVar34);
      auVar41._8_4_ = 0xffffffff;
      auVar41._0_8_ = 0xffffffffffffffff;
      auVar41._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar41,auVar34 ^ auVar41);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[1] & 1) != 0) {
        puVar15[-0x380] = param_2;
      }
      auVar34 = (auVar28 | auVar26) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = packssdw(auVar33,auVar35);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar1,auVar33 ^ auVar1);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[2] & 1) != 0) {
        puVar15[-0x340] = param_2;
      }
      auVar34 = pshufhw(auVar35,auVar35,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar2,auVar34 ^ auVar2);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[3] & 1) != 0) {
        puVar15[-0x300] = param_2;
      }
      auVar34 = (auVar28 | auVar25) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = pshuflw(auVar33,auVar36,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar3,auVar33 ^ auVar3);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[4] & 1) != 0) {
        puVar15[-0x2c0] = param_2;
      }
      auVar34 = packssdw(auVar36,auVar36);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar4,auVar34 ^ auVar4);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[5] & 1) != 0) {
        puVar15[-0x280] = param_2;
      }
      auVar34 = (auVar28 | auVar24) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = packssdw(auVar33,auVar37);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar5,auVar33 ^ auVar5);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[6] & 1) != 0) {
        puVar15[-0x240] = param_2;
      }
      auVar34 = pshufhw(auVar37,auVar37,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar6,auVar34 ^ auVar6);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[7] & 1) != 0) {
        puVar15[-0x200] = param_2;
      }
      auVar34 = (auVar28 | auVar23) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = pshuflw(auVar33,auVar38,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar7,auVar33 ^ auVar7);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[8] & 1) != 0) {
        puVar15[-0x1c0] = param_2;
      }
      auVar34 = packssdw(auVar38,auVar38);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar8,auVar34 ^ auVar8);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[9] & 1) != 0) {
        puVar15[-0x180] = param_2;
      }
      auVar34 = (auVar28 | auVar22) ^ auVar14;
      auVar39._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar39._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = packssdw(auVar33,auVar39);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar9,auVar33 ^ auVar9);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[10] & 1) != 0) {
        puVar15[-0x140] = param_2;
      }
      auVar34 = pshufhw(auVar39,auVar39,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar34 = packssdw(auVar34 ^ auVar10,auVar34 ^ auVar10);
      auVar34 = packsswb(auVar34,auVar34);
      if ((auVar34[0xb] & 1) != 0) {
        puVar15[-0x100] = param_2;
      }
      auVar34 = (auVar28 | auVar21) ^ auVar14;
      auVar40._0_8_ = -(ulonglong)(lVar30 < auVar34._0_8_);
      auVar40._8_8_ = -(ulonglong)(lVar32 < auVar34._8_8_);
      auVar33 = pshuflw(auVar33,auVar40,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar11,auVar33 ^ auVar11);
      unaff_XMM14 = packsswb(auVar33,auVar33);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar15[-0xc0] = param_2;
      }
      auVar33 = packssdw(auVar40,auVar40);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar12,auVar33 ^ auVar12);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[0xd] & 1) != 0) {
        puVar15[-0x80] = param_2;
      }
      auVar33 = (auVar28 | auVar20) ^ auVar14;
      auVar29._0_8_ = -(ulonglong)(lVar30 < auVar33._0_8_);
      auVar29._8_8_ = -(ulonglong)(lVar32 < auVar33._8_8_);
      auVar33 = packssdw(auVar31,auVar29);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar31,auVar33 ^ auVar31);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[0xe] & 1) != 0) {
        puVar15[-0x40] = param_2;
      }
      auVar33 = pshufhw(auVar29,auVar29,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar33 = packssdw(auVar33 ^ auVar13,auVar33 ^ auVar13);
      auVar33 = packsswb(auVar33,auVar33);
      if ((auVar33[0xf] & 1) != 0) {
        *puVar15 = param_2;
      }
      lVar18 = lVar18 + 0x10;
      puVar15 = puVar15 + 0x400;
    } while ((uVar17 - ((uint)uVar16 & 0xf)) + 0x10 != lVar18);
  }
  FUN_1490805ee(param_1,1);
  FUN_14441a6a0(param_1,0);
  return;
}



// FUNCTION 14907ed6c FUN_14907ed6c body=156 status=ok
// SIG undefined FUN_14907ed6c(void)

void FUN_14907ed6c(undefined8 param_1,longlong param_2)

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
  FUN_14907ee0a(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907ee0a FUN_14907ee0a body=172 status=ok
// SIG undefined FUN_14907ee0a(void)

void FUN_14907ee0a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x738) = param_2;
  lVar2 = (**(code **)(*param_2 + 0x2a0))(param_2,param_1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x748) = lVar2;
  plVar1 = *(longlong **)(param_1 + 0x738);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,lVar2);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
  }
  *(longlong *)(param_1 + 0x740) = lVar2;
  FUN_1448c6f34(param_1);
  return;
}



// FUNCTION 14907eeb6 FUN_14907eeb6 body=156 status=ok
// SIG undefined FUN_14907eeb6(void)

void FUN_14907eeb6(undefined8 param_1,longlong param_2)

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
  FUN_14907ef54(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907ef54 FUN_14907ef54 body=97 status=ok
// SIG undefined FUN_14907ef54(void)

void FUN_14907ef54(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x690) != param_2)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x690) = param_2;
    FUN_145c58d0a(param_1);
    FUN_14907faf0(param_1);
    FUN_14441a6a0(param_1,0);
    FUN_149080166(param_1);
    return;
  }
  return;
}



// FUNCTION 14907efd8 FUN_14907efd8 body=1018 status=ok
// SIG undefined FUN_14907efd8(void)

void FUN_14907efd8(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *param_1 = &PTR_FUN_14ba9fda0;
  if (param_1[3] != 0) {
    FUN_14907f3d2(param_1 + 6);
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x20))();
      puVar3 = (undefined8 *)param_1[4];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_1[4] = 0;
    }
  }
  if (param_1[8] != 0) {
    FUN_14907f3d2(param_1 + 0xe);
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[9] + 0x20))();
      puVar3 = (undefined8 *)param_1[9];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_1[9] = 0;
    }
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0xc] + 0x20))();
      puVar3 = (undefined8 *)param_1[0xc];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_1[0xc] = 0;
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') && ((longlong *)param_1[0xf] != (longlong *)0x0)) {
      (**(code **)(*(longlong *)param_1[0xf] + 0x20))();
      puVar3 = (undefined8 *)param_1[0xf];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_1[0xf] = 0;
    }
    FUN_14716cf4c(param_1 + 0x13);
    if ((longlong *)param_1[0x20] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x20] + 0x20))();
      puVar3 = (undefined8 *)param_1[0x20];
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      param_1[0x20] = 0;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x23);
  if ((ulonglong)uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x23))) &&
         (*(longlong *)(param_1[0x22] + lVar5) != 0)) {
        FUN_14907f3d2(param_1[0x22] + lVar5 + 0x40);
        lVar7 = param_1[0x22];
        plVar4 = *(longlong **)(lVar7 + 0x30 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 0x30 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 0x30 + lVar5) = 0;
          lVar7 = param_1[0x22];
        }
        plVar4 = *(longlong **)(lVar7 + 8 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 8 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
          lVar7 = param_1[0x22];
        }
        if ((*(char *)(lVar7 + 0x20 + lVar5) == '\x01') &&
           (plVar4 = *(longlong **)(lVar7 + 0x18 + lVar5), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 0x18 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
          lVar7 = param_1[0x22];
        }
        plVar4 = *(longlong **)(lVar7 + 0x60 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 0x60 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 0x60 + lVar5) = 0;
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x68;
    } while (uVar2 != uVar6);
  }
  uVar2 = *(uint *)(param_1 + 0x25);
  if ((ulonglong)uVar2 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(param_1 + 0x25))) &&
         (lVar7 = param_1[0x24], *(longlong *)(lVar7 + lVar5) != 0)) {
        plVar4 = *(longlong **)(lVar7 + 8 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 8 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 8 + lVar5) = 0;
          lVar7 = param_1[0x24];
        }
        if ((*(char *)(lVar7 + 0x18 + lVar5) == '\x01') &&
           (plVar4 = *(longlong **)(lVar7 + 0x10 + lVar5), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 0x10 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 0x10 + lVar5) = 0;
          lVar7 = param_1[0x24];
        }
        plVar4 = *(longlong **)(lVar7 + 0x28 + lVar5);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x20))();
          puVar3 = *(undefined8 **)(lVar7 + 0x28 + lVar5);
          if (puVar3 != (undefined8 *)0x0) {
            (**(code **)*puVar3)(puVar3,1);
          }
          *(undefined8 *)(lVar7 + 0x28 + lVar5) = 0;
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (uVar2 != uVar6);
  }
  lVar5 = param_1[0x74];
  if (lVar5 != 0) {
    FUN_14907f414(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_14907f494(param_1 + 0x26);
  FUN_149084910(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_149084953(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x1f] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14908489c(param_1 + 0x13);
  return;
}



// FUNCTION 14907f3d2 FUN_14907f3d2 body=65 status=ok
// SIG undefined FUN_14907f3d2(void)

void FUN_14907f3d2(longlong *param_1)

{
  longlong *plVar1;
  
  if (*param_1 != 0) {
    FUN_149091a72();
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar1);
    }
    *param_1 = 0;
  }
  return;
}



// FUNCTION 14907f414 FUN_14907f414 body=127 status=ok
// SIG undefined FUN_14907f414(void)

void FUN_14907f414(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x468) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  FUN_1490846d2(param_1 + 0x10);
  return;
}



// FUNCTION 14907f494 FUN_14907f494 body=92 status=ok
// SIG undefined FUN_14907f494(void)

void FUN_14907f494(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x1f8);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14907f4f0 FUN_14907f4f0 body=1446 status=ok
// SIG undefined FUN_14907f4f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14907f4f0(undefined4 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf81d0) {
    FUN_144b3d300(&DAT_14cbf81d0);
    if (DAT_14cbf81d0 == -1) {
      DAT_14cbf81c0 = (undefined4 *)0x0;
      _DAT_14cbf81c8 = 0;
      atexit((_func_5014 *)&LAB_144419cdc);
      _Init_thread_footer(&DAT_14cbf81d0);
    }
  }
  uVar4 = DAT_14c75905c;
  uVar3 = DAT_14c758c60;
  if (DAT_14cbf81c8 == 0) {
    DAT_14cbf81c8 = 1;
    if (DAT_14cbf81cc == 0) {
      FUN_1467ff840(&DAT_14cbf81c0,0);
    }
    puVar2 = DAT_14cbf81c0;
    *DAT_14cbf81c0 = uVar3;
    puVar2[1] = uVar4;
    puVar2[2] = uVar4;
    puVar2[3] = 0x3f800000;
    iVar6 = DAT_14cbf81c8;
    uVar4 = DAT_14c75905c;
    uVar3 = DAT_14c758c60;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,iVar6);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar4;
    puVar2[lVar10 * 4 + 1] = uVar3;
    puVar2[lVar10 * 4 + 2] = uVar4;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar5 = DAT_14c75902c;
    uVar4 = DAT_14c758ed0;
    uVar3 = DAT_14c758ca8;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar5;
    puVar2[lVar10 * 4 + 1] = uVar4;
    puVar2[lVar10 * 4 + 2] = uVar3;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar5 = DAT_14c758f7c;
    uVar4 = DAT_14c758f6c;
    uVar3 = DAT_14c758f54;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar3;
    puVar2[lVar10 * 4 + 1] = uVar4;
    puVar2[lVar10 * 4 + 2] = uVar5;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar5 = DAT_14c758f90;
    uVar4 = DAT_14c758e24;
    uVar3 = DAT_14c758d18;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar3;
    puVar2[lVar10 * 4 + 1] = uVar5;
    puVar2[lVar10 * 4 + 2] = uVar4;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar4 = DAT_14c75905c;
    uVar3 = DAT_14c758c60;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar4;
    puVar2[lVar10 * 4 + 1] = uVar3;
    puVar2[lVar10 * 4 + 2] = uVar3;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar4 = DAT_14c75905c;
    uVar3 = DAT_14c758c60;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar3;
    puVar2[lVar10 * 4 + 1] = uVar4;
    puVar2[lVar10 * 4 + 2] = uVar3;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar4 = DAT_14c75905c;
    uVar3 = DAT_14c758c60;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar3;
    puVar2[lVar10 * 4 + 1] = uVar3;
    puVar2[lVar10 * 4 + 2] = uVar4;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar4 = DAT_14c75905c;
    uVar3 = DAT_14c758c60;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar4;
    puVar2[lVar10 * 4 + 1] = uVar4;
    puVar2[lVar10 * 4 + 2] = uVar3;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar5 = DAT_14c758ff0;
    uVar4 = DAT_14c758f04;
    uVar3 = DAT_14c758c7c;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    DAT_14cbf81c8 = DAT_14cbf81c8 + 1;
    if (DAT_14cbf81cc < DAT_14cbf81c8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar4;
    puVar2[lVar10 * 4 + 1] = uVar3;
    puVar2[lVar10 * 4 + 2] = uVar5;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
    uVar8 = DAT_14cbf81c8;
    uVar5 = DAT_14c758f50;
    uVar4 = DAT_14c758ed0;
    uVar3 = DAT_14c758cc8;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    uVar9 = DAT_14cbf81c8 + 1;
    _DAT_14cbf81c8 = CONCAT44(DAT_14cbf81cc,uVar9);
    if (DAT_14cbf81cc < uVar9) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar8);
    }
    puVar2 = DAT_14cbf81c0;
    DAT_14cbf81c0[lVar10 * 4] = uVar3;
    puVar2[lVar10 * 4 + 1] = uVar5;
    puVar2[lVar10 * 4 + 2] = uVar4;
    puVar2[lVar10 * 4 + 3] = 0x3f800000;
  }
  if ((int)DAT_14cbf81c8 <= param_2) {
    FUN_1467ede48(&local_60);
    uVar7 = _DAT_14cbf81c8;
    lVar10 = (longlong)(int)DAT_14cbf81c8;
    uVar8 = DAT_14cbf81c8 + 1;
    _DAT_14cbf81c8 = CONCAT44(DAT_14cbf81cc,uVar8);
    if (DAT_14cbf81cc < uVar8) {
      FUN_1467ff840(&DAT_14cbf81c0,uVar7 & 0xffffffff);
    }
    puVar1 = (undefined8 *)(DAT_14cbf81c0 + lVar10 * 4);
    *puVar1 = local_60;
    puVar1[1] = uStack_58;
  }
  puVar2 = DAT_14cbf81c0 + (longlong)param_2 * 4;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907fa97 FUN_14907fa97 body=88 status=ok
// SIG undefined FUN_14907fa97(void)

undefined8 * FUN_14907fa97(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x3b8), lVar2 == 0)) ||
      ((int)param_2 < 0)) ||
     ((*(int *)(lVar2 + 0x2a0) <= (int)param_2 ||
      (puVar3 = *(undefined8 **)(*(longlong *)(lVar2 + 0x298) + (ulonglong)param_2 * 8),
      puVar3 == (undefined8 *)0x0)))) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return puVar3;
}



// FUNCTION 14907faf0 FUN_14907faf0 body=197 status=ok
// SIG undefined FUN_14907faf0(void)

void FUN_14907faf0(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x660) == 0) {
    *(undefined4 *)(param_1 + 0x828) = 0;
    if (*(int *)(param_1 + 0x82c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
    }
  }
  else if (*(int *)(*(longlong *)(param_1 + 0x660) + 0xf8) != *(int *)(param_1 + 0x828)) {
    uStack_30 = 0;
    local_58 = 0x3dcccccd00000000;
    uStack_50 = 0x3f80000000000000;
    local_48 = 0x3f80000000000000;
    uStack_40 = 0x3f80000000000000;
    local_38 = 0x3f80000000000000;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 1;
    uStack_20 = 0x3f800000;
    FUN_14907fbc6(param_1 + 0x820);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14907fbc6 FUN_14907fbc6 body=148 status=ok
// SIG undefined FUN_14907fbc6(void)

void FUN_14907fbc6(longlong *param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_14908c14c(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_14908c1ac(param_1,iVar3);
    }
    lVar4 = *param_1;
    lVar14 = (longlong)iVar3 * 0x40;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = *(undefined8 *)(param_2 + 4);
    uVar10 = *(undefined8 *)(param_2 + 6);
    uVar11 = *(undefined8 *)(param_2 + 8);
    uVar12 = *(undefined8 *)(param_2 + 10);
    uVar13 = *(undefined8 *)(param_2 + 0xe);
    puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar14);
    *puVar2 = *(undefined8 *)(param_2 + 0xc);
    puVar2[1] = uVar13;
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar1 = (undefined4 *)(lVar4 + lVar14);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
  }
  return;
}



// FUNCTION 14907fc5c FUN_14907fc5c body=63 status=ok
// SIG undefined FUN_14907fc5c(void)

byte FUN_14907fc5c(longlong param_1)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 0x660) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_149071d40();
    if ((bVar1 & *(byte *)(param_1 + 0x6a8)) == 1) {
      bVar1 = *(byte *)(param_1 + 0x6d8);
    }
    else {
      bVar1 = bVar1 & (*(byte *)(param_1 + 0x6a8) ^ 1);
    }
  }
  return bVar1;
}



// FUNCTION 14907fc9c FUN_14907fc9c body=89 status=ok
// SIG undefined FUN_14907fc9c(void)

void FUN_14907fc9c(longlong param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x678)) {
    iVar1 = 0;
    do {
      FUN_14907fcf6(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x678));
  }
  *(undefined4 *)(param_1 + 0x678) = 0;
  if (*(int *)(param_1 + 0x67c) == 0) {
    return;
  }
  FUN_14574ac34(param_1 + 0x670,0);
  return;
}



// FUNCTION 14907fcf6 FUN_14907fcf6 body=138 status=ok
// SIG undefined FUN_14907fcf6(void)

void FUN_14907fcf6(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x678) <= param_2) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x670);
  lVar4 = (longlong)param_2;
  plVar3 = *(longlong **)(lVar1 + lVar4 * 8);
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)((longlong)plVar3 + 0x9f) & 0x40) != 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar2 = FUN_1448abda6(param_1);
    plVar3 = *(longlong **)(lVar1 + lVar4 * 8);
    if (lVar2 == 0) goto LAB_14907fd53;
  }
  if ((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0) {
    (**(code **)(*plVar3 + 0x4a0))(plVar3,&DAT_14cadad64);
    FUN_1401bf202(*(undefined8 *)(lVar1 + lVar4 * 8));
    plVar3 = *(longlong **)(lVar1 + lVar4 * 8);
  }
LAB_14907fd53:
  (**(code **)(*plVar3 + 0x420))(plVar3,0);
  *(undefined8 *)(lVar1 + lVar4 * 8) = 0;
  return;
}



// FUNCTION 14907fd80 FUN_14907fd80 body=823 status=ok
// SIG undefined FUN_14907fd80(void)

void FUN_14907fd80(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  
  if (*(int *)(param_1 + 0x678) <= param_2) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x670);
  lVar8 = (longlong)param_2;
  if ((((*(longlong *)(param_1 + 0x660) != 0) &&
       (lVar4 = FUN_14906ed00(), param_2 < *(int *)(lVar4 + 8))) &&
      (lVar4 = *(longlong *)(param_1 + 0x660), lVar4 != 0)) &&
     (param_3 < *(int *)(*(longlong *)(lVar4 + 0x78) + 8 + lVar8 * 0x10))) {
    bVar3 = FUN_149071d40(lVar4,param_2,param_3);
    if ((bVar3 & *(byte *)(param_1 + 0x6a8)) == 1) {
      if (*(char *)(param_1 + 0x6d8) != '\0') {
LAB_14907fe42:
        if (*(longlong *)(lVar1 + lVar8 * 8) == 0) {
          lVar4 = FUN_1490800b7(param_1);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar4);
          }
          *(longlong *)(lVar1 + lVar8 * 8) = lVar4;
          *(byte *)(lVar4 + 0x1f9) = *(byte *)(lVar4 + 0x1f9) | 0x20;
        }
        lVar4 = *(longlong *)(param_1 + 0xb0);
        if (lVar4 == 0) {
          lVar4 = FUN_1448abda6(param_1);
          if (lVar4 == 0) {
            return;
          }
          lVar4 = *(longlong *)(param_1 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6(param_1);
          }
        }
        if ((*(byte *)(lVar4 + 0x153) & 0x40) == 0) {
          return;
        }
        plVar5 = *(longlong **)(lVar1 + lVar8 * 8);
        if ((*(byte *)((longlong)plVar5 + 0x9c) & 1) == 0) {
          (**(code **)(*plVar5 + 0x490))(plVar5,param_1,&DAT_14cadad98,0);
          uVar6 = *(undefined8 *)(lVar1 + lVar8 * 8);
          lVar4 = *(longlong *)(param_1 + 0xb0);
          if (lVar4 == 0) {
            lVar4 = FUN_1448abda6(param_1);
          }
          FUN_140b506dc(uVar6,lVar4,0);
        }
        if (*(longlong *)(param_1 + 0x770) == 0) {
          uVar6 = FUN_14018d992();
          lVar4 = FUN_1412ecd05(uVar6,0,
                                L"/HairStrands/Emitters/StableSpringsSystem.StableSpringsSystem",0,0
                                ,0,1,0);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          *(longlong *)(param_1 + 0x770) = lVar4;
        }
        if (*(longlong *)(param_1 + 0x778) == 0) {
          uVar6 = FUN_14018d992();
          lVar4 = FUN_1412ecd05(uVar6,0,L"/HairStrands/Emitters/StableRodsSystem.StableRodsSystem",0
                                ,0,0,1,0);
          if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar4);
          }
          *(longlong *)(param_1 + 0x778) = lVar4;
        }
        plVar5 = (longlong *)FUN_14906ed00(*(undefined8 *)(param_1 + 0x660));
        lVar4 = lVar8 * 0x2e8;
        if (*(char *)(*plVar5 + 1 + lVar4) == '\x04') {
          uVar6 = *(undefined8 *)(param_1 + 0x770);
        }
        else {
          plVar5 = (longlong *)FUN_14906ed00(*(undefined8 *)(param_1 + 0x660));
          if (*(char *)(*plVar5 + 1 + lVar4) == '\x02') {
            uVar6 = *(undefined8 *)(param_1 + 0x778);
          }
          else {
            plVar5 = (longlong *)FUN_14906ed00(*(undefined8 *)(param_1 + 0x660));
            uVar6 = FUN_1481e7eb4(*plVar5 + lVar4 + 8);
          }
        }
        uVar2 = *(undefined8 *)(lVar1 + lVar8 * 8);
        uVar7 = 1;
        if (*(char *)(param_1 + 0x6b1) == '\0') {
          plVar5 = (longlong *)FUN_14906ed00(*(undefined8 *)(param_1 + 0x660),1);
          uVar7 = *(undefined1 *)(*plVar5 + 0x3c + lVar4);
        }
        FUN_14581d7fa(uVar2,uVar7);
        FUN_1409d23de(*(undefined8 *)(lVar1 + lVar8 * 8),uVar6,1);
        FUN_14080a7a8(*(undefined8 *)(lVar1 + lVar8 * 8));
        return;
      }
    }
    else if ((bVar3 & (*(byte *)(param_1 + 0x6a8) ^ 1)) == 1) goto LAB_14907fe42;
  }
  lVar4 = *(longlong *)(lVar1 + lVar8 * 8);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x9f) & 0x40) == 0)) {
    FUN_1409d23de(lVar4,0,1);
                    /* WARNING: Could not recover jumptable at 0x00014907fe0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(lVar1 + lVar8 * 8) + 0xa68))();
    return;
  }
  return;
}



// FUNCTION 1490800b7 FUN_1490800b7 body=174 status=ok
// SIG undefined FUN_1490800b7(void)

undefined8 FUN_1490800b7(undefined8 param_1)

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
  uVar1 = FUN_144a7e9aa();
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



// FUNCTION 149080166 FUN_149080166 body=330 status=ok
// SIG undefined FUN_149080166(void)

void FUN_149080166(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  
  iVar7 = 0;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    lVar3 = FUN_14906ed00();
    iVar7 = *(int *)(lVar3 + 8);
  }
  if (iVar7 < *(int *)(param_1 + 0x678)) {
    iVar7 = *(int *)(param_1 + 0x678);
  }
  FUN_1490802b0((longlong *)(param_1 + 0x670),iVar7);
  if ((DAT_14cbf8178 == 1) && (iVar6 = *(int *)(param_1 + 0x140), (longlong)iVar6 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    lVar8 = 0;
    iVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar8);
      lVar4 = FUN_144a7e9aa();
      lVar1 = *(longlong *)(lVar1 + 0x10);
      if (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) && (iVar5 < iVar7)) {
        lVar1 = *(longlong *)(param_1 + 0x670);
        lVar4 = (longlong)iVar5;
        if (*(longlong *)(lVar1 + lVar4 * 8) == 0) {
          lVar2 = *(longlong *)(lVar3 + lVar8);
          if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar2);
          }
          iVar5 = iVar5 + 1;
          *(longlong *)(lVar1 + lVar4 * 8) = lVar2;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar6 * 8 != lVar8);
  }
  fVar9 = *(float *)(param_1 + 0x87c);
  if ((fVar9 == -1.0) && (!NAN(fVar9))) {
    fVar9 = *(float *)(param_1 + 0x878);
    if ((fVar9 == -1.0) && (!NAN(fVar9))) {
      fVar9 = 0.0;
    }
  }
  if (0 < iVar7) {
    iVar6 = 0;
    do {
      FUN_14907fd80(param_1,iVar6,(int)fVar9);
      iVar6 = iVar6 + 1;
    } while (iVar7 != iVar6);
  }
  FUN_144419e1a(param_1);
  return;
}



// FUNCTION 1490802b0 FUN_1490802b0 body=117 status=ok
// SIG undefined FUN_1490802b0(void)

void FUN_1490802b0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14043878c(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      *(int *)(param_1 + 1) = param_2;
      FUN_1403ed018(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 149080326 FUN_149080326 body=294 status=ok
// SIG undefined FUN_149080326(void)

void FUN_149080326(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  if ((param_2 != param_3 && *(longlong *)(param_1 + 0x660) != 0) &&
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x660) + 0xf8), 0 < iVar1)) {
    bVar4 = false;
    iVar6 = 0;
    do {
      while( true ) {
        iVar5 = iVar6 + 1;
        if (*(longlong *)(param_1 + 0x660) == 0) break;
        bVar2 = FUN_149071d40(*(longlong *)(param_1 + 0x660),iVar6,param_2);
        if ((bVar2 & *(byte *)(param_1 + 0x6a8)) == 1) {
          bVar2 = *(byte *)(param_1 + 0x6d8);
        }
        else {
          bVar2 = bVar2 & (*(byte *)(param_1 + 0x6a8) ^ 1);
        }
        if (*(longlong *)(param_1 + 0x660) == 0) {
          if (bVar2 == 0) break;
        }
        else {
          bVar3 = FUN_149071d40(*(longlong *)(param_1 + 0x660),iVar6,param_3);
          if ((bVar3 & *(byte *)(param_1 + 0x6a8)) == 1) {
            bVar3 = *(byte *)(param_1 + 0x6d8);
          }
          else {
            bVar3 = bVar3 & (*(byte *)(param_1 + 0x6a8) ^ 1);
          }
          if (bVar2 == bVar3) break;
        }
        FUN_14907fd80(param_1,iVar6,param_3);
        bVar4 = true;
        iVar6 = iVar5;
        if (iVar5 == iVar1) goto LAB_149080403;
      }
      iVar6 = iVar5;
    } while (iVar5 != iVar1);
    if (bVar4) {
LAB_149080403:
      FUN_144419e1a(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14908044c FUN_14908044c body=231 status=ok
// SIG undefined FUN_14908044c(void)

void FUN_14908044c(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  FUN_145c58d0a();
  if ((param_2 == 0) || (*(char *)(param_2 + 0x120) != '\x01')) {
    *(undefined8 *)(param_1 + 0x660) = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x660) = param_2;
    if ((longlong)*(int *)(param_2 + 0x80) == 0) {
      fVar4 = -2.0;
    }
    else {
      iVar2 = -1;
      lVar3 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(param_2 + 0x78) + 8 + lVar3);
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_2 + 0x80) * 0x10 != lVar3);
      fVar4 = (float)(iVar2 + -1);
    }
    fVar5 = *(float *)(param_1 + 0x87c);
    if (fVar4 <= *(float *)(param_1 + 0x87c)) {
      fVar5 = fVar4;
    }
    if (fVar5 <= -1.0) {
      fVar5 = -1.0;
    }
    *(float *)(param_1 + 0x87c) = fVar5;
  }
  if (*(longlong *)(param_1 + 0x688) != param_3) {
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *(longlong *)(param_1 + 0x688) = param_3;
  }
  FUN_149080534(param_1,param_4);
  return;
}



// FUNCTION 149080534 FUN_149080534 body=185 status=ok
// SIG undefined FUN_149080534(void)

void FUN_149080534(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14907faf0();
  if ((*(longlong *)(param_1 + 0x660) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x660) + 0x120) == '\x01')) {
    FUN_14441a6a0(param_1,0);
    if (param_2 != '\0') {
      FUN_149080166(param_1);
    }
    if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
      if (DAT_14c7649dc == '\x01') {
        FUN_145d22e9c();
        (**(code **)(DAT_14cbf7f28 + 0x98))(&DAT_14cbf7f28,param_1);
      }
      plVar1 = *(longlong **)(param_1 + 0x738);
      if (plVar1 == (longlong *)0x0) {
        lVar2 = 0;
      }
      else {
        lVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,*(undefined8 *)(param_1 + 0x748));
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
      }
      *(longlong *)(param_1 + 0x740) = lVar2;
    }
  }
  return;
}



// FUNCTION 1490805ee FUN_1490805ee body=203 status=ok
// SIG undefined FUN_1490805ee(void)

void FUN_1490805ee(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14907faf0();
  if ((longlong)*(int *)(param_1 + 0x850) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x848);
    lVar4 = (longlong)*(int *)(param_1 + 0x850) << 3;
    uVar3 = 0;
    do {
      FUN_14441e31f(&local_78,*(undefined8 *)(param_1 + 0x660),param_1,uVar3 & 0xffffffff);
      lVar2 = *(longlong *)(lVar1 + uVar3 * 8);
      *(undefined8 *)(lVar2 + 0xe8) = local_48;
      *(undefined8 *)(lVar2 + 0xf0) = uStack_40;
      *(undefined8 *)(lVar2 + 0xd8) = local_58;
      *(undefined8 *)(lVar2 + 0xe0) = uStack_50;
      *(undefined8 *)(lVar2 + 200) = local_68;
      *(undefined8 *)(lVar2 + 0xd0) = uStack_60;
      *(undefined4 *)(lVar2 + 0xb8) = local_78;
      *(undefined4 *)(lVar2 + 0xbc) = uStack_74;
      *(undefined4 *)(lVar2 + 0xc0) = uStack_70;
      *(undefined4 *)(lVar2 + 0xc4) = uStack_6c;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_98);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490806d0 FUN_1490806d0 body=9 status=ok
// SIG undefined FUN_1490806d0(void)

int FUN_1490806d0(longlong param_1)

{
  return (int)*(float *)(param_1 + 0x87c);
}



// FUNCTION 14908074a FUN_14908074a body=1716 status=ok
// SIG undefined FUN_14908074a(void)

undefined8 * FUN_14908074a(undefined8 *param_1,longlong *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined2 local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 *local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar13 = 0;
  FUN_1406ff4f8(param_1,param_2,0);
  *param_1 = &PTR_FUN_14baa2740;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0;
  (**(code **)(*param_2 + 0xa10))(param_2,param_1 + 0x58);
  param_1[0x5a] = 0;
  *(byte *)((longlong)param_1 + 0x74) = *(byte *)((longlong)param_1 + 0x74) | 1;
  *(byte *)((longlong)param_1 + 0x72) = *(byte *)((longlong)param_1 + 0x72) | 4;
  local_60 = param_1 + 0x55;
  FUN_149084996(param_1 + 0x55,(int)param_2[0x10a]);
  local_58 = param_1 + 0x53;
  FUN_149084a12(param_1 + 0x53,param_2 + 0x109);
  *(int *)(param_1 + 0x57) = (int)param_2[0x7a];
  param_1[0x5a] = param_2[0xea];
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x7f;
  lVar16 = DAT_14c9d23d8;
  local_80 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) != 0x40000002) {
    bVar5 = FUN_144a61b4f();
    uVar13 = (ulonglong)(bVar5 ^ 1);
  }
  if (((0 < *(int *)(lVar16 + uVar13 * 4)) && (param_2[0x10c] != 0)) || (0 < DAT_14cbf81a8)) {
    *(byte *)((longlong)local_80 + 0x75) = *(byte *)((longlong)local_80 + 0x75) | 0x80;
  }
  local_68 = (ulonglong)*(int *)(param_2[0xcc] + 0xf8);
  if (0 < (longlong)local_68) {
    local_70 = (longlong)*(int *)(local_80[0x42] + 8);
    uVar1 = *(undefined2 *)(&DAT_14ca85070 + local_70 * 2);
    uVar13 = 0;
    do {
      FUN_149070af0(param_2[0xcc]);
      lVar16 = *(longlong *)(*local_58 + uVar13 * 8);
      local_78 = uVar13 * 0x690 + *(longlong *)(param_2[0xcc] + 0xf0);
      *(char *)(lVar16 + 0x3b0) = (char)param_2[0x106];
      *(bool *)(lVar16 + 0x3b1) = param_2[0x10c] != 0;
      if ((*(longlong *)(lVar16 + 0x40) != 0) && (*(longlong *)(lVar16 + 0x100) == 0)) {
        puVar9 = (undefined8 *)FUN_14001cc68(0x140,0x10);
        FUN_144b1dcb8(puVar9,local_70);
        *puVar9 = &PTR_FUN_14baa29b0;
        *(undefined1 *)(puVar9 + 0x27) = 0;
        puVar9[0x26] = lVar16;
        *(undefined8 **)(lVar16 + 0x100) = puVar9;
      }
      uVar2 = *(uint *)(lVar16 + 0x118);
      if ((longlong)(int)uVar2 != 0) {
        lVar15 = 0;
LAB_149080a0b:
        if (*(longlong *)(*(longlong *)(lVar16 + 0x110) + lVar15) == 0) goto code_r0x000149080a12;
        lVar15 = 0x60;
        uVar14 = 0;
        do {
          if (((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar16 + 0x118))) &&
             ((*(longlong *)(*(longlong *)(lVar16 + 0x110) + -0x60 + lVar15) != 0 &&
              (*(longlong *)(*(longlong *)(lVar16 + 0x110) + lVar15) == 0)))) {
            uVar11 = FUN_14001cc68(0x1f8,0x10);
            local_88 = "HairCardsVertexFactory";
            local_90 = (undefined4)local_70;
            local_98 = uVar1;
            FUN_149097786(uVar11,lVar16,uVar14 & 0xffffffff,1);
            *(undefined8 *)(*(longlong *)(lVar16 + 0x110) + lVar15) = uVar11;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x68;
        } while (uVar2 != uVar14);
      }
LAB_149080970:
      uVar2 = *(uint *)(lVar16 + 0x128);
      if ((longlong)(int)uVar2 != 0) {
        lVar15 = 0;
LAB_149080a35:
        if (*(longlong *)(*(longlong *)(lVar16 + 0x120) + lVar15) == 0) goto code_r0x000149080a40;
        lVar15 = 0x28;
        uVar14 = 0;
        do {
          if ((((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar16 + 0x128))) &&
              (*(longlong *)(*(longlong *)(lVar16 + 0x120) + -0x28 + lVar15) != 0)) &&
             (*(longlong *)(*(longlong *)(lVar16 + 0x120) + lVar15) == 0)) {
            uVar11 = FUN_14001cc68(0x1f8,0x10);
            local_88 = "HairMeshesVertexFactory";
            local_90 = (undefined4)local_70;
            local_98 = uVar1;
            FUN_149097786(uVar11,lVar16,uVar14 & 0xffffffff,2);
            *(undefined8 *)(*(longlong *)(lVar16 + 0x120) + lVar15) = uVar11;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x30;
        } while (uVar2 != uVar14);
      }
LAB_149080980:
      cVar6 = FUN_14716d37c();
      lVar15 = local_78;
      if (((cVar6 != '\0') && (*(longlong *)(lVar16 + 0x18) != 0)) &&
         ((*(char *)(lVar16 + 0x38) != '\0' ||
          ((*(char *)(lVar16 + 0x39) != '\0' || (*(char *)(lVar16 + 0x3b) == '\x01')))))) {
        *(byte *)((longlong)local_80 + 0x75) = *(byte *)((longlong)local_80 + 0x75) | 0x80;
      }
      cVar6 = FUN_144b0f89b(0,uVar1);
      plVar4 = local_60;
      if (cVar6 != '\0') {
        lVar16 = param_2[0xcc];
        plVar10 = (longlong *)FUN_14906ed82(lVar16);
        iVar7 = FUN_1490702fe(lVar16,*(undefined8 *)(*plVar10 + uVar13 * 0x30));
        if (iVar7 == -1) {
          iVar7 = 0;
        }
        plVar10 = (longlong *)FUN_1490823a4(param_2,iVar7,0);
        if (plVar10 == (longlong *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar10 + 0x2f0))(plVar10);
        }
        *(undefined8 *)(*plVar4 + uVar13 * 0x28) = uVar11;
      }
      local_50 = 0;
      FUN_149084a72(*plVar4 + uVar13 * 0x28 + 8,&local_50,*(undefined4 *)(lVar15 + 0x628));
      cVar6 = FUN_144b0f89b(1);
      if ((cVar6 != '\0') && ((longlong)*(int *)(local_78 + 0x628) != 0)) {
        lVar16 = *(longlong *)(local_78 + 0x620);
        lVar15 = (longlong)*(int *)(local_78 + 0x628) * 0x390 + lVar16;
        iVar7 = 0;
        do {
          if (0 < *(int *)(lVar16 + 0x28)) {
            plVar10 = (longlong *)FUN_14906ea8a(param_2[0xcc]);
            if ((longlong)(int)plVar10[1] != 0) {
              lVar3 = *plVar10;
              lVar12 = 0;
              do {
                if ((uVar13 == *(uint *)(lVar3 + 0x80 + lVar12)) &&
                   (*(int *)(lVar3 + 0x84 + lVar12) == iVar7)) {
                  iVar8 = FUN_1490702fe(param_2[0xcc],*(undefined8 *)(lVar3 + 8 + lVar12));
                  if (iVar8 != -1) goto LAB_149080d52;
                  break;
                }
                lVar12 = lVar12 + 0xa0;
              } while ((longlong)(int)plVar10[1] * 0xa0 != lVar12);
            }
            iVar8 = 0;
LAB_149080d52:
            plVar10 = (longlong *)FUN_1490823a4(param_2,iVar8,1);
            if (plVar10 == (longlong *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar10 + 0x2f0))(plVar10);
            }
            *(undefined8 *)(*(longlong *)(*plVar4 + 8 + uVar13 * 0x28) + (longlong)iVar7 * 8) =
                 uVar11;
          }
          iVar7 = iVar7 + 1;
          lVar16 = lVar16 + 0x390;
        } while (lVar16 != lVar15);
      }
      lVar16 = local_78;
      local_50 = 0;
      FUN_149084a72(*plVar4 + uVar13 * 0x28 + 0x18,&local_50);
      cVar6 = FUN_144b0f89b(2);
      if ((cVar6 != '\0') && (lVar15 = (longlong)*(int *)(lVar16 + 0x638), lVar15 != 0)) {
        lVar16 = *(longlong *)(lVar16 + 0x630);
        lVar15 = lVar15 * 0x80 + lVar16;
        iVar7 = 0;
        do {
          if (0 < *(int *)(lVar16 + 8)) {
            plVar10 = (longlong *)FUN_14906ec7c(param_2[0xcc]);
            if ((longlong)(int)plVar10[1] != 0) {
              lVar3 = *plVar10;
              lVar12 = 0;
              do {
                if ((uVar13 == *(uint *)(lVar3 + 0x68 + lVar12)) &&
                   (*(int *)(lVar3 + 0x6c + lVar12) == iVar7)) {
                  iVar8 = FUN_1490702fe(param_2[0xcc],*(undefined8 *)(lVar3 + 8 + lVar12));
                  if (iVar8 != -1) goto LAB_149080c80;
                  break;
                }
                lVar12 = lVar12 + 0x80;
              } while ((longlong)(int)plVar10[1] * 0x80 != lVar12);
            }
            iVar8 = 0;
LAB_149080c80:
            plVar10 = (longlong *)FUN_1490823a4(param_2,iVar8);
            if (plVar10 == (longlong *)0x0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)(*plVar10 + 0x2f0))(plVar10);
            }
            *(undefined8 *)(*(longlong *)(*plVar4 + 0x18 + uVar13 * 0x28) + (longlong)iVar7 * 8) =
                 uVar11;
          }
          iVar7 = iVar7 + 1;
          lVar16 = lVar16 + 0x80;
        } while (lVar16 != lVar15);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_80;
code_r0x000149080a12:
  lVar15 = lVar15 + 0x68;
  if ((longlong)(int)uVar2 * 0x68 - lVar15 == 0) goto LAB_149080970;
  goto LAB_149080a0b;
code_r0x000149080a40:
  lVar15 = lVar15 + 0x30;
  if ((longlong)(int)uVar2 * 0x30 == lVar15) goto LAB_149080980;
  goto LAB_149080a35;
}



// FUNCTION 149080e00 FUN_149080e00 body=4865 status=ok
// SIG undefined FUN_149080e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_149080e00(longlong param_1,double *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  char cVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_1f8 [32];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  ulonglong local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  auVar5 = _DAT_149931180;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(longlong *)(param_1 + 0x660) == 0) ||
     (iVar1 = *(int *)(*(longlong *)(param_1 + 0x660) + 0xf8), iVar1 < 1)) {
    local_148 = 0.0;
    dStack_140 = 0.0;
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_168 = 0.0;
    uStack_160 = 0.0;
    local_138 = 0;
    FUN_144a80a4c(&local_168,param_2,param_3);
    dVar17 = param_2[3];
    dVar24 = param_2[4];
    dVar28 = param_2[5];
    dVar26 = param_2[6];
  }
  else {
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_118 = 0.0;
    dStack_110 = 0.0;
    local_128 = 0.0;
    dStack_120 = 0.0;
    local_f8 = local_f8 & 0xffffffffffffff00;
    if (*(longlong *)(param_1 + 0x838) == 0) {
      iVar11 = 0;
LAB_149080f0f:
      lVar10 = (longlong)iVar11 * 0x690 + *(longlong *)(*(longlong *)(param_1 + 0x660) + 0xf0);
      cVar6 = FUN_144b0f89b(0,0x9b);
      if ((cVar6 != '\0') && (*(int *)(lVar10 + 0x24c) != 0)) {
        auVar27 = *(undefined1 (*) [16])(param_3 + 0x40) & auVar5;
        auVar29 = *(undefined1 (*) [16])(param_3 + 0x50) & auVar5;
        FUN_14441e31f(&local_168,*(undefined8 *)(param_1 + 0x660),param_1,iVar11);
        if (((char)local_f8 == '\0') || (*(char *)(lVar10 + 0x298) == '\0')) {
          if (*(char *)(lVar10 + 0x298) != '\0') {
            local_f8 = *(ulonglong *)(lVar10 + 0x298);
            local_128 = *(double *)(lVar10 + 0x268);
            dStack_120 = *(double *)(lVar10 + 0x270);
            local_118 = *(double *)(lVar10 + 0x278);
            dStack_110 = *(double *)(lVar10 + 0x280);
            local_108 = *(double *)(lVar10 + 0x288);
            dStack_100 = *(double *)(lVar10 + 0x290);
          }
        }
        else {
          uVar12 = SUB84(local_128,0);
          uVar13 = (undefined4)((ulonglong)local_128 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x268);
          if (dVar17 <= local_128) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_128 = (double)CONCAT44(uVar13,uVar12);
          if (*(double *)(lVar10 + 0x270) <= dStack_120) {
            dStack_120 = *(double *)(lVar10 + 0x270);
          }
          uVar12 = SUB84(local_118,0);
          uVar13 = (undefined4)((ulonglong)local_118 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x278);
          if (dVar17 <= local_118) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_118 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(dStack_110,0);
          uVar13 = (undefined4)((ulonglong)dStack_110 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x280);
          if (dStack_110 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          dStack_110 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(local_108,0);
          uVar13 = (undefined4)((ulonglong)local_108 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x288);
          if (local_108 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_108 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(dStack_100,0);
          uVar13 = (undefined4)((ulonglong)dStack_100 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x290);
          if (dStack_100 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          dStack_100 = (double)CONCAT44(uVar13,uVar12);
        }
        fVar14 = 1.0;
        if (1.0 <= uStack_160._4_4_) {
          fVar14 = uStack_160._4_4_;
        }
        if (fVar14 <= local_158._4_4_) {
          fVar14 = local_158._4_4_;
        }
        if (*(uint *)(lVar10 + 0x248) < 2) {
          if ((longlong)*(int *)(lVar10 + 0x628) != 0) {
            lVar2 = *(longlong *)(lVar10 + 0x620);
            lVar9 = (longlong)*(int *)(lVar10 + 0x628) * 0x390;
            lVar8 = 0;
            do {
              if (0 < *(int *)(lVar2 + 0x28 + lVar8)) {
                lVar8 = 0;
                goto LAB_14908145e;
              }
              lVar8 = lVar8 + 0x390;
            } while (lVar9 - lVar8 != 0);
          }
          goto LAB_149081092;
        }
        goto LAB_1490810bf;
      }
      cVar6 = FUN_144b0f89b(1,0x9b);
      if ((cVar6 != '\0') && ((longlong)*(int *)(lVar10 + 0x628) != 0)) {
        lVar2 = *(longlong *)(lVar10 + 0x620);
        lVar9 = (longlong)*(int *)(lVar10 + 0x628) * 0x390;
        lVar8 = 0;
        do {
          if (0 < *(int *)(lVar2 + 0x28 + lVar8)) {
            lVar10 = 0;
            goto LAB_14908134d;
          }
          lVar8 = lVar8 + 0x390;
        } while (lVar9 - lVar8 != 0);
      }
      cVar6 = FUN_144b0f89b(2);
      if ((cVar6 != '\0') && ((longlong)*(int *)(lVar10 + 0x638) != 0)) {
        lVar2 = *(longlong *)(lVar10 + 0x630);
        lVar8 = (longlong)*(int *)(lVar10 + 0x638) * 0x80;
        lVar9 = 0;
        do {
          if (0 < *(int *)(lVar2 + 8 + lVar9)) {
            lVar10 = 0;
            goto LAB_149081367;
          }
          lVar9 = lVar9 + 0x80;
        } while (lVar8 != lVar9);
      }
      if (*(int *)(lVar10 + 0xc) != 0) {
        if (((char)local_f8 == '\0') || (*(char *)(lVar10 + 0x58) == '\0')) {
          if (*(char *)(lVar10 + 0x58) != '\0') {
            local_f8 = *(ulonglong *)(lVar10 + 0x58);
            local_128 = *(double *)(lVar10 + 0x28);
            dStack_120 = *(double *)(lVar10 + 0x30);
            local_118 = *(double *)(lVar10 + 0x38);
            dStack_110 = *(double *)(lVar10 + 0x40);
            local_108 = *(double *)(lVar10 + 0x48);
            dStack_100 = *(double *)(lVar10 + 0x50);
          }
        }
        else {
          uVar12 = SUB84(local_128,0);
          uVar13 = (undefined4)((ulonglong)local_128 >> 0x20);
          uVar15 = SUB84(dStack_120,0);
          uVar16 = (undefined4)((ulonglong)dStack_120 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x28);
          if (dVar17 <= local_128) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_128 = (double)CONCAT44(uVar13,uVar12);
          dVar17 = *(double *)(lVar10 + 0x30);
          if (dVar17 <= dStack_120) {
            uVar15 = SUB84(dVar17,0);
            uVar16 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          dStack_120 = (double)CONCAT44(uVar16,uVar15);
          uVar12 = SUB84(local_118,0);
          uVar13 = (undefined4)((ulonglong)local_118 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x38);
          if (dVar17 <= local_118) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_118 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(dStack_110,0);
          uVar13 = (undefined4)((ulonglong)dStack_110 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x40);
          if (dStack_110 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          dStack_110 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(local_108,0);
          uVar13 = (undefined4)((ulonglong)local_108 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x48);
          if (local_108 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          local_108 = (double)CONCAT44(uVar13,uVar12);
          uVar12 = SUB84(dStack_100,0);
          uVar13 = (undefined4)((ulonglong)dStack_100 >> 0x20);
          dVar17 = *(double *)(lVar10 + 0x50);
          if (dStack_100 <= dVar17) {
            uVar12 = SUB84(dVar17,0);
            uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
          }
          dStack_100 = (double)CONCAT44(uVar13,uVar12);
        }
      }
      goto LAB_149081172;
    }
    FUN_149082102(*(longlong *)(param_1 + 0x838),&local_168);
    local_f8 = local_138;
    local_108 = local_148;
    dStack_100 = dStack_140;
    local_118 = local_158;
    dStack_110 = dStack_150;
    local_128 = local_168;
    dStack_120 = uStack_160;
LAB_149081932:
    plVar3 = *(longlong **)(param_1 + 0x860);
    if (DAT_14cbf8160 == 1 && plVar3 != (longlong *)0x0) {
      dVar17 = 1.0 / *(double *)(param_1 + 0x1d8);
      dVar24 = 1.0 / *(double *)(param_1 + 0x1d0);
      dVar26 = 1.0 / *(double *)(param_1 + 0x1c8);
      (**(code **)(*plVar3 + 0x528))(plVar3,&local_168,param_3);
      dVar22 = (local_168 - dStack_150) * dVar26;
      dVar23 = (uStack_160 - local_148) * dVar24;
      local_190 = (local_158 - dStack_140) * dVar17;
      dVar28 = ((local_158 + dStack_140) * dVar17 - local_190) * 0.5;
      dVar24 = ((uStack_160 + local_148) * dVar24 - dVar23) * 0.5;
      dVar17 = ((local_168 + dStack_150) * dVar26 - dVar22) * 0.5;
      local_190 = local_190 + dVar28;
      dVar26 = dVar28 * dVar28 + dVar17 * dVar17 + dVar24 * dVar24;
      *param_2 = dVar22 + dVar17;
      param_2[1] = dVar23 + dVar24;
    }
    else {
      if (DAT_14cbf8160 != 2 || plVar3 == (longlong *)0x0) {
        if ((plVar3 == (longlong *)0x0) || (1 < *(int *)(param_1 + 0x788))) {
          FUN_144a1c3a2(&local_128,&local_168,param_3);
          dVar28 = (dStack_140 - local_158) * 0.5;
          dVar24 = (local_148 - uStack_160) * 0.5;
          dVar17 = (dStack_150 - local_168) * 0.5;
          dVar26 = SQRT(dVar28 * dVar28 + dVar17 * dVar17 + dVar24 * dVar24);
          *param_2 = local_168 + dVar17;
          param_2[1] = uStack_160 + dVar24;
          param_2[2] = local_158 + dVar28;
          param_2[3] = dVar17;
          param_2[4] = dVar24;
          param_2[5] = dVar28;
        }
        else {
          lVar10 = FUN_144a74fb4();
          dVar17 = 0.0;
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
              == lVar10 + 0x30)) {
            FUN_14349379a(plVar3,&local_168);
            local_1b0 = (dStack_100 - local_118) * 0.5;
            local_1b8 = (local_108 - dStack_120) * 0.5;
            local_1c0 = (dStack_110 - local_128) * 0.5;
            local_1c8 = local_118 + local_1b0;
            local_1d0 = dStack_120 + local_1b8;
            local_1d8 = local_128 + local_1c0;
            local_1a8 = SQRT(local_1b0 * local_1b0 + local_1c0 * local_1c0 + local_1b8 * local_1b8);
            FUN_147185ed0(&local_1a0,&local_168);
            dVar28 = (local_158 - dStack_140) - (local_190 - local_178);
            dVar24 = (uStack_160 - local_148) - (local_198 - local_180);
            dVar17 = (local_168 - dStack_150) - (local_1a0 - local_188);
            if (dVar17 <= dVar24) {
              dVar17 = dVar24;
            }
            if (dVar17 <= dVar28) {
              dVar17 = dVar28;
            }
            dVar28 = (local_190 + local_178) - (local_158 + dStack_140);
            dVar26 = (local_198 + local_180) - (uStack_160 + local_148);
            dVar24 = (local_1a0 + local_188) - (local_168 + dStack_150);
            if (dVar24 <= dVar26) {
              dVar24 = dVar26;
            }
            if (dVar24 <= dVar28) {
              dVar24 = dVar28;
            }
            dVar28 = 0.0;
            if (0.0 <= dVar17) {
              dVar28 = dVar17;
            }
            if (dVar28 <= dVar24) {
              dVar28 = dVar24;
            }
            dVar17 = (double)(float)dVar28;
          }
          dVar28 = 1.0 / *(double *)(param_1 + 0x1d8);
          dVar25 = 1.0 / *(double *)(param_1 + 0x1d0);
          dVar22 = 1.0 / *(double *)(param_1 + 0x1c8);
          (**(code **)(**(longlong **)(param_1 + 0x860) + 0x528))
                    (*(longlong **)(param_1 + 0x860),&local_168,&DAT_14c846480);
          dVar24 = (local_158 - dStack_140) * dVar28 - dVar17;
          dVar23 = (uStack_160 - local_148) * dVar25 - dVar17;
          dVar26 = (local_168 - dStack_150) * dVar22 - dVar17;
          local_138 = CONCAT71(local_138._1_7_,1);
          dVar28 = (local_158 + dStack_140) * dVar28 + dVar17;
          dVar25 = (uStack_160 + local_148) * dVar25 + dVar17;
          dVar17 = (local_168 + dStack_150) * dVar22 + dVar17;
          local_168 = dVar26;
          if (dVar17 <= dVar26) {
            local_168 = dVar17;
          }
          uStack_160 = dVar23;
          if (dVar25 <= dVar23) {
            uStack_160 = dVar25;
          }
          local_158 = dVar24;
          if (dVar28 <= dVar24) {
            local_158 = dVar28;
          }
          dStack_150 = dVar26;
          if (dVar26 <= dVar17) {
            dStack_150 = dVar17;
          }
          local_148 = dVar23;
          if (dVar23 <= dVar25) {
            local_148 = dVar25;
          }
          dStack_140 = dVar24;
          if (dVar24 <= dVar28) {
            dStack_140 = dVar28;
          }
          FUN_144a1c3a2(&local_168,&local_1a0,param_3);
          dVar28 = (local_178 - local_190) * 0.5;
          dVar24 = (local_180 - local_198) * 0.5;
          dVar17 = (local_188 - local_1a0) * 0.5;
          dVar26 = SQRT(dVar28 * dVar28 + dVar17 * dVar17 + dVar24 * dVar24);
          *param_2 = local_1a0 + dVar17;
          param_2[1] = local_198 + dVar24;
          param_2[2] = local_190 + dVar28;
          param_2[3] = dVar17;
          param_2[4] = dVar24;
        }
        goto LAB_149081832;
      }
      dVar28 = 1.0 / *(double *)(param_1 + 0x1d8);
      dVar23 = 1.0 / *(double *)(param_1 + 0x1d0);
      dVar26 = 1.0 / *(double *)(param_1 + 0x1c8);
      dVar17 = (dStack_100 - local_118) * 0.5;
      dVar22 = (local_108 - dStack_120) * 0.5;
      dVar24 = (dStack_110 - local_128) * 0.5;
      if (dVar24 <= dVar22) {
        dVar24 = dVar22;
      }
      if (dVar24 <= dVar17) {
        dVar24 = dVar17;
      }
      dVar17 = 0.0;
      if (0.0 <= dVar24) {
        dVar17 = dVar24;
      }
      (**(code **)(*plVar3 + 0x528))(plVar3,&local_1a0,&DAT_14c846480);
      local_138 = CONCAT71(local_138._1_7_,1);
      dStack_140 = (double)(float)dVar17;
      local_168 = (local_1a0 - local_188) * dVar26 - dStack_140;
      uStack_160 = (local_198 - local_180) * dVar23 - dStack_140;
      local_158 = (local_190 - local_178) * dVar28 - dStack_140;
      dStack_150 = (local_1a0 + local_188) * dVar26 + dStack_140;
      local_148 = (local_198 + local_180) * dVar23 + dStack_140;
      dStack_140 = (local_190 + local_178) * dVar28 + dStack_140;
      FUN_144a1c3a2(&local_168,&local_1a0,param_3);
      dVar28 = (local_178 - local_190) * 0.5;
      dVar24 = (local_180 - local_198) * 0.5;
      dVar17 = (local_188 - local_1a0) * 0.5;
      local_190 = local_190 + dVar28;
      dVar26 = dVar28 * dVar28 + dVar17 * dVar17 + dVar24 * dVar24;
      *param_2 = local_1a0 + dVar17;
      param_2[1] = local_198 + dVar24;
    }
    dVar26 = SQRT(dVar26);
    param_2[2] = local_190;
  }
LAB_149081832:
  dVar22 = (double)*(float *)(param_1 + 0x3ac);
  param_2[3] = dVar17 * dVar22;
  param_2[4] = dVar24 * dVar22;
  param_2[5] = dVar28 * dVar22;
  param_2[6] = dVar26 * dVar22;
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
  while (lVar8 = lVar8 + 0x390, lVar9 - lVar8 != 0) {
LAB_14908145e:
    if (0 < *(int *)(lVar2 + 0x28 + lVar8)) {
      dVar17 = *(double *)(lVar2 + 0x70 + lVar8);
      dVar24 = *(double *)(lVar2 + 0x78 + lVar8);
      dVar28 = *(double *)(lVar2 + 0x80 + lVar8);
      dVar26 = *(double *)(lVar2 + 0x88 + lVar8);
      dVar22 = *(double *)(lVar2 + 0x90 + lVar8);
      dVar23 = *(double *)(lVar2 + 0x98 + lVar8);
      cVar6 = *(char *)(lVar2 + 0xa0 + lVar8);
      if (((char)local_f8 == '\0') || (cVar6 == '\0')) {
        if (cVar6 != '\0') {
          local_f8._5_3_ = (undefined3)((uint)*(undefined4 *)(lVar2 + lVar8 + 0xa4) >> 8);
          local_f8._0_5_ = CONCAT41(*(undefined4 *)(lVar2 + lVar8 + 0xa1),cVar6);
          local_128 = dVar17;
          dStack_120 = dVar24;
          local_118 = dVar28;
          dStack_110 = dVar26;
          local_108 = dVar22;
          dStack_100 = dVar23;
        }
      }
      else {
        uVar12 = SUB84(local_128,0);
        uVar13 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar15 = SUB84(dStack_120,0);
        uVar16 = (undefined4)((ulonglong)dStack_120 >> 0x20);
        if (dVar17 <= local_128) {
          uVar12 = SUB84(dVar17,0);
          uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
        }
        if (dVar24 <= dStack_120) {
          uVar15 = SUB84(dVar24,0);
          uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        uVar18 = SUB84(local_118,0);
        uVar20 = (undefined4)((ulonglong)local_118 >> 0x20);
        if (dVar28 <= local_118) {
          uVar18 = SUB84(dVar28,0);
          uVar20 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        if (dStack_110 <= dVar26) {
          dStack_110 = dVar26;
        }
        if (local_108 <= dVar22) {
          local_108 = dVar22;
        }
        uVar19 = SUB84(dStack_100,0);
        uVar21 = (undefined4)((ulonglong)dStack_100 >> 0x20);
        if (dStack_100 <= dVar23) {
          uVar19 = SUB84(dVar23,0);
          uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        local_128 = (double)CONCAT44(uVar13,uVar12);
        dStack_120 = (double)CONCAT44(uVar16,uVar15);
        local_118 = (double)CONCAT44(uVar20,uVar18);
        dStack_100 = (double)CONCAT44(uVar21,uVar19);
      }
      break;
    }
  }
LAB_149081092:
  if ((longlong)*(int *)(lVar10 + 0x638) != 0) {
    lVar2 = *(longlong *)(lVar10 + 0x630);
    lVar10 = (longlong)*(int *)(lVar10 + 0x638) * 0x80;
    lVar8 = 0;
    do {
      if (0 < *(int *)(lVar2 + 8 + lVar8)) {
        lVar8 = 0;
        goto LAB_14908147c;
      }
      lVar8 = lVar8 + 0x80;
    } while (lVar10 != lVar8);
  }
LAB_1490810bf:
  auVar4._16_16_ = auVar29;
  auVar4._0_16_ = auVar27;
  auVar29._8_8_ = auVar27._0_8_;
  auVar27 = maxpd(auVar27,auVar4._8_16_);
  auVar27 = maxpd(auVar27,auVar29);
  dVar17 = (double)(local_168._4_4_ * 0.5 * fVar14 * (1.0 / (float)auVar27._0_8_));
  local_128 = local_128 - dVar17;
  dStack_120 = dStack_120 - dVar17;
  local_118 = local_118 - dVar17;
  dStack_110 = dStack_110 + dVar17;
  local_108 = local_108 + dVar17;
  dStack_100 = dVar17 + dStack_100;
LAB_149081172:
  iVar11 = iVar11 + 1;
  if (iVar11 == iVar1) goto LAB_149081932;
  goto LAB_149080f0f;
  while (lVar8 = lVar8 + 0x80, lVar10 != lVar8) {
LAB_14908147c:
    if (0 < *(int *)(lVar2 + 8 + lVar8)) {
      dVar17 = *(double *)(lVar2 + 0x40 + lVar8);
      dVar24 = *(double *)(lVar2 + 0x48 + lVar8);
      dVar28 = *(double *)(lVar2 + 0x50 + lVar8);
      dVar26 = *(double *)(lVar2 + 0x58 + lVar8);
      dVar22 = *(double *)(lVar2 + 0x60 + lVar8);
      dVar23 = *(double *)(lVar2 + 0x68 + lVar8);
      cVar6 = *(char *)(lVar2 + 0x70 + lVar8);
      if (((char)local_f8 == '\0') || (cVar6 == '\0')) {
        if (cVar6 != '\0') {
          local_f8._5_3_ = (undefined3)((uint)*(undefined4 *)(lVar8 + lVar2 + 0x74) >> 8);
          local_f8._0_5_ = CONCAT41(*(undefined4 *)(lVar8 + lVar2 + 0x71),cVar6);
          local_128 = dVar17;
          dStack_120 = dVar24;
          local_118 = dVar28;
          dStack_110 = dVar26;
          local_108 = dVar22;
          dStack_100 = dVar23;
        }
      }
      else {
        uVar12 = SUB84(local_128,0);
        uVar13 = (undefined4)((ulonglong)local_128 >> 0x20);
        uVar15 = SUB84(dStack_120,0);
        uVar16 = (undefined4)((ulonglong)dStack_120 >> 0x20);
        if (dVar17 <= local_128) {
          uVar12 = SUB84(dVar17,0);
          uVar13 = (undefined4)((ulonglong)dVar17 >> 0x20);
        }
        if (dVar24 <= dStack_120) {
          uVar15 = SUB84(dVar24,0);
          uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        uVar18 = SUB84(local_118,0);
        uVar20 = (undefined4)((ulonglong)local_118 >> 0x20);
        if (dVar28 <= local_118) {
          uVar18 = SUB84(dVar28,0);
          uVar20 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        if (dStack_110 <= dVar26) {
          dStack_110 = dVar26;
        }
        if (local_108 <= dVar22) {
          local_108 = dVar22;
        }
        uVar19 = SUB84(dStack_100,0);
        uVar21 = (undefined4)((ulonglong)dStack_100 >> 0x20);
        if (dStack_100 <= dVar23) {
          uVar19 = SUB84(dVar23,0);
          uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        local_128 = (double)CONCAT44(uVar13,uVar12);
        dStack_120 = (double)CONCAT44(uVar16,uVar15);
        local_118 = (double)CONCAT44(uVar20,uVar18);
        dStack_100 = (double)CONCAT44(uVar21,uVar19);
      }
      break;
    }
  }
  goto LAB_1490810bf;
  while (lVar10 = lVar10 + 0x390, lVar9 - lVar10 != 0) {
LAB_14908134d:
    if (0 < *(int *)(lVar2 + 0x28 + lVar10)) {
      dVar26 = *(double *)(lVar2 + 0x70 + lVar10);
      dVar22 = *(double *)(lVar2 + 0x78 + lVar10);
      dVar17 = *(double *)(lVar2 + 0x80 + lVar10);
      uVar18 = SUB84(dVar17,0);
      uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar23 = *(double *)(lVar2 + 0x88 + lVar10);
      dVar24 = *(double *)(lVar2 + 0x90 + lVar10);
      uVar15 = SUB84(dVar24,0);
      uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar28 = *(double *)(lVar2 + 0x98 + lVar10);
      uVar12 = SUB84(dVar28,0);
      uVar13 = (undefined4)((ulonglong)dVar28 >> 0x20);
      cVar6 = *(char *)(lVar2 + 0xa0 + lVar10);
      if (((char)local_f8 != '\0') && (cVar6 != '\0')) goto LAB_1490813cd;
      if (cVar6 != '\0') {
        puVar7 = (undefined4 *)(lVar2 + lVar10 + 0xa1);
        local_128 = dVar26;
        dStack_120 = dVar22;
        local_118 = dVar17;
        dStack_110 = dVar23;
        local_108 = dVar24;
        dStack_100 = dVar28;
        goto LAB_14908156b;
      }
      break;
    }
  }
  goto LAB_149081172;
  while (lVar10 = lVar10 + 0x80, lVar8 != lVar10) {
LAB_149081367:
    if (0 < *(int *)(lVar2 + 8 + lVar10)) {
      dVar26 = *(double *)(lVar2 + 0x40 + lVar10);
      dVar22 = *(double *)(lVar2 + 0x48 + lVar10);
      dVar17 = *(double *)(lVar2 + 0x50 + lVar10);
      uVar18 = SUB84(dVar17,0);
      uVar20 = (undefined4)((ulonglong)dVar17 >> 0x20);
      dVar23 = *(double *)(lVar2 + 0x58 + lVar10);
      dVar24 = *(double *)(lVar2 + 0x60 + lVar10);
      uVar15 = SUB84(dVar24,0);
      uVar16 = (undefined4)((ulonglong)dVar24 >> 0x20);
      dVar28 = *(double *)(lVar2 + 0x68 + lVar10);
      uVar12 = SUB84(dVar28,0);
      uVar13 = (undefined4)((ulonglong)dVar28 >> 0x20);
      cVar6 = *(char *)(lVar2 + 0x70 + lVar10);
      if (((char)local_f8 == '\0') || (cVar6 == '\0')) {
        if (cVar6 != '\0') {
          puVar7 = (undefined4 *)(lVar10 + lVar2 + 0x71);
          local_128 = dVar26;
          dStack_120 = dVar22;
          local_118 = dVar17;
          dStack_110 = dVar23;
          local_108 = dVar24;
          dStack_100 = dVar28;
LAB_14908156b:
          local_f8._5_3_ = (undefined3)((uint)*(undefined4 *)((longlong)puVar7 + 3) >> 8);
          local_f8._0_5_ = CONCAT41(*puVar7,cVar6);
        }
      }
      else {
LAB_1490813cd:
        if (dVar26 <= local_128) {
          local_128 = dVar26;
        }
        if (dVar22 <= dStack_120) {
          dStack_120 = dVar22;
        }
        if ((double)CONCAT44(uVar20,uVar18) <= local_118) {
          local_118 = (double)CONCAT44(uVar20,uVar18);
        }
        uVar18 = SUB84(dStack_110,0);
        uVar20 = (undefined4)((ulonglong)dStack_110 >> 0x20);
        if (dStack_110 <= dVar23) {
          uVar18 = SUB84(dVar23,0);
          uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dStack_110 = (double)CONCAT44(uVar20,uVar18);
        if (local_108 <= (double)CONCAT44(uVar16,uVar15)) {
          local_108 = (double)CONCAT44(uVar16,uVar15);
        }
        uVar15 = SUB84(dStack_100,0);
        uVar16 = (int)((ulonglong)dStack_100 >> 0x20);
        if (dStack_100 <= (double)CONCAT44(uVar13,uVar12)) {
          uVar15 = uVar12;
          uVar16 = uVar13;
        }
        dStack_100 = (double)CONCAT44(uVar16,uVar15);
      }
      break;
    }
  }
  goto LAB_149081172;
}



// FUNCTION 149082102 FUN_149082102 body=461 status=ok
// SIG undefined FUN_149082102(void)

double * FUN_149082102(longlong *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  double dVar11;
  
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  plVar9 = (longlong *)(**(code **)(*param_1 + 8))();
  lVar8 = plVar9[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar4 = *plVar9;
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar4 + 0x98 + lVar10);
      if ((*(char *)(param_2 + 6) == '\0') || (cVar3 == '\0')) {
        if (cVar3 != '\0') {
          pdVar1 = (double *)(lVar4 + 0x68 + lVar10);
          param_2[6] = pdVar1[6];
          dVar2 = *pdVar1;
          dVar11 = pdVar1[1];
          dVar5 = pdVar1[2];
          dVar6 = pdVar1[3];
          dVar7 = pdVar1[5];
          param_2[4] = pdVar1[4];
          param_2[5] = dVar7;
          param_2[2] = dVar5;
          param_2[3] = dVar6;
          *param_2 = dVar2;
          param_2[1] = dVar11;
        }
      }
      else {
        dVar2 = *(double *)(lVar4 + 0x68 + lVar10);
        dVar11 = *param_2;
        if (dVar2 <= *param_2) {
          dVar11 = dVar2;
        }
        *param_2 = dVar11;
        dVar2 = *(double *)(lVar4 + 0x70 + lVar10);
        dVar11 = param_2[1];
        if (dVar2 <= param_2[1]) {
          dVar11 = dVar2;
        }
        param_2[1] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x78 + lVar10);
        dVar11 = param_2[2];
        if (dVar2 <= param_2[2]) {
          dVar11 = dVar2;
        }
        param_2[2] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x80 + lVar10);
        dVar11 = param_2[3];
        if (param_2[3] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[3] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x88 + lVar10);
        dVar11 = param_2[4];
        if (param_2[4] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[4] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x90 + lVar10);
        dVar11 = param_2[5];
        if (param_2[5] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[5] = dVar11;
      }
      lVar10 = lVar10 + 0xa0;
    } while ((longlong)(int)lVar8 * 0xa0 != lVar10);
  }
  plVar9 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
  lVar8 = plVar9[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar4 = *plVar9;
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar4 + 0x98 + lVar10);
      if ((*(char *)(param_2 + 6) == '\0') || (cVar3 == '\0')) {
        if (cVar3 != '\0') {
          pdVar1 = (double *)(lVar4 + 0x68 + lVar10);
          param_2[6] = pdVar1[6];
          dVar2 = *pdVar1;
          dVar11 = pdVar1[1];
          dVar5 = pdVar1[2];
          dVar6 = pdVar1[3];
          dVar7 = pdVar1[5];
          param_2[4] = pdVar1[4];
          param_2[5] = dVar7;
          param_2[2] = dVar5;
          param_2[3] = dVar6;
          *param_2 = dVar2;
          param_2[1] = dVar11;
        }
      }
      else {
        dVar2 = *(double *)(lVar4 + 0x68 + lVar10);
        dVar11 = *param_2;
        if (dVar2 <= *param_2) {
          dVar11 = dVar2;
        }
        *param_2 = dVar11;
        dVar2 = *(double *)(lVar4 + 0x70 + lVar10);
        dVar11 = param_2[1];
        if (dVar2 <= param_2[1]) {
          dVar11 = dVar2;
        }
        param_2[1] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x78 + lVar10);
        dVar11 = param_2[2];
        if (dVar2 <= param_2[2]) {
          dVar11 = dVar2;
        }
        param_2[2] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x80 + lVar10);
        dVar11 = param_2[3];
        if (param_2[3] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[3] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x88 + lVar10);
        dVar11 = param_2[4];
        if (param_2[4] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[4] = dVar11;
        dVar2 = *(double *)(lVar4 + 0x90 + lVar10);
        dVar11 = param_2[5];
        if (param_2[5] <= dVar2) {
          dVar11 = dVar2;
        }
        param_2[5] = dVar11;
      }
      lVar10 = lVar10 + 0xa0;
    } while ((longlong)(int)lVar8 * 0xa0 != lVar10);
  }
  return param_2;
}



// FUNCTION 1490822e6 FUN_1490822e6 body=24 status=ok
// SIG undefined FUN_1490822e6(void)

bool FUN_1490822e6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x618))();
  return iVar1 != -1;
}



// FUNCTION 1490822fe FUN_1490822fe body=117 status=ok
// SIG undefined FUN_1490822fe(void)

undefined8 * FUN_1490822fe(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FUN_149071e22(*(longlong *)(param_1 + 0x660),&local_28);
    if ((undefined8 *)&local_28 == param_2) {
      if (CONCAT44(uStack_24,local_28) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_28;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_24;
      *(undefined4 *)(param_2 + 1) = uStack_20;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149082374 FUN_149082374 body=47 status=ok
// SIG undefined FUN_149082374(void)

int FUN_149082374(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x660) == 0) {
    iVar1 = 1;
  }
  else {
    lVar2 = FUN_14906ec04();
    iVar1 = 1;
    if (1 < *(int *)(lVar2 + 8)) {
      iVar1 = *(int *)(lVar2 + 8);
    }
  }
  return iVar1;
}



// FUNCTION 1490823a4 FUN_1490823a4 body=348 status=ok
// SIG undefined FUN_1490823a4(void)

longlong * FUN_1490823a4(longlong param_1,int param_2,uint param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_68 [38];
  char local_42 [2];
  ulonglong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_14062ad08();
  if (plVar2 == (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x660) == 0) ||
       (lVar3 = FUN_14906ec04(), *(int *)(lVar3 + 8) <= param_2)) {
      bVar4 = false;
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = (longlong *)FUN_14906ec04(*(undefined8 *)(param_1 + 0x660));
      plVar2 = *(longlong **)(*plVar2 + (longlong)param_2 * 0x10);
      bVar4 = plVar2 == (longlong *)0x0;
    }
  }
  else {
    bVar4 = false;
  }
  if (((*(longlong *)(param_1 + 0xb0) == 0) ||
      (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar3 == 0)) ||
     (*(int *)(lVar3 + 8) == 5)) {
LAB_1490823f7:
    if (!(bool)(bVar4 & param_3 < 3)) goto LAB_149082410;
LAB_149082402:
    lVar3 = (ulonglong)param_3 * 8 + 0x758;
  }
  else {
    if (plVar2 == (longlong *)0x0) {
      if (2 < param_3) goto LAB_149082410;
      goto LAB_149082402;
    }
    if (param_3 != 0) goto LAB_1490823f7;
    FUN_14470a074(plVar2,local_40);
    if ((local_40[0] == 0 || (local_40[0] >> 0x24 & 1) != 0) &&
       ((**(code **)(*plVar2 + 0x410))(plVar2,local_42), local_42[0] < '\0')) {
      bVar1 = FUN_1417e25f3(plVar2);
      lVar3 = 0x758;
      if ((~bVar1 & 1) == 0 && !bVar4) goto LAB_149082410;
    }
    else {
      lVar3 = 0x758;
    }
  }
  plVar2 = *(longlong **)(param_1 + lVar3);
LAB_149082410:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2;
}



// FUNCTION 149082502 FUN_149082502 body=576 status=ok
// SIG undefined FUN_149082502(void)

undefined8 FUN_149082502(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (*(longlong *)(param_1 + 0x660) != 0) {
    uVar8 = CONCAT62((int6)((ulonglong)unaff_RBX >> 0x10),0x9b);
    if ((*(longlong *)(param_1 + 0xb0) != 0) &&
       (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), lVar6 != 0)) {
      uVar8 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar6 + 8) * 2);
    }
    lVar6 = FUN_14906ed82();
    iVar1 = *(int *)(lVar6 + 8);
    if (iVar1 != 0) {
      iVar12 = 0;
      do {
        lVar6 = (longlong)iVar12 * 0x690 + *(longlong *)(*(longlong *)(param_1 + 0x660) + 0xf0);
        cVar3 = FUN_144b0f89b(0,uVar8 & 0xffffffff);
        if (cVar3 != '\0') {
          uVar2 = *(undefined8 *)(param_1 + 0x660);
          plVar7 = (longlong *)FUN_14906ed82(uVar2);
          iVar4 = FUN_1490702fe(uVar2,*(undefined8 *)(*plVar7 + (longlong)iVar12 * 0x30));
          if (iVar4 == param_2) {
            return 0;
          }
        }
        cVar3 = FUN_144b0f89b(1,uVar8 & 0xffffffff);
        if ((cVar3 != '\0') && ((longlong)*(int *)(lVar6 + 0x628) != 0)) {
          lVar13 = *(longlong *)(lVar6 + 0x620);
          lVar9 = (longlong)*(int *)(lVar6 + 0x628) * 0x390 + lVar13;
          iVar4 = 0;
          do {
            if (0 < *(int *)(lVar13 + 0x28)) {
              plVar7 = (longlong *)FUN_14906ea8a(*(undefined8 *)(param_1 + 0x660));
              iVar5 = -1;
              if ((longlong)(int)plVar7[1] != 0) {
                lVar11 = *plVar7;
                lVar10 = 0;
                do {
                  if ((*(int *)(lVar11 + 0x80 + lVar10) == iVar12) &&
                     (*(int *)(lVar11 + 0x84 + lVar10) == iVar4)) {
                    iVar5 = FUN_1490702fe(*(undefined8 *)(param_1 + 0x660),
                                          *(undefined8 *)(lVar11 + 8 + lVar10));
                    break;
                  }
                  lVar10 = lVar10 + 0xa0;
                } while ((longlong)(int)plVar7[1] * 0xa0 != lVar10);
              }
              if (iVar5 == param_2) {
                return 1;
              }
            }
            iVar4 = iVar4 + 1;
            lVar13 = lVar13 + 0x390;
          } while (lVar13 != lVar9);
        }
        cVar3 = FUN_144b0f89b(2,uVar8 & 0xffffffff);
        if ((cVar3 != '\0') && ((longlong)*(int *)(lVar6 + 0x638) != 0)) {
          lVar13 = *(longlong *)(lVar6 + 0x630);
          lVar6 = (longlong)*(int *)(lVar6 + 0x638) * 0x80 + lVar13;
          iVar4 = 0;
          do {
            if (0 < *(int *)(lVar13 + 8)) {
              plVar7 = (longlong *)FUN_14906ec7c(*(undefined8 *)(param_1 + 0x660));
              iVar5 = -1;
              if ((longlong)(int)plVar7[1] != 0) {
                lVar9 = *plVar7;
                lVar11 = 0;
                do {
                  if ((*(int *)(lVar9 + 0x68 + lVar11) == iVar12) &&
                     (*(int *)(lVar9 + 0x6c + lVar11) == iVar4)) {
                    iVar5 = FUN_1490702fe(*(undefined8 *)(param_1 + 0x660),
                                          *(undefined8 *)(lVar9 + 8 + lVar11));
                    break;
                  }
                  lVar11 = lVar11 + 0x80;
                } while ((longlong)(int)plVar7[1] * 0x80 != lVar11);
              }
              if (iVar5 == param_2) {
                return 2;
              }
            }
            iVar4 = iVar4 + 1;
            lVar13 = lVar13 + 0x80;
          } while (lVar13 != lVar6);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar1);
    }
  }
  return 0;
}



// FUNCTION 149082742 FUN_149082742 body=35 status=ok
// SIG undefined FUN_149082742(void)

void FUN_149082742(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_149082502();
  FUN_1490823a4(param_1,param_2,uVar1);
  return;
}



// FUNCTION 149082766 FUN_149082766 body=44 status=ok
// SIG undefined FUN_149082766(void)

undefined8 FUN_149082766(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  uVar2 = 0;
  if (((lVar1 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0x108))) {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x100) + (ulonglong)param_2 * 0x58);
  }
  return uVar2;
}



// FUNCTION 149082792 FUN_149082792 body=203 status=ok
// SIG undefined FUN_149082792(void)

void FUN_149082792(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_1 + 0x668) != 0) &&
      (plVar1 = *(longlong **)(param_1 + 0x838), plVar1 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0x831) == '\x01')) {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2,*(undefined1 *)(param_1 + 0x832));
    cVar2 = FUN_144a61b4f();
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    local_70 = 0;
    FUN_14485c47a(&local_70,param_1);
    local_58 = 0;
    local_48 = &PTR_LAB_14baa3830;
    local_40 = local_70;
    local_68 = FUN_14442a394;
    FUN_1407461b0(1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149082870 FUN_149082870 body=342 status=ok
// SIG undefined FUN_149082870(void)

undefined8 * FUN_149082870(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *param_1 = &PTR_FUN_14ba9fda0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_14908561a(param_1 + 8);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x29] = 0xffffffff;
  param_1[0x2a] = 0xbf80000000000000;
  param_1[0x2b] = 0xbf800000;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xffffffff;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x34;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x40;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x4c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x58;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x66] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x68;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x74] = 0;
  param_1[0x75] = 3;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b2) = 1;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  return param_1;
}



// FUNCTION 1490829c6 FUN_1490829c6 body=59 status=ok
// SIG undefined FUN_1490829c6(void)

longlong FUN_1490829c6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14908c70a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x68 + *param_1;
  FUN_14908c6eb(lVar2);
  return lVar2;
}



// FUNCTION 149082a02 FUN_149082a02 body=63 status=ok
// SIG undefined FUN_149082a02(void)

longlong FUN_149082a02(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14908c7aa(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_14908c79a(lVar2);
  return lVar2;
}



// FUNCTION 149082a42 FUN_149082a42 body=385 status=ok
// SIG undefined FUN_149082a42(void)

void FUN_149082a42(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined1 *puVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  int *local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x660) != 0) {
    FUN_149070066(*(longlong *)(param_1 + 0x660),&local_58,DAT_14ca85550);
    iVar3 = 0;
    if ((longlong)local_50 != 0) {
      uVar9 = *param_2;
      local_60 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
      ;
      lVar8 = (longlong)local_50 * 0x38;
      lVar7 = local_58 + 8;
      do {
        sVar2 = (short)*(undefined4 *)(lVar7 + -8);
        if (sVar2 == -1) {
          sVar2 = 0;
        }
        lVar4 = FUN_1490823a4(param_1,(int)sVar2,*(undefined4 *)(lVar7 + -4));
        lVar6 = DAT_14ca97140;
        if (lVar4 != 0) {
          if (*(int *)(lVar7 + -4) == 0) {
            if (*local_60 == 0x40000002) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_144a61b4f();
              uVar5 = (uVar5 ^ 1) & 0xff;
            }
            uVar5 = (ulonglong)(0 < *(int *)(lVar6 + uVar5 * 4));
          }
          else {
            uVar5 = 0;
          }
          uVar9 = uVar9 & 0xffffffffffffffc0 | uVar5;
          iVar3 = FUN_14472446e(param_3);
          lVar6 = *(longlong *)(param_3 + 0x120);
          if (*(longlong *)(param_3 + 0x120) == 0) {
            lVar6 = param_3;
          }
          puVar1 = (undefined1 *)(lVar6 + (longlong)iVar3 * 0x48);
          *(longlong *)(puVar1 + 8) = lVar4;
          FUN_144737676(puVar1 + 0x18,lVar7);
          *(ulonglong *)(puVar1 + 0x10) = uVar9;
          *puVar1 = 1;
        }
        lVar7 = lVar7 + 0x38;
        lVar8 = lVar8 + -0x38;
        iVar3 = local_50;
      } while (lVar8 != 0);
    }
    FUN_149079a85(local_58,iVar3);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149082bc4 FUN_149082bc4 body=255 status=ok
// SIG undefined FUN_149082bc4(void)

void FUN_149082bc4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448aa298();
  FUN_14907faf0(param_1);
  if (DAT_14c7649dc == '\x01') {
    FUN_145d22e9c();
    (**(code **)(DAT_14cbf7f28 + 0x98))(&DAT_14cbf7f28,param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x120);
  if (lVar3 != 0) {
    lVar2 = FUN_14081cebe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) goto LAB_149082c2d;
  }
  lVar3 = 0;
LAB_149082c2d:
  if (((*(longlong *)(param_1 + 0x858) == 0) ||
      (*(longlong *)(param_1 + 0x660) != *(longlong *)(param_1 + 0x858))) ||
     (lVar3 != *(longlong *)(param_1 + 0x860))) {
    FUN_14441a6a0(param_1,0);
  }
  else if (*(longlong *)(param_1 + 0x668) != 0) {
    FUN_149082792(param_1,*(undefined4 *)(param_1 + 0x834));
  }
  FUN_149080166(param_1);
  plVar1 = *(longlong **)(param_1 + 0x738);
  if (plVar1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,*(undefined8 *)(param_1 + 0x748));
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
  }
  *(longlong *)(param_1 + 0x740) = lVar3;
  return;
}



// FUNCTION 149082cc4 FUN_149082cc4 body=95 status=ok
// SIG undefined FUN_149082cc4(void)

void FUN_149082cc4(longlong param_1)

{
  FUN_1447c0e7a();
  FUN_14907fc9c(param_1);
  if (DAT_14c7649dc == '\x01') {
    if (*(longlong **)(param_1 + 0x838) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x838) + 0x30))();
    }
    FUN_145d22e9c();
    (**(code **)(DAT_14cbf7f28 + 0xa0))(&DAT_14cbf7f28,param_1);
  }
  *(undefined8 *)(param_1 + 0x740) = 0;
  return;
}



// FUNCTION 149082d24 FUN_149082d24 body=32 status=ok
// SIG undefined FUN_149082d24(void)

void FUN_149082d24(undefined8 param_1,undefined4 param_2)

{
  FUN_145c58d0a();
  FUN_1400f8246(param_1,param_2);
  return;
}



// FUNCTION 149082d44 FUN_149082d44 body=124 status=ok
// SIG undefined FUN_149082d44(void)

void FUN_149082d44(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1401c4d14();
  if (*(longlong *)(param_1 + 0x660) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x9f) & 0x44) != 4) {
    return;
  }
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 != 0) {
    lVar1 = FUN_14081cebe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) goto LAB_149082d9f;
  }
  lVar2 = 0;
LAB_149082d9f:
  if (*(longlong *)(param_1 + 0x860) == lVar2) {
    return;
  }
  FUN_14441a6a0(param_1,0);
  return;
}



// FUNCTION 149082dc0 FUN_149082dc0 body=64 status=ok
// SIG undefined FUN_149082dc0(void)

void FUN_149082dc0(undefined8 param_1,uint *param_2)

{
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2 & 0xffffff;
  FUN_1401c3e38();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149082e02 FUN_149082e02 body=98 status=ok
// SIG undefined FUN_149082e02(void)

void FUN_149082e02(longlong param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x834) = 0;
  uVar1 = 0;
  if (((*(longlong *)(param_1 + 0x668) != 0) && (*(char *)(param_1 + 0x831) == '\x01')) &&
     (DAT_14c7649dc == '\x01')) {
    FUN_145d22e9c(param_1,0);
    (**(code **)(DAT_14cbf7f28 + 0xa8))(&DAT_14cbf7f28,param_1);
    uVar1 = *(undefined4 *)(param_1 + 0x834);
  }
  FUN_149082792(param_1,uVar1);
  return;
}



// FUNCTION 149082e64 FUN_149082e64 body=7 status=ok
// SIG undefined FUN_149082e64(void)

undefined1 FUN_149082e64(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x833);
}



// FUNCTION 149082e6c FUN_149082e6c body=326 status=ok
// SIG undefined FUN_149082e6c(void)

void FUN_149082e6c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [13];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar7 = &DAT_14c846480;
  puVar8 = param_2;
  for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  if (*(char *)(param_1 + 0x6b2) == '\x01') {
    lVar6 = *(longlong *)(param_1 + 0x860);
    if (lVar6 != 0) {
      lVar3 = FUN_144a74fb4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        lVar3 = FUN_144a81888(lVar6);
        if ((lVar3 != 0) && (1 < *(int *)(param_1 + 0x6c8))) {
          plVar4 = (longlong *)FUN_144a81888(lVar6);
          uVar5 = (**(code **)(*plVar4 + 0x310))(plVar4);
          iVar1 = *(int *)(param_1 + 0x6c8) + -1;
          if (*(int *)(param_1 + 0x6c8) == 0) {
            iVar1 = 0;
          }
          FUN_1446f82e2(local_30,iVar1,*(undefined8 *)(param_1 + 0x6c0),1);
          uVar2 = FUN_144a750a0(uVar5,local_30);
          FUN_144ae2166(lVar6,local_98,uVar2);
          puVar7 = local_98;
          for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
            *param_2 = *puVar7;
            puVar7 = puVar7 + 1;
            param_2 = param_2 + 1;
          }
          goto LAB_149082f95;
        }
      }
    }
    puVar7 = (undefined8 *)(param_1 + 0x240);
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *param_2 = *puVar7;
      puVar7 = puVar7 + 1;
      param_2 = param_2 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
LAB_149082f95:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149082fb4 FUN_149082fb4 body=292 status=ok
// SIG undefined FUN_149082fb4(void)

undefined8 FUN_149082fb4(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149082e6c(param_1 + -0x658);
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x40);
    lVar6 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      cVar2 = FUN_144729dda(puVar7);
      if (cVar2 != '\0') {
        plVar3 = (longlong *)FUN_14479d2ce(puVar7);
        lVar4 = (**(code **)(*plVar3 + 0xb98))(plVar3);
        if (lVar4 != 0) {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_14181f664(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *puVar7;
          plVar3 = (longlong *)FUN_14479d2ce(puVar7);
          uVar5 = (**(code **)(*plVar3 + 0xb98))(plVar3);
          local_48 = 0;
          FUN_14485c47a(&local_48,uVar5);
          iVar1 = (int)param_4[1];
          *(uint *)(param_4 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
            FUN_14181f7c6(param_4,iVar1);
          }
          *(undefined8 *)(*param_4 + (longlong)iVar1 * 8) = local_48;
        }
      }
      puVar7 = puVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return *(undefined8 *)(param_1 + 0x38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490830da FUN_1490830da body=50 status=ok
// SIG undefined FUN_1490830da(void)

void FUN_1490830da(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x740) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2a0))();
  }
  FUN_1448f1f76(param_1,param_2);
  return;
}



// FUNCTION 14908310c FUN_14908310c body=47 status=ok
// SIG undefined FUN_14908310c(void)

void FUN_14908310c(longlong param_1)

{
  FUN_144807930();
  if (*(longlong **)(param_1 + 0x740) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014908312d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x2a8))();
    return;
  }
  return;
}



// FUNCTION 149083140 FUN_149083140 body=262 status=ok
// SIG undefined FUN_149083140(void)

void FUN_149083140(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_14062ac50();
  if (param_3 != '\0') {
    cVar3 = FUN_144b0f89b(3,0x9b);
    if (cVar3 != '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0x750);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_144769b64(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
    }
  }
  cVar3 = FUN_144b0f89b(0,0x9b);
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x758);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  cVar3 = FUN_144b0f89b(1,0x9b);
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x760);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  cVar3 = FUN_144b0f89b(2,0x9b);
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x768);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144769b64(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}



// FUNCTION 149083246 FUN_149083246 body=260 status=ok
// SIG undefined FUN_149083246(void)

void FUN_149083246(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x850) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x848);
    plVar1 = plVar5 + *(int *)(param_1 + 0x850);
    do {
      lVar4 = *plVar5;
      if (*(longlong *)(lVar4 + 0x20) != 0) {
        uVar3 = FUN_149083700();
        FUN_146820164(param_2,uVar3);
        lVar4 = *plVar5;
      }
      FUN_14908334a(param_2,*(undefined8 *)(lVar4 + 0x30));
      lVar4 = *plVar5;
      if (*(longlong *)(lVar4 + 0x48) != 0) {
        uVar3 = FUN_149083700();
        FUN_146820164(param_2,uVar3);
        lVar4 = *plVar5;
      }
      FUN_14908334a(param_2,*(undefined8 *)(lVar4 + 0x70));
      lVar4 = *plVar5;
      iVar2 = *(int *)(lVar4 + 0x118);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x110);
        lVar6 = 0;
        do {
          FUN_1490833ab(param_2,*(undefined8 *)(lVar4 + 8 + lVar6));
          lVar6 = lVar6 + 0x68;
        } while ((longlong)iVar2 * 0x68 - lVar6 != 0);
        lVar4 = *plVar5;
      }
      iVar2 = *(int *)(lVar4 + 0x128);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x120);
        lVar6 = 0;
        do {
          FUN_1490833e6(param_2,*(undefined8 *)(lVar4 + 8 + lVar6));
          lVar6 = lVar6 + 0x30;
        } while ((longlong)iVar2 * 0x30 != lVar6);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 14908334a FUN_14908334a body=97 status=ok
// SIG undefined FUN_14908334a(void)

void FUN_14908334a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar2 = param_2[1];
  iVar4 = 0;
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar5 = 0;
    do {
      iVar3 = FUN_149085720(*(undefined8 *)(lVar1 + lVar5));
      iVar4 = iVar4 + iVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar5);
  }
  FUN_146820164(param_1,iVar4);
  return;
}



// FUNCTION 1490833ab FUN_1490833ab body=59 status=ok
// SIG undefined FUN_1490833ab(void)

void FUN_1490833ab(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    iVar2 = 0;
    iVar3 = 0;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    lVar1 = *(longlong *)(param_2 + 0x70);
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    FUN_146820164(param_1,iVar2 + iVar3);
    return;
  }
  return;
}



// FUNCTION 1490833e6 FUN_1490833e6 body=59 status=ok
// SIG undefined FUN_1490833e6(void)

void FUN_1490833e6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + 0x50);
    iVar2 = 0;
    iVar3 = 0;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    lVar1 = *(longlong *)(param_2 + 0x70);
    if (lVar1 != 0) {
      iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
    }
    FUN_146820164(param_1,iVar2 + iVar3);
    return;
  }
  return;
}



// FUNCTION 149083422 FUN_149083422 body=529 status=ok
// SIG undefined FUN_149083422(void)

int * FUN_149083422(int *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar5 = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    iVar5 = FUN_149083700();
  }
  plVar1 = *(longlong **)(param_2 + 0x30);
  iVar7 = 0;
  if ((plVar1 != (longlong *)0x0) && (lVar8 = plVar1[1], iVar7 = 0, (longlong)(int)lVar8 != 0)) {
    lVar2 = *plVar1;
    lVar9 = 0;
    iVar7 = 0;
    do {
      iVar3 = FUN_149085720(*(undefined8 *)(lVar2 + lVar9));
      iVar7 = iVar7 + iVar3;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar9);
  }
  *param_1 = iVar7 + iVar5;
  iVar7 = 0;
  iVar5 = 0;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    iVar5 = FUN_149083700();
  }
  plVar1 = *(longlong **)(param_2 + 0x70);
  if ((plVar1 != (longlong *)0x0) && (lVar8 = plVar1[1], (longlong)(int)lVar8 != 0)) {
    lVar2 = *plVar1;
    lVar9 = 0;
    iVar7 = 0;
    do {
      iVar3 = FUN_149085720(*(undefined8 *)(lVar2 + lVar9));
      iVar7 = iVar7 + iVar3;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar8 * 8 != lVar9);
  }
  iVar6 = 0;
  iVar3 = 0;
  if (*(longlong *)(param_2 + 0x60) != 0) {
    iVar3 = FUN_149083768();
  }
  if ((*(char *)(param_2 + 0x80) == '\x01') && (lVar8 = *(longlong *)(param_2 + 0x78), lVar8 != 0))
  {
    lVar2 = *(longlong *)(lVar8 + 0x50);
    iVar6 = 0;
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
    }
    lVar8 = *(longlong *)(lVar8 + 0x70);
    if (lVar8 != 0) {
      iVar6 = *(int *)(lVar8 + 0x14) * *(int *)(lVar8 + 0x10);
    }
    iVar6 = iVar6 + iVar4;
  }
  param_1[1] = iVar7 + iVar5 + iVar3 + iVar6;
  iVar5 = 0;
  iVar7 = 0;
  if ((longlong)*(int *)(param_2 + 0x118) != 0) {
    lVar8 = 0;
    iVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x110) + 8 + lVar8);
      iVar3 = 0;
      if (lVar2 != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x50);
        iVar3 = 0;
        iVar6 = 0;
        if (lVar9 != 0) {
          iVar6 = *(int *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x10);
        }
        lVar2 = *(longlong *)(lVar2 + 0x70);
        if (lVar2 != 0) {
          iVar3 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
        }
        iVar3 = iVar3 + iVar6;
      }
      iVar7 = iVar7 + iVar3;
      lVar8 = lVar8 + 0x68;
    } while ((longlong)*(int *)(param_2 + 0x118) * 0x68 - lVar8 != 0);
  }
  param_1[2] = iVar7;
  if ((longlong)*(int *)(param_2 + 0x128) != 0) {
    lVar8 = 0;
    iVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x120) + 8 + lVar8);
      iVar7 = 0;
      if (lVar2 != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x50);
        iVar7 = 0;
        iVar3 = 0;
        if (lVar9 != 0) {
          iVar3 = *(int *)(lVar9 + 0x14) * *(int *)(lVar9 + 0x10);
        }
        lVar2 = *(longlong *)(lVar2 + 0x70);
        if (lVar2 != 0) {
          iVar7 = *(int *)(lVar2 + 0x14) * *(int *)(lVar2 + 0x10);
        }
        iVar7 = iVar7 + iVar3;
      }
      iVar5 = iVar5 + iVar7;
      lVar8 = lVar8 + 0x30;
    } while ((longlong)*(int *)(param_2 + 0x128) * 0x30 != lVar8);
  }
  param_1[3] = iVar5;
  return param_1;
}



// FUNCTION 149083633 FUN_149083633 body=204 status=ok
// SIG undefined FUN_149083633(void)

void FUN_149083633(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < DAT_14cbf8280) {
    FUN_1490736aa(&local_28,0x10,1,0);
    uVar1 = (ulonglong)local_18;
    if ((int)local_18 < local_20 && -1 < (int)local_18) {
      do {
        *(undefined2 *)(*(longlong *)(local_28 + uVar1 * 8) + 0x790) = 0x101;
        lVar2 = (longlong)(int)uVar1;
        do {
          lVar3 = lVar2;
          lVar2 = lVar3 + 1;
          local_18 = (int)uVar1 + 1;
          uVar1 = (ulonglong)local_18;
          if (local_20 <= lVar2) goto LAB_1490836ed;
        } while (*(longlong *)(local_28 + lVar2 * 8) == 0);
      } while ((-2 < lVar3) && ((int)local_18 < local_20));
    }
LAB_1490836ed:
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  DAT_14cbf8280 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149083700 FUN_149083700 body=103 status=ok
// SIG undefined FUN_149083700(void)

int FUN_149083700(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x50);
  iVar2 = 0;
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  iVar5 = 0;
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  return iVar2 + iVar3 + iVar4 + iVar5;
}



// FUNCTION 149083768 FUN_149083768 body=106 status=ok
// SIG undefined FUN_149083768(void)

int FUN_149083768(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  iVar2 = 0;
  iVar3 = 0;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    iVar2 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xa0);
  iVar5 = 0;
  iVar4 = 0;
  if (lVar1 != 0) {
    iVar4 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    iVar5 = *(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10);
  }
  return iVar2 + iVar3 + iVar4 + iVar5;
}



// FUNCTION 1490837de FUN_1490837de body=42 status=ok
// SIG undefined FUN_1490837de(void)

void FUN_1490837de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149083810 FUN_149083810 body=96 status=ok
// SIG undefined FUN_149083810(void)

undefined8 FUN_149083810(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3ab64();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbf8d18,1);
  return uVar3;
}



// FUNCTION 149083870 FUN_149083870 body=52 status=ok
// SIG undefined FUN_149083870(void)

void FUN_149083870(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1490838a4 FUN_1490838a4 body=42 status=ok
// SIG undefined FUN_1490838a4(void)

void FUN_1490838a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1490838d6 FUN_1490838d6 body=96 status=ok
// SIG undefined FUN_1490838d6(void)

undefined8 FUN_1490838d6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9cefa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbf8da0,1);
  return uVar3;
}



// FUNCTION 149083936 FUN_149083936 body=52 status=ok
// SIG undefined FUN_149083936(void)

void FUN_149083936(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14908396a FUN_14908396a body=177 status=ok
// SIG undefined FUN_14908396a(void)

void FUN_14908396a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_145e9cefa();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cbf8da0,param_4);
  local_78 = &DAT_14cbf8da0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14908c968(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149083a1c FUN_149083a1c body=42 status=ok
// SIG undefined FUN_149083a1c(void)

void FUN_149083a1c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149083a4e FUN_149083a4e body=96 status=ok
// SIG undefined FUN_149083a4e(void)

undefined8 FUN_149083a4e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e79d42();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbf8e28,1);
  return uVar3;
}



// FUNCTION 149083aae FUN_149083aae body=52 status=ok
// SIG undefined FUN_149083aae(void)

void FUN_149083aae(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149083ae2 FUN_149083ae2 body=42 status=ok
// SIG undefined FUN_149083ae2(void)

void FUN_149083ae2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149083b14 FUN_149083b14 body=96 status=ok
// SIG undefined FUN_149083b14(void)

undefined8 FUN_149083b14(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e07512();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cbf8eb0,1);
  return uVar3;
}



// FUNCTION 149083b74 FUN_149083b74 body=52 status=ok
// SIG undefined FUN_149083b74(void)

void FUN_149083b74(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}


