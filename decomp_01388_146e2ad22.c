// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146e2ad22 FUN_146e2ad22 body=113 status=ok
// SIG undefined FUN_146e2ad22(void)

void FUN_146e2ad22(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2acb1(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2ae00 FUN_146e2ae00 body=133 status=ok
// SIG undefined FUN_146e2ae00(void)

void FUN_146e2ae00(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2af9e((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2b0f4(param_1 + 8);
  return;
}



// FUNCTION 146e2ae86 FUN_146e2ae86 body=59 status=ok
// SIG undefined FUN_146e2ae86(void)

longlong FUN_146e2ae86(longlong param_1,int param_2)

{
  FUN_146e2b083(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2aec2 FUN_146e2aec2 body=96 status=ok
// SIG undefined FUN_146e2aec2(void)

void FUN_146e2aec2(longlong param_1,int param_2)

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



// FUNCTION 146e2af22 FUN_146e2af22 body=122 status=ok
// SIG undefined FUN_146e2af22(void)

void FUN_146e2af22(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2af9e(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2b024(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2af9e FUN_146e2af9e body=132 status=ok
// SIG undefined FUN_146e2af9e(void)

void FUN_146e2af9e(longlong param_1,int param_2)

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



// FUNCTION 146e2b024 FUN_146e2b024 body=95 status=ok
// SIG undefined FUN_146e2b024(void)

void FUN_146e2b024(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2b083(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2b083 FUN_146e2b083 body=54 status=ok
// SIG undefined FUN_146e2b083(void)

void FUN_146e2b083(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2b0b9(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2b0b9 FUN_146e2b0b9 body=58 status=ok
// SIG undefined FUN_146e2b0b9(void)

void FUN_146e2b0b9(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2b0f4 FUN_146e2b0f4 body=113 status=ok
// SIG undefined FUN_146e2b0f4(void)

void FUN_146e2b0f4(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2b083(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2b1d2 FUN_146e2b1d2 body=133 status=ok
// SIG undefined FUN_146e2b1d2(void)

void FUN_146e2b1d2(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2b370((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2b4c6(param_1 + 8);
  return;
}



// FUNCTION 146e2b258 FUN_146e2b258 body=59 status=ok
// SIG undefined FUN_146e2b258(void)

longlong FUN_146e2b258(longlong param_1,int param_2)

{
  FUN_146e2b455(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2b294 FUN_146e2b294 body=96 status=ok
// SIG undefined FUN_146e2b294(void)

void FUN_146e2b294(longlong param_1,int param_2)

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



// FUNCTION 146e2b2f4 FUN_146e2b2f4 body=122 status=ok
// SIG undefined FUN_146e2b2f4(void)

void FUN_146e2b2f4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2b370(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2b3f6(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2b370 FUN_146e2b370 body=132 status=ok
// SIG undefined FUN_146e2b370(void)

void FUN_146e2b370(longlong param_1,int param_2)

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



// FUNCTION 146e2b3f6 FUN_146e2b3f6 body=95 status=ok
// SIG undefined FUN_146e2b3f6(void)

void FUN_146e2b3f6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2b455(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2b455 FUN_146e2b455 body=54 status=ok
// SIG undefined FUN_146e2b455(void)

void FUN_146e2b455(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2b48b(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2b48b FUN_146e2b48b body=58 status=ok
// SIG undefined FUN_146e2b48b(void)

void FUN_146e2b48b(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2b4c6 FUN_146e2b4c6 body=113 status=ok
// SIG undefined FUN_146e2b4c6(void)

void FUN_146e2b4c6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2b455(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2b5a4 FUN_146e2b5a4 body=133 status=ok
// SIG undefined FUN_146e2b5a4(void)

void FUN_146e2b5a4(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2b742((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2b898(param_1 + 8);
  return;
}



// FUNCTION 146e2b62a FUN_146e2b62a body=59 status=ok
// SIG undefined FUN_146e2b62a(void)

longlong FUN_146e2b62a(longlong param_1,int param_2)

{
  FUN_146e2b827(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2b666 FUN_146e2b666 body=96 status=ok
// SIG undefined FUN_146e2b666(void)

void FUN_146e2b666(longlong param_1,int param_2)

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



// FUNCTION 146e2b6c6 FUN_146e2b6c6 body=122 status=ok
// SIG undefined FUN_146e2b6c6(void)

void FUN_146e2b6c6(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2b742(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2b7c8(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2b742 FUN_146e2b742 body=132 status=ok
// SIG undefined FUN_146e2b742(void)

void FUN_146e2b742(longlong param_1,int param_2)

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



// FUNCTION 146e2b7c8 FUN_146e2b7c8 body=95 status=ok
// SIG undefined FUN_146e2b7c8(void)

void FUN_146e2b7c8(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2b827(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2b827 FUN_146e2b827 body=54 status=ok
// SIG undefined FUN_146e2b827(void)

void FUN_146e2b827(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2b85d(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2b85d FUN_146e2b85d body=58 status=ok
// SIG undefined FUN_146e2b85d(void)

void FUN_146e2b85d(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2b898 FUN_146e2b898 body=113 status=ok
// SIG undefined FUN_146e2b898(void)

void FUN_146e2b898(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2b827(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2b976 FUN_146e2b976 body=133 status=ok
// SIG undefined FUN_146e2b976(void)

void FUN_146e2b976(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2bb14((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2bc6a(param_1 + 8);
  return;
}



// FUNCTION 146e2b9fc FUN_146e2b9fc body=59 status=ok
// SIG undefined FUN_146e2b9fc(void)

longlong FUN_146e2b9fc(longlong param_1,int param_2)

{
  FUN_146e2bbf9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2ba38 FUN_146e2ba38 body=96 status=ok
// SIG undefined FUN_146e2ba38(void)

void FUN_146e2ba38(longlong param_1,int param_2)

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



// FUNCTION 146e2ba98 FUN_146e2ba98 body=122 status=ok
// SIG undefined FUN_146e2ba98(void)

void FUN_146e2ba98(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2bb14(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2bb9a(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2bb14 FUN_146e2bb14 body=132 status=ok
// SIG undefined FUN_146e2bb14(void)

void FUN_146e2bb14(longlong param_1,int param_2)

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



// FUNCTION 146e2bb9a FUN_146e2bb9a body=95 status=ok
// SIG undefined FUN_146e2bb9a(void)

void FUN_146e2bb9a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2bbf9(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2bbf9 FUN_146e2bbf9 body=54 status=ok
// SIG undefined FUN_146e2bbf9(void)

void FUN_146e2bbf9(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2bc2f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2bc2f FUN_146e2bc2f body=58 status=ok
// SIG undefined FUN_146e2bc2f(void)

void FUN_146e2bc2f(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2bc6a FUN_146e2bc6a body=113 status=ok
// SIG undefined FUN_146e2bc6a(void)

void FUN_146e2bc6a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2bbf9(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2bd48 FUN_146e2bd48 body=133 status=ok
// SIG undefined FUN_146e2bd48(void)

void FUN_146e2bd48(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2bee6((longlong *)(param_3 + 8),iVar1);
  }
  lVar4 = (longlong)param_2 * 0x10;
  lVar3 = *(longlong *)(param_3 + 8);
  lVar5 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar3 + lVar5) = 0;
  *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(lVar2 + lVar4);
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar3 + 8 + lVar5) = *(undefined4 *)(lVar2 + 8 + lVar4);
  *(undefined4 *)(lVar3 + 0xc + lVar5) = *(undefined4 *)(lVar2 + 0xc + lVar4);
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  FUN_146e2c03c(param_1 + 8);
  return;
}



// FUNCTION 146e2bdce FUN_146e2bdce body=59 status=ok
// SIG undefined FUN_146e2bdce(void)

longlong FUN_146e2bdce(longlong param_1,int param_2)

{
  FUN_146e2bfcb(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2be0a FUN_146e2be0a body=96 status=ok
// SIG undefined FUN_146e2be0a(void)

void FUN_146e2be0a(longlong param_1,int param_2)

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



// FUNCTION 146e2be6a FUN_146e2be6a body=122 status=ok
// SIG undefined FUN_146e2be6a(void)

void FUN_146e2be6a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2bee6(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2bf6c(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2bee6 FUN_146e2bee6 body=132 status=ok
// SIG undefined FUN_146e2bee6(void)

void FUN_146e2bee6(longlong param_1,int param_2)

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



// FUNCTION 146e2bf6c FUN_146e2bf6c body=95 status=ok
// SIG undefined FUN_146e2bf6c(void)

void FUN_146e2bf6c(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146e2bfcb(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2bfcb FUN_146e2bfcb body=54 status=ok
// SIG undefined FUN_146e2bfcb(void)

void FUN_146e2bfcb(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146e2c001(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146e2c001 FUN_146e2c001 body=58 status=ok
// SIG undefined FUN_146e2c001(void)

void FUN_146e2c001(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146e2c03c FUN_146e2c03c body=113 status=ok
// SIG undefined FUN_146e2c03c(void)

void FUN_146e2c03c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_146e2bfcb(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2c0ae FUN_146e2c0ae body=573 status=ok
// SIG undefined FUN_146e2c0ae(void)

void FUN_146e2c0ae(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f5e0b8;
  FUN_146e2b455(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2bfcb(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2bbf9(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2b083(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2b827(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2b083(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2b455(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2acb1(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2b083(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2acb1(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2a86b(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_146e2a4b9(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2c2ec FUN_146e2c2ec body=38 status=ok
// SIG undefined FUN_146e2c2ec(void)

undefined8 FUN_146e2c2ec(undefined8 param_1,int param_2)

{
  FUN_146e2c9be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2c35e FUN_146e2c35e body=67 status=ok
// SIG undefined FUN_146e2c35e(void)

void FUN_146e2c35e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    iVar2 = iVar1 - (param_3 + param_2);
    if (iVar2 != 0) {
      _Dst = (void *)((longlong)param_2 + *(longlong *)(param_1 + 8));
      memmove(_Dst,(void *)((longlong)param_3 + (longlong)_Dst),(longlong)iVar2);
      iVar1 = *(int *)(param_1 + 0x10);
    }
    *(int *)(param_1 + 0x10) = iVar1 - param_3;
  }
  return;
}



// FUNCTION 146e2c3a2 FUN_146e2c3a2 body=72 status=ok
// SIG undefined FUN_146e2c3a2(void)

void FUN_146e2c3a2(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar1 - iVar3) + *(longlong *)(param_1 + 8)),(longlong)iVar3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 + -1;
  return;
}



// FUNCTION 146e2c3f0 FUN_146e2c3f0 body=137 status=ok
// SIG undefined FUN_146e2c3f0(void)

void FUN_146e2c3f0(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_146e2c562((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 146e2c47a FUN_146e2c47a body=47 status=ok
// SIG undefined FUN_146e2c47a(void)

longlong FUN_146e2c47a(longlong param_1,int param_2)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2c4aa FUN_146e2c4aa body=88 status=ok
// SIG undefined FUN_146e2c4aa(void)

void FUN_146e2c4aa(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = FUN_144a3809e((longlong)param_2,1);
    iVar2 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar2 = iVar1;
    }
  }
  if (iVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar2,1,1);
  }
  return;
}



// FUNCTION 146e2c502 FUN_146e2c502 body=95 status=ok
// SIG undefined FUN_146e2c502(void)

void FUN_146e2c502(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e2c562(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
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



// FUNCTION 146e2c562 FUN_146e2c562 body=124 status=ok
// SIG undefined FUN_146e2c562(void)

void FUN_146e2c562(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e2c64c FUN_146e2c64c body=123 status=ok
// SIG undefined FUN_146e2c64c(void)

void FUN_146e2c64c(longlong param_1,int param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  
  lVar4 = *(longlong *)(param_1 + 8);
  iVar3 = *(int *)(param_3 + 0x10);
  lVar9 = (longlong)iVar3;
  *(uint *)(param_3 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar3 + 1U) {
    FUN_146e2c816((longlong *)(param_3 + 8),iVar3);
  }
  lVar5 = *(longlong *)(param_3 + 8);
  *(undefined ***)(lVar5 + lVar9 * 0x18) = &PTR_FUN_149f5e380;
  puVar1 = (undefined4 *)(lVar4 + 8 + (longlong)param_2 * 0x18);
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  puVar2 = (undefined4 *)(lVar5 + 8 + lVar9 * 0x18);
  *puVar2 = *puVar1;
  puVar2[1] = uVar6;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  *(undefined ***)(lVar5 + lVar9 * 0x18) = &PTR_FUN_149f5e378;
  FUN_146e2c94c(param_1 + 8);
  return;
}



// FUNCTION 146e2c6c8 FUN_146e2c6c8 body=59 status=ok
// SIG undefined FUN_146e2c6c8(void)

longlong FUN_146e2c6c8(longlong param_1,int param_2)

{
  FUN_146e2c94b(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2c704 FUN_146e2c704 body=113 status=ok
// SIG undefined FUN_146e2c704(void)

void FUN_146e2c704(longlong param_1,int param_2)

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



// FUNCTION 146e2c776 FUN_146e2c776 body=159 status=ok
// SIG undefined FUN_146e2c776(void)

void FUN_146e2c776(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146e2c816(param_1,iVar1);
    }
    if (uVar3 != 0) {
      lVar2 = (longlong)iVar1 * 0x18 + *param_1 + 0x14;
      do {
        *(undefined8 *)(lVar2 + -0xc) = 0;
        *(undefined8 *)(lVar2 + -4) = 0xffffffff;
        *(undefined ***)(lVar2 + -0x14) = &PTR_FUN_149f5e378;
        lVar2 = lVar2 + 0x18;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_146e2c8e6(param_1,param_2,iVar1 - param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e2c816 FUN_146e2c816 body=147 status=ok
// SIG undefined FUN_146e2c816(void)

void FUN_146e2c816(longlong param_1,int param_2)

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



// FUNCTION 146e2c8aa FUN_146e2c8aa body=29 status=ok
// SIG undefined FUN_146e2c8aa(void)

undefined8 FUN_146e2c8aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2c8c8 FUN_146e2c8c8 body=29 status=ok
// SIG undefined FUN_146e2c8c8(void)

undefined8 FUN_146e2c8c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2c8e6 FUN_146e2c8e6 body=101 status=ok
// SIG undefined FUN_146e2c8e6(void)

void FUN_146e2c8e6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_146e2c94b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2c94b FUN_146e2c94b body=1 status=ok
// SIG undefined FUN_146e2c94b(void)

void FUN_146e2c94b(void)

{
  return;
}



// FUNCTION 146e2c94c FUN_146e2c94c body=113 status=ok
// SIG undefined FUN_146e2c94c(void)

void FUN_146e2c94c(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x18);
  FUN_146e2c94b(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2c9be FUN_146e2c9be body=140 status=ok
// SIG undefined FUN_146e2c9be(void)

void FUN_146e2c9be(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f5e2f8;
  FUN_146e2c94b(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2ca4a FUN_146e2ca4a body=38 status=ok
// SIG undefined FUN_146e2ca4a(void)

undefined8 FUN_146e2ca4a(undefined8 param_1,int param_2)

{
  FUN_146e2cdb8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2cade FUN_146e2cade body=114 status=ok
// SIG undefined FUN_146e2cade(void)

void FUN_146e2cade(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar1 + 1U) {
    FUN_146e2cb8c((longlong *)(param_3 + 8),iVar1);
  }
  FUN_14627166e((longlong)iVar1 * 0x50 + *(longlong *)(param_3 + 8),lVar2 + (longlong)param_2 * 0x50
               );
  FUN_146e2cd3e(param_1 + 8,param_2);
  return;
}



// FUNCTION 146e2cb50 FUN_146e2cb50 body=59 status=ok
// SIG undefined FUN_146e2cb50(void)

longlong FUN_146e2cb50(longlong param_1,int param_2)

{
  FUN_140f35b7a(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2cb8c FUN_146e2cb8c body=147 status=ok
// SIG undefined FUN_146e2cb8c(void)

void FUN_146e2cb8c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146e2cc20 FUN_146e2cc20 body=104 status=ok
// SIG undefined FUN_146e2cc20(void)

void FUN_146e2cc20(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x50 + *param_1);
  FUN_140f35b7a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e2cc88 FUN_146e2cc88 body=63 status=ok
// SIG undefined FUN_146e2cc88(void)

void FUN_146e2cc88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e2ccc8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 146e2ccc8 FUN_146e2ccc8 body=117 status=ok
// SIG undefined FUN_146e2ccc8(void)

ulonglong FUN_146e2ccc8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 146e2cd3e FUN_146e2cd3e body=122 status=ok
// SIG undefined FUN_146e2cd3e(void)

void FUN_146e2cd3e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x50 + lVar1);
  FUN_140f35b7a(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x50),(longlong)iVar3 * 0x50);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 146e2cdb8 FUN_146e2cdb8 body=164 status=ok
// SIG undefined FUN_146e2cdb8(void)

void FUN_146e2cdb8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f5e388;
  FUN_140f35b7a(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140f35b7a(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2ce5c FUN_146e2ce5c body=133 status=ok
// SIG undefined FUN_146e2ce5c(void)

ulonglong FUN_146e2ce5c(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14c994a70,local_38);
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2);
  iVar1 = FUN_144a41c6c(param_1,local_38);
  if (iVar1 != -1) {
    uVar2 = FUN_1429913ec(param_1,iVar1,param_1 + 0x18);
    uVar3 = (ulonglong)uVar2;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2cee2 FUN_146e2cee2 body=129 status=ok
// SIG undefined FUN_146e2cee2(void)

undefined4 FUN_146e2cee2(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c994a78,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0x32;
  }
  else {
    uVar2 = FUN_142991408(param_1,iVar1,param_1 + 0x18);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2cf64 FUN_146e2cf64 body=142 status=ok
// SIG undefined FUN_146e2cf64(void)

undefined4 FUN_146e2cf64(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14c994a80,local_40);
  iVar1 = FUN_144a41c6c(param_1,local_40);
  if (iVar1 == -1) {
    uVar2 = 0x38d1b717;
  }
  else {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 0xc);
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2cff4 FUN_146e2cff4 body=126 status=ok
// SIG undefined FUN_146e2cff4(void)

undefined4 FUN_146e2cff4(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400021e4(&DAT_14c994a88,local_28);
  iVar1 = FUN_144a41c6c(param_1,local_28);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1429913ec(param_1,iVar1,param_1 + 0x18);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2d074 FUN_146e2d074 body=54 status=ok
// SIG undefined FUN_146e2d074(void)

void FUN_146e2d074(longlong *param_1)

{
  FUN_146e2d0aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2d0aa FUN_146e2d0aa body=128 status=ok
// SIG undefined FUN_146e2d0aa(void)

void FUN_146e2d0aa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 146e2d12c FUN_146e2d12c body=53 status=ok
// SIG undefined FUN_146e2d12c(void)

void FUN_146e2d12c(void)

{
  FUN_146e2d162();
  if (DAT_14c994b18 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c994af8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2d162 FUN_146e2d162 body=345 status=ok
// SIG undefined FUN_146e2d162(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e2d162(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14c994b08;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c994b20 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c994af8;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + 8 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  _DAT_14c994b00 = 0;
  if (DAT_14c994b04 != 0) {
    FUN_1446f4a44(&DAT_14c994af8,0);
  }
  _DAT_14c994b28 = 0xffffffff;
  DAT_14c994b20 = 0;
  if (0x80 < DAT_14c994b24) {
    DAT_14c994b24 = 0x80;
    FUN_1446efbd8(&DAT_14c994b08,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2d2bc FUN_146e2d2bc body=52 status=ok
// SIG undefined FUN_146e2d2bc(void)

void FUN_146e2d2bc(longlong *param_1)

{
  FUN_146e2d2f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146e2d2f0 FUN_146e2d2f0 body=89 status=ok
// SIG undefined FUN_146e2d2f0(void)

void FUN_146e2d2f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 146e2d349 FUN_146e2d349 body=243 status=ok
// SIG undefined FUN_146e2d349(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e2d349(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar2 = (ulonglong)param_2 - 1;
    auVar4._8_4_ = (int)lVar2;
    auVar4._0_8_ = lVar2;
    auVar4._12_4_ = (int)((ulonglong)lVar2 >> 0x20);
    uVar3 = 0;
    auVar6 = pmovsxbq(in_XMM1,0x302);
    auVar7 = pmovsxbq(in_XMM2,0x100);
    auVar4 = auVar4 ^ _DAT_149931e80;
    do {
      lVar2 = auVar4._0_8_;
      lVar5 = auVar4._8_8_;
      if ((bool)(~(lVar2 < (longlong)(uVar3 ^ auVar1._0_8_)) & 1)) {
        *(undefined4 *)(param_1 + uVar3 * 4) = 0x1ffffff;
      }
      auVar8._8_4_ = (int)uVar3;
      auVar8._0_8_ = uVar3;
      auVar8._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar8._8_8_ | auVar7._8_8_) ^ auVar1._8_8_) <= lVar5) {
        *(undefined4 *)(param_1 + 4 + uVar3 * 4) = 0x1ffffff;
      }
      auVar8 = (auVar8 | auVar6) ^ auVar1;
      if (auVar8._0_8_ <= lVar2) {
        *(undefined4 *)(param_1 + 8 + uVar3 * 4) = 0x1ffffff;
      }
      if (auVar8._8_8_ <= lVar5) {
        *(undefined4 *)(param_1 + 0xc + uVar3 * 4) = 0x1ffffff;
      }
      uVar3 = uVar3 + 4;
    } while (((ulonglong)param_2 + 3 & 0xfffffffffffffffc) != uVar3);
  }
  return;
}



// FUNCTION 146e2d43c FUN_146e2d43c body=132 status=ok
// SIG undefined FUN_146e2d43c(void)

void FUN_146e2d43c(longlong param_1,int param_2)

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



// FUNCTION 146e2d4c2 FUN_146e2d4c2 body=162 status=ok
// SIG undefined FUN_146e2d4c2(void)

void FUN_146e2d4c2(longlong *param_1,undefined4 param_2)

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
        goto LAB_146e2d540;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_146e2d540:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 146e2d564 FUN_146e2d564 body=63 status=ok
// SIG undefined FUN_146e2d564(void)

int FUN_146e2d564(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_146e2d43c(param_1,iVar1);
  }
  FUN_146e2d349((longlong)iVar1 * 4 + *param_1,1);
  return iVar1;
}



// FUNCTION 146e2d5bc FUN_146e2d5bc body=96 status=ok
// SIG undefined FUN_146e2d5bc(void)

void FUN_146e2d5bc(longlong param_1,int param_2)

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



// FUNCTION 146e2d61c FUN_146e2d61c body=132 status=ok
// SIG undefined FUN_146e2d61c(void)

void FUN_146e2d61c(longlong param_1,int param_2)

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



// FUNCTION 146e2d6a2 FUN_146e2d6a2 body=201 status=ok
// SIG undefined FUN_146e2d6a2(void)

void FUN_146e2d6a2(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar7 = (undefined8 *)FUN_14001cc68(0x38);
  *puVar7 = &PTR_LAB_149f5e410;
  puVar7[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x21);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)puVar7 + 0x21) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)puVar7 + 0x25) = uVar1;
  *(undefined4 *)((longlong)puVar7 + 0x29) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x2d) = uVar3;
  pcVar8 = FUN_146e2d76c;
  if (puVar7 + 1 == (undefined8 *)0x0) {
    pcVar8 = (code *)0x0;
  }
  puVar7[3] = uVar4;
  puVar7[4] = uVar5;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_149f45dc0;
  puVar6[10] = pcVar8;
  puVar6[0xc] = puVar7;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar6);
  return;
}



// FUNCTION 146e2d76c FUN_146e2d76c body=79 status=ok
// SIG undefined FUN_146e2d76c(void)

void FUN_146e2d76c(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  FUN_146e2193a(&local_18,param_1 + 2,*(undefined1 *)(param_1 + 5));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2d7c6 FUN_146e2d7c6 body=29 status=ok
// SIG undefined FUN_146e2d7c6(void)

void FUN_146e2d7c6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2d7e4 FUN_146e2d7e4 body=57 status=ok
// SIG undefined FUN_146e2d7e4(void)

undefined8 * FUN_146e2d7e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e410;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2d81e FUN_146e2d81e body=201 status=ok
// SIG undefined FUN_146e2d81e(void)

void FUN_146e2d81e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar7 = (undefined8 *)FUN_14001cc68(0x38);
  *puVar7 = &PTR_LAB_149f5e430;
  puVar7[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1e);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x22);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x26);
  *(undefined4 *)((longlong)puVar7 + 0x22) = *(undefined4 *)((longlong)param_2 + 0x1a);
  *(undefined4 *)((longlong)puVar7 + 0x26) = uVar1;
  *(undefined4 *)((longlong)puVar7 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x2e) = uVar3;
  pcVar8 = FUN_146e2d8e8;
  if (puVar7 + 1 == (undefined8 *)0x0) {
    pcVar8 = (code *)0x0;
  }
  puVar7[3] = uVar4;
  puVar7[4] = uVar5;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_149f45dc0;
  puVar6[10] = pcVar8;
  puVar6[0xc] = puVar7;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar6);
  return;
}



// FUNCTION 146e2d8e8 FUN_146e2d8e8 body=83 status=ok
// SIG undefined FUN_146e2d8e8(void)

void FUN_146e2d8e8(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  FUN_146e21a38(&local_18,param_1 + 2,*(undefined1 *)(param_1 + 5),
                *(undefined1 *)((longlong)param_1 + 0x29));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2d946 FUN_146e2d946 body=29 status=ok
// SIG undefined FUN_146e2d946(void)

void FUN_146e2d946(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2d964 FUN_146e2d964 body=57 status=ok
// SIG undefined FUN_146e2d964(void)

undefined8 * FUN_146e2d964(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e430;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2d99e FUN_146e2d99e body=201 status=ok
// SIG undefined FUN_146e2d99e(void)

void FUN_146e2d99e(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar7 = (undefined8 *)FUN_14001cc68(0x38);
  *puVar7 = &PTR_LAB_149f5e450;
  puVar7[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar7 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x1d);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x21);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x25);
  *(undefined4 *)((longlong)puVar7 + 0x21) = *(undefined4 *)((longlong)param_2 + 0x19);
  *(undefined4 *)((longlong)puVar7 + 0x25) = uVar1;
  *(undefined4 *)((longlong)puVar7 + 0x29) = uVar2;
  *(undefined4 *)((longlong)puVar7 + 0x2d) = uVar3;
  pcVar8 = FUN_146e2da68;
  if (puVar7 + 1 == (undefined8 *)0x0) {
    pcVar8 = (code *)0x0;
  }
  puVar7[3] = uVar4;
  puVar7[4] = uVar5;
  *(undefined2 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined2 *)(puVar6 + 8) = 1;
  *puVar6 = &PTR_FUN_149f45dc0;
  puVar6[10] = pcVar8;
  puVar6[0xc] = puVar7;
  puVar6[0x12] = 0;
  puVar6[0x14] = 0;
  *(undefined1 *)(puVar6 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar6);
  return;
}



// FUNCTION 146e2da68 FUN_146e2da68 body=79 status=ok
// SIG undefined FUN_146e2da68(void)

void FUN_146e2da68(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = *(undefined4 *)(param_1 + 1);
  FUN_146e21e6a(&local_18,param_1 + 2,*(undefined1 *)(param_1 + 5));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2dac2 FUN_146e2dac2 body=29 status=ok
// SIG undefined FUN_146e2dac2(void)

void FUN_146e2dac2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2dae0 FUN_146e2dae0 body=57 status=ok
// SIG undefined FUN_146e2dae0(void)

undefined8 * FUN_146e2dae0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e450;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2db1a FUN_146e2db1a body=217 status=ok
// SIG undefined FUN_146e2db1a(void)

void FUN_146e2db1a(longlong param_1,undefined8 *param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  
  puVar14 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar15 = (undefined8 *)FUN_14001cc68(0x58,8);
  *puVar15 = &PTR_LAB_149f5e470;
  puVar15[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar15 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar3 = *(undefined4 *)(param_2 + 5);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar5 = *(undefined4 *)(param_2 + 6);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 9);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(puVar15 + 9) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)puVar15 + 0x4c) = uVar9;
  *(undefined4 *)(puVar15 + 10) = uVar10;
  *(undefined4 *)((longlong)puVar15 + 0x54) = uVar11;
  *(undefined4 *)(puVar15 + 7) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar6;
  *(undefined4 *)(puVar15 + 8) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0x44) = uVar8;
  *(undefined4 *)(puVar15 + 5) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar2;
  *(undefined4 *)(puVar15 + 6) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar4;
  puVar16 = &LAB_146e2dbf4;
  if (puVar15 + 1 == (undefined8 *)0x0) {
    puVar16 = (undefined1 *)0x0;
  }
  puVar15[3] = uVar12;
  puVar15[4] = uVar13;
  *(undefined2 *)(puVar14 + 1) = 0;
  puVar14[2] = 0;
  puVar14[3] = 0;
  puVar14[4] = 0;
  puVar14[5] = 0;
  *(undefined2 *)(puVar14 + 8) = 1;
  *puVar14 = &PTR_FUN_149f45dc0;
  puVar14[10] = puVar16;
  puVar14[0xc] = puVar15;
  puVar14[0x12] = 0;
  puVar14[0x14] = 0;
  *(undefined1 *)(puVar14 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar14);
  return;
}



// FUNCTION 146e2dc04 FUN_146e2dc04 body=29 status=ok
// SIG undefined FUN_146e2dc04(void)

void FUN_146e2dc04(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2dc22 FUN_146e2dc22 body=57 status=ok
// SIG undefined FUN_146e2dc22(void)

undefined8 * FUN_146e2dc22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e470;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2dc5c FUN_146e2dc5c body=739 status=ok
// SIG undefined FUN_146e2dc5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e2dc5c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  
  if ((longlong)(int)param_1[1] != 0) {
    plVar9 = (longlong *)*param_1;
    plVar1 = plVar9 + (int)param_1[1];
    do {
      if ((*plVar9 != 0) && (plVar5 = (longlong *)FUN_14005b71c(), plVar5 != (longlong *)0x0)) {
        if ((*(byte *)((longlong)plVar5 + 0xc) < 3) ||
           (*(char *)((longlong)param_1 + 0x3c) != '\x01')) {
          if (*(byte *)((longlong)plVar5 + 0xc) < 2) {
            plVar5 = (longlong *)0x0;
          }
          if ((plVar5 != (longlong *)0x0) &&
             (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10) ==
              '\x01')) {
            FUN_1400d2fee(*(undefined8 *)(param_1[2] + 0x9c8),plVar5,4);
            FUN_1456cc230(*(undefined8 *)(*(longlong *)(param_1[2] + 0x9c8) + 0x2c8),plVar5,1);
          }
          FUN_1429e2b05(plVar5,param_1 + 3,(int)param_1[6],*(undefined4 *)((longlong)param_1 + 0x34)
                        ,(int)param_1[7],0x3f800000,*(undefined1 *)((longlong)param_1 + 0x45),
                        (int)param_1[9],*(undefined4 *)((longlong)param_1 + 0x4c));
        }
        else {
          lVar2 = *(longlong *)(param_1[2] + 0x9c8);
          if (*(int *)(lVar2 + 0x518) != *(int *)(lVar2 + 0x544)) {
            uVar3 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
                    -0x7a143595;
            uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
            lVar6 = lVar2 + 0x548;
            if (*(longlong *)(lVar2 + 0x550) != 0) {
              lVar6 = *(longlong *)(lVar2 + 0x550);
            }
            iVar4 = *(int *)(lVar6 + (ulonglong)
                                     (*(int *)(lVar2 + 0x558) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
            if (iVar4 != -1) {
              do {
                lVar6 = *(longlong *)(lVar2 + 0x510) + (longlong)iVar4 * 0x20;
                if (*(longlong **)(*(longlong *)(lVar2 + 0x510) + (longlong)iVar4 * 0x20) == plVar5)
                {
                  if ((lVar6 + 8U & 0xfffffffffffffff7) != 0) {
                    iVar4 = *(int *)(lVar6 + 0x10);
                    fVar11 = 1.0;
                    if (DAT_14c75f2f4 != '\0') {
                      fVar11 = 1.0 / (float)iVar4;
                    }
                    if ((longlong)iVar4 != 0) {
                      lVar6 = *(longlong *)(lVar6 + 8);
                      lVar7 = 0;
                      do {
                        lVar8 = *(longlong *)(lVar6 + lVar7);
                        fVar10 = (float)FUN_1429e2b05(lVar8,param_1 + 3,(int)param_1[6],
                                                      *(undefined4 *)((longlong)param_1 + 0x34),
                                                      (int)param_1[7],fVar11,
                                                      *(undefined1 *)((longlong)param_1 + 0x45),
                                                      (int)param_1[9],
                                                      *(undefined4 *)((longlong)param_1 + 0x4c));
                        if (0.0 <= *(float *)(param_1 + 8)) {
                          fVar10 = fVar10 * *(float *)(param_1 + 8);
                        }
                        else {
                          fVar10 = fVar10 * _DAT_14c75f2f0 * *(float *)((longlong)param_1 + 0x34);
                        }
                        if (0.0 < fVar10) {
                          if (*(byte *)(lVar8 + 0xc) < 3) {
                            lVar8 = 0;
                          }
                          FUN_14172ab30(lVar2 + 0x448,lVar8,fVar10);
                        }
                        lVar7 = lVar7 + 8;
                      } while ((longlong)iVar4 << 3 != lVar7);
                    }
                  }
                  break;
                }
                iVar4 = *(int *)(lVar6 + 0x18);
              } while (iVar4 != -1);
            }
          }
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar1);
  }
  return;
}



// FUNCTION 146e2df40 FUN_146e2df40 body=193 status=ok
// SIG undefined FUN_146e2df40(void)

void FUN_146e2df40(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar3 = (undefined8 *)FUN_14001cc68(0x28);
  *puVar3 = &PTR_LAB_149f5e490;
  puVar3[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = param_2[3];
  puVar4 = &LAB_146e2e002;
  if (puVar3 + 1 == (undefined8 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  puVar3[3] = param_2[2];
  puVar3[4] = uVar1;
  *(undefined2 *)(puVar2 + 1) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined2 *)(puVar2 + 8) = 1;
  *puVar2 = &PTR_FUN_149f45dc0;
  puVar2[10] = puVar4;
  puVar2[0xc] = puVar3;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar2);
  return;
}



// FUNCTION 146e2e012 FUN_146e2e012 body=29 status=ok
// SIG undefined FUN_146e2e012(void)

void FUN_146e2e012(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2e030 FUN_146e2e030 body=57 status=ok
// SIG undefined FUN_146e2e030(void)

undefined8 * FUN_146e2e030(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e490;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2e06a FUN_146e2e06a body=102 status=ok
// SIG undefined FUN_146e2e06a(void)

void FUN_146e2e06a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar4) != 0) {
        plVar3 = (longlong *)FUN_14005b71c();
        if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
          *(double *)(*(longlong *)(*plVar3 + 0x410) + (longlong)(int)plVar3[1] * 8) =
               (double)*(float *)(param_1 + 2);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146e2e0d0 FUN_146e2e0d0 body=193 status=ok
// SIG undefined FUN_146e2e0d0(void)

void FUN_146e2e0d0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar3 = (undefined8 *)FUN_14001cc68(0x28);
  *puVar3 = &PTR_LAB_149f5e4b0;
  puVar3[1] = *param_2;
  *param_2 = 0;
  *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  uVar1 = param_2[3];
  puVar4 = &LAB_146e2e192;
  if (puVar3 + 1 == (undefined8 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  puVar3[3] = param_2[2];
  puVar3[4] = uVar1;
  *(undefined2 *)(puVar2 + 1) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined2 *)(puVar2 + 8) = 1;
  *puVar2 = &PTR_FUN_149f45dc0;
  puVar2[10] = puVar4;
  puVar2[0xc] = puVar3;
  puVar2[0x12] = 0;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x1a) = 0;
  FUN_1406e6496(param_1 + 0x70,puVar2);
  return;
}



// FUNCTION 146e2e1a2 FUN_146e2e1a2 body=29 status=ok
// SIG undefined FUN_146e2e1a2(void)

void FUN_146e2e1a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 146e2e1c0 FUN_146e2e1c0 body=57 status=ok
// SIG undefined FUN_146e2e1c0(void)

undefined8 * FUN_146e2e1c0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f5e4b0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2e1fa FUN_146e2e1fa body=102 status=ok
// SIG undefined FUN_146e2e1fa(void)

void FUN_146e2e1fa(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar4) != 0) {
        plVar3 = (longlong *)FUN_14005b71c();
        if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
          *(double *)(*(longlong *)(*plVar3 + 0x428) + (longlong)(int)plVar3[1] * 8) =
               (double)*(float *)(param_1 + 2);
        }
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar4);
  }
  return;
}



// FUNCTION 146e2e260 FUN_146e2e260 body=112 status=ok
// SIG undefined FUN_146e2e260(void)

void FUN_146e2e260(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf0,0x10);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf0)) {
      uVar2 = uVar1 / 0xf0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf0,0x10);
  }
  return;
}



// FUNCTION 146e2e2d0 FUN_146e2e2d0 body=188 status=ok
// SIG undefined FUN_146e2e2d0(void)

longlong FUN_146e2e2d0(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
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
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_146e2e36f;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_146e2e38e(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_146e2e36f:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146e2e38e FUN_146e2e38e body=281 status=ok
// SIG undefined FUN_146e2e38e(void)

undefined4 * FUN_146e2e38e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146d8bd3c(param_1,local_48);
  FUN_146e2e4a8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_146d8be2a(param_1,param_3,local_40,local_48);
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
      FUN_146d8b9a4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2e4a8 FUN_146e2e4a8 body=154 status=ok
// SIG undefined FUN_146e2e4a8(void)

undefined4 * FUN_146e2e4a8(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined4 *)*param_1;
  FUN_14627166e(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2e544 FUN_146e2e544 body=190 status=ok
// SIG undefined FUN_146e2e544(void)

longlong FUN_146e2e544(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_28;
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
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_146e2e5e5;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_146e2e604(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_146e2e5e5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 146e2e604 FUN_146e2e604 body=294 status=ok
// SIG undefined FUN_146e2e604(void)

undefined4 *
FUN_146e2e604(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
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
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14014832a(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 2) = 0;
  *(undefined8 *)(local_50 + 4) = 0;
  local_50[6] = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140147e3a(param_1,param_3,local_50,local_58);
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
      local_50[7] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[6] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
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
      FUN_140148e72(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2e72c FUN_146e2e72c body=76 status=ok
// SIG undefined FUN_146e2e72c(void)

void FUN_146e2e72c(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a0744(lVar1,*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) == param_2) {
    return;
  }
  FUN_146caedda(param_1,param_2);
  return;
}



// FUNCTION 146e2e77a FUN_146e2e77a body=48 status=ok
// SIG undefined FUN_146e2e77a(void)

void FUN_146e2e77a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e7aa FUN_146e2e7aa body=48 status=ok
// SIG undefined FUN_146e2e7aa(void)

void FUN_146e2e7aa(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e7da FUN_146e2e7da body=48 status=ok
// SIG undefined FUN_146e2e7da(void)

void FUN_146e2e7da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e80a FUN_146e2e80a body=48 status=ok
// SIG undefined FUN_146e2e80a(void)

void FUN_146e2e80a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e83a FUN_146e2e83a body=48 status=ok
// SIG undefined FUN_146e2e83a(void)

void FUN_146e2e83a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e86a FUN_146e2e86a body=48 status=ok
// SIG undefined FUN_146e2e86a(void)

void FUN_146e2e86a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,0x10);
  }
  return;
}



// FUNCTION 146e2e89a FUN_146e2e89a body=353 status=ok
// SIG undefined FUN_146e2e89a(void)

void FUN_146e2e89a(undefined8 *param_1)

{
  double dVar1;
  int iVar2;
  double dVar3;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5e4d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x25] = 0x100000000c;
  param_1[0x26] = 0x40f86a0000000000;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined2 *)((longlong)param_1 + 0x181) = 0x101;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  iVar2 = DAT_14c75efb8;
  dVar3 = (double)DAT_14c75efb8;
  param_1[0x19] = dVar3;
  dVar1 = 1.0;
  if (0 < iVar2) {
    dVar1 = 1.0 / dVar3;
  }
  param_1[0x1a] = dVar1;
  *(undefined4 *)(param_1 + 0x1b) = DAT_14c75efbc;
  *(undefined4 *)((longlong)param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0x1c) = DAT_14c75efc4;
  return;
}



// FUNCTION 146e2e9fc FUN_146e2e9fc body=38 status=ok
// SIG undefined FUN_146e2e9fc(void)

undefined8 FUN_146e2e9fc(undefined8 param_1,int param_2)

{
  FUN_140c0bb2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146e2ea3e FUN_146e2ea3e body=896 status=ok
// SIG undefined FUN_146e2ea3e(void)

void FUN_146e2ea3e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  while( true ) {
    FUN_145784ef0(param_1);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    iVar2 = *(int *)(param_2 + 0x18);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c) < iVar2) {
      FUN_14008b684(param_1 + 0x10);
    }
    iVar2 = *(int *)(param_2 + 0x28);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x2c) < iVar2) {
      FUN_145784e0c(param_1 + 0x20);
    }
    iVar2 = *(int *)(param_2 + 0x38);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x3c) < iVar2) {
      FUN_140c108c0(param_1 + 0x30);
    }
    uVar5 = (longlong)*(int *)(param_2 + 0x58) - (longlong)*(int *)(param_2 + 0x84);
    uVar4 = (uint)uVar5;
    if ((uint)(*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x84)) < uVar4) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar5);
      }
      FUN_146ded982(param_1 + 0x50,uVar5 & 0xffffffff);
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
      if ((*(int *)(param_1 + 0x98) == 0) || (*(int *)(param_1 + 0x98) < iVar2)) {
        *(int *)(param_1 + 0x98) = iVar2;
        FUN_146dedb2e(param_1 + 0x50);
      }
    }
    iVar2 = *(int *)(param_2 + 0xa8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xac) < iVar2) {
      FUN_14481578e(param_1 + 0xa0);
    }
    iVar2 = *(int *)(param_2 + 0xb8);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0xbc) < iVar2) {
      FUN_14481578e(param_1 + 0xb0);
    }
    iVar2 = *(int *)(param_2 + 0x110);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x114) < iVar2) {
      FUN_140c108c0(param_1 + 0x108);
    }
    iVar2 = *(int *)(param_2 + 0x120);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x124) < iVar2) {
      FUN_145784e7e(param_1 + 0x118);
    }
    iVar2 = *(int *)(param_2 + 400);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x194) < iVar2) {
      FUN_14481578e(param_1 + 0x188);
    }
    iVar2 = *(int *)(param_2 + 0x1a0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1a4) < iVar2) {
      FUN_14481578e(param_1 + 0x198);
    }
    iVar2 = *(int *)(param_2 + 0x1b0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1b4) < iVar2) {
      FUN_146dedcd2(param_1 + 0x1a8);
    }
    iVar2 = *(int *)(param_2 + 0x1c0);
    if (iVar2 < 0) break;
    if (*(int *)(param_1 + 0x1c4) < iVar2) {
      FUN_14481578e(param_1 + 0x1b8);
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
    lVar3 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      if (lVar3 == 0) {
        return;
      }
      FUN_140c0bb2c(lVar3);
      FUN_1400020a8(lVar3);
      return;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8,0x10);
      FUN_146e2e89a(lVar3);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      *(longlong *)(param_1 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_140c0bb2c(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(param_1 + 0xc0);
      }
    }
    param_2 = *(longlong *)(param_2 + 0xc0);
    param_1 = lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 146e2edc0 FUN_146e2edc0 body=608 status=ok
// SIG undefined FUN_146e2edc0(void)

void FUN_146e2edc0(longlong param_1,longlong param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_3;
  cVar1 = FUN_146e2f532(&local_40,param_3,0);
  if (cVar1 == '\0') {
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  else {
    if (ABS(*(double *)(param_1 + 0x140)) <= 1e-08) {
      QueryPerformanceCounter(&local_30);
      *(double *)(param_1 + 0x140) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    cVar1 = FUN_146e2f616(param_2 + 0x10,param_1 + 0x10,&local_34,&local_40);
    if ((((((cVar1 != '\0') &&
           (cVar1 = FUN_146e2f68c(param_2 + 0x20,param_1 + 0x20,&local_34,&local_40), cVar1 != '\0')
           ) && (cVar1 = FUN_146e2f702(param_2 + 0x30,param_1 + 0x30,&local_34,&local_40),
                cVar1 != '\0')) &&
         ((cVar1 = FUN_146e2f7e2(param_2 + 0xa0,param_1 + 0xa0,&local_34,&local_40), cVar1 != '\0'
          && (cVar1 = FUN_146e2f7e2(param_2 + 0xb0,param_1 + 0xb0,&local_34,&local_40),
             cVar1 != '\0')))) &&
        (((cVar1 = FUN_146e2f702(param_2 + 0x108,param_1 + 0x108,&local_34,&local_40), cVar1 != '\0'
          && ((cVar1 = FUN_146e2f880(param_2 + 0x118,param_1 + 0x118,&local_34,&local_40),
              cVar1 != '\0' &&
              (cVar1 = FUN_146e2f7e2(param_2 + 0x188,param_1 + 0x188,&local_34,&local_40),
              cVar1 != '\0')))) &&
         (cVar1 = FUN_146e2f7e2(param_2 + 0x198,param_1 + 0x198,&local_34,&local_40), cVar1 != '\0')
         ))) && (((cVar1 = FUN_146e2f7e2(param_2 + 0x1b8,param_1 + 0x1b8,&local_34,&local_40),
                  cVar1 != '\0' &&
                  (cVar1 = FUN_146e2f940(param_2 + 0x1a8,param_1 + 0x1a8,&local_34,&local_40),
                  cVar1 != '\0')) &&
                 ((*(longlong *)(param_1 + 0xc0) == 0 ||
                  (FUN_146e2edc0(*(longlong *)(param_1 + 0xc0),*(undefined8 *)(param_2 + 0xc0),
                                 param_3), *(char *)(*(longlong *)(param_1 + 0xc0) + 0xc) == '\x01')
                  ))))) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e2f034 FUN_146e2f034 body=79 status=ok
// SIG undefined FUN_146e2f034(void)

undefined8 * FUN_146e2f034(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_140990982(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f084 FUN_146e2f084 body=69 status=ok
// SIG undefined FUN_146e2f084(void)

void FUN_146e2f084(void)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &local_10;
  local_10 = in_stack_00000028;
  FUN_146e30506();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f0ca FUN_146e2f0ca body=253 status=ok
// SIG undefined FUN_146e2f0ca(void)

void FUN_146e2f0ca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_68,param_3,param_4);
  local_c8 = local_38;
  local_d0 = local_60;
  local_e8 = &local_98;
  local_98 = 0x7fefffffffffffff;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0xffefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_d8 = local_68;
  local_e0 = &local_a0;
  FUN_146e31ef8(param_1,param_2,&local_68,&local_b8);
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f1c8 FUN_146e2f1c8 body=62 status=ok
// SIG undefined FUN_146e2f1c8(void)

void FUN_146e2f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_146e340a6(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f208 FUN_146e2f208 body=56 status=ok
// SIG undefined FUN_146e2f208(void)

undefined8 * FUN_146e2f208(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x1d8,0x10);
  FUN_146e3671c(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146e2f246 FUN_146e2f246 body=747 status=ok
// SIG undefined FUN_146e2f246(void)

void FUN_146e2f246(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  double *pdVar2;
  uint uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar7 < 0x28) {
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    FUN_140d03e72(param_2);
  }
  FUN_146e08b02(param_2,param_1 + 0x10);
  FUN_146e36cdd(param_2,param_1 + 0x20);
  FUN_146c9c284(param_2,param_1 + 0x30);
  FUN_146c9c284(param_2,param_1 + 0x108);
  iVar7 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0x1a < iVar7) {
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      local_58 = local_58 & 0xffffffff00000000;
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar3 = (uint)(float)local_58;
      if (1 < (uint)(float)local_58) {
        FUN_14572541c(param_2);
        uVar3 = (uint)(float)local_58;
      }
    }
    else {
      uVar3 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    if (uVar3 == 0) goto LAB_146e2f343;
  }
  FUN_146def3e6(param_1 + 0x118,param_2);
LAB_146e2f343:
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x128),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 300),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 300) = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  pdVar2 = (double *)(param_1 + 0x130);
  if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
    local_58 = CONCAT44(local_58._4_4_,(float)*pdVar2);
    puVar4 = (ulonglong *)param_2[1];
    puVar5 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar5) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_58);
      }
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar5;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *pdVar2 = (double)(float)local_58;
    }
  }
  else {
    pdVar6 = *(double **)param_2[1];
    if ((double *)((undefined8 *)param_2[1])[1] < pdVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
      }
      else {
        thunk_FUN_146821949(param_2,pdVar2);
      }
    }
    else {
      *pdVar2 = *pdVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x181) = 1;
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined1 *)(param_1 + 0x180) = 0;
      *(undefined1 *)(param_1 + 0x40) = 0;
      *(undefined1 *)(param_1 + 0x182) = 1;
      *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f532 FUN_146e2f532 body=226 status=ok
// SIG undefined FUN_146e2f532(void)

ulonglong FUN_146e2f532(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x14c);
      *(int *)(lVar2 + 0x14c) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_20);
        if (1e-08 < ABS(*(double *)(lVar2 + 0x140))) {
          if ((double)DAT_14c75efd8 <
              ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar2 + 0x140))
          {
            uVar3 = 0;
          }
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x14c) = 0;
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,param_3 < param_2 || param_2 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e2f616 FUN_146e2f616 body=118 status=ok
// SIG undefined FUN_146e2f616(void)

undefined4 FUN_146e2f616(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e2f532(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e2f9de(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x70;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e2f68c FUN_146e2f68c body=118 status=ok
// SIG undefined FUN_146e2f68c(void)

undefined4 FUN_146e2f68c(longlong param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 8);
  iVar3 = 0;
  if (iVar4 < *(int *)(param_1 + 8)) {
    iVar3 = 0;
    do {
      cVar1 = FUN_146e2f532(param_4,*param_3,iVar3);
      if (cVar1 == '\0') break;
      FUN_146e2fa60(param_1,param_2,iVar4);
      iVar3 = iVar3 + 0x48;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 8));
  }
  iVar4 = *param_3;
  if (0 < iVar4) {
    iVar2 = iVar4 - iVar3;
    if (iVar4 < iVar3) {
      iVar2 = 0;
    }
    *param_3 = iVar2;
  }
  return CONCAT31((int3)((uint)*(int *)(param_2 + 8) >> 8),
                  *(int *)(param_2 + 8) == *(int *)(param_1 + 8));
}



// FUNCTION 146e2f702 FUN_146e2f702 body=224 status=ok
// SIG undefined FUN_146e2f702(void)

undefined4 FUN_146e2f702(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  lVar16 = (longlong)(int)param_2[1];
  uVar17 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar16 * 0x38;
    uVar17 = 0;
    do {
      cVar11 = FUN_146e2f532(param_4,*param_3,uVar17 & 0xffffffff);
      if (cVar11 == '\0') break;
      lVar15 = *param_1;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_140c11858(param_2,iVar5);
      }
      lVar15 = lVar15 + lVar13;
      lVar6 = *param_2;
      lVar14 = (longlong)iVar5 * 0x38;
      *(undefined4 *)(lVar6 + lVar14) = *(undefined4 *)(uVar17 + lVar15);
      *(undefined8 *)(lVar6 + 0x18 + lVar14) = *(undefined8 *)(uVar17 + 0x18 + lVar15);
      puVar1 = (undefined8 *)(uVar17 + 8 + lVar15);
      uVar10 = puVar1[1];
      puVar2 = (undefined8 *)(lVar6 + 8 + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar6 + 0x30 + lVar14) = *(undefined8 *)(uVar17 + 0x30 + lVar15);
      puVar3 = (undefined4 *)(uVar17 + 0x20 + lVar15);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(lVar6 + 0x20 + lVar14);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar16 = lVar16 + 1;
      uVar17 = uVar17 + 0x38;
    } while (lVar16 < (int)param_1[1]);
  }
  iVar5 = *param_3;
  if (0 < iVar5) {
    iVar12 = iVar5 - (int)uVar17;
    if (iVar5 < (int)uVar17) {
      iVar12 = 0;
    }
    *param_3 = iVar12;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e2f7e2 FUN_146e2f7e2 body=157 status=ok
// SIG undefined FUN_146e2f7e2(void)

undefined4 FUN_146e2f7e2(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e2f532(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar6 * 4);
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e2f880 FUN_146e2f880 body=191 status=ok
// SIG undefined FUN_146e2f880(void)

undefined4 FUN_146e2f880(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar12 = (longlong)(int)param_2[1];
  iVar11 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar13 = lVar12 * 0x18;
    iVar11 = 0;
    do {
      cVar9 = FUN_146e2f532(param_4,*param_3,iVar11);
      if (cVar9 == '\0') break;
      lVar4 = *param_1;
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140c110b2(param_2,iVar3);
      }
      lVar5 = *param_2;
      *(undefined8 *)(lVar5 + 0x10 + (longlong)iVar3 * 0x18) =
           *(undefined8 *)(lVar4 + 0x10 + lVar13);
      puVar1 = (undefined4 *)(lVar4 + lVar13);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + (longlong)iVar3 * 0x18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      iVar11 = iVar11 + 0x14;
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar12 < (int)param_1[1]);
  }
  iVar3 = *param_3;
  if (0 < iVar3) {
    iVar10 = iVar3 - iVar11;
    if (iVar3 < iVar11) {
      iVar10 = 0;
    }
    *param_3 = iVar10;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e2f940 FUN_146e2f940 body=157 status=ok
// SIG undefined FUN_146e2f940(void)

undefined4 FUN_146e2f940(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_146e2f532(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1400232c6(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6 * 8);
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 146e2f9de FUN_146e2f9de body=129 status=ok
// SIG undefined FUN_146e2f9de(void)

void FUN_146e2f9de(longlong *param_1,longlong *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_3 * 0x70 + *param_1;
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14008b9bc(param_2,iVar3);
  }
  lVar5 = (longlong)iVar3 * 0x70 + *param_2;
  lVar6 = 0x18;
  do {
    *(undefined8 *)(lVar5 + -8 + lVar6) = *(undefined8 *)(lVar7 + -8 + lVar6);
    puVar1 = (undefined8 *)(lVar7 + -0x18 + lVar6);
    uVar4 = puVar1[1];
    puVar2 = (undefined8 *)(lVar5 + -0x18 + lVar6);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    uVar4 = ((undefined8 *)(lVar7 + lVar6))[1];
    *(undefined8 *)(lVar5 + lVar6) = *(undefined8 *)(lVar7 + lVar6);
    ((undefined8 *)(lVar5 + lVar6))[1] = uVar4;
    *(undefined8 *)(lVar5 + 0x10 + lVar6) = *(undefined8 *)(lVar7 + 0x10 + lVar6);
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x78);
  uVar4 = *(undefined8 *)(lVar7 + 0x60);
  *(undefined8 *)(lVar5 + 0x65) = *(undefined8 *)(lVar7 + 0x65);
  *(undefined8 *)(lVar5 + 0x60) = uVar4;
  return;
}



// FUNCTION 146e2fa60 FUN_146e2fa60 body=79 status=ok
// SIG undefined FUN_146e2fa60(void)

void FUN_146e2fa60(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140c119c6(param_2,iVar1);
  }
  FUN_146e2fab0((longlong)iVar1 * 0x48 + *param_2,lVar2 + (longlong)param_3 * 0x48);
  return;
}



// FUNCTION 146e2fab0 FUN_146e2fab0 body=130 status=ok
// SIG undefined FUN_146e2fab0(void)

undefined8 * FUN_146e2fab0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[2] = param_2[2];
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar4 = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = param_2[5];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  uVar2 = param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 6,iVar1,0);
    FUN_140c10e76(param_1[6],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 146e2fb32 FUN_146e2fb32 body=593 status=ok
// SIG undefined FUN_146e2fb32(void)

void FUN_146e2fb32(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 *unaff_RBP;
  longlong lVar12;
  
  if ((*(char *)(param_1 + 0x40) == '\x01') && (*(int *)(param_1 + 0x44) != -1)) {
    plVar1 = (longlong *)(param_1 + 0x198);
    FUN_144a1a59e(plVar1,*(int *)(param_1 + 0x28) + 1,0);
    plVar2 = (longlong *)(param_1 + 0x1b8);
    FUN_144a1a59e(plVar2,*(undefined4 *)(param_1 + 0x28),0);
    plVar3 = (longlong *)(param_1 + 0x1a8);
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(int *)(param_1 + 0x1b4) < 0) {
      FUN_146dedcd2(plVar3,0);
    }
    if (param_2 == '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      if (0 < (longlong)iVar5) {
        unaff_RBP = (undefined1 *)0x0;
        lVar10 = 0;
        do {
          iVar6 = *(int *)(param_1 + 0x1b0);
          *(uint *)(param_1 + 0x1b0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1b4) < iVar6 + 1U) {
            FUN_1400232c6(plVar3,iVar6);
          }
          *(undefined1 **)(*plVar3 + (longlong)iVar6 * 8) = unaff_RBP;
          *(undefined4 *)(*plVar2 + lVar10 * 4) = 1;
          lVar10 = lVar10 + 1;
          unaff_RBP = &DAT_100000001 + (longlong)unaff_RBP;
        } while (iVar5 != lVar10);
      }
    }
    else {
      FUN_146e2fd84(param_1);
      FUN_146e2fec6(param_1);
    }
    FUN_146e2ff5c(param_1,(longlong)*(int *)(param_1 + 0x44) * 0x70 + *(longlong *)(param_1 + 0x10),
                  CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2) & 0xffffffff);
    **(undefined4 **)(param_1 + 0x198) = 0;
    iVar5 = *(int *)(param_1 + 0x28);
    if (0 < (longlong)iVar5) {
      lVar10 = 0;
      do {
        *(int *)(*plVar1 + 4 + lVar10 * 4) =
             *(int *)(*plVar2 + lVar10 * 4) + *(int *)(*plVar1 + lVar10 * 4);
        *(undefined4 *)(*plVar2 + lVar10 * 4) = *(undefined4 *)(*plVar1 + lVar10 * 4);
        lVar10 = lVar10 + 1;
      } while (iVar5 != lVar10);
    }
    plVar1 = (longlong *)(param_1 + 0x188);
    FUN_144a1a59e(plVar1,*(undefined4 *)
                          (*(longlong *)(param_1 + 0x198) +
                          (longlong)(*(int *)(param_1 + 0x1a0) + -1) * 4),0);
    iVar5 = *(int *)(param_1 + 0x1b0);
    if ((longlong)iVar5 != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1a8);
      lVar11 = 0;
      do {
        iVar6 = *(int *)(lVar10 + lVar11);
        iVar7 = *(int *)(lVar10 + 4 + lVar11);
        iVar8 = *(int *)(*plVar2 + (longlong)iVar6 * 4);
        *(int *)(*plVar2 + (longlong)iVar6 * 4) = iVar8 + 1;
        if (iVar6 == iVar7) {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar6;
        }
        else {
          *(int *)(*plVar1 + (longlong)iVar8 * 4) = iVar7;
          uVar9 = *(undefined4 *)(lVar10 + lVar11);
          lVar12 = (longlong)*(int *)(lVar10 + 4 + lVar11);
          iVar6 = *(int *)(*plVar2 + lVar12 * 4);
          *(int *)(*plVar2 + lVar12 * 4) = iVar6 + 1;
          *(undefined4 *)(*plVar1 + (longlong)iVar6 * 4) = uVar9;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar5 * 8 != lVar11);
    }
    if (param_2 != '\0') {
      iVar5 = *(int *)(param_1 + 0x28);
      if (0 < (longlong)iVar5) {
        lVar10 = 0;
        do {
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x40 + lVar10) = 0;
          lVar10 = lVar10 + 0x48;
        } while ((longlong)iVar5 * 0x48 != lVar10);
      }
      iVar5 = *(int *)(param_1 + 0x18);
      if (0 < (longlong)iVar5) {
        lVar10 = 0;
        do {
          pbVar4 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar10);
          *pbVar4 = *pbVar4 & 0xfd;
          lVar10 = lVar10 + 0x70;
        } while ((longlong)iVar5 * 0x70 - lVar10 != 0);
      }
    }
  }
  return;
}



// FUNCTION 146e2fd84 FUN_146e2fd84 body=322 status=ok
// SIG undefined FUN_146e2fd84(void)

void FUN_146e2fd84(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (0 < (longlong)iVar1) {
    uVar8 = 0;
    do {
      iVar5 = 0;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x40 + uVar8 * 0x48) == '\0') {
        lVar3 = *(longlong *)(param_1 + 0x198);
        iVar2 = *(int *)(lVar3 + uVar8 * 4);
        lVar6 = (longlong)iVar2;
        if (iVar2 < *(int *)(lVar3 + 4 + uVar8 * 4)) {
          lVar4 = *(longlong *)(param_1 + 0x188);
          iVar5 = 0;
          do {
            lVar7 = (longlong)*(int *)(lVar4 + lVar6 * 4);
            if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x40 + lVar7 * 0x48) == '\0') {
              if ((longlong)uVar8 < lVar7) {
                iVar2 = *(int *)(param_1 + 0x1b0);
                *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
                if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
                  FUN_1400232c6(param_1 + 0x1a8,iVar2);
                }
                *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) =
                     (lVar7 << 0x20) + uVar8;
                lVar4 = *(longlong *)(param_1 + 0x188);
                lVar3 = *(longlong *)(param_1 + 0x198);
              }
              iVar5 = iVar5 + (uint)(uVar8 != *(uint *)(lVar4 + lVar6 * 4));
            }
            lVar6 = lVar6 + 1;
          } while (lVar6 < *(int *)(lVar3 + 4 + uVar8 * 4));
        }
      }
      iVar2 = *(int *)(param_1 + 0x1b0);
      *(uint *)(param_1 + 0x1b0) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x1b4) < iVar2 + 1U) {
        FUN_1400232c6(param_1 + 0x1a8,iVar2);
      }
      *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar2 * 8) = (uVar8 << 0x20) + uVar8
      ;
      *(int *)(*(longlong *)(param_1 + 0x1b8) + uVar8 * 4) = iVar5 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 != (longlong)iVar1);
  }
  return;
}



// FUNCTION 146e2fec6 FUN_146e2fec6 body=149 status=ok
// SIG undefined FUN_146e2fec6(void)

void FUN_146e2fec6(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (0 < (longlong)iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      lVar6 = lVar3 * 0x70;
      bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
      if ((bVar1 & 1) != 0) {
        *(byte *)(lVar4 + lVar6 + 0x6c) =
             bVar1 & 0xfd |
             *(char *)(*(longlong *)(param_1 + 0x20) + 0x40 +
                      (longlong)*(int *)(lVar4 + lVar6 + 0x60) * 0x48) * '\x02';
        lVar4 = *(longlong *)(param_1 + 0x10);
        if ((*(byte *)(lVar4 + 0x6c + lVar6) & 2) != 0) {
          iVar5 = *(int *)(lVar6 + lVar4 + 0x68);
          while (iVar5 != -1) {
            lVar6 = (longlong)iVar5 * 0x70;
            bVar1 = *(byte *)(lVar4 + 0x6c + lVar6);
            if ((bVar1 & 2) != 0) break;
            *(byte *)(lVar4 + lVar6 + 0x6c) = bVar1 | 2;
            lVar4 = *(longlong *)(param_1 + 0x10);
            iVar5 = *(int *)(lVar4 + 0x68 + lVar6);
          }
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != iVar2);
  }
  return;
}



// FUNCTION 146e2ff5c FUN_146e2ff5c body=122 status=ok
// SIG undefined FUN_146e2ff5c(void)

void FUN_146e2ff5c(longlong param_1,longlong param_2,undefined4 param_3)

{
  if ((*(byte *)(param_2 + 0x6c) & 1) == 0) {
    FUN_146e2ff5c(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10))
    ;
    FUN_146e2ff5c(param_1,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_3);
    FUN_146e2ffd6(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2,(longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10),
                  param_2 + 0x30,(char)param_3);
  }
  return;
}



// FUNCTION 146e2ffd6 FUN_146e2ffd6 body=437 status=ok
// SIG undefined FUN_146e2ffd6(void)

void FUN_146e2ffd6(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,char param_6)

{
  longlong lVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  while( true ) {
    while( true ) {
      if (((param_6 != '\0') && ((*(byte *)(param_2 + 0x6c) & 2) == 0)) &&
         ((*(byte *)(param_4 + 0x6c) & 2) == 0)) {
        return;
      }
      lVar8 = 0;
      do {
        dVar4 = *(double *)(param_3 + lVar8 * 8);
        pdVar3 = (double *)(param_5 + 0x18 + lVar8 * 8);
        if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
          return;
        }
        dVar4 = *(double *)(param_5 + lVar8 * 8);
        pdVar3 = (double *)(param_3 + 0x18 + lVar8 * 8);
        if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
          return;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      if ((*(byte *)(param_2 + 0x6c) & 1) != 0) break;
      FUN_146e2ffd6(param_1,(longlong)*(int *)(param_2 + 0x60) * 0x70 +
                            *(longlong *)(param_1 + 0x10),param_2,param_4,param_5,param_6);
      param_3 = param_2 + 0x30;
      param_2 = (longlong)*(int *)(param_2 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
    }
    if ((*(byte *)(param_4 + 0x6c) & 1) != 0) break;
    FUN_146e2ffd6(param_1,param_2,param_3,
                  (longlong)*(int *)(param_4 + 0x60) * 0x70 + *(longlong *)(param_1 + 0x10),param_4,
                  param_6);
    param_5 = param_4 + 0x30;
    param_4 = (longlong)*(int *)(param_4 + 100) * 0x70 + *(longlong *)(param_1 + 0x10);
  }
  iVar5 = *(int *)(param_2 + 0x60);
  lVar11 = (longlong)iVar5;
  iVar6 = *(int *)(param_4 + 0x60);
  lVar10 = (longlong)iVar6;
  lVar8 = *(longlong *)(param_1 + 0x20);
  if (((param_6 == '\0') || (*(char *)(lVar8 + 0x40 + lVar11 * 0x48) != '\0')) ||
     (*(char *)(lVar8 + 0x40 + lVar10 * 0x48) == '\x01')) {
    lVar1 = lVar8 + lVar11 * 0x48;
    lVar8 = lVar8 + lVar10 * 0x48;
    lVar9 = -3;
    do {
      dVar4 = *(double *)(lVar1 + 0x18 + lVar9 * 8);
      pdVar3 = (double *)(lVar8 + 0x30 + lVar9 * 8);
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        return;
      }
      dVar4 = *(double *)(lVar8 + 0x18 + lVar9 * 8);
      pdVar3 = (double *)(lVar1 + 0x30 + lVar9 * 8);
      if (*pdVar3 <= dVar4 && dVar4 != *pdVar3) {
        return;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 0);
    iVar7 = *(int *)(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x1b0) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x1b4) < iVar7 + 1U) {
      FUN_1400232c6(param_1 + 0x1a8,iVar7);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar7 * 8) = CONCAT44(iVar6,iVar5);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1b8) + lVar11 * 4);
    *piVar2 = *piVar2 + 1;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x1b8) + lVar10 * 4);
    *piVar2 = *piVar2 + 1;
  }
  return;
}



// FUNCTION 146e3018c FUN_146e3018c body=259 status=ok
// SIG undefined FUN_146e3018c(void)

undefined8 FUN_146e3018c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e301f9:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e301f9;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e30290(param_3,(longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e30290 FUN_146e30290 body=178 status=ok
// SIG undefined FUN_146e30290(void)

undefined8 FUN_146e30290(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  double local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = (double)*(undefined8 *)(param_2 + 6);
  local_58[0] = *(double *)(param_2 + 2);
  local_58[1] = (double)*(undefined8 *)(param_2 + 4);
  local_58[5] = (double)*(undefined8 *)(param_2 + 0xc);
  local_58[3] = (double)*(undefined8 *)(param_2 + 8);
  local_58[4] = (double)*(undefined8 *)(param_2 + 10);
  lVar6 = param_1[4];
  lVar7 = 0;
  do {
    dVar2 = *(double *)(lVar6 + lVar7 * 8);
    if (local_58[lVar7 + 3] <= dVar2 && dVar2 != local_58[lVar7 + 3]) goto LAB_146e30322;
    pdVar1 = (double *)(lVar6 + 0x18 + lVar7 * 8);
    if (*pdVar1 <= local_58[lVar7] && local_58[lVar7] != *pdVar1) goto LAB_146e30322;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  uVar3 = *param_2;
  plVar5 = *(longlong **)*param_1;
  iVar4 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar4 + 1U) {
    FUN_1446f48e2(plVar5,iVar4);
  }
  lVar6 = *plVar5;
  *(undefined4 *)(lVar6 + (longlong)iVar4 * 4) = uVar3;
LAB_146e30322:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e30344 FUN_146e30344 body=172 status=ok
// SIG undefined FUN_146e30344(void)

undefined8 FUN_146e30344(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e303f0 FUN_146e303f0 body=131 status=ok
// SIG undefined FUN_146e303f0(void)

void FUN_146e303f0(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e30474(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e30474 FUN_146e30474 body=145 status=ok
// SIG undefined FUN_146e30474(void)

void FUN_146e30474(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e30506 FUN_146e30506 body=231 status=ok
// SIG undefined FUN_146e30506(void)

void FUN_146e30506(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_b8 = local_30;
  local_c0 = local_58;
  local_d8 = &local_90;
  local_90 = 0x7fefffffffffffff;
  local_88 = 0x7fefffffffffffff;
  local_80 = 0x7fefffffffffffff;
  local_78 = 0xffefffffffffffff;
  local_70 = 0xffefffffffffffff;
  local_68 = 0xffefffffffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_c8 = local_60;
  local_d0 = param_5;
  FUN_146e305ee(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e305ee FUN_146e305ee body=5257 status=ok
// SIG undefined FUN_146e305ee(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146e305ee(longlong param_1,double *param_2,undefined8 *param_3,undefined8 param_4,
                       undefined8 param_5,longlong *param_6,undefined1 (*param_7) [16],
                       double *param_8,longlong param_9)

{
  double *pdVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  double *pdVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar61;
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined4 uVar86;
  undefined4 uVar87;
  double dVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  double dVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar108;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined8 uVar122;
  undefined1 auStack_1238 [32];
  undefined8 local_1218;
  longlong *local_1210;
  undefined1 (*local_1208) [16];
  double *local_1200;
  longlong local_11f8;
  undefined1 local_11e8 [16];
  double local_11d8;
  double dStack_11d0;
  double local_11c8;
  undefined8 uStack_11c0;
  undefined1 local_11b8 [16];
  ulonglong local_11a8;
  uint uStack_11a0;
  uint uStack_119c;
  ulonglong local_1198;
  undefined8 uStack_1190;
  undefined8 local_1180 [9];
  longlong local_1138;
  double *local_1130;
  double local_1128 [4];
  double local_1108 [3];
  undefined8 local_10f0;
  double *local_10e8;
  undefined8 *local_10e0;
  double *local_10d8;
  undefined8 local_10d0;
  undefined8 local_10c8;
  undefined1 (*local_10c0) [16];
  double *local_10b8;
  undefined8 *local_10b0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  longlong *plVar10;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1238;
  local_1128[3] = 0.0;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar22 = *(undefined4 **)(param_1 + 0x108);
    puVar23 = puVar22 + (longlong)*(int *)(param_1 + 0x110) * 0xe;
    do {
      local_1128[0] = *param_8;
      local_1128[1] = param_8[1];
      local_1128[2] = param_8[2];
      local_10f0 = (longlong *)(*(double *)(puVar22 + 2) - *param_2);
      local_10e8 = (double *)(*(double *)(puVar22 + 4) - param_2[1]);
      local_10e0 = (undefined8 *)(*(double *)(puVar22 + 6) - param_2[2]);
      local_1108[0] = *(double *)(puVar22 + 8) - *param_2;
      local_1108[1] = *(double *)(puVar22 + 10) - param_2[1];
      local_1108[2] = *(double *)(puVar22 + 0xc) - param_2[2];
      lVar17 = 0;
      dVar88 = 1.79769313486232e+308;
      dVar38 = 0.0;
      do {
        if (*(char *)(param_9 + lVar17) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar17]) goto LAB_146e30832;
          dVar63 = 0.0;
          dVar26 = 1.79769313486232e+308;
          if (local_1108[lVar17] <= 0.0 && local_1108[lVar17] != 0.0) goto LAB_146e30832;
        }
        else {
          dVar63 = (double)(&local_10f0)[lVar17] * local_1128[lVar17];
          dVar26 = local_1128[lVar17] * local_1108[lVar17];
        }
        dVar27 = dVar26;
        if (dVar63 <= dVar26) {
          dVar27 = dVar63;
        }
        if (dVar38 <= dVar27) {
          dVar38 = dVar27;
        }
        if (dVar63 <= dVar26) {
          dVar63 = dVar26;
        }
        if (dVar63 <= dVar88) {
          dVar88 = dVar63;
        }
        if (dVar88 < dVar38) goto LAB_146e30832;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 3);
      if ((dVar38 <= (double)param_3[4]) && (0.0 <= dVar88)) {
        local_10f0._4_4_ = (undefined4)((ulonglong)local_10f0 >> 0x20);
        local_10f0 = (longlong *)CONCAT44(local_10f0._4_4_,*puVar22);
        local_1128[3] = dVar38;
        cVar6 = (**(code **)(*(longlong *)*param_6 + 0x10))
                          ((longlong *)*param_6,&local_10f0,param_3);
        if (cVar6 == '\0') goto LAB_146e31406;
      }
LAB_146e30832:
      puVar22 = puVar22 + 0xe;
    } while (puVar22 != puVar23);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_10f0 = param_6;
    local_10e8 = param_2;
    local_10e0 = param_3;
    local_10d8 = local_1128 + 3;
    local_10d0 = param_5;
    local_10c8 = param_4;
    local_10c0 = param_7;
    local_10b8 = param_8;
    local_10b0 = &param_9;
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      dVar38 = *(double *)(param_1 + 200);
      if ((((0.0 < dVar38) && (0 < (longlong)*(int *)(param_1 + 0xd8))) &&
          (0 < *(int *)(param_1 + 0xdc))) &&
         ((0 < *(int *)(param_1 + 0xe0) && (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x58)))))
      {
        dVar88 = *(double *)(param_1 + 0xd0);
        if (((dVar88 != 0.0) || (NAN(dVar88))) &&
           (dVar63 = (double)param_3[4], dVar63 <= 1.8446744073709552e+19)) {
          dVar26 = *param_2;
          uVar86 = 0;
          uVar87 = 0;
          dVar27 = param_2[1];
          dVar61 = ABS(param_2[2]);
          dVar100 = ABS(dVar26);
          if (ABS(dVar26) <= ABS(dVar27)) {
            dVar100 = ABS(dVar27);
          }
          if (dVar100 <= dVar61) {
            dVar100 = dVar61;
          }
          if (dVar100 < 9.223372036854776e+18 / dVar88) {
            pdVar18 = (double *)*param_3;
            dVar62 = pdVar18[1] * dVar63 + dVar27;
            dVar72 = *pdVar18 * dVar63 + dVar26;
            dVar61 = ABS(param_2[2] + pdVar18[2] * dVar63);
            dVar92 = ABS(dVar62);
            dVar100 = ABS(dVar72);
            if (dVar100 <= dVar92) {
              dVar100 = dVar92;
            }
            if (dVar100 <= dVar61) {
              dVar100 = dVar61;
            }
            if (dVar100 < 9.223372036854776e+18 / dVar88) {
              auVar89._8_8_ = 0;
              auVar89._0_8_ = ABS(dVar88 * dVar26) * 2.220446049250313e-16 + dVar88 * dVar26;
              auVar90 = roundpd(auVar89,auVar89,1);
              param_8 = (double *)(longlong)auVar90._0_8_;
              auVar91._8_8_ = 0;
              auVar91._0_8_ = ABS(dVar88 * dVar27) * 2.220446049250313e-16 + dVar88 * dVar27;
              auVar90 = roundpd(auVar91,auVar91,1);
              lVar13 = (longlong)auVar90._0_8_;
              dVar72 = dVar72 * dVar88;
              auVar73._8_8_ = 0;
              auVar73._0_8_ = ABS(dVar72) * 2.220446049250313e-16 + dVar72;
              auVar73 = roundpd(auVar73,auVar73,1);
              dVar62 = dVar62 * dVar88;
              auVar90._8_8_ = 0;
              auVar90._0_8_ = ABS(dVar62) * 2.220446049250313e-16 + dVar62;
              auVar90 = roundpd(auVar90,auVar90,1);
              lVar20 = (longlong)param_8 - (longlong)auVar73._0_8_;
              lVar17 = -lVar20;
              if (lVar17 < 0) {
                lVar17 = lVar20;
              }
              lVar21 = lVar13 - (longlong)auVar90._0_8_;
              lVar20 = -lVar21;
              if (lVar20 < 0) {
                lVar20 = lVar21;
              }
              if ((ulonglong)(lVar20 + lVar17) <= (ulonglong)(longlong)*(int *)(param_1 + 0xd8)) {
                local_1130 = local_1108;
                local_1108[0] = 0.0;
                local_1108[1] = 0.0;
                auVar76._0_8_ = dVar27 - (double)lVar13 * dVar38;
                auVar76._8_8_ = 0;
                dVar26 = dVar26 - (double)(longlong)param_8 * dVar38;
                dVar27 = dVar63 * pdVar18[1] + auVar76._0_8_;
                dVar72 = *pdVar18 * dVar63 + dVar26;
                dVar100 = dVar72 - dVar26;
                dVar63 = dVar27 - auVar76._0_8_;
                dVar62 = ABS(dVar100);
                dVar61 = ABS(dVar63);
                local_1138 = param_1;
                if ((9.99999993922529e-09 < dVar62) || (9.99999993922529e-09 < dVar61)) {
                  dVar72 = ((double)(longlong)param_8 * dVar38 + dVar72) * dVar88;
                  auVar52._0_8_ = ABS(dVar72) * 2.220446049250313e-16 + dVar72;
                  auVar52._8_8_ = 0;
                  auVar73 = roundpd(auVar52,auVar52,1);
                  dVar88 = ((double)lVar13 * dVar38 + dVar27) * dVar88;
                  auVar110._8_8_ = 0;
                  auVar110._0_8_ = ABS(dVar88) * 2.220446049250313e-16 + dVar88;
                  auVar90 = roundpd(auVar110,auVar110,1);
                  uVar9 = -(uint)(dVar100 < 0.0) | 1;
                  uVar7 = -(uint)(dVar63 < 0.0) | 1;
                  if (dVar61 <= dVar62) {
                    local_11c8 = (double)(int)uVar9;
                    dVar88 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar61) &
                                      (ulonglong)((dVar100 * local_11c8) / dVar63) |
                                     ~-(ulonglong)(9.99999993922529e-09 < dVar61) &
                                     0x3ff0000000000000);
                  }
                  else {
                    dVar88 = (double)(int)uVar7;
                    local_11c8 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar62) &
                                          (ulonglong)((dVar63 * dVar88) / dVar100) |
                                         ~-(ulonglong)(9.99999993922529e-09 < dVar62) &
                                         0x3ff0000000000000);
                  }
                  local_11b8._8_8_ = 0;
                  local_11b8._0_8_ = dVar88;
                  local_11e8._0_8_ = -((longlong)param_8 + ((ulonglong)(dVar100 < 0.0) - 1));
                  local_1198 = -(lVar13 + -1 + (ulonglong)(dVar63 < 0.0));
                  lVar17 = (longlong)(int)uVar9;
                  lVar20 = (longlong)(int)uVar7;
                  uStack_11c0 = 0;
                  dVar63 = 1.0 / local_11c8;
                  local_11d8 = (double)((longlong)auVar73._0_8_ * lVar17);
                  local_11a8 = (longlong)auVar90._0_8_ * lVar20;
                  do {
                    uVar7 = ((uint)param_8 & 0xff00) << 8 | (uint)param_8 & 0xff;
                    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
                    uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
                    uVar9 = ((uint)lVar13 & 0xff00) << 8 | (uint)lVar13 & 0xff;
                    uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                    uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                    FUN_146e31d36(&local_1138,
                                  (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                  (uVar7 * 2 | uVar7) & 0x55555555);
                    dVar27 = 1.79769313486232e+308;
                    if (9.99999993922529e-09 < dVar62) {
                      dVar27 = ((double)(local_11e8._0_8_ + (longlong)param_8) * dVar38 - dVar26) *
                               local_11c8;
                    }
                    dVar100 = 1.79769313486232e+308;
                    dVar72 = auVar76._0_8_;
                    if (9.99999993922529e-09 < dVar61) {
                      dVar100 = ((double)(longlong)(local_1198 + lVar13) * dVar38 - dVar72) *
                                (double)local_11b8._0_8_;
                    }
                    lVar12 = lVar17;
                    lVar21 = 0;
                    if (dVar100 < dVar27) {
                      lVar12 = 0;
                      lVar21 = lVar20;
                    }
                    param_8 = (double *)((longlong)param_8 + lVar12);
                    if ((longlong)param_8 * lVar17 - (longlong)local_11d8 != 0 &&
                        (longlong)local_11d8 <= (longlong)param_8 * lVar17) break;
                    lVar13 = lVar13 + lVar21;
                    dVar27 = (double)(~-(ulonglong)(dVar100 < dVar27) & (ulonglong)dVar27 |
                                     (ulonglong)dVar100 & -(ulonglong)(dVar100 < dVar27));
                    auVar36._0_8_ =
                         (ulonglong)(dVar27 * dVar63 + dVar26) &
                         -(ulonglong)(9.99999993922529e-09 < dVar62);
                    auVar36._8_8_ = 0;
                    auVar46._0_8_ = ~-(ulonglong)(9.99999993922529e-09 < dVar62) & (ulonglong)dVar26
                    ;
                    auVar46._12_4_ = uVar87;
                    auVar46._8_4_ = uVar86;
                    auVar46 = auVar46 | auVar36;
                    auVar53._0_8_ =
                         (ulonglong)(dVar27 * (1.0 / dVar88) + dVar72) &
                         -(ulonglong)(9.99999993922529e-09 < dVar61);
                    auVar53._8_8_ = 0;
                    auVar37._0_8_ = ~-(ulonglong)(9.99999993922529e-09 < dVar61) & (ulonglong)dVar72
                    ;
                    auVar37._8_8_ = auVar76._8_8_;
                    auVar76 = auVar37 | auVar53;
                    dVar26 = auVar46._0_8_;
                    uVar86 = auVar46._8_4_;
                    uVar87 = auVar46._12_4_;
                  } while (lVar13 * lVar20 - local_11a8 == 0 ||
                           lVar13 * lVar20 < (longlong)local_11a8);
                }
                else {
                  uVar7 = ((uint)param_8 & 0xff00) << 8 | (uint)param_8 & 0xff;
                  param_8 = (double *)(ulonglong)uVar7;
                  uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
                  uVar9 = (uVar7 * 4 | uVar7) & 0x33333333;
                  uVar7 = ((uint)lVar13 & 0xff00) << 8 | (uint)lVar13 & 0xff;
                  uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
                  uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
                  FUN_146e31d36(&local_1138,
                                (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa |
                                (uVar9 * 2 | uVar9) & 0x55555555);
                }
                puVar11 = &local_10f0;
                puVar14 = local_1180;
                for (lVar17 = 9; lVar17 != 0; lVar17 = lVar17 + -1) {
                  *puVar14 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar14 = puVar14 + 1;
                }
                cVar6 = FUN_146e31a78(param_1,local_1108);
                if (local_1108[0] != 0.0) {
                  FUN_1400020a8();
                }
                goto joined_r0x000146e31400;
              }
            }
          }
        }
      }
      lVar17 = *(longlong *)(param_1 + 0x30);
      lVar13 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x38;
      do {
        cVar6 = FUN_146e31b7c(&local_10f0,lVar17);
        if (cVar6 == '\0') goto LAB_146e31406;
        lVar17 = lVar17 + 0x38;
        lVar13 = lVar13 + -0x38;
      } while (lVar13 != 0);
    }
  }
  else {
    local_11f8 = param_9;
    local_1200 = param_8;
    local_1208 = param_7;
    local_1210 = param_6;
    local_1218 = param_5;
    cVar6 = FUN_146e305ee(*(longlong *)(param_1 + 0xc0),param_2,param_3,param_4);
joined_r0x000146e31400:
    if (cVar6 == '\0') {
LAB_146e31406:
      param_8 = (double *)0x0;
LAB_146e314dc:
      if ((local_f0 ^ (ulonglong)auStack_1238) == DAT_14c707940) {
        return (ulonglong)param_8 & 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    uVar7 = *(uint *)(param_1 + 0x44);
    if (uVar7 == 0xffffffff) {
      uVar7 = 0;
      goto LAB_146e30b63;
    }
  }
  else {
    uVar7 = 0;
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_146e30b63;
  }
  local_f8 = 0xff00000001;
  local_10f0 = (longlong *)CONCAT44(local_10f0._4_4_,uVar7);
  local_10e8 = (double *)0x0;
  uVar7 = 1;
LAB_146e30b63:
  dVar88 = *param_2;
  dVar63 = param_2[1];
  dVar38 = param_2[2];
  auVar90 = *param_7;
  uVar28 = *(ulonglong *)param_7[1];
  uVar122 = 0;
  auVar31 = *(undefined1 (*) [16])(param_3 + 4);
  auVar73 = divpd(_DAT_149934d80,auVar90);
  bVar2 = (double)(auVar90._0_8_ & DAT_149931180) < 1e-08;
  dVar26 = (double)-(ulonglong)bVar2;
  bVar3 = (double)(auVar90._8_8_ & DAT_149931180._8_8_) < 1e-08;
  dVar27 = (double)-(ulonglong)bVar3;
  local_11c8 = (double)CONCAT44((float)dVar27,(float)dVar26);
  uStack_11c0 = 0;
  uVar39 = ~(ulonglong)local_11c8 & CONCAT44((float)auVar73._8_8_,(float)auVar73._0_8_);
  local_11d8 = (double)(float)uVar39;
  dStack_11d0 = (double)(float)(uVar39 >> 0x20);
  auVar90 = _DAT_149931180;
  local_11b8 = auVar31;
  do {
    puVar11 = local_100;
    if (local_100 == (undefined8 *)0x0) {
      puVar11 = &local_10f0;
    }
    lVar20 = (longlong)(int)uVar7;
    pdVar18 = (double *)(puVar11 + lVar20 * 2 + -1);
    lVar13 = lVar20 << 0x20;
    iVar8 = -1;
    lVar17 = 0;
    do {
      param_8 = (double *)CONCAT71((int7)((ulonglong)param_8 >> 8),lVar20 == lVar17);
      if (lVar20 == lVar17) goto LAB_146e314d2;
      pdVar1 = pdVar18 + -1;
      dVar100 = *pdVar18;
      local_f8 = CONCAT44(local_f8._4_4_,uVar7 + iVar8);
      lVar17 = lVar17 + 1;
      pdVar18 = pdVar18 + -2;
      lVar13 = lVar13 + -0x100000000;
      iVar8 = iVar8 + -1;
    } while (auVar31._0_8_ < dVar100);
    lVar20 = *(longlong *)(param_1 + 0x10);
    lVar21 = (longlong)*(int *)pdVar1 * 0x70;
    pdVar18 = (double *)(lVar20 + lVar21);
    if ((*(byte *)(lVar20 + 0x6c + lVar21) & 1) == 0) {
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar28;
      dVar100 = (double)-(ulonglong)(SUB168(auVar50 & auVar90,0) < 1e-08);
      dVar61 = (double)-(ulonglong)(SUB168(auVar50 & auVar90,8) < 1e-08);
      auVar42._8_8_ = dVar61;
      auVar42._0_8_ = dVar100;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = -(ulonglong)(dVar38 < pdVar18[2] || pdVar18[5] < dVar38);
      auVar94._0_8_ = -(ulonglong)((pdVar18[3] < dVar88 || dVar88 < *pdVar18) && bVar2);
      auVar94._8_8_ = -(ulonglong)((pdVar18[4] < dVar63 || dVar63 < pdVar18[1]) && bVar3);
      iVar15 = movmskpd((int)lVar20,auVar94);
      uVar9 = movmskpd((int)lVar21,auVar56 & auVar42);
      if ((uVar9 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar90 = divpd(_DAT_149934d80,auVar50);
        uVar39 = ~CONCAT44((float)dVar61,(float)dVar100) &
                 CONCAT44((float)auVar90._8_8_,(float)auVar90._0_8_);
        dVar62 = (double)(float)uVar39;
        dVar72 = (double)(float)(uVar39 >> 0x20);
        auVar57._8_8_ = local_11b8._0_8_;
        auVar57._0_8_ = local_11b8._0_8_;
        uVar39 = ~(ulonglong)local_11c8 &
                 CONCAT44((float)((pdVar18[1] - dVar63) * dStack_11d0),
                          (float)((*pdVar18 - dVar88) * local_11d8));
        auVar78._0_8_ = (double)(float)uVar39;
        auVar78._8_8_ = (double)(float)(uVar39 >> 0x20);
        uVar39 = ~CONCAT44((float)dVar61,(float)dVar100) &
                 CONCAT44((float)(dVar72 * 0.0),(float)((pdVar18[2] - dVar38) * dVar62));
        auVar84._0_8_ = (double)(float)uVar39;
        auVar84._8_8_ = (double)(float)(uVar39 >> 0x20);
        auVar67._0_8_ = (pdVar18[3] - dVar88) * local_11d8;
        auVar67._8_8_ = (pdVar18[4] - dVar63) * dStack_11d0;
        auVar32._8_8_ = dVar27;
        auVar32._0_8_ = dVar26;
        auVar90 = blendvpd(auVar67,auVar57,auVar32);
        auVar113._0_8_ = (pdVar18[5] - dVar38) * dVar62;
        auVar113._8_8_ = dVar72 * 0.0;
        auVar33._8_8_ = dVar61;
        auVar33._0_8_ = dVar100;
        auVar89 = blendvpd(auVar113,auVar57,auVar33);
        auVar96._8_8_ = auVar78._8_8_;
        auVar96._0_8_ = auVar78._0_8_;
        auVar91 = minpd(auVar96,auVar90);
        auVar103._8_8_ = auVar84._8_8_;
        auVar103._0_8_ = auVar84._0_8_;
        auVar76 = minpd(auVar103,auVar89);
        auVar73 = maxpd(auVar78,auVar90);
        auVar89 = maxpd(auVar84,auVar89);
        auVar104._0_8_ = auVar76._0_8_;
        auVar68._8_8_ = auVar76._8_8_;
        auVar68._0_8_ = auVar91._0_8_;
        auVar114._8_8_ = auVar104._0_8_;
        auVar114._0_8_ = auVar91._8_8_;
        auVar118._8_8_ = auVar76._8_8_;
        auVar118._0_8_ = auVar91._8_8_;
        auVar104._8_8_ = auVar91._0_8_;
        auVar91 = maxpd(auVar91,auVar114);
        auVar90 = maxpd(auVar76,auVar68);
        auVar90 = maxpd(auVar90,auVar118);
        auVar91 = maxpd(auVar91,auVar104);
        auVar85._0_8_ = auVar89._0_8_;
        auVar69._8_8_ = auVar89._8_8_;
        auVar69._0_8_ = auVar73._0_8_;
        auVar97._8_8_ = auVar85._0_8_;
        auVar97._0_8_ = auVar73._8_8_;
        auVar115._8_8_ = auVar89._8_8_;
        auVar115._0_8_ = auVar73._8_8_;
        auVar85._8_8_ = auVar73._0_8_;
        auVar73 = minpd(auVar73,auVar97);
        auVar89 = minpd(auVar89,auVar69);
        auVar89 = minpd(auVar89,auVar115);
        auVar73 = minpd(auVar73,auVar85);
        auVar73 = minpd(auVar73,auVar57);
        auVar89 = minpd(auVar89,auVar57);
        auVar90 = maxpd(auVar90,ZEXT816(0));
        auVar105._8_8_ = -(ulonglong)(auVar89._8_8_ < auVar90._8_8_);
        auVar105._0_8_ = -(ulonglong)(auVar89._0_8_ < auVar90._0_8_);
        local_11e8 = maxpd(auVar91,ZEXT816(0));
        auVar79._8_8_ = -(ulonglong)(auVar73._8_8_ < local_11e8._8_8_);
        auVar79._0_8_ = -(ulonglong)(auVar73._0_8_ < local_11e8._0_8_);
        iVar15 = movmskpd(iVar15,auVar79);
        uVar9 = movmskpd(0,auVar105);
        bVar25 = (uVar9 & 0x3fffffff) == 0 && iVar15 == 0;
      }
      else {
        bVar25 = false;
      }
      dVar92 = local_11e8._0_8_;
      iVar15 = (int)lVar17;
      iVar16 = (uVar7 + 1) - iVar15;
      uVar9 = (uVar7 + 1) - iVar15;
      uVar39 = (ulonglong)uVar7 - lVar17;
      iVar24 = (int)uVar39;
      dVar62 = SUB168(*(undefined1 (*) [16])(pdVar18 + 9),0);
      dVar72 = SUB168(*(undefined1 (*) [16])(pdVar18 + 9),8);
      auVar95._8_8_ = 0;
      auVar95._0_8_ = -(ulonglong)(dVar38 < pdVar18[8] || pdVar18[0xb] < dVar38);
      auVar102._0_8_ = -(ulonglong)((dVar62 < dVar88 || dVar88 < pdVar18[6]) && bVar2);
      auVar102._8_8_ = -(ulonglong)((dVar72 < dVar63 || dVar63 < pdVar18[7]) && bVar3);
      iVar15 = movmskpd(iVar15,auVar102);
      uVar7 = movmskpd(iVar8,auVar95 & auVar42);
      auVar90 = _DAT_149931180;
      if ((uVar7 & 0x3fffffff) == 0 && iVar15 == 0) {
        auVar73 = divpd(_DAT_149934d80,auVar50);
        uVar40 = ~CONCAT44((float)dVar61,(float)dVar100) &
                 CONCAT44((float)auVar73._8_8_,(float)auVar73._0_8_);
        dVar101 = (double)(float)uVar40;
        dVar108 = (double)(float)(uVar40 >> 0x20);
        auVar51._8_8_ = local_11b8._0_8_;
        auVar51._0_8_ = local_11b8._0_8_;
        auVar58._0_8_ = (dVar62 - dVar88) * local_11d8;
        auVar58._8_8_ = (dVar72 - dVar63) * dStack_11d0;
        uVar40 = ~(ulonglong)local_11c8 &
                 CONCAT44((float)((pdVar18[7] - dVar63) * dStack_11d0),
                          (float)((pdVar18[6] - dVar88) * local_11d8));
        auVar80._0_8_ = (double)(float)uVar40;
        auVar80._8_8_ = (double)(float)(uVar40 >> 0x20);
        auVar119._0_8_ = (pdVar18[0xb] - dVar38) * dVar101;
        auVar119._8_8_ = dVar108 * 0.0;
        uVar40 = ~CONCAT44((float)dVar61,(float)dVar100) &
                 CONCAT44((float)(dVar108 * 0.0),(float)((pdVar18[8] - dVar38) * dVar101));
        auVar70._0_8_ = (double)(float)uVar40;
        auVar70._8_8_ = (double)(float)(uVar40 >> 0x20);
        auVar34._8_8_ = dVar27;
        auVar34._0_8_ = dVar26;
        auVar89 = blendvpd(auVar58,auVar51,auVar34);
        auVar35._8_8_ = dVar61;
        auVar35._0_8_ = dVar100;
        auVar91 = blendvpd(auVar119,auVar51,auVar35);
        auVar121._8_8_ = auVar80._8_8_;
        auVar121._0_8_ = auVar80._0_8_;
        auVar110 = minpd(auVar121,auVar89);
        auVar43._8_8_ = auVar70._8_8_;
        auVar43._0_8_ = auVar70._0_8_;
        auVar73 = minpd(auVar43,auVar91);
        auVar76 = maxpd(auVar80,auVar89);
        auVar91 = maxpd(auVar70,auVar91);
        auVar44._0_8_ = auVar73._0_8_;
        auVar59._8_8_ = auVar73._8_8_;
        auVar59._0_8_ = auVar110._0_8_;
        auVar98._8_8_ = auVar44._0_8_;
        auVar98._0_8_ = auVar110._8_8_;
        auVar106._8_8_ = auVar73._8_8_;
        auVar106._0_8_ = auVar110._8_8_;
        auVar44._8_8_ = auVar110._0_8_;
        auVar110 = maxpd(auVar110,auVar98);
        auVar73 = maxpd(auVar73,auVar59);
        auVar89 = maxpd(auVar73,auVar106);
        auVar73 = maxpd(auVar110,auVar44);
        auVar71._0_8_ = auVar91._0_8_;
        auVar45._8_8_ = auVar91._8_8_;
        auVar45._0_8_ = auVar76._0_8_;
        auVar60._8_8_ = auVar71._0_8_;
        auVar60._0_8_ = auVar76._8_8_;
        auVar107._8_8_ = auVar91._8_8_;
        auVar107._0_8_ = auVar76._8_8_;
        auVar71._8_8_ = auVar76._0_8_;
        auVar76 = minpd(auVar76,auVar60);
        auVar73 = maxpd(auVar73,ZEXT816(0));
        auVar89 = maxpd(auVar89,ZEXT816(0));
        auVar91 = minpd(auVar91,auVar45);
        auVar110 = minpd(auVar91,auVar107);
        auVar91 = minpd(auVar76,auVar71);
        auVar91 = minpd(auVar91,auVar51);
        auVar76 = minpd(auVar110,auVar51);
        auVar99._8_8_ = -(ulonglong)(auVar76._8_8_ < auVar89._8_8_);
        auVar99._0_8_ = -(ulonglong)(auVar76._0_8_ < auVar89._0_8_);
        dVar100 = auVar73._0_8_;
        auVar81._8_8_ = -(ulonglong)(auVar91._8_8_ < auVar73._8_8_);
        auVar81._0_8_ = -(ulonglong)(auVar91._0_8_ < dVar100);
        iVar19 = movmskpd(0,auVar81);
        iVar8 = movmskpd(iVar15,auVar99);
        if (bVar25 && (iVar8 << 2 == 0 && iVar19 == 0)) {
          lVar13 = lVar13 >> 0x1c;
          if (dVar100 <= dVar92) {
            uVar7 = *(uint *)(pdVar18 + 0xc);
            param_8 = (double *)(ulonglong)uVar7;
            local_f8 = CONCAT44(local_f8._4_4_,iVar16);
            if (local_f8._4_4_ < uVar9) {
              FUN_146e31de2(&local_10f0,uVar39 & 0xffffffff);
            }
            puVar11 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar11 = &local_10f0;
            }
            *(uint *)((longlong)puVar11 + lVar13) = uVar7;
            *(double *)((longlong)puVar11 + lVar13 + 8) = dVar92;
            uVar86 = *(undefined4 *)((longlong)pdVar18 + 100);
            iVar24 = (uint)local_f8;
            uVar39 = local_f8 & 0xffffffff;
            uVar7 = (uint)local_f8 + 1;
            local_f8 = CONCAT44(local_f8._4_4_,uVar7);
            dVar92 = dVar100;
            if (local_f8._4_4_ < uVar7) {
              FUN_146e31de2(&local_10f0,uVar39);
            }
          }
          else {
            uVar7 = *(uint *)((longlong)pdVar18 + 100);
            param_8 = (double *)(ulonglong)uVar7;
            local_f8._0_4_ = iVar16;
            if (local_f8._4_4_ < uVar9) {
              FUN_146e31de2(&local_10f0,uVar39 & 0xffffffff);
            }
            puVar11 = local_100;
            if (local_100 == (undefined8 *)0x0) {
              puVar11 = &local_10f0;
            }
            *(uint *)((longlong)puVar11 + lVar13) = uVar7;
            *(double *)((longlong)puVar11 + lVar13 + 8) = dVar100;
            iVar24 = (uint)local_f8;
            uVar86 = *(undefined4 *)(pdVar18 + 0xc);
            local_f8._0_4_ = (uint)local_f8 + 1;
            if (local_f8._4_4_ < (uint)local_f8) {
              FUN_146e31de2(&local_10f0,iVar24);
            }
          }
        }
        else {
          if (bVar25) goto LAB_146e30fdd;
          if (iVar8 << 2 != 0 || iVar19 != 0) goto LAB_146e3101a;
          uVar86 = *(undefined4 *)((longlong)pdVar18 + 100);
          local_f8 = CONCAT44(local_f8._4_4_,iVar16);
          dVar92 = dVar100;
          if (local_f8._4_4_ < uVar9) {
            param_8 = (double *)&local_10f0;
            FUN_146e31de2(param_8,uVar39 & 0xffffffff);
          }
        }
      }
      else {
        auVar73 = local_11e8;
        if (!bVar25) goto LAB_146e3101a;
LAB_146e30fdd:
        local_11e8 = auVar73;
        uVar86 = *(undefined4 *)(pdVar18 + 0xc);
        local_f8 = CONCAT44(local_f8._4_4_,iVar16);
        auVar73 = local_11e8;
        if (local_f8._4_4_ < uVar9) {
          FUN_146e31de2(&local_10f0,uVar39 & 0xffffffff);
          auVar73 = local_11e8;
        }
      }
      puVar11 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar11 = &local_10f0;
      }
      *(undefined4 *)(puVar11 + (longlong)iVar24 * 2) = uVar86;
      puVar11[(longlong)iVar24 * 2 + 1] = dVar92;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x20);
      uVar39 = (ulonglong)(int)plVar10[(longlong)*(int *)(pdVar18 + 0xc) * 9 + 7];
      auVar73 = local_11e8;
      if (uVar39 != 0) {
        lVar17 = plVar10[(longlong)*(int *)(pdVar18 + 0xc) * 9 + 6];
        auVar82._8_8_ = 0;
        auVar82._0_8_ = uVar28;
        auVar73 = divpd(_DAT_149934d80,auVar82);
        dVar100 = (double)-(ulonglong)((double)(uVar28 & auVar90._0_8_) < 1e-08);
        auVar83._8_8_ = 0xffffffffffffffff;
        auVar83._0_8_ = dVar100;
        uStack_11a0 = (uint)uStack_11c0 ^ 0xffffffff;
        uStack_119c = uStack_11c0._4_4_ ^ 0xffffffff;
        local_11a8 = (ulonglong)local_11c8 ^ 0xffffffffffffffff;
        uVar40 = ~CONCAT44(0xffc00000,(float)dVar100) &
                 CONCAT44((float)auVar73._8_8_,(float)auVar73._0_8_);
        dVar61 = (double)(float)uVar40;
        dVar62 = (double)(float)(uVar40 >> 0x20);
        auVar93._8_8_ = local_11b8._0_8_;
        auVar93._0_8_ = local_11b8._0_8_;
        lVar13 = uVar39 * 0x38;
        lVar20 = 0;
        local_1198 = uVar28;
        uStack_1190 = uVar122;
        do {
          dVar72 = *(double *)(lVar17 + 0x18 + lVar20);
          pdVar18 = (double *)(lVar17 + 8 + lVar20);
          dVar101 = *pdVar18;
          dVar108 = pdVar18[1];
          dVar92 = *(double *)(lVar17 + 0x30 + lVar20);
          pdVar18 = (double *)(lVar17 + 0x20 + lVar20);
          dVar4 = *pdVar18;
          dVar5 = pdVar18[1];
          auVar47._8_8_ = 0;
          auVar47._0_8_ = -(ulonglong)(dVar92 < dVar38 || dVar38 < dVar72);
          auVar74._0_8_ = -(ulonglong)((dVar4 < dVar88 || dVar88 < dVar101) && bVar2);
          auVar74._8_8_ = -(ulonglong)((dVar5 < dVar63 || dVar63 < dVar108) && bVar3);
          uVar7 = movmskpd((int)uVar39,auVar74);
          uVar39 = (ulonglong)uVar7;
          iVar8 = movmskpd((int)plVar10,auVar47 & auVar83);
          uVar9 = iVar8 << 2 | uVar7;
          plVar10 = (longlong *)(ulonglong)uVar9;
          if (uVar9 == 0) {
            auVar41._0_8_ = (dVar4 - dVar88) * local_11d8;
            auVar41._8_8_ = (dVar5 - dVar63) * dStack_11d0;
            uVar28 = CONCAT44((float)((dVar108 - dVar63) * dStack_11d0),
                              (float)((dVar101 - dVar88) * local_11d8)) & local_11a8;
            auVar48._0_8_ = (double)(float)uVar28;
            auVar48._8_8_ = (double)(float)(uVar28 >> 0x20);
            auVar64._0_8_ = (dVar92 - dVar38) * dVar61;
            auVar64._8_8_ = dVar62 * 0.0;
            uVar28 = CONCAT44((float)(dVar62 * 0.0),(float)((dVar72 - dVar38) * dVar61)) &
                     (CONCAT44(0xffc00000,(float)dVar100) ^ 0xffffffffffffffff);
            auVar54._0_8_ = (double)(float)uVar28;
            auVar54._8_8_ = (double)(float)(uVar28 >> 0x20);
            auVar29._8_8_ = dVar27;
            auVar29._0_8_ = dVar26;
            auVar90 = blendvpd(auVar41,auVar93,auVar29);
            auVar30._8_8_ = 0xffffffffffffffff;
            auVar30._0_8_ = dVar100;
            auVar73 = blendvpd(auVar64,auVar93,auVar30);
            auVar75._8_8_ = auVar48._8_8_;
            auVar75._0_8_ = auVar48._0_8_;
            auVar76 = minpd(auVar75,auVar90);
            auVar109._8_8_ = auVar54._8_8_;
            auVar109._0_8_ = auVar54._0_8_;
            auVar110 = minpd(auVar109,auVar73);
            auVar89 = maxpd(auVar48,auVar90);
            auVar91 = maxpd(auVar54,auVar73);
            auVar111._0_8_ = auVar110._0_8_;
            auVar65._8_8_ = auVar110._8_8_;
            auVar65._0_8_ = auVar76._0_8_;
            auVar116._8_8_ = auVar111._0_8_;
            auVar116._0_8_ = auVar76._8_8_;
            auVar120._8_8_ = auVar110._8_8_;
            auVar120._0_8_ = auVar76._8_8_;
            auVar111._8_8_ = auVar76._0_8_;
            auVar73 = maxpd(auVar76,auVar116);
            auVar90 = maxpd(auVar110,auVar65);
            auVar90 = maxpd(auVar90,auVar120);
            auVar73 = maxpd(auVar73,auVar111);
            auVar55._0_8_ = auVar91._0_8_;
            auVar66._8_8_ = auVar91._8_8_;
            auVar66._0_8_ = auVar89._0_8_;
            auVar77._8_8_ = auVar55._0_8_;
            auVar77._0_8_ = auVar89._8_8_;
            auVar117._8_8_ = auVar91._8_8_;
            auVar117._0_8_ = auVar89._8_8_;
            auVar55._8_8_ = auVar89._0_8_;
            auVar89 = minpd(auVar89,auVar77);
            auVar91 = minpd(auVar91,auVar66);
            auVar91 = minpd(auVar91,auVar117);
            auVar89 = minpd(auVar89,auVar55);
            auVar73 = maxpd(auVar73,ZEXT816(0));
            auVar89 = minpd(auVar89,auVar93);
            auVar49._8_8_ = -(ulonglong)(auVar89._8_8_ < auVar73._8_8_);
            auVar49._0_8_ = -(ulonglong)(auVar89._0_8_ < auVar73._0_8_);
            auVar90 = maxpd(auVar90,ZEXT816(0));
            auVar73 = minpd(auVar91,auVar93);
            auVar112._8_8_ = -(ulonglong)(auVar73._8_8_ < auVar90._8_8_);
            auVar112._0_8_ = -(ulonglong)(auVar73._0_8_ < auVar90._0_8_);
            uVar7 = movmskpd(uVar7,auVar49);
            uVar39 = (ulonglong)uVar7;
            iVar8 = movmskpd(0,auVar112);
            uVar7 = iVar8 << 2 | uVar7;
            plVar10 = (longlong *)(ulonglong)uVar7;
            if (uVar7 == 0) {
              local_1108[0] = (double)CONCAT44(local_1108[0]._4_4_,*(undefined4 *)(lVar17 + lVar20))
              ;
              plVar10 = (longlong *)*param_6;
              uVar39 = (**(code **)(*plVar10 + 0x10))(plVar10,local_1108,param_3);
              if ((char)uVar39 == '\0') goto LAB_146e314d2;
            }
          }
          lVar20 = lVar20 + 0x38;
          auVar90 = _DAT_149931180;
          uVar28 = local_1198;
          uVar122 = uStack_1190;
          auVar73 = local_11e8;
        } while (lVar13 - lVar20 != 0);
      }
    }
LAB_146e3101a:
    local_11e8 = auVar73;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = param_3[4];
    uVar7 = (uint)local_f8;
  } while( true );
LAB_146e314d2:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_146e314dc;
}



// FUNCTION 146e31a78 FUN_146e31a78 body=259 status=ok
// SIG undefined FUN_146e31a78(void)

undefined8 FUN_146e31a78(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e31ae5:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e31ae5;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e31b7c(param_3,(longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e31b7c FUN_146e31b7c body=441 status=ok
// SIG undefined FUN_146e31b7c(void)

undefined8 FUN_146e31b7c(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  double local_98 [6];
  undefined8 local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar1 = (double *)param_1[7];
  local_98[2] = pdVar1[2];
  local_98[0] = *pdVar1;
  local_98[1] = pdVar1[1];
  pdVar1 = (double *)param_1[1];
  dVar7 = *(double *)(param_2 + 2) - *pdVar1;
  local_68 = dVar7;
  local_60 = *(double *)(param_2 + 4) - pdVar1[1];
  local_58 = *(double *)(param_2 + 6) - pdVar1[2];
  local_98[3] = *(double *)(param_2 + 8) - *pdVar1;
  local_98[4] = *(double *)(param_2 + 10) - pdVar1[1];
  local_98[5] = *(double *)(param_2 + 0xc) - pdVar1[2];
  lVar6 = 0;
  dVar9 = 1.79769313486232e+308;
  dVar8 = 0.0;
  do {
    if (*(char *)(*(longlong *)param_1[8] + lVar6) == '\x01') {
      if (0.0 < (double)(&local_68)[lVar6]) goto LAB_146e31cf2;
      dVar10 = 0.0;
      dVar2 = 1.79769313486232e+308;
      if (local_98[lVar6 + 3] <= 0.0 && local_98[lVar6 + 3] != 0.0) goto LAB_146e31cf2;
    }
    else {
      dVar10 = (double)(&local_68)[lVar6] * local_98[lVar6];
      dVar2 = local_98[lVar6] * local_98[lVar6 + 3];
    }
    dVar3 = dVar2;
    if (dVar10 <= dVar2) {
      dVar3 = dVar10;
    }
    if (dVar8 <= dVar3) {
      dVar8 = dVar3;
    }
    if (dVar10 <= dVar2) {
      dVar10 = dVar2;
    }
    if (dVar10 <= dVar9) {
      dVar9 = dVar10;
    }
    if (dVar9 < dVar8) goto LAB_146e31cf2;
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  if ((dVar8 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar9)) {
    *(double *)param_1[3] = dVar8;
    local_68 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*param_2);
    cVar4 = (**(code **)(**(longlong **)*param_1 + 0x10))
                      (*(longlong **)*param_1,&local_68,param_1[2]);
    if (cVar4 == '\0') {
      uVar5 = 0;
      goto LAB_146e31cf4;
    }
  }
LAB_146e31cf2:
  uVar5 = 1;
LAB_146e31cf4:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146e31d36 FUN_146e31d36 body=172 status=ok
// SIG undefined FUN_146e31d36(void)

undefined8 FUN_146e31d36(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e31de2 FUN_146e31de2 body=131 status=ok
// SIG undefined FUN_146e31de2(void)

void FUN_146e31de2(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e31e66(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e31e66 FUN_146e31e66 body=145 status=ok
// SIG undefined FUN_146e31e66(void)

void FUN_146e31e66(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e31ef8 FUN_146e31ef8 body=3415 status=ok
// SIG undefined FUN_146e31ef8(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e31ef8(longlong param_1,double *param_2,undefined8 *param_3,double *param_4,
                       double param_5,undefined8 *param_6,longlong *param_7,double *param_8,
                       longlong param_9)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *unaff_RBP;
  longlong lVar15;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 unaff_XMM8_Da;
  undefined4 unaff_XMM8_Db;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 auStack_1278 [32];
  double local_1258;
  undefined8 *local_1250;
  longlong *local_1248;
  double *local_1240;
  longlong local_1238;
  longlong local_1230;
  double local_1228 [4];
  double local_1208 [12];
  double local_11a8;
  double dStack_11a0;
  double local_1198;
  longlong local_1188;
  undefined8 *local_1180;
  double local_1178 [4];
  undefined4 local_1158;
  undefined4 uStack_1154;
  undefined4 uStack_1150;
  undefined4 uStack_114c;
  double local_1148;
  double local_1138 [6];
  undefined8 local_1108;
  double dStack_1100;
  double local_10f8;
  undefined8 local_10f0;
  double *local_10e8;
  undefined8 *local_10e0;
  double *local_10d8;
  double local_10d0;
  double *local_10c8;
  longlong *local_10c0;
  double *local_10b8;
  undefined8 *local_10b0;
  undefined8 *local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e31f0e;
  puVar4 = (undefined8 *)CONCAT44(unaff_XMM8_Db,unaff_XMM8_Da);
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1278;
  local_1178[3] = 0.0;
  if ((longlong)*(int *)(param_1 + 0x110) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x108);
    unaff_RBP = puVar13 + (longlong)*(int *)(param_1 + 0x110) * 7;
    do {
      local_1178[0] = *param_8;
      local_1178[1] = param_8[1];
      local_1178[2] = param_8[2];
      puVar4 = (undefined8 *)(((double)puVar13[1] - *param_4) - *param_2);
      local_10f0 = puVar4;
      local_10e8 = (double *)(((double)puVar13[2] - param_4[1]) - param_2[1]);
      local_10e0 = (undefined8 *)(((double)puVar13[3] - param_4[2]) - param_2[2]);
      local_1108 = ((double)puVar13[4] + *param_4) - *param_2;
      dStack_1100 = ((double)puVar13[5] + param_4[1]) - param_2[1];
      local_10f8 = ((double)puVar13[6] + param_4[2]) - param_2[2];
      lVar15 = 0;
      dVar28 = 1.79769313486232e+308;
      uVar25 = 0;
      uVar26 = 0;
      do {
        if (*(char *)(param_9 + lVar15) == '\x01') {
          if (0.0 < (double)(&local_10f0)[lVar15]) goto LAB_146e3215e;
          dVar27 = 0.0;
          dVar29 = 1.79769313486232e+308;
          if ((double)(&local_1108)[lVar15] <= 0.0 && (double)(&local_1108)[lVar15] != 0.0)
          goto LAB_146e3215e;
        }
        else {
          dVar27 = (double)(&local_10f0)[lVar15] * local_1178[lVar15];
          dVar29 = local_1178[lVar15] * (double)(&local_1108)[lVar15];
        }
        dVar30 = dVar29;
        if (dVar27 <= dVar29) {
          dVar30 = dVar27;
        }
        if ((double)CONCAT44(uVar26,uVar25) <= dVar30) {
          uVar25 = SUB84(dVar30,0);
          uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        if (dVar27 <= dVar29) {
          dVar27 = dVar29;
        }
        if (dVar27 <= dVar28) {
          dVar28 = dVar27;
        }
        if (dVar28 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar28)
        goto LAB_146e3215e;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if (((double)CONCAT44(uVar26,uVar25) < (double)param_3[4] ||
           (double)CONCAT44(uVar26,uVar25) == (double)param_3[4]) && (0.0 <= dVar28)) {
        local_1178[3] = (double)CONCAT44(uVar26,uVar25);
        local_10f0._4_4_ = (undefined4)((ulonglong)puVar4 >> 0x20);
        local_10f0 = (undefined8 *)CONCAT44(local_10f0._4_4_,*(undefined4 *)puVar13);
        cVar9 = (**(code **)(*(longlong *)*param_6 + 0x18))
                          ((longlong *)*param_6,&local_10f0,param_3);
        if (cVar9 == '\0') goto LAB_146e32a53;
      }
LAB_146e3215e:
      puVar13 = puVar13 + 7;
    } while (puVar13 != unaff_RBP);
  }
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    local_10f0 = param_6;
    local_10e8 = param_2;
    local_10e0 = param_3;
    local_10d8 = local_1178 + 3;
    local_10d0 = param_5;
    local_10c8 = param_4;
    local_10c0 = param_7;
    local_10b8 = param_8;
    local_10b0 = &param_9;
    if (0 < (int)*(uint *)(param_1 + 0x38)) {
      if (((((0.0 < *(double *)(param_1 + 200)) && (0 < (longlong)*(int *)(param_1 + 0xd8))) &&
           (0 < *(int *)(param_1 + 0xdc))) &&
          ((0 < *(int *)(param_1 + 0xe0) && (*(int *)(param_1 + 0x84) < *(int *)(param_1 + 0x58)))))
         && ((double)param_3[4] <= 1.8446744073709552e+19)) {
        puVar13 = *(undefined8 **)(param_1 + 0xd0);
        dVar28 = *param_4;
        dVar29 = param_4[1];
        dVar27 = (dVar28 + dVar28) * (double)puVar13;
        uVar14 = (ulonglong)dVar27;
        if (dVar28 <= dVar29) {
          dVar28 = dVar29;
        }
        dVar30 = (dVar29 + dVar29) * (double)puVar13;
        uVar20 = (ulonglong)dVar30;
        dVar28 = (dVar28 + dVar28) * (double)puVar13;
        uVar21 = (ulonglong)dVar28;
        dVar29 = (double)param_3[4] * (double)puVar13;
        uVar19 = (ulonglong)dVar29;
        if ((((longlong)(dVar29 - 9.223372036854776e+18) & (longlong)uVar19 >> 0x3f | uVar19) + 2) *
            (((longlong)(dVar28 - 9.223372036854776e+18) & (longlong)uVar21 >> 0x3f | uVar21) + 2) +
            (((longlong)(dVar30 - 9.223372036854776e+18) & (longlong)uVar20 >> 0x3f | uVar20) + 2) *
            (((longlong)(dVar27 - 9.223372036854776e+18) & (longlong)uVar14 >> 0x3f | uVar14) + 2)
            <= (ulonglong)(longlong)*(int *)(param_1 + 0xd8)) {
          unaff_RBP = &local_1108;
          local_1108 = 0.0;
          dStack_1100 = 0.0;
          local_1248 = &local_1188;
          local_1198 = param_4[2];
          local_11a8 = *param_4;
          dStack_11a0 = param_4[1];
          local_1258 = *(double *)(param_1 + 200);
          local_1250 = puVar13;
          local_1188 = param_1;
          local_1180 = unaff_RBP;
          FUN_146e32c50(&local_11a8,param_2,*param_3);
          pdVar16 = (double *)&local_10f0;
          pdVar18 = local_1208 + 3;
          for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
            *pdVar18 = *pdVar16;
            pdVar16 = pdVar16 + 1;
            pdVar18 = pdVar18 + 1;
          }
          cVar9 = FUN_146e33b08(param_1,unaff_RBP);
          if (local_1108 != 0.0) {
            FUN_1400020a8();
          }
          goto joined_r0x000146e32a4d;
        }
      }
      lVar15 = *(longlong *)(param_1 + 0x30);
      lVar22 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x38;
      do {
        cVar9 = FUN_146e33c0c(&local_10f0,lVar15);
        if (cVar9 == '\0') goto LAB_146e32a53;
        lVar15 = lVar15 + 0x38;
        lVar22 = lVar22 + -0x38;
      } while (lVar22 != 0);
    }
  }
  else {
    local_1238 = param_9;
    local_1240 = param_8;
    local_1248 = param_7;
    local_1250 = param_6;
    local_1258 = param_5;
    cVar9 = FUN_146e31ef8(*(longlong *)(param_1 + 0xc0),param_2,param_3,param_4);
joined_r0x000146e32a4d:
    if (cVar9 == '\0') {
LAB_146e32a53:
      unaff_RBP = (undefined8 *)0x0;
      goto LAB_146e3291a;
    }
  }
  local_100 = (undefined8 *)0x0;
  local_f8 = 0xff00000000;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    iVar10 = *(int *)(param_1 + 0x44);
    if (iVar10 != -1) {
LAB_146e3239f:
      local_f8 = 0xff00000001;
      local_10f0 = (undefined8 *)CONCAT44(local_10f0._4_4_,iVar10);
      local_10e8 = (double *)0x0;
    }
  }
  else {
    iVar10 = 0;
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_146e3239f;
  }
  local_1230 = param_1;
LAB_146e323ce:
  uVar14 = local_f8;
  lVar15 = param_9;
  uVar11 = (uint)local_f8;
  lVar22 = (longlong)(int)(uint)local_f8;
  unaff_RBP = (undefined8 *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar22 == 0);
  if (lVar22 == 0) goto LAB_146e32910;
  puVar13 = local_100;
  if (local_100 == (undefined8 *)0x0) {
    puVar13 = &local_10f0;
  }
  uVar19 = lVar22 - 1;
  iVar17 = (int)uVar19;
  uVar8 = local_f8._4_4_;
  local_f8 = CONCAT44(local_f8._4_4_,iVar17);
  dVar28 = (double)param_3[4];
  iVar10 = 6;
  if ((double)puVar13[lVar22 * 2 + -1] <= dVar28) {
    pdVar16 = (double *)
              (*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(puVar13 + lVar22 * 2 + -2) * 0x70)
    ;
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x6c +
                  (longlong)*(int *)(puVar13 + lVar22 * 2 + -2) * 0x70) & 1) == 0) {
      local_1208[0] = *param_8;
      local_1208[1] = param_8[1];
      local_1208[2] = param_8[2];
      dVar29 = param_4[2];
      dVar27 = *param_4;
      dVar30 = param_4[1];
      dVar31 = param_2[2];
      dVar1 = *param_2;
      dVar2 = param_2[1];
      local_1108 = (*pdVar16 - dVar27) - dVar1;
      dStack_1100 = (pdVar16[1] - dVar30) - dVar2;
      local_10f8 = (pdVar16[2] - dVar29) - dVar31;
      local_1138[3] = (pdVar16[3] + dVar27) - dVar1;
      local_1138[4] = (pdVar16[4] + dVar30) - dVar2;
      local_1138[5] = (pdVar16[5] + dVar29) - dVar31;
      puVar13 = (undefined8 *)0x0;
      lVar15 = 0;
      puVar12 = (undefined8 *)0x7fefffffffffffff;
      do {
        if (*(char *)(param_9 + lVar15) == '\x01') {
          bVar3 = true;
          if ((0.0 < (double)(&local_1108)[lVar15]) ||
             (puVar5 = (undefined8 *)0x0, puVar6 = (undefined8 *)0x7fefffffffffffff,
             local_1138[lVar15 + 3] <= 0.0 && local_1138[lVar15 + 3] != 0.0)) goto LAB_146e327aa;
        }
        else {
          puVar5 = (undefined8 *)((double)(&local_1108)[lVar15] * local_1208[lVar15]);
          puVar6 = (undefined8 *)(local_1208[lVar15] * local_1138[lVar15 + 3]);
        }
        puVar7 = puVar6;
        if ((double)puVar5 <= (double)puVar6) {
          puVar7 = puVar5;
        }
        if ((double)puVar13 <= (double)puVar7) {
          puVar13 = puVar7;
        }
        if ((double)puVar5 <= (double)puVar6) {
          puVar5 = puVar6;
        }
        if ((double)puVar5 <= (double)puVar12) {
          puVar12 = puVar5;
        }
        bVar3 = true;
        if ((double)puVar12 < (double)puVar13) goto LAB_146e327aa;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if (((double)puVar13 <= dVar28) && (0.0 <= (double)puVar12)) {
        bVar3 = false;
        puVar4 = puVar13;
      }
LAB_146e327aa:
      local_1228[2] = param_8[2];
      local_1228[0] = *param_8;
      local_1228[1] = param_8[1];
      local_1108 = (pdVar16[6] - dVar27) - dVar1;
      dStack_1100 = (pdVar16[7] - dVar30) - dVar2;
      local_10f8 = (pdVar16[8] - dVar29) - dVar31;
      local_1138[3] = (dVar27 + pdVar16[9]) - dVar1;
      local_1138[4] = (dVar30 + pdVar16[10]) - dVar2;
      local_1138[5] = (dVar29 + pdVar16[0xb]) - dVar31;
      uVar32 = 0;
      uVar33 = 0;
      lVar15 = 0;
      uVar25 = 0xffffffff;
      uVar26 = 0x7fefffff;
      do {
        puVar13 = puVar4;
        if (*(char *)(param_9 + lVar15) == '\x01') {
          if (0.0 < (double)(&local_1108)[lVar15]) goto LAB_146e328be;
          dVar27 = 0.0;
          dVar29 = 1.79769313486232e+308;
          if (local_1138[lVar15 + 3] <= 0.0 && local_1138[lVar15 + 3] != 0.0) goto LAB_146e328be;
        }
        else {
          dVar27 = (double)(&local_1108)[lVar15] * local_1228[lVar15];
          dVar29 = local_1228[lVar15] * local_1138[lVar15 + 3];
        }
        dVar30 = dVar29;
        if (dVar27 <= dVar29) {
          dVar30 = dVar27;
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar30) {
          uVar32 = SUB84(dVar30,0);
          uVar33 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        puVar12 = (undefined8 *)CONCAT44(uVar33,uVar32);
        if (dVar27 <= dVar29) {
          dVar27 = dVar29;
        }
        if (dVar27 <= (double)CONCAT44(uVar26,uVar25)) {
          uVar25 = SUB84(dVar27,0);
          uVar26 = (undefined4)((ulonglong)dVar27 >> 0x20);
        }
        if ((double)CONCAT44(uVar26,uVar25) <= (double)CONCAT44(uVar33,uVar32) &&
            (double)CONCAT44(uVar33,uVar32) != (double)CONCAT44(uVar26,uVar25)) goto LAB_146e328be;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      if ((dVar28 <= (double)CONCAT44(uVar33,uVar32) && (double)CONCAT44(uVar33,uVar32) != dVar28)
         || ((double)CONCAT44(uVar26,uVar25) <= 0.0 && (double)CONCAT44(uVar26,uVar25) != 0.0)) {
LAB_146e328be:
        if (bVar3) goto LAB_146e323ce;
        uVar25 = *(undefined4 *)(pdVar16 + 0xc);
        local_f8 = uVar14;
        if (uVar8 < uVar11) {
          unaff_RBP = &local_10f0;
          FUN_146e33f90(unaff_RBP,uVar19 & 0xffffffff);
        }
      }
      else if (bVar3) {
        uVar25 = *(undefined4 *)((longlong)pdVar16 + 100);
        local_f8 = uVar14;
        puVar13 = (undefined8 *)CONCAT44(uVar33,uVar32);
        if (uVar8 < uVar11) {
          unaff_RBP = &local_10f0;
          FUN_146e33f90(unaff_RBP,uVar19 & 0xffffffff);
          puVar13 = puVar12;
        }
      }
      else {
        local_f8 = uVar14;
        if ((double)CONCAT44(uVar33,uVar32) < (double)puVar4 ||
            (double)CONCAT44(uVar33,uVar32) == (double)puVar4) {
          uVar25 = *(undefined4 *)(pdVar16 + 0xc);
          bVar3 = local_f8._4_4_ < uVar11;
          if (bVar3) {
            unaff_RBP = &local_10f0;
            FUN_146e33f90(unaff_RBP,uVar19 & 0xffffffff);
          }
          puVar13 = local_100;
          if (local_100 == (undefined8 *)0x0) {
            puVar13 = &local_10f0;
          }
          *(undefined4 *)(puVar13 + (longlong)iVar17 * 2) = uVar25;
          puVar13[(longlong)iVar17 * 2 + 1] = puVar4;
          uVar25 = *(undefined4 *)((longlong)pdVar16 + 100);
          uVar19 = local_f8 & 0xffffffff;
          uVar11 = (uint)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar11);
          puVar13 = puVar12;
          if (local_f8._4_4_ < uVar11) {
            FUN_146e33f90(&local_10f0,uVar19);
          }
        }
        else {
          uVar25 = *(undefined4 *)((longlong)pdVar16 + 100);
          bVar3 = local_f8._4_4_ < uVar11;
          if (bVar3) {
            unaff_RBP = &local_10f0;
            FUN_146e33f90(unaff_RBP,uVar19 & 0xffffffff);
          }
          puVar12 = local_100;
          if (local_100 == (undefined8 *)0x0) {
            puVar12 = &local_10f0;
          }
          *(undefined4 *)(puVar12 + uVar19 * 2) = uVar25;
          puVar12[uVar19 * 2 + 1] = CONCAT44(uVar33,uVar32);
          uVar25 = *(undefined4 *)(pdVar16 + 0xc);
          uVar19 = local_f8 & 0xffffffff;
          uVar11 = (uint)local_f8 + 1;
          local_f8 = CONCAT44(local_f8._4_4_,uVar11);
          if (local_f8._4_4_ < uVar11) {
            FUN_146e33f90(&local_10f0,uVar19);
          }
        }
      }
      puVar12 = local_100;
      if (local_100 == (undefined8 *)0x0) {
        puVar12 = &local_10f0;
      }
      *(undefined4 *)(puVar12 + (longlong)(int)uVar19 * 2) = uVar25;
      puVar12[(longlong)(int)uVar19 * 2 + 1] = puVar13;
      goto LAB_146e323ce;
    }
    local_1148 = param_8[2];
    local_1158 = *(undefined4 *)param_8;
    uStack_1154 = *(undefined4 *)((longlong)param_8 + 4);
    uStack_1150 = *(undefined4 *)(param_8 + 1);
    uStack_114c = *(undefined4 *)((longlong)param_8 + 0xc);
    lVar22 = (longlong)
             *(int *)(*(longlong *)(param_1 + 0x20) + 0x38 +
                     (longlong)*(int *)(pdVar16 + 0xc) * 0x48);
    iVar10 = 0;
    if (lVar22 != 0) {
      puVar23 = *(undefined4 **)
                 (*(longlong *)(param_1 + 0x20) + 0x30 + (longlong)*(int *)(pdVar16 + 0xc) * 0x48);
      puVar24 = puVar23 + lVar22 * 0xe;
      do {
        local_1138[2] = local_1148;
        local_1138[0] = (double)CONCAT44(uStack_1154,local_1158);
        local_1138[1] = (double)CONCAT44(uStack_114c,uStack_1150);
        dVar28 = (*(double *)(puVar23 + 2) - *param_4) - *param_2;
        local_1108 = dVar28;
        dStack_1100 = (*(double *)(puVar23 + 4) - param_4[1]) - param_2[1];
        local_10f8 = (*(double *)(puVar23 + 6) - param_4[2]) - param_2[2];
        local_1138[3] = (*(double *)(puVar23 + 8) + *param_4) - *param_2;
        local_1138[4] = (*(double *)(puVar23 + 10) + param_4[1]) - param_2[1];
        local_1138[5] = (*(double *)(puVar23 + 0xc) + param_4[2]) - param_2[2];
        dVar29 = 0.0;
        lVar22 = 0;
        uVar25 = 0xffffffff;
        uVar26 = 0x7fefffff;
        do {
          if (*(char *)(lVar15 + lVar22) == '\x01') {
            if (0.0 < (double)(&local_1108)[lVar22]) goto LAB_146e32624;
            dVar30 = 0.0;
            dVar27 = 1.79769313486232e+308;
            if (local_1138[lVar22 + 3] <= 0.0 && local_1138[lVar22 + 3] != 0.0) goto LAB_146e32624;
          }
          else {
            dVar30 = (double)(&local_1108)[lVar22] * local_1138[lVar22];
            dVar27 = local_1138[lVar22] * local_1138[lVar22 + 3];
          }
          dVar31 = dVar27;
          if (dVar30 <= dVar27) {
            dVar31 = dVar30;
          }
          if (dVar29 <= dVar31) {
            dVar29 = dVar31;
          }
          if (dVar30 <= dVar27) {
            dVar30 = dVar27;
          }
          if (dVar30 <= (double)CONCAT44(uVar26,uVar25)) {
            uVar25 = SUB84(dVar30,0);
            uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar29 && dVar29 != (double)CONCAT44(uVar26,uVar25)
             ) goto LAB_146e32624;
          lVar22 = lVar22 + 1;
        } while (lVar22 != 3);
        if ((dVar29 <= (double)param_3[4]) &&
           (0.0 < (double)CONCAT44(uVar26,uVar25) || (double)CONCAT44(uVar26,uVar25) == 0.0)) {
          local_1108 = (double)CONCAT44((int)((ulonglong)dVar28 >> 0x20),*puVar23);
          cVar9 = (**(code **)(*(longlong *)*param_6 + 0x18))
                            ((longlong *)*param_6,&local_1108,param_3);
          if (cVar9 == '\0') {
            iVar10 = 1;
            param_1 = local_1230;
            break;
          }
        }
LAB_146e32624:
        puVar23 = puVar23 + 0xe;
        param_1 = local_1230;
        iVar10 = 0;
      } while (puVar23 != puVar24);
    }
  }
  if ((iVar10 == 6) || (iVar10 == 0)) goto LAB_146e323ce;
LAB_146e32910:
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_146e3291a:
  if ((local_f0 ^ (ulonglong)auStack_1278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBP & 0xffffffff;
}



// FUNCTION 146e32c50 FUN_146e32c50 body=3767 status=ok
// SIG undefined FUN_146e32c50(void)

void FUN_146e32c50(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double param_6,undefined8 *param_7)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  ulonglong uVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_XMM3_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  ulonglong uStack_160;
  longlong local_158;
  double local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined1 local_128 [16];
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_178 = *param_3 * param_4;
  uStack_170 = 0;
  dVar3 = ABS(local_178);
  local_168 = param_4 * param_3[1];
  dVar21 = ABS(local_168);
  uStack_160 = in_XMM3_Qb;
  if ((9.99999993922529e-09 < dVar3) || (9.99999993922529e-09 < dVar21)) {
    local_128._8_4_ = (int)(in_XMM3_Qb & 0x7fffffffffffffff);
    local_128._0_8_ = dVar21;
    local_128._12_4_ = (int)((in_XMM3_Qb & 0x7fffffffffffffff) >> 0x20);
    if (dVar21 <= dVar3) {
      bVar12 = dVar3 <= 9.99999993922529e-09;
      local_108 = *param_7;
      uStack_100 = param_7[1];
      dVar22 = param_2[1] * param_6;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar25,auVar25,1);
      dVar22 = param_1[1];
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = param_2[1] - dVar23;
      bVar1 = 0.0 <= local_168;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = *param_1;
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar27,auVar27,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_168 + dVar35 + dVar23) * param_6;
      auVar16._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar16._8_8_ = 0;
      auVar27 = roundpd(auVar16,auVar16,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = *param_2 * param_6;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar20,auVar20,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar40 = (double)local_1a0 * param_5;
      local_150 = *param_2 - dVar40;
      if (9.99999993922529e-09 < dVar3) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_178;
      dVar35 = local_178 + local_150;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_178 = (local_178 * dVar36) / local_168;
      local_168 = (double)-(ulonglong)(dVar21 <= 9.99999993922529e-09);
      uStack_170 = 0;
      uStack_160 = local_128._8_8_;
      dVar44 = dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = -dVar14;
      }
      local_188._0_8_ =
           ~(ulonglong)local_168 & (ulonglong)local_178 | (ulonglong)local_168 & 0x3ff0000000000000;
      local_188._8_8_ = 0;
      dVar41 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar41 = dVar14;
      }
      dVar41 = dVar41 + local_150;
      local_150 = dVar44 + local_150;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar32,auVar32,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar14 = (dVar40 + dVar41) * param_6;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = ABS(dVar14) * 2.220446049250313e-16 + dVar14;
      auVar27 = roundpd(auVar33,auVar33,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar23 = (dVar23 + dVar43) * param_6;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = ABS(dVar23) * 2.220446049250313e-16 + dVar23;
      auVar27 = roundpd(auVar30,auVar30,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar35 + dVar44 + dVar40) * param_6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar18,auVar18,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar35 = 1.0 / dVar36;
      dVar40 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      dVar23 = dVar41;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar21) && (lVar11 < local_138)) {
          dVar21 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar21 < ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36) {
            dVar41 = dVar41 + dVar21 * dVar35;
            dVar22 = dVar22 + dVar21 * dVar40;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e33df6(&local_108,(double)lVar8 * param_5,SUB84((double)lVar7 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if (((double)local_128._0_8_ <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar21 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar41) * dVar36;
          dVar21 = dVar14 * dVar35;
          dVar22 = dVar22 + dVar14 * dVar40;
        }
        dVar41 = dVar41 + dVar21;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar23 = dVar23 + param_5 * dVar36;
          }
          else {
            dVar21 = local_150;
            if (lVar11 != local_158) {
              dVar21 = dVar23;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar21) * dVar36;
            }
            dVar23 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < (double)local_128._0_8_) {
              dVar23 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_178;
            }
            uVar13 = 0;
            if (dVar23 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            dVar23 = (double)(-(ulonglong)(dVar3 <= 9.99999993922529e-09) & (ulonglong)dVar21 |
                             ~-(ulonglong)(dVar3 <= 9.99999993922529e-09) &
                             (ulonglong)(dVar14 * dVar35 + dVar21));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_168 |
                             ~(ulonglong)local_168 & (ulonglong)(dVar14 * dVar40 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
        dVar21 = (double)local_128._0_8_;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
    else {
      bVar12 = dVar21 <= 9.99999993922529e-09;
      dVar22 = *param_2 * param_6;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ABS(dVar22) * 2.220446049250313e-16 + dVar22;
      auVar25 = roundpd(auVar28,auVar28,1);
      dVar22 = *param_1;
      dVar23 = (double)(longlong)auVar25._0_8_ * param_5;
      dVar35 = *param_2 - dVar23;
      bVar1 = 0.0 <= local_178;
      uVar5 = (ulonglong)(bVar1 || bVar12) - 1 | 1;
      dVar40 = dVar22;
      if (!bVar1 && !bVar12) {
        dVar40 = -dVar22;
      }
      dVar14 = param_1[1];
      dVar43 = -dVar22;
      if (!bVar1 && !bVar12) {
        dVar43 = dVar22;
      }
      dVar43 = dVar43 + dVar35;
      dVar22 = dVar22 * (double)(int)uVar5;
      dVar22 = dVar22 + dVar22 + dVar43;
      dVar36 = (dVar23 + dVar22) * param_6;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
      auVar27 = roundpd(auVar37,auVar37,1);
      lVar9 = (longlong)auVar27._0_8_;
      dVar40 = (dVar40 + local_178 + dVar35 + dVar23) * param_6;
      auVar38._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar38._8_8_ = 0;
      auVar27 = roundpd(auVar38,auVar38,1);
      lVar4 = (longlong)auVar27._0_8_;
      local_1b0 = lVar9;
      if (lVar9 < lVar4) {
        local_1b0 = lVar4;
      }
      dVar40 = param_2[1] * param_6;
      auVar39._8_8_ = 0;
      auVar39._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar39,auVar39,1);
      local_1a0 = (longlong)auVar27._0_8_;
      dVar35 = (double)local_1a0 * param_5;
      dVar40 = param_2[1] - dVar35;
      if (9.99999993922529e-09 < dVar21) {
        local_1b0 = lVar4;
      }
      bVar2 = 0.0 <= local_168;
      dVar21 = local_168 + dVar40;
      local_1a8 = (ulonglong)(bVar2 || bVar12);
      uVar6 = local_1a8 - 1 | 1;
      dVar36 = (double)(int)uVar6;
      local_168 = (local_168 * dVar36) / local_178;
      uStack_110 = 0;
      local_178 = (double)-(ulonglong)(dVar3 <= 9.99999993922529e-09);
      local_188._8_8_ = in_XMM3_Qb;
      local_188._0_8_ = ~(ulonglong)local_178 & (ulonglong)local_168;
      uStack_170 = 0;
      uVar42 = (undefined4)((ulonglong)dVar14 >> 0x20);
      if (!bVar2 && !bVar12) {
        uVar42 = (undefined4)((ulonglong)-dVar14 >> 0x20);
      }
      local_188 = local_188 | ZEXT416((uint)((ulonglong)local_178 >> 0x20) & 0x3ff00000) << 0x20;
      dVar44 = -dVar14;
      if (!bVar2 && !bVar12) {
        dVar44 = dVar14;
      }
      local_150 = (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar40;
      auVar34._8_8_ = 0;
      auVar34._0_8_ = ABS(local_150 * param_6) * 2.220446049250313e-16 + local_150 * param_6;
      auVar27 = roundpd(auVar34,auVar34,1);
      local_158 = (longlong)auVar27._0_8_;
      dVar44 = dVar44 + dVar40;
      dVar40 = (dVar35 + dVar44) * param_6;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar31,auVar31,1);
      lVar8 = (longlong)auVar27._0_8_;
      dVar40 = (dVar23 + dVar43) * param_6;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = ABS(dVar40) * 2.220446049250313e-16 + dVar40;
      auVar27 = roundpd(auVar29,auVar29,1);
      local_1c0 = (longlong)auVar27._0_8_;
      param_6 = (dVar21 + (double)CONCAT44(uVar42,SUB84(dVar14,0)) + dVar35) * param_6;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar27 = roundpd(auVar17,auVar17,1);
      local_190 = (longlong)auVar27._0_8_;
      local_138 = local_1b0 * uVar5;
      local_198 = local_1a8 - local_1a0;
      local_1b8 = (ulonglong)(bVar1 || bVar12) - (longlong)auVar25._0_8_;
      dVar21 = 1.0 / dVar36;
      dVar23 = 1.0 / (double)local_188._0_8_;
      local_148 = uVar6 * local_158;
      local_140 = uVar6 * local_190;
      local_130 = uVar5 * uVar5;
      lVar4 = lVar8;
      local_118 = dVar3;
      dVar40 = dVar44;
      do {
        lVar11 = lVar9 * uVar5;
        if ((9.99999993922529e-09 < dVar3) && (lVar11 < local_138)) {
          dVar35 = ((double)(local_1b8 + lVar9) * param_5 - dVar22) * (double)local_188._0_8_;
          if (dVar35 < ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36) {
            dVar44 = dVar44 + dVar35 * dVar21;
            dVar22 = dVar22 + dVar35 * dVar23;
            lVar9 = lVar9 + uVar5;
            lVar11 = lVar9 * uVar5;
          }
        }
        lVar10 = local_1c0 * uVar5;
        if (lVar10 - lVar11 == 0 || lVar10 < lVar11) {
          lVar7 = local_1c0;
          do {
            lVar10 = lVar10 + local_130;
            FUN_146e33df6(param_7,(double)lVar7 * param_5,SUB84((double)lVar8 * param_5,0));
            lVar7 = lVar7 + uVar5;
          } while (lVar10 <= lVar11);
        }
        if ((dVar3 <= 9.99999993922529e-09) || (lVar9 == local_1b0)) {
          dVar35 = param_5 * dVar36;
        }
        else {
          dVar14 = ((double)(local_198 + lVar8) * param_5 - dVar44) * dVar36;
          dVar35 = dVar14 * dVar21;
          dVar22 = dVar22 + dVar14 * dVar23;
        }
        dVar44 = dVar44 + dVar35;
        lVar11 = local_190;
        if (lVar4 != local_190) {
          lVar11 = lVar4 - local_1a0;
          if ((longlong)(lVar11 * uVar6) < local_148) {
            dVar40 = dVar40 + param_5 * dVar36;
          }
          else {
            dVar35 = local_150;
            if (lVar11 != local_158) {
              dVar35 = dVar40;
            }
            dVar14 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < local_128._0_8_) {
              dVar14 = ((double)(longlong)(lVar11 + local_1a8) * param_5 - dVar35) * dVar36;
            }
            dVar40 = 1.79769313486232e+308;
            if (9.99999993922529e-09 < dVar3) {
              dVar40 = ((double)(local_1b8 + local_1c0) * param_5 - dVar43) * local_168;
            }
            uVar13 = 0;
            if (dVar40 < dVar14) {
              uVar13 = uVar5;
            }
            local_1c0 = local_1c0 + uVar13;
            uVar13 = -(ulonglong)(local_128._0_8_ <= 9.99999993922529e-09);
            dVar40 = (double)(uVar13 & (ulonglong)dVar35 |
                             ~uVar13 & (ulonglong)(dVar14 * dVar21 + dVar35));
            dVar43 = (double)((ulonglong)dVar43 & (ulonglong)local_178 |
                             ~(ulonglong)local_178 & (ulonglong)(dVar14 * dVar23 + dVar43));
          }
          lVar11 = lVar4 + uVar6;
        }
        lVar8 = lVar8 + uVar6;
        lVar4 = lVar11;
      } while ((lVar9 != local_1b0) ||
              (lVar8 * uVar6 - local_140 == 0 || (longlong)(lVar8 * uVar6) < local_140));
    }
  }
  else {
    dVar21 = (*param_2 - *param_1) * param_6;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar25 = roundpd(auVar24,auVar24,1);
    dVar21 = (*param_2 + *param_1) * param_6;
    auVar26._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
    auVar26._8_8_ = 0;
    auVar27 = roundpd(auVar26,auVar26,1);
    if ((longlong)auVar25._0_8_ <= (longlong)auVar27._0_8_) {
      dVar21 = (param_2[1] - param_1[1]) * param_6;
      auVar19._0_8_ = ABS(dVar21) * 2.220446049250313e-16 + dVar21;
      auVar19._8_8_ = 0;
      auVar20 = roundpd(auVar19,auVar19,1);
      param_6 = (param_2[1] + param_1[1]) * param_6;
      auVar15._0_8_ = ABS(param_6) * 2.220446049250313e-16 + param_6;
      auVar15._8_8_ = 0;
      auVar16 = roundpd(auVar15,auVar15,1);
      lVar4 = (longlong)auVar25._0_8_;
      do {
        if ((longlong)auVar20._0_8_ <= (longlong)auVar16._0_8_) {
          lVar9 = (longlong)auVar20._0_8_;
          do {
            FUN_146e33df6(param_7,(double)lVar4 * param_5,SUB84((double)lVar9 * param_5,0));
            lVar9 = lVar9 + 1;
          } while ((longlong)auVar16._0_8_ + 1 != lVar9);
        }
        bVar12 = lVar4 != (longlong)auVar27._0_8_;
        lVar4 = lVar4 + 1;
      } while (bVar12);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146e33b08 FUN_146e33b08 body=259 status=ok
// SIG undefined FUN_146e33b08(void)

undefined8 FUN_146e33b08(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e33b75:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e33b75;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e33c0c(param_3,(longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e33c0c FUN_146e33c0c body=488 status=ok
// SIG undefined FUN_146e33c0c(void)

undefined8 FUN_146e33c0c(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  double local_98 [6];
  undefined8 local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar1 = (double *)param_1[7];
  local_98[2] = pdVar1[2];
  local_98[0] = *pdVar1;
  local_98[1] = pdVar1[1];
  pdVar1 = (double *)param_1[5];
  pdVar2 = (double *)param_1[1];
  dVar3 = (*(double *)(param_2 + 2) - *pdVar1) - *pdVar2;
  local_68 = dVar3;
  local_60 = (*(double *)(param_2 + 4) - pdVar1[1]) - pdVar2[1];
  local_58 = (*(double *)(param_2 + 6) - pdVar1[2]) - pdVar2[2];
  local_98[3] = (*(double *)(param_2 + 8) + *pdVar1) - *pdVar2;
  local_98[4] = (*(double *)(param_2 + 10) + pdVar1[1]) - pdVar2[1];
  local_98[5] = (*(double *)(param_2 + 0xc) + pdVar1[2]) - pdVar2[2];
  lVar8 = 0;
  dVar10 = 1.79769313486232e+308;
  dVar9 = 0.0;
  do {
    if (*(char *)(*(longlong *)param_1[8] + lVar8) == '\x01') {
      if (0.0 < (double)(&local_68)[lVar8]) goto LAB_146e33db1;
      dVar11 = 0.0;
      dVar4 = 1.79769313486232e+308;
      if (local_98[lVar8 + 3] <= 0.0 && local_98[lVar8 + 3] != 0.0) goto LAB_146e33db1;
    }
    else {
      dVar11 = (double)(&local_68)[lVar8] * local_98[lVar8];
      dVar4 = local_98[lVar8] * local_98[lVar8 + 3];
    }
    dVar5 = dVar4;
    if (dVar11 <= dVar4) {
      dVar5 = dVar11;
    }
    if (dVar9 <= dVar5) {
      dVar9 = dVar5;
    }
    if (dVar11 <= dVar4) {
      dVar11 = dVar4;
    }
    if (dVar11 <= dVar10) {
      dVar10 = dVar11;
    }
    if (dVar10 < dVar9) goto LAB_146e33db1;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 3);
  if ((dVar9 <= *(double *)(param_1[2] + 0x20)) && (0.0 <= dVar10)) {
    *(double *)param_1[3] = dVar9;
    local_68 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*param_2);
    cVar6 = (**(code **)(**(longlong **)*param_1 + 0x18))
                      (*(longlong **)*param_1,&local_68,param_1[2]);
    if (cVar6 == '\0') {
      uVar7 = 0;
      goto LAB_146e33db3;
    }
  }
LAB_146e33db1:
  uVar7 = 1;
LAB_146e33db3:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146e33df6 FUN_146e33df6 body=410 status=ok
// SIG undefined FUN_146e33df6(void)

void FUN_146e33df6(longlong *param_1,double param_2,double param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    param_2 = param_2 * *(double *)(lVar3 + 0xd0);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = ABS(param_2) * 2.220446049250313e-16 + param_2;
    auVar9 = roundpd(auVar9,auVar9,1);
    param_3 = param_3 * *(double *)(lVar3 + 0xd0);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = ABS(param_3) * 2.220446049250313e-16 + param_3;
    auVar8 = roundpd(auVar8,auVar8,1);
    uVar7 = (uint)(longlong)auVar9._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar5 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uint)(longlong)auVar8._0_8_;
    uVar7 = (uVar7 & 0xff00) << 8 | uVar7 & 0xff;
    uVar7 = (uVar7 << 4 | uVar7) & 0xf0f0f0f;
    uVar7 = (uVar7 * 4 | uVar7) & 0x33333333;
    uVar7 = (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa | (uVar5 * 2 | uVar5) & 0x55555555;
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar5 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & uVar7) * 4);
    if (uVar5 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar5 * 0x14);
        if (*puVar1 == uVar7) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return;
          }
          plVar4 = (longlong *)param_1[1];
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146dedd8c(plVar4,iVar2);
          }
          lVar3 = *plVar4;
          *(uint *)(lVar3 + (longlong)iVar2 * 8) = puVar1[1];
          *(uint *)(lVar3 + 4 + (longlong)iVar2 * 8) = puVar1[2];
          return;
        }
        uVar5 = puVar1[3];
      } while (uVar5 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 146e33f90 FUN_146e33f90 body=131 status=ok
// SIG undefined FUN_146e33f90(void)

void FUN_146e33f90(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e34014(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e34014 FUN_146e34014 body=145 status=ok
// SIG undefined FUN_146e34014(void)

void FUN_146e34014(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e340a6 FUN_146e340a6 body=178 status=ok
// SIG undefined FUN_146e340a6(void)

void FUN_146e340a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_146e3415a(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3415a FUN_146e3415a body=1687 status=ok
// SIG undefined FUN_146e3415a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_146e3415a(double ***param_1,double *param_2,double *param_3,double *param_4,
                       double *param_5,double *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  double *pdVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  double **ppdVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  double **ppdVar14;
  longlong lVar15;
  double ***unaff_RSI;
  double *pdVar16;
  ulonglong uVar17;
  double ***pppdVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1148 [32];
  double *local_1128;
  double *local_1120;
  undefined8 local_1118;
  undefined8 local_1110;
  undefined8 local_1108;
  double ***local_1100;
  double local_10f8 [6];
  double local_10c8 [9];
  double ***local_1080;
  double *local_1078;
  double *local_1070;
  double *local_1068 [3];
  double **local_1050;
  double *pdStack_1048;
  double *local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  double **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x146e34170;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1148;
  local_1070 = (double *)0x0;
  local_1100 = param_1;
  if ((longlong)*(int *)(param_1 + 0x22) != 0) {
    ppdVar8 = param_1[0x21];
    ppdVar14 = ppdVar8 + (longlong)*(int *)(param_1 + 0x22) * 7;
    unaff_RSI = &local_1050;
    do {
      local_1068[2] = ppdVar8[3];
      local_1068[0] = ppdVar8[1];
      local_1068[1] = ppdVar8[2];
      local_1040 = ppdVar8[6];
      local_1050 = (double **)ppdVar8[4];
      pdStack_1048 = ppdVar8[5];
      lVar7 = 0;
      do {
        if (((double)local_1068[lVar7 + 3] <= param_5[lVar7] &&
             param_5[lVar7] != (double)local_1068[lVar7 + 3]) ||
           (param_5[lVar7 + 3] <= (double)local_1068[lVar7] &&
            (double)local_1068[lVar7] != param_5[lVar7 + 3])) goto LAB_146e3425c;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 3);
      local_10f8[0] = (double)CONCAT44(local_10f8[0]._4_4_,*(undefined4 *)ppdVar8);
      cVar4 = (**(code **)(*(longlong *)*param_6 + 8))((longlong *)*param_6,local_10f8);
      param_1 = local_1100;
      if (cVar4 == '\0') goto LAB_146e3469b;
LAB_146e3425c:
      ppdVar8 = ppdVar8 + 7;
    } while (ppdVar8 != ppdVar14);
  }
  if (param_1[0x18] == (double **)0x0) {
    local_1068[0] = param_6;
    local_1068[2] = param_3;
    local_1050 = &local_1070;
    pdStack_1048 = param_5;
    local_1040 = param_4;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    local_1068[1] = param_2;
    if (0 < (int)*(uint *)(param_1 + 7)) {
      if ((((0.0 < (double)local_1100[0x19]) &&
           (uVar11 = (ulonglong)*(int *)(local_1100 + 0x1b), 0 < (longlong)uVar11)) &&
          (0 < *(int *)((longlong)local_1100 + 0xdc))) &&
         ((0 < *(int *)(local_1100 + 0x1c) &&
          (*(int *)((longlong)local_1100 + 0x84) < *(int *)(local_1100 + 0xb))))) {
        ppdVar8 = local_1100[0x1a];
        auVar23._8_8_ = 0;
        auVar23._0_8_ =
             ABS(*param_5 * (double)ppdVar8) * 2.220446049250313e-16 + *param_5 * (double)ppdVar8;
        auVar23 = roundpd(auVar23,auVar23,1);
        lVar7 = (longlong)auVar23._0_8_;
        auVar24._8_8_ = 0;
        auVar24._0_8_ =
             ABS(param_5[3] * (double)ppdVar8) * 2.220446049250313e-16 +
             param_5[3] * (double)ppdVar8;
        auVar23 = roundpd(auVar24,auVar24,1);
        lVar13 = (longlong)auVar23._0_8_;
        if (lVar7 <= lVar13) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ =
               ABS(param_5[1] * (double)ppdVar8) * 2.220446049250313e-16 +
               param_5[1] * (double)ppdVar8;
          auVar23 = roundpd(auVar25,auVar25,1);
          lVar19 = (longlong)auVar23._0_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ =
               ABS((double)ppdVar8 * param_5[4]) * 2.220446049250313e-16 +
               (double)ppdVar8 * param_5[4];
          auVar23 = roundpd(auVar22,auVar22,1);
          lVar15 = (longlong)auVar23._0_8_;
          if (((lVar19 <= lVar15) && (uVar12 = (lVar13 - lVar7) + 1, uVar12 <= uVar11)) &&
             ((uVar17 = (lVar15 - lVar19) + 1, uVar17 <= uVar11 &&
              (uVar17 = uVar17 * uVar12, uVar17 < uVar11 || uVar17 - uVar11 == 0)))) {
            local_1078 = local_10f8;
            local_10f8[0] = 0.0;
            local_10f8[1] = 0.0;
            local_1080 = local_1100;
            do {
              uVar9 = ((uint)lVar7 & 0xff00) << 8 | (uint)lVar7 & 0xff;
              uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
              uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
              lVar20 = lVar19;
              do {
                uVar10 = ((uint)lVar20 & 0xff00) << 8 | (uint)lVar20 & 0xff;
                uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
                uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
                cVar4 = FUN_146e34d64(&local_1080,
                                      (uVar10 * 2 | uVar10 * 4) & 0xaaaaaaaa |
                                      (uVar9 * 2 | uVar9) & 0x55555555);
                if (cVar4 == '\0') goto LAB_146e347aa;
                lVar20 = lVar20 + 1;
              } while (lVar15 + 1 != lVar20);
              bVar21 = lVar7 != lVar13;
              lVar7 = lVar7 + 1;
            } while (bVar21);
LAB_146e347aa:
            ppdVar8 = local_1068;
            pdVar16 = local_10f8 + 6;
            for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar16 = (double)*ppdVar8;
              ppdVar8 = ppdVar8 + 1;
              pdVar16 = pdVar16 + 1;
            }
            uVar11 = FUN_146e347f2(local_1100,local_10f8);
            unaff_RSI = (double ***)(uVar11 & 0xffffffff);
            if (local_10f8[0] != 0.0) {
              FUN_1400020a8();
            }
            cVar4 = (char)unaff_RSI;
            goto joined_r0x000146e34695;
          }
        }
      }
      unaff_RSI = (double ***)local_1100[6];
      lVar7 = (ulonglong)*(uint *)(param_1 + 7) * 0x38;
      do {
        cVar4 = FUN_146e348f6(local_1068,unaff_RSI);
        if (cVar4 == '\0') goto LAB_146e3469b;
        unaff_RSI = unaff_RSI + 7;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
  }
  else {
    local_1108 = param_9;
    local_1110 = param_8;
    local_1118 = param_7;
    local_1120 = param_6;
    local_1128 = param_5;
    cVar4 = FUN_146e3415a(param_1[0x18],param_2,param_3,param_4);
joined_r0x000146e34695:
    if (cVar4 == '\0') {
LAB_146e3469b:
      uVar11 = 0;
      goto LAB_146e34620;
    }
  }
  pppdVar18 = local_1100;
  bVar5 = *(byte *)(local_1100 + 8);
  if ((bVar5 == 1) && (*(int *)(local_1100 + 0x32) != 0)) {
    local_1068[0] = (double *)CONCAT71(local_1068[0]._1_7_,1);
    cVar4 = FUN_146e3499a(local_1100,param_5,param_6);
    if (cVar4 != '\0') {
      uVar11 = CONCAT71((int7)((ulonglong)pppdVar18 >> 8),local_1068[0]._0_1_);
      goto LAB_146e34620;
    }
    bVar5 = *(byte *)(pppdVar18 + 8);
    unaff_RSI = pppdVar18;
  }
  local_78 = (double **)0x0;
  local_6c = 0xff;
  if ((bVar5 & 1) == 0) {
    iVar6 = 0;
    if (*(int *)(pppdVar18 + 3) != 0) goto LAB_146e344ac;
  }
  else {
    iVar6 = *(int *)((longlong)pppdVar18 + 0x44);
    if (iVar6 != -1) {
LAB_146e344ac:
      local_70 = 1;
      local_1068[0] = (double *)CONCAT44(local_1068[0]._4_4_,iVar6);
      local_1068[1] = (double *)0x0;
      local_70 = 1;
      do {
        ppdVar8 = local_78;
        if (local_78 == (double **)0x0) {
          ppdVar8 = local_1068;
        }
        lVar7 = (longlong)(int)local_70;
        local_70 = local_70 - 1;
        ppdVar14 = pppdVar18[2];
        lVar13 = (longlong)*(int *)(ppdVar8 + lVar7 * 2 + -2) * 0x70;
        if ((*(byte *)((longlong)ppdVar14 + lVar13 + 0x6c) & 1) == 0) {
          lVar7 = 0;
          lVar15 = 0;
          do {
            uVar9 = local_70;
            pdVar3 = local_1070;
            local_10f8[2] = (double)*(undefined8 *)((longlong)ppdVar14 + lVar15 + lVar13 + 0x10);
            pdVar16 = (double *)((longlong)ppdVar14 + lVar15 + lVar13);
            local_10f8[0] = *pdVar16;
            local_10f8[1] = pdVar16[1];
            local_10f8[5] = (double)*(undefined8 *)((longlong)ppdVar14 + lVar15 + lVar13 + 0x28);
            puVar1 = (undefined8 *)((longlong)ppdVar14 + lVar15 + lVar13 + 0x18);
            local_10f8[3] = (double)*puVar1;
            local_10f8[4] = (double)puVar1[1];
            lVar19 = 0;
            do {
              if ((local_10f8[lVar19 + 3] <= param_5[lVar19] &&
                   param_5[lVar19] != local_10f8[lVar19 + 3]) ||
                 (param_5[lVar19 + 3] <= local_10f8[lVar19] &&
                  local_10f8[lVar19] != param_5[lVar19 + 3])) goto LAB_146e345ab;
              lVar19 = lVar19 + 1;
            } while (lVar19 != 3);
            uVar2 = *(undefined4 *)((longlong)ppdVar14 + lVar7 * 4 + lVar13 + 0x60);
            lVar19 = (longlong)(int)local_70;
            local_70 = local_70 + 1;
            if (local_6c < local_70) {
              FUN_146e34e10(local_1068,uVar9);
              pppdVar18 = local_1100;
            }
            ppdVar8 = local_78;
            if (local_78 == (double **)0x0) {
              ppdVar8 = local_1068;
            }
            *(undefined4 *)(ppdVar8 + lVar19 * 2) = uVar2;
            ppdVar8[lVar19 * 2 + 1] = pdVar3;
LAB_146e345ab:
            lVar7 = lVar7 + 1;
            lVar15 = lVar15 + 0x30;
          } while (lVar15 != 0x60);
        }
        else {
          cVar4 = FUN_146e34a82(pppdVar18[4] +
                                (longlong)
                                *(int *)(ppdVar14 +
                                        (longlong)*(int *)(ppdVar8 + lVar7 * 2 + -2) * 0xe + 0xc) *
                                9,param_5,param_6);
          pppdVar18 = local_1100;
          if (cVar4 == '\0') {
            uVar11 = 0;
            goto LAB_146e3460e;
          }
        }
      } while (local_70 != 0);
      uVar11 = CONCAT71((int7)((ulonglong)local_1068 >> 8),1);
LAB_146e3460e:
      if (local_78 != (double **)0x0) {
        FUN_1400020a8();
      }
      goto LAB_146e34620;
    }
  }
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
LAB_146e34620:
  if ((local_60 ^ (ulonglong)auStack_1148) == DAT_14c707940) {
    return uVar11 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e347f2 FUN_146e347f2 body=259 status=ok
// SIG undefined FUN_146e347f2(void)

undefined8 FUN_146e347f2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  bVar9 = false;
  iVar6 = 0;
  do {
    if ((bVar9) || ((longlong)(int)param_2[1] == 0)) {
LAB_146e3485f:
      if (*(int *)(param_1 + 0xb8) <= iVar6) {
        return 1;
      }
      iVar5 = *(int *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar6 * 4);
      iVar6 = iVar6 + 1;
      bVar9 = true;
    }
    else {
      iVar5 = 0x7fffffff;
      bVar9 = true;
      lVar8 = 0;
      do {
        if (0 < *(int *)(*param_2 + 4 + lVar8)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(*param_2 + lVar8) * 4)
          ;
          bVar3 = iVar5 <= iVar1;
          if (iVar1 < iVar5) {
            iVar5 = iVar1;
          }
          bVar9 = (bool)(bVar9 & bVar3);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)param_2[1] * 8 != lVar8);
      if (bVar9) goto LAB_146e3485f;
      lVar8 = param_2[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar2 = *param_2;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar2 + 4 + lVar7);
          if ((0 < iVar1) &&
             (*(int *)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(lVar2 + lVar7) * 4) ==
              iVar5)) {
            *(int *)(lVar2 + lVar7) = *(int *)(lVar2 + lVar7) + 1;
            *(int *)(lVar2 + 4 + lVar7) = iVar1 + -1;
          }
          lVar7 = lVar7 + 8;
        } while ((longlong)(int)lVar8 << 3 != lVar7);
      }
      bVar9 = false;
    }
    cVar4 = FUN_146e348f6(param_3,(longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x30));
    if (cVar4 == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 146e348f6 FUN_146e348f6 body=162 status=ok
// SIG undefined FUN_146e348f6(void)

undefined8 FUN_146e348f6(undefined8 *param_1,undefined4 *param_2)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  double local_38 [6];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = (double)*(undefined8 *)(param_2 + 6);
  local_38[0] = *(double *)(param_2 + 2);
  local_38[1] = (double)*(undefined8 *)(param_2 + 4);
  local_38[5] = (double)*(undefined8 *)(param_2 + 0xc);
  local_38[3] = (double)*(undefined8 *)(param_2 + 8);
  local_38[4] = (double)*(undefined8 *)(param_2 + 10);
  lVar5 = 0;
  do {
    dVar2 = *(double *)(param_1[4] + lVar5 * 8);
    if (local_38[lVar5 + 3] <= dVar2 && dVar2 != local_38[lVar5 + 3]) goto LAB_146e34977;
    pdVar1 = (double *)(param_1[4] + 0x18 + lVar5 * 8);
    if (*pdVar1 <= local_38[lVar5] && local_38[lVar5] != *pdVar1) goto LAB_146e34977;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  local_3c = *param_2;
  cVar3 = (**(code **)(**(longlong **)*param_1 + 8))();
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
LAB_146e34977:
    uVar4 = 1;
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e3499a FUN_146e3499a body=231 status=ok
// SIG undefined FUN_146e3499a(void)

undefined8
FUN_146e3499a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  
  *param_4 = 1;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x38))();
  if (lVar3 != 0) {
    piVar4 = (int *)(**(code **)(*(longlong *)*param_3 + 0x38))();
    iVar1 = *piVar4;
    if (iVar1 < *(int *)(param_1 + 0x120)) {
      lVar3 = *(longlong *)(param_1 + 0x118) + (longlong)iVar1 * 0x18;
      if (lVar3 == 0) {
        return 0;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x118) + 0x14 + (longlong)iVar1 * 0x18) == '\0') {
        return 0;
      }
      iVar1 = *(int *)(lVar3 + 8);
      lVar3 = (longlong)iVar1;
      if ((lVar3 != -1) && (iVar1 < *(int *)(param_1 + 0x1a0) + -1)) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x198) + lVar3 * 4);
        lVar5 = (longlong)iVar1;
        if (*(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4) <= iVar1) {
          return 1;
        }
        do {
          cVar2 = FUN_146e34a82((longlong)*(int *)(*(longlong *)(param_1 + 0x188) + lVar5 * 4) *
                                0x48 + *(longlong *)(param_1 + 0x20),param_2,param_3);
          if (cVar2 == '\0') {
            *param_4 = 0;
            return 1;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(*(longlong *)(param_1 + 0x198) + 4 + lVar3 * 4));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 146e34a82 FUN_146e34a82 body=736 status=ok
// SIG undefined FUN_146e34a82(void)

ulonglong FUN_146e34a82(longlong param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_c8 [44];
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_84;
  ulonglong local_80;
  double dVar3;
  double dVar6;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *(uint *)(param_1 + 0x38);
  local_98 = (ulonglong)uVar7;
  local_9c = uVar7 + 3;
  if (-1 < (int)uVar7) {
    local_9c = uVar7;
  }
  local_9c = (int)local_9c >> 2;
  if (3 < (int)uVar7) {
    local_90 = (ulonglong)local_9c;
    lVar21 = 0;
    uVar20 = 0;
    do {
      lVar22 = *(longlong *)(param_1 + 0x30);
      lVar16 = (uVar20 * 4 + 3) * 0x38;
      lVar17 = (uVar20 * 4 + 2) * 0x38;
      lVar18 = (uVar20 * 4 + 1) * 0x38;
      lVar19 = uVar20 * 0xe0;
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      lVar23 = -(ulonglong)(dVar3 < *(double *)(lVar22 + 8 + lVar18));
      auVar28._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 8 + lVar16));
      auVar28._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 8 + lVar17));
      dVar3 = param_2[1];
      dVar4 = param_2[1];
      auVar25._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar18) < dVar4);
      auVar25._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar19) < dVar3);
      auVar10._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar18) < *param_2);
      auVar10._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar19) < *param_2);
      auVar30._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar16) < dVar4);
      auVar30._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar17) < dVar3);
      dVar3 = param_2[4];
      dVar4 = param_2[4];
      auVar8._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar16) < *param_2);
      auVar8._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar17) < *param_2);
      dVar5 = param_2[2];
      dVar6 = param_2[2];
      auVar24._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar18) < dVar6);
      auVar24._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar19) < dVar5);
      auVar12._8_4_ = (int)lVar23;
      auVar12._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 8 + lVar19));
      auVar12._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      auVar26._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar16) < dVar6);
      auVar26._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar17) < dVar5);
      dVar2 = param_2[5];
      dVar5 = param_2[5];
      auVar29._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar22 + 0x18 + lVar18));
      auVar29._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 0x18 + lVar19));
      auVar9._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar22 + 0x10 + lVar18));
      auVar9._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 0x10 + lVar19));
      auVar27._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar22 + 0x18 + lVar16));
      auVar27._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 0x18 + lVar17));
      auVar11._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar22 + 0x10 + lVar16));
      auVar11._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 0x10 + lVar17));
      iVar14 = movmskpd((int)lVar22,auVar29 | auVar9 | auVar24 | auVar12 | auVar25 | auVar10);
      iVar15 = movmskpd((int)lVar16,auVar27 | auVar11 | auVar26 | auVar28 | auVar30 | auVar8);
      lVar22 = 0;
      unaff_RBP = lVar21;
      do {
        if (((uint)(iVar14 + iVar15 * 4) >> ((uint)lVar22 & 0x1f) & 1) == 0) {
          local_84 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + unaff_RBP);
          cVar13 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_84);
          if (cVar13 == '\0') goto LAB_146e34d24;
        }
        lVar22 = lVar22 + 1;
        unaff_RBP = unaff_RBP + 0x38;
      } while (lVar22 != 4);
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0xe0;
    } while (uVar20 != local_90);
  }
  uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  iVar14 = (int)local_98;
  if ((int)(local_9c << 2) < iVar14) {
    lVar21 = (longlong)(int)(local_9c << 2);
    lVar22 = lVar21 * 0x38 + 0x20;
    do {
      lVar16 = *(longlong *)(param_1 + 0x30) + lVar22;
      lVar17 = -3;
      do {
        dVar2 = *(double *)(lVar16 + lVar17 * 8);
        if ((param_2[lVar17 + 6] <= dVar2 && dVar2 != param_2[lVar17 + 6]) ||
           (pdVar1 = (double *)(lVar16 + 0x18 + lVar17 * 8),
           *pdVar1 <= param_2[lVar17 + 3] && param_2[lVar17 + 3] != *pdVar1)) goto LAB_146e34d16;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0);
      local_84 = *(undefined4 *)(lVar21 * 0x38 + *(longlong *)(param_1 + 0x30));
      cVar13 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_84);
      if (cVar13 == '\0') goto LAB_146e34d24;
LAB_146e34d16:
      lVar21 = lVar21 + 1;
      lVar22 = lVar22 + 0x38;
    } while (iVar14 != (int)lVar21);
  }
