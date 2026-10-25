// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147cbf864 FUN_147cbf864 body=38 status=ok
// SIG undefined FUN_147cbf864(void)

void FUN_147cbf864(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147cbf8d8 FUN_147cbf8d8 body=247 status=ok
// SIG undefined FUN_147cbf8d8(void)

longlong * FUN_147cbf8d8(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_1446ddbd2();
  if (*param_2 == 0) {
    if ((int)param_2[3] != 0) goto LAB_147cbf906;
  }
  else {
    cVar1 = FUN_144729dda(param_2 + 1);
    if ((cVar1 != '\0') || ((int)param_2[3] == 0)) {
      lVar3 = *param_2;
      goto LAB_147cbf979;
    }
LAB_147cbf906:
    lVar3 = FUN_14007daa4(param_2,0,0);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (bVar5) goto LAB_147cbf92b;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147cbf92b:
        *param_2 = lVar3;
        goto LAB_147cbf979;
      }
    }
    if (*param_2 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  lVar3 = 0;
LAB_147cbf979:
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  lVar2 = param_2[4];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[4];
    }
  }
  param_1[4] = lVar2;
  lVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = lVar2;
  *(short *)(param_1 + 7) = (short)param_2[7];
  return param_1;
}



// FUNCTION 147cbfa1c FUN_147cbfa1c body=54 status=ok
// SIG undefined FUN_147cbfa1c(void)

undefined1 FUN_147cbfa1c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147cbfb34(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 147cbfa7a FUN_147cbfa7a body=59 status=ok
// SIG undefined FUN_147cbfa7a(void)

undefined8 FUN_147cbfa7a(longlong *param_1)

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



// FUNCTION 147cbfac0 FUN_147cbfac0 body=38 status=ok
// SIG undefined FUN_147cbfac0(void)

void FUN_147cbfac0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147cbfb34 FUN_147cbfb34 body=204 status=ok
// SIG undefined FUN_147cbfb34(void)

longlong * FUN_147cbfb34(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar2 = FUN_1446ddbd2();
  if (*param_2 == 0) {
    if ((int)param_2[3] != 0) goto LAB_147cbfb62;
  }
  else {
    cVar1 = FUN_144729dda(param_2 + 1);
    if ((cVar1 != '\0') || ((int)param_2[3] == 0)) {
      lVar3 = *param_2;
      goto LAB_147cbfbd5;
    }
LAB_147cbfb62:
    lVar3 = FUN_14007daa4(param_2,0,0);
    if (lVar3 != 0) {
      lVar4 = *(longlong *)(lVar3 + 8);
      if (*(ulonglong *)(lVar2 + 8) == 0) {
        bVar5 = lVar4 != 0;
        if (lVar4 != lVar2 && bVar5) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar5 = lVar4 != 0;
            if (lVar4 == lVar2) break;
          } while (lVar4 != 0);
        }
        if (bVar5) goto LAB_147cbfb87;
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) {
LAB_147cbfb87:
        *param_2 = lVar3;
        goto LAB_147cbfbd5;
      }
    }
    if (*param_2 != 0) {
      *param_2 = 0;
      param_2[1] = 0;
    }
  }
  lVar3 = 0;
LAB_147cbfbd5:
  *param_1 = lVar3;
  param_1[1] = param_2[1];
  FUN_1406fa324(param_1 + 2,param_2 + 2);
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 147cbfc4a FUN_147cbfc4a body=54 status=ok
// SIG undefined FUN_147cbfc4a(void)

undefined1 FUN_147cbfc4a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147cbfd62(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 147cbfca8 FUN_147cbfca8 body=59 status=ok
// SIG undefined FUN_147cbfca8(void)

undefined8 FUN_147cbfca8(longlong *param_1)

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



// FUNCTION 147cbfcee FUN_147cbfcee body=38 status=ok
// SIG undefined FUN_147cbfcee(void)

void FUN_147cbfcee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong *)(param_2 + 0x20) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 147cbfd62 FUN_147cbfd62 body=303 status=ok
// SIG undefined FUN_147cbfd62(void)

undefined8 * FUN_147cbfd62(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[1];
    }
  }
  param_1[1] = lVar3;
  plVar1 = param_2 + 2;
  lVar3 = FUN_1446ddbd2();
  if (param_2[2] == 0) {
    if (*(int *)(param_2 + 5) != 0) goto LAB_147cbfdb9;
  }
  else {
    cVar2 = FUN_144729dda(param_2 + 3);
    if ((cVar2 != '\0') || (*(int *)(param_2 + 5) == 0)) {
      lVar4 = *plVar1;
      goto LAB_147cbfe2c;
    }
LAB_147cbfdb9:
    lVar4 = FUN_14007daa4(plVar1,0,0);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(lVar4 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar6) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar6 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar6) goto LAB_147cbfdde;
      }
      else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_147cbfdde:
        *plVar1 = lVar4;
        goto LAB_147cbfe2c;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      param_2[3] = 0;
    }
  }
  lVar4 = 0;
LAB_147cbfe2c:
  param_1[2] = lVar4;
  param_1[3] = param_2[3];
  FUN_1406fa324(param_1 + 4,param_2 + 4);
  lVar3 = param_2[6];
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[6];
    }
  }
  param_1[6] = lVar3;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined2 *)((longlong)param_1 + 0x3c) = *(undefined2 *)((longlong)param_2 + 0x3c);
  return param_1;
}



// FUNCTION 147cbfef6 FUN_147cbfef6 body=59 status=ok
// SIG undefined FUN_147cbfef6(void)

undefined8 FUN_147cbfef6(longlong *param_1)

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



// FUNCTION 147cc0008 FUN_147cc0008 body=59 status=ok
// SIG undefined FUN_147cc0008(void)

undefined8 FUN_147cc0008(longlong *param_1)

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



// FUNCTION 147cc00d6 FUN_147cc00d6 body=54 status=ok
// SIG undefined FUN_147cc00d6(void)

undefined1 FUN_147cc00d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147cc01ee(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147cc0134 FUN_147cc0134 body=59 status=ok
// SIG undefined FUN_147cc0134(void)

undefined8 FUN_147cc0134(longlong *param_1)

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



// FUNCTION 147cc017a FUN_147cc017a body=37 status=ok
// SIG undefined FUN_147cc017a(void)

void FUN_147cc017a(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147cc01ee FUN_147cc01ee body=88 status=ok
// SIG undefined FUN_147cc01ee(void)

undefined8 * FUN_147cc01ee(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145ac54b8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147cc02b2 FUN_147cc02b2 body=54 status=ok
// SIG undefined FUN_147cc02b2(void)

undefined1 FUN_147cc02b2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145ac504a(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 147cc0310 FUN_147cc0310 body=59 status=ok
// SIG undefined FUN_147cc0310(void)

undefined8 FUN_147cc0310(longlong *param_1)

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



// FUNCTION 147cc0356 FUN_147cc0356 body=32 status=ok
// SIG undefined FUN_147cc0356(void)

void FUN_147cc0356(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x78) == '\x01') {
    FUN_140b3ac2a(param_2);
    *(undefined1 *)(param_2 + 0x78) = 0;
  }
  return;
}



// FUNCTION 147cc03c6 FUN_147cc03c6 body=48 status=ok
// SIG undefined FUN_147cc03c6(void)

void FUN_147cc03c6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 147cc03f6 FUN_147cc03f6 body=98 status=ok
// SIG undefined FUN_147cc03f6(void)

void FUN_147cc03f6(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_140b3acda(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147cc0458 FUN_147cc0458 body=62 status=ok
// SIG undefined FUN_147cc0458(void)

void FUN_147cc0458(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cc0496(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147cc0496 FUN_147cc0496 body=112 status=ok
// SIG undefined FUN_147cc0496(void)

ulonglong FUN_147cc0496(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147cc04d0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147cc04d0:
  return param_2 & 0xffffffff;
}



// FUNCTION 147cc0508 FUN_147cc0508 body=64 status=ok
// SIG undefined FUN_147cc0508(void)

void FUN_147cc0508(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147cc054a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x48) = param_2;
    }
  }
  return;
}



// FUNCTION 147cc054a FUN_147cc054a body=102 status=ok
// SIG undefined FUN_147cc054a(void)

void FUN_147cc054a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x40;
    if (0x40 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (*(int *)(param_1 + 0x4c) != 0) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar4;
    FUN_147cc05b2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147cc05b2 FUN_147cc05b2 body=127 status=ok
// SIG undefined FUN_147cc05b2(void)

void FUN_147cc05b2(undefined8 *param_1,int param_2,uint param_3)

{
  undefined8 *_Src;
  undefined8 uVar1;
  void *pvVar2;
  
  _Src = param_1 + 1;
  pvVar2 = (void *)*param_1;
  if (param_3 < 0x41) {
    if (pvVar2 != _Src) {
      memmove(_Src,pvVar2,(longlong)param_2);
      FUN_1400020a8(pvVar2);
      *param_1 = _Src;
    }
  }
  else {
    if (pvVar2 == _Src) {
      pvVar2 = (void *)FUN_14001fdce(0,(longlong)(int)param_3,0);
      *param_1 = pvVar2;
      memcpy(pvVar2,_Src,(longlong)param_2);
      return;
    }
    uVar1 = FUN_14001fdce(pvVar2,(longlong)(int)param_3,0);
    *param_1 = uVar1;
  }
  return;
}



// FUNCTION 147cc0632 FUN_147cc0632 body=283 status=ok
// SIG undefined FUN_147cc0632(void)

void FUN_147cc0632(longlong param_1,ulonglong *param_2,longlong param_3,ulonglong *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double *pdVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong *local_50;
  int local_48;
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_1 + 0x70);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
  bVar2 = *(byte *)(param_3 + 0x70);
  local_44 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x178))();
  local_58 = *(longlong *)(param_3 + 0x78);
  local_48 = *(int *)(local_58 + 0x34);
  local_50 = param_4;
  local_40 = bVar2;
  FUN_144a8a902(&local_58,(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      if ((bVar1 & 1) == 0) {
        uVar6 = *param_2;
      }
      else {
        uVar6 = *param_2;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_2;
        }
      }
      if ((int)local_50[1] == 0) {
        pdVar8 = (double *)0x0;
      }
      else {
        if ((local_40 & 1) == 0) {
          uVar7 = *local_50;
        }
        else {
          uVar7 = *local_50;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)local_50 + ((longlong)uVar7 >> 0x18);
          }
        }
        pdVar8 = (double *)(local_48 * lVar5 + uVar7);
      }
      *pdVar8 = (double)*(float *)(uVar6 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + iVar3;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc074e FUN_147cc074e body=283 status=ok
// SIG undefined FUN_147cc074e(void)

void FUN_147cc074e(longlong param_1,ulonglong *param_2,longlong param_3,ulonglong *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float *pfVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong *local_50;
  int local_48;
  undefined4 local_44;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_1 + 0x70);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x178))();
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x34);
  bVar2 = *(byte *)(param_3 + 0x70);
  local_44 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x178))();
  local_58 = *(longlong *)(param_3 + 0x78);
  local_48 = *(int *)(local_58 + 0x34);
  local_50 = param_4;
  local_40 = bVar2;
  FUN_144a8a902(&local_58,(int)param_2[1]);
  if (0 < (int)param_2[1]) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      if ((bVar1 & 1) == 0) {
        uVar6 = *param_2;
      }
      else {
        uVar6 = *param_2;
        if ((uVar6 & 1) != 0) {
          uVar6 = ((longlong)uVar6 >> 0x18) + (longlong)param_2;
        }
      }
      if ((int)local_50[1] == 0) {
        pfVar8 = (float *)0x0;
      }
      else {
        if ((local_40 & 1) == 0) {
          uVar7 = *local_50;
        }
        else {
          uVar7 = *local_50;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)local_50 + ((longlong)uVar7 >> 0x18);
          }
        }
        pfVar8 = (float *)(local_48 * lVar5 + uVar7);
      }
      *pfVar8 = (float)*(double *)(uVar6 + lVar4);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + iVar3;
    } while (lVar5 < (int)param_2[1]);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc086a FUN_147cc086a body=448 status=ok
// SIG undefined FUN_147cc086a(void)

void FUN_147cc086a(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_c8 [32];
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = *(byte *)(param_1 + 0x98);
  local_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  local_50 = *(undefined8 *)(param_1 + 0x80);
  uStack_48 = *(undefined8 *)(param_1 + 0x88);
  local_40 = *(undefined8 *)(param_1 + 0x90);
  local_70 = *(undefined1 *)(param_3 + 0x98);
  local_a0 = *(undefined8 *)(param_3 + 0x70);
  uStack_98 = *(undefined8 *)(param_3 + 0x78);
  local_88 = *(undefined4 *)(param_3 + 0x80);
  uStack_84 = *(undefined4 *)(param_3 + 0x84);
  uStack_80 = *(undefined4 *)(param_3 + 0x88);
  uStack_7c = *(undefined4 *)(param_3 + 0x8c);
  local_78 = *(undefined8 *)(param_3 + 0x90);
  local_90 = param_4;
  local_58 = param_2;
  FUN_140458a4e(&local_a0,0);
  iVar1 = (int)param_2[1];
  iVar4 = 0;
  if (0 < iVar1) {
    iVar7 = 0;
    do {
      local_a8 = (double)CONCAT44(local_a8._4_4_,iVar7);
      cVar3 = FUN_1446ec082(&local_68,&local_a8);
      iVar4 = iVar7;
      if (cVar3 != '\0') break;
      iVar7 = iVar7 + 1;
      iVar4 = iVar1;
    } while (iVar1 != iVar7);
  }
  local_a8 = (double)CONCAT44(local_a8._4_4_,iVar4);
  cVar3 = FUN_1446ec082(&local_68);
  if (cVar3 != '\0') {
    do {
      if ((local_38 & 1) == 0) {
        lVar5 = (longlong)local_40._4_4_ * (longlong)iVar4 + *local_58;
      }
      else {
        uVar2 = *local_58;
        uVar6 = ((longlong)uVar2 >> 0x18) + (longlong)local_58;
        if ((uVar2 & 1) == 0) {
          uVar6 = uVar2;
        }
        lVar5 = (longlong)local_40._4_4_ * (longlong)iVar4 + uVar6;
      }
      local_a8 = (double)*(float *)(lVar5 + (int)local_50);
      FUN_140bb828e(&local_a0,lVar5,&local_a8);
      uVar2 = local_58[1];
      do {
        iVar4 = iVar4 + 1;
        if ((int)uVar2 <= iVar4) break;
        local_a8 = (double)CONCAT44(local_a8._4_4_,iVar4);
        cVar3 = FUN_1446ec082(&local_68,&local_a8);
      } while (cVar3 == '\0');
      local_a8 = (double)CONCAT44(local_a8._4_4_,iVar4);
      cVar3 = FUN_1446ec082(&local_68,&local_a8);
    } while (cVar3 != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc0a2c FUN_147cc0a2c body=469 status=ok
// SIG undefined FUN_147cc0a2c(void)

void FUN_147cc0a2c(longlong param_1,ulonglong *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  ulonglong uVar2;
  char cVar3;
  float fVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  byte local_40;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_40 = *(byte *)(param_1 + 0x98);
  local_70 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x78);
  local_58 = *(undefined8 *)(param_1 + 0x80);
  uStack_50 = *(undefined8 *)(param_1 + 0x88);
  local_48 = *(undefined8 *)(param_1 + 0x90);
  local_78 = *(undefined1 *)(param_3 + 0x98);
  local_a8 = *(undefined8 *)(param_3 + 0x70);
  uStack_a0 = *(undefined8 *)(param_3 + 0x78);
  local_90 = *(undefined4 *)(param_3 + 0x80);
  uStack_8c = *(undefined4 *)(param_3 + 0x84);
  uStack_88 = *(undefined4 *)(param_3 + 0x88);
  uStack_84 = *(undefined4 *)(param_3 + 0x8c);
  local_80 = *(undefined8 *)(param_3 + 0x90);
  local_98 = param_4;
  local_60 = param_2;
  FUN_140458a4e(&local_a8,0);
  fVar1 = *(float *)(param_2 + 1);
  fVar4 = 0.0;
  if (0 < (int)fVar1) {
    fVar7 = 0.0;
    do {
      local_34 = fVar7;
      cVar3 = FUN_1446ec082(&local_70,&local_34);
      fVar4 = fVar7;
      if (cVar3 != '\0') break;
      fVar7 = (float)((int)fVar7 + 1);
      fVar4 = fVar1;
    } while (fVar1 != fVar7);
  }
  local_34 = fVar4;
  cVar3 = FUN_1446ec082(&local_70);
  if (cVar3 != '\0') {
    do {
      if ((local_40 & 1) == 0) {
        lVar5 = (longlong)local_48._4_4_ * (longlong)(int)fVar4 + *local_60;
      }
      else {
        uVar2 = *local_60;
        uVar6 = ((longlong)uVar2 >> 0x18) + (longlong)local_60;
        if ((uVar2 & 1) == 0) {
          uVar6 = uVar2;
        }
        lVar5 = (longlong)local_48._4_4_ * (longlong)(int)fVar4 + uVar6;
      }
      local_34 = (float)*(double *)(lVar5 + (int)local_58);
      FUN_140bb828e(&local_a8,lVar5,&local_34);
      uVar2 = local_60[1];
      do {
        fVar4 = (float)((int)fVar4 + 1);
        if ((int)uVar2 <= (int)fVar4) break;
        local_34 = fVar4;
        cVar3 = FUN_1446ec082(&local_70,&local_34);
      } while (cVar3 == '\0');
      local_34 = fVar4;
      cVar3 = FUN_1446ec082(&local_70,&local_34);
    } while (cVar3 != '\0');
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc0c02 FUN_147cc0c02 body=97 status=ok
// SIG undefined FUN_147cc0c02(void)

void FUN_147cc0c02(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14365ddc6(param_1 + 0x15);
  puVar2 = (undefined8 *)param_1[0x17];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc0c59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147cc0c64 FUN_147cc0c64 body=102 status=ok
// SIG undefined FUN_147cc0c64(void)

void FUN_147cc0c64(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    if ((*plVar2 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1400020a8(plVar2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc0cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147cc0cca FUN_147cc0cca body=113 status=ok
// SIG undefined FUN_147cc0cca(void)

void FUN_147cc0cca(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14365df86(param_1 + 0x15);
  if (*(char *)((longlong)param_1 + 0xe4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  }
  puVar2 = (undefined8 *)param_1[0x1b];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc0d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147cc0d40 FUN_147cc0d40 body=48 status=ok
// SIG undefined FUN_147cc0d40(void)

void FUN_147cc0d40(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147cc0d70 FUN_147cc0d70 body=48 status=ok
// SIG undefined FUN_147cc0d70(void)

void FUN_147cc0d70(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147cc0da0 FUN_147cc0da0 body=133 status=ok
// SIG undefined FUN_147cc0da0(void)

longlong FUN_147cc0da0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147cc0e26();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x20;
    if (lVar3 + lVar2 != 0) goto LAB_147cc0dd9;
  }
  local_30 = param_3;
  FUN_147cc0ee2(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 << 5;
LAB_147cc0dd9:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc0e26 FUN_147cc0e26 body=188 status=ok
// SIG undefined FUN_147cc0e26(void)

int FUN_147cc0e26(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar7 = *param_1;
      do {
        lVar8 = (longlong)iVar3 * 0x20;
        puVar4 = *(undefined8 **)(lVar7 + lVar8);
        plVar6 = *(longlong **)(lVar7 + 8 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if (puVar4 == (undefined8 *)*param_3) {
          cVar5 = '\x01';
        }
        else {
          cVar5 = (**(code **)*puVar4)();
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        if (cVar5 != '\0') {
          return iVar3;
        }
        lVar7 = *param_1;
        iVar3 = *(int *)(lVar7 + 0x18 + lVar8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 147cc0ee2 FUN_147cc0ee2 body=289 status=ok
// SIG undefined FUN_147cc0ee2(void)

undefined4 * FUN_147cc0ee2(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147cc1004(param_1,local_40);
  puVar1 = (undefined8 *)*param_4;
  *local_38 = *puVar1;
  lVar6 = puVar1[1];
  local_38[1] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(local_38 + 2) = 0;
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  cVar2 = FUN_147cc10ea(param_1,param_3,local_38);
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_38 + 0x1c) = param_3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_40[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_147cc127c(param_1);
    }
  }
  *param_2 = local_40[0];
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc1004 FUN_147cc1004 body=229 status=ok
// SIG undefined FUN_147cc1004(void)

int * FUN_147cc1004(longlong *param_1,int *param_2)

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



// FUNCTION 147cc10ea FUN_147cc10ea body=287 status=ok
// SIG undefined FUN_147cc10ea(void)

undefined8 FUN_147cc10ea(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_48 = *param_3;
    plVar4 = (longlong *)param_3[1];
    local_40 = plVar4;
    if (plVar4 == (longlong *)0x0) {
      iVar9 = FUN_147cc0e26(param_1,param_2,&local_48);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar9 = FUN_147cc0e26(param_1);
      if (plVar4 != (longlong *)0x0) {
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
    }
    if (iVar9 != -1) {
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
      plVar4 = *(longlong **)(*param_1 + 8 + (longlong)iVar9 * 0x20);
      if (plVar4 != (longlong *)0x0) {
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
      uVar5 = *(undefined4 *)param_3;
      uVar6 = *(undefined4 *)((longlong)param_3 + 4);
      uVar7 = *(undefined4 *)(param_3 + 1);
      uVar8 = *(undefined4 *)((longlong)param_3 + 0xc);
      *(undefined8 *)(puVar3 + 4) = param_3[2];
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_147cc120a(param_1,*param_4);
      *param_4 = iVar9;
      uVar10 = 1;
      goto LAB_147cc1112;
    }
  }
  uVar10 = 0;
LAB_147cc1112:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc120a FUN_147cc120a body=114 status=ok
// SIG undefined FUN_147cc120a(void)

void FUN_147cc120a(longlong *param_1,int param_2)

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



// FUNCTION 147cc127c FUN_147cc127c body=489 status=ok
// SIG undefined FUN_147cc127c(void)

void FUN_147cc127c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar6 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar6 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar12 = local_68._4_4_;
      local_68 = uVar6;
      do {
        lVar4 = *local_80;
        lVar8 = (longlong)iVar12 * 0x20;
        plVar10 = *(longlong **)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        iVar7 = (**(code **)(*plVar10 + 0x40))();
        uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
        iVar7 = (int)uVar9;
        *(int *)(lVar4 + lVar8 + 0x1c) = iVar7;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + lVar8 + 0x18) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar12;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar5 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar12 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar6;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc1466 FUN_147cc1466 body=372 status=ok
// SIG undefined FUN_147cc1466(void)

longlong * FUN_147cc1466(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x158,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x158);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145b24e95(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_147cc16b4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0xbe82 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147bc9b62(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x158;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_147cab176(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147cc15dc(param_2);
        FUN_147bc9b62(param_1,uVar3);
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



// FUNCTION 147cc15dc FUN_147cc15dc body=62 status=ok
// SIG undefined FUN_147cc15dc(void)

longlong FUN_147cc15dc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cc1620(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x158 + *param_1;
  thunk_FUN_147caa1f4(lVar2);
  return lVar2;
}



// FUNCTION 147cc161a thunk_FUN_147caa1f4 body=5 status=ok
// SIG undefined thunk_FUN_147caa1f4(void)

undefined8 * thunk_FUN_147caa1f4(undefined8 *param_1)

{
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0xffffffffffffffff;
  param_1[0x26] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x27) = 0x42000000;
  *(byte *)((longlong)param_1 + 0x13c) = *(byte *)((longlong)param_1 + 0x13c) & 0xf0;
  param_1[0x28] = 0x41000000;
  param_1[0x29] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3f800000;
  return param_1;
}



// FUNCTION 147cc1620 FUN_147cc1620 body=146 status=ok
// SIG undefined FUN_147cc1620(void)

void FUN_147cc1620(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x158,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x158)) {
      uVar5 = uVar4 / 0x158 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x158,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc16b4 FUN_147cc16b4 body=111 status=ok
// SIG undefined FUN_147cc16b4(void)

void FUN_147cc16b4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x158,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x158)) {
      uVar2 = uVar1 / 0x158 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x158,8);
  }
  return;
}



// FUNCTION 147cc1723 FUN_147cc1723 body=107 status=ok
// SIG undefined FUN_147cc1723(void)

longlong * FUN_147cc1723(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + lVar2),4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + lVar2) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x10);
  return param_1;
}



// FUNCTION 147cc178e FUN_147cc178e body=60 status=ok
// SIG undefined FUN_147cc178e(void)

void FUN_147cc178e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cc17e0(param_1,iVar1);
  }
  FUN_147cc17ca((longlong)iVar1 * 8 + *param_1,1);
  return;
}



// FUNCTION 147cc17ca FUN_147cc17ca body=22 status=ok
// SIG undefined FUN_147cc17ca(void)

void FUN_147cc17ca(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    *(undefined8 *)(param_1 + lVar1 * 8) = 0xffffffff;
    lVar1 = lVar1 + 1;
  } while (param_2 != (int)lVar1);
  return;
}



// FUNCTION 147cc17e0 FUN_147cc17e0 body=132 status=ok
// SIG undefined FUN_147cc17e0(void)

void FUN_147cc17e0(longlong param_1,int param_2)

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



// FUNCTION 147cc1866 FUN_147cc1866 body=122 status=ok
// SIG undefined FUN_147cc1866(void)

void FUN_147cc1866(longlong param_1,int param_2)

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
    FUN_140043092(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc18e2 FUN_147cc18e2 body=378 status=ok
// SIG undefined FUN_147cc18e2(void)

longlong * FUN_147cc18e2(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xb0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb0);
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
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147cc1a9c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1745d < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_147cab77e(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xb0;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147cc1a9c(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_147cc1a5e(param_2);
        FUN_147cab77e(param_1,uVar3);
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



// FUNCTION 147cc1a5e FUN_147cc1a5e body=62 status=ok
// SIG undefined FUN_147cc1a5e(void)

longlong FUN_147cc1a5e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147cbec34(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb0 + *param_1;
  FUN_147cc1b0c(lVar2);
  return lVar2;
}



// FUNCTION 147cc1a9c FUN_147cc1a9c body=112 status=ok
// SIG undefined FUN_147cc1a9c(void)

void FUN_147cc1a9c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,0x10);
  }
  return;
}



// FUNCTION 147cc1b0c FUN_147cc1b0c body=44 status=ok
// SIG undefined FUN_147cc1b0c(void)

void FUN_147cc1b0c(void *param_1)

{
  memset(param_1,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0x3f800000ff7f7fff;
  return;
}



// FUNCTION 147cc1b38 FUN_147cc1b38 body=1192 status=ok
// SIG undefined FUN_147cc1b38(void)

void FUN_147cc1b38(longlong param_1,int param_2,double *param_3,double *param_4,float *param_5,
                  longlong *param_6)

{
  double *pdVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int *piVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar32;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_128 [32];
  float *local_108;
  longlong *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_b0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar20 = (longlong)param_2;
  piVar4 = (int *)(*(longlong *)(param_1 + 0x60) + 4 + lVar20 * 8);
  *piVar4 = *piVar4 + 1;
  iVar18 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar20 * 8);
  if (iVar18 == -1) {
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x80) + lVar20 * 0x10);
    iVar18 = *(int *)(*(longlong *)(param_1 + 0x80) + 8 + lVar20 * 0x10);
    lVar22 = (longlong)iVar18;
    if ((3 < lVar22) &&
       (*(double *)(param_1 + 0xa0) <= param_3[4] && param_3[4] != *(double *)(param_1 + 0xa0))) {
      if (plVar3 != param_6) {
        if (*param_6 != 0) {
          FUN_1400020a8();
        }
        *param_6 = *plVar3;
        *plVar3 = 0;
        *(int *)(param_6 + 1) = (int)plVar3[1];
        *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)((longlong)plVar3 + 0xc);
        plVar3[1] = 0;
      }
      iVar18 = FUN_147cc1fe2(param_1);
      *(int *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(iVar18 - 1U >> 3) * 4) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x60) + lVar20 * 8) = iVar18;
      *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar20 * 8) = 0;
      if ((longlong)(int)param_6[1] != 0) {
        pfVar21 = (float *)*param_6;
        lVar20 = (longlong)(int)param_6[1] * 0xb0;
        do {
          local_e8 = (double)pfVar21[2];
          dStack_f0 = (double)pfVar21[1];
          local_f8 = (double)*pfVar21;
          dStack_e0 = 0.0;
          local_d8 = (double)pfVar21[3];
          local_c8._8_8_ = 0;
          local_c8._0_8_ = local_d8;
          local_100 = param_6;
          local_108 = pfVar21;
          dStack_d0 = local_d8;
          FUN_147cc1b38(param_1,param_2,param_3,&local_f8);
          pfVar21 = pfVar21 + 0x2c;
          lVar20 = lVar20 + -0xb0;
        } while (lVar20 != 0);
      }
      *(undefined4 *)(param_6 + 1) = 0;
      plVar3 = param_6;
      if (*(int *)((longlong)param_6 + 0xc) < 0) {
        FUN_147cc1a9c(param_6,0);
        plVar3 = param_6;
      }
      goto LAB_147cc1e6c;
    }
    uVar19 = iVar18 + 1;
    *(uint *)(plVar3 + 1) = uVar19;
    if (*(uint *)((longlong)plVar3 + 0xc) < uVar19) {
      FUN_147cbec34(plVar3);
    }
    lVar20 = *plVar3;
  }
  else {
    dVar26 = *param_4;
    dVar28 = param_4[1];
    dVar29 = param_4[2];
    dVar32 = param_4[3];
    dVar13 = *param_3;
    dVar14 = param_3[1];
    dVar15 = param_3[2];
    dVar16 = param_3[3];
    dVar5 = param_3[9];
    dVar11 = dVar28 - (dVar14 - dVar5);
    auVar23._0_8_ = (dVar13 + dVar5) - dVar26;
    auVar23._8_8_ = (dVar14 + dVar5) - dVar28;
    auVar24._8_4_ = SUB84(dVar11,0);
    auVar24._0_8_ = dVar26 - (dVar13 - dVar5);
    auVar24._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar24 = minpd(auVar23,auVar24);
    auVar33._0_8_ = (dVar15 + dVar5) - dVar29;
    auVar33._8_8_ = (dVar16 + dVar5) - dVar32;
    auVar34._8_8_ = dVar32 - (dVar16 - dVar5);
    auVar34._0_8_ = dVar29 - (dVar15 - dVar5);
    auVar34 = minpd(auVar33,auVar34);
    dVar11 = param_3[8];
    dVar6 = param_3[8];
    lVar22 = -(ulonglong)(dVar6 < auVar24._8_8_ + param_4[5]);
    auVar8._8_4_ = (int)lVar22;
    auVar8._0_8_ = -(ulonglong)(dVar11 < auVar24._0_8_ + param_4[4]);
    auVar8._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
    iVar17 = movmskpd((int)*(longlong *)(param_1 + 0x60),auVar8);
    auVar25._8_8_ = -(ulonglong)(dVar6 < auVar34._8_8_ + param_4[7]);
    auVar25._0_8_ = -(ulonglong)(dVar11 < auVar34._0_8_ + param_4[6]);
    uVar19 = movmskpd((int)param_1,auVar25);
    if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
      pdVar1 = param_3 + 8;
      auVar9._8_4_ = (int)-(ulonglong)(dVar14 < dVar28);
      auVar9._0_8_ = -(ulonglong)(dVar13 < dVar26);
      auVar9._12_4_ = (int)(-(ulonglong)(dVar14 < dVar28) >> 0x20);
      iVar17 = movmskpd(iVar17,auVar9);
      auVar30._8_8_ = -(ulonglong)(dVar16 < dVar32);
      auVar30._0_8_ = -(ulonglong)(dVar15 < dVar29);
      uVar19 = movmskpd(0,auVar30);
      iVar17 = iVar17 + (uVar19 & 1) * 4;
      param_2 = iVar18 + iVar17;
      auVar27._4_4_ = iVar17;
      auVar27._0_4_ = iVar17;
      auVar27._8_4_ = iVar17;
      auVar27._12_4_ = iVar17;
      auVar34 = pmovsxbd(auVar30,0x8040201);
      auVar27 = auVar27 & auVar34;
      dVar29 = (double)(float)-(uint)(auVar27._0_4_ == auVar34._0_4_);
      dVar32 = (double)(float)-(uint)(auVar27._4_4_ == auVar34._4_4_);
      dVar26 = (double)(float)-(uint)(auVar27._8_4_ == auVar34._8_4_);
      dVar28 = (double)(float)-(uint)(auVar27._12_4_ == auVar34._12_4_);
      uVar12 = (ulonglong)dVar5 & (ulonglong)dVar32;
      auVar31._0_8_ = ~(ulonglong)dVar29 & (ulonglong)-dVar5;
      auVar31._8_8_ = ~(ulonglong)dVar32 & (ulonglong)-dVar5;
      auVar10._8_4_ = (int)uVar12;
      auVar10._0_8_ = (ulonglong)dVar5 & (ulonglong)dVar29;
      auVar10._12_4_ = (int)(uVar12 >> 0x20);
      local_f8 = SUB168(auVar31 | auVar10,0) + dVar13;
      dStack_f0 = SUB168(auVar31 | auVar10,8) + dVar14;
      local_e8 = ((double)(~(ulonglong)dVar26 & (ulonglong)-dVar5 |
                          (ulonglong)dVar5 & (ulonglong)dVar26) + dVar15) * 1.0;
      dStack_e0 = ((double)(~(ulonglong)dVar28 & (ulonglong)-dVar5 |
                           (ulonglong)dVar5 & (ulonglong)dVar28) + dVar16) * 0.0;
      param_3 = &local_f8;
      local_b8 = *pdVar1 * 0.5 * 1.0625;
      local_c8._8_4_ = SUB84(dVar6 * 0.0,0);
      local_c8._0_8_ = dVar11 * 1.0;
      local_c8._12_4_ = (int)((ulonglong)(dVar6 * 0.0) >> 0x20);
      local_b0 = *pdVar1 - local_b8;
      local_100 = param_6;
      plVar3 = local_100;
      local_d8 = dVar11;
      dStack_d0 = dVar6;
LAB_147cc1e6c:
      local_100 = plVar3;
      local_108 = param_5;
      FUN_147cc1b38(param_1,param_2,param_3,param_4);
      goto LAB_147cc1ce9;
    }
    lVar7 = *(longlong *)(param_1 + 0x80);
    lVar20 = lVar20 * 0x10;
    iVar18 = *(int *)(lVar7 + 8 + lVar20);
    lVar22 = (longlong)iVar18;
    uVar19 = iVar18 + 1;
    *(uint *)(lVar7 + 8 + lVar20) = uVar19;
    if (*(uint *)(lVar7 + 0xc + lVar20) < uVar19) {
      FUN_147cbec34((longlong *)(lVar7 + lVar20));
    }
    lVar20 = *(longlong *)(lVar7 + lVar20);
  }
  puVar2 = (undefined8 *)(lVar20 + lVar22 * 0xb0);
  memset(puVar2 + 2,0,0x90);
  *puVar2 = *(undefined8 *)param_5;
  *(float *)(puVar2 + 1) = param_5[2];
  *(float *)((longlong)puVar2 + 0xc) = param_5[3];
  memcpy(puVar2 + 2,param_5 + 4,0x90);
  *(float *)(puVar2 + 0x14) = param_5[0x28];
  *(float *)((longlong)puVar2 + 0xa4) = param_5[0x29];
LAB_147cc1ce9:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc1fe2 FUN_147cc1fe2 body=224 status=ok
// SIG undefined FUN_147cc1fe2(void)

int FUN_147cc1fe2(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar4 == 0) {
    iVar4 = FUN_147cc20c2(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar2 + 1U) {
      FUN_1447808da(param_1 + 0x70,iVar2);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 4) = 0;
    iVar2 = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x88) = iVar2 + 8;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar2) < 8) {
      FUN_147cc1866((longlong *)(param_1 + 0x80),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x80);
    lVar5 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar3 + lVar5) = 0;
    ((undefined8 *)(lVar3 + lVar5))[1] = 0;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + -4 + (longlong)iVar4 * 4);
    *(int *)(param_1 + 0x98) = iVar4 + -1;
    FUN_144780a3c(param_1 + 0x90);
    iVar4 = iVar2 * 8 + 1;
  }
  return iVar4;
}



