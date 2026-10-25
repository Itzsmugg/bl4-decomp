// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14736f67e FUN_14736f67e body=119 status=ok
// SIG undefined FUN_14736f67e(void)

void FUN_14736f67e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14736f6f6(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14736f6f6 FUN_14736f6f6 body=140 status=ok
// SIG undefined FUN_14736f6f6(void)

void FUN_14736f6f6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 14736f782 FUN_14736f782 body=74 status=ok
// SIG undefined FUN_14736f782(void)

undefined8 * FUN_14736f782(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a348fc0;
  puVar1 = TlsGetValue(DAT_14c760b80);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c760b80,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14736f7e6 FUN_14736f7e6 body=90 status=ok
// SIG undefined FUN_14736f7e6(void)

void FUN_14736f7e6(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0x11) {
    iVar3 = 0x10;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar3 = (int)(uVar1 >> 2);
    if (iVar3 < (int)param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_14736f817;
  }
  iVar2 = iVar3;
  FUN_14736f840(param_1,0,iVar2);
LAB_14736f817:
  *(int *)(param_1 + 0x4c) = iVar2;
  return;
}



// FUNCTION 14736f840 FUN_14736f840 body=132 status=ok
// SIG undefined FUN_14736f840(void)

void FUN_14736f840(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,4);
  return;
}



// FUNCTION 14736f8c4 FUN_14736f8c4 body=110 status=ok
// SIG undefined FUN_14736f8c4(void)

void FUN_14736f8c4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_14736f840(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14736f934 FUN_14736f934 body=113 status=ok
// SIG undefined FUN_14736f934(void)

void FUN_14736f934(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14736f9a6 FUN_14736f9a6 body=104 status=ok
// SIG undefined FUN_14736f9a6(void)

void FUN_14736f9a6(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x50 + *param_1);
  FUN_140db0884(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x50 + (longlong)_Dst),(longlong)iVar2 * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14736fa0e FUN_14736fa0e body=62 status=ok
// SIG undefined FUN_14736fa0e(void)

void FUN_14736fa0e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14736fa4c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 14736fa4c FUN_14736fa4c body=112 status=ok
// SIG undefined FUN_14736fa4c(void)

ulonglong FUN_14736fa4c(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14736fa86;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,8);
      param_2 = param_2 / 0x50;
    }
  }
LAB_14736fa86:
  return param_2 & 0xffffffff;
}



// FUNCTION 14736fabc FUN_14736fabc body=132 status=ok
// SIG undefined FUN_14736fabc(void)

void FUN_14736fabc(longlong param_1,int param_2)

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



// FUNCTION 14736fb42 FUN_14736fb42 body=132 status=ok
// SIG undefined FUN_14736fb42(void)

void FUN_14736fb42(longlong param_1,int param_2)

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



// FUNCTION 14736fbc8 FUN_14736fbc8 body=132 status=ok
// SIG undefined FUN_14736fbc8(void)

void FUN_14736fbc8(longlong param_1,int param_2)

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



// FUNCTION 14736fc4d FUN_14736fc4d body=72 status=ok
// SIG undefined FUN_14736fc4d(void)