LAB_146e34d26:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
LAB_146e34d24:
  uVar20 = 0;
  goto LAB_146e34d26;
}



// FUNCTION 146e34d64 FUN_146e34d64 body=172 status=ok
// SIG undefined FUN_146e34d64(void)

undefined8 FUN_146e34d64(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar3 = (uint *)*param_1;
  if (puVar3[0x16] != puVar3[0x21]) {
    puVar5 = puVar3 + 0x22;
    if (*(uint **)(puVar3 + 0x24) != (uint *)0x0) {
      puVar5 = *(uint **)(puVar3 + 0x24);
    }
    uVar4 = puVar5[puVar3[0x26] - 1 & param_2];
    if (uVar4 != 0xffffffff) {
      puVar3 = *(uint **)(puVar3 + 0x14);
      do {
        puVar5 = puVar3 + (longlong)(int)uVar4 * 5;
        if (*puVar5 == param_2) {
          puVar3 = puVar5 + 1;
          if (((ulonglong)puVar3 & 0xfffffffffffffffb) != 0) {
            puVar2 = (ulonglong *)param_1[1];
            iVar1 = (int)puVar2[1];
            *(uint *)(puVar2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)puVar2 + 0xc) < iVar1 + 1U) {
              FUN_146dedd8c(puVar2,iVar1);
            }
            puVar3 = (uint *)*puVar2;
            puVar3[(longlong)iVar1 * 2] = puVar5[1];
            puVar3[(longlong)iVar1 * 2 + 1] = puVar5[2];
          }
          break;
        }
        uVar4 = puVar5[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}



// FUNCTION 146e34e10 FUN_146e34e10 body=131 status=ok
// SIG undefined FUN_146e34e10(void)

void FUN_146e34e10(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xff8);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0xff;
    if (0xff < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0xff < *(uint *)(param_1 + 0xffc)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 4,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 4)) {
        uVar4 = uVar2 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xffc) = (int)uVar4;
    FUN_146e34e94(param_1,param_2,uVar4,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 146e34e94 FUN_146e34e94 body=145 status=ok
// SIG undefined FUN_146e34e94(void)

void FUN_146e34e94(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xff0);
  if ((uint)param_3 < 0x100) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xff0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xff0),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xff0,param_2,param_3,param_4);
  return;
}