// FUNCTION 147cc20c2 FUN_147cc20c2 body=68 status=ok
// SIG undefined FUN_147cc20c2(void)

int FUN_147cc20c2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 8;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8) {
    FUN_147cc17e0(param_1,iVar1);
  }
  FUN_147cc17ca((longlong)iVar1 * 8 + *param_1,8);
  return iVar1;
}



// FUNCTION 147cc2106 FUN_147cc2106 body=144 status=ok
// SIG undefined FUN_147cc2106(void)

void FUN_147cc2106(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 8;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,8,4);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 147cc2196 FUN_147cc2196 body=140 status=ok
// SIG undefined FUN_147cc2196(void)

void FUN_147cc2196(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x10;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x10,8);
  }
  uVar2 = 0x7fffffff;
  if (0 < (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = (int)uVar2;
  FUN_140043092(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10);
  return;
}



// FUNCTION 147cc2222 FUN_147cc2222 body=157 status=ok
// SIG undefined FUN_147cc2222(void)

void FUN_147cc2222(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 800;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e32];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,800,8);
  }
  uVar2 = 0x7fffffff;
  if (99 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != DAT_14cafa774) {
    DAT_14cafa774 = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cafa768,DAT_14cafa770,uVar2,8,8);
  }
  return;
}



// FUNCTION 147cc22c0 FUN_147cc22c0 body=140 status=ok
// SIG undefined FUN_147cc22c0(void)