void FUN_14736fc4d(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      puVar2 = (undefined8 *)plVar3[-1];
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      plVar3 = plVar3 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14736fc96 FUN_14736fc96 body=48 status=ok
// SIG undefined FUN_14736fc96(void)

void FUN_14736fc96(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 14736fcc6 FUN_14736fcc6 body=21 status=ok
// SIG undefined FUN_14736fcc6(void)

void FUN_14736fcc6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  return;
}



// FUNCTION 14736fcdc FUN_14736fcdc body=147 status=ok
// SIG undefined FUN_14736fcdc(void)

void FUN_14736fcdc(longlong param_1,int param_2)

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



// FUNCTION 14736fd70 FUN_14736fd70 body=112 status=ok
// SIG undefined FUN_14736fd70(void)

void FUN_14736fd70(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong *_Dst;
  undefined8 *puVar2;
  int iVar3;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x28);
  if (_Dst[1] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)*_Dst;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    memmove(_Dst,_Dst + 5,(longlong)(int)(~param_2 + iVar3) * 0x28);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 14736fde0 FUN_14736fde0 body=96 status=ok
// SIG undefined FUN_14736fde0(void)

void FUN_14736fde0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 14736fe40 FUN_14736fe40 body=120 status=ok
// SIG undefined FUN_14736fe40(void)

longlong * FUN_14736fe40(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[1] = 0;
  iVar1 = (int)param_2[2];
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_14736feb8(param_1 + 1,iVar1);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  lVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = lVar2;
  return param_1;
}



// FUNCTION 14736feb8 FUN_14736feb8 body=89 status=ok
// SIG undefined FUN_14736feb8(void)

void FUN_14736feb8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14736ff12 FUN_14736ff12 body=134 status=ok
// SIG undefined FUN_14736ff12(void)

void FUN_14736ff12(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong *_Dst;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  _Dst = (longlong *)(lVar2 + (longlong)(int)param_2 * 0x28);
  if (_Dst[1] != 0) {
    FUN_1400020a8();
  }
  puVar3 = (undefined8 *)*_Dst;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove(_Dst,(void *)(lVar2 + (longlong)(iVar4 - iVar5) * 0x28),(longlong)iVar5 * 0x28);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 14736ff98 FUN_14736ff98 body=132 status=ok
// SIG undefined FUN_14736ff98(void)

void FUN_14736ff98(longlong param_1,int param_2)

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



// FUNCTION 14737001e FUN_14737001e body=119 status=ok
// SIG undefined FUN_14737001e(void)

void FUN_14737001e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14736fc4d(*(undefined8 *)(param_1 + 0x1e8),*(undefined4 *)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    FUN_1400020a8();
  }
  FUN_14736fc4d(*(undefined8 *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    FUN_1400020a8();
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014737008b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147370096 FUN_147370096 body=96 status=ok
// SIG undefined FUN_147370096(void)

void FUN_147370096(longlong param_1,int param_2)

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



// FUNCTION 1473700f6 FUN_1473700f6 body=114 status=ok
// SIG undefined FUN_1473700f6(void)

void FUN_1473700f6(longlong *param_1,int param_2)

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



// FUNCTION 147370168 FUN_147370168 body=138 status=ok
// SIG undefined FUN_147370168(void)

void FUN_147370168(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1473701f2 FUN_1473701f2 body=119 status=ok
// SIG undefined FUN_1473701f2(void)

void FUN_1473701f2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14737026a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14737026a FUN_14737026a body=141 status=ok
// SIG undefined FUN_14737026a(void)

void FUN_14737026a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x10);
  return;
}



// FUNCTION 1473702f8 FUN_1473702f8 body=38 status=ok
// SIG undefined FUN_1473702f8(void)

void FUN_1473702f8(longlong param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (4 < param_2) {
    uVar1 = param_2;
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  if (uVar1 == *(uint *)(param_1 + 0x4c)) {
    return;
  }
  *(uint *)(param_1 + 0x4c) = uVar1;
  FUN_14737031e(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14737031e FUN_14737031e body=124 status=ok
// SIG undefined FUN_14737031e(void)

void FUN_14737031e(void *param_1,int param_2,uint param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if (param_3 < 5) {
    if (_Src != (void *)0x0) {
      memmove(param_1,_Src,(longlong)param_2 << 4);
      FUN_14315e4a2((longlong)param_1 + 0x40,0);
      return;
    }
  }
  else {
    FUN_14315e4a2((longlong)param_1 + 0x40,param_3);
    if (_Src == (void *)0x0) {
      memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 14737039a FUN_14737039a body=84 status=ok
// SIG undefined FUN_14737039a(void)

void FUN_14737039a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    uVar2 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
      if (4 < *(uint *)(param_1 + 0x4c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0x4c) = uVar2;
    FUN_14737031e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473703f0 FUN_1473703f0 body=116 status=ok
// SIG undefined FUN_1473703f0(void)

void FUN_1473703f0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147370464 FUN_147370464 body=84 status=ok
// SIG undefined FUN_147370464(void)

void FUN_147370464(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_2 + 8);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  FUN_14737d14c(*param_1,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473704d2 FUN_1473704d2 body=5 status=ok
// SIG undefined FUN_1473704d2(void)

longlong FUN_1473704d2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1473704f2 FUN_1473704f2 body=31 status=ok
// SIG undefined FUN_1473704f2(void)

undefined8 FUN_1473704f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147370518 FUN_147370518 body=322 status=ok
// SIG undefined FUN_147370518(void)

void FUN_147370518(longlong param_1,char param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar6 = param_3[1];
  if ((longlong)(int)lVar6 != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x3bcc);
    lVar3 = *param_3;
    uVar10 = (uint)(param_2 != '\x05') * 0x80;
    uVar1 = uVar10 + 0x40;
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar8);
      if (lVar7 != 0) {
        uVar9 = uVar10 | 0x60;
        if (((*(byte *)(*(longlong *)(lVar7 + 0x20) + 0xdf) & 4) == 0) &&
           (uVar9 = uVar1, (*(byte *)(lVar7 + 0x8c) & 1) != 0)) {
          uVar9 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x3bc8) | uVar1;
        }
        FUN_1446ff3a6(*(longlong *)(param_1 + 0x18),lVar7,uVar9 & uVar2);
        plVar4 = *(longlong **)(param_1 + 0x18);
        uVar5 = *(undefined8 *)(lVar7 + 0x20);
        lVar7 = plVar4[0x33];
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          lVar7 = plVar4[0x33];
        }
        FUN_1447093fc(lVar7,uVar5);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  lVar6 = param_4[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar3 = *param_4;
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar3 + lVar8);
      if (lVar7 != 0) {
        FUN_144719d5c(*(undefined8 *)(param_1 + 0x18),lVar7,8);
        plVar4 = *(longlong **)(param_1 + 0x18);
        uVar5 = *(undefined8 *)(lVar7 + 0x20);
        lVar7 = plVar4[0x33];
        if (lVar7 == 0) {
          (**(code **)(*plVar4 + 8))(plVar4);
          lVar7 = plVar4[0x33];
        }
        FUN_1447093fc(lVar7,uVar5);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar8);
  }
  return;
}



// FUNCTION 14737065a FUN_14737065a body=89 status=ok
// SIG undefined FUN_14737065a(void)

undefined8 FUN_14737065a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x138) == '\x01') {
    puVar2 = *(undefined8 **)(param_1 + 0x140);
    if (puVar2 != param_2) {
      *(undefined8 **)(param_1 + 0x140) = param_2;
      if (param_2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
        UNLOCK();
      }
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
    uVar3 = FUN_140039a1a(param_1,0);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1473706b4 FUN_1473706b4 body=277 status=ok
// SIG undefined FUN_1473706b4(void)

void FUN_1473706b4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14736bbfe(*param_1 + 0x6b0,&local_48,param_1[3],*(undefined4 *)(param_2 + 0xe8));
  if (local_40 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(local_40 + 0x18);
  }
  if (local_48 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(local_48 + 0x18);
  }
  bVar5 = lVar3 != 0;
  if (!bVar5) {
    lVar3 = *(longlong *)(param_2 + 0x18);
  }
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_2 + 0x88);
  }
  if ((lVar3 != param_1[5]) || (lVar4 != param_1[6])) {
    param_1[5] = lVar3;
    param_1[6] = lVar4;
    plVar1 = (longlong *)param_1[3];
    lVar2 = plVar1[0x33];
    local_38 = lVar3;
    local_30 = lVar4;
    if (lVar2 == 0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      lVar2 = plVar1[0x33];
    }
    *(int *)(lVar2 + 0x1c0) = *(int *)(lVar2 + 0x1c0) + 1;
    (**(code **)(**(longlong **)(lVar2 + 0x28) + 0xe0))(*(longlong **)(lVar2 + 0x28),2,&local_38);
    *(undefined1 *)(param_1 + 0x26) = 1;
    *(bool *)((longlong)param_1 + 0x131) = bVar5;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473707ca FUN_1473707ca body=39 status=ok
// SIG undefined FUN_1473707ca(void)

void FUN_1473707ca(longlong param_1)

{
  if (*(char *)(param_1 + 0x130) == '\x01') {
    FUN_140039a1a(param_1,0);
    *(undefined2 *)(param_1 + 0x130) = 0;
  }
  return;
}



// FUNCTION 1473707f2 FUN_1473707f2 body=35 status=ok
// SIG undefined FUN_1473707f2(void)

undefined8 FUN_1473707f2(void)

{
  FUN_140033559(".\\Runtime/D3D12RHI/Private/D3D12DescriptorCache.cpp",0x440,
                L"Global Descriptor heaps can\'t roll over!");
  return 0;
}



// FUNCTION 147370852 FUN_147370852 body=258 status=ok
// SIG undefined FUN_147370852(void)

void FUN_147370852(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  if (**(longlong **)(param_1 + 0x38) != 0) {
    do {
      puVar5 = local_38;
      lVar2 = **(longlong **)(param_1 + 0x38);
      puVar3 = *(undefined8 **)(lVar2 + 8);
      puVar4 = local_38;
      if (local_38 != puVar3) {
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          UNLOCK();
        }
        puVar4 = puVar3;
        if (local_38 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_38 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            puVar4 = (undefined8 *)*local_38;
            local_38 = puVar3;
            (*(code *)*puVar4)(puVar5,1);
            puVar4 = local_38;
          }
        }
      }
      local_38 = puVar4;
      local_30 = *(int *)(lVar2 + 0x10);
      if ((*(byte *)(local_38[5] + 0xa0) & 1) == 0) break;
      FUN_140039bb8(param_1 + 0x30,&local_38);
      *(int *)(param_1 + 0x1c) = local_30 + 1;
    } while (**(longlong **)(param_1 + 0x38) != 0);
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147370955 FUN_147370955 body=95 status=ok
// SIG undefined FUN_147370955(void)

void FUN_147370955(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  
  cVar2 = (char)((ulonglong)param_3 >> 0x20);
  if (cVar2 != -1 && (int)param_3 != -1) {
    bVar3 = cVar2 - 1;
    iVar4 = 0;
    if (bVar3 < 3) {
      iVar4 = bVar3 + 1;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
    (**(code **)(*plVar1 + 0xc0))
              (plVar1,1,(longlong)(int)param_3 * (ulonglong)*(uint *)(param_2 + 0x38) +
                        *(longlong *)(param_2 + 0x20),param_4,iVar4);
  }
  return;
}



// FUNCTION 1473709b4 FUN_1473709b4 body=78 status=ok
// SIG undefined FUN_1473709b4(void)

void FUN_1473709b4(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147379318();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14737939e();
      return;
    }
  }
  return;
}



// FUNCTION 147370a04 FUN_147370a04 body=147 status=ok
// SIG undefined FUN_147370a04(void)

void FUN_147370a04(longlong param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_14737959e((longlong *)(param_1 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = param_4;
  *(undefined1 *)(lVar2 + 0xc + lVar3) = param_3;
  *(undefined1 *)(lVar2 + 0xd + lVar3) = param_5;
                    /* WARNING: Could not recover jumptable at 0x000147370a83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147370a98 FUN_147370a98 body=184 status=ok
// SIG undefined FUN_147370a98(void)

undefined8 *
FUN_147370a98(longlong param_1,undefined8 *param_2,char param_3,int param_4,char param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    iVar3 = 0;
    lVar4 = 0;
    do {
      if (((*(char *)(lVar1 + 0xc + lVar5) == param_3) && (*(int *)(lVar1 + 8 + lVar5) == param_4))
         && (*(char *)(lVar1 + 0xd + lVar5) == param_5)) {
        if (iVar3 != 1) {
          lVar4 = (lVar4 >> 0x20) * 0x10;
          uVar2 = *(undefined8 *)(lVar1 + lVar4);
          *(undefined8 *)(lVar1 + lVar4) = 0;
          *param_2 = uVar2;
          FUN_147370b50(param_1 + 0x18,-iVar3);
          goto LAB_147370b11;
        }
        break;
      }
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + -1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar5);
  }
  *param_2 = 0;
LAB_147370b11:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 147370b50 FUN_147370b50 body=95 status=ok
// SIG undefined FUN_147370b50(void)

void FUN_147370b50(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar3) << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  FUN_147379502(param_1);
  return;
}



// FUNCTION 147370bb0 FUN_147370bb0 body=136 status=ok
// SIG undefined FUN_147370bb0(void)

void FUN_147370bb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(param_2 + 0x18) ==
            *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50 + lVar1) + 0x18))
        goto LAB_147370c16;
        lVar1 = lVar1 + 0x58;
      } while ((longlong)*(int *)(param_1 + 0x10) * 0x58 - lVar1 != 0);
    }
  }
  else {
LAB_147370c16:
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    local_14 = 3;
    FUN_14736b396(DAT_14ca77418,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147370c3a FUN_147370c3a body=124 status=ok
// SIG undefined FUN_147370c3a(void)

void FUN_147370c3a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_2 + 0x3e) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x10) != 0) {
      lVar2 = 0;
      do {
        if (param_2[3] ==
            *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x50 + lVar2) + 0x18)) {
          thunk_FUN_142b77cc2(*(longlong *)(param_1 + 8) + lVar2 + 8,*(undefined4 *)(param_2 + 6),
                              *(undefined4 *)((longlong)param_2 + 0x34));
          goto LAB_147370c89;
        }
        lVar2 = lVar2 + 0x58;
      } while ((longlong)*(int *)(param_1 + 0x10) * 0x58 - lVar2 != 0);
    }
  }
  else {
LAB_147370c89:
    LOCK();
    piVar1 = (int *)(param_2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (param_2 != (undefined8 *)0x0 && *piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147370cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_2)(param_2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147370d10 FUN_147370d10 body=142 status=ok
// SIG undefined FUN_147370d10(void)

void FUN_147370d10(longlong param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      for (; (param_3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    do {
      lVar2 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar2 = param_1 + 0x20;
      }
      lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar1 * 8);
      if ((lVar2 != 0) && ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0xa0) & 1) == 0)) {
        lVar2 = *(longlong *)(param_1 + 0x60);
        if (*(longlong *)(param_1 + 0x60) == 0) {
          lVar2 = param_1 + 0x20;
        }
        lVar2 = *(longlong *)(lVar2 + (ulonglong)uVar1 * 8);
        if ((*(byte *)(*(longlong *)(lVar2 + 0x28) + 0xa0) & 1) == 0) {
          FUN_1402df4ac(DAT_14ca77418,*(undefined8 *)(lVar2 + 0x28));
        }
      }
      param_3 = param_3 & ~(1 << (uVar1 & 0x1f));
      if (param_3 == 0) {
        uVar1 = 0x20;
      }
      else {
        uVar1 = 0;
        if (param_3 != 0) {
          for (; (param_3 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
      }
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147370dbc FUN_147370dbc body=286 status=ok
// SIG undefined FUN_147370dbc(void)

void FUN_147370dbc(undefined8 param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  lVar2 = DAT_14ca77418;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_2[4];
  uStack_44 = param_2[5];
  uStack_40 = param_2[6];
  uStack_3c = param_2[7];
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14ca77418 + 0xa0);
  EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(lVar2 + 0xd0);
  *(uint *)(lVar2 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xd4) < iVar1 + 1U) {
    FUN_1449031f2((longlong *)(lVar2 + 200),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 200);
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar3 = &PTR_LAB_14a34c3e0;
  puVar5 = (undefined1 *)0x0;
  puVar3[1] = param_1;
  *(undefined4 *)(puVar3 + 2) = local_58;
  *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_54;
  *(undefined4 *)(puVar3 + 3) = uStack_50;
  *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_4c;
  *(undefined4 *)(puVar3 + 4) = local_48;
  *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_44;
  *(undefined4 *)(puVar3 + 5) = uStack_40;
  *(undefined4 *)((longlong)puVar3 + 0x2c) = uStack_3c;
  if (puVar3 + 1 != (undefined8 *)0x0) {
    puVar5 = &LAB_143169d84;
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 9;
  puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  *puVar4 = puVar5;
  puVar4[2] = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x30) = puVar4;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147370ef2 FUN_147370ef2 body=209 status=ok
// SIG undefined FUN_147370ef2(void)

void FUN_147370ef2(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  *(longlong *)(param_2 + 4) =
       (longlong)*(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x10) + 0x538) + 0x58) + 1;
  QueryPerformanceCounter(&local_30);
  *(double *)(param_2 + 6) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar2 = (int)param_1[7];
  *(uint *)(param_1 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar2 + 1U) {
    FUN_147379cd8(param_1 + 6,iVar2);
  }
  lVar3 = param_1[6];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
  *puVar1 = param_2[4];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + (longlong)iVar2 * 0x20);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(int *)(param_1 + 8) = (int)param_1[8] + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147370fc4 FUN_147370fc4 body=125 status=ok
// SIG undefined FUN_147370fc4(void)

void FUN_147370fc4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
    FUN_1449031f2((longlong *)(param_1 + 200),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 200);
  uVar3 = *param_2;
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 1;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00014737103a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 147371042 FUN_147371042 body=62 status=ok
// SIG undefined FUN_147371042(void)

void FUN_147371042(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_147370dbc(*(undefined8 *)(*param_1 + 0x1500),param_1 + 7);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147371080 FUN_147371080 body=228 status=ok
// SIG undefined FUN_147371080(void)

void FUN_147371080(longlong *param_1,undefined4 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(int *)(param_1 + 1) = param_3;
  FUN_14316074e(*(undefined8 *)(*param_1 + 0x1500),&local_40,param_3,param_2);
  *(undefined4 *)(param_1 + 9) = local_30;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_2c;
  *(undefined4 *)(param_1 + 10) = uStack_28;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_24;
  *(undefined4 *)(param_1 + 7) = local_40;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 8) = uStack_38;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_34;
  *(int *)(param_1 + 3) = (int)param_1[8];
  plVar1 = (longlong *)param_1[7];
  param_1[2] = (longlong)plVar1;
  (**(code **)(*plVar1 + 0x48))(plVar1,&local_40);
  param_1[5] = CONCAT44(uStack_3c,local_40);
  (**(code **)(*(longlong *)param_1[2] + 0x50))((longlong *)param_1[2],&local_40);
  param_1[6] = CONCAT44(uStack_3c,local_40);
  plVar1 = *(longlong **)(*(longlong *)(*param_1 + 0x10) + 8);
  uVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,(int)param_1[1]);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  iVar2 = DAT_14c760b8c;
  *(bool *)(param_1 + 0xd) = DAT_14c760b8c == 1;
  if (param_3 == 1 && iVar2 == 1) {
    FUN_147371166(param_1 + 0xb,(int)param_1[3]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371166 FUN_147371166 body=118 status=ok
// SIG undefined FUN_147371166(void)

void FUN_147371166(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147379318(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14737939e(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473711de FUN_1473711de body=155 status=ok
// SIG undefined FUN_1473711de(void)

void FUN_1473711de(longlong *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(int *)(param_1 + 0x1d) = param_5;
  iVar1 = *(int *)(*param_1 + 0x6d0);
  *(bool *)((longlong)param_1 + 0xec) = iVar1 <= param_5 && iVar1 != 0;
  iVar2 = *(int *)(*param_1 + 0x6d4);
  *(bool *)((longlong)param_1 + 0xed) = iVar2 <= param_5 && iVar2 != 0;
  iVar3 = 0;
  if (iVar1 > param_5 || iVar1 == 0) {
    iVar3 = param_3;
  }
  if (iVar3 + param_2 == 0) {
    if (param_5 < iVar2 || iVar2 == 0) {
LAB_14737125f:
      FUN_147371080(param_1 + 0xf,param_4,1);
      return;
    }
  }
  else {
    FUN_147371080(param_1 + 1,iVar3 + param_2,0);
    if ((*(byte *)((longlong)param_1 + 0xed) & 1) == 0) goto LAB_14737125f;
  }
  return;
}



// FUNCTION 14737127a FUN_14737127a body=348 status=ok
// SIG undefined FUN_14737127a(void)

void FUN_14737127a(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = 0x78;
  lVar7 = *(longlong *)(param_1 + 0xf0) + 0x30;
  if (param_5 == 0) {
    lVar6 = 8;
    lVar7 = *(longlong *)(param_1 + 0xf0);
  }
  uVar3 = FUN_140ab9477(param_2,(ulonglong)param_4 * 4,0,&DAT_149e18840,0xc0,&LAB_142760e05);
  uVar4 = FUN_140ab9477(param_3,(ulonglong)param_4 * 8,0,&DAT_149e18840,0xc0,&LAB_142760e05);
  piVar5 = (int *)FUN_1473713d6(lVar7 + (longlong)param_6 * 0x80,uVar3 ^ uVar4);
  if (*piVar5 != -1) {
    return;
  }
  if ((((param_5 == 1) && (*(char *)(param_1 + 0x68 + lVar6) != '\0')) &&
      (1 < *(int *)(param_1 + 0xf8))) &&
     (iVar1 = *(int *)(param_1 + 0x20 + lVar6), (int)param_4 < iVar1)) {
    if (param_4 == 0) {
      iVar2 = 0;
      goto LAB_1473713ca;
    }
    iVar2 = 0;
    do {
      lVar7 = 0;
      while (*(longlong *)
              (*(longlong *)(param_1 + 0x58 + lVar6) + (longlong)(iVar2 + (int)lVar7) * 8) ==
             *(longlong *)(param_3 + lVar7 * 8)) {
        lVar7 = lVar7 + 1;
        if (param_4 == (uint)lVar7) goto LAB_1473713ca;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar1 - param_4);
  }
  iVar2 = FUN_143160a10(param_1,param_3,param_4);
LAB_1473713ca:
  *piVar5 = iVar2;
  return;
}



// FUNCTION 1473713d6 FUN_1473713d6 body=97 status=ok
// SIG undefined FUN_1473713d6(void)

longlong FUN_1473713d6(longlong param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  
  uVar1 = (ulonglong)(*(uint *)(param_1 + 0x20) & (uint)param_2);
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + uVar1) < '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\0';
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar1 * 8) == param_2) {
        return uVar1 * 4 + *(longlong *)(param_1 + 0x18);
      }
      uVar1 = (ulonglong)((int)uVar1 + 1);
      cVar3 = cVar3 + '\x01';
    } while (cVar3 <= *(char *)(lVar2 + uVar1));
  }
  lVar2 = FUN_147379d5e(param_1,cVar3,param_1,uVar1,param_2,(uint)param_2,param_3);
  return lVar2;
}



// FUNCTION 147371438 FUN_147371438 body=74 status=ok
// SIG undefined FUN_147371438(void)

void FUN_147371438(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147371478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 147371482 FUN_147371482 body=259 status=ok
// SIG undefined FUN_147371482(void)

void FUN_147371482(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14ca813bc == '\x01') && ((char)param_1[5] == '\0')) {
    lVar2 = *param_1;
    bVar8 = DAT_14ca76e40 != 0;
    if ((bool)*(char *)((longlong)param_1 + 0x29) != bVar8) {
      plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x10) + 8);
      iVar5 = (**(code **)(*plVar4 + 0x140))(plVar4,DAT_14ca76e40 != 0);
      if (iVar5 < 0) {
        FUN_140635eb8(DAT_14ca76a48,0,0xe000000,0);
      }
      else {
        uVar7 = FUN_144a90336(lVar2,0);
        (&DAT_14ca813c0)[*(uint *)(lVar2 + 8)] = uVar7;
        *(bool *)((longlong)param_1 + 0x29) = bVar8;
      }
    }
    uVar7 = *(undefined8 *)(lVar2 + 0xac0);
    FUN_144ac2c24(uVar7,local_38,0,param_1 + 1);
    puVar6 = (undefined8 *)FUN_1400659f4(uVar7);
    puVar3 = (undefined8 *)param_1[2];
    if (puVar3 != puVar6) {
      param_1[2] = (longlong)puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371586 FUN_147371586 body=153 status=ok
// SIG undefined FUN_147371586(void)

void FUN_147371586(longlong *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14ca813bc == '\x01') && ((char)param_1[5] == '\x01')) {
    uVar2 = *(undefined8 *)(*param_1 + 0xac0);
    FUN_144ac2c24(uVar2,local_30,0,param_1 + 3);
    puVar4 = (undefined8 *)FUN_1400659f4(uVar2);
    puVar3 = (undefined8 *)param_1[4];
    if (puVar3 != puVar4) {
      param_1[4] = (longlong)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371620 FUN_147371620 body=104 status=ok
// SIG undefined FUN_147371620(void)

longlong FUN_147371620(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x28) + 0xa0) & 1) == 0)) {
    FUN_1402df4ac(DAT_14ca77418,*(undefined8 *)(lVar1 + 0x28));
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 != 0) && ((*(byte *)(*(longlong *)(lVar1 + 0x28) + 0xa0) & 1) == 0)) {
    FUN_1402df4ac(DAT_14ca77418,*(undefined8 *)(lVar1 + 0x28));
  }
  lVar1 = 0;
  if (*(ulonglong *)(param_1 + 8) <= *(ulonglong *)(param_1 + 0x18)) {
    lVar1 = *(ulonglong *)(param_1 + 0x18) - *(ulonglong *)(param_1 + 8);
  }
  return lVar1;
}



// FUNCTION 147371688 FUN_147371688 body=109 status=ok
// SIG undefined FUN_147371688(void)

void FUN_147371688(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_147371620(param_1 + 0x78);
  }
  return;
}



// FUNCTION 1473716f6 FUN_1473716f6 body=75 status=ok
// SIG undefined FUN_1473716f6(void)

void FUN_1473716f6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a34a760;
  FUN_147371438(param_1 + 4);
  *param_1 = &PTR_FUN_14a343240;
  FUN_147365bf9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147371742 FUN_147371742 body=70 status=ok
// SIG undefined FUN_147371742(void)

void FUN_147371742(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_147365bf9(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_14736903a(param_1 + 8,0);
  }
  FUN_147371482(param_1 + 0x20);
  return;
}



// FUNCTION 147371792 FUN_147371792 body=109 status=ok
// SIG undefined FUN_147371792(void)

void FUN_147371792(longlong param_1)

{
  if (DAT_14ca813bc == '\x01') {
    FUN_147371620(param_1 + 0x20);
  }
  return;
}



// FUNCTION 147371800 FUN_147371800 body=80 status=ok
// SIG undefined FUN_147371800(void)

void FUN_147371800(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar2 = 0;
  }
  else {
    memmove((void *)*param_1,(void *)((longlong)*param_1 + 8),
            (longlong)(*(int *)(param_1 + 1) + -1) << 3);
    iVar2 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar2;
  FUN_140380544(param_1);
  return;
}



// FUNCTION 147371850 FUN_147371850 body=236 status=ok
// SIG undefined FUN_147371850(void)

void FUN_147371850(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_14737191c;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_14737191c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737193d FUN_14737193d body=236 status=ok
// SIG undefined FUN_14737193d(void)

void FUN_14737193d(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371a09;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371a09:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371a2a FUN_147371a2a body=236 status=ok
// SIG undefined FUN_147371a2a(void)

void FUN_147371a2a(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371af6;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371af6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371b17 FUN_147371b17 body=236 status=ok
// SIG undefined FUN_147371b17(void)

void FUN_147371b17(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371be3;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371be3:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371c04 FUN_147371c04 body=236 status=ok
// SIG undefined FUN_147371c04(void)

void FUN_147371c04(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371cd0;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371cd0:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371cf1 FUN_147371cf1 body=236 status=ok
// SIG undefined FUN_147371cf1(void)

void FUN_147371cf1(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371dbd;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371dbd:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371dde FUN_147371dde body=236 status=ok
// SIG undefined FUN_147371dde(void)

void FUN_147371dde(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
      uVar1 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      plVar2 = param_3 + 7;
      if ((longlong *)param_3[8] != (longlong *)0x0) {
        plVar2 = (longlong *)param_3[8];
      }
      iVar3 = *(int *)((longlong)plVar2 +
                      (ulonglong)((int)param_3[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*param_3 + (longlong)iVar3 * 0x10) == param_1) goto LAB_147371eaa;
          iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_3 + 8);
        } while (iVar3 != -1);
      }
    }
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_14737a1d0(param_2,iVar3);
    }
    *(ulonglong *)(*param_2 + (longlong)iVar3 * 8) = param_1;
    local_30 = param_1;
    FUN_14737a256(param_3,local_34);
  }
LAB_147371eaa:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147371ecc FUN_147371ecc body=93 status=ok
// SIG undefined FUN_147371ecc(void)

void FUN_147371ecc(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_14737a846((longlong *)(param_1 + 0x30),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000147371f15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 147371f2a FUN_147371f2a body=152 status=ok
// SIG undefined FUN_147371f2a(void)

void FUN_147371f2a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_28 = &local_30;
  iVar1 = FUN_14737a8cc(param_1 + 0x30);
  if ((iVar1 < 1) && (0 < (longlong)*(int *)(param_1 + 0x58))) {
    lVar2 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar2 * 8) == local_30) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + lVar2 * 8) = 0;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x58) != lVar2);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147371fc4 FUN_147371fc4 body=122 status=ok
// SIG undefined FUN_147371fc4(void)

longlong FUN_147371fc4(longlong param_1,longlong param_2)

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
    FUN_14737a9fe(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14737203e FUN_14737203e body=71 status=ok
// SIG undefined FUN_14737203e(void)

void FUN_14737203e(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_147374c1e(param_1,param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_147374c7e(param_1 + 0x10,param_2);
  return;
}



// FUNCTION 147372086 FUN_147372086 body=71 status=ok
// SIG undefined FUN_147372086(void)

void FUN_147372086(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14737adec();
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
      FUN_14737ae72();
      return;
    }
  }
  return;
}



// FUNCTION 1473720ce FUN_1473720ce body=283 status=ok
// SIG undefined FUN_1473720ce(void)

ulonglong * FUN_1473720ce(longlong param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_70 = (ulonglong)*(uint *)(param_3 + 0x50);
  local_78 = ((ulonglong)*(uint *)(param_3 + 0x68) & 0x1f) << 0x20;
  if (DAT_14c760da4 == 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_1 + 0x1b0);
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      plVar2 = *(longlong **)(*(longlong *)(*(longlong *)(lVar1 + 2000 + uVar3 * 8) + 0x10) + 0x30);
      (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_78,&local_98);
      if (uVar4 < local_98) {
        uVar4 = local_98;
      }
      if (uVar6 < uStack_90) {
        uVar6 = uStack_90;
      }
      if (uVar5 < local_88) {
        uVar5 = local_88;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_14c760da4);
  }
  *param_2 = uVar4;
  param_2[1] = uVar6;
  param_2[2] = uVar5;
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1473721ea FUN_1473721ea body=291 status=ok
// SIG undefined FUN_1473721ea(void)

void FUN_1473721ea(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  int iVar13;
  
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  if (0 < (int)param_1[4]) {
    lVar9 = 0x20;
    lVar10 = 0x21;
    lVar11 = 0;
    do {
      lVar4 = param_1[3];
      bVar1 = *(byte *)(lVar4 + -1 + lVar10);
      uVar7 = bVar1 + 2;
      if (*(char *)(lVar4 + lVar10) != '\0') {
        uVar7 = (uint)bVar1;
      }
      if (iVar2 == 1) {
        uVar5 = (ulonglong)*(uint *)(lVar4 + -5 + lVar10);
        uVar12 = 0;
        uVar8 = 0;
        iVar13 = 0;
        uVar6 = 0;
      }
      else {
        iVar13 = *(int *)(lVar4 + -0x19 + lVar10);
        if (iVar13 - 3U < 2) {
          uVar8 = 6;
        }
        else if (iVar13 == 2) {
          uVar8 = 0x10;
        }
        else {
          uVar8 = 0;
          if (iVar13 == 0xc) {
            uVar8 = 0x22;
          }
        }
        if (*param_1 == 0) {
          uVar6 = (int)param_1[2] * 3;
          uVar3 = *(uint *)(lVar4 + -0xd + lVar10);
          if (uVar3 < uVar6) {
            uVar6 = uVar3;
          }
          uVar5 = 0;
          uVar12 = 0;
          iVar13 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar4 + -0xd + lVar10);
          iVar13 = *(int *)(lVar4 + -5 + lVar10) * 3;
          uVar12 = 0x2a;
          uVar5 = 0;
        }
      }
      lVar4 = *param_2;
      *(uint *)(lVar4 + -0x20 + lVar9) = (uint)(iVar2 == 1);
      *(uint *)(lVar4 + -0x1c + lVar9) = uVar7;
      *(ulonglong *)(lVar4 + -0x18 + lVar9) = uVar5;
      *(undefined4 *)(lVar4 + -0x10 + lVar9) = uVar12;
      *(undefined4 *)(lVar4 + -0xc + lVar9) = uVar8;
      *(int *)(lVar4 + -8 + lVar9) = iVar13;
      *(uint *)(lVar4 + -4 + lVar9) = uVar6;
      *(undefined8 *)(lVar4 + lVar9) = 0;
      ((undefined8 *)(lVar4 + lVar9))[1] = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar9) = 0;
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x38;
      lVar10 = lVar10 + 0x28;
    } while (lVar11 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 14737230e FUN_14737230e body=603 status=ok
// SIG undefined FUN_14737230e(void)

ulonglong * FUN_14737230e(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 auStack_7e8 [32];
  ulonglong *local_7c8;
  undefined4 *local_7c0;
  ulonglong local_7b8;
  ulonglong uStack_7b0;
  ulonglong local_7a8;
  undefined1 *local_798;
  undefined4 local_790;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined1 *local_778;
  undefined1 local_770 [1792];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  uVar6 = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_7c8 = param_2;
  uVar4 = FUN_143162371(param_3);
  local_70 = (undefined1 *)0x0;
  local_68 = 0x2000000000;
  FUN_14737256a(local_770,(int)param_3[4]);
  local_798 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    local_798 = local_770;
  }
  local_790 = (int)local_68;
  FUN_1473721ea(param_3);
  local_788 = 1;
  local_77c = 0;
  local_780 = (int)local_68;
  local_778 = local_70;
  if (local_70 == (undefined1 *)0x0) {
    local_778 = local_770;
  }
  puVar11 = &DAT_14a34bfa8;
  if (*param_3 == 0) {
    puVar11 = &DAT_14a34bfb0;
  }
  local_7c0 = puVar11 + (ulonglong)(*param_3 != 0) + 1;
  lVar1 = **(longlong **)(param_1 + 0x1b0);
  uVar8 = 0;
  uVar12 = 0;
  local_784 = uVar4;
  do {
    puVar5 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar5 = local_770;
    }
    lVar7 = (longlong)(int)local_68;
    if (lVar7 != 0) {
      uVar4 = *puVar11;
      lVar10 = 0;
      do {
        if (*(int *)(puVar5 + lVar10) == 0) {
          *(undefined4 *)(puVar5 + lVar10 + 0x10) = uVar4;
        }
        lVar10 = lVar10 + 0x38;
      } while (lVar7 * 0x38 - lVar10 != 0);
    }
    if (DAT_14c760da4 != 0) {
      uVar9 = 0;
      do {
        local_7b8 = 0;
        uStack_7b0 = 0;
        local_7a8 = 0;
        plVar2 = *(longlong **)
                  (*(longlong *)(*(longlong *)(lVar1 + 2000 + uVar9 * 8) + 0x10) + 0x30);
        (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_788);
        if (uVar6 < local_7b8) {
          uVar6 = local_7b8;
        }
        if (uVar8 < uStack_7b0) {
          uVar8 = uStack_7b0;
        }
        if (uVar12 < local_7a8) {
          uVar12 = local_7a8;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < DAT_14c760da4);
    }
    puVar3 = local_7c8;
    puVar11 = puVar11 + 1;
  } while (puVar11 != local_7c0);
  *local_7c8 = -(ulonglong)DAT_14ca84f00 & (uVar6 + DAT_14ca84f00) - 1;
  uVar6 = (ulonglong)DAT_14ca84f04;
  local_7c8[1] = (uVar6 + uVar8) - 1 & -uVar6;
  local_7c8[2] = (uVar6 + uVar12 + (uVar12 == 0)) - 1 & -uVar6;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_7e8) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737256a FUN_14737256a body=83 status=ok
// SIG undefined FUN_14737256a(void)

void FUN_14737256a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x708);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x708) = param_2;
    if ((uint)(*(int *)(param_1 + 0x70c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14737af0e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x708) = param_2;
      FUN_14737b022();
      return;
    }
  }
  return;
}



// FUNCTION 1473725be FUN_1473725be body=89 status=ok
// SIG undefined FUN_1473725be(void)

longlong * FUN_1473725be(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *(undefined8 *)(**(longlong **)(param_1 + 0x1b0) + 2000);
  lVar2 = FUN_14001cc68(0x138,0x10);
  FUN_143162956(lVar2,uVar1,param_3);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147372618 FUN_147372618 body=92 status=ok
// SIG undefined FUN_147372618(void)

longlong * FUN_147372618(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = **(undefined8 **)(param_1 + 0x1b0);
  lVar2 = FUN_14001cc68(0x2c8,0x10);
  FUN_143164d58(lVar2,param_3,uVar1,param_4);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 147372674 FUN_147372674 body=204 status=ok
// SIG undefined FUN_147372674(void)

void FUN_147372674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  uVar3 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  return;
}



// FUNCTION 147372740 FUN_147372740 body=116 status=ok
// SIG undefined FUN_147372740(void)

longlong FUN_147372740(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 1473727b4 FUN_1473727b4 body=114 status=ok
// SIG undefined FUN_1473727b4(void)

longlong FUN_1473727b4(longlong param_1,char *param_2)

{
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)param_2[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 147372826 FUN_147372826 body=65 status=ok
// SIG undefined FUN_147372826(void)

void FUN_147372826(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_140e87686(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_14737b8a8();
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147372868 FUN_147372868 body=56 status=ok
// SIG undefined FUN_147372868(void)

int FUN_147372868(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x40000000) {
    iVar1 = *(uint *)(param_1 + 0x10) << 2;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,4);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1473728a0 FUN_1473728a0 body=78 status=ok
// SIG undefined FUN_1473728a0(void)

void FUN_1473728a0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x40) = param_2;
    if ((uint)(*(int *)(param_1 + 0x44) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14737b94a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x40) = param_2, param_3 == '\x01')) {
      FUN_14737ba56();
      return;
    }
  }
  return;
}



// FUNCTION 1473728f0 FUN_1473728f0 body=405 status=ok
// SIG undefined FUN_1473728f0(void)

void FUN_1473728f0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 2000) + 0x6d0) == 0) {
    uVar7 = (ulonglong)param_2;
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf8 + uVar7 * 8), lVar2 != 0)) {
      FUN_14472d45a(lVar2 + 0x30,param_1 + 0x78);
    }
    local_58 = (undefined1 *)0x0;
    local_50 = 0x100000000;
    uVar3 = *(uint *)(param_1 + 0x48);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (1 < uVar3) {
      FUN_14737bc78(local_60);
      uVar3 = *(uint *)(param_1 + 0x48);
    }
    if (uVar3 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x40);
      plVar1 = plVar6 + (longlong)(int)uVar3 * 5;
      do {
        if ((*plVar6 != 0) && (lVar2 = *(longlong *)(*plVar6 + 0xf8 + uVar7 * 8), lVar2 != 0)) {
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_60;
          }
          if ((longlong)(int)local_50 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(puVar4 + lVar5) == lVar2) goto LAB_147372a33;
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)local_50 * 8 != lVar5);
          }
          FUN_14472d45a(lVar2 + 0x30);
          lVar5 = (longlong)(int)local_50;
          uVar3 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar3);
          if (local_50._4_4_ < uVar3) {
            FUN_14737bd46(local_60);
          }
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_60;
          }
          *(longlong *)(puVar4 + lVar5 * 8) = lVar2;
        }
LAB_147372a33:
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar1);
    }
    *(undefined1 *)(param_1 + 0xd0 + uVar7) = 1;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147372a88 FUN_147372a88 body=382 status=ok
// SIG undefined FUN_147372a88(void)

void FUN_147372a88(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = 0x88;
  do {
    uVar2 = *(undefined8 *)(param_1 + -0x3b0 + lVar3 * 8);
    *(undefined8 *)(param_1 + -0x3b0 + lVar3 * 8) = *(undefined8 *)(param_2 + -0x3b0 + lVar3 * 8);
    *(undefined8 *)(param_2 + -0x3b0 + lVar3 * 8) = uVar2;
    uVar1 = *(undefined1 *)(param_1 + lVar3);
    *(undefined1 *)(param_1 + lVar3) = *(undefined1 *)(param_2 + lVar3);
    *(undefined1 *)(param_2 + lVar3) = uVar1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x90);
  uVar2 = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)(param_2 + 0x2c0);
  *(undefined8 *)(param_2 + 0x2c0) = uVar2;
  if (DAT_14c760da4 != 0) {
    uVar5 = 0;
    do {
      FUN_147372c08(param_1,uVar5);
      if (6 < uVar5) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_14c760da4);
  }
  FUN_147372d8e(param_1 + 0x28,param_2 + 0x28);
  iVar4 = *(int *)(param_1 + 0x68);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x60) == 0) && (lVar3 = 0, iVar4 == 0)) {
    FUN_1446f470e(&local_28,L"BLAS",1);
    iVar4 = 0;
    lVar3 = local_28;
  }
  *(longlong *)(param_1 + 0x260) = lVar3;
  *(int *)(param_1 + 0x268) = iVar4;
  FUN_1473728a0(param_1 + 0x278,*(undefined4 *)(param_1 + 0x48),1);
  local_38 = *(longlong *)(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2b0) == 0) {
    local_38 = param_1 + 0x278;
  }
  local_30 = *(undefined4 *)(param_1 + 0x2b8);
  FUN_1473721ea(param_1 + 0x28);
  if (DAT_14c760da4 != 0) {
    uVar5 = 0;
    do {
      FUN_1473728f0(param_1,uVar5);
      FUN_147372e06(param_1,uVar5);
      if (6 < uVar5) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_14c760da4);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147372c08 FUN_147372c08 body=388 status=ok
// SIG undefined FUN_147372c08(void)

void FUN_147372c08(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar7 = (ulonglong)param_2;
  if (*(char *)(param_1 + 0xd0 + uVar7) == '\x01') {
    if ((*(longlong *)(param_1 + 0x28) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf8 + uVar7 * 8), lVar2 != 0)) {
      FUN_144b1ad1a(lVar2 + 0x30,param_1 + 0x78);
    }
    local_58 = (undefined1 *)0x0;
    local_50 = 0x100000000;
    uVar3 = *(uint *)(param_1 + 0x48);
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    if (1 < uVar3) {
      FUN_14737bc78(local_60);
      uVar3 = *(uint *)(param_1 + 0x48);
    }
    if (uVar3 != 0) {
      plVar6 = *(longlong **)(param_1 + 0x40);
      plVar1 = plVar6 + (longlong)(int)uVar3 * 5;
      do {
        if ((*plVar6 != 0) && (lVar2 = *(longlong *)(*plVar6 + 0xf8 + uVar7 * 8), lVar2 != 0)) {
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_60;
          }
          if ((longlong)(int)local_50 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(puVar4 + lVar5) == lVar2) goto LAB_147372d1b;
              lVar5 = lVar5 + 8;
            } while ((longlong)(int)local_50 * 8 != lVar5);
          }
          FUN_144b1ad1a(lVar2 + 0x30);
          lVar5 = (longlong)(int)local_50;
          uVar3 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar3);
          if (local_50._4_4_ < uVar3) {
            FUN_14737bd46(local_60);
          }
          puVar4 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar4 = local_60;
          }
          *(longlong *)(puVar4 + lVar5 * 8) = lVar2;
        }
LAB_147372d1b:
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar1);
    }
    *(undefined1 *)(param_1 + 0xd0 + uVar7) = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147372d8e FUN_147372d8e body=120 status=ok
// SIG undefined FUN_147372d8e(void)

longlong * FUN_147372d8e(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  lVar3 = *param_2;
  lVar4 = *param_1;
  if (lVar4 != lVar3) {
    *param_1 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar3 = param_2[2];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(int *)(param_1 + 2) = (int)lVar3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  FUN_14737756a(param_1 + 3,param_2 + 3);
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  lVar7 = param_2[8];
  param_1[5] = param_2[5];
  param_1[6] = lVar3;
  param_1[7] = lVar4;
  param_1[8] = lVar7;
  *(int *)(param_1 + 9) = (int)param_2[9];
  return param_1;
}



// FUNCTION 147372e06 FUN_147372e06 body=630 status=ok
// SIG undefined FUN_147372e06(void)

void FUN_147372e06(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_80;
  undefined8 local_48;
  
  iVar16 = *(int *)(param_1 + 0x34);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 2000) + 0x6d0);
  uVar17 = (ulonglong)param_2;
  lVar8 = param_1 + uVar17 * 0x10;
  plVar9 = (longlong *)(lVar8 + 0xe0);
  FUN_147373984(plVar9,*(undefined4 *)(param_1 + 0x48));
  if (iVar2 != 0) {
    FUN_1473731f2(param_1,param_2);
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    bVar7 = 0;
    lVar14 = 0;
    uVar13 = 0;
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf8 + uVar17 * 8);
    if (lVar14 == 0) {
      bVar7 = 0;
      lVar14 = 0;
      uVar13 = 0;
    }
    else {
      uVar13 = *(uint *)(lVar14 + 0x24);
      bVar7 = 1;
    }
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar1 = param_1 + uVar17 * 0x10;
    bVar6 = (bool)(iVar16 != 1 & bVar7);
    lVar18 = 0x18;
    lVar11 = 0;
    lVar19 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      lVar10 = *(longlong *)(lVar5 + -0x18 + lVar18);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(lVar10 + 0xf8 + uVar17 * 8);
      }
      if (iVar2 == 0) {
        local_48 = (ulonglong)*(uint *)(lVar5 + -0xc + lVar18) + *(longlong *)(lVar10 + 0xd0);
        if (bVar6) {
          local_80 = *(ulonglong *)(lVar14 + 0xd0);
          uVar15 = local_80 >> 0x20;
          goto LAB_147372f26;
        }
        iVar12 = 0;
        iVar16 = 0;
        local_80 = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar1 + 0x1e0) + lVar11) + 0x48);
        if (bVar6) {
          local_80 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x160) + 0x48);
LAB_147372f26:
          iVar16 = *(int *)(lVar5 + lVar18);
          iVar12 = uVar13 * 3 * iVar16 + *(int *)(param_1 + 0x30);
        }
        else {
          iVar12 = 0;
          iVar16 = 0;
          local_80 = 0;
        }
      }
      uVar3 = *(uint *)(lVar5 + -8 + lVar18);
      iVar4 = *(int *)(lVar8 + 0xe8);
      *(uint *)(lVar8 + 0xe8) = iVar4 + 1U;
      if (*(uint *)(lVar8 + 0xec) < iVar4 + 1U) {
        FUN_14737bdc4(plVar9,iVar4);
      }
      lVar5 = *plVar9;
      lVar10 = (longlong)iVar4 * 0x20;
      *(uint *)(lVar5 + lVar10) = (uVar3 & 0xff) * 0x100 + (uVar13 & 0xff);
      *(int *)(lVar5 + 4 + lVar10) = iVar12;
      *(int *)(lVar5 + 8 + lVar10) = iVar16;
      *(undefined4 *)(lVar5 + 0xc + lVar10) = 0;
      *(ulonglong *)(lVar5 + 0x10 + lVar10) = local_80 & 0xffffffff | uVar15 << 0x20;
      *(longlong *)(lVar5 + 0x18 + lVar10) = local_48;
      lVar19 = lVar19 + 1;
      lVar11 = lVar11 + 0x10;
      lVar18 = lVar18 + 0x28;
    } while (lVar19 < *(int *)(param_1 + 0x48));
  }
  return;
}



// FUNCTION 14737307c FUN_14737307c body=112 status=ok
// SIG undefined FUN_14737307c(void)

void * FUN_14737307c(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 3) * 0x6db6db6db6db6db7;
  iVar1 = (int)uVar2;
  *(int *)((longlong)param_1 + 0x40) = iVar1;
  if (*(int *)((longlong)param_1 + 0x44) == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  }
  else {
    FUN_14737bb34(param_1,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      _Dst = *(void **)((longlong)param_1 + 0x38);
      if (*(void **)((longlong)param_1 + 0x38) == (void *)0x0) {
        _Dst = param_1;
      }
      memcpy(_Dst,_Src,(longlong)iVar1 * 0x38);
    }
  }
  return param_1;
}



// FUNCTION 1473730ec FUN_1473730ec body=261 status=ok
// SIG undefined FUN_1473730ec(void)

void FUN_1473730ec(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_1 = &PTR_FUN_14a34bfc0;
  param_1[0xf] = &PTR_LAB_14a34bfd8;
  FUN_143165bba();
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x250;
  do {
    FUN_14737b0df(*(undefined8 *)((longlong)param_1 + lVar5),
                  *(undefined4 *)((longlong)param_1 + lVar5 + 8));
    if (*(longlong *)((longlong)param_1 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x1d0);
  lVar5 = 0x1d8;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar5);
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
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0x158);
  lVar5 = 0x150;
  do {
    if (*(longlong *)((longlong)param_1 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0xd0);
  lVar5 = 200;
  do {
    lVar4 = *(longlong *)((longlong)param_1 + lVar5);
    if (lVar4 != 0) {
      (**(code **)(*(longlong *)(lVar4 + 0x30) + 0x10))(lVar4 + 0x30);
    }
    lVar5 = lVar5 + -8;
  } while (lVar5 != 0x88);
  *param_1 = &PTR_LAB_14a34c350;
  FUN_14005bca4(param_1 + 5);
  *param_1 = &PTR_FUN_14a37f858;
  return;
}



// FUNCTION 1473731f2 FUN_1473731f2 body=1273 status=ok
// SIG undefined FUN_1473731f2(void)

void FUN_1473731f2(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int *piVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong *plVar16;
  undefined1 auStack_e8 [44];
  uint local_bc;
  int *local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  int *local_a0;
  int *local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  ulonglong uStack_78;
  ulonglong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = (ulonglong)param_2;
  lVar14 = local_b0 * 0x10;
  lVar2 = param_1 + lVar14;
  plVar12 = (longlong *)(lVar2 + 0x160);
  *plVar12 = 0;
  plVar10 = *(longlong **)(lVar2 + 0x168);
  local_bc = param_2;
  if (plVar10 != (longlong *)0x0) {
    *(undefined8 *)(lVar2 + 0x168) = 0;
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar15 = (int *)((longlong)plVar10 + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  lVar14 = param_1 + lVar14;
  plVar10 = (longlong *)(lVar14 + 0x1e0);
  FUN_14737b0df(*plVar10);
  *(undefined4 *)(lVar14 + 0x1e8) = 0;
  if (*(int *)(lVar14 + 0x1ec) != 0) {
    FUN_14737bb04(plVar10);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  if ((lVar3 == 0) || (*(int *)(param_1 + 0x34) != 0)) goto LAB_1473732ac;
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    iVar6 = 0;
  }
  else {
    lVar9 = 0;
    uVar5 = 0;
    do {
      uVar13 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x1c + lVar9) +
               *(int *)(*(longlong *)(param_1 + 0x40) + 0x18 + lVar9);
      if (uVar13 <= uVar5) {
        uVar13 = uVar5;
      }
      uVar5 = uVar13;
      lVar9 = lVar9 + 0x28;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x28 != lVar9);
    iVar6 = uVar5 * 3;
  }
  local_88 = &DAT_100000027;
  local_80 = 0x1688;
  uStack_78 = (ulonglong)*(uint *)(param_1 + 0x30) + *(longlong *)(lVar3 + 0xd8) >> 2;
  uVar5 = iVar6 * *(int *)(lVar3 + 0x24) + 3U >> 2;
  local_70 = (ulonglong)(uVar5 + (uVar5 == 0));
  uStack_68 = 1;
  if (local_bc == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x160);
  }
  local_b8 = (int *)(lVar3 + 0x30);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 2000 + local_b0 * 8);
  plVar7 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a34c510;
  FUN_147380f54(plVar7 + 2,uVar4,uVar11);
  if (plVar7 == (longlong *)0x0) {
    *plVar12 = 0x10;
    plVar16 = *(longlong **)(lVar2 + 0x168);
    if (plVar16 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x168) = 0;
LAB_147373613:
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar15 = (int *)((longlong)plVar16 + 0xc);
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_147373637;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *plVar12 = (longlong)(plVar7 + 2);
    plVar16 = *(longlong **)(lVar2 + 0x168);
    if (plVar7 == plVar16) {
      LOCK();
      plVar16 = plVar7 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar15 = (int *)((longlong)plVar7 + 0xc);
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (*piVar15 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    else {
      *(longlong **)(lVar2 + 0x168) = plVar7;
      if (plVar16 != (longlong *)0x0) goto LAB_147373613;
    }
LAB_147373637:
    LOCK();
    plVar16 = plVar7 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar15 = (int *)((longlong)plVar7 + 0xc);
      *piVar15 = *piVar15 + -1;
      UNLOCK();
      if (*piVar15 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_a0 = local_b8;
  local_98 = (int *)(lVar3 + 0x78);
  local_90 = *(undefined8 *)(lVar3 + 0x88);
  FUN_14737f2a6(*plVar12,&local_a0,&local_88,0);
LAB_1473732ac:
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    local_a8 = (longlong *)(param_1 + 0x1e0);
    local_b8 = (int *)(*(longlong *)(param_1 + 0x40) + (longlong)*(int *)(param_1 + 0x48) * 0x28);
    piVar15 = (int *)(*(longlong *)(param_1 + 0x40) + 0x1c);
    do {
      lVar2 = *(longlong *)(piVar15 + -7);
      local_88 = &DAT_100000027;
      local_80 = 0x1688;
      uStack_78 = (ulonglong)(uint)piVar15[-4] + *(longlong *)(lVar2 + 0xd8) >> 2;
      if (*(int *)(param_1 + 0x34) == 1) {
        uVar5 = piVar15[-3] * *piVar15 + 3U >> 2;
      }
      else {
        uVar5 = piVar15[-3] * piVar15[-2] + 3U >> 2;
        uVar5 = uVar5 + (uVar5 == 0);
      }
      local_70 = (ulonglong)uVar5;
      uStack_68 = 1;
      if ((local_bc == 0) || (*(int *)(param_1 + 0x1e8) <= *(int *)(lVar14 + 0x1e8))) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(*local_a8 + (longlong)*(int *)(lVar14 + 0x1e8) * 0x10);
      }
      uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 2000 + local_b0 * 8);
      plVar7 = (longlong *)FUN_14001cc68(0xa8,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14a34c510;
      plVar12 = plVar7 + 2;
      FUN_147380f54(plVar12,uVar4,uVar11);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar16 = plVar7 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar8 = (int *)((longlong)plVar7 + 0xc);
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      local_a0 = (int *)(lVar2 + 0x30);
      if (lVar2 == 0) {
        local_a0 = (int *)0x0;
      }
      local_98 = local_a0 + 0x12;
      if (local_a0 == (int *)0x0) {
        local_90 = 0;
        local_98 = (int *)0x0;
      }
      else {
        local_90 = *(undefined8 *)(local_a0 + 0x16);
      }
      FUN_14737f2a6(plVar12,&local_a0,&local_88,0);
      iVar6 = *(int *)(lVar14 + 0x1e8);
      *(uint *)(lVar14 + 0x1e8) = iVar6 + 1U;
      if (*(uint *)(lVar14 + 0x1ec) < iVar6 + 1U) {
        FUN_14737bbf2(plVar10,iVar6);
      }
      lVar2 = *plVar10;
      *(longlong **)(lVar2 + (longlong)iVar6 * 0x10) = plVar12;
      *(longlong **)(lVar2 + 8 + (longlong)iVar6 * 0x10) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar12 = plVar7 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar8 = (int *)((longlong)plVar7 + 0xc);
          *piVar8 = *piVar8 + -1;
          UNLOCK();
          if (*piVar8 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      piVar8 = piVar15 + 3;
      piVar15 = piVar15 + 10;
    } while (piVar8 != local_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737375a FUN_14737375a body=237 status=ok
// SIG undefined FUN_14737375a(void)

void FUN_14737375a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_2 + 0x2e0);
    if (uVar1 == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf8 + (ulonglong)uVar5 * 8) + 0x88);
    if ((*(byte *)(lVar3 + 0xdf) & 1) != 0) {
      FUN_144706208(param_2,lVar3,0x7fffffff,0x40,0);
    }
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar6);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x2e0);
        if (uVar1 == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0xf8 + (ulonglong)uVar5 * 8);
      }
      if ((*(byte *)(*(longlong *)(lVar4 + 0x88) + 0xdf) & 1) != 0) {
        FUN_144706208(param_2,*(longlong *)(lVar4 + 0x88),0x7fffffff,0x40,0);
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar6);
  }
  return;
}



// FUNCTION 147373848 FUN_147373848 body=315 status=ok
// SIG undefined FUN_147373848(void)

void FUN_147373848(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = *(uint *)(param_2 + 0x5c);
    if (uVar1 == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    uVar3 = *(undefined8 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0xf8 + (ulonglong)uVar5 * 8) + 0x88);
    lVar6 = param_2[0x33];
    if (lVar6 == 0) {
      (**(code **)(*param_2 + 8))(param_2);
      lVar6 = param_2[0x33];
    }
    FUN_1447093fc(lVar6,uVar3);
  }
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar6 + lVar7);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        uVar1 = *(uint *)(param_2 + 0x5c);
        if (uVar1 == 0) {
          uVar5 = 0x20;
        }
        else {
          uVar5 = 0;
          if (uVar1 != 0) {
            for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
            }
          }
        }
        lVar4 = *(longlong *)(lVar4 + 0xf8 + (ulonglong)uVar5 * 8);
      }
      uVar3 = *(undefined8 *)(lVar4 + 0x88);
      lVar4 = param_2[0x33];
      if (lVar4 == 0) {
        (**(code **)(*param_2 + 8))(param_2);
        lVar4 = param_2[0x33];
      }
      FUN_1447093fc(lVar4,uVar3);
      lVar7 = lVar7 + 0x28;
    } while ((longlong)iVar2 * 0x28 != lVar7);
  }
  uVar1 = *(uint *)(param_2 + 0x5c);
  if (uVar1 == 0) {
    uVar5 = 0x20;
  }
  else {
    uVar5 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x90 + (ulonglong)uVar5 * 8) + 0x88);
  lVar6 = param_2[0x33];
  if (lVar6 == 0) {
    (**(code **)(*param_2 + 8))(param_2);
    lVar6 = param_2[0x33];
  }
  FUN_1447093fc(lVar6,uVar3);
  return;
}



// FUNCTION 147373984 FUN_147373984 body=41 status=ok
// SIG undefined FUN_147373984(void)

void FUN_147373984(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14737bb92();
  return;
}



// FUNCTION 1473739ae FUN_1473739ae body=773 status=ok
// SIG undefined FUN_1473739ae(void)

void FUN_1473739ae(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 *param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  ulonglong local_a0;
  uint local_98;
  int local_94;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = *(uint *)(param_2 + 0x2e0);
  if (uVar3 == 0) {
    uVar12 = 0x20;
  }
  else {
    uVar12 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
      }
    }
  }
  lVar24 = *(longlong *)(param_1 + 0x28);
  if (lVar24 == 0) {
    local_a4 = 0x39;
    lVar24 = 0;
  }
  else {
    local_a4 = 0x39;
    if (*(int *)(lVar24 + 0x24) == 4) {
      local_a4 = 0x2a;
    }
    lVar24 = *(longlong *)(lVar24 + 0xf8 + (ulonglong)uVar12 * 8);
  }
  local_a0 = (ulonglong)uVar12;
  local_94 = param_3;
  local_90 = param_2;
  local_88 = param_4;
  local_98 = FUN_143162371();
  iVar11 = local_94;
  if (0 < *(int *)(param_1 + 0x48)) {
    local_80 = (longlong *)((ulonglong)(uint)((int)local_a0 << 4) + param_1 + 0xe0);
    iVar4 = *(int *)(param_1 + 0x34);
    lVar20 = 4;
    lVar21 = 0x22;
    lVar22 = 0;
    lVar19 = 0;
    do {
      lVar13 = *(longlong *)(param_1 + 0x2b0);
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        lVar13 = param_1 + 0x278;
      }
      lVar5 = *param_6;
      *(undefined8 *)(lVar5 + 0x30 + lVar22) = *(undefined8 *)(lVar13 + 0x30 + lVar22);
      uVar7 = *(undefined8 *)(lVar13 + lVar22);
      uVar18 = ((undefined8 *)(lVar13 + lVar22))[1];
      puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar22);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      puVar1 = (undefined8 *)(lVar13 + 0x20 + lVar22);
      uVar10 = puVar1[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar22);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar22);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      *(undefined8 *)(lVar5 + lVar22) = uVar7;
      ((undefined8 *)(lVar5 + lVar22))[1] = uVar18;
      lVar13 = *(longlong *)(param_1 + 0x40);
      lVar16 = *(longlong *)(lVar13 + -0x22 + lVar21);
      if (lVar16 == 0) {
        lVar16 = 0;
      }
      else {
        uVar3 = *(uint *)(local_90 + 0x2e0);
        if (uVar3 == 0) {
          uVar12 = 0x20;
        }
        else {
          uVar12 = 0;
          if (uVar3 != 0) {
            for (; (uVar3 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
            }
          }
        }
        lVar16 = *(longlong *)(lVar16 + 0xf8 + (ulonglong)uVar12 * 8);
      }
      if (iVar4 == 1) {
        uVar15 = (ulonglong)*(uint *)(lVar13 + -6 + lVar21);
        lVar17 = 0x18;
        lVar23 = 0x10;
        lVar14 = 8;
LAB_147373b04:
        *(ulonglong *)(lVar22 + lVar14 + lVar5) = uVar15;
      }
      else {
        lVar14 = *local_80;
        if (*(char *)(lVar13 + lVar21) == '\0') {
          *(undefined4 *)(lVar5 + 0x18 + lVar22) = 0;
        }
        if (lVar24 != 0) {
          *(undefined4 *)(lVar5 + 0x10 + lVar22) = local_a4;
          uVar15 = (ulonglong)*(uint *)(lVar14 + lVar20) + *(longlong *)(lVar24 + 0xd0);
          lVar17 = 0x30;
          lVar23 = 0x28;
          lVar14 = 0x20;
          goto LAB_147373b04;
        }
        lVar17 = 0x30;
        lVar23 = 0x28;
      }
      *(ulonglong *)(lVar22 + lVar23 + lVar5) =
           (ulonglong)*(uint *)(lVar13 + -0x16 + lVar21) + *(longlong *)(lVar16 + 0xd0);
      *(ulonglong *)(lVar22 + lVar17 + lVar5) = (ulonglong)*(uint *)(lVar13 + -0x12 + lVar21);
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0x20;
      lVar21 = lVar21 + 0x28;
      lVar22 = lVar22 + 0x38;
    } while (lVar19 < *(int *)(param_1 + 0x48));
  }
  uStack_5c = local_98 | 0x20;
  if (local_94 != 1) {
    uStack_5c = local_98;
  }
  local_60 = 1;
  uStack_54 = 0;
  uStack_58 = (undefined4)param_6[1];
  local_50 = *param_6;
  local_68 = 0;
  local_78 = 0;
  uStack_70 = 0;
  plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(local_90 + 0x2e8) + 0x10) + 0x30);
  (**(code **)(*plVar6 + 0x1f8))(plVar6,&local_60);
  uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x90 + local_a0 * 8) + 0xd0);
  uVar18 = 0;
  if (iVar11 == 1) {
    uVar18 = uVar7;
  }
  *param_5 = uVar7;
  *(undefined4 *)(param_5 + 1) = local_60;
  *(uint *)((longlong)param_5 + 0xc) = uStack_5c;
  *(undefined4 *)(param_5 + 2) = uStack_58;
  *(undefined4 *)((longlong)param_5 + 0x14) = uStack_54;
  param_5[3] = local_50;
  param_5[4] = uVar18;
  param_5[5] = local_88;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147373cb4 FUN_147373cb4 body=77 status=ok
// SIG undefined FUN_147373cb4(void)

longlong FUN_147373cb4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x608);
  *(uint *)(param_1 + 0x608) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x60c) < iVar1 + 1U) {
    FUN_14737bf74(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar2 = param_1;
  }
  return (longlong)iVar1 * 0x30 + lVar2;
}



// FUNCTION 147373d02 FUN_147373d02 body=174 status=ok
// SIG undefined FUN_147373d02(void)

ulonglong FUN_147373d02(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x1c0;
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1c8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar4 * 0x18);
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



// FUNCTION 147373db0 FUN_147373db0 body=350 status=ok
// SIG undefined FUN_147373db0(void)

longlong FUN_147373db0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar2 = (char *)(param_1 + 0x1d9);
  LOCK();
  bVar6 = *(char *)(param_1 + 0x1d9) == '\0';
  if (bVar6) {
    *(char *)(param_1 + 0x1d9) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_1447d2058(pcVar2);
  }
  local_50 = param_2;
  lVar5 = FUN_147373d02(param_1,param_2);
  if (lVar5 == 0) {
    local_64 = 0;
    local_5c = *(undefined4 *)(param_1 + 0xd4);
    local_60 = *(undefined4 *)(param_1 + 0xd8);
    local_54 = *(undefined4 *)(param_1 + 0xdc);
    local_58 = *(undefined4 *)(param_1 + 0xe0);
    local_68 = *(byte *)(param_2 + 0xd0) ^ 1;
    local_6c = 2;
    lVar5 = FUN_14001cc68(0x78,0x10);
    FUN_143165766(lVar5,*(undefined8 *)(param_1 + 0x28),&local_6c);
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    local_48 = &local_50;
    local_40 = &local_78;
    local_78 = lVar5;
    FUN_14737bffe(param_1 + 0x188,local_34);
    if (local_78 != 0) {
      LOCK();
      puVar1 = (uint *)(local_78 + 8);
      uVar4 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar4 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  LOCK();
  cVar3 = *pcVar2;
  if (cVar3 == '\x01') {
    *pcVar2 = '\0';
  }
  UNLOCK();
  if (cVar3 != '\x01') {
    FUN_14008cdb0(pcVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147373f10 FUN_147373f10 body=104 status=ok
// SIG undefined FUN_147373f10(void)

void FUN_147373f10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)(int)param_2[1] != 0) {
    lVar3 = *param_2;
    lVar2 = (longlong)(int)param_2[1] * 0x30;
    do {
      lVar1 = param_1[0x33];
      if (lVar1 == 0) {
        (**(code **)(*param_1 + 8))(param_1);
        lVar1 = param_1[0x33];
      }
      *(int *)(lVar1 + 0x1c0) = *(int *)(lVar1 + 0x1c0) + 1;
      (**(code **)(**(longlong **)(lVar1 + 0x48) + 0x240))(*(longlong **)(lVar1 + 0x48),lVar3,0,0);
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147373f78 FUN_147373f78 body=107 status=ok
// SIG undefined FUN_147373f78(void)

void FUN_147373f78(longlong *param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    iVar4 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    do {
      lVar3 = param_1[1];
      if ((longlong)(int)lVar3 != 0) {
        lVar1 = *param_1;
        lVar5 = 0;
        do {
          FUN_147372c08(*(undefined8 *)(lVar1 + lVar5),iVar4);
          lVar5 = lVar5 + 0x20;
        } while ((longlong)(int)lVar3 * 0x20 != lVar5);
      }
      bVar2 = (byte)iVar4 & 0x1f;
      param_2 = param_2 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      if (param_2 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0;
        if (param_2 != 0) {
          for (; (param_2 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
      }
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147373fe4 FUN_147373fe4 body=378 status=ok
// SIG undefined FUN_147373fe4(void)

void FUN_147373fe4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  if (param_2[3] == 0) {
    uVar10 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x118);
    if (uVar2 == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    uVar10 = *(undefined8 *)(param_2[3] + 0xf8 + (ulonglong)uVar8 * 8);
  }
  if (param_2[5] == 0) {
    uVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x118);
    if (uVar2 == 0) {
      uVar8 = 0x20;
    }
    else {
      uVar8 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    }
    uVar7 = *(undefined8 *)(param_2[5] + 0xf8 + (ulonglong)uVar8 * 8);
  }
  iVar9 = (int)param_2[8];
  if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  lVar4 = *param_2;
  plVar1 = (longlong *)(lVar4 + 0xf8);
  if (*(int *)(lVar4 + 0x104) < iVar9) {
    FUN_14737c530(plVar1);
    iVar9 = (int)param_2[8];
  }
  if (iVar9 != 0) {
    lVar5 = param_2[7];
    lVar11 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + lVar11);
      if (lVar6 != 0) {
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
      }
      iVar3 = *(int *)(lVar4 + 0x100);
      *(uint *)(lVar4 + 0x100) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0x104) < iVar3 + 1U) {
        FUN_14737c590(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar9 * 8 != lVar11);
  }
  FUN_14316607f(param_1 + -0x1c8,lVar4,uVar10,(int)param_2[4],uVar7,(int)param_2[6],
                *(undefined4 *)((longlong)param_2 + 0x34),(int)param_2[0xb]);
  return;
}



// FUNCTION 147374160 FUN_147374160 body=14 status=ok
// SIG undefined FUN_147374160(void)

void FUN_147374160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143165fee(param_2,param_3,param_4);
  return;
}



// FUNCTION 14737416e FUN_14737416e body=360 status=ok
// SIG undefined FUN_14737416e(void)

void FUN_14737416e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)(param_2 + 0x188);
  lVar3 = param_2 + 0x198;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar3;
  if (*(int *)(param_2 + 0x1b0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_2 + 0x1b0);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar2;
  if ((iStack_4c != iVar7) || (uStack_58 != lVar3)) {
    do {
      lVar5 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      lVar6 = *(longlong *)
               (lVar5 + 0x38 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8) * 8);
      if (*(char *)(lVar6 + 0x48) == '\x01') {
        FUN_1431671e0(lVar6,param_1 + -0x1c8);
      }
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar5);
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar2 || (CONCAT44(uStack_74,uStack_78) != lVar3 || iStack_6c != iVar7));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473742d8 FUN_1473742d8 body=376 status=ok
// SIG undefined FUN_1473742d8(void)

void FUN_1473742d8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
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
  plVar2 = (longlong *)(param_2 + 0x188);
  lVar3 = param_2 + 0x198;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar3;
  if (*(int *)(param_2 + 0x1b0) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar7 = *(int *)(param_2 + 0x1b0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar2;
  if ((iStack_54 != iVar7) || (uStack_60 != lVar3)) {
    do {
      lVar5 = *(longlong *)(*local_90 + 8 + (longlong)iStack_74 * 0x18);
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
        UNLOCK();
      }
      uVar8 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8);
      lVar6 = *(longlong *)(lVar5 + 0x38 + uVar8 * 8);
      if (lVar6 != 0) {
        FUN_14737719e(lVar6);
        FUN_1400020a8(lVar6);
      }
      *(undefined8 *)(lVar5 + 0x38 + uVar8 * 8) = 0;
      if (lVar5 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar5 + 8);
        uVar4 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar4 & 0x3fffffff) == 1) {
          FUN_144a54812(lVar5);
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar2 || (CONCAT44(uStack_7c,uStack_80) != lVar3 || iStack_74 != iVar7));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147374452 FUN_147374452 body=39 status=ok
// SIG undefined FUN_147374452(void)

void FUN_147374452(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)
           (param_2 + 0x38 + (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8) * 8);
  if (*(char *)(lVar1 + 0x48) == '\x01') {
    FUN_1431671e0(lVar1,param_1 + -0x1c8);
    return;
  }
  return;
}



// FUNCTION 14737447a FUN_14737447a body=65 status=ok
// SIG undefined FUN_14737447a(void)

void FUN_14737447a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x120) + 8);
  lVar1 = *(longlong *)(param_2 + 0x38 + uVar2 * 8);
  if (lVar1 != 0) {
    FUN_14737719e(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_2 + 0x38 + uVar2 * 8) = 0;
  return;
}



// FUNCTION 1473744bc FUN_1473744bc body=343 status=ok
// SIG undefined FUN_1473744bc(void)

undefined8 * FUN_1473744bc(int *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  longlong local_b8 [14];
  undefined1 local_48;
  undefined2 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_48 = 0;
  local_47 = 0xff;
  local_b8[4] = 0;
  local_b8[5] = 0;
  local_b8[6] = 0;
  local_b8[7] = 0;
  local_b8[8] = 0;
  local_b8[9] = 0;
  local_b8[0] = param_3;
  puVar11 = (undefined4 *)FUN_140a6e1ae(param_3 + 0x1438,0x40,0x100,local_b8);
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  uVar10 = param_4[7];
  *puVar11 = *param_4;
  puVar11[1] = uVar4;
  puVar11[2] = uVar5;
  puVar11[3] = uVar6;
  puVar11[4] = uVar7;
  puVar11[5] = uVar8;
  puVar11[6] = uVar9;
  puVar11[7] = uVar10;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x14) + 0xd0);
  param_2[0xc] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  *param_2 = local_b8[0xb];
  param_2[1] = 0x40;
  param_2[2] = (ulonglong)(uint)param_1[3] + lVar3;
  uVar1 = param_1[8];
  uVar12 = (ulonglong)uVar1;
  param_2[4] = uVar12;
  param_2[3] = (ulonglong)(param_1[2] * uVar1);
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    param_2[8] = (ulonglong)(uint)param_1[5] + lVar3;
    param_2[10] = uVar12;
    param_2[9] = (ulonglong)(iVar2 * uVar1);
  }
  if (param_1[6] == 0) {
    uVar13 = (ulonglong)(*param_1 * uVar1);
  }
  else {
    uVar13 = 0x40;
    uVar12 = 0;
  }
  param_2[5] = lVar3 + (ulonglong)(uint)param_1[4];
  param_2[7] = uVar12;
  param_2[6] = uVar13;
  FUN_144902b9c(local_b8);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147374614 FUN_147374614 body=57 status=ok
// SIG undefined FUN_147374614(void)

undefined8 * FUN_147374614(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a349540;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147374656 FUN_147374656 body=38 status=ok
// SIG undefined FUN_147374656(void)

undefined8 FUN_147374656(undefined8 param_1,int param_2)

{
  FUN_1456f5710();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14737467c FUN_14737467c body=68 status=ok
// SIG undefined FUN_14737467c(void)

undefined8 * FUN_14737467c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14a3496e0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473746c0 FUN_1473746c0 body=38 status=ok
// SIG undefined FUN_1473746c0(void)

undefined8 FUN_1473746c0(undefined8 param_1,int param_2)

{
  FUN_1412ab296();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473746e6 FUN_1473746e6 body=60 status=ok
// SIG undefined FUN_1473746e6(void)

undefined8 * FUN_1473746e6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a34a740;
  FUN_147371438(param_1 + 0xf);
  FUN_147365ce2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147374736 FUN_147374736 body=38 status=ok
// SIG undefined FUN_147374736(void)

undefined8 FUN_147374736(undefined8 param_1,int param_2)

{
  FUN_1473716f6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14737477a FUN_14737477a body=38 status=ok
// SIG undefined FUN_14737477a(void)

undefined8 FUN_14737477a(undefined8 param_1,int param_2)

{
  FUN_14316c9ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473747a0 FUN_1473747a0 body=38 status=ok
// SIG undefined FUN_1473747a0(void)

undefined8 FUN_1473747a0(undefined8 param_1,int param_2)

{
  FUN_1473730ec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473747da FUN_1473747da body=38 status=ok
// SIG undefined FUN_1473747da(void)

undefined8 FUN_1473747da(undefined8 param_1,int param_2)

{
  FUN_143165f02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147374810 FUN_147374810 body=68 status=ok
// SIG undefined FUN_147374810(void)

undefined8 * FUN_147374810(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a34c120;
  FUN_1456f5818(param_1 + 8,0);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147374854 FUN_147374854 body=166 status=ok
// SIG undefined FUN_147374854(void)

undefined8 * FUN_147374854(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 8) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = &PTR_FUN_14a343270;
  FUN_140056680(puVar2 + 9,param_2);
  puVar2[0xb] = param_3;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = uVar1;
  *puVar2 = &PTR_FUN_14a34a740;
  puVar2[0xf] = uVar1;
  puVar2[0x10] = 0;
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  return puVar2;
}



// FUNCTION 1473748fa FUN_1473748fa body=158 status=ok
// SIG undefined FUN_1473748fa(void)

undefined8 FUN_1473748fa(longlong param_1)

{
  ulonglong uVar1;
  BOOL BVar2;
  
LAB_147374924:
  do {
    if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) {
      uVar1 = *(ulonglong *)(param_1 + 0x58);
      *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x58) + 1;
      if (*(longlong *)(param_1 + 0x10) + (uVar1 % *(ulonglong *)(param_1 + 8)) * 0x18 != 0) {
        FUN_144ad520a(param_1);
        BVar2 = SetEvent(*(HANDLE *)(param_1 + 0xc0));
        if (BVar2 == 0) {
          GetLastError();
        }
        goto LAB_147374924;
      }
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x18),0xffffffff);
    BVar2 = ResetEvent(*(HANDLE *)(param_1 + 0x18));
    if (BVar2 == 0) {
      GetLastError();
    }
    if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 147374998 FUN_147374998 body=174 status=ok
// SIG undefined FUN_147374998(void)

longlong * FUN_147374998(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  plVar5 = (longlong *)(param_1 + 0xa0);
  plVar7 = *(longlong **)(param_1 + 0xa0);
  while (plVar7 != plVar5) {
    plVar4 = plVar7 + -2;
    if ((int)plVar7[-1] != 0) {
      puVar8 = (ulonglong *)(plVar7 + 3);
      uVar6 = 0;
      do {
        uVar1 = *puVar8;
        uVar3 = (**(code **)(**(longlong **)puVar8[-1] + 0x40))();
        if (uVar3 < uVar1) goto LAB_147374a2a;
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 2;
      } while (uVar6 < *(uint *)(plVar7 + -1));
      plVar7 = (longlong *)*plVar5;
    }
    lVar2 = *plVar7;
    *(longlong *)plVar7[1] = lVar2;
    *(longlong *)(lVar2 + 8) = plVar7[1];
    if (plVar4 != (longlong *)0x0) {
      FUN_1400020a8(plVar4);
    }
    plVar7 = (longlong *)*plVar5;
  }
  plVar4 = (longlong *)0x0;
LAB_147374a2a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return plVar4;
}



// FUNCTION 147374a46 FUN_147374a46 body=195 status=ok
// SIG undefined FUN_147374a46(void)

void FUN_147374a46(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 != (longlong *)(param_1 + 0xa0)) {
    uVar2 = plVar1[-2];
    while (uVar2 <= param_2) {
      plVar4 = plVar1 + -2;
      if (param_2 <= uVar2) {
        FUN_147374b9e(plVar4,*(undefined8 *)(param_1 + 0xb8));
        plVar1 = *(longlong **)(param_1 + 0xa0);
        lVar3 = *plVar1;
        *(longlong *)plVar1[1] = lVar3;
        *(longlong *)(lVar3 + 8) = plVar1[1];
        if (plVar4 != (longlong *)0x0) {
          FUN_1400020a8(plVar4);
        }
        break;
      }
      lVar3 = *plVar1;
      *(longlong *)plVar1[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar1[1];
      if (plVar4 != (longlong *)0x0) {
        FUN_1400020a8(plVar4);
      }
      plVar1 = *(longlong **)(param_1 + 0xa0);
      uVar2 = plVar1[-2];
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147374a8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147374b0a FUN_147374b0a body=148 status=ok
// SIG undefined FUN_147374b0a(void)

void FUN_147374b0a(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  uint *param_5,ulonglong param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  *param_5 = 0;
  plVar4 = (longlong *)*param_1;
  if (plVar4 != param_1) {
    do {
      if (param_6 < (ulonglong)plVar4[-0x82]) {
        return;
      }
      if (param_2 < param_3) {
        return;
      }
      lVar2 = plVar4[-0x84];
      uVar1 = *param_5;
      *param_5 = uVar1 + 1;
      *(longlong *)(param_4 + (ulonglong)uVar1 * 8) = lVar2;
      *(undefined4 *)(plVar4 + -0x85) = 1;
      lVar2 = *plVar4;
      *(longlong *)plVar4[1] = lVar2;
      *(longlong *)(lVar2 + 8) = plVar4[1];
      *plVar4 = (longlong)(param_1 + 2);
      puVar3 = (undefined8 *)param_1[3];
      plVar4[1] = (longlong)puVar3;
      *puVar3 = plVar4;
      param_1[3] = (longlong)plVar4;
      *(int *)(param_1 + 4) = (int)param_1[4] + -1;
      param_1[5] = param_1[5] - plVar4[-0x83];
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
      param_2 = param_2 - plVar4[-0x83];
      plVar4 = (longlong *)*param_1;
    } while (plVar4 != param_1);
  }
  return;
}



// FUNCTION 147374b9e FUN_147374b9e body=119 status=ok
// SIG undefined FUN_147374b9e(void)

void FUN_147374b9e(longlong param_1,HANDLE param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar3 = (ulonglong *)(param_1 + 0x28);
    uVar4 = 0;
    do {
      uVar1 = *puVar3;
      uVar2 = (**(code **)(**(longlong **)puVar3[-1] + 0x40))();
      if (uVar2 < uVar1) {
        (**(code **)(**(longlong **)puVar3[-1] + 0x48))(*(longlong **)puVar3[-1],*puVar3,param_2);
        WaitForSingleObject(param_2,0xffffffff);
      }
      uVar4 = uVar4 + 1;
      puVar3 = puVar3 + 2;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return;
}



// FUNCTION 147374c1e FUN_147374c1e body=95 status=ok
// SIG undefined FUN_147374c1e(void)

void FUN_147374c1e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147374c7e FUN_147374c7e body=95 status=ok
// SIG undefined FUN_147374c7e(void)

void FUN_147374c7e(longlong param_1,uint param_2)

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



// FUNCTION 147374cde FUN_147374cde body=141 status=ok
// SIG undefined FUN_147374cde(void)

longlong FUN_147374cde(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_147374d6c();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x30;
    if (lVar3 + lVar2 != 0) goto LAB_147374d1b;
  }
  local_30 = param_3;
  FUN_147374dec(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x30;
LAB_147374d1b:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147374d6c FUN_147374d6c body=128 status=ok
// SIG undefined FUN_147374d6c(void)

int FUN_147374d6c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar3 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x30;
        if ((((*(longlong *)(lVar3 + lVar5) == *param_3) &&
             (lVar1 = lVar3 + lVar5, *(int *)(lVar1 + 8) == (int)param_3[1])) &&
            (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_3 + 0xc))) &&
           ((*(longlong *)(lVar1 + 0x10) == param_3[2] &&
            (*(longlong *)(lVar1 + 0x18) == param_3[3])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x28 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 147374dec FUN_147374dec body=286 status=ok
// SIG undefined FUN_147374dec(void)

undefined4 * FUN_147374dec(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147374f0c(param_1,local_48);
  puVar1 = (undefined4 *)*param_4;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[5];
  uVar7 = puVar1[6];
  uVar8 = puVar1[7];
  local_40[4] = puVar1[4];
  local_40[5] = uVar6;
  local_40[6] = uVar7;
  local_40[7] = uVar8;
  *local_40 = uVar2;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 8) = 0;
  local_40[10] = 0xffffffff;
  cVar9 = FUN_147374ffa(param_1,param_3,local_40,local_48);
  if (cVar9 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar12 = 1;
    if (3 < uVar10) {
      uVar11 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0xb] = param_3;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      local_40[10] = *(undefined4 *)
                      (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) *
                                4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar12;
      FUN_1473750de(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147374f0c FUN_147374f0c body=238 status=ok
// SIG undefined FUN_147374f0c(void)

int * FUN_147374f0c(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147374ffa FUN_147374ffa body=106 status=ok
// SIG undefined FUN_147374ffa(void)

undefined8 FUN_147374ffa(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar11;
  longlong lVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_147374d6c(), iVar11 != -1)) {
    lVar2 = *param_1;
    lVar12 = (longlong)iVar11 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(lVar2 + 0x20 + lVar12) = *(undefined8 *)(param_3 + 8);
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar12);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar12);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_147375064(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 147375064 FUN_147375064 body=122 status=ok
// SIG undefined FUN_147375064(void)

void FUN_147375064(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1473750de FUN_1473750de body=423 status=ok
// SIG undefined FUN_1473750de(void)

void FUN_1473750de(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 147375286 FUN_147375286 body=31 status=ok
// SIG undefined FUN_147375286(void)

void FUN_147375286(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x44) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1473752a6 FUN_1473752a6 body=79 status=ok
// SIG undefined FUN_1473752a6(void)

void FUN_1473752a6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1431686c4(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1431686c4(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001473752dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1473752f6 FUN_1473752f6 body=55 status=ok
// SIG undefined FUN_1473752f6(void)

void FUN_1473752f6(longlong param_1)

{
  FUN_14737593c(param_1 + 0x98);
  FUN_14737593c(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14737532e FUN_14737532e body=382 status=ok
// SIG undefined FUN_14737532e(void)

void FUN_14737532e(longlong param_1,undefined8 param_2,uint param_3,longlong param_4,
                  longlong param_5,int param_6)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = param_1 + 0x58;
  FUN_1473754ac(lVar4,param_6);
  lVar1 = param_1 + 0x98;
  FUN_1473754ac(lVar1,param_6);
  FUN_14737553a(param_1,param_6);
  if (param_6 != 0) {
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar3 = lVar4;
      }
      lVar5 = (longlong)(int)lVar6;
      lVar7 = lVar5 * 0x10;
      FUN_14020fad6(lVar3 + lVar7,*(undefined8 *)(param_4 + lVar6 * 8));
      lVar3 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar3 = lVar1;
      }
      FUN_14020fad6(lVar3 + lVar7,*(undefined8 *)(param_5 + lVar6 * 8));
      lVar3 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar3 = lVar4;
      }
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 8 + lVar7) != 0) {
        puVar2 = *(undefined2 **)(lVar3 + lVar7);
      }
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar3 = param_1;
      }
      *(undefined2 **)(lVar3 + 8 + lVar5 * 0x18) = puVar2;
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar3 = param_1;
      }
      *(undefined4 *)(lVar3 + 0x10 + lVar5 * 0x18) = 0;
      lVar3 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar3 = lVar1;
      }
      puVar2 = &DAT_149dfb77a;
      if (*(int *)(lVar3 + 8 + lVar7) != 0) {
        puVar2 = *(undefined2 **)(lVar3 + lVar7);
      }
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) == 0) {
        lVar3 = param_1;
      }
      *(undefined2 **)(lVar3 + lVar5 * 0x18) = puVar2;
      lVar6 = lVar6 + 1;
    } while (param_6 != (int)lVar6);
  }
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  *(ulonglong *)(param_1 + 0xe0) = (ulonglong)param_3;
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar4 = param_1;
  }
  *(longlong *)(param_1 + 0xf0) = lVar4;
  return;
}



// FUNCTION 1473754ac FUN_1473754ac body=141 status=ok
// SIG undefined FUN_1473754ac(void)

void FUN_1473754ac(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x38) = param_2;
    if ((uint)(*(int *)(param_1 + 0x3c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147375582(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147375676(param_1,param_2,iVar1 - param_2);
    FUN_1473756da(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14737553a FUN_14737553a body=71 status=ok
// SIG undefined FUN_14737553a(void)

void FUN_14737553a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x50) = param_2;
    if ((uint)(*(int *)(param_1 + 0x54) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14737577a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 0x50) = param_2;
      FUN_147375886();
      return;
    }
  }
  return;
}



// FUNCTION 147375582 FUN_147375582 body=110 status=ok
// SIG undefined FUN_147375582(void)

void FUN_147375582(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x3c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x3c) = iVar5;
    FUN_1473755f2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473755f2 FUN_1473755f2 body=132 status=ok
// SIG undefined FUN_1473755f2(void)

void FUN_1473755f2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,0x10);
  return;
}



// FUNCTION 147375676 FUN_147375676 body=100 status=ok
// SIG undefined FUN_147375676(void)

void FUN_147375676(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x10 + lVar2);
  FUN_1447a1747(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  *(int *)(param_1 + 0x38) = iVar1 - param_3;
  return;
}



// FUNCTION 1473756da FUN_1473756da body=52 status=ok
// SIG undefined FUN_1473756da(void)

void FUN_1473756da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14737570e(*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  if (iVar1 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = iVar1;
  FUN_1473755f2(param_1,*(undefined4 *)(param_1 + 0x38),iVar1);
  return;
}



// FUNCTION 14737570e FUN_14737570e body=108 status=ok
// SIG undefined FUN_14737570e(void)

ulonglong FUN_14737570e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 3;
  if (3 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0xffffffffffffc00U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14737577a FUN_14737577a body=127 status=ok
// SIG undefined FUN_14737577a(void)

void FUN_14737577a(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x50);
  if (param_2 <= (int)uVar1) {
    iVar5 = 3;
    if (3 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (3 < *(uint *)(param_1 + 0x54)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x54) = iVar5;
    FUN_1473757fa(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1473757fa FUN_1473757fa body=140 status=ok
// SIG undefined FUN_1473757fa(void)

void FUN_1473757fa(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x48);
  if ((uint)param_3 < 4) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x48,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x48),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x48,param_2,param_3,0x18);
  return;
}



// FUNCTION 147375886 FUN_147375886 body=52 status=ok
// SIG undefined FUN_147375886(void)

void FUN_147375886(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473758ba(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  if (iVar1 == *(int *)(param_1 + 0x54)) {
    return;
  }
  *(int *)(param_1 + 0x54) = iVar1;
  FUN_1473757fa(param_1,*(undefined4 *)(param_1 + 0x50),iVar1);
  return;
}



// FUNCTION 1473758ba FUN_1473758ba body=129 status=ok
// SIG undefined FUN_1473758ba(void)

ulonglong FUN_1473758ba(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 3;
  if (3 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 14737593c FUN_14737593c body=53 status=ok
// SIG undefined FUN_14737593c(void)

void FUN_14737593c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = param_1;
  }
  FUN_1447a1747(lVar1,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147375972 FUN_147375972 body=71 status=ok
// SIG undefined FUN_147375972(void)

void FUN_147375972(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147375a02();
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
      FUN_147375a88();
      return;
    }
  }
  return;
}



// FUNCTION 1473759ba FUN_1473759ba body=71 status=ok
// SIG undefined FUN_1473759ba(void)

void FUN_1473759ba(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147375b24();
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
      FUN_147375bb8();
      return;
    }
  }
  return;
}



// FUNCTION 147375a02 FUN_147375a02 body=132 status=ok
// SIG undefined FUN_147375a02(void)

void FUN_147375a02(longlong param_1,int param_2)

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



// FUNCTION 147375a88 FUN_147375a88 body=62 status=ok
// SIG undefined FUN_147375a88(void)

void FUN_147375a88(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147375ac6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147375ac6 FUN_147375ac6 body=93 status=ok
// SIG undefined FUN_147375ac6(void)

ulonglong FUN_147375ac6(uint param_1,uint param_2)

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



// FUNCTION 147375b24 FUN_147375b24 body=147 status=ok
// SIG undefined FUN_147375b24(void)

void FUN_147375b24(longlong param_1,int param_2)

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



// FUNCTION 147375bb8 FUN_147375bb8 body=62 status=ok
// SIG undefined FUN_147375bb8(void)

void FUN_147375bb8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147375bf6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147375bf6 FUN_147375bf6 body=112 status=ok
// SIG undefined FUN_147375bf6(void)

ulonglong FUN_147375bf6(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147375c30;
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
LAB_147375c30:
  return param_2 & 0xffffffff;
}



// FUNCTION 147375c66 FUN_147375c66 body=71 status=ok
// SIG undefined FUN_147375c66(void)

void FUN_147375c66(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147375d40();
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
      FUN_147375e5a();
      return;
    }
  }
  return;
}



// FUNCTION 147375cae FUN_147375cae body=145 status=ok
// SIG undefined FUN_147375cae(void)

void FUN_147375cae(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar1 = 0x50;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e05];
  }
  else {
    uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x50,8);
  }
  uVar2 = 0x7fffffff;
  if (9 < (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147375d40 FUN_147375d40 body=147 status=ok
// SIG undefined FUN_147375d40(void)

void FUN_147375d40(longlong param_1,int param_2)

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



// FUNCTION 147375dd4 FUN_147375dd4 body=132 status=ok
// SIG undefined FUN_147375dd4(void)

void FUN_147375dd4(longlong param_1,int param_2)

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



// FUNCTION 147375e5a FUN_147375e5a body=62 status=ok
// SIG undefined FUN_147375e5a(void)

void FUN_147375e5a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147375e98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x18,8);
  }
  return;
}



// FUNCTION 147375e98 FUN_147375e98 body=112 status=ok
// SIG undefined FUN_147375e98(void)

ulonglong FUN_147375e98(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x18) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147375ed2;
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
LAB_147375ed2:
  return param_2 & 0xffffffff;
}



// FUNCTION 147375f08 FUN_147375f08 body=109 status=ok
// SIG undefined FUN_147375f08(void)

void FUN_147375f08(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  FUN_1447a1747(param_1 + 0x40,*(undefined4 *)(param_1 + 0x80));
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    puVar2 = (uint *)(*(longlong *)(param_1 + 8) + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 147375f76 FUN_147375f76 body=326 status=ok
// SIG undefined FUN_147375f76(void)

void FUN_147375f76(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar4 * 0x30) * 4) =
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



// FUNCTION 1473760be FUN_1473760be body=38 status=ok
// SIG undefined FUN_1473760be(void)

undefined8 FUN_1473760be(undefined8 param_1,int param_2)

{
  FUN_143168ea4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473760e8 FUN_1473760e8 body=39 status=ok
// SIG undefined FUN_1473760e8(void)

undefined8 * FUN_1473760e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a37f858;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147376110 FUN_147376110 body=676 status=ok
// SIG undefined FUN_147376110(void)

int * FUN_147376110(int *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  piVar1 = param_1 + 0xc;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined ***)(param_1 + 10) = &PTR_FUN_14a34c310;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  lVar4 = 0x160;
  do {
    *(undefined4 *)((longlong)param_1 + lVar4 + -0xe0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0xb8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0xb0) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0x88) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0x48) = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -8) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0xd8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0xcb);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0xa8);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x9b);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x80);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0x70) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x68);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x5b);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x40);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)((longlong)param_1 + lVar4 + -0x30) = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x1b);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + -0x28);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar4 + 0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar4) = 0;
    ((undefined8 *)((longlong)param_1 + lVar4))[1] = 0;
    lVar4 = lVar4 + 0x100;
  } while (lVar4 != 0x660);
  LOCK();
  UNLOCK();
  lVar4 = DAT_14ca76b50 + 1;
  *(longlong *)(param_1 + 0x160) = DAT_14ca76b50;
  DAT_14ca76b50 = lVar4;
  *(undefined1 *)(param_1 + 0x162) = 0;
  iVar9 = 1;
  if (*(int *)(param_2 + 4) == 0) {
    iVar9 = *(int *)(param_2 + 0xc) * *(int *)(param_2 + 0x10);
  }
  param_1[6] = *(int *)(param_2 + 4);
  iVar6 = *(int *)(param_2 + 8);
  param_1[7] = iVar6 + 0x20;
  iVar3 = (iVar6 + 0x1fU & 0xffffffe0) + 0x20;
  param_1[8] = iVar3;
  iVar6 = *(int *)(param_2 + 0x14);
  if ((*(int *)(param_2 + 0x18) + iVar9 + iVar6) * *(int *)(param_2 + 8) != 0) {
    if (DAT_14ca76a20 != 0) {
      DAT_14c760b90 = DAT_14c760b90 * 2;
      DAT_14ca76a20 = 0;
    }
    iVar6 = 1000000;
    if (DAT_14c760b90 < 1000000) {
      iVar6 = DAT_14c760b90;
    }
    uVar5 = FUN_14001cc68(0x100,0x10);
    FUN_1473763b4(uVar5,param_3,5);
    *(undefined8 *)(param_1 + 0x16) = uVar5;
    FUN_1473711de(uVar5,0,iVar6,0x800,2);
    iVar6 = *(int *)(param_2 + 0x14);
    iVar3 = param_1[8];
  }
  param_1[2] = iVar6;
  *param_1 = iVar9;
  param_1[1] = *(int *)(param_2 + 0x18);
  param_1[4] = 0;
  uVar10 = iVar9 * iVar3 - 1;
  param_1[5] = (uVar10 & 0xffffffc0) + 0x40;
  uVar10 = (uVar10 | 0x3f) + *(int *)(param_2 + 0x18) * iVar3 & 0xffffffc0;
  param_1[3] = uVar10 + 0x40;
  FUN_147376468(piVar1,(iVar3 * *(int *)(param_2 + 0x14) + uVar10 + 0x3f & 0xffffffc0) + 0x40);
  uVar10 = param_1[4];
  uVar7 = *(ulonglong *)(param_1 + 0xc);
  uVar8 = ((longlong)uVar7 >> 0x18) + (longlong)piVar1;
  if ((uVar7 & 1) == 0) {
    uVar8 = uVar7;
  }
  puVar2 = (undefined8 *)(uVar8 + 0x10 + (ulonglong)uVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(uVar8 + uVar10);
  *puVar2 = 0;
  puVar2[1] = 0;
  if (param_1[2] != 0) {
    uVar10 = 0;
    do {
      uVar7 = *(ulonglong *)(param_1 + 0xc);
      uVar8 = ((longlong)uVar7 >> 0x18) + (longlong)piVar1;
      if ((uVar7 & 1) == 0) {
        uVar8 = uVar7;
      }
      uVar7 = (ulonglong)(param_1[8] * uVar10 + param_1[3]);
      puVar2 = (undefined8 *)(uVar8 + 0x10 + uVar7);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar8 + uVar7);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[2]);
  }
  if (param_1[1] != 0) {
    uVar10 = 0;
    do {
      uVar7 = *(ulonglong *)(param_1 + 0xc);
      uVar8 = ((longlong)uVar7 >> 0x18) + (longlong)piVar1;
      if ((uVar7 & 1) == 0) {
        uVar8 = uVar7;
      }
      uVar7 = (ulonglong)(param_1[8] * uVar10 + param_1[5]);
      puVar2 = (undefined8 *)(uVar8 + 0x10 + uVar7);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(uVar8 + uVar7);
      *puVar2 = 0;
      puVar2[1] = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_1[1]);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 1473763b4 FUN_1473763b4 body=179 status=ok
// SIG undefined FUN_1473763b4(void)

undefined8 * FUN_1473763b4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0x400000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = param_2;
  *(undefined4 *)(param_1 + 0x10) = 4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0x400000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_147376d6e(param_1 + 0x1e,param_3,1);
  return param_1;
}



// FUNCTION 147376468 FUN_147376468 body=59 status=ok
// SIG undefined FUN_147376468(void)

void FUN_147376468(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147377056(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147377126();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1473764a8 FUN_1473764a8 body=56 status=ok
// SIG undefined FUN_1473764a8(void)

longlong FUN_1473764a8(longlong param_1,int param_2)

{
  if (*(ulonglong *)(param_1 + 8) != 0 && (*(ulonglong *)(param_1 + 8) & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473764f8 FUN_1473764f8 body=48 status=ok
// SIG undefined FUN_1473764f8(void)

int FUN_1473764f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 < 0) {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,1);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 14737654e FUN_14737654e body=21 status=ok
// SIG undefined FUN_14737654e(void)

undefined * FUN_14737654e(void)

{
  FUN_14737659c();
  return &DAT_14ca76b80;
}



// FUNCTION 14737656c FUN_14737656c body=48 status=ok
// SIG undefined FUN_14737656c(void)

void FUN_14737656c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 14737659c FUN_14737659c body=205 status=ok
// SIG undefined FUN_14737659c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14737659c(void)

{
  if ((DAT_14ca76be7 & 2) != 0) {
    return;
  }
  DAT_14ca76be7 = DAT_14ca76be7 | 2;
  _DAT_14ca76b88 = L"TResourceArray";
  _DAT_14ca76ba0 = FUN_146826540;
  _DAT_14ca76ba8 = FUN_146825d77;
  _DAT_14ca76bb0 = FUN_146825fd6;
  _DAT_14ca76bb8 = FUN_1407e02ea;
  _DAT_14ca76bc0 = FUN_146826273;
  _DAT_14ca76b98 = FUN_14737666a;
  _DAT_14ca76bd8 = 0xffffffff00000020;
  _DAT_14ca76be0 = 8;
  DAT_14ca76be4 = 1;
  _DAT_14ca76bc8 = FUN_147376696;
  FUN_1473766ac();
  FUN_1473767ba();
  FUN_1407e00cc(&DAT_14ca76b80);
  return;
}



// FUNCTION 14737666a FUN_14737666a body=43 status=ok
// SIG undefined FUN_14737666a(void)

void FUN_14737666a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

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



// FUNCTION 147376696 FUN_147376696 body=21 status=ok
// SIG undefined FUN_147376696(void)

undefined * FUN_147376696(void)

{
  FUN_147376993();
  return &DAT_14ca76be8;
}



// FUNCTION 1473766ac FUN_1473766ac body=270 status=ok
// SIG undefined FUN_1473766ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473766ac(void)

{
  _DAT_14ca76c10 = L"bNeedsCPUAccess";
  DAT_14ca76c3a = FUN_140850cc5();
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
  _DAT_14ca76c18 = &DAT_14c9cfcf0;
  _DAT_14ca76c28 = &LAB_14682652b;
  _DAT_14ca76c30 = &DAT_100000018;
  _DAT_14ca76c38 = 0;
  _DAT_14ca76c20 = DAT_14ca76b90;
  DAT_14ca76b90 = &DAT_14ca76c10;
  return;
}



// FUNCTION 1473767ba FUN_1473767ba body=473 status=ok
// SIG undefined FUN_1473767ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1473767ba(void)

{
  _DAT_14ca76c40 = L"BASE";
  DAT_14ca76c6a = 4;
  if ((DAT_14ca76cd7 & 2) == 0) {
    DAT_14ca76cd7 = DAT_14ca76cd7 | 3;
    _DAT_14ca76c78 = L"(TArray<T, AllocatorType>)";
    _DAT_14ca76c90 = &LAB_147376a0e;
    _DAT_14ca76c98 = FUN_147376a1c;
    _DAT_14ca76ca0 = &LAB_147376a3c;
    _DAT_14ca76ca8 = &LAB_147376a4a;
    _DAT_14ca76cb0 = &LAB_147376a58;
    _DAT_14ca76c88 = FUN_147376a64;
    _DAT_14ca76cc8 = 0x1000000010;
    _DAT_14ca76cd0 = 8;
    DAT_14ca76cd4 = '\0';
  }
  else if (DAT_14ca76cd4 != '\0') {
    DAT_14ca76be6 = DAT_14ca76be6 + '\x01';
  }
  _DAT_14ca76c50 = DAT_14ca76b90;
  _DAT_14ca76c60 = &DAT_100000008;
  _DAT_14ca76c58 = &LAB_14682652b;
  _DAT_14ca76c48 = &DAT_14ca76c70;
  DAT_14ca76be5 = DAT_14ca76be5 + '\x01';
  DAT_14ca76b90 = &DAT_14ca76c40;
  _DAT_14ca76cd8 = L"BASE";
  DAT_14ca76d02 = 4;
  _DAT_14ca76ce0 = FUN_146268212();
  _DAT_14ca76ce8 = DAT_14ca76b90;
  _DAT_14ca76cf0 = &LAB_14682652b;
  DAT_14ca76b90 = &DAT_14ca76cd8;
  DAT_14ca76be5 = DAT_14ca76be5 + '\x01';
  _DAT_14ca76cf8 = 0x100000000;
  if (*(char *)(_DAT_14ca76ce0 + 100) != '\0') {
    DAT_14ca76be6 = DAT_14ca76be6 + '\x01';
  }
  return;
}



// FUNCTION 147376993 FUN_147376993 body=122 status=ok
// SIG undefined FUN_147376993(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147376993(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca76c08) {
    FUN_144b3d300(&DAT_14ca76c08);
    if (DAT_14ca76c08 == -1) {
      DAT_14ca76bf0 = 0;
      uRam000000014ca76bf8 = 0;
      _DAT_14ca76be8 = &PTR_FUN_14a34c310;
      DAT_14ca76c00 = 0;
      atexit((_func_5014 *)&LAB_143168e88);
      _Init_thread_footer(&DAT_14ca76c08);
      return;
    }
  }
  return;
}



// FUNCTION 147376a1c FUN_147376a1c body=31 status=ok
// SIG undefined FUN_147376a1c(void)

undefined8
FUN_147376a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147376bac(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147376a64 FUN_147376a64 body=51 status=ok
// SIG undefined FUN_147376a64(void)

void FUN_147376a64(ulonglong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if ((param_4 == '\0') && (*param_1 != 0 && (*param_1 & 1) == 0)) {
    FUN_1400020a8();
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147376a98 FUN_147376a98 body=234 status=ok
// SIG undefined FUN_147376a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147376a98(longlong param_1,undefined8 param_2)

{
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  FUN_1467ac78e(param_1,param_2,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),0x40);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147376bac FUN_147376bac body=245 status=ok
// SIG undefined FUN_147376bac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147376bac(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147376468(param_3,*(undefined4 *)(param_1 + 8));
  uVar1 = *param_3;
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  uVar2 = (longlong)param_3 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar2 = uVar1;
  }
  FUN_1467ac844(param_1,param_2,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),uVar2);
  return;
}



// FUNCTION 147376ca2 FUN_147376ca2 body=203 status=ok
// SIG undefined FUN_147376ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147376ca2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  FUN_1467ac8f2(param_1,&DAT_14ca76fe8,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                param_2,param_3);
  return;
}



// FUNCTION 147376d6e FUN_147376d6e body=182 status=ok
// SIG undefined FUN_147376d6e(void)

void FUN_147376d6e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_147376e26(param_1,iVar1);
    }
    puVar2 = (undefined4 *)((longlong)iVar1 * 0x80 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[10] = 0;
      puVar2[0xc] = 0;
      puVar2[0x16] = 0;
      *(undefined8 *)(puVar2 + 2) = 0;
      *(undefined8 *)(puVar2 + 4) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x15) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1d) = 0;
      *(undefined8 *)(puVar2 + 0xe) = 0;
      *(undefined8 *)(puVar2 + 0x10) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x45) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x4d) = 0;
      puVar2 = puVar2 + 0x20;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_147376eac(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_147376f0c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147376e26 FUN_147376e26 body=132 status=ok
// SIG undefined FUN_147376e26(void)

void FUN_147376e26(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,0x40);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147376eac FUN_147376eac body=95 status=ok
// SIG undefined FUN_147376eac(void)

void FUN_147376eac(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x80 + *param_1);
  FUN_147376f4b(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x80 + (longlong)_Dst),(longlong)iVar2 << 7);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147376f0c FUN_147376f0c body=63 status=ok
// SIG undefined FUN_147376f0c(void)

void FUN_147376f0c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147376ff4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,0x40);
  }
  return;
}



// FUNCTION 147376f4b FUN_147376f4b body=38 status=ok
// SIG undefined FUN_147376f4b(void)

void FUN_147376f4b(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147376f72(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 147376f72 FUN_147376f72 body=77 status=ok
// SIG undefined FUN_147376f72(void)

void FUN_147376f72(undefined8 *param_1)

{
  FUN_147376fc0(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  FUN_147376fc0(param_1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 147376fc0 FUN_147376fc0 body=52 status=ok
// SIG undefined FUN_147376fc0(void)

void FUN_147376fc0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 147376ff4 FUN_147376ff4 body=97 status=ok
// SIG undefined FUN_147376ff4(void)

ulonglong FUN_147376ff4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 7,0x40);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 147377056 FUN_147377056 body=82 status=ok
// SIG undefined FUN_147377056(void)

void FUN_147377056(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1473770a8(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(int)param_2);
  return;
}



// FUNCTION 1473770a8 FUN_1473770a8 body=124 status=ok
// SIG undefined FUN_1473770a8(void)

void FUN_1473770a8(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147377126 FUN_147377126 body=119 status=ok
// SIG undefined FUN_147377126(void)

void FUN_147377126(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (((uint)(iVar2 - iVar1) < 0x4000) && (iVar2 * 2 <= iVar1 * 3)) {
    return;
  }
  if (iVar1 == 0 || 0x40 < iVar2 - iVar1) {
    if (0 < iVar1) {
      iVar1 = FUN_144a3809e(iVar1,1);
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != iVar2) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 14737719e FUN_14737719e body=117 status=ok
// SIG undefined FUN_14737719e(void)

void FUN_14737719e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x58);
  if (lVar1 != 0) {
    FUN_147377214(lVar1);
    FUN_1400020a8(lVar1);
  }
  lVar1 = 0x480;
  do {
    FUN_14737725a(param_1 + lVar1);
    lVar1 = lVar1 + -0x100;
  } while (lVar1 != -0x80);
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x10))(lVar1 + 0x30);
  }
  if (*(ulonglong *)(param_1 + 0x30) == 0 || (*(ulonglong *)(param_1 + 0x30) & 1) != 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147377214 FUN_147377214 body=69 status=ok
// SIG undefined FUN_147377214(void)

void FUN_147377214(longlong param_1)

{
  FUN_147376f4b(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_147371042(param_1 + 0x78);
  FUN_147371042(param_1 + 8);
  return;
}



// FUNCTION 14737725a FUN_14737725a body=263 status=ok
// SIG undefined FUN_14737725a(void)

void FUN_14737725a(undefined8 *param_1)

{
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_147377362(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd) = 0;
  FUN_147377396(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1473773d0(param_1 + 0xe);
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d) = 0;
  FUN_147377404(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1473773d0(param_1 + 6);
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d) = 0;
  FUN_147377434(param_1);
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
  return;
}



// FUNCTION 147377362 FUN_147377362 body=52 status=ok
// SIG undefined FUN_147377362(void)

void FUN_147377362(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 147377396 FUN_147377396 body=58 status=ok
// SIG undefined FUN_147377396(void)

void FUN_147377396(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 1473773d0 FUN_1473773d0 body=52 status=ok
// SIG undefined FUN_1473773d0(void)

void FUN_1473773d0(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 147377404 FUN_147377404 body=48 status=ok
// SIG undefined FUN_147377404(void)

void FUN_147377404(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))();
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 147377434 FUN_147377434 body=52 status=ok
// SIG undefined FUN_147377434(void)

void FUN_147377434(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 147377468 FUN_147377468 body=139 status=ok
// SIG undefined FUN_147377468(void)

longlong * FUN_147377468(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  lVar2 = param_2[2];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(int *)(param_1 + 2) = (int)lVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  lVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1473774f6(param_1 + 3,iVar1,0);
    FUN_1472c19db(param_1[3],lVar2,iVar1);
  }
  *(int *)(param_1 + 9) = (int)param_2[9];
  lVar2 = param_2[5];
  lVar5 = param_2[6];
  lVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = lVar6;
  param_1[5] = lVar2;
  param_1[6] = lVar5;
  return param_1;
}



// FUNCTION 1473774f6 FUN_1473774f6 body=115 status=ok
// SIG undefined FUN_1473774f6(void)

void FUN_1473774f6(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14737756a FUN_14737756a body=93 status=ok
// SIG undefined FUN_14737756a(void)

undefined8 * FUN_14737756a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14005bcf4(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1473774f6(param_1,iVar1);
      FUN_1472c19db(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1473775c8 FUN_1473775c8 body=52 status=ok
// SIG undefined FUN_1473775c8(void)

void FUN_1473775c8(longlong *param_1)

{
  FUN_1473775fc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1473775fc FUN_1473775fc body=333 status=ok
// SIG undefined FUN_1473775fc(void)

void FUN_1473775fc(longlong *param_1)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
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
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
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
      lVar4 = *(longlong *)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (lVar4 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar4 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14737774a FUN_14737774a body=152 status=ok
// SIG undefined FUN_14737774a(void)

void FUN_14737774a(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar3);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + uVar4) < '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\0';
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) == param_2) {
        if (param_3 == (undefined1 *)0x0) {
          return;
        }
        *param_3 = 1;
        return;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      cVar2 = cVar2 + '\x01';
    } while (cVar2 <= *(char *)(lVar1 + uVar4));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  FUN_1473777e2(param_1,cVar2,param_1,uVar4,param_2,uVar3);
  return;
}



// FUNCTION 1473777e2 FUN_1473777e2 body=486 status=ok
// SIG undefined FUN_1473777e2(void)

void FUN_1473777e2(longlong param_1,char param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5,uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x20);
LAB_147377813:
  while ((*(char *)(param_1 + 0x24) == param_2 ||
         ((int)((float)(uVar5 + 1) * 0.9) <= *(int *)(param_1 + 0x28)))) {
    FUN_1473779c8(param_1);
    uVar5 = *(uint *)(param_1 + 0x20);
    param_4 = (ulonglong)(uVar5 & param_6);
    lVar3 = *(longlong *)(param_1 + 8);
    param_2 = '\0';
    param_3 = param_1;
    if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
      param_2 = '\0';
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8) == param_5) {
          return;
        }
        param_4 = (ulonglong)((int)param_4 + 1);
        param_2 = param_2 + '\x01';
      } while (param_2 <= *(char *)(lVar3 + param_4));
    }
  }
  uVar2 = param_4 & 0xffffffff;
  cVar4 = *(char *)(*(longlong *)(param_3 + 8) + uVar2);
  uVar7 = uVar2;
  if (-1 < cVar4) {
    *(char *)(*(longlong *)(param_3 + 8) + uVar2) = param_2;
    uVar6 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
    *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
    param_2 = cVar4 + '\x01';
    uVar7 = (ulonglong)((int)param_4 + 1);
    lVar3 = *(longlong *)(param_3 + 8);
    cVar4 = *(char *)(lVar3 + uVar7);
    param_5 = uVar6;
    if (-1 < cVar4) {
      pcVar8 = (char *)(lVar3 + uVar7);
      uVar5 = (int)param_4 + 2;
      do {
        uVar6 = (ulonglong)uVar5;
        if (cVar4 < param_2) {
          *pcVar8 = param_2;
          uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8);
          *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
          param_2 = cVar4 + '\x01';
          lVar3 = *(longlong *)(param_3 + 8);
          param_5 = uVar1;
        }
        else {
          param_2 = param_2 + '\x01';
          if (param_2 == *(char *)(param_1 + 0x24)) goto LAB_147377931;
        }
        pcVar8 = (char *)(lVar3 + uVar6);
        cVar4 = *(char *)(lVar3 + uVar6);
        uVar5 = uVar5 + 1;
        uVar7 = uVar6;
        if (cVar4 < '\0') break;
      } while( true );
    }
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
  *(char *)(*(longlong *)(param_3 + 8) + uVar7) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
LAB_147377931:
  uVar7 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
  FUN_1473779c8(param_1);
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  param_6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  param_6 = param_6 >> 0x10 ^ param_6;
  uVar5 = *(uint *)(param_1 + 0x20);
  param_4 = (ulonglong)(param_6 & uVar5);
  lVar3 = *(longlong *)(param_1 + 8);
  param_2 = '\0';
  param_5 = uVar7;
  param_3 = param_1;
  if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
    param_2 = '\0';
    do {
      if (uVar7 == *(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8)) {
        return;
      }
      param_4 = (ulonglong)((int)param_4 + 1);
      param_2 = param_2 + '\x01';
    } while (param_2 <= *(char *)(lVar3 + param_4));
  }
  goto LAB_147377813;
}



// FUNCTION 1473779c8 FUN_1473779c8 body=458 status=ok
// SIG undefined FUN_1473779c8(void)

void FUN_1473779c8(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  uVar13 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar3 & 0x1f);
  uVar6 = param_1[8];
  if ((uVar6 == 0) || (uVar6 + 1 != uVar10)) {
    uVar13 = (ulonglong)uVar10 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 4;
    if (4 < (uint)lVar3) {
      uVar12 = (uint)lVar3;
    }
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = param_1[4];
    uStack_54 = param_1[5];
    uStack_50 = param_1[6];
    uStack_4c = param_1[7];
    uVar5 = param_1[9];
    uVar13 = (ulonglong)(uVar12 + uVar10);
    _Dst = (void *)FUN_14001cc68(uVar13,0);
    uVar9 = 0;
    uVar7 = FUN_14001cc68(uVar13 * 8,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),0xff),uVar13);
    *param_1 = uVar12 + uVar10;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar7;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = uVar10 - 1;
    *(char *)(param_1 + 9) = (char)uVar12;
    param_1[10] = 0;
    uVar6 = uVar6 + (int)(char)uVar5;
    if (uVar6 != 0) {
      lVar3 = CONCAT44(uStack_5c,uStack_60);
      lVar4 = CONCAT44(uStack_54,local_58);
      uVar13 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar13)) {
          uVar1 = *(ulonglong *)(lVar4 + uVar13 * 8);
          uVar10 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          uVar11 = (ulonglong)(param_1[8] & uVar10);
          lVar2 = *(longlong *)(param_1 + 2);
          if ((lVar2 == 0) || (*(char *)(lVar2 + uVar11) < '\0')) {
            cVar8 = '\0';
          }
          else {
            cVar8 = '\0';
            do {
              if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 4) + uVar11 * 8))
              goto LAB_147377b78;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              cVar8 = cVar8 + '\x01';
            } while (cVar8 <= *(char *)(lVar2 + uVar11));
          }
          local_78 = uVar1;
          local_70 = uVar10;
          FUN_1473777e2(param_1,cVar8,param_1);
        }
LAB_147377b78:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
    FUN_147377b94(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147377b94 FUN_147377b94 body=52 status=ok
// SIG undefined FUN_147377b94(void)

void FUN_147377b94(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 147377bc8 FUN_147377bc8 body=132 status=ok
// SIG undefined FUN_147377bc8(void)

void FUN_147377bc8(longlong param_1,int param_2)

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



// FUNCTION 147377c4e FUN_147377c4e body=277 status=ok
// SIG undefined FUN_147377c4e(void)

void FUN_147377c4e(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [38];
  char local_32;
  char local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = '\0';
  lVar1 = param_1 + (ulonglong)param_3 * 0x100;
  FUN_147377ea8(param_1 + (ulonglong)param_3 * 0x100 + 0xb0,param_2,&local_31);
  if (local_31 == '\0') {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    iVar2 = *(int *)(lVar1 + 0xe8);
    *(uint *)(lVar1 + 0xe8) = iVar2 + 1U;
    if (*(uint *)(lVar1 + 0xec) < iVar2 + 1U) {
      FUN_1473782f2((longlong *)(lVar1 + 0xe0),iVar2);
    }
    *(longlong **)(*(longlong *)(lVar1 + 0xe0) + (longlong)iVar2 * 8) = param_2;
  }
  if (param_3 == 0) {
    lVar3 = param_2[0xb];
    local_32 = '\0';
    FUN_147377ea8(lVar1 + 0xf0,lVar3,&local_32);
    if (local_32 == '\0') {
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      iVar2 = *(int *)(lVar1 + 0x128);
      *(uint *)(lVar1 + 0x128) = iVar2 + 1U;
      if (*(uint *)(lVar1 + 300) < iVar2 + 1U) {
        FUN_147378378((longlong *)(lVar1 + 0x120),iVar2);
      }
      *(longlong *)(*(longlong *)(lVar1 + 0x120) + (longlong)iVar2 * 8) = lVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147377d64 FUN_147377d64 body=160 status=ok
// SIG undefined FUN_147377d64(void)

void FUN_147377d64(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = '\0';
  FUN_1473783fe(param_1 + (ulonglong)param_3 * 0x100 + 0x130,param_2,&local_29);
  if (local_29 == '\0') {
    param_1 = param_1 + (ulonglong)param_3 * 0x100;
    iVar1 = *(int *)(param_1 + 0x168);
    *(uint *)(param_1 + 0x168) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x16c) < iVar1 + 1U) {
      FUN_14736f572((longlong *)(param_1 + 0x160),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar1 * 8) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147377e06 FUN_147377e06 body=160 status=ok
// SIG undefined FUN_147377e06(void)

void FUN_147377e06(longlong param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = '\0';
  FUN_1473783fe(param_1 + (ulonglong)param_3 * 0x100 + 0x130,param_2,&local_29);
  if (local_29 == '\0') {
    param_1 = param_1 + (ulonglong)param_3 * 0x100;
    iVar1 = *(int *)(param_1 + 0x178);
    *(uint *)(param_1 + 0x178) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x17c) < iVar1 + 1U) {
      FUN_14736f5f8((longlong *)(param_1 + 0x170),iVar1);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x170) + (longlong)iVar1 * 8) = param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147377ea8 FUN_147377ea8 body=152 status=ok
// SIG undefined FUN_147377ea8(void)

void FUN_147377ea8(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar3);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + uVar4) < '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\0';
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) == param_2) {
        if (param_3 == (undefined1 *)0x0) {
          return;
        }
        *param_3 = 1;
        return;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      cVar2 = cVar2 + '\x01';
    } while (cVar2 <= *(char *)(lVar1 + uVar4));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  FUN_147377f40(param_1,cVar2,param_1,uVar4,param_2,uVar3);
  return;
}



// FUNCTION 147377f40 FUN_147377f40 body=486 status=ok
// SIG undefined FUN_147377f40(void)

void FUN_147377f40(longlong param_1,char param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5,uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x20);
LAB_147377f71:
  while ((*(char *)(param_1 + 0x24) == param_2 ||
         ((int)((float)(uVar5 + 1) * 0.9) <= *(int *)(param_1 + 0x28)))) {
    FUN_147378126(param_1);
    uVar5 = *(uint *)(param_1 + 0x20);
    param_4 = (ulonglong)(uVar5 & param_6);
    lVar3 = *(longlong *)(param_1 + 8);
    param_2 = '\0';
    param_3 = param_1;
    if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
      param_2 = '\0';
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8) == param_5) {
          return;
        }
        param_4 = (ulonglong)((int)param_4 + 1);
        param_2 = param_2 + '\x01';
      } while (param_2 <= *(char *)(lVar3 + param_4));
    }
  }
  uVar2 = param_4 & 0xffffffff;
  cVar4 = *(char *)(*(longlong *)(param_3 + 8) + uVar2);
  uVar7 = uVar2;
  if (-1 < cVar4) {
    *(char *)(*(longlong *)(param_3 + 8) + uVar2) = param_2;
    uVar6 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
    *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
    param_2 = cVar4 + '\x01';
    uVar7 = (ulonglong)((int)param_4 + 1);
    lVar3 = *(longlong *)(param_3 + 8);
    cVar4 = *(char *)(lVar3 + uVar7);
    param_5 = uVar6;
    if (-1 < cVar4) {
      pcVar8 = (char *)(lVar3 + uVar7);
      uVar5 = (int)param_4 + 2;
      do {
        uVar6 = (ulonglong)uVar5;
        if (cVar4 < param_2) {
          *pcVar8 = param_2;
          uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8);
          *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
          param_2 = cVar4 + '\x01';
          lVar3 = *(longlong *)(param_3 + 8);
          param_5 = uVar1;
        }
        else {
          param_2 = param_2 + '\x01';
          if (param_2 == *(char *)(param_1 + 0x24)) goto LAB_14737808f;
        }
        pcVar8 = (char *)(lVar3 + uVar6);
        cVar4 = *(char *)(lVar3 + uVar6);
        uVar5 = uVar5 + 1;
        uVar7 = uVar6;
        if (cVar4 < '\0') break;
      } while( true );
    }
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
  *(char *)(*(longlong *)(param_3 + 8) + uVar7) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
LAB_14737808f:
  uVar7 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
  FUN_147378126(param_1);
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  param_6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  param_6 = param_6 >> 0x10 ^ param_6;
  uVar5 = *(uint *)(param_1 + 0x20);
  param_4 = (ulonglong)(param_6 & uVar5);
  lVar3 = *(longlong *)(param_1 + 8);
  param_2 = '\0';
  param_5 = uVar7;
  param_3 = param_1;
  if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
    param_2 = '\0';
    do {
      if (uVar7 == *(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8)) {
        return;
      }
      param_4 = (ulonglong)((int)param_4 + 1);
      param_2 = param_2 + '\x01';
    } while (param_2 <= *(char *)(lVar3 + param_4));
  }
  goto LAB_147377f71;
}



// FUNCTION 147378126 FUN_147378126 body=458 status=ok
// SIG undefined FUN_147378126(void)

void FUN_147378126(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  uint local_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar6 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  uVar13 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar3 & 0x1f);
  uVar6 = param_1[8];
  if ((uVar6 == 0) || (uVar6 + 1 != uVar10)) {
    uVar13 = (ulonglong)uVar10 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 4;
    if (4 < (uint)lVar3) {
      uVar12 = (uint)lVar3;
    }
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = param_1[4];
    uStack_54 = param_1[5];
    uStack_50 = param_1[6];
    uStack_4c = param_1[7];
    uVar5 = param_1[9];
    uVar13 = (ulonglong)(uVar12 + uVar10);
    _Dst = (void *)FUN_14001cc68(uVar13,0);
    uVar9 = 0;
    uVar7 = FUN_14001cc68(uVar13 * 8,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),0xff),uVar13);
    *param_1 = uVar12 + uVar10;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar7;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = uVar10 - 1;
    *(char *)(param_1 + 9) = (char)uVar12;
    param_1[10] = 0;
    uVar6 = uVar6 + (int)(char)uVar5;
    if (uVar6 != 0) {
      lVar3 = CONCAT44(uStack_5c,uStack_60);
      lVar4 = CONCAT44(uStack_54,local_58);
      uVar13 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar13)) {
          uVar1 = *(ulonglong *)(lVar4 + uVar13 * 8);
          uVar10 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          uVar11 = (ulonglong)(param_1[8] & uVar10);
          lVar2 = *(longlong *)(param_1 + 2);
          if ((lVar2 == 0) || (*(char *)(lVar2 + uVar11) < '\0')) {
            cVar8 = '\0';
          }
          else {
            cVar8 = '\0';
            do {
              if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 4) + uVar11 * 8))
              goto LAB_1473782d6;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              cVar8 = cVar8 + '\x01';
            } while (cVar8 <= *(char *)(lVar2 + uVar11));
          }
          local_78 = uVar1;
          local_70 = uVar10;
          FUN_147377f40(param_1,cVar8,param_1);
        }
LAB_1473782d6:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
    FUN_1473773d0(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1473782f2 FUN_1473782f2 body=132 status=ok
// SIG undefined FUN_1473782f2(void)

void FUN_1473782f2(longlong param_1,int param_2)

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



// FUNCTION 147378378 FUN_147378378 body=132 status=ok
// SIG undefined FUN_147378378(void)

void FUN_147378378(longlong param_1,int param_2)

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



// FUNCTION 1473783fe FUN_1473783fe body=152 status=ok
// SIG undefined FUN_1473783fe(void)

void FUN_1473783fe(longlong param_1,ulonglong param_2,undefined1 *param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = (ulonglong)(*(uint *)(param_1 + 0x20) & uVar3);
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + uVar4) < '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\0';
    do {
      if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8) == param_2) {
        if (param_3 == (undefined1 *)0x0) {
          return;
        }
        *param_3 = 1;
        return;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1);
      cVar2 = cVar2 + '\x01';
    } while (cVar2 <= *(char *)(lVar1 + uVar4));
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  FUN_147378496(param_1,cVar2,param_1,uVar4,param_2,uVar3);
  return;
}



// FUNCTION 147378496 FUN_147378496 body=488 status=ok
// SIG undefined FUN_147378496(void)

undefined8
FUN_147378496(longlong param_1,char param_2,longlong param_3,ulonglong param_4,ulonglong param_5,
             uint param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar6;
  
  uVar5 = *(uint *)(param_1 + 0x20);
LAB_1473784c7:
  while ((*(char *)(param_1 + 0x24) == param_2 ||
         ((int)((float)(uVar5 + 1) * 0.9) <= *(int *)(param_1 + 0x28)))) {
    FUN_14737867e(param_1);
    uVar5 = *(uint *)(param_1 + 0x20);
    param_4 = (ulonglong)(uVar5 & param_6);
    lVar3 = *(longlong *)(param_1 + 8);
    param_2 = '\0';
    param_3 = param_1;
    if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
      param_2 = '\0';
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8) == param_5) {
          return 0;
        }
        param_4 = (ulonglong)((int)param_4 + 1);
        param_2 = param_2 + '\x01';
      } while (param_2 <= *(char *)(lVar3 + param_4));
    }
  }
  uVar2 = param_4 & 0xffffffff;
  cVar4 = *(char *)(*(longlong *)(param_3 + 8) + uVar2);
  uVar7 = uVar2;
  if (-1 < cVar4) {
    *(char *)(*(longlong *)(param_3 + 8) + uVar2) = param_2;
    uVar6 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
    *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
    param_2 = cVar4 + '\x01';
    uVar7 = (ulonglong)((int)param_4 + 1);
    lVar3 = *(longlong *)(param_3 + 8);
    cVar4 = *(char *)(lVar3 + uVar7);
    param_5 = uVar6;
    if (-1 < cVar4) {
      pcVar8 = (char *)(lVar3 + uVar7);
      uVar5 = (int)param_4 + 2;
      do {
        uVar6 = (ulonglong)uVar5;
        if (cVar4 < param_2) {
          *pcVar8 = param_2;
          uVar1 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8);
          *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
          param_2 = cVar4 + '\x01';
          lVar3 = *(longlong *)(param_3 + 8);
          param_5 = uVar1;
        }
        else {
          param_2 = param_2 + '\x01';
          if (param_2 == *(char *)(param_1 + 0x24)) goto LAB_1473785e7;
        }
        pcVar8 = (char *)(lVar3 + uVar6);
        cVar4 = *(char *)(lVar3 + uVar6);
        uVar5 = uVar5 + 1;
        uVar7 = uVar6;
        if (cVar4 < '\0') break;
      } while( true );
    }
  }
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar7 * 8) = param_5;
  *(char *)(*(longlong *)(param_3 + 8) + uVar7) = param_2;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return 0;
LAB_1473785e7:
  uVar7 = *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8);
  *(ulonglong *)(*(longlong *)(param_3 + 0x10) + uVar2 * 8) = param_5;
  FUN_14737867e(param_1);
  uVar5 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  param_6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  param_6 = param_6 >> 0x10 ^ param_6;
  uVar5 = *(uint *)(param_1 + 0x20);
  param_4 = (ulonglong)(param_6 & uVar5);
  lVar3 = *(longlong *)(param_1 + 8);
  param_2 = '\0';
  param_5 = uVar7;
  param_3 = param_1;
  if ((lVar3 != 0) && (param_2 = '\0', -1 < *(char *)(lVar3 + param_4))) {
    param_2 = '\0';
    do {
      if (uVar7 == *(ulonglong *)(*(longlong *)(param_1 + 0x10) + param_4 * 8)) {
        return 0;
      }
      param_4 = (ulonglong)((int)param_4 + 1);
      param_2 = param_2 + '\x01';
    } while (param_2 <= *(char *)(lVar3 + param_4));
  }
  goto LAB_1473784c7;
}



// FUNCTION 14737867e FUN_14737867e body=508 status=ok
// SIG undefined FUN_14737867e(void)

void FUN_14737867e(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  void *_Dst;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  uint local_80;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = -((int)ROUND(-0.5 - ((float)(int)param_1[10] / 0.9 + (float)(int)param_1[10] / 0.9)) >> 1)
  ;
  if (uVar6 <= param_2) {
    uVar6 = param_2;
  }
  if (uVar6 == 0) {
    FUN_147377362(param_1);
    param_1[10] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined8 *)((longlong)param_1 + 0x1d) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  uVar13 = (ulonglong)(uVar6 - 1) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar13 != 0) {
    for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  uVar10 = 1 << ((byte)lVar3 & 0x1f);
  uVar6 = param_1[8];
  if ((uVar6 == 0) || (uVar6 + 1 != uVar10)) {
    uVar13 = (ulonglong)uVar10 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar12 = 4;
    if (4 < (uint)lVar3) {
      uVar12 = (uint)lVar3;
    }
    local_68 = *param_1;
    uStack_64 = param_1[1];
    uStack_60 = param_1[2];
    uStack_5c = param_1[3];
    local_58 = param_1[4];
    uStack_54 = param_1[5];
    uStack_50 = param_1[6];
    uStack_4c = param_1[7];
    uVar5 = param_1[9];
    uVar13 = (ulonglong)(uVar12 + uVar10);
    _Dst = (void *)FUN_14001cc68(uVar13,0);
    uVar9 = 0;
    uVar7 = FUN_14001cc68(uVar13 * 8,0);
    memset(_Dst,(int)CONCAT71((int7)((ulonglong)uVar9 >> 8),0xff),uVar13);
    *param_1 = uVar12 + uVar10;
    *(void **)(param_1 + 2) = _Dst;
    *(undefined8 *)(param_1 + 4) = uVar7;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = uVar10 - 1;
    *(char *)(param_1 + 9) = (char)uVar12;
    param_1[10] = 0;
    uVar6 = uVar6 + (int)(char)uVar5;
    if (uVar6 != 0) {
      lVar3 = CONCAT44(uStack_5c,uStack_60);
      lVar4 = CONCAT44(uStack_54,local_58);
      uVar13 = 0;
      do {
        if (-1 < *(char *)(lVar3 + uVar13)) {
          uVar1 = *(ulonglong *)(lVar4 + uVar13 * 8);
          uVar10 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          uVar11 = (ulonglong)(param_1[8] & uVar10);
          lVar2 = *(longlong *)(param_1 + 2);
          if ((lVar2 == 0) || (*(char *)(lVar2 + uVar11) < '\0')) {
            cVar8 = '\0';
          }
          else {
            cVar8 = '\0';
            do {
              if (uVar1 == *(ulonglong *)(*(longlong *)(param_1 + 4) + uVar11 * 8))
              goto LAB_147378862;
              uVar11 = (ulonglong)((int)uVar11 + 1);
              cVar8 = cVar8 + '\x01';
            } while (cVar8 <= *(char *)(lVar2 + uVar11));
          }
          local_88 = uVar1;
          local_80 = uVar10;
          FUN_147378496(param_1,cVar8,param_1);
        }
LAB_147378862:
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar6);
    }
    FUN_147377362(&local_68);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14737887e FUN_14737887e body=48 status=ok
// SIG undefined FUN_14737887e(void)

void FUN_14737887e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473788ae FUN_1473788ae body=48 status=ok
// SIG undefined FUN_1473788ae(void)

void FUN_1473788ae(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1473788de FUN_1473788de body=96 status=ok
// SIG undefined FUN_1473788de(void)

void FUN_1473788de(longlong param_1,int param_2)

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



// FUNCTION 14737893e FUN_14737893e body=96 status=ok
// SIG undefined FUN_14737893e(void)

void FUN_14737893e(longlong param_1,int param_2)

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



// FUNCTION 14737899e FUN_14737899e body=198 status=ok
// SIG undefined FUN_14737899e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14737899e(longlong param_1)

{
  undefined *puVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca76dd8) {
    FUN_144b3d300(&DAT_14ca76dd8);
    if (DAT_14ca76dd8 == -1) {
      _DAT_14ca76d08 = 0;
      DAT_14ca76d0c = 0;
      _DAT_14ca76d10 = 0;
      memset(&DAT_14ca76d18,0,0xc0);
      lVar2 = 0x10;
      do {
        *(undefined8 *)(&DAT_14ca76d08 + lVar2) = 0;
        *(undefined8 *)(&DAT_14ca76d10 + lVar2) = 0;
        *(undefined4 *)(&DAT_14ca76d18 + lVar2) = 0;
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0xd0);
      atexit(FUN_1431697f1);
      _Init_thread_footer(&DAT_14ca76dd8);
    }
  }
  puVar1 = &DAT_14ca76d08;
  if (*(undefined **)(param_1 + 0x3da8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_1 + 0x3da8);
  }
  return puVar1;
}



// FUNCTION 147378a64 FUN_147378a64 body=278 status=ok
// SIG undefined FUN_147378a64(void)

void FUN_147378a64(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  char *local_48;
  char local_3d;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &local_3d;
  local_3d = '\0';
  FUN_147378e24(param_2 + 0x7a4,local_3c,
                (int)((ulonglong)*(undefined8 *)(param_1 + 0x580) >> 0x20) * 0x17 +
                (int)*(undefined8 *)(param_1 + 0x580) & 0x7fffffff,param_1 + 0x580);
  if (local_3d == '\0') {
    iVar1 = *(int *)(param_1 + 0x128);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x120);
      lVar5 = 0;
      do {
        uVar3 = *(undefined8 *)(lVar2 + lVar5);
        lVar4 = param_2[0x33];
        if (lVar4 == 0) {
          (**(code **)(*param_2 + 8))(param_2);
          lVar4 = param_2[0x33];
        }
        FUN_1447093fc(lVar4,uVar3);
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    if (param_2[0x33] == 0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147378b94 FUN_147378b94 body=135 status=ok
// SIG undefined FUN_147378b94(void)

void FUN_147378b94(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x160);
    lVar3 = 0;
    do {
      FUN_1446ff3a6(param_2,*(undefined8 *)(lVar2 + lVar3),0x40);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x170);
    lVar3 = 0;
    do {
      FUN_144719d5c(param_2,*(undefined8 *)(lVar2 + lVar3),8);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 147378c1c FUN_147378c1c body=119 status=ok
// SIG undefined FUN_147378c1c(void)

void FUN_147378c1c(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x60;
    if (0x60 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x60 < *(uint *)(param_1 + 0x30c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x30c) = iVar5;
    FUN_147378c94(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147378c94 FUN_147378c94 body=141 status=ok
// SIG undefined FUN_147378c94(void)

void FUN_147378c94(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x61) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,8);
  return;
}



// FUNCTION 147378d22 FUN_147378d22 body=124 status=ok
// SIG undefined FUN_147378d22(void)

void FUN_147378d22(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147378da0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147378da0 FUN_147378da0 body=132 status=ok
// SIG undefined FUN_147378da0(void)

void FUN_147378da0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 147378e24 FUN_147378e24 body=622 status=ok
// SIG undefined FUN_147378e24(void)

undefined4 *
FUN_147378e24(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined1 *param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
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
  plVar9 = param_1 + 8;
  do {
    lVar12 = (longlong)(int)uVar4;
    local_80 = param_4;
    if (*(uint *)((longlong)plVar8 + lVar12 * 4) == param_3) {
      plVar13 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar13 = plVar9;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar13 + lVar12 * 4) * 8)) {
        *param_5 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar9 + lVar12 * 4);
        goto LAB_147378f01;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_147378ec8:
    uVar5 = FUN_147379186(param_1,local_80,param_3);
    FUN_147379094(param_1,uVar5,param_3);
    *param_5 = 0;
LAB_147378f01:
    *param_2 = uVar5;
    if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  puVar3 = (undefined4 *)param_1[9];
  if (puVar3 == (undefined4 *)0x0) {
    local_60[0] = (undefined4)*plVar9;
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
      FUN_14475fe8c(plVar9);
      iVar7 = (int)param_1[0xe];
      iVar6 = (int)param_1[10];
      iVar11 = *(int *)((longlong)param_1 + 0x54);
    }
    else {
      iVar6 = 0;
      iVar11 = 1;
    }
    uVar4 = iVar7 + 1;
    *(int *)(param_1 + 10) = iVar7 + iVar6 + 1;
    if ((uint)(iVar11 - iVar6) < uVar4) {
      FUN_146f3c7b6(plVar9,iVar6);
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
      puVar10 = local_60;
      if (puVar3 != (undefined4 *)0x0) {
        puVar10 = puVar3;
      }
      uVar4 = 0;
      local_88 = puVar3;
      do {
        if (!SBORROW4(0,*(int *)((longlong)plVar14 + (longlong)(int)uVar4 * 4))) {
          FUN_147379094(param_1,puVar10[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147378ec8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 147379094 FUN_147379094 body=241 status=ok
// SIG undefined FUN_147379094(void)

void FUN_147379094(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 147379186 FUN_147379186 body=155 status=ok
// SIG undefined FUN_147379186(void)

int FUN_147379186(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((int)param_1[7] < 1) {
    iVar3 = (int)param_1[1];
    uVar2 = *param_2;
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_147379222(param_1,iVar3);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = uVar2;
    iVar1 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 4 + param_1[2]);
  }
  else {
    iVar3 = FUN_14020b4c6(param_1 + 4);
    *(undefined8 *)(*param_1 + (longlong)iVar3 * 8) = *param_2;
    puVar4 = (undefined4 *)((longlong)iVar3 * 4 + param_1[2]);
  }
  *puVar4 = param_3;
  return iVar3;
}



// FUNCTION 147379222 FUN_147379222 body=132 status=ok
// SIG undefined FUN_147379222(void)

void FUN_147379222(longlong param_1,int param_2)

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



// FUNCTION 1473792a8 FUN_1473792a8 body=112 status=ok
// SIG undefined FUN_1473792a8(void)

void FUN_1473792a8(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x150,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x150,8);
  }
  return;
}



// FUNCTION 147379318 FUN_147379318 body=132 status=ok
// SIG undefined FUN_147379318(void)

void FUN_147379318(longlong param_1,int param_2)

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