// FUNCTION 146e34f26 FUN_146e34f26 body=116 status=ok
// SIG undefined FUN_146e34f26(void)

void FUN_146e34f26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xf8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xf8)) {
      uVar2 = uVar1 / 0xf8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xf8,8);
  }
  return;
}



// FUNCTION 146e34f9a FUN_146e34f9a body=320 status=ok
// SIG undefined FUN_146e34f9a(void)

undefined8 FUN_146e34f9a(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e35090;
            goto LAB_146e3504f;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e34fad;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e34fad;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e35090:
    if (uVar10 == uVar5) goto LAB_146e34fad;
  }
LAB_146e3504f:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e34fad:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e350da FUN_146e350da body=978 status=ok
// SIG undefined FUN_146e350da(void)

undefined8 FUN_146e350da(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int *piVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  ulonglong local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  plVar1 = (longlong *)(lVar2 + 0x50);
  iVar10 = *(int *)(lVar2 + 0x58);
  iVar13 = *(int *)(lVar2 + 0x84);
  local_5c = param_2;
  if (iVar10 != iVar13) {
    lVar4 = *(longlong *)(lVar2 + 0x90);
    if (*(longlong *)(lVar2 + 0x90) == 0) {
      lVar4 = lVar2 + 0x88;
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      iVar6 = *(int *)param_1[1];
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if (puVar9 + 1 != (uint *)0x0 && puVar9 != (uint *)0x0) {
            uVar12 = puVar9[2];
            uVar7 = (ulonglong)uVar12;
            if (0 < (int)uVar12) {
              uVar3 = puVar9[1];
              uVar5 = (uVar12 + uVar3) - 1;
              local_68 = (ulonglong)uVar5;
              uVar15 = (int)(uVar5 + uVar3) / 2;
              iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)(int)uVar15 * 4);
              uVar11 = uVar5;
              local_70 = uVar7;
              if (iVar14 != iVar6) goto LAB_146e353ee;
              goto LAB_146e352d5;
            }
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
    goto LAB_146e35167;
  }
  iVar6 = *(int *)param_1[2];
  goto LAB_146e3533b;
  while( true ) {
    if (iVar13 < iVar6) {
      uVar3 = uVar11 + 1;
      iVar13 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar3) goto LAB_146e3544c;
      uVar12 = uVar11 - 1;
      iVar13 = uVar11 + uVar3 + -1;
    }
    uVar11 = iVar13 / 2;
    iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
    if (iVar13 == iVar6) break;
LAB_146e35224:
    if (uVar3 == uVar12) {
      uVar3 = uVar3 + (iVar13 < iVar6);
LAB_146e3544c:
      if (uVar3 != 0xffffffff) {
        if ((int)uVar3 < iVar10) {
          lVar4 = (longlong)iVar10;
          do {
            *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + lVar4 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + -4 + lVar4 * 4);
            lVar4 = lVar4 + -1;
          } while ((int)uVar3 < lVar4);
          lVar4 = *(longlong *)(lVar2 + 0xa0);
        }
        piVar8 = (int *)(lVar4 + (longlong)(int)uVar3 * 4);
LAB_146e35326:
        puVar9 = puVar9 + 2;
        *piVar8 = iVar6;
        goto LAB_146e353c0;
      }
      break;
    }
  }
  goto LAB_146e353c2;
  while( true ) {
    if (iVar14 < iVar6) {
      uVar3 = uVar15 + 1;
      iVar14 = uVar15 + uVar11 + 1;
    }
    else {
      if (uVar15 == uVar3) goto LAB_146e35167;
      uVar11 = uVar15 - 1;
      iVar14 = uVar15 + uVar3 + -1;
    }
    uVar15 = iVar14 / 2;
    iVar14 = *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)(int)uVar15 * 4);
    if (iVar14 == iVar6) break;