void FUN_147cc22c0(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cafa770;
  if (param_1 <= (int)DAT_14cafa770) {
    if (DAT_14cafa774 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cafa770) {
        uVar2 = DAT_14cafa770;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)DAT_14cafa770 + ((ulonglong)((longlong)(int)DAT_14cafa770 * 3) >> 3) +
              0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    DAT_14cafa774 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cafa768,param_1,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc234e FUN_147cc234e body=56 status=ok
// SIG undefined FUN_147cc234e(void)

undefined8 * FUN_147cc234e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa59780;
  FUN_144725486();
  FUN_145841116(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc2386 FUN_147cc2386 body=393 status=ok
// SIG undefined FUN_147cc2386(void)

longlong * FUN_147cc2386(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xc,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xc);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_147cc2564(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x155555 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_140333cf8(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xc;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_147cc2564(param_2), 0 < (int)local_2c)) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cc2510(param_2);
        FUN_140333cf8(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cc2510 FUN_147cc2510 body=84 status=ok
// SIG undefined FUN_147cc2510(void)

longlong FUN_147cc2510(ulonglong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147cc25d4(param_1,iVar2);
  }
  uVar3 = *param_1;
  uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)param_1;
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  lVar1 = uVar4 + (longlong)iVar2 * 0xc;
  FUN_146ea2f6d(lVar1,1);
  return lVar1;
}



// FUNCTION 147cc2564 FUN_147cc2564 body=112 status=ok
// SIG undefined FUN_147cc2564(void)

void FUN_147cc2564(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 147cc25d4 FUN_147cc25d4 body=147 status=ok
// SIG undefined FUN_147cc25d4(void)

void FUN_147cc25d4(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc2668 FUN_147cc2668 body=371 status=ok
// SIG undefined FUN_147cc2668(void)

longlong * FUN_147cc2668(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = (uint)param_2[1];
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_140964c9c(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = *param_2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)param_2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
      FUN_1400751dc(param_1,uVar5 + lVar7);
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 4;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    FUN_140af9224(param_2);
    if (0 < (int)local_2c) {
      iVar6 = 0;
      do {
        uVar4 = FUN_147cc27dc(param_2);
        FUN_1400751dc(param_1,uVar4);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147cc27dc FUN_147cc27dc body=80 status=ok
// SIG undefined FUN_147cc27dc(void)

longlong FUN_147cc27dc(ulonglong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_147cc282c(param_1,iVar2);
  }
  uVar3 = *param_1;
  uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)param_1;
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  lVar1 = uVar4 + (longlong)iVar2 * 4;
  FUN_14698d2a7(lVar1,1);
  return lVar1;
}



// FUNCTION 147cc282c FUN_147cc282c body=132 status=ok
// SIG undefined FUN_147cc282c(void)

void FUN_147cc282c(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc28b2 FUN_147cc28b2 body=56 status=ok
// SIG undefined FUN_147cc28b2(void)

longlong FUN_147cc28b2(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc2902 FUN_147cc2902 body=59 status=ok
// SIG undefined FUN_147cc2902(void)

int FUN_147cc2902(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x15555556) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0xc;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0xc);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 147cc2966 FUN_147cc2966 body=21 status=ok
// SIG undefined FUN_147cc2966(void)

undefined * FUN_147cc2966(void)

{
  FUN_147cc2984();
  return &DAT_14cafded0;
}



// FUNCTION 147cc2984 FUN_147cc2984 body=205 status=ok
// SIG undefined FUN_147cc2984(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc2984(void)

{
  if ((DAT_14cafdf37 & 2) != 0) {
    return;
  }
  DAT_14cafdf37 = DAT_14cafdf37 | 2;
  _DAT_14cafded8 = L"TResourceArray";
  _DAT_14cafdef0 = FUN_146826540;
  _DAT_14cafdef8 = FUN_146825d77;
  _DAT_14cafdf00 = FUN_146825fd6;
  _DAT_14cafdf08 = FUN_1407e02ea;
  _DAT_14cafdf10 = FUN_146826273;
  _DAT_14cafdee8 = FUN_147cc2a52;
  _DAT_14cafdf28 = 0xffffffff00000020;
  _DAT_14cafdf30 = 8;
  DAT_14cafdf34 = 1;
  _DAT_14cafdf18 = FUN_147cc2a7e;
  FUN_147cc2a94();
  FUN_147cc2ba2();
  FUN_1407e00cc(&DAT_14cafded0);
  return;
}



// FUNCTION 147cc2a52 FUN_147cc2a52 body=43 status=ok
// SIG undefined FUN_147cc2a52(void)

void FUN_147cc2a52(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cc2a7e FUN_147cc2a7e body=21 status=ok
// SIG undefined FUN_147cc2a7e(void)

undefined * FUN_147cc2a7e(void)

{
  FUN_147cc2d7b();
  return &DAT_14cafdf38;
}



// FUNCTION 147cc2a94 FUN_147cc2a94 body=270 status=ok
// SIG undefined FUN_147cc2a94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc2a94(void)

{
  _DAT_14cafdf60 = L"bNeedsCPUAccess";
  DAT_14cafdf8a = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cafdf68 = &DAT_14c9cfcf0;
  _DAT_14cafdf78 = &LAB_14682652b;
  _DAT_14cafdf80 = &DAT_100000018;
  _DAT_14cafdf88 = 0;
  _DAT_14cafdf70 = DAT_14cafdee0;
  DAT_14cafdee0 = &DAT_14cafdf60;
  return;
}



// FUNCTION 147cc2ba2 FUN_147cc2ba2 body=473 status=ok
// SIG undefined FUN_147cc2ba2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc2ba2(void)

{
  _DAT_14cafdf90 = L"BASE";
  DAT_14cafdfba = 4;
  if ((DAT_14cafe027 & 2) == 0) {
    DAT_14cafe027 = DAT_14cafe027 | 3;
    _DAT_14cafdfc8 = L"(TArray<T, AllocatorType>)";
    _DAT_14cafdfe0 = FUN_147cc2df6;
    _DAT_14cafdfe8 = &LAB_147cc2e56;
    _DAT_14cafdff0 = &LAB_147cc2e64;
    _DAT_14cafdff8 = &LAB_147cc2e72;
    _DAT_14cafe000 = &DAT_147cc2e80;
    _DAT_14cafdfd8 = FUN_147cc2e82;
    _DAT_14cafe018 = 0x1000000010;
    _DAT_14cafe020 = 8;
    DAT_14cafe024 = '\0';
  }
  else if (DAT_14cafe024 != '\0') {
    DAT_14cafdf36 = DAT_14cafdf36 + '\x01';
  }
  _DAT_14cafdfa0 = DAT_14cafdee0;
  _DAT_14cafdfb0 = &DAT_100000008;
  _DAT_14cafdfa8 = &LAB_14682652b;
  _DAT_14cafdf98 = &DAT_14cafdfc0;
  DAT_14cafdf35 = DAT_14cafdf35 + '\x01';
  DAT_14cafdee0 = &DAT_14cafdf90;
  _DAT_14cafe028 = L"BASE";
  DAT_14cafe052 = 4;
  _DAT_14cafe030 = FUN_146268212();
  _DAT_14cafe038 = DAT_14cafdee0;
  _DAT_14cafe040 = &LAB_14682652b;
  DAT_14cafdee0 = &DAT_14cafe028;
  DAT_14cafdf35 = DAT_14cafdf35 + '\x01';
  _DAT_14cafe048 = 0x100000000;
  if (*(char *)(_DAT_14cafe030 + 100) != '\0') {
    DAT_14cafdf36 = DAT_14cafdf36 + '\x01';
  }
  return;
}



// FUNCTION 147cc2d7b FUN_147cc2d7b body=122 status=ok
// SIG undefined FUN_147cc2d7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc2d7b(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafdf58) {
    FUN_144b3d300(&DAT_14cafdf58);
    if (DAT_14cafdf58 == -1) {
      DAT_14cafdf40 = 0;
      uRam000000014cafdf48 = 0;
      _DAT_14cafdf38 = &PTR_FUN_14aa597b0;
      DAT_14cafdf50 = 0;
      atexit((_func_5014 *)&LAB_143660bc2);
      _Init_thread_footer(&DAT_14cafdf58);
      return;
    }
  }
  return;
}



// FUNCTION 147cc2df6 FUN_147cc2df6 body=95 status=ok
// SIG undefined FUN_147cc2df6(void)

void FUN_147cc2df6(void)

{
  undefined1 auStack_48 [32];
  ulonglong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_146826a6c(0,local_28,0x10);
  if (local_28[0] != 0 && (local_28[0] & 1) == 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc2e82 FUN_147cc2e82 body=51 status=ok
// SIG undefined FUN_147cc2e82(void)

void FUN_147cc2e82(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cc2eb6 FUN_147cc2eb6 body=56 status=ok
// SIG undefined FUN_147cc2eb6(void)

longlong FUN_147cc2eb6(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc2efc FUN_147cc2efc body=218 status=ok
// SIG undefined FUN_147cc2efc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147cc2efc(void)

{
  if ((DAT_14cafe2af & 2) == 0) {
    DAT_14cafe2af = DAT_14cafe2af | 2;
    _DAT_14cafe250 = L"TResourceArray";
    _DAT_14cafe268 = FUN_146826540;
    _DAT_14cafe270 = FUN_146825d77;
    _DAT_14cafe278 = FUN_146825fd6;
    _DAT_14cafe280 = FUN_1407e02ea;
    _DAT_14cafe288 = FUN_146826273;
    _DAT_14cafe260 = FUN_147cc2fd6;
    _DAT_14cafe2a0 = 0xffffffff00000020;
    _DAT_14cafe2a8 = 8;
    DAT_14cafe2ac = 1;
    _DAT_14cafe290 = &LAB_147cc3002;
    FUN_147cc3008(&DAT_14cafe248);
    FUN_147cc3116(&DAT_14cafe248);
    FUN_1407e00cc(&DAT_14cafe248);
  }
  return &DAT_14cafe248;
}



// FUNCTION 147cc2fd6 FUN_147cc2fd6 body=43 status=ok
// SIG undefined FUN_147cc2fd6(void)

void FUN_147cc2fd6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cc3008 FUN_147cc3008 body=269 status=ok
// SIG undefined FUN_147cc3008(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc3008(longlong param_1)

{
  _DAT_14cafe2d8 = L"bNeedsCPUAccess";
  DAT_14cafe302 = FUN_140850cc5();
  if ((DAT_14c9cfd57 & 2) == 0) {
    DAT_14c9cfd57 = DAT_14c9cfd57 | 3;
    _DAT_14c9cfcf8 = L"bool";
    _DAT_14c9cfd10 = &LAB_147169480;
    _DAT_14c9cfd18 = &LAB_14716948c;
    _DAT_14c9cfd20 = &LAB_147169498;
    _DAT_14c9cfd28 = &LAB_14716949e;
    _DAT_14c9cfd30 = &LAB_1471694a2;
    _DAT_14c9cfd08 = &LAB_1471694a8;
    _DAT_14c9cfd48 = &DAT_100000001;
    _DAT_14c9cfd50 = 1;
    DAT_14c9cfd54 = 0;
  }
  _DAT_14cafe2e0 = &DAT_14c9cfcf0;
  _DAT_14cafe2f0 = &LAB_14682652b;
  _DAT_14cafe2f8 = &DAT_100000018;
  _DAT_14cafe300 = 0;
  _DAT_14cafe2e8 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14cafe2d8;
  return;
}



// FUNCTION 147cc3116 FUN_147cc3116 body=361 status=ok
// SIG undefined FUN_147cc3116(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc3116(longlong param_1)

{
  longlong lVar1;
  
  _DAT_14cafe058 = L"BASE";
  DAT_14cafe082 = 4;
  if ((DAT_14cafe36f & 2) == 0) {
    DAT_14cafe36f = DAT_14cafe36f | 3;
    _DAT_14cafe310 = L"(TArray<T, AllocatorType>)";
    _DAT_14cafe328 = &LAB_147cc32fe;
    _DAT_14cafe330 = FUN_147cc330c;
    _DAT_14cafe338 = &LAB_147cc332c;
    _DAT_14cafe340 = &LAB_147cc333a;
    _DAT_14cafe348 = &LAB_147cc3348;
    _DAT_14cafe320 = FUN_147cc3354;
    _DAT_14cafe360 = 0x1000000010;
    _DAT_14cafe368 = 8;
    DAT_14cafe36c = '\0';
  }
  _DAT_14cafe060 = &DAT_14cafe308;
  _DAT_14cafe070 = &LAB_14682652b;
  _DAT_14cafe078 = &DAT_100000008;
  _DAT_14cafe068 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = &DAT_14cafe058;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (DAT_14cafe36c != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  _DAT_14cafe088 = L"BASE";
  DAT_14cafe0b2 = 4;
  lVar1 = FUN_146268212();
  _DAT_14cafe0a0 = &LAB_14682652b;
  _DAT_14cafe0a8 = 0x100000000;
  _DAT_14cafe098 = *(undefined8 *)(param_1 + 0x10);
  _DAT_14cafe090 = lVar1;
  *(undefined **)(param_1 + 0x10) = &DAT_14cafe088;
  *(char *)(param_1 + 0x65) = *(char *)(param_1 + 0x65) + '\x01';
  if (*(char *)(lVar1 + 100) != '\0') {
    *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + '\x01';
  }
  return;
}



// FUNCTION 147cc327f FUN_147cc327f body=127 status=ok
// SIG undefined FUN_147cc327f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147cc327f(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cafe2d0) {
    FUN_144b3d300(&DAT_14cafe2d0);
    if (DAT_14cafe2d0 == -1) {
      DAT_14cafe2b8 = 0;
      uRam000000014cafe2c0 = 0;
      _DAT_14cafe2b0 = &PTR_FUN_14aa5a670;
      DAT_14cafe2c8 = 0;
      atexit((_func_5014 *)&LAB_143660c28);
      _Init_thread_footer(&DAT_14cafe2d0);
    }
  }
  return &DAT_14cafe2b0;
}



// FUNCTION 147cc330c FUN_147cc330c body=31 status=ok
// SIG undefined FUN_147cc330c(void)

undefined8
FUN_147cc330c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147cc34a2(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147cc3354 FUN_147cc3354 body=51 status=ok
// SIG undefined FUN_147cc3354(void)

void FUN_147cc3354(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147cc3388 FUN_147cc3388 body=234 status=ok
// SIG undefined FUN_147cc3388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc3388(longlong param_1,undefined8 param_2)

{
  if ((DAT_14cafe3d7 & 2) == 0) {
    DAT_14cafe3d7 = DAT_14cafe3d7 | 3;
    _DAT_14cafe378 = L"FColor";
    _DAT_14cafe390 = &LAB_147cc3472;
    _DAT_14cafe398 = &LAB_147cc347e;
    _DAT_14cafe3a0 = &LAB_147cc348a;
    _DAT_14cafe3a8 = &LAB_147cc3490;
    _DAT_14cafe3b0 = &LAB_147cc3494;
    _DAT_14cafe388 = &LAB_147cc349a;
    _DAT_14cafe3c8 = 0x400000004;
    _DAT_14cafe3d0 = 4;
    DAT_14cafe3d4 = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14cafe370,*(undefined4 *)(param_1 + 8),0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147cc34a2 FUN_147cc34a2 body=248 status=ok
// SIG undefined FUN_147cc34a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc34a2(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147cc359a(param_3,*(undefined4 *)(param_1 + 8),1);
  uVar1 = *param_3;
  if ((DAT_14cafe3d7 & 2) == 0) {
    DAT_14cafe3d7 = DAT_14cafe3d7 | 3;
    _DAT_14cafe378 = L"FColor";
    _DAT_14cafe390 = &LAB_147cc3472;
    _DAT_14cafe398 = &LAB_147cc347e;
    _DAT_14cafe3a0 = &LAB_147cc348a;
    _DAT_14cafe3a8 = &LAB_147cc3490;
    _DAT_14cafe3b0 = &LAB_147cc3494;
    _DAT_14cafe388 = &LAB_147cc349a;
    _DAT_14cafe3c8 = 0x400000004;
    _DAT_14cafe3d0 = 4;
    DAT_14cafe3d4 = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14cafe370,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147cc359a FUN_147cc359a body=66 status=ok
// SIG undefined FUN_147cc359a(void)

void FUN_147cc359a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147cc35de(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147cc3638();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147cc35de FUN_147cc35de body=90 status=ok
// SIG undefined FUN_147cc35de(void)

int FUN_147cc35de(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147cc282c(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return iVar1;
}



// FUNCTION 147cc3638 FUN_147cc3638 body=63 status=ok
// SIG undefined FUN_147cc3638(void)

void FUN_147cc3638(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147cc3678(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 147cc3678 FUN_147cc3678 body=97 status=ok
// SIG undefined FUN_147cc3678(void)

ulonglong FUN_147cc3678(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147cc36da FUN_147cc36da body=203 status=ok
// SIG undefined FUN_147cc36da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147cc36da(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14cafe3d7 & 2) == 0) {
    DAT_14cafe3d7 = DAT_14cafe3d7 | 3;
    _DAT_14cafe378 = L"FColor";
    _DAT_14cafe390 = &LAB_147cc3472;
    _DAT_14cafe398 = &LAB_147cc347e;
    _DAT_14cafe3a0 = &LAB_147cc348a;
    _DAT_14cafe3a8 = &LAB_147cc3490;
    _DAT_14cafe3b0 = &LAB_147cc3494;
    _DAT_14cafe388 = &LAB_147cc349a;
    _DAT_14cafe3c8 = 0x400000004;
    _DAT_14cafe3d0 = 4;
    DAT_14cafe3d4 = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14cafe370,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147cc37a5 FUN_147cc37a5 body=168 status=ok
// SIG undefined FUN_147cc37a5(void)

void FUN_147cc37a5(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143660c40();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if (DAT_14ca85108 < puVar5) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar5;
  *DAT_14ca85130 = puVar4;
  DAT_14ca85130 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143660d44(param_1);
  return;
}



// FUNCTION 147cc384d FUN_147cc384d body=425 status=ok
// SIG undefined FUN_147cc384d(void)

void FUN_147cc384d(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  
  if (DAT_14ca8507b == '\x01') {
    if ((0 < DAT_14ca85198) && (DAT_14ca85198 = 0, DAT_14ca8519c < 0)) {
      FUN_147139e90(&DAT_14ca85190,0);
    }
    FUN_144747744(&DAT_14ca85190,*param_1 + 0x10);
    iVar1 = DAT_14ca85198;
    _Src = DAT_14ca85190;
    lVar4 = (longlong)DAT_14ca85198;
    if (0 < lVar4) {
      if (DAT_14ca8507b == '\x01') {
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 5;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar2 = puVar3 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar2;
        *DAT_14ca85130 = puVar3;
        DAT_14ca85130 = puVar3 + 1;
        _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        puVar2 = (undefined8 *)((longlong)_Dst + lVar4 * 4);
        _Size = lVar4 * 4;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,(uint)_Size | 2);
          _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          puVar2 = (undefined8 *)((longlong)_Dst + _Size);
        }
        DAT_14ca85100 = puVar2;
        memcpy(_Dst,_Src,_Size);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a1fbc38;
        puVar3[2] = param_2;
        puVar3[3] = _Dst;
        *(int *)(puVar3 + 4) = iVar1;
      }
      DAT_14ca85198 = 0;
      if (DAT_14ca8519c < 0) {
        FUN_147139e90(&DAT_14ca85190,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cc39f6 FUN_147cc39f6 body=168 status=ok
// SIG undefined FUN_147cc39f6(void)

void FUN_147cc39f6(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143660d8e();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if (DAT_14ca85108 < puVar5) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar5;
  *DAT_14ca85130 = puVar4;
  DAT_14ca85130 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143660e92(param_1);
  return;
}



// FUNCTION 147cc3a9e FUN_147cc3a9e body=425 status=ok
// SIG undefined FUN_147cc3a9e(void)

void FUN_147cc3a9e(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  
  if (DAT_14ca8507b == '\x01') {
    if ((0 < DAT_14ca85198) && (DAT_14ca85198 = 0, DAT_14ca8519c < 0)) {
      FUN_147139e90(&DAT_14ca85190,0);
    }
    FUN_144747744(&DAT_14ca85190,*param_1 + 0x10);
    iVar1 = DAT_14ca85198;
    _Src = DAT_14ca85190;
    lVar4 = (longlong)DAT_14ca85198;
    if (0 < lVar4) {
      if (DAT_14ca8507b == '\x01') {
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 5;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar2 = puVar3 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar2;
        *DAT_14ca85130 = puVar3;
        DAT_14ca85130 = puVar3 + 1;
        _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        puVar2 = (undefined8 *)((longlong)_Dst + lVar4 * 4);
        _Size = lVar4 * 4;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,(uint)_Size | 2);
          _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          puVar2 = (undefined8 *)((longlong)_Dst + _Size);
        }
        DAT_14ca85100 = puVar2;
        memcpy(_Dst,_Src,_Size);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a1fbc38;
        puVar3[2] = param_2;
        puVar3[3] = _Dst;
        *(int *)(puVar3 + 4) = iVar1;
      }
      DAT_14ca85198 = 0;
      if (DAT_14ca8519c < 0) {
        FUN_147139e90(&DAT_14ca85190,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cc3c48 FUN_147cc3c48 body=132 status=ok
// SIG undefined FUN_147cc3c48(void)

void FUN_147cc3c48(longlong param_1,int param_2)

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



// FUNCTION 147cc3cce FUN_147cc3cce body=48 status=ok
// SIG undefined FUN_147cc3cce(void)

void FUN_147cc3cce(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147cc3cfe FUN_147cc3cfe body=201 status=ok
// SIG undefined FUN_147cc3cfe(void)

void FUN_147cc3cfe(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = (longlong)(int)uVar1;
  if (lVar3 != 0) {
    plVar2 = (longlong *)*param_1;
    uVar4 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    uVar7 = 0;
    do {
      uVar5 = uVar7 + 1;
      if ((int)(uVar7 + 1) < (int)uVar1) {
        uVar5 = uVar1;
      }
      uVar8 = uVar7;
      uVar6 = (ulonglong)uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar9 = uVar5;
        if (lVar3 <= (longlong)uVar6) break;
        uVar8 = uVar8 + 1;
        uVar9 = uVar8;
      } while (bVar10 == (plVar2[uVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (uVar4 != uVar7) {
          memmove(plVar2 + (int)uVar4,plVar2 + uVar7,(longlong)(int)(uVar9 - uVar7) << 3);
        }
        uVar4 = uVar4 + (uVar9 - uVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      uVar7 = uVar9;
    } while ((longlong)uVar6 < lVar3);
    *(uint *)(param_1 + 1) = uVar4;
  }
  return;
}



// FUNCTION 147cc3dc7 FUN_147cc3dc7 body=168 status=ok
// SIG undefined FUN_147cc3dc7(void)

void FUN_147cc3dc7(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143660edc();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if (DAT_14ca85108 < puVar5) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar5;
  *DAT_14ca85130 = puVar4;
  DAT_14ca85130 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143660fe0(param_1);
  return;
}



// FUNCTION 147cc3e6f FUN_147cc3e6f body=425 status=ok
// SIG undefined FUN_147cc3e6f(void)

void FUN_147cc3e6f(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  
  if (DAT_14ca8507b == '\x01') {
    if ((0 < DAT_14ca85198) && (DAT_14ca85198 = 0, DAT_14ca8519c < 0)) {
      FUN_147139e90(&DAT_14ca85190,0);
    }
    FUN_144747744(&DAT_14ca85190,*param_1 + 0x10);
    iVar1 = DAT_14ca85198;
    _Src = DAT_14ca85190;
    lVar4 = (longlong)DAT_14ca85198;
    if (0 < lVar4) {
      if (DAT_14ca8507b == '\x01') {
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 5;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar2 = puVar3 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar2;
        *DAT_14ca85130 = puVar3;
        DAT_14ca85130 = puVar3 + 1;
        _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        puVar2 = (undefined8 *)((longlong)_Dst + lVar4 * 4);
        _Size = lVar4 * 4;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,(uint)_Size | 2);
          _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          puVar2 = (undefined8 *)((longlong)_Dst + _Size);
        }
        DAT_14ca85100 = puVar2;
        memcpy(_Dst,_Src,_Size);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a1fbc38;
        puVar3[2] = param_2;
        puVar3[3] = _Dst;
        *(int *)(puVar3 + 4) = iVar1;
      }
      DAT_14ca85198 = 0;
      if (DAT_14ca8519c < 0) {
        FUN_147139e90(&DAT_14ca85190,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cc4018 FUN_147cc4018 body=168 status=ok
// SIG undefined FUN_147cc4018(void)

void FUN_147cc4018(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143661216();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if (DAT_14ca85108 < puVar5) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar5;
  *DAT_14ca85130 = puVar4;
  DAT_14ca85130 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_14366131a(param_1);
  return;
}



// FUNCTION 147cc40c0 FUN_147cc40c0 body=425 status=ok
// SIG undefined FUN_147cc40c0(void)

void FUN_147cc40c0(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  
  if (DAT_14ca8507b == '\x01') {
    if ((0 < DAT_14ca85198) && (DAT_14ca85198 = 0, DAT_14ca8519c < 0)) {
      FUN_147139e90(&DAT_14ca85190,0);
    }
    FUN_144747744(&DAT_14ca85190,*param_1 + 0x10);
    iVar1 = DAT_14ca85198;
    _Src = DAT_14ca85190;
    lVar4 = (longlong)DAT_14ca85198;
    if (0 < lVar4) {
      if (DAT_14ca8507b == '\x01') {
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 5;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar2 = puVar3 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar2;
        *DAT_14ca85130 = puVar3;
        DAT_14ca85130 = puVar3 + 1;
        _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        puVar2 = (undefined8 *)((longlong)_Dst + lVar4 * 4);
        _Size = lVar4 * 4;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,(uint)_Size | 2);
          _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          puVar2 = (undefined8 *)((longlong)_Dst + _Size);
        }
        DAT_14ca85100 = puVar2;
        memcpy(_Dst,_Src,_Size);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a1fbc38;
        puVar3[2] = param_2;
        puVar3[3] = _Dst;
        *(int *)(puVar3 + 4) = iVar1;
      }
      DAT_14ca85198 = 0;
      if (DAT_14ca8519c < 0) {
        FUN_147139e90(&DAT_14ca85190,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cc4269 FUN_147cc4269 body=168 status=ok
// SIG undefined FUN_147cc4269(void)

void FUN_147cc4269(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143661364();
  uVar1 = param_3[2];
  uVar2 = *param_3;
  uVar3 = param_3[1];
  puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if (DAT_14ca85108 < puVar5) {
    FUN_140023dd8(&DAT_14ca85100,0x28);
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  DAT_14ca85160 = DAT_14ca85160 + 1;
  DAT_14ca85100 = puVar5;
  *DAT_14ca85130 = puVar4;
  DAT_14ca85130 = puVar4 + 1;
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143661468(param_1);
  return;
}



// FUNCTION 147cc4311 FUN_147cc4311 body=425 status=ok
// SIG undefined FUN_147cc4311(void)

void FUN_147cc4311(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  int iVar1;
  undefined8 *puVar2;
  void *_Dst;
  undefined8 *puVar3;
  size_t _Size;
  longlong lVar4;
  
  if (DAT_14ca8507b == '\x01') {
    if ((0 < DAT_14ca85198) && (DAT_14ca85198 = 0, DAT_14ca8519c < 0)) {
      FUN_147139e90(&DAT_14ca85190,0);
    }
    FUN_144747744(&DAT_14ca85190,*param_1 + 0x10);
    iVar1 = DAT_14ca85198;
    _Src = DAT_14ca85190;
    lVar4 = (longlong)DAT_14ca85198;
    if (0 < lVar4) {
      if (DAT_14ca8507b == '\x01') {
        puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar2 = puVar3 + 5;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,0x30);
          puVar3 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar2 = puVar3 + 5;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar2;
        *DAT_14ca85130 = puVar3;
        DAT_14ca85130 = puVar3 + 1;
        _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
        puVar2 = (undefined8 *)((longlong)_Dst + lVar4 * 4);
        _Size = lVar4 * 4;
        if (DAT_14ca85108 < puVar2) {
          FUN_140023dd8(&DAT_14ca85100,(uint)_Size | 2);
          _Dst = (void *)((longlong)DAT_14ca85100 + 1U & 0xfffffffffffffffe);
          puVar2 = (undefined8 *)((longlong)_Dst + _Size);
        }
        DAT_14ca85100 = puVar2;
        memcpy(_Dst,_Src,_Size);
        puVar3[1] = 0;
        *puVar3 = &PTR_FUN_14a1fbc38;
        puVar3[2] = param_2;
        puVar3[3] = _Dst;
        *(int *)(puVar3 + 4) = iVar1;
      }
      DAT_14ca85198 = 0;
      if (DAT_14ca8519c < 0) {
        FUN_147139e90(&DAT_14ca85190,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147cc44ba FUN_147cc44ba body=132 status=ok
// SIG undefined FUN_147cc44ba(void)

void FUN_147cc44ba(longlong param_1,int param_2)

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



// FUNCTION 147cc4540 FUN_147cc4540 body=98 status=ok
// SIG undefined FUN_147cc4540(void)

void FUN_147cc4540(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147cc45a2 FUN_147cc45a2 body=59 status=ok
// SIG undefined FUN_147cc45a2(void)

undefined8 * FUN_147cc45a2(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14aa59820;
  uVar1 = FUN_140083894();
  FUN_145adf30e(uVar1,param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc45e0 FUN_147cc45e0 body=234 status=ok
// SIG undefined FUN_147cc45e0(void)

void FUN_147cc45e0(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140083894();
  if (0 < DAT_14cad3bb0) {
    lVar2 = *(longlong *)(**(longlong **)(param_1 + 0x10) + 0x30);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar2 + 0x2b0);
    }
    dVar1 = (double)*(float *)(lVar2 + 0x46c);
    FUN_140083894();
    local_30 = DAT_14cad3ba8[2] + dVar1;
    local_38 = DAT_14cad3ba8[1] + dVar1;
    local_40 = *DAT_14cad3ba8 + dVar1;
    local_48 = DAT_14cad3ba8[2] - dVar1;
    local_50 = DAT_14cad3ba8[1] - dVar1;
    local_58 = *DAT_14cad3ba8 - dVar1;
    local_28 = 1;
    FUN_147cb0ce8(*(undefined8 *)(param_1 + 0x10));
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc46ea FUN_147cc46ea body=68 status=ok
// SIG undefined FUN_147cc46ea(void)

void FUN_147cc46ea(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147cc472e();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147cc472e FUN_147cc472e body=322 status=ok
// SIG undefined FUN_147cc472e(void)

void FUN_147cc472e(longlong *param_1)

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



// FUNCTION 147cc4872 FUN_147cc4872 body=325 status=ok
// SIG undefined FUN_147cc4872(void)

longlong * FUN_147cc4872(longlong *param_1,undefined8 *param_2,undefined1 *param_3)

{
  longlong *_Dst;
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBP;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  _Dst = param_1 + 0x13;
  uVar1 = *param_3;
  local_48 = *param_2;
  uStack_40 = param_2[1];
  memset(_Dst,0,0x90);
  FUN_144869430(_Dst);
  param_1[0x25] = 0;
  param_1[0x13] = (longlong)&PTR_FUN_149e1ddc0;
  *(undefined4 *)(param_1 + 0x26) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_1 + 0x134) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x27) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uStack_40._4_4_;
  param_1[0x28] = 0x7fffffffffffffff;
  FUN_140996f94(_Dst,1);
  (**(code **)(param_1[0x13] + 0xf0))
            (_Dst,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) & 0xffffffff);
  *param_1 = (longlong)&PTR_FUN_14aa59960;
  FUN_140713482(param_1,_Dst);
  *param_1 = (longlong)&PTR_FUN_14aa59960;
  local_48 = 0;
  uStack_40 = 0;
  local_50 = 0;
  FUN_1408383eb(param_1,&local_50);
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x1a0))(param_1,local_50);
  FUN_14682562a(&local_48,param_1,3);
  (**(code **)(*param_1 + 0x60))(param_1,&local_48);
  (**(code **)(*param_1 + 0x1a0))(param_1,uVar2);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc49b8 FUN_147cc49b8 body=50 status=ok
// SIG undefined FUN_147cc49b8(void)

longlong FUN_147cc49b8(longlong param_1,int param_2)

{
  FUN_14041e0ea();
  FUN_144a7fc42(param_1 + 0x98);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc49ea FUN_147cc49ea body=52 status=ok
// SIG undefined FUN_147cc49ea(void)

void FUN_147cc49ea(longlong *param_1)

{
  FUN_147cc4a1e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147cc4a1e FUN_147cc4a1e body=89 status=ok
// SIG undefined FUN_147cc4a1e(void)

void FUN_147cc4a1e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147cc4a78 FUN_147cc4a78 body=68 status=ok
// SIG undefined FUN_147cc4a78(void)

void FUN_147cc4a78(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147cc4abc();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147cc4abc FUN_147cc4abc body=322 status=ok
// SIG undefined FUN_147cc4abc(void)

void FUN_147cc4abc(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147cc4c00 FUN_147cc4c00 body=413 status=ok
// SIG undefined FUN_147cc4c00(void)

void FUN_147cc4c00(longlong *param_1,uint param_2)

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
      FUN_14474875a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1446efaca(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
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
        puVar5 = puVar5 + -4;
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



// FUNCTION 147cc4d9e FUN_147cc4d9e body=477 status=ok
// SIG undefined FUN_147cc4d9e(void)

void FUN_147cc4d9e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 147cc4f7c FUN_147cc4f7c body=312 status=ok
// SIG undefined FUN_147cc4f7c(void)

undefined4 * FUN_147cc4f7c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147cc50b6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147cc519c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147cc4d9e(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc50b6 FUN_147cc50b6 body=229 status=ok
// SIG undefined FUN_147cc50b6(void)

int * FUN_147cc50b6(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147cc519c FUN_147cc519c body=124 status=ok
// SIG undefined FUN_147cc519c(void)

undefined8 FUN_147cc519c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
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
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147cc5218(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147cc5218 FUN_147cc5218 body=114 status=ok
// SIG undefined FUN_147cc5218(void)

void FUN_147cc5218(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 147cc528a FUN_147cc528a body=90 status=ok
// SIG undefined FUN_147cc528a(void)

void FUN_147cc528a(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147cc5218();
  return;
}



// FUNCTION 147cc52e4 FUN_147cc52e4 body=132 status=ok
// SIG undefined FUN_147cc52e4(void)

void FUN_147cc52e4(longlong param_1,int param_2)

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



// FUNCTION 147cc536a FUN_147cc536a body=147 status=ok
// SIG undefined FUN_147cc536a(void)

void FUN_147cc536a(longlong param_1,int param_2)

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



// FUNCTION 147cc53fe FUN_147cc53fe body=132 status=ok
// SIG undefined FUN_147cc53fe(void)

void FUN_147cc53fe(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147cc5482(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147cc5482 FUN_147cc5482 body=87 status=ok
// SIG undefined FUN_147cc5482(void)

void FUN_147cc5482(longlong *param_1,int param_2)

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
  FUN_147cc54da();
  return;
}



// FUNCTION 147cc54da FUN_147cc54da body=114 status=ok
// SIG undefined FUN_147cc54da(void)

void FUN_147cc54da(longlong *param_1,int param_2)

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



// FUNCTION 147cc554c FUN_147cc554c body=326 status=ok
// SIG undefined FUN_147cc554c(void)

undefined4 * FUN_147cc554c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_147cc5694(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147cc577a(param_1,uVar4,local_40,&local_4c);
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
      FUN_147cc57fa(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc5694 FUN_147cc5694 body=230 status=ok
// SIG undefined FUN_147cc5694(void)

int * FUN_147cc5694(longlong *param_1,int *param_2)

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



// FUNCTION 147cc577a FUN_147cc577a body=128 status=ok
// SIG undefined FUN_147cc577a(void)

undefined8 FUN_147cc577a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_147cc54da((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147cc57fa FUN_147cc57fa body=474 status=ok
// SIG undefined FUN_147cc57fa(void)

void FUN_147cc57fa(longlong *param_1)

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



// FUNCTION 147cc59d6 FUN_147cc59d6 body=31 status=ok
// SIG undefined FUN_147cc59d6(void)

undefined8 FUN_147cc59d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc5a12 FUN_147cc5a12 body=93 status=ok
// SIG undefined FUN_147cc5a12(void)

void FUN_147cc5a12(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa59bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5a70 FUN_147cc5a70 body=93 status=ok
// SIG undefined FUN_147cc5a70(void)

void FUN_147cc5a70(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aa59bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5ace FUN_147cc5ace body=126 status=ok
// SIG undefined FUN_147cc5ace(void)

void FUN_147cc5ace(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14aa59bc0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc5b3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147cc5b58 FUN_147cc5b58 body=21 status=ok
// SIG undefined FUN_147cc5b58(void)

undefined8 FUN_147cc5b58(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147cc5b6e FUN_147cc5b6e body=56 status=ok
// SIG undefined FUN_147cc5b6e(void)

undefined8 * FUN_147cc5b6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa5a0f0;
  FUN_144725486();
  FUN_1463fc1ee(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc5ba6 FUN_147cc5ba6 body=38 status=ok
// SIG undefined FUN_147cc5ba6(void)

undefined8 FUN_147cc5ba6(undefined8 param_1,int param_2)

{
  FUN_1463fc1ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc5bcc FUN_147cc5bcc body=161 status=ok
// SIG undefined FUN_147cc5bcc(void)

void FUN_147cc5bcc(longlong param_1)

{
  if (*(char *)(param_1 + 0x128) == '\x01') {
    *(undefined1 *)(param_1 + 0x128) = 0;
  }
  if (*(char *)(param_1 + 0x108) == '\x01') {
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xe8) == '\x01') {
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    *(undefined1 *)(param_1 + 0xa8) = 0;
  }
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined1 *)(param_1 + 0x98) = 0;
  }
  if (*(char *)(param_1 + 0x88) == '\x01') {
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 147cc5c6e FUN_147cc5c6e body=31 status=ok
// SIG undefined FUN_147cc5c6e(void)

undefined8 FUN_147cc5c6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc5ca8 FUN_147cc5ca8 body=29 status=ok
// SIG undefined FUN_147cc5ca8(void)

bool FUN_147cc5ca8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147cc5cc6 FUN_147cc5cc6 body=26 status=ok
// SIG undefined FUN_147cc5cc6(void)

bool FUN_147cc5cc6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147cc5ce0 FUN_147cc5ce0 body=93 status=ok
// SIG undefined FUN_147cc5ce0(void)

void FUN_147cc5ce0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5d3e FUN_147cc5d3e body=93 status=ok
// SIG undefined FUN_147cc5d3e(void)

void FUN_147cc5d3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5d9c FUN_147cc5d9c body=126 status=ok
// SIG undefined FUN_147cc5d9c(void)

void FUN_147cc5d9c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa5a870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc5e0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147cc5e1a FUN_147cc5e1a body=58 status=ok
// SIG undefined FUN_147cc5e1a(void)

void FUN_147cc5e1a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147cc5e51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147cc5e56 FUN_147cc5e56 body=31 status=ok
// SIG undefined FUN_147cc5e56(void)

undefined8 FUN_147cc5e56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc5e90 FUN_147cc5e90 body=29 status=ok
// SIG undefined FUN_147cc5e90(void)

bool FUN_147cc5e90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147cc5eae FUN_147cc5eae body=93 status=ok
// SIG undefined FUN_147cc5eae(void)

void FUN_147cc5eae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5f0c FUN_147cc5f0c body=93 status=ok
// SIG undefined FUN_147cc5f0c(void)

void FUN_147cc5f0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca3a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a1c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc5f6a FUN_147cc5f6a body=126 status=ok
// SIG undefined FUN_147cc5f6a(void)

void FUN_147cc5f6a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca3a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a1c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc5fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147cc5fe8 FUN_147cc5fe8 body=58 status=ok
// SIG undefined FUN_147cc5fe8(void)

void FUN_147cc5fe8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147cc601f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147cc6022 FUN_147cc6022 body=31 status=ok
// SIG undefined FUN_147cc6022(void)

undefined8 FUN_147cc6022(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147cc605c FUN_147cc605c body=29 status=ok
// SIG undefined FUN_147cc605c(void)

bool FUN_147cc605c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147cc607a FUN_147cc607a body=26 status=ok
// SIG undefined FUN_147cc607a(void)

bool FUN_147cc607a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147cc6094 FUN_147cc6094 body=93 status=ok
// SIG undefined FUN_147cc6094(void)

void FUN_147cc6094(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc60f2 FUN_147cc60f2 body=93 status=ok
// SIG undefined FUN_147cc60f2(void)

void FUN_147cc60f2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa5a800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa5a230;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147cc6150 FUN_147cc6150 body=126 status=ok
// SIG undefined FUN_147cc6150(void)

void FUN_147cc6150(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aa5a800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa5a230;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc61bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147cc61ce FUN_147cc61ce body=58 status=ok
// SIG undefined FUN_147cc61ce(void)

void FUN_147cc61ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147cc6205. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 147cc620a FUN_147cc620a body=108 status=ok
// SIG undefined FUN_147cc620a(void)

void FUN_147cc620a(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined2 *)(param_1 + 0x26) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return;
}



// FUNCTION 147cc6276 FUN_147cc6276 body=149 status=ok
// SIG undefined FUN_147cc6276(void)

void FUN_147cc6276(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x138,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x138)) {
      uVar5 = uVar4 / 0x138 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x138,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147cc630c FUN_147cc630c body=48 status=ok
// SIG undefined FUN_147cc630c(void)

void FUN_147cc630c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x138,8);
  }
  return;
}



// FUNCTION 147cc633c FUN_147cc633c body=322 status=ok
// SIG undefined FUN_147cc633c(void)

void FUN_147cc633c(longlong *param_1)

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



// FUNCTION 147cc659e FUN_147cc659e body=121 status=ok
// SIG undefined FUN_147cc659e(void)

longlong FUN_147cc659e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_147cc6618();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_147cc6670(param_1,&local_24,param_2);
    lVar1 = *param_1 + (longlong)local_24 * 0x18;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 147cc6618 FUN_147cc6618 body=87 status=ok
// SIG undefined FUN_147cc6618(void)

int * FUN_147cc6618(longlong *param_1,uint param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar2 * 0x18) == param_3[1])
           ) {
          return piVar1;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 147cc6670 FUN_147cc6670 body=278 status=ok
// SIG undefined FUN_147cc6670(void)

undefined4 * FUN_147cc6670(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

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
  FUN_147cc6788(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar1 = FUN_147cc686e(param_1,param_3,local_40,local_48);
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
      FUN_147cc6980(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc6788 FUN_147cc6788 body=230 status=ok
// SIG undefined FUN_147cc6788(void)

int * FUN_147cc6788(longlong *param_1,int *param_2)

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



// FUNCTION 147cc686e FUN_147cc686e body=160 status=ok
// SIG undefined FUN_147cc686e(void)

undefined8 FUN_147cc686e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar6 * 0x18);
        if ((*piVar1 == *param_3) && (*(int *)(*param_1 + 4 + (longlong)iVar6 * 0x18) == param_3[1])
           ) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = param_3[1];
          iVar3 = param_3[2];
          iVar4 = param_3[3];
          *piVar1 = *param_3;
          piVar1[1] = iVar2;
          piVar1[2] = iVar3;
          piVar1[3] = iVar4;
          FUN_147cc690e(param_1,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = piVar1[4];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147cc690e FUN_147cc690e body=114 status=ok
// SIG undefined FUN_147cc690e(void)

void FUN_147cc690e(longlong *param_1,int param_2)

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



// FUNCTION 147cc6980 FUN_147cc6980 body=446 status=ok
// SIG undefined FUN_147cc6980(void)

void FUN_147cc6980(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
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
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5;
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10 * 0x18),
                              *(undefined4 *)(lVar3 + 4 + lVar10 * 0x18));
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x14 + lVar10 * 0x18) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
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



// FUNCTION 147cc6b40 FUN_147cc6b40 body=134 status=ok
// SIG undefined FUN_147cc6b40(void)

undefined8 FUN_147cc6b40(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x18) == *param_2) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x18) == param_2[1])) {
          FUN_147cc6bc6(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147cc6bc6 FUN_147cc6bc6 body=87 status=ok
// SIG undefined FUN_147cc6bc6(void)

void FUN_147cc6bc6(longlong *param_1,int param_2)

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
  FUN_147cc6c1e();
  return;
}



// FUNCTION 147cc6c1e FUN_147cc6c1e body=52 status=ok
// SIG undefined FUN_147cc6c1e(void)

void FUN_147cc6c1e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 8 + (longlong)param_2 * 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_147cc690e(param_1,param_2);
  return;
}



// FUNCTION 147cc6c52 FUN_147cc6c52 body=634 status=ok
// SIG undefined FUN_147cc6c52(void)

undefined4 *
FUN_147cc6c52(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined8 param_5,undefined1 *param_6)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong *local_80;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  undefined4 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar14 = param_1 + 0xb;
  plVar2 = (longlong *)param_1[0xc];
  plVar8 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar8 = plVar14;
  }
  plVar13 = param_1 + 8;
  do {
    lVar11 = (longlong)(int)uVar4;
    local_80 = param_4;
    if (*(uint *)((longlong)plVar8 + lVar11 * 4) == param_3) {
      plVar12 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar12 = plVar13;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar12 + lVar11 * 4) * 0x10)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar13 + lVar11 * 4);
        goto LAB_147cc6d3b;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_147cc6cfa:
    uVar5 = FUN_147cc6fc0(param_1,local_80,param_5,param_3);
    FUN_147cc6ece(param_1,uVar5,param_3);
    *param_6 = 0;
LAB_147cc6d3b:
    *param_2 = uVar5;
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 == (undefined4 *)0x0) {
    local_60[0] = (undefined4)*plVar13;
  }
  param_1[9] = 0;
  local_50 = (undefined4)param_1[10];
  local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
  param_1[10] = 0x100000000;
  if (plVar2 == (longlong *)0x0) {
    local_78[0] = (undefined4)*plVar14;
  }
  param_1[0xc] = 0;
  local_68 = (undefined4)param_1[0xd];
  local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
  param_1[0xd] = 0x100000000;
  iVar7 = uVar1 * 2 + 1;
  *(int *)(param_1 + 0xe) = iVar7;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  uVar4 = uVar1 * 2 + 2;
  local_70 = plVar2;
  local_58 = puVar3;
  if (-1 < (int)uVar4) {
    if (uVar1 * 2 < 0x7ffffffe) {
      FUN_14475fe8c(plVar13);
      iVar7 = (int)param_1[0xe];
      iVar6 = (int)param_1[10];
      iVar10 = *(int *)((longlong)param_1 + 0x54);
    }
    else {
      iVar6 = 0;
      iVar10 = 1;
    }
    uVar4 = iVar7 + 1;
    *(int *)(param_1 + 10) = iVar7 + iVar6 + 1;
    if ((uint)(iVar10 - iVar6) < uVar4) {
      FUN_146f3c7b6(plVar13,iVar6);
      uVar4 = (int)param_1[0xe] + 1;
    }
    if (-1 < (int)uVar4) {
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_14476002c(plVar14);
        uVar4 = (int)param_1[0xe] + 1;
      }
      FUN_144a7a6da(plVar14,uVar4);
      plVar14 = (longlong *)local_78;
      if (plVar2 != (longlong *)0x0) {
        plVar14 = plVar2;
      }
      puVar9 = local_60;
      if (puVar3 != (undefined4 *)0x0) {
        puVar9 = puVar3;
      }
      uVar4 = 0;
      local_88 = puVar3;
      do {
        if (!SBORROW4(0,*(int *)((longlong)plVar14 + (longlong)(int)uVar4 * 4))) {
          FUN_147cc6ece(param_1,puVar9[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147cc6cfa;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 147cc6ece FUN_147cc6ece body=241 status=ok
// SIG undefined FUN_147cc6ece(void)

void FUN_147cc6ece(longlong param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  
  uVar7 = *(uint *)(param_1 + 0x70);
  uVar8 = uVar7 & param_3;
  lVar2 = param_1 + 0x58;
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar3;
  if (lVar3 == 0) {
    lVar5 = lVar2;
  }
  lVar9 = (longlong)(int)uVar8;
  uVar4 = *(uint *)(lVar5 + lVar9 * 4);
  if (!SBORROW4(0,uVar4)) {
    puVar11 = (uint *)(lVar5 + lVar9 * 4);
    uVar10 = uVar8 - uVar4 & uVar7;
    uVar6 = 0;
    do {
      if (uVar10 < uVar6) {
        if (*(uint *)(param_1 + 0x74) < uVar6) {
          *(uint *)(param_1 + 0x74) = uVar6;
          uVar4 = *puVar11;
        }
        lVar3 = *(longlong *)(param_1 + 0x48);
        if (*(longlong *)(param_1 + 0x48) == 0) {
          lVar3 = param_1 + 0x40;
        }
        uVar1 = *(undefined4 *)(lVar3 + lVar9 * 4);
        *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
        lVar3 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar3 = lVar2;
        }
        *(uint *)(lVar3 + lVar9 * 4) = param_3;
        uVar7 = *(uint *)(param_1 + 0x70);
        lVar3 = *(longlong *)(param_1 + 0x60);
        param_3 = uVar4;
        uVar6 = uVar10;
        param_2 = uVar1;
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 1 & uVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = lVar2;
      }
      lVar9 = (longlong)(int)uVar8;
      puVar11 = (uint *)(lVar5 + lVar9 * 4);
      uVar4 = *puVar11;
      uVar10 = uVar8 - uVar4 & uVar7;
    } while (!SBORROW4(0,uVar4));
    if (*(uint *)(param_1 + 0x74) < uVar6) {
      *(uint *)(param_1 + 0x74) = uVar6;
    }
  }
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined4 *)(lVar3 + lVar9 * 4) = param_2;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *(uint *)(lVar2 + lVar9 * 4) = param_3;
  return;
}



// FUNCTION 147cc6fc0 FUN_147cc6fc0 body=192 status=ok
// SIG undefined FUN_147cc6fc0(void)

int FUN_147cc6fc0(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if ((int)param_1[7] < 1) {
    iVar5 = (int)param_1[1];
    uVar4 = *param_2;
    uVar1 = *param_3;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_147cc7080(param_1,iVar5);
    }
    lVar3 = *param_1;
    *(undefined8 *)(lVar3 + (longlong)iVar5 * 0x10) = uVar4;
    *(undefined4 *)(lVar3 + 8 + (longlong)iVar5 * 0x10) = uVar1;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 4 + param_1[2]);
  }
  else {
    iVar5 = FUN_14020b4c6(param_1 + 4);
    lVar3 = *param_1;
    lVar6 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar3 + lVar6) = *param_2;
    *(undefined4 *)(lVar3 + 8 + lVar6) = *param_3;
    puVar7 = (undefined4 *)((longlong)iVar5 * 4 + param_1[2]);
  }
  *puVar7 = param_4;
  return iVar5;
}



// FUNCTION 147cc7080 FUN_147cc7080 body=132 status=ok
// SIG undefined FUN_147cc7080(void)

void FUN_147cc7080(longlong param_1,int param_2)

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



// FUNCTION 147cc7106 FUN_147cc7106 body=120 status=ok
// SIG undefined FUN_147cc7106(void)

void FUN_147cc7106(longlong *param_1,int *param_2,uint param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar1 = *(uint *)(param_1 + 0xe);
  uVar4 = uVar1 & param_3;
  plVar3 = param_1 + 0xb;
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[0xc];
  }
  do {
    if (*(uint *)((longlong)plVar3 + (longlong)(int)uVar4 * 4) == param_3) {
      plVar5 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar5 = param_1 + 8;
      }
      iVar2 = *(int *)((longlong)plVar5 + (longlong)(int)uVar4 * 4);
      if (*param_4 == *(longlong *)(*param_1 + (longlong)iVar2 * 0x10)) goto LAB_147cc7174;
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  iVar2 = -1;
LAB_147cc7174:
  *param_2 = iVar2;
  return;
}



// FUNCTION 147cc717e FUN_147cc717e body=315 status=ok
// SIG undefined FUN_147cc717e(void)

void FUN_147cc717e(LPCRITICAL_SECTION param_1,ulonglong param_2,longlong param_3)

{
  WORD *pWVar1;
  uint uVar2;
  int iVar3;
  HANDLE *ppvVar4;
  undefined1 auStack_68 [32];
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  ulonglong *local_38;
  uint *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    ppvVar4 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar4 = param_1[2].LockSemaphore;
    }
    iVar3 = *(int *)((longlong)ppvVar4 +
                    (ulonglong)((int)param_1[2].SpinCount - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      do {
        pWVar1 = &(param_1[1].DebugInfo)->Type + (longlong)iVar3 * 0xc;
        if (*(ulonglong *)pWVar1 == param_2) {
          if ((pWVar1 != (WORD *)0x0) &&
             ((_RTL_CRITICAL_SECTION **)(pWVar1 + 4) != (_RTL_CRITICAL_SECTION **)0x0)) {
            if ((*(int *)(pWVar1 + 4) == 1) && ((*(byte *)(param_2 + 0xa0) & 1) != 0)) {
              *(undefined4 *)(pWVar1 + 4) = 0;
              *(undefined4 *)(pWVar1 + 6) = *(undefined4 *)(param_3 + 8);
            }
            goto LAB_147cc7286;
          }
          break;
        }
        iVar3 = *(int *)&((LIST_ENTRY *)(pWVar1 + 8))->Flink;
      } while (iVar3 != -1);
    }
  }
  uVar2 = *(uint *)(param_2 + 0xa0) & 1;
  local_48 = uVar2 ^ 1;
  local_30 = &local_48;
  local_44 = *(undefined4 *)(param_3 + 8 + (ulonglong)(uVar2 == 0) * 8);
  local_38 = &local_40;
  FUN_147cd04a2(param_1 + 1,local_24);
  param_2 = local_40;
LAB_147cc7286:
  *(byte *)(param_2 + 0xa0) = *(byte *)(param_2 + 0xa0) & 0xfe;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc72ba FUN_147cc72ba body=199 status=ok
// SIG undefined FUN_147cc72ba(void)

void FUN_147cc72ba(LPCRITICAL_SECTION param_1,ulonglong param_2,uint param_3)

{
  WORD *pWVar1;
  uint uVar2;
  HANDLE *ppvVar3;
  int iVar4;
  
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != param_1[2].RecursionCount) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    ppvVar3 = &param_1[2].OwningThread;
    if (param_1[2].LockSemaphore != (HANDLE *)0x0) {
      ppvVar3 = param_1[2].LockSemaphore;
    }
    iVar4 = *(int *)((longlong)ppvVar3 +
                    (ulonglong)((int)param_1[2].SpinCount - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        pWVar1 = &(param_1[1].DebugInfo)->Type + (longlong)iVar4 * 0xc;
        if (*(ulonglong *)pWVar1 == param_2) {
          if (((ulonglong)(pWVar1 + 4) & 0xfffffffffffffff7) != 0) {
            FUN_147cd099e(param_1 + 1,param_2);
            param_1[3].DebugInfo =
                 (PRTL_CRITICAL_SECTION_DEBUG)
                 ((longlong)&(param_1[3].DebugInfo)->Type + (ulonglong)param_3);
          }
          break;
        }
        iVar4 = *(int *)&((LIST_ENTRY *)(pWVar1 + 8))->Flink;
      } while (iVar4 != -1);
    }
  }
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147cc72e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 147cc774a FUN_147cc774a body=113 status=ok
// SIG undefined FUN_147cc774a(void)

void FUN_147cc774a(longlong param_1,undefined4 *param_2,int param_3,ulonglong param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x34) = param_3;
  *(undefined1 *)(param_1 + 0x38) = param_5;
  FUN_140964b82();
  (**(code **)(**(longlong **)(param_1 + 0x18) + 8))(*(longlong **)(param_1 + 0x18),param_3);
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar3 * 4) = *param_2;
      param_2 = (undefined4 *)((longlong)param_2 + (param_4 & 0xffffffff));
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  return;
}



// FUNCTION 147cc77bc FUN_147cc77bc body=125 status=ok
// SIG undefined FUN_147cc77bc(void)

void FUN_147cc77bc(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [144];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *param_2;
  local_b8 = *(undefined4 *)(param_2 + 1);
  FUN_147cab27d(local_b0,&local_c0);
  FUN_147cc783a(param_1,local_b0,param_3);
  FUN_147cab400(local_b0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc783a FUN_147cc783a body=134 status=ok
// SIG undefined FUN_147cc783a(void)

void FUN_147cc783a(longlong param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *(undefined1 *)(param_1 + 0x38) = param_3;
  uVar1 = *(uint *)(param_2 + 0x8c);
  uVar4 = (ulonglong)uVar1;
  if (uVar4 == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_140964b22(param_1,uVar4);
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(param_1 + 0x28) + (ulonglong)(uint)(*(int *)(param_1 + 0x30) * (int)uVar3))
             = *(undefined4 *)
                (*(longlong *)(param_2 + 0x80) + (longlong)*(int *)(param_2 + 0x88) * uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
  }
  return;
}



// FUNCTION 147cc78c0 FUN_147cc78c0 body=257 status=ok
// SIG undefined FUN_147cc78c0(void)

void FUN_147cc78c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_58,L"ColorVertexData(%i)=(",*(undefined4 *)(param_1 + 0x34));
  iVar1 = local_50 + -1;
  if (local_50 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_58,iVar1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1412d7f26(param_2,*(int *)(param_1 + 0x34) * 9 + iVar1);
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar3 = 0;
    do {
      FUN_141301ee6(&local_58,L"%.8x,",
                    *(undefined4 *)
                     (*(longlong *)(param_1 + 0x28) + (ulonglong)(*(int *)(param_1 + 0x30) * uVar3))
                   );
      sVar2 = wcslen((wchar_t *)&local_58);
      FUN_1400020e8(param_2,&local_58,sVar2 & 0xffffffff);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x34));
  }
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  *(undefined2 *)(*param_2 + -2 + (longlong)iVar1 * 2) = 0x29;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc79c2 FUN_147cc79c2 body=682 status=ok
// SIG undefined FUN_147cc79c2(void)

void FUN_147cc79c2(longlong param_1,longlong param_2)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  short *psVar8;
  ushort uVar9;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar2 = FUN_1409887c6(param_2,L"ColorVertexData(",&local_24);
  if (cVar2 != '\0') {
    for (psVar8 = (short *)(param_2 + 0x10); (sVar3 = psVar8[-8], sVar3 != 0x29 && (sVar3 != 0));
        psVar8 = psVar8 + 1) {
    }
    while ((sVar3 != 0 && (sVar3 != 0x28))) {
      psVar1 = psVar8 + -7;
      psVar8 = psVar8 + 1;
      sVar3 = *psVar1;
    }
    *(undefined4 *)(param_1 + 0x34) = local_24;
    FUN_140964b82(param_1,*(undefined1 *)(param_1 + 0x38));
    (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
              (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x34),0);
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    if (*(int *)(param_1 + 0x34) != 0) {
      lVar6 = 0;
      do {
        uVar9 = psVar8[-1];
        iVar7 = uVar9 - 0x30;
        if (9 < (ushort)iVar7) {
          if ((ushort)(uVar9 - 0x61) < 6) {
            iVar7 = uVar9 - 0x57;
          }
          else {
            iVar7 = uVar9 - 0x37;
            if (5 < (ushort)(uVar9 - 0x41)) {
              iVar7 = 0;
            }
          }
        }
        sVar3 = *psVar8;
        uVar9 = sVar3 - 0x30;
        if (9 < uVar9) {
          if ((ushort)(sVar3 - 0x61U) < 6) {
            uVar9 = sVar3 - 0x57;
          }
          else {
            uVar9 = sVar3 - 0x37;
            if (5 < (ushort)(sVar3 - 0x41U)) {
              uVar9 = 0;
            }
          }
        }
        *(char *)(lVar4 + lVar6 * 4) = (char)uVar9 + (char)(iVar7 << 4);
        uVar9 = psVar8[-3];
        iVar7 = uVar9 - 0x30;
        if (9 < (ushort)iVar7) {
          if ((ushort)(uVar9 - 0x61) < 6) {
            iVar7 = uVar9 - 0x57;
          }
          else {
            iVar7 = uVar9 - 0x37;
            if (5 < (ushort)(uVar9 - 0x41)) {
              iVar7 = 0;
            }
          }
        }
        sVar3 = psVar8[-2];
        uVar9 = sVar3 - 0x30;
        if (9 < uVar9) {
          if ((ushort)(sVar3 - 0x61U) < 6) {
            uVar9 = sVar3 - 0x57;
          }
          else {
            uVar9 = sVar3 - 0x37;
            if (5 < (ushort)(sVar3 - 0x41U)) {
              uVar9 = 0;
            }
          }
        }
        *(char *)(lVar4 + 1 + lVar6 * 4) = (char)uVar9 + (char)(iVar7 << 4);
        uVar9 = psVar8[-5];
        iVar7 = uVar9 - 0x30;
        if (9 < (ushort)iVar7) {
          if ((ushort)(uVar9 - 0x61) < 6) {
            iVar7 = uVar9 - 0x57;
          }
          else {
            iVar7 = uVar9 - 0x37;
            if (5 < (ushort)(uVar9 - 0x41)) {
              iVar7 = 0;
            }
          }
        }
        sVar3 = psVar8[-4];
        uVar9 = sVar3 - 0x30;
        if (9 < uVar9) {
          if ((ushort)(sVar3 - 0x61U) < 6) {
            uVar9 = sVar3 - 0x57;
          }
          else {
            uVar9 = sVar3 - 0x37;
            if (5 < (ushort)(sVar3 - 0x41U)) {
              uVar9 = 0;
            }
          }
        }
        *(char *)(lVar4 + 2 + lVar6 * 4) = (char)uVar9 + (char)(iVar7 << 4);
        uVar9 = psVar8[-7];
        iVar7 = uVar9 - 0x30;
        if (9 < (ushort)iVar7) {
          if ((ushort)(uVar9 - 0x61) < 6) {
            iVar7 = uVar9 - 0x57;
          }
          else {
            iVar7 = uVar9 - 0x37;
            if (5 < (ushort)(uVar9 - 0x41)) {
              iVar7 = 0;
            }
          }
        }
        sVar3 = psVar8[-6];
        uVar9 = sVar3 - 0x30;
        if (9 < uVar9) {
          if ((ushort)(sVar3 - 0x61U) < 6) {
            uVar9 = sVar3 - 0x57;
          }
          else {
            uVar9 = sVar3 - 0x37;
            if (5 < (ushort)(sVar3 - 0x41U)) {
              uVar9 = 0;
            }
          }
        }
        *(char *)(lVar4 + 3 + lVar6 * 4) = (char)uVar9 + (char)(iVar7 << 4);
        lVar6 = lVar6 + 1;
        psVar8 = psVar8 + 9;
      } while ((uint)lVar6 < *(uint *)(param_1 + 0x34));
    }
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    FUN_140308182(param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cc7c6e FUN_147cc7c6e body=93 status=ok
// SIG undefined FUN_147cc7c6e(void)

void FUN_147cc7c6e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *_Src;
  
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_14735b34c(param_2,*(int *)(param_1 + 0x34),1);
    iVar1 = *(int *)(param_1 + 0x34);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
    _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))();
    memcpy((void *)*param_2,_Src,(ulonglong)(uint)(iVar1 * iVar2));
    return;
  }
  return;
}



// FUNCTION 147cc7ccc FUN_147cc7ccc body=19 status=ok
// SIG undefined FUN_147cc7ccc(void)

undefined8 FUN_147cc7ccc(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147cc7cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147cc7ce0 FUN_147cc7ce0 body=215 status=ok
// SIG undefined FUN_147cc7ce0(void)

undefined8 *
FUN_147cc7ce0(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14a2f1890;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 3) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_4;
  param_1[4] = 0;
  param_1[5] = *param_5;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return param_1;
}



// FUNCTION 147cc7db8 FUN_147cc7db8 body=94 status=ok
// SIG undefined FUN_147cc7db8(void)

void FUN_147cc7db8(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (**(code **)(*(longlong *)*param_2 + 8))();
  local_28 = param_2;
  FUN_147cd0f8c(param_1 + 0x40,local_1c);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc7e18 FUN_147cc7e18 body=161 status=ok
// SIG undefined FUN_147cc7e18(void)

longlong FUN_147cc7e18(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147cc7eba FUN_147cc7eba body=105 status=ok
// SIG undefined FUN_147cc7eba(void)

void FUN_147cc7eba(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *(undefined1 *)(param_1 + 0x8e) = 0;
  return;
}



// FUNCTION 147cc7f24 FUN_147cc7f24 body=150 status=ok
// SIG undefined FUN_147cc7f24(void)

void FUN_147cc7f24(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14024fde8(param_1 + 0x28,0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_14499148c(param_1 + 0x40,0);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14499148c(param_1 + 0x50,0);
  }
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_14480809c(param_1 + 0x60,0);
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_14480809c(param_1 + 0x70,0);
  }
  *(undefined8 *)(param_1 + 0x86) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 147cc7fba FUN_147cc7fba body=350 status=ok
// SIG undefined FUN_147cc7fba(void)

void FUN_147cc7fba(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 0x28) & 5) == 1) {
    FUN_147cc7f24(param_1);
  }
  uVar2 = FUN_14089a36e(param_2,param_1 + 0x28);
  uVar2 = FUN_146c4db8e(uVar2,param_1 + 0x50);
  uVar2 = FUN_146c4db8e(uVar2,param_1 + 0x40);
  uVar2 = FUN_1447a84cc(uVar2,param_1 + 0x60);
  plVar3 = (longlong *)FUN_1447a84cc(uVar2,param_1 + 0x70);
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_1 + 0x80),4);
    }
    else {
      FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_1 + 0x84),4);
    }
    else {
      FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  puVar1 = *(undefined4 **)plVar3[1];
  if ((undefined4 *)((undefined8 *)plVar3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,(undefined4 *)(param_1 + 0x88),4);
    }
    else {
      FUN_14572512c(plVar3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)plVar3[1] = *(longlong *)plVar3[1] + 4;
  }
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x8e) = 0;
    *(undefined2 *)(param_1 + 0x8c) = 0x101;
  }
  return;
}



// FUNCTION 147cc8118 FUN_147cc8118 body=28 status=ok
// SIG undefined FUN_147cc8118(void)

undefined8 FUN_147cc8118(undefined8 param_1,undefined8 param_2)

{
  FUN_147cc7fba(param_2,param_1);
  return param_1;
}



// FUNCTION 147cc8134 FUN_147cc8134 body=7152 status=ok
// SIG undefined FUN_147cc8134(void)

void FUN_147cc8134(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4,
                  int param_5,undefined4 param_6,float param_7)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 *puVar21;
  float *pfVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  uint uVar33;
  float fVar34;
  undefined8 *puVar35;
  ulonglong *puVar36;
  byte bVar37;
  undefined8 *puVar38;
  undefined8 *puVar39;
  int iVar40;
  byte bVar41;
  int iVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  int *piVar45;
  ulonglong uVar46;
  longlong lVar47;
  int iVar48;
  float *pfVar49;
  undefined8 *puVar50;
  uint uVar51;
  bool bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStack_598 [36];
  float local_574;
  int *local_570;
  int local_564;
  ulonglong local_560;
  longlong local_558;
  int local_54c;
  longlong local_548;
  longlong *local_540;
  ulonglong local_538;
  longlong local_530;
  ulonglong local_528;
  int local_51c;
  undefined8 local_518;
  longlong local_510;
  ulonglong *local_508;
  longlong *local_500;
  uint local_4f8;
  float local_4f4;
  int local_4f0;
  uint local_4ec;
  longlong local_4e8;
  longlong local_4e0;
  longlong local_4d8;
  ulonglong local_4d0;
  longlong local_4c8;
  longlong local_4c0;
  longlong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  ulonglong local_498;
  longlong local_490;
  ulonglong local_488;
  ulonglong local_480;
  longlong local_478;
  undefined8 uStack_470;
  int local_45c;
  longlong local_458;
  undefined8 uStack_450;
  int *local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 *local_428;
  int local_420;
  uint local_41c;
  longlong local_418;
  longlong local_410;
  undefined4 local_408 [188];
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined8 uStack_104;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_598;
  *(undefined1 *)(param_1 + 0x8d) = 1;
  if (((int)(&DAT_14ca814b8)[(param_2 & 0xffff) * 0xf] < 3) || ((int)param_4[1] == 0))
  goto LAB_147cc81db;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  fVar55 = (param_7 + param_7) * 1e-06 * 100.0;
  *(float *)(param_1 + 0x84) = fVar55;
  *(undefined4 *)(param_1 + 0x88) = 0x3a000000;
  local_508 = (ulonglong *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = 0;
  local_540 = param_4;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14024fde8(local_508,0);
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  iVar48 = (int)local_540[1];
  if (iVar48 < 0) {
LAB_147cc9d1d:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar48);
  }
  local_4d8 = param_1 + 0x60;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != iVar48) {
    FUN_14480809c(local_4d8);
  }
  iVar48 = (int)local_540[1];
  if (iVar48 < 0) goto LAB_147cc9d1d;
  local_4e0 = param_1 + 0x70;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != iVar48) {
    FUN_14480809c(local_4e0);
  }
  iVar48 = (int)local_540[1];
  if (iVar48 < 0) goto LAB_147cc9d1d;
  local_4e8 = param_1 + 0x40;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) != iVar48) {
    FUN_14499148c(local_4e8);
  }
  iVar48 = (int)local_540[1];
  if (iVar48 < 0) goto LAB_147cc9d1d;
  local_500 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != iVar48) {
    FUN_14499148c(local_500);
  }
  iVar48 = DAT_14c761564;
  local_428 = (undefined1 *)0x0;
  local_41c = 0x80;
  local_420 = param_5;
  uVar51 = param_5 + 0x1f;
  if (0x1f < uVar51) {
    if (uVar51 < 0xa0) {
      puVar21 = local_438;
LAB_147cc9cc4:
      uVar51 = uVar51 >> 3 & 0xfffffffc;
    }
    else {
      FUN_14499171c(local_438,0,uVar51 >> 5);
      local_41c = uVar51 & 0xffffffe0;
      puVar21 = local_428;
      if (local_428 == (undefined1 *)0x0) {
        puVar21 = local_438;
      }
      if (uVar51 < 0x120) goto LAB_147cc9cc4;
      uVar51 = (uVar51 >> 5) << 2;
    }
    memset(puVar21,0,(ulonglong)uVar51);
    iVar20 = local_420 + 0x1f;
    if (-1 < local_420) {
      iVar20 = local_420;
    }
    if (local_420 % 0x20 != 0) {
      puVar21 = local_428;
      if (local_428 == (undefined1 *)0x0) {
        puVar21 = local_438;
      }
      bVar37 = -(char)(local_420 % 0x20);
      *(uint *)(puVar21 + (longlong)(iVar20 >> 5) * 4) =
           (uint)(*(int *)(puVar21 + (longlong)(iVar20 >> 5) * 4) << (bVar37 & 0x1f)) >>
           (bVar37 & 0x1f);
    }
  }
  if ((longlong)(int)param_3[1] != 0) {
    lVar18 = *param_3;
    lVar25 = (longlong)(int)param_3[1] * 0xf8 + lVar18;
    do {
      if (((iVar48 < 1) || (iVar48 != 1 && *(char *)(lVar18 + 0xc) == '\0')) &&
         (*(int *)(lVar18 + 0x48) != 0)) {
        uVar51 = 0;
        do {
          iVar20 = uVar51 + *(int *)(lVar18 + 0x10);
          puVar21 = local_428;
          if (local_428 == (undefined1 *)0x0) {
            puVar21 = local_438;
          }
          iVar27 = *(int *)(lVar18 + 0x10) + uVar51 + 0x1f;
          if (-1 < iVar20) {
            iVar27 = iVar20;
          }
          *(uint *)(puVar21 + (longlong)(iVar27 >> 5) * 4) =
               *(uint *)(puVar21 + (longlong)(iVar27 >> 5) * 4) | 1 << ((byte)iVar20 & 0x1f);
          uVar51 = uVar51 + 1;
        } while (uVar51 < *(uint *)(lVar18 + 0x48));
      }
      lVar18 = lVar18 + 0xf8;
    } while (lVar18 != lVar25);
  }
  local_448 = (int *)0x0;
  uStack_440 = 0;
  local_458 = 0;
  uStack_450 = 0;
  puVar36 = local_508;
  if (0 < (int)local_540[1]) {
    local_4f4 = 1.0 / fVar55;
    lVar18 = 0;
    local_530 = param_1;
    do {
      local_51c = *(int *)(param_1 + 0x80);
      plVar19 = *(longlong **)(*local_540 + lVar18 * 8);
      local_45c = 0;
      local_4a0 = lVar18;
      lVar18 = (**(code **)(*plVar19 + 0x2b0))(plVar19,param_6,&local_45c);
      fVar55 = 0.0;
      if (local_45c == 0) {
        fVar60 = 0.0;
        fVar59 = 0.0;
        fVar58 = 0.0;
        fVar61 = 0.0;
        fVar62 = 0.0;
        fVar57 = 0.0;
        fVar56 = 0.0;
      }
      else {
        cVar15 = (**(code **)(*plVar19 + 0x2f8))(plVar19);
        fVar60 = 0.0;
        fVar59 = 0.0;
        fVar58 = 0.0;
        fVar61 = 0.0;
        fVar62 = 0.0;
        fVar57 = 0.0;
        fVar56 = 0.0;
        if (cVar15 != '\0') {
          local_478 = 0;
          uStack_470 = 0;
          iVar48 = local_45c;
          if (local_45c < 0) goto LAB_147cc9d1d;
          if (local_45c == 0) {
            fVar55 = 3.4028235e+38;
            fVar60 = 3.4028235e+38;
            fVar59 = 3.4028235e+38;
            fVar58 = 3.4028235e+38;
            fVar56 = -3.4028235e+38;
            fVar61 = -3.4028235e+38;
            fVar62 = -3.4028235e+38;
            fVar57 = -3.4028235e+38;
            uVar51 = 0;
          }
          else {
            FUN_14367bfc2(&local_478);
            if (local_45c < 1) {
              fVar61 = -3.4028235e+38;
              fVar62 = -3.4028235e+38;
              fVar58 = 3.4028235e+38;
              fVar59 = 3.4028235e+38;
              fVar60 = 3.4028235e+38;
              fVar55 = 3.4028235e+38;
              fVar56 = -3.4028235e+38;
              fVar57 = -3.4028235e+38;
            }
            else {
              pfVar49 = (float *)(lVar18 + 0xc);
              fVar53 = -NAN;
              bVar37 = 1;
              lVar18 = 0;
              fVar61 = -3.4028235e+38;
              local_570 = (int *)CONCAT44(local_570._4_4_,0xff7fffff);
              local_574 = -3.4028235e+38;
              fVar62 = -3.4028235e+38;
              fVar58 = 3.4028235e+38;
              fVar59 = 3.4028235e+38;
              fVar60 = 3.4028235e+38;
              fVar55 = 3.4028235e+38;
              do {
                uVar46 = uStack_470;
                local_538 = CONCAT44(local_538._4_4_,fVar59);
                local_558 = CONCAT44(local_558._4_4_,fVar58);
                fVar56 = pfVar49[3];
                pfVar22 = (float *)&DAT_14c846330;
                if ((-1 < (int)fVar56) &&
                   (pfVar22 = (float *)&DAT_14c846330, (int)fVar56 < local_420)) {
                  puVar21 = local_428;
                  if (local_428 == (undefined1 *)0x0) {
                    puVar21 = local_438;
                  }
                  pfVar22 = pfVar49;
                  if ((*(uint *)(puVar21 + (ulonglong)((uint)fVar56 >> 5) * 4) >>
                       ((uint)fVar56 & 0x1f) & 1) == 0) {
                    pfVar22 = (float *)&DAT_14c846330;
                  }
                }
                fVar34 = *pfVar22;
                fVar58 = pfVar22[1];
                fVar3 = pfVar22[2];
                fVar59 = pfVar49[-3];
                fVar4 = pfVar49[-2];
                fVar5 = pfVar49[-1];
                bVar41 = (int)fVar53 <= (int)fVar56;
                fVar57 = local_4f4 * fVar59;
                if (1.3421772e+08 <= fVar57) {
                  fVar57 = 1.3421772e+08;
                }
                if (fVar57 <= -1.3421773e+08) {
                  fVar57 = -1.3421773e+08;
                }
                fVar53 = local_4f4 * fVar4;
                if (1.3421772e+08 <= fVar53) {
                  fVar53 = 1.3421772e+08;
                }
                if (fVar53 <= -1.3421773e+08) {
                  fVar53 = -1.3421773e+08;
                }
                iVar20 = (int)ROUND(fVar57 + fVar57 + 0.5) >> 1;
                iVar48 = (int)ROUND(fVar53 + fVar53 + 0.5) >> 1;
                fVar57 = local_4f4 * fVar5;
                if (1.3421772e+08 <= fVar57) {
                  fVar57 = 1.3421772e+08;
                }
                if (fVar57 <= -1.3421773e+08) {
                  fVar57 = -1.3421773e+08;
                }
                uVar51 = (int)ROUND(fVar57 + fVar57 + 0.5) >> 1;
                fVar57 = fVar34 * 2048.0;
                if (32767.0 <= fVar57) {
                  fVar57 = 32767.0;
                }
                if (fVar57 <= -32768.0) {
                  fVar57 = -32768.0;
                }
                iVar27 = (int)ROUND(fVar57 + fVar57 + 0.5) >> 1;
                fVar57 = fVar58 * 2048.0;
                if (32767.0 <= fVar57) {
                  fVar57 = 32767.0;
                }
                if (fVar57 <= -32768.0) {
                  fVar57 = -32768.0;
                }
                fVar53 = fVar3 * 2048.0;
                if (32767.0 <= fVar53) {
                  fVar53 = 32767.0;
                }
                if (fVar53 <= -32768.0) {
                  fVar53 = -32768.0;
                }
                iVar31 = (int)ROUND(fVar57 + fVar57 + 0.5) >> 1;
                uVar33 = (int)ROUND(fVar53 + fVar53 + 0.5) >> 1;
                fVar53 = fVar56;
                if (((iVar20 != (int)DAT_14c9a5298) || (iVar48 != DAT_14c9a5298._4_4_)) ||
                   ((uVar51 != DAT_14c9a52a0 ||
                    (((iVar27 != iVar20 || (iVar31 != iVar48)) || (uVar33 != uVar51)))))) {
                  lVar25 = (longlong)(int)uStack_470;
                  uVar16 = (int)uStack_470 + 1;
                  uStack_470 = CONCAT44(uStack_470._4_4_,uVar16);
                  if (uStack_470._4_4_ < uVar16) {
                    local_560 = CONCAT71(local_560._1_7_,bVar37);
                    local_510 = CONCAT71(local_510._1_7_,bVar41);
                    local_548 = lVar18;
                    local_528 = (ulonglong)(uint)fVar56;
                    FUN_14367c10a(&local_478,uVar46 & 0xffffffff);
                    fVar53 = (float)local_528;
                    lVar18 = local_548;
                    bVar41 = (byte)local_510;
                    bVar37 = (byte)local_560;
                  }
                  lVar25 = lVar25 * 0x1c;
                  *(int *)(local_478 + lVar25) = iVar20;
                  *(int *)(local_478 + 4 + lVar25) = iVar48;
                  *(uint *)(local_478 + 8 + lVar25) = uVar51;
                  *(int *)(local_478 + 0xc + lVar25) = iVar27;
                  *(int *)(local_478 + 0x10 + lVar25) = iVar31;
                  *(uint *)(local_478 + 0x14 + lVar25) = uVar33;
                  *(float *)(local_478 + 0x18 + lVar25) = fVar53;
                }
                lVar25 = local_478;
                if (fVar61 <= fVar59) {
                  fVar61 = fVar59;
                }
                if (fVar62 <= fVar4) {
                  fVar62 = fVar4;
                }
                fVar57 = local_574;
                if (local_574 <= fVar5) {
                  fVar57 = fVar5;
                }
                fVar56 = fVar58;
                if (fVar58 <= fVar3) {
                  fVar56 = fVar3;
                }
                fVar54 = fVar34;
                if (fVar34 <= fVar56) {
                  fVar54 = fVar56;
                }
                fVar56 = local_570._0_4_;
                if (local_570._0_4_ <= fVar54) {
                  fVar56 = fVar54;
                }
                local_570 = (int *)CONCAT44(local_570._4_4_,fVar56);
                if (fVar59 <= fVar55) {
                  fVar55 = fVar59;
                }
                if (fVar4 <= fVar60) {
                  fVar60 = fVar4;
                }
                fVar59 = (float)local_538;
                if (fVar5 <= (float)local_538) {
                  fVar59 = fVar5;
                }
                if (fVar3 <= fVar58) {
                  fVar58 = fVar3;
                }
                if (fVar58 <= fVar34) {
                  fVar34 = fVar58;
                }
                fVar58 = (float)local_558;
                if (fVar34 <= (float)local_558) {
                  fVar58 = fVar34;
                }
                bVar37 = bVar37 & bVar41;
                lVar18 = lVar18 + 1;
                pfVar49 = pfVar49 + 7;
                local_574 = fVar57;
              } while (lVar18 < local_45c);
              iVar48 = (int)uStack_470;
              param_1 = local_530;
              if (bVar37 == 0 && 1 < (int)uStack_470) {
                uVar46 = uStack_470 & 0xffffffff;
                memset(local_408,0,0x2f0);
                local_418 = lVar25;
                local_410 = uVar46 * 0x1c + lVar25 + -0x1c;
                fVar56 = logf((float)iVar48);
                local_408[0] = (int)(longlong)(fVar56 + fVar56);
                plVar19 = &local_418;
                do {
                  puVar24 = (undefined8 *)*plVar19;
                  puVar39 = (undefined8 *)plVar19[1];
                  iVar48 = (int)plVar19[2];
                  iVar20 = (int)((ulonglong)((longlong)puVar39 - (longlong)puVar24) >> 2) *
                           -0x49249249;
                  uVar51 = iVar20 + 1;
                  puVar44 = puVar24;
                  puVar43 = puVar39;
                  if (iVar48 != 0) {
LAB_147cc8b20:
                    if (8 < (int)uVar51) {
                      lVar18 = (ulonglong)(uVar51 >> 1) * 0x1c;
                      uVar8 = *(undefined8 *)((longlong)puVar24 + lVar18);
                      uVar9 = ((undefined8 *)((longlong)puVar24 + lVar18))[1];
                      puVar50 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xc);
                      uVar10 = puVar50[1];
                      uStack_108 = (undefined4)((ulonglong)*puVar50 >> 0x20);
                      local_10c = (undefined4)((ulonglong)uVar9 >> 0x20);
                      uVar11 = *puVar24;
                      uVar12 = puVar24[1];
                      uVar13 = *(undefined8 *)((longlong)puVar24 + 0x14);
                      puVar50 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xc);
                      *puVar50 = *(undefined8 *)((longlong)puVar24 + 0xc);
                      puVar50[1] = uVar13;
                      *(undefined8 *)((longlong)puVar24 + lVar18) = uVar11;
                      ((undefined8 *)((longlong)puVar24 + lVar18))[1] = uVar12;
                      *(ulonglong *)((longlong)puVar24 + 0xc) = CONCAT44(uStack_108,local_10c);
                      *(undefined8 *)((longlong)puVar24 + 0x14) = uVar10;
                      *puVar24 = uVar8;
                      puVar24[1] = uVar9;
                      puVar50 = (undefined8 *)((longlong)puVar39 + 0x1c);
                      puVar23 = puVar24;
                      do {
                        puVar14 = (undefined8 *)((longlong)puVar23 + 0x1c);
                        puVar38 = (undefined8 *)((longlong)puVar23 + 0x1c);
                        do {
                          puVar23 = puVar38;
                          puVar35 = puVar14;
                          if (puVar39 < puVar23) break;
                          puVar14 = (undefined8 *)((longlong)puVar35 + 0x1c);
                          puVar38 = (undefined8 *)((longlong)puVar23 + 0x1c);
                        } while (*(uint *)(puVar23 + 3) <= *(uint *)(puVar24 + 3));
                        puVar14 = puVar50 + -7;
                        do {
                          puVar38 = puVar50;
                          puVar29 = puVar14;
                          puVar50 = (undefined8 *)((longlong)puVar38 + -0x1c);
                          if (puVar50 <= puVar24) break;
                          puVar14 = (undefined8 *)((longlong)puVar29 + -0x1c);
                        } while (*(uint *)(puVar24 + 3) <= *(uint *)((longlong)puVar38 + -4));
                        if (puVar50 < puVar23) goto LAB_147cc8c15;
                        uVar8 = *puVar23;
                        uVar9 = puVar23[1];
                        uVar10 = *(undefined8 *)((longlong)puVar23 + 0x14);
                        uStack_108 = (undefined4)
                                     ((ulonglong)*(undefined8 *)((longlong)puVar23 + 0xc) >> 0x20);
                        local_10c = (undefined4)((ulonglong)uVar9 >> 0x20);
                        uVar11 = *puVar50;
                        uVar12 = *(undefined8 *)((longlong)puVar38 + -0x14);
                        uVar13 = puVar38[-1];
                        *(undefined8 *)((longlong)puVar23 + 0xc) = puVar38[-2];
                        *(undefined8 *)((longlong)puVar23 + 0x14) = uVar13;
                        *puVar23 = uVar11;
                        puVar23[1] = uVar12;
                        puVar38[-2] = CONCAT44(uStack_108,local_10c);
                        puVar38[-1] = uVar10;
                        *puVar50 = uVar8;
                        *(undefined8 *)((longlong)puVar38 + -0x14) = uVar9;
                      } while( true );
                    }
                    for (; puVar43 = puVar24, puVar44 = puVar24, puVar24 < puVar39;
                        puVar39 = (undefined8 *)((longlong)puVar39 + -0x1c)) {
                      while (puVar50 = puVar43, puVar44 = (undefined8 *)((longlong)puVar44 + 0x1c),
                            puVar44 <= puVar39) {
                        puVar43 = puVar44;
                        if (*(uint *)(puVar44 + 3) <= *(uint *)(puVar50 + 3)) {
                          puVar43 = puVar50;
                        }
                      }
                      uStack_118 = *puVar50;
                      uStack_104 = *(undefined8 *)((longlong)puVar50 + 0x14);
                      uStack_108 = (undefined4)
                                   ((ulonglong)*(undefined8 *)((longlong)puVar50 + 0xc) >> 0x20);
                      uVar11 = uStack_118;
                      uStack_110 = (undefined4)puVar50[1];
                      local_10c = (undefined4)((ulonglong)puVar50[1] >> 0x20);
                      uVar8 = *puVar39;
                      uVar9 = puVar39[1];
                      uVar10 = *(undefined8 *)((longlong)puVar39 + 0x14);
                      *(undefined8 *)((longlong)puVar50 + 0xc) =
                           *(undefined8 *)((longlong)puVar39 + 0xc);
                      *(undefined8 *)((longlong)puVar50 + 0x14) = uVar10;
                      *puVar50 = uVar8;
                      puVar50[1] = uVar9;
                      *(ulonglong *)((longlong)puVar39 + 0xc) = CONCAT44(uStack_108,local_10c);
                      *(undefined8 *)((longlong)puVar39 + 0x14) = uStack_104;
                      uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
                      *(undefined4 *)puVar39 = (undefined4)uStack_118;
                      *(undefined4 *)((longlong)puVar39 + 4) = uStack_118._4_4_;
                      *(undefined4 *)(puVar39 + 1) = uStack_110;
                      *(undefined4 *)((longlong)puVar39 + 0xc) = local_10c;
                      uStack_118 = uVar11;
                    }
                    goto LAB_147cc9007;
                  }
LAB_147cc8ce6:
                  if (uVar51 != 0) {
                    iVar48 = (iVar20 - (iVar20 + -1 >> 0x1f)) + -1 >> 1;
                    iVar20 = iVar48;
joined_r0x000147cc8d09:
                    do {
                      iVar27 = iVar48 * 2 + 1;
                      if (iVar27 < (int)uVar51) {
                        iVar31 = iVar48 * 2 + 2;
                        if ((iVar31 < (int)uVar51) &&
                           (*(uint *)((longlong)puVar24 + (longlong)iVar27 * 0x1c + 0x18) <=
                            *(uint *)((longlong)puVar24 + (longlong)iVar31 * 0x1c + 0x18))) {
                          iVar27 = iVar31;
                        }
                        if (*(uint *)((longlong)puVar24 + (longlong)iVar48 * 0x1c + 0x18) <
                            *(uint *)((longlong)puVar24 + (longlong)iVar27 * 0x1c + 0x18)) {
                          puVar39 = (undefined8 *)((longlong)iVar48 * 0x1c + (longlong)puVar24);
                          puVar44 = (undefined8 *)((longlong)iVar27 * 0x1c + (longlong)puVar24);
                          uStack_118 = *puVar39;
                          uStack_104 = *(undefined8 *)((longlong)puVar39 + 0x14);
                          uStack_108 = (undefined4)
                                       ((ulonglong)*(undefined8 *)((longlong)puVar39 + 0xc) >> 0x20)
                          ;
                          uVar11 = uStack_118;
                          uStack_110 = (undefined4)puVar39[1];
                          local_10c = (undefined4)((ulonglong)puVar39[1] >> 0x20);
                          uVar8 = *puVar44;
                          uVar9 = puVar44[1];
                          uVar10 = *(undefined8 *)((longlong)puVar44 + 0x14);
                          *(undefined8 *)((longlong)puVar39 + 0xc) =
                               *(undefined8 *)((longlong)puVar44 + 0xc);
                          *(undefined8 *)((longlong)puVar39 + 0x14) = uVar10;
                          *puVar39 = uVar8;
                          puVar39[1] = uVar9;
                          *(ulonglong *)((longlong)puVar44 + 0xc) = CONCAT44(uStack_108,local_10c);
                          *(undefined8 *)((longlong)puVar44 + 0x14) = uStack_104;
                          uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
                          *(undefined4 *)puVar44 = (undefined4)uStack_118;
                          *(undefined4 *)((longlong)puVar44 + 4) = uStack_118._4_4_;
                          *(undefined4 *)(puVar44 + 1) = uStack_110;
                          *(undefined4 *)((longlong)puVar44 + 0xc) = local_10c;
                          iVar48 = iVar27;
                          uStack_118 = uVar11;
                          goto joined_r0x000147cc8d09;
                        }
                      }
                      bVar52 = iVar20 != 0;
                      iVar48 = iVar20 + -1;
                      iVar20 = iVar48;
                    } while (bVar52);
                    if (1 < (int)uVar51) {
                      uVar46 = (ulonglong)uVar51 - 1;
                      lVar18 = (ulonglong)uVar51 + uVar46 * 0x1b;
                      uStack_118 = *puVar24;
                      uStack_104 = *(undefined8 *)((longlong)puVar24 + 0x14);
                      uStack_108 = (undefined4)
                                   ((ulonglong)*(undefined8 *)((longlong)puVar24 + 0xc) >> 0x20);
                      uVar11 = uStack_118;
                      uStack_110 = (undefined4)puVar24[1];
                      local_10c = (undefined4)((ulonglong)puVar24[1] >> 0x20);
                      puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + -1);
                      uVar8 = *puVar39;
                      uVar9 = puVar39[1];
                      puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xb);
                      uVar10 = puVar39[1];
                      *(undefined8 *)((longlong)puVar24 + 0xc) = *puVar39;
                      *(undefined8 *)((longlong)puVar24 + 0x14) = uVar10;
                      *puVar24 = uVar8;
                      puVar24[1] = uVar9;
                      puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xb);
                      *puVar39 = CONCAT44(uStack_108,local_10c);
                      puVar39[1] = uStack_104;
                      uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
                      puVar1 = (undefined4 *)((longlong)puVar24 + lVar18 + -1);
                      *puVar1 = (undefined4)uStack_118;
                      puVar1[1] = uStack_118._4_4_;
                      puVar1[2] = uStack_110;
                      puVar1[3] = local_10c;
                      uStack_118 = uVar11;
                      if (uVar51 != 2) {
                        do {
                          iVar48 = 0;
                          iVar27 = 1;
                          iVar20 = 0;
                          do {
                            iVar48 = iVar48 + 2;
                            iVar31 = iVar27;
                            if (((longlong)iVar48 < (longlong)uVar46) &&
                               (*(uint *)((longlong)puVar24 + (longlong)iVar27 * 0x1c + 0x18) <=
                                *(uint *)((longlong)puVar24 + (longlong)iVar48 * 0x1c + 0x18))) {
                              iVar31 = iVar48;
                            }
                            if (*(uint *)((longlong)puVar24 + (longlong)iVar31 * 0x1c + 0x18) <=
                                *(uint *)((longlong)puVar24 + (longlong)iVar20 * 0x1c + 0x18))
                            break;
                            puVar39 = (undefined8 *)((longlong)iVar20 * 0x1c + (longlong)puVar24);
                            puVar44 = (undefined8 *)((longlong)iVar31 * 0x1c + (longlong)puVar24);
                            uVar8 = *puVar39;
                            uVar9 = puVar39[1];
                            uVar10 = *(undefined8 *)((longlong)puVar39 + 0x14);
                            uStack_108 = (undefined4)
                                         ((ulonglong)*(undefined8 *)((longlong)puVar39 + 0xc) >>
                                         0x20);
                            local_10c = (undefined4)((ulonglong)uVar9 >> 0x20);
                            uVar11 = *puVar44;
                            uVar12 = puVar44[1];
                            uVar13 = *(undefined8 *)((longlong)puVar44 + 0x14);
                            *(undefined8 *)((longlong)puVar39 + 0xc) =
                                 *(undefined8 *)((longlong)puVar44 + 0xc);
                            *(undefined8 *)((longlong)puVar39 + 0x14) = uVar13;
                            *puVar39 = uVar11;
                            puVar39[1] = uVar12;
                            *(ulonglong *)((longlong)puVar44 + 0xc) = CONCAT44(uStack_108,local_10c)
                            ;
                            *(undefined8 *)((longlong)puVar44 + 0x14) = uVar10;
                            *puVar44 = uVar8;
                            puVar44[1] = uVar9;
                            iVar48 = iVar31 * 2;
                            iVar27 = iVar31 * 2 + 1;
                            iVar20 = iVar31;
                          } while ((longlong)iVar27 < (longlong)uVar46);
                          lVar18 = (uVar46 - 1) * 0x1b + uVar46;
                          uStack_118 = *puVar24;
                          uStack_104 = *(undefined8 *)((longlong)puVar24 + 0x14);
                          uStack_108 = (undefined4)
                                       ((ulonglong)*(undefined8 *)((longlong)puVar24 + 0xc) >> 0x20)
                          ;
                          uVar11 = uStack_118;
                          uStack_110 = (undefined4)puVar24[1];
                          local_10c = (undefined4)((ulonglong)puVar24[1] >> 0x20);
                          puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + -1);
                          uVar8 = *puVar39;
                          uVar9 = puVar39[1];
                          puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xb);
                          uVar10 = puVar39[1];
                          *(undefined8 *)((longlong)puVar24 + 0xc) = *puVar39;
                          *(undefined8 *)((longlong)puVar24 + 0x14) = uVar10;
                          *puVar24 = uVar8;
                          puVar24[1] = uVar9;
                          puVar39 = (undefined8 *)((longlong)puVar24 + lVar18 + 0xb);
                          *puVar39 = CONCAT44(uStack_108,local_10c);
                          puVar39[1] = uStack_104;
                          uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
                          puVar1 = (undefined4 *)((longlong)puVar24 + lVar18 + -1);
                          *puVar1 = (undefined4)uStack_118;
                          puVar1[1] = uStack_118._4_4_;
                          puVar1[2] = uStack_110;
                          puVar1[3] = local_10c;
                          bVar52 = 2 < uVar46;
                          uVar46 = uVar46 - 1;
                          uStack_118 = uVar11;
                        } while (bVar52);
                      }
                    }
                  }
LAB_147cc9007:
                  plVar19 = plVar19 + -3;
                } while (&local_418 <= plVar19);
                param_1 = local_530;
                fVar56 = local_570._0_4_;
                fVar57 = local_574;
              }
            }
            uVar51 = (int)uStack_470 + 0x3fU >> 6;
            if (0x3f < (int)uStack_470 + 0x3fU) {
              local_498 = (ulonglong)uVar51;
              uVar46 = 0;
              uVar33 = 0;
              uVar26 = 0;
              local_4f8 = uVar51;
              do {
                local_4d0 = (ulonglong)uVar33;
                lVar18 = (longlong)(int)uVar46 * 0x1c;
                local_518 = uVar26 << 6;
                local_538 = uStack_470 & 0xffffffff;
                local_4ec = (int)uStack_470 - (int)local_518;
                if (0x3f < local_4ec) {
                  local_4ec = 0x40;
                }
                if (local_518 == local_538) {
                  local_570 = (int *)CONCAT44(local_570._4_4_,0x7fffffff);
                  iVar40 = -0x80000000;
                  local_574 = -NAN;
                  iVar32 = -0x80000000;
                  uVar30 = 0x80000000;
                  local_54c = 0x7fffffff;
                  uVar51 = 0x7fffffff;
                  iVar31 = -0x80000000;
                  iVar17 = -0x80000000;
                  iVar42 = -0x80000000;
                  iVar20 = 0x7fffffff;
                  iVar27 = 0x7fffffff;
                  iVar48 = 0x7fffffff;
                  fVar53 = 0.0;
                }
                else {
                  uVar30 = (ulonglong)((int)uStack_470 + uVar33);
                  if (0x3f < uVar30) {
                    uVar30 = 0x40;
                  }
                  lVar25 = 0;
                  local_548 = -(ulonglong)(uVar30 == 0) - uVar30;
                  piVar45 = (int *)(local_478 + lVar18 + 0x18);
                  iVar42 = -0x80000000;
                  iVar48 = 0x7fffffff;
                  local_574 = -NAN;
                  fVar53 = 0.0;
                  iVar27 = 0x7fffffff;
                  iVar20 = 0x7fffffff;
                  iVar17 = -0x80000000;
                  iVar31 = -0x80000000;
                  uVar51 = 0x7fffffff;
                  local_54c = 0x7fffffff;
                  local_570 = (int *)CONCAT44(local_570._4_4_,0x7fffffff);
                  iVar32 = -0x80000000;
                  iVar40 = -0x80000000;
                  uVar30 = 0x80000000;
                  do {
                    local_560 = uVar30;
                    fVar34 = (float)(*piVar45 + (int)lVar25);
                    if ((uint)fVar34 <= (uint)local_574) {
                      local_574 = fVar34;
                    }
                    if ((uint)fVar34 <= (uint)fVar53) {
                      fVar34 = fVar53;
                    }
                    fVar53 = fVar34;
                    iVar6 = piVar45[-6];
                    if (iVar6 <= iVar20) {
                      iVar20 = iVar6;
                    }
                    iVar28 = piVar45[-5];
                    if (iVar28 <= iVar27) {
                      iVar27 = iVar28;
                    }
                    iVar7 = piVar45[-4];
                    if (iVar7 <= iVar48) {
                      iVar48 = iVar7;
                    }
                    if (iVar31 < iVar6) {
                      iVar31 = iVar6;
                    }
                    if (iVar17 < iVar28) {
                      iVar17 = iVar28;
                    }
                    if (iVar42 < iVar7) {
                      iVar42 = iVar7;
                    }
                    iVar6 = piVar45[-3];
                    iVar28 = (int)local_570._0_4_;
                    if (iVar6 <= (int)local_570._0_4_) {
                      iVar28 = iVar6;
                    }
                    local_570 = (int *)CONCAT44(local_570._4_4_,iVar28);
                    iVar28 = piVar45[-2];
                    if (iVar28 <= local_54c) {
                      local_54c = iVar28;
                    }
                    uVar16 = piVar45[-1];
                    if ((int)uVar16 <= (int)uVar51) {
                      uVar51 = uVar16;
                    }
                    if (iVar40 < iVar6) {
                      iVar40 = iVar6;
                    }
                    if (iVar32 < iVar28) {
                      iVar32 = iVar28;
                    }
                    uVar30 = local_560;
                    if ((int)local_560 < (int)uVar16) {
                      uVar30 = (ulonglong)uVar16;
                    }
                    lVar25 = lVar25 + -1;
                    piVar45 = piVar45 + 7;
                  } while (local_548 != lVar25);
                }
                local_560 = CONCAT44(local_560._4_4_,iVar20);
                local_528 = CONCAT44(local_528._4_4_,iVar27);
                local_548 = CONCAT71(local_548._1_7_,1);
                if (((local_570._0_4_ == (float)(int)DAT_14c9a5298) &&
                    (local_54c == DAT_14c9a5298._4_4_)) && (uVar51 == DAT_14c9a52a0)) {
                  local_548 = CONCAT71(local_548._1_7_,
                                       (uint)uVar30 != uVar51 ||
                                       (iVar32 != local_54c || (float)iVar40 != local_570._0_4_));
                }
                uVar2 = (ulonglong)
                        (((int)fVar53 - (int)local_574) + (uint)((int)fVar53 - (int)local_574 == -1)
                        ) * 2 + 1;
                local_510 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_510 == 0; local_510 = local_510 + -1) {
                  }
                }
                uVar2 = (ulonglong)((iVar31 - iVar20) + (uint)(iVar31 - iVar20 == -1)) * 2 + 1;
                local_4a8 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_4a8 == 0; local_4a8 = local_4a8 + -1) {
                  }
                }
                uVar2 = (ulonglong)((iVar17 - iVar27) + (uint)(iVar17 - iVar27 == -1)) * 2 + 1;
                local_4b0 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_4b0 == 0; local_4b0 = local_4b0 + -1) {
                  }
                }
                uVar2 = (ulonglong)((iVar42 - iVar48) + (uint)(iVar42 - iVar48 == -1)) * 2 + 1;
                local_4b8 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_4b8 == 0; local_4b8 = local_4b8 + -1) {
                  }
                }
                uVar2 = (ulonglong)
                        ((iVar40 - (int)local_570._0_4_) +
                        (uint)(iVar40 - (int)local_570._0_4_ == -1)) * 2 + 1;
                local_4c0 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_4c0 == 0; local_4c0 = local_4c0 + -1) {
                  }
                }
                uVar2 = (ulonglong)((iVar32 - local_54c) + (uint)(iVar32 - local_54c == -1)) * 2 + 1
                ;
                local_558 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> local_558 == 0; local_558 = local_558 + -1) {
                  }
                }
                iVar20 = (uint)uVar30 - uVar51;
                local_4f0 = (int)uStack_450;
                uVar30 = (ulonglong)(iVar20 + (uint)(iVar20 == -1)) * 2 + 1;
                local_4c8 = 0x3f;
                if (uVar30 != 0) {
                  for (; uVar30 >> local_4c8 == 0; local_4c8 = local_4c8 + -1) {
                  }
                }
                param_1 = local_530;
                local_564 = iVar48;
                local_490 = lVar18;
                local_488 = uVar26;
                local_480 = uVar46;
                if (local_518 != local_538) {
                  uVar46 = local_518 >> 0x20;
                  local_518 = CONCAT44((int)uVar46,uVar51);
                  uVar46 = (ulonglong)((int)uStack_470 + uVar33);
                  if (0x3f < uVar46) {
                    uVar46 = 0x40;
                  }
                  uVar46 = uVar46 + (uVar46 == 0);
                  iVar20 = -(int)local_574;
                  iVar31 = 0;
                  uVar26 = 0;
                  do {
                    uVar30 = uStack_450;
                    lVar25 = local_478;
                    uVar26 = (ulonglong)(uint)(*(int *)(local_478 + 0x18 + lVar18) + iVar20) <<
                             ((byte)iVar31 & 0x3f) | uVar26;
                    iVar31 = iVar31 + (int)local_510;
                    local_538 = uVar46;
                    if (0x1f < iVar31) {
                      lVar47 = (longlong)(int)uStack_450;
                      uVar51 = (int)uStack_450 + 1;
                      uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                      if (uStack_450._4_4_ < uVar51) {
                        FUN_1447808da(&local_458,uVar30 & 0xffffffff);
                      }
                      *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                      uVar26 = uVar26 >> 0x20;
                      iVar31 = iVar31 + -0x20;
                    }
                    uVar46 = uStack_450;
                    uVar26 = (ulonglong)(uint)(*(int *)(lVar25 + lVar18) - (int)local_560) <<
                             ((byte)iVar31 & 0x3f) | uVar26;
                    iVar31 = iVar31 + (int)local_4a8;
                    if (0x1f < iVar31) {
                      lVar47 = (longlong)(int)uStack_450;
                      uVar51 = (int)uStack_450 + 1;
                      uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                      if (uStack_450._4_4_ < uVar51) {
                        FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                      }
                      *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                      uVar26 = uVar26 >> 0x20;
                      iVar31 = iVar31 + -0x20;
                    }
                    uVar46 = uStack_450;
                    uVar26 = (ulonglong)(uint)(*(int *)(lVar25 + 4 + lVar18) - (int)local_528) <<
                             ((byte)iVar31 & 0x3f) | uVar26;
                    iVar31 = iVar31 + (int)local_4b0;
                    if (0x1f < iVar31) {
                      lVar47 = (longlong)(int)uStack_450;
                      uVar51 = (int)uStack_450 + 1;
                      uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                      if (uStack_450._4_4_ < uVar51) {
                        FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                      }
                      *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                      uVar26 = uVar26 >> 0x20;
                      iVar31 = iVar31 + -0x20;
                    }
                    uVar46 = uStack_450;
                    uVar26 = (ulonglong)(uint)(*(int *)(lVar25 + 8 + lVar18) - iVar48) <<
                             ((byte)iVar31 & 0x3f) | uVar26;
                    iVar31 = iVar31 + (int)local_4b8;
                    if (0x1f < iVar31) {
                      lVar47 = (longlong)(int)uStack_450;
                      uVar51 = (int)uStack_450 + 1;
                      uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                      if (uStack_450._4_4_ < uVar51) {
                        FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                      }
                      *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                      uVar26 = uVar26 >> 0x20;
                      iVar31 = iVar31 + -0x20;
                    }
                    uVar46 = uStack_450;
                    if ((char)local_548 != '\0') {
                      uVar26 = (ulonglong)
                               (uint)(*(int *)(lVar25 + 0xc + lVar18) - (int)local_570._0_4_) <<
                               ((byte)iVar31 & 0x3f) | uVar26;
                      iVar31 = iVar31 + (int)local_4c0;
                      if (0x1f < iVar31) {
                        lVar47 = (longlong)(int)uStack_450;
                        uVar51 = (int)uStack_450 + 1;
                        uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                        if (uStack_450._4_4_ < uVar51) {
                          FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                        }
                        *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                        uVar26 = uVar26 >> 0x20;
                        iVar31 = iVar31 + -0x20;
                      }
                      uVar46 = uStack_450;
                      uVar26 = (ulonglong)(uint)(*(int *)(lVar25 + 0x10 + lVar18) - local_54c) <<
                               ((byte)iVar31 & 0x3f) | uVar26;
                      iVar31 = iVar31 + (int)(float)local_558;
                      if (0x1f < iVar31) {
                        lVar47 = (longlong)(int)uStack_450;
                        uVar51 = (int)uStack_450 + 1;
                        uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                        if (uStack_450._4_4_ < uVar51) {
                          FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                        }
                        *(int *)(local_458 + lVar47 * 4) = (int)uVar26;
                        uVar26 = uVar26 >> 0x20;
                        iVar31 = iVar31 + -0x20;
                      }
                      uVar46 = uStack_450;
                      iVar48 = local_564;
                      uVar26 = (ulonglong)(*(int *)(lVar25 + 0x14 + lVar18) - (uint)local_518) <<
                               ((byte)iVar31 & 0x3f) | uVar26;
                      iVar31 = iVar31 + (int)local_4c8;
                      if (0x1f < iVar31) {
                        lVar25 = (longlong)(int)uStack_450;
                        uVar51 = (int)uStack_450 + 1;
                        uStack_450 = CONCAT44(uStack_450._4_4_,uVar51);
                        if (uStack_450._4_4_ < uVar51) {
                          FUN_1447808da(&local_458,uVar46 & 0xffffffff);
                        }
                        *(int *)(local_458 + lVar25 * 4) = (int)uVar26;
                        uVar26 = uVar26 >> 0x20;
                        iVar31 = iVar31 + -0x20;
                      }
                    }
                    uVar30 = uStack_450;
                    param_1 = local_530;
                    iVar20 = iVar20 + -1;
                    lVar18 = lVar18 + 0x1c;
                    uVar46 = local_538 - 1;
                  } while (uVar46 != 0);
                  uVar33 = (uint)local_4d0;
                  iVar27 = (int)local_528;
                  uVar51 = (uint)local_518;
                  if (0 < iVar31) {
                    lVar18 = (longlong)(int)uStack_450;
                    uVar16 = (int)uStack_450 + 1;
                    uStack_450 = CONCAT44(uStack_450._4_4_,uVar16);
                    if (uStack_450._4_4_ < uVar16) {
                      FUN_1447808da(&local_458,uVar30 & 0xffffffff);
                    }
                    *(int *)(local_458 + lVar18 * 4) = (int)uVar26;
                  }
                }
                uVar46 = uStack_440;
                lVar18 = (longlong)(int)uStack_440;
                uVar16 = (int)uStack_440 + 1;
                uStack_440 = CONCAT44(uStack_440._4_4_,uVar16);
                if (uStack_440._4_4_ < uVar16) {
                  FUN_14367c27e(&local_448,uVar46 & 0xffffffff);
                }
                local_448[lVar18 * 0x11] = local_4f0 << 2;
                local_448[lVar18 * 0x11 + 1] = local_4ec;
                *(char *)(local_448 + lVar18 * 0x11 + 2) = (char)local_548;
                local_448[lVar18 * 0x11 + 3] = (int)local_510;
                local_448[lVar18 * 0x11 + 4] = (int)local_4a8;
                local_448[lVar18 * 0x11 + 5] = (int)local_4b0;
                local_448[lVar18 * 0x11 + 6] = (int)local_4b8;
                local_448[lVar18 * 0x11 + 7] = (int)local_4c0;
                local_448[lVar18 * 0x11 + 8] = (int)local_558;
                local_448[lVar18 * 0x11 + 9] = (int)local_4c8;
                local_448[lVar18 * 0x11 + 10] = (int)local_574;
                local_448[lVar18 * 0x11 + 0xb] = (int)local_560;
                local_448[lVar18 * 0x11 + 0xc] = iVar27;
                local_448[lVar18 * 0x11 + 0xd] = local_564;
                local_448[lVar18 * 0x11 + 0xe] = (int)local_570._0_4_;
                local_448[lVar18 * 0x11 + 0xf] = local_54c;
                local_448[lVar18 * 0x11 + 0x10] = uVar51;
                uVar26 = local_488 + 1;
                uVar33 = uVar33 - 0x40;
                uVar46 = (ulonglong)((int)local_480 + 0x40);
                uVar51 = local_4f8;
              } while (uVar26 != local_498);
            }
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + uVar51;
          if (local_478 != 0) {
            FUN_1400020a8();
          }
        }
      }
      iVar48 = *(int *)(param_1 + 0x80);
      iVar20 = *(int *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x68) = iVar20 + 1U;
      if (*(uint *)(param_1 + 0x6c) < iVar20 + 1U) {
        FUN_1447808da(local_4d8,iVar20);
      }
      *(int *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar20 * 4) = local_51c;
      iVar20 = *(int *)(param_1 + 0x78);
      *(uint *)(param_1 + 0x78) = iVar20 + 1U;
      if (*(uint *)(param_1 + 0x7c) < iVar20 + 1U) {
        FUN_1447808da(local_4e0,iVar20);
      }
      *(int *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar20 * 4) = iVar48 - local_51c;
      iVar48 = *(int *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = iVar48 + 1U;
      if (*(uint *)(param_1 + 0x4c) < iVar48 + 1U) {
        FUN_1449e2712(local_4e8,iVar48);
      }
      lVar18 = *(longlong *)(param_1 + 0x40);
      lVar25 = (longlong)iVar48 * 0x10;
      *(float *)(lVar18 + lVar25) = fVar61;
      *(float *)(lVar18 + 4 + lVar25) = fVar62;
      *(float *)(lVar18 + 8 + lVar25) = fVar57;
      *(float *)(lVar18 + 0xc + lVar25) = fVar56;
      iVar48 = *(int *)(param_1 + 0x58);
      *(uint *)(param_1 + 0x58) = iVar48 + 1U;
      if (*(uint *)(param_1 + 0x5c) < iVar48 + 1U) {
        FUN_1449e2712(local_500,iVar48);
      }
      puVar36 = local_508;
      lVar18 = *local_500;
      lVar25 = (longlong)iVar48 * 0x10;
      *(float *)(lVar18 + lVar25) = fVar55;
      *(float *)(lVar18 + 4 + lVar25) = fVar60;
      *(float *)(lVar18 + 8 + lVar25) = fVar59;
      *(float *)(lVar18 + 0xc + lVar25) = fVar58;
      lVar18 = local_4a0 + 1;
    } while (lVar18 < (int)local_540[1]);
    if ((longlong)(int)uStack_440 != 0) {
      local_570 = local_448 + (longlong)(int)uStack_440 * 0x11;
      piVar45 = local_448;
      do {
        iVar27 = (int)uStack_440 * 0x28;
        iVar48 = *piVar45;
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar27 + iVar48;
        iVar48 = piVar45[1];
        iVar20 = piVar45[4];
        uVar51 = piVar45[3];
        iVar27 = piVar45[5];
        iVar31 = piVar45[6];
        bVar37 = *(byte *)(piVar45 + 2);
        iVar17 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar17 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar17 + 1U) {
          FUN_14042c7ac(puVar36,iVar17);
        }
        param_1 = local_530;
        uVar46 = *(ulonglong *)(local_530 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(uint *)(uVar26 + (longlong)iVar17 * 4) =
             iVar20 << 5 | uVar51 |
             iVar48 << 0x15 | (uint)bVar37 << 0x14 | iVar31 << 0xf | iVar27 << 10;
        iVar48 = *(int *)(local_530 + 0x30);
        *(uint *)(local_530 + 0x30) = iVar48 + 1U;
        if (*(uint *)(local_530 + 0x34) < iVar48 + 1U) {
          FUN_14042c7ac(puVar36,iVar48);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar48 * 4) = piVar45[10];
        iVar48 = piVar45[0xb];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        iVar48 = piVar45[0xc];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        iVar48 = piVar45[0xd];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        iVar48 = piVar45[8];
        iVar20 = piVar45[9];
        uVar51 = piVar45[7];
        iVar27 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar27 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar27 + 1U) {
          FUN_14042c7ac(puVar36,iVar27);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(uint *)(uVar26 + (longlong)iVar27 * 4) = iVar48 << 5 | uVar51 | iVar20 << 10;
        iVar48 = piVar45[0xe];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        iVar48 = piVar45[0xf];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *(ulonglong *)(param_1 + 0x28);
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        iVar48 = piVar45[0x10];
        iVar20 = *(int *)(param_1 + 0x30);
        *(uint *)(param_1 + 0x30) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar20 + 1U) {
          FUN_14042c7ac(puVar36,iVar20);
        }
        uVar46 = *puVar36;
        uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
        if ((uVar46 & 1) == 0) {
          uVar26 = uVar46;
        }
        *(int *)(uVar26 + (longlong)iVar20 * 4) = iVar48;
        piVar45 = piVar45 + 0x11;
      } while (piVar45 != local_570);
    }
  }
  FUN_147cc9d3e(puVar36,&local_458);
  uVar51 = *(uint *)(param_1 + 0x30);
  if (0 < (longlong)(int)uVar51) {
    *(uint *)(param_1 + 0x30) = uVar51 + 1;
    if (*(uint *)(param_1 + 0x34) <= uVar51) {
      FUN_14042c7ac(puVar36,uVar51);
    }
    uVar46 = *(ulonglong *)(param_1 + 0x28);
    uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
    if ((uVar46 & 1) == 0) {
      uVar26 = uVar46;
    }
    *(undefined4 *)(uVar26 + (longlong)(int)uVar51 * 4) = 0;
    iVar48 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar48 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar48 + 1U) {
      FUN_14042c7ac(puVar36,iVar48);
    }
    uVar46 = *(ulonglong *)(param_1 + 0x28);
    uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
    if ((uVar46 & 1) == 0) {
      uVar26 = uVar46;
    }
    *(undefined4 *)(uVar26 + (longlong)iVar48 * 4) = 0;
    iVar48 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar48 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar48 + 1U) {
      FUN_14042c7ac(puVar36,iVar48);
    }
    uVar46 = *puVar36;
    uVar26 = ((longlong)uVar46 >> 0x18) + (longlong)puVar36;
    if ((uVar46 & 1) == 0) {
      uVar26 = uVar46;
    }
    *(undefined4 *)(uVar26 + (longlong)iVar48 * 4) = 0;
  }
  if (local_458 != 0) {
    FUN_1400020a8();
  }
  if (local_448 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_428 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_147cc81db:
  if ((local_f0 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147cc8c15:
  uStack_118 = *puVar24;
  uStack_104 = *(undefined8 *)((longlong)puVar24 + 0x14);
  uStack_108 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar24 + 0xc) >> 0x20);
  uVar11 = uStack_118;
  uStack_110 = (undefined4)puVar24[1];
  local_10c = (undefined4)((ulonglong)puVar24[1] >> 0x20);
  uVar8 = *puVar50;
  uVar9 = *(undefined8 *)((longlong)puVar38 + -0x14);
  uVar10 = puVar38[-1];
  *(undefined8 *)((longlong)puVar24 + 0xc) = puVar38[-2];
  *(undefined8 *)((longlong)puVar24 + 0x14) = uVar10;
  *puVar24 = uVar8;
  puVar24[1] = uVar9;
  puVar38[-2] = CONCAT44(uStack_108,local_10c);
  puVar38[-1] = uStack_104;
  uStack_118._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
  *(undefined4 *)puVar50 = (undefined4)uStack_118;
  *(undefined4 *)(puVar38 + -3) = uStack_118._4_4_;
  *(undefined4 *)((longlong)puVar38 + -0x14) = uStack_110;
  *(undefined4 *)(puVar38 + -2) = local_10c;
  iVar48 = iVar48 + -1;
  puVar38 = puVar38 + -7;
  uStack_118 = uVar11;
  if ((longlong)puVar29 - (longlong)puVar44 < (longlong)puVar43 - (longlong)puVar35) {
    if (puVar23 < puVar39) {
      *plVar19 = (longlong)puVar23;
      plVar19[1] = (longlong)puVar39;
      *(int *)(plVar19 + 2) = iVar48;
      plVar19 = plVar19 + 3;
    }
    puVar35 = puVar24;
    if (puVar50 <= (undefined8 *)((longlong)puVar24 + 0x1cU)) goto LAB_147cc9007;
  }
  else {
    if ((undefined8 *)((longlong)puVar24 + 0x1cU) < puVar50) {
      *plVar19 = (longlong)puVar24;
      plVar19[1] = (longlong)puVar38;
      *(int *)(plVar19 + 2) = iVar48;
      plVar19 = plVar19 + 3;
    }
    puVar24 = puVar23;
    puVar29 = puVar39;
    puVar38 = puVar39;
    if (puVar39 <= puVar23) goto LAB_147cc9007;
  }
  iVar20 = (int)((ulonglong)((longlong)puVar29 - (longlong)puVar35) >> 2) * -0x49249249;
  uVar51 = iVar20 + 1;
  puVar44 = puVar35;
  puVar39 = puVar38;
  puVar43 = puVar29;
  if (iVar48 == 0) goto LAB_147cc8ce6;
  goto LAB_147cc8b20;
}



// FUNCTION 147cc9d26 FUN_147cc9d26 body=23 status=ok
// SIG undefined FUN_147cc9d26(void)

undefined8 FUN_147cc9d26(ushort param_1)

{
  return CONCAT71((int7)((ulonglong)param_1 * 0x3c >> 8),
                  2 < (int)(&DAT_14ca814b8)[(ulonglong)param_1 * 0xf]);
}



// FUNCTION 147cc9d3e FUN_147cc9d3e body=111 status=ok
// SIG undefined FUN_147cc9d3e(void)

void FUN_147cc9d3e(ulonglong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14042c7ac(param_1,iVar2);
    }
    uVar3 = *param_1;
    uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)param_1;
    if ((uVar3 & 1) == 0) {
      uVar4 = uVar3;
    }
    memcpy((void *)(uVar4 + (longlong)iVar2 * 4),(void *)*param_2,(longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 147cc9dae FUN_147cc9dae body=37 status=ok
// SIG undefined FUN_147cc9dae(void)

void FUN_147cc9dae(longlong param_1)

{
  FUN_147cd14b6(param_1 + 0x30);
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 147cc9dde FUN_147cc9dde body=167 status=ok
// SIG undefined FUN_147cc9dde(void)

void FUN_147cc9dde(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8 [12];
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  local_b8 = local_a8;
  puVar2 = local_b8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  local_48 = DAT_14c872be0;
  local_c0 = &local_c8;
  local_c8 = param_2;
  FUN_147cd1996(param_1 + 0x38,local_ac);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc9e86 FUN_147cc9e86 body=363 status=ok
// SIG undefined FUN_147cc9e86(void)

void FUN_147cc9e86(longlong param_1)

{
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined2 local_48;
  undefined8 local_40;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  local_80 = (longlong *)(param_1 + 0x38);
  local_38 = param_1 + 0x48;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = local_30;
  iStack_64 = iStack_2c;
  local_60 = local_28;
  local_5c = local_24;
  local_78 = local_40;
  local_70 = local_38;
  local_48 = 0;
  local_58 = local_80;
  local_50 = local_80;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      if (*(ulonglong *)(*local_80 + 0x70 + (longlong)iStack_64 * 0x90) < DAT_14c872be0) {
        FUN_147cd18b2(local_58);
        local_48 = CONCAT11(local_48._1_1_,1);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < *(int *)(local_70 + 0x18));
    if (((local_48 & 1) != 0) && (local_48._1_1_ == '\x01')) {
      FUN_147cd1c7a(local_50,(int)local_50[1] - *(int *)((longlong)local_50 + 0x34));
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cc9ff2 FUN_147cc9ff2 body=121 status=ok
// SIG undefined FUN_147cc9ff2(void)

void FUN_147cc9ff2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
  lVar1 = param_2[1];
  *(uint *)(param_2 + 1) = (int)lVar1 + uVar2;
  if ((uint)(*(int *)((longlong)param_2 + 0xc) - (int)lVar1) < uVar2) {
    FUN_1447808da(param_2);
  }
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x60))
                        (*(longlong **)(param_1 + 8),uVar4 & 0xffffffff);
      *(undefined4 *)(*param_2 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar2 != uVar4);
  }
  return;
}



// FUNCTION 147cca06c FUN_147cca06c body=325 status=ok
// SIG undefined FUN_147cca06c(void)

undefined8 * FUN_147cca06c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14aa62160;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x42] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return param_1;
}



// FUNCTION 147cca1c4 FUN_147cca1c4 body=214 status=ok
// SIG undefined FUN_147cca1c4(void)

void FUN_147cca1c4(undefined8 param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_40 = (undefined1 *)0x0;
  local_38 = 0x1800000000;
  FUN_14024dbd6(param_2,local_100,0);
  puVar2 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar2 = local_100;
  }
  lVar1 = (longlong)(int)local_38;
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (param_3 == 0) {
        FUN_147cca358(param_1,*(undefined8 *)(puVar2 + lVar3),1);
      }
      else {
        FUN_147cca2a2(param_1,*(undefined8 *)(puVar2 + lVar3));
      }
      lVar3 = lVar3 + 8;
    } while (lVar1 * 8 != lVar3);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cca2a2 FUN_147cca2a2 body=173 status=ok
// SIG undefined FUN_147cca2a2(void)

void FUN_147cca2a2(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = FUN_144a7a726();
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
      == lVar2 + 0x30)) {
    lVar2 = *(longlong *)(param_2 + 0x660);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) {
      return;
    }
    cVar1 = FUN_143712cfc(lVar2);
    if ((cVar1 != '\0') && ((*(byte *)(lVar2 + 0xc0) & 1) != 0)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      if ((*(byte *)(param_2 + 0x2d3) & 1) != 0) {
        FUN_147cca7ec(param_1,param_2,lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x000147cca32e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      return;
    }
  }
  return;
}



// FUNCTION 147cca358 FUN_147cca358 body=820 status=ok
// SIG undefined FUN_147cca358(void)

void FUN_147cca358(longlong param_1,ulonglong param_2,char param_3)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  ulonglong local_50;
  ulonglong *local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  lVar4 = FUN_144a7a726();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      != lVar4 + 0x30)) goto LAB_147cca39f;
  puVar1 = *(ulonglong **)(param_2 + 0x660);
  if ((puVar1 != (ulonglong *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(puVar1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((param_3 != '\0') && ((*(byte *)(param_2 + 0x2d3) & 1) != 0)) {
    if (*(int *)(param_1 + 0x1b8) != *(int *)(param_1 + 0x1e4)) {
      uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar4 = param_1 + 0x1e8;
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x1f0);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1f8) - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
      if (iVar3 != -1) {
        do {
          puVar5 = (ulonglong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar3 * 0x18);
          if (*puVar5 == param_2) goto LAB_147cca43f;
          iVar3 = (int)puVar5[2];
        } while (iVar3 != -1);
      }
    }
    puVar5 = (ulonglong *)0x0;
LAB_147cca43f:
    puVar8 = puVar5 + 1;
    if (puVar5 == (ulonglong *)0x0) {
      puVar8 = (ulonglong *)0x0;
    }
    if ((ulonglong *)*puVar8 != puVar1) {
      FUN_147cca7ec(param_1,param_2);
    }
  }
  if ((((puVar1 != (ulonglong *)0x0) && ((*(byte *)(param_2 + 0x2d3) & 1) == 0)) &&
      (cVar2 = FUN_143712cfc(puVar1), cVar2 != '\0')) && ((puVar1[0x18] & 1) != 0)) {
    uVar7 = ((uint)((ulonglong)puVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)puVar1 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    uVar7 = uVar7 >> 0x10 ^ uVar7;
    local_48 = puVar1;
    if (*(int *)(param_1 + 0x118) != *(int *)(param_1 + 0x144)) {
      lVar4 = param_1 + 0x148;
      if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x150);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x158) - 1U & uVar7) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0x60;
          if (*(ulonglong **)(*(longlong *)(param_1 + 0x110) + (longlong)iVar3 * 0x60) == puVar1) {
            plVar9 = (longlong *)(lVar4 + 8);
            if ((plVar9 != (longlong *)0x0 && lVar4 != 0) &&
               (*(int *)(lVar4 + 0x10) != *(int *)(lVar4 + 0x3c))) {
              uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              lVar11 = lVar4 + 0x40;
              if (*(longlong *)(lVar4 + 0x48) != 0) {
                lVar11 = *(longlong *)(lVar4 + 0x48);
              }
              iVar3 = *(int *)(lVar11 + (ulonglong)
                                        (*(int *)(lVar4 + 0x50) - 1U & (uVar10 >> 0x10 ^ uVar10)) *
                                        4);
              if (iVar3 != -1) {
                goto LAB_147cca64d;
              }
            }
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x58);
        } while (iVar3 != -1);
      }
    }
    goto LAB_147cca53f;
  }
  goto LAB_147cca421;
  while (iVar3 = *(int *)((longlong)iVar3 * 0x10 + *plVar9 + 8), iVar3 != -1) {
LAB_147cca64d:
    if (*(ulonglong *)(*plVar9 + (longlong)iVar3 * 0x10) == param_2) {
      FUN_147cca89e(plVar9,param_2);
      FUN_147cd225a(param_1 + 0x160,uVar7);
      goto LAB_147cca56a;
    }
  }
LAB_147cca53f:
  uVar6 = FUN_147cd225a(param_1 + 0x160,uVar7);
  FUN_147cd295c(uVar6,&local_48,&local_50,0);
LAB_147cca56a:
  local_40 = &local_58;
  local_48 = &local_50;
  local_58 = puVar1;
  FUN_147cd2dfe(param_1 + 0x1b0,local_34);
  *(byte *)(local_50 + 0x2d3) = *(byte *)(local_50 + 0x2d3) | 1;
LAB_147cca421:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
LAB_147cca39f:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cca696 FUN_147cca696 body=182 status=ok
// SIG undefined FUN_147cca696(void)

void FUN_147cca696(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x108);
  if ((longlong)iVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x100) + lVar3) == param_2) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar4 * 8 - lVar3 != 0);
  }
  iVar1 = *(int *)(param_2 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_2 + 0xa0);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar5);
      if (lVar2 != 0) {
        FUN_147cca1c4(param_1,lVar2,0);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    iVar4 = *(int *)(param_1 + 0x108);
  }
  *(uint *)(param_1 + 0x108) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar4 + 1U) {
    FUN_1417de5d6((longlong *)(param_1 + 0x100),iVar4);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x100) + (longlong)iVar4 * 8) = param_2;
  return;
}