LAB_146e353ee:
    if (uVar3 == uVar11) goto LAB_146e35167;
  }
LAB_146e352d5:
  if (uVar15 != 0xffffffff) {
    if ((int)uVar15 < (int)uVar5) {
      lVar4 = (longlong)(int)uVar15;
      do {
        *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + lVar4 * 4) =
             *(undefined4 *)(*(longlong *)(lVar2 + 0xa0) + 4 + lVar4 * 4);
        lVar4 = lVar4 + 1;
      } while ((int)uVar5 != lVar4);
      uVar12 = puVar9[2];
    }
    puVar9[2] = uVar12 - 1;
    iVar10 = *(int *)(lVar2 + 0x58);
    iVar13 = *(int *)(lVar2 + 0x84);
  }
LAB_146e35167:
  iVar6 = *(int *)param_1[2];
  if (iVar10 != iVar13) {
    lVar4 = lVar2 + 0x88;
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      lVar4 = *(longlong *)(lVar2 + 0x90);
    }
    uVar12 = *(uint *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar12 * 0x14);
        if (*puVar9 == param_2) {
          if ((puVar9 != (uint *)0x0) && (puVar9 + 1 != (uint *)0x0)) {
            uVar12 = puVar9[2];
            if (*(int *)(lVar2 + 0xe0) <= (int)uVar12) goto LAB_146e353c2;
            uVar3 = puVar9[1];
            if ((int)uVar12 < 1) {
              piVar8 = (int *)((longlong)(int)uVar3 * 4 + *(longlong *)(lVar2 + 0xa0));
              goto LAB_146e35326;
            }
            iVar10 = uVar3 + uVar12;
            lVar4 = *(longlong *)(lVar2 + 0xa0);
            uVar11 = (int)(uVar3 + iVar10 + -1) / 2;
            iVar13 = *(int *)(lVar4 + (longlong)(int)uVar11 * 4);
            if (iVar13 == iVar6) goto LAB_146e353c2;
            uVar12 = (uVar12 + uVar3) - 1;
            goto LAB_146e35224;
          }
          break;
        }
        uVar12 = puVar9[3];
      } while (uVar12 != 0xffffffff);
    }
  }
LAB_146e3533b:
  local_58 = &local_5c;
  FUN_146dee3ec(plVar1,&local_4c,&local_58,0);
  lVar4 = *(longlong *)(lVar2 + 0x50) + (longlong)local_4c * 0x14;
  piVar8 = (int *)(lVar4 + 4);
  *piVar8 = *(int *)(lVar2 + 0xa8);
  *(undefined4 *)(lVar4 + 8) = 1;
  iVar10 = *(int *)(lVar2 + 0xa8);
  *(uint *)(lVar2 + 0xa8) = iVar10 + *(uint *)(lVar2 + 0xe0);
  if ((uint)(*(int *)(lVar2 + 0xac) - iVar10) < *(uint *)(lVar2 + 0xe0)) {
    FUN_1446f48e2(lVar2 + 0xa0);
  }
  *(int *)(*(longlong *)(lVar2 + 0xa0) + (longlong)*piVar8 * 4) = iVar6;
  puVar9 = (uint *)(lVar2 + 0xe4);
LAB_146e353c0:
  *puVar9 = *puVar9 + 1;
LAB_146e353c2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar9 >> 8),1);
}



// FUNCTION 146e354ae FUN_146e354ae body=1293 status=ok
// SIG undefined FUN_146e354ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146e354ae(longlong param_1,double *param_2,undefined1 *param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  
  *param_3 = 0;
  dVar11 = (double)_DAT_14c75efe0;
  dVar8 = *param_2 - dVar11;
  dVar9 = param_2[1] - dVar11;
  dVar10 = param_2[2] - dVar11;
  dVar12 = param_2[3] + dVar11;
  dVar13 = param_2[4] + dVar11;
  dVar11 = dVar11 + param_2[5];
  plVar1 = (longlong *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1d4) < 0) {
    FUN_14098bf12(plVar1,0);
  }
  uVar21 = (ulonglong)*(int *)(param_1 + 0x44);
  lVar23 = *(longlong *)(param_1 + 0x10);
  lVar18 = uVar21 * 0x70;
  dVar32 = *(double *)(lVar23 + 0x10 + lVar18);
  dVar27 = dVar10;
  if (dVar32 <= dVar10) {
    dVar27 = dVar32;
  }
  dVar32 = *(double *)(lVar23 + 8 + lVar18);
  dVar30 = dVar9;
  if (dVar32 <= dVar9) {
    dVar30 = dVar32;
  }
  dVar32 = dVar8;
  if (*(double *)(lVar23 + lVar18) <= dVar8) {
    dVar32 = *(double *)(lVar23 + lVar18);
  }
  lVar24 = lVar23 + lVar18;
  dVar2 = *(double *)(lVar23 + 0x28 + lVar18);
  dVar33 = dVar11;
  if (dVar11 <= dVar2) {
    dVar33 = dVar2;
  }
  dVar2 = *(double *)(lVar23 + 0x20 + lVar18);
  dVar28 = dVar13;
  if (dVar13 <= dVar2) {
    dVar28 = dVar2;
  }
  dVar2 = *(double *)(lVar23 + 0x18 + lVar18);
  dVar26 = dVar12;
  if (dVar12 <= dVar2) {
    dVar26 = dVar2;
  }
  if ((*(byte *)(lVar23 + 0x6c + lVar18) & 1) == 0) {
    if (*(double *)(lVar24 + 0x40) <= dVar27) {
      dVar27 = *(double *)(lVar24 + 0x40);
    }
    if (*(double *)(lVar24 + 0x38) <= dVar30) {
      dVar30 = *(double *)(lVar24 + 0x38);
    }
    if (*(double *)(lVar24 + 0x30) <= dVar32) {
      dVar32 = *(double *)(lVar24 + 0x30);
    }
    if (dVar33 <= *(double *)(lVar24 + 0x58)) {
      dVar33 = *(double *)(lVar24 + 0x58);
    }
    if (dVar28 <= *(double *)(lVar24 + 0x50)) {
      dVar28 = *(double *)(lVar24 + 0x50);
    }
    if (dVar26 <= *(double *)(lVar24 + 0x48)) {
      dVar26 = *(double *)(lVar24 + 0x48);
    }
  }
  iVar5 = *(int *)(param_1 + 0x1d0);
  lVar23 = (longlong)iVar5;
  *(uint *)(param_1 + 0x1d0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1d4) < iVar5 + 1U) {
    FUN_14098c05e(plVar1,iVar5);
  }
  lVar18 = *(longlong *)(param_1 + 0x1c8);
  *(longlong *)(lVar18 + lVar23 * 0x18) = lVar24;
  *(undefined4 *)(lVar18 + 8 + lVar23 * 0x18) = *(undefined4 *)(param_1 + 0x44);
  *(undefined8 *)(lVar18 + 0x10 + lVar23 * 0x18) = 0;
  uVar22 = *(uint *)(param_1 + 0x1d0);
  if (uVar22 != 0) {
    dVar2 = (dVar13 - dVar9) * (dVar11 - dVar10) +
            (dVar12 - dVar8) * (dVar13 - dVar9) + (dVar12 - dVar8) * (dVar11 - dVar10);
    dVar32 = (dVar28 - dVar30) * (dVar33 - dVar27) +
             (dVar26 - dVar32) * (dVar28 - dVar30) + (dVar33 - dVar27) * (dVar26 - dVar32);
    dVar32 = dVar32 + dVar32;
    lVar23 = 0x10;
    uVar20 = 0;
    do {
      lVar18 = *plVar1;
      pdVar7 = *(double **)(lVar18 + -0x10 + lVar23);
      dVar27 = *pdVar7;
      uVar34 = SUB84(dVar27,0);
      uVar35 = (undefined4)((ulonglong)dVar27 >> 0x20);
      dVar30 = pdVar7[1];
      dVar33 = pdVar7[2];
      dVar28 = pdVar7[3];
      dVar26 = pdVar7[4];
      dVar3 = pdVar7[5];
      uVar36 = SUB84(dVar3,0);
      uVar37 = (undefined4)((ulonglong)dVar3 >> 0x20);
      bVar16 = *(byte *)((longlong)pdVar7 + 0x6c);
      if ((bVar16 & 1) == 0) {
        if (pdVar7[8] <= dVar33) {
          dVar33 = pdVar7[8];
        }
        if (pdVar7[7] <= dVar30) {
          dVar30 = pdVar7[7];
        }
        dVar31 = pdVar7[6];
        if (dVar31 <= dVar27) {
          uVar34 = SUB84(dVar31,0);
          uVar35 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar27 = pdVar7[0xb];
        if (dVar3 <= dVar27) {
          uVar36 = SUB84(dVar27,0);
          uVar37 = (undefined4)((ulonglong)dVar27 >> 0x20);
        }
        if (dVar26 <= pdVar7[10]) {
          dVar26 = pdVar7[10];
        }
        if (dVar28 <= pdVar7[9]) {
          dVar28 = pdVar7[9];
        }
        bVar25 = false;
      }
      else {
        bVar25 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38 +
                          (longlong)*(int *)(pdVar7 + 0xc) * 0x48) < DAT_14c75efe8;
      }
      dVar27 = dVar33;
      if (dVar10 <= dVar33) {
        dVar27 = dVar10;
      }
      dVar3 = dVar30;
      if (dVar9 <= dVar30) {
        dVar3 = dVar9;
      }
      dVar31 = (double)CONCAT44(uVar35,uVar34);
      if (dVar8 <= (double)CONCAT44(uVar35,uVar34)) {
        dVar31 = dVar8;
      }
      dVar29 = (double)CONCAT44(uVar37,uVar36);
      if ((double)CONCAT44(uVar37,uVar36) <= dVar11) {
        dVar29 = dVar11;
      }
      dVar15 = dVar26;
      if (dVar26 <= dVar13) {
        dVar15 = dVar13;
      }
      dVar14 = dVar28;
      if (dVar28 <= dVar12) {
        dVar14 = dVar12;
      }
      dVar4 = *(double *)(lVar18 + lVar23);
      dVar3 = (dVar15 - dVar3) * (dVar29 - dVar27) +
              (dVar14 - dVar31) * (dVar15 - dVar3) + (dVar29 - dVar27) * (dVar14 - dVar31);
      dVar3 = dVar3 + dVar3;
      dVar27 = dVar4 + dVar3;
      if (dVar27 < dVar32) {
        uVar21 = (ulonglong)*(uint *)(lVar18 + -8 + lVar23);
        *param_3 = bVar25;
        bVar16 = *(byte *)((longlong)pdVar7 + 0x6c);
        uVar22 = *(uint *)(param_1 + 0x1d0);
        dVar32 = dVar27;
      }
      if ((bVar16 & 1) == 0) {
        dVar33 = (double)CONCAT44(uVar37,uVar36) - dVar33;
        dVar28 = dVar28 - (double)CONCAT44(uVar35,uVar34);
        dVar27 = (dVar26 - dVar30) * dVar33 + dVar28 * (dVar26 - dVar30) + dVar33 * dVar28;
        dVar4 = dVar4 + (dVar3 - (dVar27 + dVar27));
        if (dVar2 + dVar2 + dVar4 < dVar32) {
          if ((int)uVar22 < -2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar22 + 2);
          }
          uVar17 = *(uint *)(param_1 + 0x1d4);
          if ((int)uVar17 < (int)(uVar22 + 2)) {
            FUN_14098bf12(plVar1);
            uVar22 = *(uint *)(param_1 + 0x1d0);
            uVar17 = *(uint *)(param_1 + 0x1d4);
          }
          iVar5 = *(int *)(pdVar7 + 0xc);
          lVar18 = *(longlong *)(param_1 + 0x10);
          *(uint *)(param_1 + 0x1d0) = uVar22 + 1;
          if (uVar17 < uVar22 + 1) {
            FUN_14098c05e(plVar1,uVar22);
          }
          lVar24 = *(longlong *)(param_1 + 0x1c8);
          lVar19 = (longlong)(int)uVar22;
          *(longlong *)(lVar24 + lVar19 * 0x18) = (longlong)iVar5 * 0x70 + lVar18;
          *(undefined4 *)(lVar24 + 8 + lVar19 * 0x18) = *(undefined4 *)(pdVar7 + 0xc);
          *(double *)(lVar24 + 0x10 + lVar19 * 0x18) = dVar4;
          iVar5 = *(int *)((longlong)pdVar7 + 100);
          lVar18 = *(longlong *)(param_1 + 0x10);
          iVar6 = *(int *)(param_1 + 0x1d0);
          lVar24 = (longlong)iVar6;
          *(uint *)(param_1 + 0x1d0) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x1d4) < iVar6 + 1U) {
            FUN_14098c05e(plVar1,iVar6);
          }
          lVar19 = *(longlong *)(param_1 + 0x1c8);
          *(longlong *)(lVar19 + lVar24 * 0x18) = (longlong)iVar5 * 0x70 + lVar18;
          *(undefined4 *)(lVar19 + 8 + lVar24 * 0x18) = *(undefined4 *)((longlong)pdVar7 + 100);
          *(double *)(lVar19 + 0x10 + lVar24 * 0x18) = dVar4;
          uVar22 = *(uint *)(param_1 + 0x1d0);
        }
      }
      uVar20 = uVar20 + 1;
      lVar23 = lVar23 + 0x18;
    } while (uVar20 != uVar22);
  }
  return uVar21 & 0xffffffff;
}