// FUNCTION 147cca74c FUN_147cca74c body=158 status=ok
// SIG undefined FUN_147cca74c(void)

void FUN_147cca74c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_38;
  local_38 = param_2;
  iVar3 = FUN_147cd1cbe(param_1 + 0x100);
  if ((0 < iVar3) && (iVar3 = *(int *)(local_38 + 0xa8), (longlong)iVar3 != 0)) {
    lVar1 = *(longlong *)(local_38 + 0xa0);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_147cca1c4(param_1,lVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar3 * 8 != lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147cca7ec FUN_147cca7ec body=176 status=ok
// SIG undefined FUN_147cca7ec(void)

void FUN_147cca7ec(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_28 = param_2;
  local_20 = param_3;
  uVar1 = FUN_147cd32fa(param_1 + 0x110,uVar2 >> 0x10 ^ uVar2,&local_20);
  FUN_147cd295c(uVar1,local_2c,&local_28,0);
  FUN_147cd3568(param_1 + 0x1b0,local_28);
  *(byte *)(local_28 + 0x2d3) = *(byte *)(local_28 + 0x2d3) & 0xfe;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147cca89e FUN_147cca89e body=154 status=ok
// SIG undefined FUN_147cca89e(void)

undefined8 FUN_147cca89e(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_147cd2170(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 147cca938 FUN_147cca938 body=475 status=ok
// SIG undefined FUN_147cca938(void)

void FUN_147cca938(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
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
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x168) != *(int *)(param_1 + 0x194)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x198;
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1a0);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1a8) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar6 * 0x60) == param_2) {
          plVar7 = (longlong *)(lVar5 + 8);
          if (plVar7 != (longlong *)0x0 && lVar5 != 0) {
            lVar1 = lVar5 + 0x18;
            local_58 = 0x100000000;
            local_48 = 0xffffffff;
            uStack_40 = 0;
            uStack_50 = lVar1;
            if (*(int *)(lVar5 + 0x30) == 0) {
              iVar6 = 0;
            }
            else {
              FUN_1449c0562(&local_58);
              iVar6 = *(int *)(lVar5 + 0x30);
            }
            local_78 = (undefined4)local_58;
            uStack_74 = local_58._4_4_;
            uStack_70 = (undefined4)uStack_50;
            uStack_6c = uStack_50._4_4_;
            uStack_60 = CONCAT44(uStack_3c,uStack_40);
            local_68 = local_48;
            uVar2 = local_68;
            local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
            iVar4 = local_68._4_4_;
            local_80 = plVar7;
            if ((local_68._4_4_ != iVar6) || (local_68 = local_48, uStack_50 != lVar1)) {
              do {
                local_68 = uVar2;
                lVar5 = *(longlong *)(*(longlong *)(*local_80 + (longlong)iVar4 * 0x10) + 0x5a8);
                if (lVar5 != 0) {
                  (**(code **)(**(longlong **)(lVar5 + 0x210) + 0x4a0))();
                }
                local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
                FUN_1449c0562(&local_78);
                iVar4 = local_68._4_4_;
                uVar2 = local_68;
              } while (local_80 != plVar7 ||
                       (CONCAT44(uStack_6c,uStack_70) != lVar1 || local_68._4_4_ != iVar6));
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar5 + 0x58);
      } while (iVar6 != -1);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ccab14 FUN_147ccab14 body=198 status=ok
// SIG undefined FUN_147ccab14(void)

void FUN_147ccab14(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_147cd392a(param_1,uVar3);
    iVar1 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_147cd3ad6(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 * 2;
    do {
      FUN_147cd3c7c(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 2;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccabdc FUN_147ccabdc body=110 status=ok
// SIG undefined FUN_147ccabdc(void)

void FUN_147ccabdc(longlong param_1,uint param_2)

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
    FUN_147cd40c6(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_147cd3ad6(param_1);
    return;
  }
  FUN_147cd3f82(param_1);
  FUN_147cd40c6(param_1,param_2);
  return;
}



// FUNCTION 147ccac4a FUN_147ccac4a body=374 status=ok
// SIG undefined FUN_147ccac4a(void)

void FUN_147ccac4a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [40];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0xd0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_90 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar2)) {
    do {
      if (*(int *)(*local_90 + 0x20 + (longlong)iStack_74 * 0x28) == 0) {
        puVar3 = (undefined2 *)(*local_90 + (longlong)iStack_74 * 0x28);
        *(undefined4 *)(puVar3 + 0x10) = 1;
        iVar4 = *(int *)(param_1 + 0xe8);
        *(uint *)(param_1 + 0xe8) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0xec) < iVar4 + 1U) {
          FUN_1405b572a(param_1 + 0xe0,iVar4);
        }
        *(undefined2 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar4 * 2) = *puVar3;
        *(longlong *)(param_1 + 0x200) =
             *(longlong *)(param_1 + 0x200) + (ulonglong)*(uint *)(puVar3 + 8);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar5));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ccadc2 FUN_147ccadc2 body=284 status=ok
// SIG undefined FUN_147ccadc2(void)

void FUN_147ccadc2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
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
  plVar1 = (longlong *)(param_1 + 0xa8);
  lVar2 = param_1 + 0xb8;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0xd0);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      if (*(int *)(*local_78 + 0x20 + (longlong)iStack_5c * 0x28) == 3) {
        lVar3 = *local_78 + (longlong)iStack_5c * 0x28;
        *(undefined4 *)(lVar3 + 0x20) = 4;
        *(longlong *)(param_1 + 0x200) =
             *(longlong *)(param_1 + 0x200) - (ulonglong)*(uint *)(lVar3 + 0x10);
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccaee0 FUN_147ccaee0 body=83 status=ok
// SIG undefined FUN_147ccaee0(void)

void FUN_147ccaee0(undefined8 *param_1,char param_2,char param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(param_1 + 10) & 4) == 0) {
    FUN_14003fbd6();
    puVar1 = &DAT_14caea080;
  }
  else {
    puVar1 = (undefined8 *)(DAT_14cb0d2b0 + 0x4c0);
  }
  uVar2 = (**(code **)(*(longlong *)*puVar1 + 0x2f0))();
  if (param_2 != '\0') {
    param_1[1] = uVar2;
  }
  if (param_3 != '\0') {
    *param_1 = uVar2;
  }
  return;
}