// FUNCTION 146e359bc FUN_146e359bc body=120 status=ok
// SIG undefined FUN_146e359bc(void)

void FUN_146e359bc(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
    FUN_140c11858(param_1 + 0x30,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar9 = (longlong)iVar3 * 0x38;
  *(undefined4 *)(lVar4 + lVar9) = *param_2;
  uVar8 = *(undefined8 *)(param_2 + 4);
  puVar1 = (undefined8 *)(lVar4 + 8 + lVar9);
  *puVar1 = *(undefined8 *)(param_2 + 2);
  puVar1[1] = uVar8;
  *(undefined8 *)(lVar4 + 0x18 + lVar9) = *(undefined8 *)(param_2 + 6);
  uVar5 = param_2[9];
  uVar6 = param_2[10];
  uVar7 = param_2[0xb];
  puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar9);
  *puVar2 = param_2[8];
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(lVar4 + 0x30 + lVar9) = *(undefined8 *)(param_2 + 0xc);
  FUN_140c10eb8(param_1,param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 146e35a34 FUN_146e35a34 body=132 status=ok
// SIG undefined FUN_146e35a34(void)

undefined8 FUN_146e35a34(longlong *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x58) != *(int *)(lVar2 + 0x84)) {
    lVar3 = lVar2 + 0x88;
    if (*(longlong *)(lVar2 + 0x90) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x90);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x98) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x50) + (longlong)(int)uVar4 * 0x14);
        if (*puVar1 == param_2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffffb) == 0) {
            return 1;
          }
          if ((int)puVar1[2] < *(int *)(lVar2 + 0xe0)) {
            return 1;
          }
          *(undefined1 *)param_1[1] = 0;
          return 0;
        }
        uVar4 = puVar1[3];
      } while (uVar4 != 0xffffffff);
    }
  }
  return 1;
}



// FUNCTION 146e35ab8 FUN_146e35ab8 body=560 status=ok
// SIG undefined FUN_146e35ab8(void)

undefined8 FUN_146e35ab8(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar5 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x90);
    }
    uVar9 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar9 != 0xffffffff) {
      do {
        puVar6 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar9 * 0x14);
        if (*puVar6 == param_2) {
          if ((puVar6 != (uint *)0x0) && (puVar6 + 1 != (uint *)0x0)) {
            uVar9 = puVar6[2];
            if (*(int *)(lVar3 + 0xe0) <= (int)uVar9) goto LAB_146e35bb9;
            uVar4 = puVar6[1];
            if ((int)uVar9 < 1) {
              piVar7 = (int *)((longlong)(int)uVar4 * 4 + *(longlong *)(lVar3 + 0xa0));
              goto LAB_146e35c8f;
            }
            iVar2 = uVar4 + uVar9;
            lVar5 = *(longlong *)(lVar3 + 0xa0);
            uVar8 = (int)(uVar4 + iVar2 + -1) / 2;
            iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
            if (iVar10 == iVar1) goto LAB_146e35bb9;
            uVar9 = (uVar9 + uVar4) - 1;
            goto LAB_146e35c33;
          }
          break;
        }
        uVar9 = puVar6[3];
      } while (uVar9 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x50),&local_24,&local_30,0);
  lVar5 = *(longlong *)(lVar3 + 0x50) + (longlong)local_24 * 0x14;
  piVar7 = (int *)(lVar5 + 4);
  *piVar7 = *(int *)(lVar3 + 0xa8);
  *(undefined4 *)(lVar5 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xa8);
  *(uint *)(lVar3 + 0xa8) = iVar2 + *(uint *)(lVar3 + 0xe0);
  if ((uint)(*(int *)(lVar3 + 0xac) - iVar2) < *(uint *)(lVar3 + 0xe0)) {
    FUN_1446f48e2(lVar3 + 0xa0);
  }
  *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)*piVar7 * 4) = iVar1;
  puVar6 = (uint *)(lVar3 + 0xe4);
LAB_146e35bb7:
  *puVar6 = *puVar6 + 1;
  goto LAB_146e35bb9;
  while( true ) {
    if (iVar10 < iVar1) {
      uVar4 = uVar8 + 1;
      iVar10 = uVar9 + uVar8 + 1;
    }
    else {
      if (uVar8 == uVar4) goto LAB_146e35ca7;
      uVar9 = uVar8 - 1;
      iVar10 = uVar8 + uVar4 + -1;
    }
    uVar8 = iVar10 / 2;
    iVar10 = *(int *)(lVar5 + (longlong)(int)uVar8 * 4);
    if (iVar10 == iVar1) break;
LAB_146e35c33:
    if (uVar4 == uVar9) {
      uVar4 = uVar4 + (iVar10 < iVar1);
LAB_146e35ca7:
      if (uVar4 != 0xffffffff) {
        if ((int)uVar4 < iVar2) {
          lVar5 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar5 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + -4 + lVar5 * 4);
            lVar5 = lVar5 + -1;
          } while ((int)uVar4 < lVar5);
          lVar5 = *(longlong *)(lVar3 + 0xa0);
        }
        piVar7 = (int *)(lVar5 + (longlong)(int)uVar4 * 4);
LAB_146e35c8f:
        puVar6 = puVar6 + 2;
        *piVar7 = iVar1;
        goto LAB_146e35bb7;
      }
      break;
    }
  }
LAB_146e35bb9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)puVar6 >> 8),1);
}



// FUNCTION 146e35cea FUN_146e35cea body=320 status=ok
// SIG undefined FUN_146e35cea(void)

undefined8 FUN_146e35cea(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e35de0;
            goto LAB_146e35d9f;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e35cfd;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e35cfd;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e35de0:
    if (uVar10 == uVar5) goto LAB_146e35cfd;
  }
LAB_146e35d9f:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e35cfd:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e35e2a FUN_146e35e2a body=574 status=ok
// SIG undefined FUN_146e35e2a(void)

undefined8 FUN_146e35e2a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_58 [36];
  uint local_34;
  uint *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  iVar1 = *(int *)param_1[1];
  local_34 = param_2;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar7 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x90);
    }
    uVar12 = *(uint *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar12 != 0xffffffff) {
      do {
        puVar8 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar12 * 0x14);
        if (*puVar8 == param_2) {
          if ((puVar8 != (uint *)0x0) && (puVar8 + 1 != (uint *)0x0)) {
            uVar12 = puVar8[2];
            if (*(int *)(lVar3 + 0xe0) <= (int)uVar12) {
              uVar5 = 0;
              goto LAB_146e35f33;
            }
            uVar6 = puVar8[1];
            if ((int)uVar12 < 1) {
              piVar10 = (int *)((longlong)(int)uVar6 * 4 + *(longlong *)(lVar3 + 0xa0));
              goto LAB_146e36010;
            }
            iVar2 = uVar6 + uVar12;
            lVar7 = *(longlong *)(lVar3 + 0xa0);
            iVar4 = uVar6 + iVar2 + -1;
            uVar11 = iVar4 / 2;
            iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
            uVar5 = CONCAT71((int7)(int3)(iVar4 - (iVar4 >> 0x1f) >> 9),1);
            if (iVar9 == iVar1) goto LAB_146e35f33;
            uVar12 = (uVar12 + uVar6) - 1;
            goto LAB_146e35fb2;
          }
          break;
        }
        uVar12 = puVar8[3];
      } while (uVar12 != 0xffffffff);
    }
  }
  local_30 = &local_34;
  FUN_146dee3ec((longlong *)(lVar3 + 0x50),&local_24,&local_30,0);
  lVar7 = *(longlong *)(lVar3 + 0x50) + (longlong)local_24 * 0x14;
  piVar10 = (int *)(lVar7 + 4);
  *piVar10 = *(int *)(lVar3 + 0xa8);
  *(undefined4 *)(lVar7 + 8) = 1;
  iVar2 = *(int *)(lVar3 + 0xa8);
  *(uint *)(lVar3 + 0xa8) = iVar2 + *(uint *)(lVar3 + 0xe0);
  if ((uint)(*(int *)(lVar3 + 0xac) - iVar2) < *(uint *)(lVar3 + 0xe0)) {
    FUN_1446f48e2(lVar3 + 0xa0);
  }
  piVar10 = (int *)(longlong)*piVar10;
  *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)piVar10 * 4) = iVar1;
  puVar8 = (uint *)(lVar3 + 0xe4);
LAB_146e35f2e:
  *puVar8 = *puVar8 + 1;
  uVar5 = CONCAT71((int7)((ulonglong)piVar10 >> 8),1);
  goto LAB_146e35f33;
  while( true ) {
    if (iVar9 < iVar1) {
      uVar6 = uVar11 + 1;
      iVar9 = uVar12 + uVar11 + 1;
    }
    else {
      if (uVar11 == uVar6) goto LAB_146e36027;
      uVar12 = uVar11 - 1;
      iVar9 = uVar11 + uVar6 + -1;
    }
    uVar11 = iVar9 / 2;
    iVar9 = *(int *)(lVar7 + (longlong)(int)uVar11 * 4);
    if (iVar9 == iVar1) break;
LAB_146e35fb2:
    if (uVar6 == uVar12) {
      uVar6 = uVar6 + (iVar9 < iVar1);
LAB_146e36027:
      if (uVar6 != 0xffffffff) {
        if ((int)uVar6 < iVar2) {
          lVar7 = (longlong)iVar2;
          do {
            *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar7 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + -4 + lVar7 * 4);
            lVar7 = lVar7 + -1;
          } while ((int)uVar6 < lVar7);
          lVar7 = *(longlong *)(lVar3 + 0xa0);
        }
        piVar10 = (int *)(lVar7 + (longlong)(int)uVar6 * 4);
LAB_146e36010:
        puVar8 = puVar8 + 2;
        *piVar10 = iVar1;
        goto LAB_146e35f2e;
      }
      break;
    }
  }
LAB_146e35f33:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 146e3606a FUN_146e3606a body=320 status=ok
// SIG undefined FUN_146e3606a(void)

undefined8 FUN_146e3606a(longlong *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x58) != *(int *)(lVar3 + 0x84)) {
    lVar6 = lVar3 + 0x88;
    if (*(longlong *)(lVar3 + 0x90) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x90);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x98) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      iVar2 = *(int *)param_1[1];
      do {
        puVar1 = (uint *)(*(longlong *)(lVar3 + 0x50) + (longlong)(int)uVar8 * 0x14);
        if (*puVar1 == param_2) {
          if ((puVar1 + 1 != (uint *)0x0 && puVar1 != (uint *)0x0) &&
             (uVar8 = puVar1[2], 0 < (int)uVar8)) {
            uVar10 = puVar1[1];
            uVar7 = (uVar8 + uVar10) - 1;
            uVar9 = (int)(uVar7 + uVar10) / 2;
            iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
            uVar5 = uVar7;
            if (iVar4 != iVar2) goto LAB_146e36160;
            goto LAB_146e3611f;
          }
          break;
        }
        uVar8 = puVar1[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  goto LAB_146e3607d;
  while( true ) {
    if (iVar4 < iVar2) {
      uVar10 = uVar9 + 1;
      iVar4 = uVar5 + uVar9 + 1;
    }
    else {
      if (uVar9 == uVar10) goto LAB_146e3607d;
      uVar5 = uVar9 - 1;
      iVar4 = uVar9 + uVar10 + -1;
    }
    uVar9 = iVar4 / 2;
    iVar4 = *(int *)(*(longlong *)(lVar3 + 0xa0) + (longlong)(int)uVar9 * 4);
    if (iVar4 == iVar2) break;
LAB_146e36160:
    if (uVar10 == uVar5) goto LAB_146e3607d;
  }
LAB_146e3611f:
  if (uVar9 != 0xffffffff) {
    if ((int)uVar9 < (int)uVar7) {
      lVar6 = (longlong)(int)uVar9;
      do {
        *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 4) =
             *(undefined4 *)(*(longlong *)(lVar3 + 0xa0) + 4 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 != lVar6);
      uVar8 = puVar1[2];
    }
    puVar1[2] = uVar8 - 1;
  }
LAB_146e3607d:
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 146e361aa FUN_146e361aa body=415 status=ok
// SIG undefined FUN_146e361aa(void)

undefined8 *
FUN_146e361aa(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,char param_8,
             undefined1 param_9)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5e4d0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = param_7;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x25) = param_3;
  *(undefined4 *)((longlong)param_1 + 300) = param_4;
  param_1[0x26] = param_5;
  *(undefined4 *)(param_1 + 0x27) = param_6;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined2 *)(param_1 + 0x30) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x182) = param_9;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  if (param_8 != '\0') {
    lVar2 = FUN_14001cc68(0x1d8,0x10);
    FUN_146e2e89a(lVar2);
    lVar1 = param_1[0x18];
    param_1[0x18] = lVar2;
    if (lVar1 != 0) {
      FUN_140c0bb2c(lVar1);
      FUN_1400020a8(lVar1);
      lVar2 = param_1[0x18];
    }
    *(undefined1 *)(lVar2 + 0x40) = 1;
  }
  FUN_1429e5fe4(param_1,param_2);
  return param_1;
}



// FUNCTION 146e3634a FUN_146e3634a body=715 status=ok
// SIG undefined FUN_146e3634a(void)

longlong FUN_146e3634a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1;
  while( true ) {
    *(undefined1 *)(lVar4 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(lVar4 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(lVar4 + 0x158) = 0;
    if (*(int *)(lVar4 + 0x15c) != 0) {
      FUN_14481578e(lVar4 + 0x150,0);
    }
    FUN_140c0bd2f(*(undefined8 *)(lVar4 + 0x170),*(undefined4 *)(lVar4 + 0x178));
    *(undefined4 *)(lVar4 + 0x178) = 0;
    if (*(int *)(lVar4 + 0x17c) != 0) {
      FUN_146e34f26(lVar4 + 0x170,0);
    }
    *(undefined4 *)(lVar4 + 0x168) = 0;
    if (*(int *)(lVar4 + 0x16c) != 0) {
      FUN_14481578e(lVar4 + 0x160,0);
    }
    if (lVar4 == param_2) break;
    FUN_140484938(lVar4 + 0x10,param_2 + 0x10);
    FUN_146e36616(lVar4 + 0x20,param_2 + 0x20);
    FUN_146c9b3f2(lVar4 + 0x30,param_2 + 0x30);
    *(undefined1 *)(lVar4 + 0x40) = *(undefined1 *)(param_2 + 0x40);
    *(undefined4 *)(lVar4 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(lVar4 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(lVar4 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    FUN_140484a40(lVar4 + 0x50,param_2 + 0x50);
    FUN_14054c6c4(lVar4 + 0xa0,param_2 + 0xa0);
    FUN_14054c6c4(lVar4 + 0xb0,param_2 + 0xb0);
    uVar2 = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar4 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
    *(undefined8 *)(lVar4 + 0xec) = uVar2;
    *(undefined4 *)(lVar4 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    uVar2 = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(lVar4 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar4 + 0xfc) = uVar2;
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined4 *)(lVar4 + 0xd8) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar4 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    FUN_146c9b3f2(lVar4 + 0x108,param_2 + 0x108);
    FUN_146deea5e(lVar4 + 0x118);
    *(undefined4 *)(lVar4 + 0x128) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(lVar4 + 300) = *(undefined4 *)(param_2 + 300);
    *(undefined8 *)(lVar4 + 0x130) = *(undefined8 *)(param_2 + 0x130);
    *(undefined4 *)(lVar4 + 0x138) = *(undefined4 *)(param_2 + 0x138);
    *(undefined4 *)(lVar4 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
    *(undefined8 *)(lVar4 + 0x140) = *(undefined8 *)(param_2 + 0x140);
    *(undefined1 *)(lVar4 + 0x180) = *(undefined1 *)(param_2 + 0x180);
    *(undefined1 *)(lVar4 + 0x181) = *(undefined1 *)(param_2 + 0x181);
    *(undefined1 *)(lVar4 + 0x182) = *(undefined1 *)(param_2 + 0x182);
    lVar3 = *(longlong *)(lVar4 + 0xc0);
    if (*(longlong *)(param_2 + 0xc0) == 0) {
      *(undefined8 *)(lVar4 + 0xc0) = 0;
      if (lVar3 != 0) {
        FUN_140c0bb2c(lVar3);
        FUN_1400020a8(lVar3);
      }
      return param_1;
    }
    if (lVar3 == 0) {
      lVar3 = FUN_14001cc68(0x1d8);
      FUN_146e2e89a(lVar3);
      lVar1 = *(longlong *)(lVar4 + 0xc0);
      *(longlong *)(lVar4 + 0xc0) = lVar3;
      if (lVar1 != 0) {
        FUN_140c0bb2c(lVar1);
        FUN_1400020a8(lVar1);
        lVar3 = *(longlong *)(lVar4 + 0xc0);
      }
    }
    lVar4 = lVar3;
    param_2 = *(longlong *)(param_2 + 0xc0);
  }
  return param_1;
}



// FUNCTION 146e36616 FUN_146e36616 body=93 status=ok
// SIG undefined FUN_146e36616(void)

undefined8 * FUN_146e36616(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140c0bd00(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146e36674(param_1,iVar1);
      FUN_146e366e7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146e36674 FUN_146e36674 body=115 status=ok
// SIG undefined FUN_146e36674(void)

void FUN_146e36674(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146e366e7 FUN_146e366e7 body=52 status=ok
// SIG undefined FUN_146e366e7(void)

void FUN_146e366e7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146e2fab0(param_1,param_2);
    param_1 = param_1 + 0x48;
    param_2 = param_2 + 0x48;
  }
  return;
}



// FUNCTION 146e3671c FUN_146e3671c body=1396 status=ok
// SIG undefined FUN_146e3671c(void)

undefined8 * FUN_146e3671c(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *param_1 = &PTR_FUN_149f5e4d0;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140484ca8(param_1 + 2,iVar1,0);
    FUN_1449bab58(param_1[2],uVar7,iVar1);
  }
  FUN_146e36c90(param_1 + 4,param_2 + 0x20);
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 6,iVar1,0);
    FUN_140c10e76(param_1[6],uVar7,iVar1);
  }
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  FUN_140484a40(param_1 + 10,param_2 + 0x50);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0xa8);
  pvVar2 = *(void **)(param_2 + 0xa0);
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x16] = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  pvVar2 = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0x17) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x16,iVar1,0);
    memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x18] = 0;
  param_1[0x19] = *(undefined8 *)(param_2 + 200);
  param_1[0x1a] = *(undefined8 *)(param_2 + 0xd0);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  uVar7 = *(undefined8 *)(param_2 + 0xec);
  *(undefined8 *)((longlong)param_1 + 0xe4) = *(undefined8 *)(param_2 + 0xe4);
  *(undefined8 *)((longlong)param_1 + 0xec) = uVar7;
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x110);
  uVar7 = *(undefined8 *)(param_2 + 0x108);
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_140c10f68(param_1 + 0x21,iVar1,0);
    FUN_140c10e76(param_1[0x21],uVar7,iVar1);
  }
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  pvVar2 = *(void **)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_146deeab8(param_1 + 0x23,iVar1,0);
    memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 0x18);
  }
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)(param_2 + 300);
  param_1[0x26] = *(undefined8 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x28] = *(undefined8 *)(param_2 + 0x140);
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x180);
  *(undefined1 *)((longlong)param_1 + 0x181) = *(undefined1 *)(param_2 + 0x181);
  *(undefined1 *)((longlong)param_1 + 0x182) = *(undefined1 *)(param_2 + 0x182);
  param_1[0x31] = 0;
  iVar1 = *(int *)(param_2 + 400);
  pvVar2 = *(void **)(param_2 + 0x188);
  *(int *)(param_1 + 0x32) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x31,iVar1,0);
    memcpy((void *)param_1[0x31],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x33] = 0;
  iVar1 = *(int *)(param_2 + 0x1a0);
  pvVar2 = *(void **)(param_2 + 0x198);
  *(int *)(param_1 + 0x34) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x33,iVar1,0);
    memcpy((void *)param_1[0x33],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x35] = 0;
  iVar1 = *(int *)(param_2 + 0x1b0);
  pvVar2 = *(void **)(param_2 + 0x1a8);
  *(int *)(param_1 + 0x36) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  }
  else {
    FUN_146deeb7a(param_1 + 0x35,iVar1,0);
    memcpy((void *)param_1[0x35],pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0x37] = 0;
  iVar1 = *(int *)(param_2 + 0x1c0);
  pvVar2 = *(void **)(param_2 + 0x1b8);
  *(int *)(param_1 + 0x38) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x37,iVar1,0);
    memcpy((void *)param_1[0x37],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_14098bf12(param_1 + 0x39,0x20);
  lVar3 = *(longlong *)(param_2 + 0xc0);
  if (lVar3 != 0) {
    uVar7 = FUN_14001cc68(0x1d8,0x10);
    FUN_146e3671c(uVar7,lVar3);
    lVar3 = param_1[0x18];
    param_1[0x18] = uVar7;
    if (lVar3 != 0) {
      FUN_140c0bb2c(lVar3);
      FUN_1400020a8(lVar3);
    }
  }
  return param_1;
}