// FUNCTION 147ccaf34 FUN_147ccaf34 body=92 status=ok
// SIG undefined FUN_147ccaf34(void)

void FUN_147ccaf34(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147cd42b4(param_1,iVar1);
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      FUN_147cd4348(param_1);
      FUN_147cd43aa(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147ccaf92 FUN_147ccaf92 body=89 status=ok
// SIG undefined FUN_147ccaf92(void)

void FUN_147ccaf92(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa62b68;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a3d46d0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
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



// FUNCTION 147ccafec FUN_147ccafec body=571 status=ok
// SIG undefined FUN_147ccafec(void)

void FUN_147ccafec(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 uStack_81;
  longlong local_80;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x48);
  lVar6 = param_1 + 0x350;
  FUN_147ccb708(lVar6,(int)local_f8[1]);
  iVar3 = 0;
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x310) + 0x48) + 0x18) == '\x01') {
    iVar3 = *(int *)(param_1 + 0x34c);
  }
  if (iVar3 < (int)local_f8[1]) {
    lVar9 = (longlong)iVar3;
    local_f0 = lVar6;
    do {
      FUN_147377468(&local_98,**(longlong **)(*local_f8 + lVar9 * 8) + 0x40);
      lVar5 = local_80;
      lVar4 = (longlong)local_78;
      if (lVar4 == 0) {
        lVar8 = local_80;
        iVar3 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar6 = *(longlong *)(lVar5 + lVar7);
          if (lVar6 != 0) {
            *(undefined8 *)(lVar5 + lVar7) = 0;
            LOCK();
            puVar1 = (uint *)(lVar6 + 8);
            uVar2 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar2 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar7 = lVar7 + 0x28;
          lVar6 = local_f0;
          lVar8 = local_80;
          iVar3 = local_78;
        } while (lVar4 * 0x28 != lVar7);
      }
      uStack_84 = 0x101;
      uStack_81 = 0;
      lVar5 = *(longlong *)(param_1 + 0x8d0);
      if (*(longlong *)(param_1 + 0x8d0) == 0) {
        lVar5 = lVar6;
      }
      local_e8 = local_98;
      local_98 = 0;
      uStack_d8 = (ulonglong)CONCAT16(uStack_82,CONCAT24(0x101,uStack_88));
      local_e0 = local_90;
      local_80 = 0;
      local_c4 = local_74;
      local_78 = 0;
      local_74 = 0;
      local_a0 = local_50;
      local_b0 = local_60;
      uStack_ac = uStack_5c;
      uStack_a8 = uStack_58;
      uStack_a4 = uStack_54;
      local_c0 = local_70;
      uStack_bc = uStack_6c;
      uStack_b8 = uStack_68;
      uStack_b4 = uStack_64;
      lVar4 = lVar9 * 0xb0;
      local_d0 = lVar8;
      local_c8 = iVar3;
      FUN_141793e86(lVar5 + lVar4 + 0x40,&local_e8);
      FUN_14005bca4(&local_e8);
      lVar5 = *(longlong *)(param_1 + 0x8d0);
      if (*(longlong *)(param_1 + 0x8d0) == 0) {
        lVar5 = lVar6;
      }
      (**(code **)(*(longlong *)(lVar5 + lVar4) + 0x18))(lVar5 + lVar4,param_2);
      FUN_14005bca4(&local_98);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)local_f8[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ccb228 FUN_147ccb228 body=247 status=ok
// SIG undefined FUN_147ccb228(void)

void FUN_147ccb228(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  byte bVar7;
  longlong lVar8;
  
  *(byte *)(param_1 + 0x2bd) = *(byte *)(param_1 + 0x2bd) & 0xfe;
  iVar1 = *(int *)(param_1 + 0x2a0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x298);
    lVar8 = 0;
    do {
      if ((*(byte *)(param_1 + 0x75) & 4) == 0) {
        bVar3 = 0;
      }
      else {
        bVar3 = (*(byte *)(lVar2 + 0x2d + lVar8) & 0x20) >> 5;
      }
      if ((*(byte *)(lVar2 + 0x2e + lVar8) & 1) == 0) {
        bVar7 = 0;
LAB_147ccb28c:
        if ((bVar3 != 0 || bVar7 != 0) || ((*(byte *)(lVar2 + 0x2d + lVar8) & 0x40) != 0))
        goto LAB_147ccb2bf;
        if ((*(byte *)(lVar2 + 0x50 + lVar8) & 4) == 0) {
          FUN_14003fbd6();
          puVar4 = &DAT_14caea080;
        }
        else {
          puVar4 = (undefined8 *)(DAT_14cb0d2b0 + 0x4c0);
        }
        uVar5 = (**(code **)(*(longlong *)*puVar4 + 0x2f0))();
        *(undefined8 *)(lVar2 + lVar8) = uVar5;
      }
      else {
        if (-1 < *(char *)(lVar2 + 0x2d + lVar8)) {
          bVar7 = (*(byte *)(lVar2 + 0x2c + lVar8) & 4) >> 2;
          goto LAB_147ccb28c;
        }
LAB_147ccb2bf:
        *(undefined8 *)(lVar2 + lVar8) = *(undefined8 *)(lVar2 + 8 + lVar8);
        *(byte *)(param_1 + 0x2bd) = *(byte *)(param_1 + 0x2bd) | 1;
      }
      lVar8 = lVar8 + 0x60;
    } while ((longlong)iVar1 * 0x60 != lVar8);
  }
  plVar6 = (longlong *)FUN_144a7b9cd();
                    /* WARNING: Could not recover jumptable at 0x000147ccb31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x220))
            (plVar6,*(undefined8 *)(param_1 + 0x218),*(code **)(*plVar6 + 0x220));
  return;
}



// FUNCTION 147ccb320 FUN_147ccb320 body=45 status=ok
// SIG undefined FUN_147ccb320(void)

int * FUN_147ccb320(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_144807416(param_1,param_3,param_1 + 0x30);
  iVar2 = 2;
  if (iVar1 != 4) {
    iVar2 = iVar1;
  }
  *param_2 = iVar2;
  return param_2;
}



// FUNCTION 147ccb35c FUN_147ccb35c body=153 status=ok
// SIG undefined FUN_147ccb35c(void)

ulonglong FUN_147ccb35c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  if (DAT_14caff4f8 == '\0') {
    lVar1 = *(longlong *)(param_1 + 0x310);
    plVar2 = *(longlong **)(lVar1 + 0x48);
    lVar3 = plVar2[1];
    iVar5 = 0;
    if ((char)plVar2[3] == '\x01') {
      uVar6 = (uint)*(byte *)(lVar1 + 0x8f);
      if ((int)(uint)*(byte *)(lVar1 + 0x8f) < (int)*(uint *)(param_1 + 0x34c)) {
        uVar6 = *(uint *)(param_1 + 0x34c);
      }
      iVar5 = FUN_144b2aba8(lVar1,uVar6);
    }
    uVar7 = 0xffffffff;
    if (iVar5 < (int)lVar3) {
      uVar8 = (ulonglong)iVar5;
      do {
        lVar1 = **(longlong **)(*plVar2 + uVar8 * 8);
        cVar4 = FUN_1474283cc(lVar1);
        if (((cVar4 != '\0') && ((*(byte *)(lVar1 + 0xa0) & 8) == 0)) &&
           (*(int *)(lVar1 + 0xa4) == -1)) {
          return uVar8 & 0xffffffff;
        }
        uVar8 = uVar8 + 1;
      } while ((int)lVar3 != (int)uVar8);
    }
  }
  return uVar7;
}



// FUNCTION 147ccb3f6 FUN_147ccb3f6 body=235 status=ok
// SIG undefined FUN_147ccb3f6(void)

void FUN_147ccb3f6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_147ccb4e2(param_3,*(undefined4 *)(param_1 + 0x2a0));
  if (0 < (int)param_3[1]) {
    lVar5 = 0x50;
    lVar6 = 0;
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x298);
      lVar3 = *param_3;
      lVar4 = *(longlong *)(lVar3 + 0xa8 + lVar6);
      lVar9 = lVar3 + lVar6;
      if (lVar4 != 0) {
        lVar9 = lVar4;
      }
      *(undefined8 *)(lVar3 + 0xb8 + lVar6) = DAT_14caff570;
      *(undefined8 *)(lVar3 + 0xc0 + lVar6) = *(undefined8 *)(lVar2 + -0x48 + lVar5);
      uVar1 = *(uint *)(lVar3 + 0xe4 + lVar6);
      *(uint *)(lVar3 + 0xe4 + lVar6) = uVar1 & 0xffffefff;
      *(int *)(lVar3 + 0xd8 + lVar6) = (int)lVar8;
      *(undefined1 *)(lVar3 + 0xde + lVar6) = 0;
      uVar7 = 0;
      if ((*(byte *)(lVar2 + lVar5) & 8) != 0) {
        uVar7 = (uint)(*(byte *)(param_1 + 0x70) & 1) << 0x1e;
      }
      *(uint *)(lVar3 + 0xe4 + lVar6) = uVar1 & 0xbfffefff | uVar7;
      *(undefined8 **)(lVar9 + 8) = &DAT_14cb05598;
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 0xf0;
      lVar5 = lVar5 + 0x60;
    } while (lVar8 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 147ccb4e2 FUN_147ccb4e2 body=121 status=ok
// SIG undefined FUN_147ccb4e2(void)

void FUN_147ccb4e2(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147471df6(param_1,iVar1);
    }
    FUN_1474bf0bf((longlong)iVar1 * 0xf0 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147cd45a8(param_1,param_2,iVar1 - param_2);
    FUN_147cd460a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147ccb55c FUN_147ccb55c body=427 status=ok
// SIG undefined FUN_147ccb55c(void)

void FUN_147ccb55c(longlong param_1,int param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 0x48);
  lVar9 = (longlong)param_2;
  lVar17 = lVar9 * 0x450 + *(longlong *)plVar3[2];
  lVar4 = *(longlong *)(*plVar3 + lVar9 * 8);
  lVar5 = *(longlong *)(param_1 + 0x910);
  FUN_147ccb4e2(param_3,*(undefined4 *)(lVar5 + 0x10 + lVar9 * 0x28));
  if (0 < (int)param_3[1]) {
    lVar5 = lVar5 + lVar9 * 0x28;
    lVar8 = 0;
    lVar11 = 0;
    lVar12 = 0;
    do {
      lVar16 = *(longlong *)(lVar4 + 8);
      lVar14 = *(longlong *)(lVar16 + 0x20);
      if (lVar14 == 0) {
        lVar14 = lVar16;
      }
      lVar16 = *(longlong *)(lVar5 + 8);
      if (lVar16 == 0) {
        lVar16 = lVar5;
      }
      lVar6 = *param_3;
      lVar7 = *(longlong *)(lVar6 + 0xa8 + lVar8);
      lVar13 = lVar6 + lVar8;
      if (lVar7 != 0) {
        lVar13 = lVar7;
      }
      lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x310) + lVar9 * 8);
      lVar10 = lVar7 + 0x10;
      if (*(longlong *)(lVar7 + 0x30) != 0) {
        lVar10 = *(longlong *)(lVar7 + 0x30);
      }
      if (*(int *)(lVar10 + 8 + lVar11) != 0) {
        puVar1 = (uint *)(lVar6 + 0xe4 + lVar8);
        *puVar1 = *puVar1 & 0xfffe3fff;
        *(longlong *)(lVar13 + 0x18) = lVar7 + 0x198;
        *(undefined4 *)(lVar13 + 0x58) = *(undefined4 *)(lVar10 + 4 + lVar11);
        *(undefined4 *)(lVar13 + 0x5c) = *(undefined4 *)(lVar10 + 8 + lVar11);
      }
      *(longlong *)(lVar6 + 0xb8 + lVar8) = lVar17;
      *(undefined8 *)(lVar13 + 0x40) = *(undefined8 *)(lVar17 + 0x208);
      *(undefined4 *)(lVar13 + 0x68) = *(undefined4 *)(lVar14 + 0xc + lVar11);
      *(undefined4 *)(lVar13 + 0x6c) = *(undefined4 *)(lVar14 + 0x10 + lVar11);
      *(undefined8 *)(lVar6 + 0xc0 + lVar8) = *(undefined8 *)(lVar16 + lVar12 * 8);
      uVar2 = *(uint *)(lVar6 + 0xe4 + lVar8);
      *(uint *)(lVar6 + 0xe4 + lVar8) = uVar2 & 0xffffefff;
      *(int *)(lVar6 + 0xd8 + lVar8) = (int)lVar12;
      *(undefined1 *)(lVar6 + 0xde + lVar8) = 0;
      uVar15 = 0;
      if (*(char *)(lVar14 + 0x15 + lVar11) == '\x01') {
        uVar15 = (uint)(*(byte *)(param_1 + 0x70) & 1) << 0x1e;
      }
      *(uint *)(lVar6 + 0xe4 + lVar8) = uVar2 & 0xbfffefff | uVar15;
      *(undefined8 **)(lVar13 + 8) = &DAT_14cb05598;
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x1c;
      lVar8 = lVar8 + 0xf0;
    } while (lVar12 < (int)param_3[1]);
  }
  return;
}



// FUNCTION 147ccb708 FUN_147ccb708 body=91 status=ok
// SIG undefined FUN_147ccb708(void)

int FUN_147ccb708(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x588);
  *(uint *)(param_1 + 0x588) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x58c) - iVar1) < param_2) {
    FUN_147cd46e0(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x580);
  if (*(longlong *)(param_1 + 0x580) == 0) {
    lVar2 = param_1;
  }
  FUN_147cd46b6((longlong)iVar1 * 0xb0 + lVar2,param_2);
  return iVar1;
}



// FUNCTION 147ccb764 FUN_147ccb764 body=747 status=ok
// SIG undefined FUN_147ccb764(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ccb764(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined1 uStack_11c;
  undefined1 local_11b;
  undefined2 uStack_11a;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((*(int *)(DAT_14caff4c8 + 4) != 0) && ((*(byte *)((longlong)param_1 + 0x8fa) & 1) != 0)) &&
     (DAT_14caff4f8 == '\0')) {
    uVar4 = FUN_147ccb35c(param_1);
    if (((uVar4 != 0xffffffff) && (-1 < (int)uVar4)) && ((int)uVar4 < (int)param_1[0x11b])) {
      uVar6 = (ulonglong)uVar4;
      lVar2 = *(longlong *)(*(longlong *)param_1[0x62] + uVar6 * 8);
      plVar5 = param_1 + 0x6a;
      if ((longlong *)param_1[0x11a] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x11a];
      }
      plVar5 = plVar5 + uVar6 * 0x16;
      local_120 = 0xff;
      uStack_11c = 0;
      local_11b = 1;
      local_f8 = 0;
      local_100 = 0;
      local_148 = plVar5;
      FUN_144b26bec(param_1,0);
      local_e0 = param_1 + 0x20;
      uStack_d8 = 1;
      local_118 = 1;
      iStack_1a8 = *(int *)(*(longlong *)(*(longlong *)param_1[0x62] + uVar6 * 8) + 0x38);
      if ((iStack_1a8 == (int)param_1[0x11e]) && (uVar4 == (int)(short)param_1[0x11f])) {
        local_11b = 0;
      }
      else {
        iVar1 = *(int *)((longlong)param_1 + 0x8f4);
        FUN_140064c53(param_1[0x11d]);
        *(undefined4 *)(param_1 + 0x11e) = 0;
        if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x8f4) != 0)) {
          FUN_147a3b5ca(param_1 + 0x11d,0);
        }
        (**(code **)(*param_1 + 0x250))(param_1,uVar4,param_1 + 0x11d);
        *(short *)(param_1 + 0x11f) = (short)uVar4;
        iStack_1a8 = (int)param_1[0x11e];
      }
      lVar3 = param_1[0x11d];
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_140 = 0;
      uStack_138 = 0;
      local_130._0_4_ = (undefined4)lVar3;
      local_130._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
      uStack_19c = CONCAT22(uStack_11a,CONCAT11(local_11b,uStack_11c));
      local_1b0 = (undefined4)local_130;
      uStack_1ac = local_130._4_4_;
      uStack_1a4 = uStack_124;
      uStack_1a0 = local_120;
      uStack_198 = local_118;
      local_190 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_160 = (undefined4)local_e0;
      uStack_15c = local_e0._4_4_;
      uStack_158 = uStack_d8;
      uStack_154 = uStack_d4;
      local_150 = 0;
      local_d0 = 0;
      local_1c8 = plVar5;
      local_130 = lVar3;
      iStack_128 = iStack_1a8;
      FUN_147cee9b0(param_2);
      local_c8 = 0;
      iVar1 = (int)param_1[0x11e];
      lVar3 = param_1[0x11d];
      local_c0 = iVar1;
      if (iVar1 == 0) {
        local_bc = 0;
      }
      else {
        FUN_147471e8a(&local_c8,iVar1,0);
        FUN_147471efc(local_c8,lVar3,iVar1);
      }
      local_b8 = 0;
      local_b4 = *(int *)(lVar2 + 0x10c);
      local_b0 = local_b4 * 0xc;
      local_ac = (undefined4)plVar5[10];
      local_a0 = 0;
      local_98 = 1;
      local_94 = 0;
      local_88 = _DAT_14c846250;
      uStack_80 = DAT_14c846258;
      local_78 = _DAT_14c846260;
      uStack_70 = _DAT_14c846268;
      local_68 = _DAT_14c846270;
      uStack_60 = _DAT_14c846278;
      local_58 = DAT_14c846280;
      uStack_54 = DAT_14c846284;
      uStack_50 = DAT_14c846288;
      uStack_4c = DAT_14c84628c;
      local_a8 = plVar5;
      FUN_147ceea5a(param_2);
      FUN_1472aaabe(&local_148);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccba50 FUN_147ccba50 body=803 status=ok
// SIG undefined FUN_147ccba50(void)

ulonglong FUN_147ccba50(longlong *param_1,undefined8 *param_2)

{
  short sVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  byte bVar7;
  undefined8 uVar8;
  ulonglong unaff_RBX;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  
  if ((~*(byte *)((longlong)param_1 + 0x6e) & 10) == 0) {
    cVar3 = (**(code **)(*param_1 + 0x1f0))(param_1);
    if (((cVar3 == '\0') && ((*(byte *)(param_1 + 0xe) & 8) == 0)) &&
       ((*(byte *)((longlong)param_1 + 0x72) & 0x20) == 0)) goto LAB_147ccba83;
  }
  else {
LAB_147ccba83:
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),2);
    if ((*(byte *)((longlong)param_1 + 0x79) & 2) == 0) goto LAB_147ccbb6c;
  }
  uVar10 = (undefined7)(unaff_RBX >> 8);
  unaff_RBX = CONCAT71(uVar10,2);
  if ((*(int *)(DAT_14caff4c8 + 4) != 0) && ((*(byte *)((longlong)param_1 + 0x8fa) & 1) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caff580) {
      FUN_144b3d300(&DAT_14caff580);
      if (DAT_14caff580 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar6 = (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.RayTracing.Geometry.StaticMeshes",1);
        if (plVar6 == (longlong *)0x0) {
          DAT_14caff578 = 0;
        }
        else {
          DAT_14caff578 = (**(code **)(*plVar6 + 0x68))(plVar6);
        }
        _Init_thread_footer(&DAT_14caff580);
      }
    }
    if ((DAT_14caff578 == 0) || (0 < *(int *)(DAT_14caff578 + 4))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14caff590) {
        FUN_144b3d300(&DAT_14caff590);
        if (DAT_14caff590 == -1) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar6 = (longlong *)
                   (**(code **)(*DAT_14c8407a8 + 200))
                             (DAT_14c8407a8,L"r.RayTracing.Geometry.HierarchicalInstancedStaticMesh"
                              ,1);
          if (plVar6 == (longlong *)0x0) {
            DAT_14caff588 = 0;
          }
          else {
            DAT_14caff588 = (**(code **)(*plVar6 + 0x68))(plVar6);
          }
          _Init_thread_footer(&DAT_14caff590);
        }
      }
      if (((DAT_14caff588 != 0 & *(byte *)((longlong)param_1 + 0x74) >> 6) != 1) ||
         (0 < *(int *)(DAT_14caff588 + 4))) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14caff5a0) {
          FUN_144b3d300(&DAT_14caff5a0);
          if (DAT_14caff5a0 == -1) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            plVar6 = (longlong *)
                     (**(code **)(*DAT_14c8407a8 + 200))
                               (DAT_14c8407a8,L"r.RayTracing.Geometry.LandscapeGrass",1);
            if (plVar6 == (longlong *)0x0) {
              DAT_14caff598 = 0;
            }
            else {
              DAT_14caff598 = (**(code **)(*plVar6 + 0x68))(plVar6);
            }
            _Init_thread_footer(&DAT_14caff5a0);
          }
        }
        cVar3 = DAT_14caff4f8;
        if (((-1 < *(char *)((longlong)param_1 + 0x74)) || (DAT_14caff598 == 0)) ||
           (0 < *(int *)(DAT_14caff598 + 4))) {
          uVar2 = CONCAT71(uVar10,*(undefined1 *)((longlong)param_1 + 0x79));
          uVar9 = uVar2 & 0xffffffffffffff02;
          iVar5 = FUN_147ccb35c();
          if (iVar5 == -1) {
            sVar1 = (short)param_1[0x11c];
            bVar4 = 4;
            bVar7 = 0x84;
          }
          else {
            if (cVar3 == '\0') {
              uVar8 = **(undefined8 **)(**(longlong **)(param_1[0x62] + 0x48) + (longlong)iVar5 * 8)
              ;
              lVar11 = 0x250;
            }
            else {
              lVar11 = 0x248;
              uVar8 = 0;
            }
            *param_2 = uVar8;
            *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
            *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1[0x43] + 0x208);
            (**(code **)(*param_1 + lVar11))(param_1,iVar5,param_2 + 1);
            *(byte *)((longlong)param_2 + 0x2c) = (byte)((uVar2 & 0xffffff02) >> 1) & 0x7f;
            sVar1 = (short)param_1[0x11c];
            bVar4 = 0x10;
            bVar7 = 0x90;
          }
          if (sVar1 == -1) {
            bVar7 = bVar4;
          }
          unaff_RBX = CONCAT71((int7)(uVar9 >> 8),(char)uVar9 << 5 | bVar7);
        }
      }
    }
  }
LAB_147ccbb6c:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 147ccbd7c FUN_147ccbd7c body=344 status=ok
// SIG undefined FUN_147ccbd7c(void)

longlong * FUN_147ccbd7c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_38 = 0;
  lVar1 = *(longlong *)(param_1 + 0x308);
  local_58 = *(undefined4 *)(lVar1 + 0xa4);
  uStack_54 = *(undefined4 *)(lVar1 + 0xbc);
  uStack_50 = *(undefined4 *)(lVar1 + 0x9c);
  uStack_4c = *(undefined4 *)(lVar1 + 0x98);
  local_48 = (ulonglong)(*(int *)(param_1 + 0x2a8) + 1);
  FUN_1474121b6((longlong)&uStack_40 + 4,*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x18));
  lVar1 = *(longlong *)**(undefined8 **)(param_1 + 0x310);
  local_6c = 0xffffffff;
  local_48._4_4_ = *(undefined4 *)(lVar1 + 0x38);
  uStack_40._0_4_ = *(undefined4 *)(*(longlong *)(param_1 + 0x308) + 0xc0);
  FUN_146f37e98(&local_68,&local_6c,*(int *)(param_1 + 0x2a8) + 1);
  if (0 < *(int *)(lVar1 + 0x38)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + 0x30);
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        lVar4 = lVar1 + 0x10;
      }
      *(int *)(local_68 + (longlong)*(int *)(lVar4 + lVar2) * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x1c;
    } while (lVar3 < *(int *)(lVar1 + 0x38));
  }
  *param_2 = local_68;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
  *(undefined4 *)(param_2 + 2) = local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_54;
  *(undefined4 *)(param_2 + 3) = uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_4c;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_48._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_40._4_4_;
  param_2[6] = local_38;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccbed6 FUN_147ccbed6 body=92 status=ok
// SIG undefined FUN_147ccbed6(void)

void FUN_147ccbed6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aa62b80;
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a418080;
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 147ccbf40 FUN_147ccbf40 body=1188 status=ok
// SIG undefined FUN_147ccbf40(void)

void FUN_147ccbf40(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  int local_274;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  uint local_240;
  uint local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 uStack_1a3;
  undefined2 uStack_1a2;
  undefined4 uStack_1a0;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150 [21];
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (*(int *)(DAT_14caff4e0 + 4) != 0) {
    iVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd0))();
    if ((int)(uint)*(byte *)(*(longlong *)(param_1 + 0x2d8) + 0x1b) <= iVar9) {
      (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xf0))
                (*(longlong **)(param_1 + 0x2e0),*(undefined8 *)(param_2 + 0x110));
      lVar10 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xc0))();
      if (lVar10 != 0) {
        cVar8 = FUN_1474283cc(lVar10);
        if (cVar8 != '\0') {
          iVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0xd0))();
          lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x2d8) + (longlong)iVar9 * 8);
          uStack_1b8 = 0;
          uStack_1b4 = 0;
          uStack_1b0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          uStack_1a8 = 0xff;
          uStack_1a4 = 0;
          uStack_1a3 = 1;
          local_158 = 0;
          local_198 = 0;
          uStack_190 = 0;
          uStack_18c = 0;
          local_188 = 0;
          uStack_184 = 0;
          uStack_180 = 0;
          local_178 = 0;
          uStack_170 = 0;
          local_168 = param_1 + 0x100;
          uStack_160 = 1;
          uStack_1a0 = 1;
          local_274 = iVar9;
          local_1d0 = lVar10;
          if (*(int *)(lVar3 + 0x18) < 1) {
            local_1d8 = 0;
            local_1ec = 0;
            local_1f0 = 0;
            local_1f8 = 0;
            local_20c = 0;
            local_210 = 0;
            local_218 = 0;
            local_23c = 0;
            local_240 = 0;
            local_248 = 0;
          }
          else {
            lVar10 = 8;
            lVar12 = 4;
            uVar13 = 0;
            local_270 = param_2;
            local_268 = param_1;
            do {
              lVar4 = local_268;
              lVar14 = *(longlong *)(lVar3 + 0x10);
              local_260 = *(longlong *)(local_268 + 0x298);
              local_a8 = (undefined8 *)0x0;
              local_a0 = 0x100000000;
              local_88 = 0;
              local_98 = 0;
              uStack_90 = 0;
              uStack_80 = 0xffffffff;
              local_78 = 0xff0000ffffffff;
              uStack_70 = uStack_70 & 0xffffff00;
              uStack_6c = 0x40c00f07;
              local_68 = local_68 & 0xfc;
              FUN_141793e06(local_150);
              uStack_6c = uStack_6c & 0xfffe3fff;
              local_288 = 1;
              local_98 = (**(code **)(**(longlong **)(lVar4 + 0x2e0) + 0x28))
                                   (*(longlong **)(lVar4 + 0x2e0),0,iVar9,uVar13 & 0xffffffff);
              uVar6 = local_78;
              uVar5 = uStack_1c0;
              uStack_90 = *(undefined8 *)(local_260 + lVar10);
              local_78 = CONCAT44(local_78._4_4_,(int)uVar13);
              uVar7 = local_78;
              local_78._7_1_ = SUB81(uVar6,7);
              local_78._0_7_ = CONCAT16((char)iVar9,(int6)uVar7);
              uStack_6c = uStack_6c & 0xbfffefff | (*(byte *)(lVar4 + 0x70) & 1) << 0x1e;
              puVar11 = local_a8;
              if (local_a8 == (undefined8 *)0x0) {
                puVar11 = local_150;
              }
              puVar11[3] = *(undefined8 *)(lVar3 + 0x28);
              *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)(lVar14 + lVar12);
              iVar2 = *(int *)(lVar14 + 0xc + lVar12);
              *(int *)(puVar11 + 0xd) = iVar2;
              *(int *)((longlong)puVar11 + 0x6c) = iVar2 + -1 + *(int *)(lVar14 + 0x44 + lVar12);
              *(undefined4 *)((longlong)puVar11 + 0x5c) = *(undefined4 *)(lVar14 + 4 + lVar12);
              *puVar11 = *(undefined8 *)(lVar4 + 0x250);
              lVar14 = (longlong)(int)uStack_1c0;
              uStack_1c0 = uStack_1c0 + 1;
              local_258 = lVar10;
              if (uStack_1bc < uStack_1c0) {
                FUN_147471df6(&local_1c8,uVar5);
              }
              lVar10 = local_1c8;
              lVar14 = lVar14 * 0xf0;
              *(undefined8 *)(local_1c8 + 0xa8 + lVar14) = 0;
              puVar11 = local_a8;
              if (local_a8 == (undefined8 *)0x0) {
                puVar11 = local_150;
              }
              FUN_144739392(local_1c8 + lVar14,puVar11,local_a0 & 0xffffffff,0);
              *(byte *)(lVar10 + 0xe8 + lVar14) = local_68;
              puVar1 = (undefined4 *)(lVar10 + 0xd8 + lVar14);
              *puVar1 = (undefined4)local_78;
              puVar1[1] = local_78._4_4_;
              puVar1[2] = uStack_70;
              puVar1[3] = uStack_6c;
              puVar1 = (undefined4 *)(lVar10 + 200 + lVar14);
              *puVar1 = (undefined4)local_88;
              puVar1[1] = local_88._4_4_;
              puVar1[2] = (undefined4)uStack_80;
              puVar1[3] = uStack_80._4_4_;
              puVar1 = (undefined4 *)(lVar10 + 0xb8 + lVar14);
              *puVar1 = (undefined4)local_98;
              puVar1[1] = local_98._4_4_;
              puVar1[2] = (undefined4)uStack_90;
              puVar1[3] = uStack_90._4_4_;
              FUN_1446fc232(local_150);
              uVar13 = uVar13 + 1;
              lVar10 = local_258 + 0x60;
              lVar12 = lVar12 + 0xf8;
            } while ((longlong)uVar13 < (longlong)*(int *)(lVar3 + 0x18));
            local_1f0 = (undefined4)uStack_170;
            local_1d8 = local_158;
            local_218 = local_198;
            local_248 = local_1c8;
            local_1f8 = local_178;
            param_2 = local_270;
            local_240 = uStack_1c0;
            local_23c = uStack_1bc;
            local_210 = uStack_190;
            local_20c = uStack_18c;
            local_1ec = uStack_170._4_4_;
          }
          local_1c8 = 0;
          uStack_1c0 = 0;
          uStack_1bc = 0;
          local_238 = CONCAT44(uStack_1b4,uStack_1b8);
          uStack_224 = CONCAT22(uStack_1a2,CONCAT11(uStack_1a3,uStack_1a4));
          _uStack_230 = CONCAT44(uStack_1ac,uStack_1b0);
          uStack_228 = uStack_1a8;
          uStack_220 = uStack_1a0;
          local_198 = 0;
          uStack_190 = 0;
          uStack_18c = 0;
          local_208 = CONCAT44(uStack_184,local_188);
          uStack_200 = CONCAT44(uStack_17c,uStack_180);
          local_178 = 0;
          uStack_170 = 0;
          local_1e8 = (undefined4)local_168;
          uStack_1e4 = local_168._4_4_;
          uStack_1e0 = uStack_160;
          uStack_1dc = uStack_15c;
          local_158 = 0;
          local_250 = local_1d0;
          FUN_147cee9b0(param_2);
          FUN_1472aaabe(&local_1d0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccc3f4 FUN_147ccc3f4 body=232 status=ok
// SIG undefined FUN_147ccc3f4(void)

undefined8 * FUN_147ccc3f4(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  lVar2 = *(longlong *)(param_1 + 0x2d0);
  local_48 = *(undefined4 *)(lVar2 + 0xa4);
  uStack_44 = *(undefined4 *)(lVar2 + 0xbc);
  uStack_40 = *(undefined4 *)(lVar2 + 0x9c);
  uStack_3c = *(undefined4 *)(lVar2 + 0x98);
  local_38 = (ulonglong)(*(int *)(param_1 + 0x2a8) + 1);
  FUN_1474121b6((longlong)&uStack_30 + 4,*(undefined8 *)(*(longlong *)(param_1 + 0x2c8) + 0x18));
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + 0xc0);
  uStack_30 = CONCAT44(uStack_30._4_4_,uVar1);
  *param_2 = local_58;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  param_2[6] = local_28;
  param_2[4] = local_38;
  *(undefined4 *)(param_2 + 5) = uVar1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_44;
  *(undefined4 *)(param_2 + 3) = uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccc4de FUN_147ccc4de body=131 status=ok
// SIG undefined FUN_147ccc4de(void)

longlong * FUN_147ccc4de(longlong *param_1)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [23];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)((longlong)param_1 + 0x2ec) != 0 || (int)param_1[0x5d] != 0) ||
      (int)param_1[0x5e] != 0) || *(int *)((longlong)param_1 + 0x2f4) != 0) {
    local_19 = '\0';
    (**(code **)(*param_1 + 0x248))(param_1,local_30,&local_19);
    if (local_19 != '\x01') {
      param_1 = (longlong *)&DAT_14c76196c;
      goto LAB_147ccc538;
    }
  }
  param_1 = param_1 + 0x5d;
LAB_147ccc538:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ccc562 FUN_147ccc562 body=39 status=ok
// SIG undefined FUN_147ccc562(void)

undefined1 * FUN_147ccc562(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x90))();
  *param_2 = uVar1;
  param_2[1] = 1;
  return param_2;
}



// FUNCTION 147ccc595 FUN_147ccc595 body=284 status=ok
// SIG undefined FUN_147ccc595(void)

longlong FUN_147ccc595(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0x2000000000;
  plVar5 = (longlong *)FUN_144a7954a(param_2);
  if ((plVar5 != (longlong *)0x0) &&
     (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x3b0))(plVar5), 0 < (int)plVar5[1])) {
    lVar8 = 0x10;
    lVar9 = 0;
    do {
      lVar7 = *plVar5;
      uVar3 = *(undefined8 *)(lVar7 + -0x10 + lVar8);
      uVar4 = *(undefined8 *)(lVar7 + -8 + lVar8);
      local_48 = *(undefined4 *)(lVar7 + 0x10 + lVar8);
      puVar1 = (undefined4 *)(lVar7 + lVar8);
      local_58 = *puVar1;
      uStack_54 = puVar1[1];
      uStack_50 = puVar1[2];
      uStack_4c = puVar1[3];
      iVar2 = *(int *)(param_1 + 0x508);
      lVar7 = (longlong)iVar2;
      *(uint *)(param_1 + 0x508) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x50c) < iVar2 + 1U) {
        FUN_147cd476e(param_1,iVar2);
      }
      lVar6 = *(longlong *)(param_1 + 0x500);
      if (*(longlong *)(param_1 + 0x500) == 0) {
        lVar6 = param_1;
      }
      *(undefined8 *)(lVar6 + lVar7 * 0x28) = uVar3;
      *(undefined8 *)(lVar6 + 8 + lVar7 * 0x28) = uVar4;
      puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar7 * 0x28);
      *puVar1 = local_58;
      puVar1[1] = uStack_54;
      puVar1[2] = uStack_50;
      puVar1[3] = uStack_4c;
      *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x28) = local_48;
      lVar9 = lVar9 + 1;
      lVar8 = lVar8 + 0x28;
    } while (lVar9 < (int)plVar5[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ccc6b2 FUN_147ccc6b2 body=42 status=ok
// SIG undefined FUN_147ccc6b2(void)

void FUN_147ccc6b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147ccc6e0 FUN_147ccc6e0 body=96 status=ok
// SIG undefined FUN_147ccc6e0(void)

undefined8 FUN_147ccc6e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1402aab0e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14caffeb0,1);
  return uVar3;
}



// FUNCTION 147ccc740 FUN_147ccc740 body=52 status=ok
// SIG undefined FUN_147ccc740(void)

void FUN_147ccc740(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147ccc774 FUN_147ccc774 body=42 status=ok
// SIG undefined FUN_147ccc774(void)

void FUN_147ccc774(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147ccc7a6 FUN_147ccc7a6 body=96 status=ok
// SIG undefined FUN_147ccc7a6(void)

undefined8 FUN_147ccc7a6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a6658();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafff38,1);
  return uVar3;
}



// FUNCTION 147ccc806 FUN_147ccc806 body=52 status=ok
// SIG undefined FUN_147ccc806(void)

void FUN_147ccc806(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147ccc83a FUN_147ccc83a body=42 status=ok
// SIG undefined FUN_147ccc83a(void)

void FUN_147ccc83a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147ccc86c FUN_147ccc86c body=96 status=ok
// SIG undefined FUN_147ccc86c(void)

undefined8 FUN_147ccc86c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141573284();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cafffc0,1);
  return uVar3;
}



// FUNCTION 147ccc8cc FUN_147ccc8cc body=52 status=ok
// SIG undefined FUN_147ccc8cc(void)

void FUN_147ccc8cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}