// FUNCTION 146e36c90 FUN_146e36c90 body=77 status=ok
// SIG undefined FUN_146e36c90(void)

undefined8 * FUN_146e36c90(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146e36674(param_1,iVar1,0);
    FUN_146e366e7(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146e36cdd FUN_146e36cdd body=263 status=ok
// SIG undefined FUN_146e36cdd(void)

longlong * FUN_146e36cdd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x48,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x48);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_145784e0c(param_2);
    }
    FUN_146e36de6(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0x30;
      lVar4 = 0;
      do {
        FUN_146c9c284(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x48;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e36de6 FUN_146e36de6 body=202 status=ok
// SIG undefined FUN_146e36de6(void)

void FUN_146e36de6(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140c119c6(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x48 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x7fefffffffffffff;
      puVar2[1] = 0x7fefffffffffffff;
      puVar2[2] = 0x7fefffffffffffff;
      puVar2[3] = 0xffefffffffffffff;
      puVar2[4] = 0xffefffffffffffff;
      puVar2[5] = 0xffefffffffffffff;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined1 *)(puVar2 + 8) = 0;
      puVar2 = puVar2 + 9;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146e36eb2(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146e36f18(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e36eb2 FUN_146e36eb2 body=101 status=ok
// SIG undefined FUN_146e36eb2(void)

void FUN_146e36eb2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x48 + *param_1);
  FUN_140c0bd00(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e36f18 FUN_146e36f18 body=63 status=ok
// SIG undefined FUN_146e36f18(void)

void FUN_146e36f18(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e36f58(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 146e36f58 FUN_146e36f58 body=117 status=ok
// SIG undefined FUN_146e36f58(void)

ulonglong FUN_146e36f58(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x48) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x48,8);
      uVar1 = uVar1 / 0x48;
    }
  }
  return uVar1;
}



// FUNCTION 146e36fce FUN_146e36fce body=309 status=ok
// SIG undefined FUN_146e36fce(void)

undefined4 *
FUN_146e36fce(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146e37104(param_1,local_50);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined8 *)(local_48 + 2) = *puVar1;
  local_48[4] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_146e371ea(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_146e37308(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e37104 FUN_146e37104 body=230 status=ok
// SIG undefined FUN_146e37104(void)

int * FUN_146e37104(longlong *param_1,int *param_2)

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



// FUNCTION 146e371ea FUN_146e371ea body=148 status=ok
// SIG undefined FUN_146e371ea(void)

void FUN_146e371ea(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_146e3727e(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_146e37254;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_146e37254:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 146e3727e FUN_146e3727e body=138 status=ok
// SIG undefined FUN_146e3727e(void)

void FUN_146e3727e(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146e37308 FUN_146e37308 body=419 status=ok
// SIG undefined FUN_146e37308(void)

void FUN_146e37308(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 146e374ac FUN_146e374ac body=114 status=ok
// SIG undefined FUN_146e374ac(void)

void FUN_146e374ac(longlong *param_1,int param_2)

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



// FUNCTION 146e3751e FUN_146e3751e body=426 status=ok
// SIG undefined FUN_146e3751e(void)

void FUN_146e3751e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1401ad22e(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_140171ad2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar6 * 0x14 + -0x10);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -5;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
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
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 146e376ca FUN_146e376ca body=463 status=ok
// SIG undefined FUN_146e376ca(void)

void FUN_146e376ca(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar3 + lVar6 * 0x14);
        uVar10 = (longlong)
                 (int)(((uint)(uVar10 >> 2) & 0x3fffffff) +
                       (uint)uVar10 * 0x40 + (int)(uVar10 >> 0x20) + 0x9e3779b9 ^ (uint)uVar10) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 146e3789a FUN_146e3789a body=317 status=ok
// SIG undefined FUN_146e3789a(void)

undefined4 * FUN_146e3789a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146e379d8(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)uVar2;
  uVar9 = (uVar9 >> 2) + uVar9 * 0x40 + (int)((ulonglong)uVar2 >> 0x20) + 0x9e3779b9 ^ uVar9;
  cVar4 = FUN_146e37abe(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
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
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
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
      FUN_146e376ca(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e379d8 FUN_146e379d8 body=230 status=ok
// SIG undefined FUN_146e379d8(void)

int * FUN_146e379d8(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146e37abe FUN_146e37abe body=134 status=ok
// SIG undefined FUN_146e37abe(void)

undefined8 FUN_146e37abe(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_146e37b44(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146e37b44 FUN_146e37b44 body=114 status=ok
// SIG undefined FUN_146e37b44(void)

void FUN_146e37b44(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
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



// FUNCTION 146e37bb6 FUN_146e37bb6 body=43 status=ok
// SIG undefined FUN_146e37bb6(void)

void FUN_146e37bb6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 146e37be2 FUN_146e37be2 body=113 status=ok
// SIG undefined FUN_146e37be2(void)

void FUN_146e37be2(longlong param_1,int param_2)

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



// FUNCTION 146e37c54 FUN_146e37c54 body=81 status=ok
// SIG undefined FUN_146e37c54(void)

undefined8 * FUN_146e37c54(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140c10f68(param_1,iVar1,0);
    FUN_140c10e76(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 146e37ca6 FUN_146e37ca6 body=147 status=ok
// SIG undefined FUN_146e37ca6(void)

void FUN_146e37ca6(longlong param_1,int param_2)

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



// FUNCTION 146e37d3a FUN_146e37d3a body=90 status=ok
// SIG undefined FUN_146e37d3a(void)

undefined8 * FUN_146e37d3a(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140c10f68(param_1,iVar1,0);
    FUN_140c10e76(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 146e37d94 FUN_146e37d94 body=733 status=ok
// SIG undefined FUN_146e37d94(void)

ulonglong FUN_146e37d94(longlong *param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong unaff_RBP;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_c8 [44];
  uint local_9c;
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_84;
  ulonglong local_80;
  double dVar3;
  double dVar6;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = *(uint *)(param_1 + 1);
  local_98 = (ulonglong)uVar7;
  local_9c = uVar7 + 3;
  if (-1 < (int)uVar7) {
    local_9c = uVar7;
  }
  local_9c = (int)local_9c >> 2;
  if (3 < (int)uVar7) {
    local_90 = (ulonglong)local_9c;
    lVar21 = 0;
    uVar20 = 0;
    do {
      lVar22 = *param_1;
      lVar16 = (uVar20 * 4 + 3) * 0x38;
      lVar17 = (uVar20 * 4 + 2) * 0x38;
      lVar18 = (uVar20 * 4 + 1) * 0x38;
      lVar19 = uVar20 * 0xe0;
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      lVar23 = -(ulonglong)(dVar3 < *(double *)(lVar22 + 8 + lVar18));
      auVar28._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 8 + lVar16));
      auVar28._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 8 + lVar17));
      dVar3 = param_2[1];
      dVar4 = param_2[1];
      auVar25._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar18) < dVar4);
      auVar25._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar19) < dVar3);
      auVar10._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar18) < *param_2);
      auVar10._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar19) < *param_2);
      auVar30._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar16) < dVar4);
      auVar30._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x28 + lVar17) < dVar3);
      dVar3 = param_2[4];
      dVar4 = param_2[4];
      auVar8._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar16) < *param_2);
      auVar8._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x20 + lVar17) < *param_2);
      dVar5 = param_2[2];
      dVar6 = param_2[2];
      auVar24._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar18) < dVar6);
      auVar24._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar19) < dVar5);
      auVar12._8_4_ = (int)lVar23;
      auVar12._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 8 + lVar19));
      auVar12._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
      auVar26._8_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar16) < dVar6);
      auVar26._0_8_ = -(ulonglong)(*(double *)(lVar22 + 0x30 + lVar17) < dVar5);
      dVar2 = param_2[5];
      dVar5 = param_2[5];
      auVar29._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar22 + 0x18 + lVar18));
      auVar29._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 0x18 + lVar19));
      auVar9._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar22 + 0x10 + lVar18));
      auVar9._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 0x10 + lVar19));
      auVar27._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar22 + 0x18 + lVar16));
      auVar27._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar22 + 0x18 + lVar17));
      auVar11._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar22 + 0x10 + lVar16));
      auVar11._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar22 + 0x10 + lVar17));
      iVar14 = movmskpd((int)lVar22,auVar29 | auVar9 | auVar24 | auVar12 | auVar25 | auVar10);
      iVar15 = movmskpd((int)lVar16,auVar27 | auVar11 | auVar26 | auVar28 | auVar30 | auVar8);
      lVar22 = 0;
      unaff_RBP = lVar21;
      do {
        if (((uint)(iVar14 + iVar15 * 4) >> ((uint)lVar22 & 0x1f) & 1) == 0) {
          local_84 = *(undefined4 *)(*param_1 + unaff_RBP);
          cVar13 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_84);
          if (cVar13 == '\0') goto LAB_146e38033;
        }
        lVar22 = lVar22 + 1;
        unaff_RBP = unaff_RBP + 0x38;
      } while (lVar22 != 4);
      uVar20 = uVar20 + 1;
      lVar21 = lVar21 + 0xe0;
    } while (uVar20 != local_90);
  }
  uVar20 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  iVar14 = (int)local_98;
  if ((int)(local_9c << 2) < iVar14) {
    lVar21 = (longlong)(int)(local_9c << 2);
    lVar22 = lVar21 * 0x38 + 0x20;
    do {
      lVar16 = *param_1 + lVar22;
      lVar17 = -3;
      do {
        dVar2 = *(double *)(lVar16 + lVar17 * 8);
        if ((param_2[lVar17 + 6] <= dVar2 && dVar2 != param_2[lVar17 + 6]) ||
           (pdVar1 = (double *)(lVar16 + 0x18 + lVar17 * 8),
           *pdVar1 <= param_2[lVar17 + 3] && param_2[lVar17 + 3] != *pdVar1)) goto LAB_146e38025;
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0);
      local_84 = *(undefined4 *)(lVar21 * 0x38 + *param_1);
      cVar13 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_84);
      if (cVar13 == '\0') goto LAB_146e38033;
LAB_146e38025:
      lVar21 = lVar21 + 1;
      lVar22 = lVar22 + 0x38;
    } while (iVar14 != (int)lVar21);
  }
LAB_146e38035:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
LAB_146e38033:
  uVar20 = 0;
  goto LAB_146e38035;
}



// FUNCTION 146e38072 FUN_146e38072 body=77 status=ok
// SIG undefined FUN_146e38072(void)

undefined8 * FUN_146e38072(undefined8 *param_1,undefined8 *param_2)

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
    FUN_146e380c0(param_1,iVar1,0);
    FUN_146e38133(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 146e380c0 FUN_146e380c0 body=115 status=ok
// SIG undefined FUN_146e380c0(void)

void FUN_146e380c0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 146e38133 FUN_146e38133 body=52 status=ok
// SIG undefined FUN_146e38133(void)

void FUN_146e38133(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_146e37d3a(param_1,param_2);
    param_1 = param_1 + 0x18;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 146e38167 FUN_146e38167 body=260 status=ok
// SIG undefined FUN_146e38167(void)

longlong * FUN_146e38167(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x18,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x18);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146e37be2(param_2);
    }
    FUN_146e3826e(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146c9c284(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x18;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146e3826e FUN_146e3826e body=158 status=ok
// SIG undefined FUN_146e3826e(void)

void FUN_146e3826e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146e37ca6(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x18 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined1 *)(puVar2 + 2) = 0;
      puVar2 = puVar2 + 3;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_146e3830e(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_146e38374(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146e3830e FUN_146e3830e body=101 status=ok
// SIG undefined FUN_146e3830e(void)

void FUN_146e3830e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x18 + *param_1);
  FUN_146e37bb6(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x18),(longlong)iVar2 * 0x18);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146e38374 FUN_146e38374 body=63 status=ok
// SIG undefined FUN_146e38374(void)

void FUN_146e38374(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e383b4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 146e383b4 FUN_146e383b4 body=117 status=ok
// SIG undefined FUN_146e383b4(void)

ulonglong FUN_146e383b4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x18) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 146e3842a FUN_146e3842a body=95 status=ok
// SIG undefined FUN_146e3842a(void)

undefined8 * FUN_146e3842a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146e37bb6(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146e380c0(param_1,iVar1);
      FUN_146e38133(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146e3848a FUN_146e3848a body=108 status=ok
// SIG undefined FUN_146e3848a(void)

void FUN_146e3848a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,4);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,4);
  }
  return;
}



// FUNCTION 146e384f6 FUN_146e384f6 body=156 status=ok
// SIG undefined FUN_146e384f6(void)

void FUN_146e384f6(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  
  *(undefined4 *)(*param_1 + 4) = 0;
  fVar8 = *(float *)((longlong)param_1 + 0x1c) / *(float *)(param_1 + 3);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(*param_1 + 8) = fVar8;
  *(float *)*param_1 = 1.0 - ((float *)*param_1)[2];
  pfVar6 = (float *)param_1[1];
  fVar8 = *(float *)*param_1;
  fVar1 = ((float *)*param_1)[2];
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  pfVar7 = (float *)param_1[2];
  fVar4 = pfVar7[1];
  fVar5 = pfVar7[2];
  *param_2 = *pfVar7 * fVar1 + *pfVar6 * fVar8;
  param_2[1] = fVar4 * fVar1 + fVar2 * fVar8;
  param_2[2] = fVar1 * fVar5 + fVar8 * fVar3;
  return;
}



// FUNCTION 146e38592 FUN_146e38592 body=156 status=ok
// SIG undefined FUN_146e38592(void)

void FUN_146e38592(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  
  *(undefined4 *)(*param_1 + 8) = 0;
  fVar8 = *(float *)((longlong)param_1 + 0x1c) / *(float *)(param_1 + 3);
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  *(float *)(*param_1 + 4) = fVar8;
  *(float *)*param_1 = 1.0 - ((float *)*param_1)[1];
  pfVar6 = (float *)param_1[1];
  fVar8 = *(float *)*param_1;
  fVar1 = ((float *)*param_1)[1];
  fVar2 = pfVar6[1];
  fVar3 = pfVar6[2];
  pfVar7 = (float *)param_1[2];
  fVar4 = pfVar7[1];
  fVar5 = pfVar7[2];
  *param_2 = *pfVar7 * fVar1 + *pfVar6 * fVar8;
  param_2[1] = fVar4 * fVar1 + fVar2 * fVar8;
  param_2[2] = fVar1 * fVar5 + fVar8 * fVar3;
  return;
}



// FUNCTION 146e3862e FUN_146e3862e body=273 status=ok
// SIG undefined FUN_146e3862e(void)

void FUN_146e3862e(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = (float *)param_1[2];
  pfVar5 = (float *)param_1[1];
  fVar6 = pfVar4[2] - pfVar5[2];
  fVar8 = pfVar4[1] - pfVar5[1];
  fVar7 = *pfVar4 - *pfVar5;
  *(undefined4 *)*param_1 = 0;
  pfVar4 = (float *)param_1[3];
  pfVar5 = (float *)param_1[1];
  fVar6 = ((pfVar4[2] - pfVar5[2]) * fVar6 +
          (*pfVar4 - *pfVar5) * fVar7 + (pfVar4[1] - pfVar5[1]) * fVar8) /
          (fVar6 * fVar6 + fVar7 * fVar7 + fVar8 * fVar8);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(*param_1 + 8) = fVar6;
  *(float *)(*param_1 + 4) = 1.0 - *(float *)(*param_1 + 8);
  pfVar4 = (float *)param_1[1];
  fVar6 = *(float *)(*param_1 + 4);
  fVar7 = *(float *)(*param_1 + 8);
  fVar8 = pfVar4[1];
  fVar1 = pfVar4[2];
  pfVar5 = (float *)param_1[2];
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  *param_2 = *pfVar5 * fVar7 + *pfVar4 * fVar6;
  param_2[1] = fVar2 * fVar7 + fVar8 * fVar6;
  param_2[2] = fVar7 * fVar3 + fVar6 * fVar1;
  return;
}



// FUNCTION 146e38740 FUN_146e38740 body=48 status=ok
// SIG undefined FUN_146e38740(void)

void FUN_146e38740(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x70,0x10);
  }
  return;
}



// FUNCTION 146e38770 FUN_146e38770 body=158 status=ok
// SIG undefined FUN_146e38770(void)

void FUN_146e38770(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  *(undefined8 *)(*param_1 + 8) = 0;
  dVar8 = (double)param_1[4] / (double)param_1[3];
  if (1.0 <= dVar8) {
    dVar8 = 1.0;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  *(double *)(*param_1 + 0x10) = dVar8;
  *(double *)*param_1 = 1.0 - ((double *)*param_1)[2];
  pdVar6 = (double *)param_1[1];
  dVar8 = *(double *)*param_1;
  dVar1 = ((double *)*param_1)[2];
  dVar2 = pdVar6[1];
  dVar3 = pdVar6[2];
  pdVar7 = (double *)param_1[2];
  dVar4 = pdVar7[1];
  dVar5 = pdVar7[2];
  *param_2 = *pdVar7 * dVar1 + *pdVar6 * dVar8;
  param_2[1] = dVar4 * dVar1 + dVar2 * dVar8;
  param_2[2] = dVar1 * dVar5 + dVar8 * dVar3;
  return;
}



// FUNCTION 146e3880e FUN_146e3880e body=158 status=ok
// SIG undefined FUN_146e3880e(void)

void FUN_146e3880e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  
  *(undefined8 *)(*param_1 + 0x10) = 0;
  dVar8 = (double)param_1[4] / (double)param_1[3];
  if (1.0 <= dVar8) {
    dVar8 = 1.0;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  *(double *)(*param_1 + 8) = dVar8;
  *(double *)*param_1 = 1.0 - ((double *)*param_1)[1];
  pdVar6 = (double *)param_1[1];
  dVar8 = *(double *)*param_1;
  dVar1 = ((double *)*param_1)[1];
  dVar2 = pdVar6[1];
  dVar3 = pdVar6[2];
  pdVar7 = (double *)param_1[2];
  dVar4 = pdVar7[1];
  dVar5 = pdVar7[2];
  *param_2 = *pdVar7 * dVar1 + *pdVar6 * dVar8;
  param_2[1] = dVar4 * dVar1 + dVar2 * dVar8;
  param_2[2] = dVar1 * dVar5 + dVar8 * dVar3;
  return;
}



// FUNCTION 146e388ac FUN_146e388ac body=274 status=ok
// SIG undefined FUN_146e388ac(void)

void FUN_146e388ac(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  pdVar4 = (double *)param_1[2];
  pdVar5 = (double *)param_1[1];
  dVar6 = pdVar4[2] - pdVar5[2];
  dVar8 = pdVar4[1] - pdVar5[1];
  dVar7 = *pdVar4 - *pdVar5;
  *(undefined8 *)*param_1 = 0;
  pdVar4 = (double *)param_1[3];
  pdVar5 = (double *)param_1[1];
  dVar6 = ((pdVar4[2] - pdVar5[2]) * dVar6 +
          (*pdVar4 - *pdVar5) * dVar7 + (pdVar4[1] - pdVar5[1]) * dVar8) /
          (dVar6 * dVar6 + dVar7 * dVar7 + dVar8 * dVar8);
  if (1.0 <= dVar6) {
    dVar6 = 1.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  *(double *)(*param_1 + 0x10) = dVar6;
  *(double *)(*param_1 + 8) = 1.0 - *(double *)(*param_1 + 0x10);
  pdVar4 = (double *)param_1[1];
  dVar6 = *(double *)(*param_1 + 8);
  dVar7 = *(double *)(*param_1 + 0x10);
  dVar8 = pdVar4[1];
  dVar1 = pdVar4[2];
  pdVar5 = (double *)param_1[2];
  dVar2 = pdVar5[1];
  dVar3 = pdVar5[2];
  *param_2 = *pdVar5 * dVar7 + *pdVar4 * dVar6;
  param_2[1] = dVar2 * dVar7 + dVar8 * dVar6;
  param_2[2] = dVar7 * dVar3 + dVar6 * dVar1;
  return;
}



// FUNCTION 146e389be FUN_146e389be body=143 status=ok
// SIG undefined FUN_146e389be(void)

void FUN_146e389be(longlong param_1,int param_2)

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



// FUNCTION 146e38a4e FUN_146e38a4e body=71 status=ok
// SIG undefined FUN_146e38a4e(void)

void FUN_146e38a4e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e38b00();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_146e38b86();
      return;
    }
  }
  return;
}



// FUNCTION 146e38a96 FUN_146e38a96 body=106 status=ok
// SIG undefined FUN_146e38a96(void)

ulonglong FUN_146e38a96(float param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (0.5 < param_1) {
    iVar4 = -((int)ROUND(-0.5 - (param_1 + param_1)) >> 1);
    uVar1 = (ulonglong)(iVar4 + -1 + (uint)(iVar4 == 0)) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    return uVar3;
  }
  uVar6 = (uint)ROUND(1.0 / param_1 + 1.0 / param_1 + -0.5);
  uVar5 = (int)uVar6 >> 1;
  uVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar5 = 0;
  if (1 < uVar6) {
    uVar5 = (uVar2 ^ 0x1f) - 0x1f;
  }
  return (ulonglong)uVar5;
}



// FUNCTION 146e38b00 FUN_146e38b00 body=132 status=ok
// SIG undefined FUN_146e38b00(void)

void FUN_146e38b00(longlong param_1,int param_2)

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



// FUNCTION 146e38b86 FUN_146e38b86 body=62 status=ok
// SIG undefined FUN_146e38b86(void)

void FUN_146e38b86(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146e38bc4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 146e38bc4 FUN_146e38bc4 body=93 status=ok
// SIG undefined FUN_146e38bc4(void)

ulonglong FUN_146e38bc4(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146e38c2a FUN_146e38c2a body=592 status=ok
// SIG undefined FUN_146e38c2a(void)

void FUN_146e38c2a(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_b8 [32];
  int *local_98;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  float local_70;
  int local_6c;
  int *local_68;
  float *local_60;
  undefined1 local_54 [4];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  lVar5 = **(longlong **)param_1[1];
  lVar9 = (longlong)param_2;
  lVar7 = (longlong)*(int *)(lVar5 + lVar9 * 0xc);
  lVar2 = *(longlong *)((undefined8 *)param_1[1])[1];
  lVar8 = (longlong)*(int *)(lVar5 + 4 + lVar9 * 0xc);
  lVar5 = (longlong)*(int *)(lVar5 + 8 + lVar9 * 0xc);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *(ulonglong *)(lVar2 + lVar7 * 0xc);
  auVar16 = insertps(auVar16,*(undefined4 *)(lVar2 + 8 + lVar7 * 0xc),0x28);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulonglong *)(lVar2 + lVar8 * 0xc);
  auVar10 = insertps(auVar10,*(undefined4 *)(lVar2 + 8 + lVar8 * 0xc),0x28);
  auVar17 = minps(auVar16,auVar10);
  auVar12._8_8_ = 0;
  auVar12._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
  auVar12 = insertps(auVar12,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
  auVar10 = maxps(auVar16,auVar10);
  auVar16 = minps(auVar17,auVar12);
  auVar10 = maxps(auVar10,auVar12);
  fVar11 = auVar10._0_4_ - auVar16._0_4_;
  fVar13 = auVar10._4_4_ - auVar16._4_4_;
  fVar14 = auVar10._8_4_ - auVar16._8_4_;
  fVar15 = fVar13;
  if (fVar13 <= fVar14) {
    fVar15 = fVar14;
  }
  iVar3 = FUN_146e38a96(CONCAT44(fVar13,(-(uint)(fVar14 < fVar11) & (uint)fVar11 |
                                        ~-(uint)(fVar14 < fVar11) & (uint)fVar15) &
                                        -(uint)(fVar13 < fVar11)) |
                        (ulonglong)(~-(uint)(fVar13 < fVar11) & (uint)fVar15));
  iVar6 = (int)param_1[2];
  if ((int)param_1[2] < iVar3) {
    iVar6 = iVar3;
  }
  if (iVar6 < 0) {
    local_70 = (float)(iVar6 * 0x800000 + 0x3f800000);
  }
  else {
    uVar4 = 1L << ((byte)iVar6 & 0x3f);
    if ((longlong)uVar4 < 0) {
      local_70 = (float)uVar4;
    }
    else {
      local_70 = (float)(longlong)uVar4;
    }
  }
  auVar17._4_4_ = local_70;
  auVar17._0_4_ = local_70;
  auVar17._8_4_ = local_70;
  auVar17._12_4_ = local_70;
  auVar12 = divps(auVar16,auVar17);
  local_7c = (int)(auVar12._0_4_ + -0.5 + auVar12._0_4_) >> 1;
  local_78 = (int)(auVar12._4_4_ + -0.5 + auVar12._4_4_) >> 1;
  local_74 = (int)(auVar12._8_4_ + -0.5 + auVar12._8_4_) >> 1;
  auVar12 = divps(auVar10,auVar17);
  local_88 = (int)(auVar12._0_4_ + -0.5 + auVar12._0_4_) >> 1;
  local_84 = (int)(auVar12._4_4_ + -0.5 + auVar12._4_4_) >> 1;
  local_80 = (int)(auVar12._8_4_ + -0.5 + auVar12._8_4_) >> 1;
  local_98 = &local_90;
  local_90 = param_2;
  local_8c = param_2;
  local_6c = iVar6;
  FUN_146e38e7c(lVar1,&local_7c,&local_88,iVar6);
  lVar5 = *(longlong *)(lVar1 + 0x78);
  *(undefined1 (*) [16])(lVar5 + lVar9 * 0x20) = auVar16;
  *(undefined1 (*) [16])(lVar5 + 0x10 + lVar9 * 0x20) = auVar10;
  if (iVar6 + 10U < 0x15) {
    *(undefined1 *)(param_1[4] + (ulonglong)(iVar6 + 10U)) = 1;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[5]);
    local_68 = &local_6c;
    local_60 = &local_70;
    FUN_14172c3b4(lVar1 + 0x28,local_54,&local_68,0);
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[5]);
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146e38e7c FUN_146e38e7c body=341 status=ok
// SIG undefined FUN_146e38e7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146e38e7c(longlong *param_1,int *param_2,int *param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  iVar9 = ((param_3[2] - param_2[2]) + 1) *
          ((param_3[1] - param_2[1]) + 1) * ((*param_3 - *param_2) + 1);
  if (iVar9 < 9) {
    LOCK();
    puVar1 = (uint *)(param_1 + 4);
    uVar10 = (ulonglong)*puVar1;
    *puVar1 = *puVar1 + iVar9;
    auVar6 = _DAT_149f50230;
    UNLOCK();
    iVar9 = *param_3;
    if (*param_2 <= iVar9) {
      iVar7 = param_3[1];
      iVar11 = *param_2;
      do {
        if (param_2[1] <= iVar7) {
          iVar9 = param_3[2];
          iVar8 = param_2[1];
          do {
            if (param_2[2] <= iVar9) {
              auVar15._4_4_ = iVar8;
              auVar15._0_4_ = iVar11;
              uVar10 = (ulonglong)(int)uVar10;
              iVar7 = param_2[2];
              do {
                auVar15._12_4_ = param_4;
                auVar15._8_4_ = iVar7;
                auVar16 = pmulld(auVar15,auVar6);
                uVar13 = (longlong)
                         (int)(auVar16._12_4_ ^ auVar16._0_4_ ^ auVar16._8_4_ ^ auVar16._4_4_) &
                         (longlong)(int)param_1[1] - 1U;
                iVar9 = *(int *)(*param_1 + uVar13 * 4);
                do {
                  piVar2 = (int *)(*param_1 + uVar13 * 4);
                  LOCK();
                  iVar3 = *piVar2;
                  bVar14 = iVar9 == iVar3;
                  if (bVar14) {
                    *piVar2 = (int)uVar10;
                    iVar3 = iVar9;
                  }
                  iVar9 = iVar3;
                  UNLOCK();
                } while (!bVar14);
                uVar4 = *param_5;
                lVar5 = param_1[2];
                lVar12 = uVar10 * 0x20;
                *(undefined1 (*) [16])(lVar5 + lVar12) = auVar15;
                *(undefined8 *)(lVar5 + 0x10 + lVar12) = uVar4;
                *(int *)(lVar5 + 0x18 + lVar12) = iVar9;
                uVar10 = uVar10 + 1;
                iVar9 = param_3[2];
                bVar14 = iVar7 < iVar9;
                iVar7 = iVar7 + 1;
              } while (bVar14);
              iVar7 = param_3[1];
            }
            bVar14 = iVar8 < iVar7;
            iVar8 = iVar8 + 1;
          } while (bVar14);
          iVar9 = *param_3;
        }
        bVar14 = iVar11 < iVar9;
        iVar11 = iVar11 + 1;
      } while (bVar14);
    }
  }
  return;
}



// FUNCTION 146e38fd2 FUN_146e38fd2 body=78 status=ok
// SIG undefined FUN_146e38fd2(void)

void FUN_146e38fd2(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146e39216();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146e3929c();
      return;
    }
  }
  return;
}



// FUNCTION 146e39022 FUN_146e39022 body=107 status=ok
// SIG undefined FUN_146e39022(void)

ulonglong FUN_146e39022(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (0.5 < param_1) {
    iVar4 = -((int)ROUND(-0.5 - (param_1 + param_1)) >> 1);
    uVar1 = (ulonglong)(iVar4 + -1 + (uint)(iVar4 == 0)) * 2 + 1;
    uVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    return uVar3;
  }
  uVar6 = (uint)ROUND(1.0 / param_1 + 1.0 / param_1 + -0.5);
  uVar5 = (int)uVar6 >> 1;
  uVar2 = 0x1f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar2 == 0; uVar2 = uVar2 - 1) {
    }
  }
  uVar5 = 0;
  if (1 < uVar6) {
    uVar5 = (uVar2 ^ 0x1f) - 0x1f;
  }
  return (ulonglong)uVar5;
}



// FUNCTION 146e3908e FUN_146e3908e body=68 status=ok
// SIG undefined FUN_146e3908e(void)

void FUN_146e3908e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146e390d2();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 146e390d2 FUN_146e390d2 body=322 status=ok
// SIG undefined FUN_146e390d2(void)

void FUN_146e390d2(longlong *param_1)

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


