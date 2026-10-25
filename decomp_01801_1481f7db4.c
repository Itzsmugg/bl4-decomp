// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1481f7db4 FUN_1481f7db4 body=17 status=ok
// SIG undefined FUN_1481f7db4(void)

void FUN_1481f7db4(void *param_1,ulonglong param_2)

{
  memset(param_1,0,(param_2 & 0xffffffff) * 0x18);
  return;
}



// FUNCTION 1481f7dc6 FUN_1481f7dc6 body=48 status=ok
// SIG undefined FUN_1481f7dc6(void)

void FUN_1481f7dc6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1481f7df6 FUN_1481f7df6 body=48 status=ok
// SIG undefined FUN_1481f7df6(void)

void FUN_1481f7df6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 1481f7e26 FUN_1481f7e26 body=89 status=ok
// SIG undefined FUN_1481f7e26(void)

void FUN_1481f7e26(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_14080510d(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f7e80 FUN_1481f7e80 body=62 status=ok
// SIG undefined FUN_1481f7e80(void)

void FUN_1481f7e80(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f7ebe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1481f7ebe FUN_1481f7ebe body=93 status=ok
// SIG undefined FUN_1481f7ebe(void)

ulonglong FUN_1481f7ebe(uint param_1,uint param_2)

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



// FUNCTION 1481f7f1c FUN_1481f7f1c body=132 status=ok
// SIG undefined FUN_1481f7f1c(void)

void FUN_1481f7f1c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1481f7fa2 FUN_1481f7fa2 body=48 status=ok
// SIG undefined FUN_1481f7fa2(void)

void FUN_1481f7fa2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1481f7fd2 FUN_1481f7fd2 body=114 status=ok
// SIG undefined FUN_1481f7fd2(void)

void FUN_1481f7fd2(longlong *param_1,int param_2)

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



// FUNCTION 1481f8044 FUN_1481f8044 body=9 status=ok
// SIG undefined FUN_1481f8044(void)

void FUN_1481f8044(longlong param_1)

{
  FUN_143ad516c(param_1 + 0x10);
  return;
}



// FUNCTION 1481f804e FUN_1481f804e body=29 status=ok
// SIG undefined FUN_1481f804e(void)

undefined8 FUN_1481f804e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f806c FUN_1481f806c body=132 status=ok
// SIG undefined FUN_1481f806c(void)

void FUN_1481f806c(longlong param_1,int param_2)

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



// FUNCTION 1481f80f2 FUN_1481f80f2 body=147 status=ok
// SIG undefined FUN_1481f80f2(void)

void FUN_1481f80f2(longlong param_1,int param_2)

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



// FUNCTION 1481f8186 FUN_1481f8186 body=62 status=ok
// SIG undefined FUN_1481f8186(void)

void FUN_1481f8186(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f81c4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1481f81c4 FUN_1481f81c4 body=112 status=ok
// SIG undefined FUN_1481f81c4(void)

ulonglong FUN_1481f81c4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481f81fe;
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
LAB_1481f81fe:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481f8234 FUN_1481f8234 body=119 status=ok
// SIG undefined FUN_1481f8234(void)

void FUN_1481f8234(longlong param_1,int param_2)

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
    FUN_1401662c2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481f82ac FUN_1481f82ac body=132 status=ok
// SIG undefined FUN_1481f82ac(void)

void FUN_1481f82ac(longlong param_1,int param_2)

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



// FUNCTION 1481f8332 FUN_1481f8332 body=89 status=ok
// SIG undefined FUN_1481f8332(void)

void FUN_1481f8332(longlong param_1,int param_2)

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



// FUNCTION 1481f838c FUN_1481f838c body=110 status=ok
// SIG undefined FUN_1481f838c(void)

void FUN_1481f838c(longlong param_1,int param_2)

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
    FUN_1481f83fc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481f83fc FUN_1481f83fc body=131 status=ok
// SIG undefined FUN_1481f83fc(void)

void FUN_1481f83fc(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1481f8480 FUN_1481f8480 body=148 status=ok
// SIG undefined FUN_1481f8480(void)

void FUN_1481f8480(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x180);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x60);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x180,0,param_3,0x60);
    memmove(*(void **)((longlong)param_1 + 0x180),param_1,(longlong)param_2 * 0x60);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x180,param_2,param_3,0x60);
  return;
}



// FUNCTION 1481f8514 FUN_1481f8514 body=136 status=ok
// SIG undefined FUN_1481f8514(void)

void FUN_1481f8514(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x188);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x18c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x60,0);
      iVar4 = (int)(uVar3 / 0x60);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x18c) = iVar5;
    FUN_1481f8480(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1481f85a2 FUN_1481f85a2 body=93 status=ok
// SIG undefined FUN_1481f85a2(void)

undefined8 * FUN_1481f85a2(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ae26c50;
  puVar1 = param_1 + 1;
  if ((undefined8 *)param_1[0x31] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x31];
  }
  FUN_14474ade3(puVar1,*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f8604 FUN_1481f8604 body=93 status=ok
// SIG undefined FUN_1481f8604(void)

undefined8 * FUN_1481f8604(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14ae26c90;
  puVar1 = param_1 + 1;
  if ((undefined8 *)param_1[0x31] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x31];
  }
  FUN_14474ade3(puVar1,*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481f8662 FUN_1481f8662 body=74 status=ok
// SIG undefined FUN_1481f8662(void)

void FUN_1481f8662(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1481f86ac FUN_1481f86ac body=101 status=ok
// SIG undefined FUN_1481f86ac(void)

void FUN_1481f86ac(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x30 + *param_1);
  FUN_14032e85e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x30 + (longlong)_Dst),(longlong)iVar2 * 0x30);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f8712 FUN_1481f8712 body=62 status=ok
// SIG undefined FUN_1481f8712(void)

void FUN_1481f8712(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f8750(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 1481f8750 FUN_1481f8750 body=112 status=ok
// SIG undefined FUN_1481f8750(void)

ulonglong FUN_1481f8750(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1481f878a;
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
LAB_1481f878a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1481f87c0 FUN_1481f87c0 body=89 status=ok
// SIG undefined FUN_1481f87c0(void)

void FUN_1481f87c0(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_14032e826(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1481f881a FUN_1481f881a body=62 status=ok
// SIG undefined FUN_1481f881a(void)

void FUN_1481f881a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1481f8858(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1481f8858 FUN_1481f8858 body=93 status=ok
// SIG undefined FUN_1481f8858(void)

ulonglong FUN_1481f8858(uint param_1,uint param_2)

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



// FUNCTION 1481f88bc FUN_1481f88bc body=57 status=ok
// SIG undefined FUN_1481f88bc(void)

void FUN_1481f88bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43cc0 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43cc0 = FUN_140002ddd(FUN_14647b421,uVar1,L"NiagaraTypeDefinition");
  }
  return;
}



// FUNCTION 1481f88f6 FUN_1481f88f6 body=350 status=ok
// SIG undefined FUN_1481f88f6(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1481f88f6(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined1 auStack_10c8 [32];
  undefined8 local_10a8;
  undefined1 *local_10a0;
  undefined1 *local_1098;
  undefined1 *local_1090;
  char local_1088;
  undefined1 local_1080 [2070];
  undefined1 local_86a [2];
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  int iVar6;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_10c8;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_32;
  local_860 = local_868;
  FUN_14005eb5c(param_1,&local_868);
  puVar1 = local_868;
  iVar2 = *(int *)(param_2 + 1);
  uVar3 = iVar2 + 1;
  iVar6 = (int)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
  iVar5 = iVar6 - uVar3;
  if (((iVar5 == 0 || iVar6 < (int)uVar3) || (*(short *)(local_868 + (longlong)iVar2 * 2) != 0x2e))
     || (iVar2 < 0)) {
LAB_1481f898f:
    uVar4 = 0;
  }
  else {
    if (iVar2 != 0) {
      iVar2 = FUN_144a54874(*param_2,local_868);
      if (iVar2 != 0) goto LAB_1481f898f;
    }
    local_10a0 = local_1080;
    local_1088 = '\0';
    local_1090 = local_86a;
    iVar2 = 0;
    if (0 < iVar5) {
      iVar2 = iVar5;
    }
    local_1098 = local_10a0;
    FUN_1449668a2(&local_10a0,puVar1 + (ulonglong)uVar3 * 2,iVar2);
    FUN_1446f82e2(&local_10a8,(ulonglong)((longlong)local_1098 - (longlong)local_10a0) >> 1,
                  local_10a0,1);
    *param_1 = local_10a8;
    if (local_1088 == '\x01') {
      FUN_1400020a8(local_10a0);
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_30 ^ (ulonglong)auStack_10c8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f8a56 FUN_1481f8a56 body=275 status=ok
// SIG undefined FUN_1481f8a56(void)

undefined4 FUN_1481f8a56(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(param_2 + 8));
  if (DAT_14cb43d08 == 0) {
    uVar2 = FUN_140aec9fd();
    DAT_14cb43d08 = FUN_140002ddd(FUN_14183adb2,uVar2,L"NiagaraVariable");
  }
  uVar1 = FUN_1468ec2ac(&local_48,*(undefined8 *)(DAT_14cb43d08 + 0x18));
  if ((char)uVar1 != '\0') {
    local_48 = 0;
    local_40[0] = FUN_144830b78(local_40,&DAT_14cb42160);
    local_38 = 0;
    uStack_30 = 0;
    if (DAT_14cb43d08 == 0) {
      uVar2 = FUN_140aec9fd();
      DAT_14cb43d08 = FUN_140002ddd(FUN_14183adb2,uVar2,L"NiagaraVariable");
    }
    FUN_14483b62e(DAT_14cb43d08,param_3,&local_48,0);
    *param_1 = local_48;
    *(undefined4 *)(param_1 + 1) = local_40[0];
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f8b6a FUN_1481f8b6a body=95 status=ok
// SIG undefined FUN_1481f8b6a(void)

longlong * FUN_1481f8b6a(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    lVar2 = FUN_14479d2ce(param_1);
    *param_2 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    param_2[1] = *(longlong *)(param_1 + 8);
    param_2[2] = lVar2;
  }
  return param_2;
}



// FUNCTION 1481f8bca FUN_1481f8bca body=61 status=ok
// SIG undefined FUN_1481f8bca(void)

float * FUN_1481f8bca(double *param_1,float *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_3[2];
  dVar2 = param_1[2];
  dVar3 = param_3[1];
  dVar4 = param_1[1];
  *param_2 = (float)(*param_3 - *param_1);
  param_2[1] = (float)(dVar3 - dVar4);
  param_2[2] = (float)(dVar1 - dVar2);
  return param_2;
}



// FUNCTION 1481f8c08 FUN_1481f8c08 body=103 status=ok
// SIG undefined FUN_1481f8c08(void)

undefined8 FUN_1481f8c08(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(ulonglong *)(param_1 + 4) ^ 0x8000000000000000;
  local_28 = *param_1;
  uStack_20 = param_1[2];
  uStack_24 = param_1[1] ^ 0x80000000;
  uStack_1c = param_1[3] ^ 0x80000000;
  FUN_1467fd654(param_3,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f8c70 FUN_1481f8c70 body=31 status=ok
// SIG undefined FUN_1481f8c70(void)

undefined8 FUN_1481f8c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1467fd654(param_3,param_2,param_1);
  return param_2;
}



// FUNCTION 1481f8c90 FUN_1481f8c90 body=160 status=ok
// SIG undefined FUN_1481f8c90(void)

undefined1 (*) [16] FUN_1481f8c90(double *param_1,undefined1 (*param_2) [16],double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar4 [16];
  
  auVar3._0_4_ = (float)(param_3[5] - param_1[1]);
  auVar3._4_4_ = (int)((ulonglong)(param_3[5] - param_1[1]) >> 0x20);
  auVar3._8_8_ = 0;
  auVar1._0_4_ = (float)(param_3[4] - *param_1);
  auVar1._4_4_ = (int)((ulonglong)(param_3[4] - *param_1) >> 0x20);
  auVar1._8_8_ = 0;
  auVar1 = insertps(auVar1,auVar3,0x1c);
  auVar2._4_4_ = (int)((ulonglong)(param_3[6] - param_1[2]) >> 0x20);
  auVar2._0_4_ = (float)(param_3[6] - param_1[2]);
  auVar2._8_8_ = 0;
  auVar2 = insertps(auVar1,auVar2,0x28);
  param_2[1] = auVar2;
  auVar4._4_12_ = in_XMM3._4_12_;
  auVar4._0_4_ = (float)*param_3;
  auVar2 = insertps(auVar4,ZEXT416((uint)(float)param_3[1]),0x10);
  auVar2 = insertps(auVar2,ZEXT416((uint)(float)param_3[2]),0x20);
  auVar2 = insertps(auVar2,ZEXT416((uint)(float)param_3[3]),0x30);
  *param_2 = auVar2;
  auVar2 = insertps(ZEXT416((uint)(float)param_3[8]),ZEXT416((uint)(float)param_3[9]),0x1c);
  auVar2 = insertps(auVar2,ZEXT416((uint)(float)param_3[10]),0x28);
  param_2[2] = auVar2;
  return param_2;
}



// FUNCTION 1481f8d30 FUN_1481f8d30 body=587 status=ok
// SIG undefined FUN_1481f8d30(void)

void FUN_1481f8d30(int *param_1,longlong param_2,longlong param_3,uint param_4,int param_5,
                  int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  float *pfVar5;
  ulonglong uVar6;
  
  switch((char)param_1[4]) {
  case '\x01':
    if (0 < (int)param_4) {
      pfVar5 = (float *)(param_3 + param_1[3]);
      pdVar4 = (double *)(param_2 + param_1[1]);
      uVar6 = (ulonglong)param_4;
      do {
        *pfVar5 = (float)*pdVar4;
        pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_5);
        pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_6);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case '\x02':
    if (0 < (int)param_4) {
      uVar6 = (ulonglong)param_4;
      pdVar4 = (double *)(param_1[1] + param_2 + 8);
      pfVar5 = (float *)(param_1[3] + param_3 + 4);
      do {
        dVar1 = *pdVar4;
        pfVar5[-1] = (float)pdVar4[-1];
        *pfVar5 = (float)dVar1;
        pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_5);
        pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_6);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case '\x03':
    if (0 < (int)param_4) {
      uVar6 = (ulonglong)param_4;
      pdVar4 = (double *)(param_1[1] + param_2 + 0x10);
      pfVar5 = (float *)(param_1[3] + param_3 + 8);
      do {
        dVar1 = *pdVar4;
        dVar2 = pdVar4[-1];
        pfVar5[-2] = (float)pdVar4[-2];
        pfVar5[-1] = (float)dVar2;
        *pfVar5 = (float)dVar1;
        pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_5);
        pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_6);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case '\x04':
    if (0 < (int)param_4) {
      uVar6 = (ulonglong)param_4;
      pdVar4 = (double *)(param_1[1] + param_2 + 0x18);
      pfVar5 = (float *)(param_1[3] + param_3 + 0xc);
      do {
        dVar1 = *pdVar4;
        dVar2 = pdVar4[-1];
        dVar3 = pdVar4[-2];
        pfVar5[-3] = (float)pdVar4[-3];
        pfVar5[-2] = (float)dVar3;
        pfVar5[-1] = (float)dVar2;
        *pfVar5 = (float)dVar1;
        pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_5);
        pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_6);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  case '\x05':
    if (0 < (int)param_4) {
      uVar6 = (ulonglong)param_4;
      pdVar4 = (double *)(param_1[1] + param_2 + 0x18);
      pfVar5 = (float *)(param_1[3] + param_3 + 0xc);
      do {
        dVar1 = *pdVar4;
        dVar2 = pdVar4[-1];
        dVar3 = pdVar4[-2];
        pfVar5[-3] = (float)pdVar4[-3];
        pfVar5[-2] = (float)dVar3;
        pfVar5[-1] = (float)dVar2;
        *pfVar5 = (float)dVar1;
        pdVar4 = (double *)((longlong)pdVar4 + (longlong)param_5);
        pfVar5 = (float *)((longlong)pfVar5 + (longlong)param_6);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    break;
  default:
    if (0 < (int)param_4) {
      uVar6 = (ulonglong)param_4;
      do {
        memcpy((void *)(param_1[3] + param_3),(void *)(param_1[1] + param_2),(longlong)*param_1);
        param_2 = param_2 + param_5;
        param_3 = param_3 + param_6;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 1481f8f7c FUN_1481f8f7c body=117 status=ok
// SIG undefined FUN_1481f8f7c(void)

void FUN_1481f8f7c(int *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((0 < param_1[4]) && (0 < *param_1)) && (param_4 != 0)) && (0 < param_1[1])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar1 = (ulonglong)(uint)param_1[4] * 0x14;
    do {
      FUN_1481f8d30(lVar2,param_3,param_2,param_4,*param_1,param_1[1]);
      lVar2 = lVar2 + 0x14;
      lVar1 = lVar1 + -0x14;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1481f8ff2 FUN_1481f8ff2 body=1720 status=ok
// SIG undefined FUN_1481f8ff2(void)

longlong * FUN_1481f8ff2(longlong *param_1,float *param_2,longlong param_3)

{
  ushort uVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  size_t sVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  wchar_t *_Str;
  uint uVar11;
  float fVar12;
  double *pdVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int local_a0;
  undefined2 *local_98;
  int local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    lVar5 = FUN_140851d9a();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) != lVar5 + 0x30)) {
      lVar5 = FUN_1446f4bba();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_1481f9075;
      if (DAT_14cb41330 == param_3) {
        FUN_140002266(&local_88,&DAT_14ae291ca,(double)*param_2);
      }
      else {
        if (DAT_14cb420c0 != param_3) {
          if (DAT_14cb420c8 == param_3) {
            pwVar10 = L"Invalid";
            if (*param_2 == 0.0) {
              pwVar10 = L"False";
            }
            _Str = L"True";
            if (*param_2 != -NAN) {
              _Str = pwVar10;
            }
            sVar7 = wcslen(_Str);
            FUN_1400020e8(param_1,_Str,sVar7 & 0xffffffff);
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
          }
          local_80 = *(longlong *)(param_3 + 0x50);
          local_78 = 0xffffffff;
          local_74 = 0x101;
          local_72 = 0;
          local_88 = param_3;
          FUN_144a2daf0(&local_88);
          if (local_80 != 0) {
            do {
              lVar4 = local_80;
              pdVar13 = (double *)((longlong)*(int *)(local_80 + 0x44) + (longlong)param_2);
              lVar6 = FUN_144a64e42();
              lVar5 = *(longlong *)(lVar4 + 8);
              if (*(ulonglong *)(lVar6 + 8) == 0) {
                bVar14 = lVar5 != 0;
                if (lVar5 != lVar6 && bVar14) {
                  do {
                    lVar5 = *(longlong *)(lVar5 + 0x30);
                    bVar14 = lVar5 != 0;
                    if (lVar5 == lVar6) break;
                  } while (lVar5 != 0);
                }
                if (bVar14) goto LAB_1481f9198;
LAB_1481f9268:
                lVar6 = FUN_144a49fc8();
                lVar5 = *(longlong *)(lVar4 + 8);
                if (*(ulonglong *)(lVar6 + 8) == 0) {
                  bVar14 = lVar5 != 0;
                  if (lVar5 != lVar6 && bVar14) {
                    do {
                      lVar5 = *(longlong *)(lVar5 + 0x30);
                      bVar14 = lVar5 != 0;
                      if (lVar5 == lVar6) break;
                    } while (lVar5 != 0);
                  }
                  if (bVar14) goto LAB_1481f9280;
                }
                else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_1481f9280:
                  dVar2 = *pdVar13;
                  goto LAB_1481f91a1;
                }
                lVar6 = FUN_140e98e1a();
                lVar5 = *(longlong *)(lVar4 + 8);
                if (*(ulonglong *)(lVar6 + 8) == 0) {
                  bVar14 = lVar5 != 0;
                  if (lVar5 != lVar6 && bVar14) {
                    do {
                      lVar5 = *(longlong *)(lVar5 + 0x30);
                      bVar14 = lVar5 != 0;
                      if (lVar5 == lVar6) break;
                    } while (lVar5 != 0);
                  }
                  if (!bVar14) {
LAB_1481f93c1:
                    lVar6 = FUN_144a7452c();
                    lVar5 = *(longlong *)(lVar4 + 8);
                    if (*(ulonglong *)(lVar6 + 8) == 0) {
                      bVar14 = lVar5 != 0;
                      if (lVar5 != lVar6 && bVar14) {
                        do {
                          lVar5 = *(longlong *)(lVar5 + 0x30);
                          bVar14 = lVar5 != 0;
                          if (lVar5 == lVar6) break;
                        } while (lVar5 != 0);
                      }
                      if (bVar14) goto LAB_1481f93d9;
                    }
                    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) {
LAB_1481f93d9:
                      fVar12 = *(float *)pdVar13;
                      FUN_1468c80a4(lVar4,&local_a8);
                      puVar8 = &DAT_149dfb77a;
                      if (local_a0 != 0) {
                        puVar8 = local_a8;
                      }
                      FUN_140002266(&local_98,L"%s: %d ",puVar8,fVar12);
                      goto LAB_1481f91ce;
                    }
                    lVar6 = FUN_144a5ab96();
                    lVar5 = *(longlong *)(lVar4 + 8);
                    if (*(ulonglong *)(lVar6 + 8) == 0) {
                      bVar14 = lVar5 != 0;
                      if (lVar5 != lVar6 && bVar14) {
                        do {
                          lVar5 = *(longlong *)(lVar5 + 0x30);
                          bVar14 = lVar5 != 0;
                          if (lVar5 == lVar6) break;
                        } while (lVar5 != 0);
                      }
                      if (!bVar14) {
LAB_1481f9573:
                        FUN_1481f8ff2(&local_a8,pdVar13,*(undefined8 *)(lVar4 + 0x70));
                        puVar8 = &DAT_149dfb77a;
                        if (local_a0 != 0) {
                          puVar8 = local_a8;
                        }
                        FUN_1468c80a4(lVar4,&local_b8);
                        puVar9 = &DAT_149dfb77a;
                        if (local_b0 != 0) {
                          puVar9 = local_b8;
                        }
                        FUN_140002266(&local_98,L"%s: (%s) ",puVar9,puVar8);
                        iVar3 = local_90 + -1;
                        if (local_90 == 0) {
                          iVar3 = 0;
                        }
                        FUN_1400020e8(param_1,local_98,iVar3);
                        puVar8 = local_b8;
                        if (local_98 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                          puVar8 = local_b8;
                        }
                        goto LAB_1481f91f2;
                      }
                    }
                    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0)
                    goto LAB_1481f9573;
                    pwVar10 = L"Invalid";
                    if (*param_2 == 0.0) {
                      pwVar10 = L"False";
                    }
                    if (*param_2 == -NAN) {
                      pwVar10 = L"True";
                    }
                    FUN_140056680(&local_98,pwVar10);
                    puVar8 = &DAT_149dfb77a;
                    if (local_90 != 0) {
                      puVar8 = local_98;
                    }
                    FUN_1468c80a4(lVar4,&local_b8);
                    puVar9 = &DAT_149dfb77a;
                    if (local_b0 != 0) {
                      puVar9 = local_b8;
                    }
                    FUN_140002266(&local_a8,L"%s: %s ",puVar9,puVar8);
                    iVar3 = local_a0 + -1;
                    if (local_a0 == 0) {
                      iVar3 = 0;
                    }
                    FUN_1400020e8(param_1,local_a8,iVar3);
                    if (local_a8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    puVar9 = local_98;
                    if (local_b8 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                      puVar9 = local_98;
                    }
                    goto LAB_1481f9201;
                  }
                }
                else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0)
                goto LAB_1481f93c1;
                uVar1 = *(ushort *)pdVar13;
                uVar11 = (uint)uVar1 << 0xd;
                if ((uVar11 & 0xf800000) == 0xf800000) {
                  fVar12 = (float)(uVar11 | 0x70000000);
                }
                else if ((uVar11 & 0xf800000) == 0) {
                  fVar12 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar12 = (float)((uVar11 & 0xfffe000) + 0x38000000);
                }
                FUN_1468c80a4(lVar4,&local_a8);
                puVar8 = &DAT_149dfb77a;
                if (local_a0 != 0) {
                  puVar8 = local_a8;
                }
                FUN_140002266(&local_98,L"%s: %f ",puVar8,
                              (double)(float)((uint)fVar12 | (int)(short)uVar1 & 0x80000000U));
                iVar3 = local_90 + -1;
                if (local_90 == 0) {
                  iVar3 = 0;
                }
                FUN_1400020e8(param_1,local_98,iVar3);
                if (local_98 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_a8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar6 + 8)) == 0)
                goto LAB_1481f9268;
LAB_1481f9198:
                dVar2 = (double)*(float *)pdVar13;
LAB_1481f91a1:
                FUN_1468c80a4(lVar4,&local_a8);
                puVar8 = &DAT_149dfb77a;
                if (local_a0 != 0) {
                  puVar8 = local_a8;
                }
                FUN_140002266(&local_98,L"%s: %g ",puVar8,SUB84(dVar2,0));
LAB_1481f91ce:
                iVar3 = local_90 + -1;
                if (local_90 == 0) {
                  iVar3 = 0;
                }
                FUN_1400020e8(param_1,local_98,iVar3);
                puVar8 = local_98;
LAB_1481f91f2:
                puVar9 = local_a8;
                if (puVar8 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                  puVar9 = local_a8;
                }
LAB_1481f9201:
                if (puVar9 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_80 = *(longlong *)(local_80 + 0x18);
              FUN_144a2daf0(&local_88);
            } while (local_80 != 0);
          }
          goto LAB_1481f9075;
        }
        FUN_140002266(&local_88,&DAT_14ae291d2,*param_2);
      }
      iVar3 = (int)local_80 + -1;
      if ((int)local_80 == 0) {
        iVar3 = 0;
      }
      FUN_1400020e8(param_1,local_88,iVar3);
    }
    else {
      FUN_1401cfad2(param_3,&local_88,(longlong)(int)*param_2);
      if (&local_88 != param_1) {
        if (*param_1 != 0) {
          FUN_1400020a8();
        }
        *param_1 = local_88;
        *(int *)(param_1 + 1) = (int)local_80;
        *(undefined4 *)((longlong)param_1 + 0xc) = local_80._4_4_;
        goto LAB_1481f9075;
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1481f9075:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1481f96b0 FUN_1481f96b0 body=66 status=ok
// SIG undefined FUN_1481f96b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1481f96b0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c4b6c();
  lVar1 = DAT_14cb43d40;
  *param_1 = DAT_14cb43d40;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = _DAT_14cb43d48;
  return param_1;
}



// FUNCTION 1481f96f2 FUN_1481f96f2 body=66 status=ok
// SIG undefined FUN_1481f96f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1481f96f2(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c4b6c();
  lVar1 = DAT_14cb43d60;
  *param_1 = DAT_14cb43d60;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = _DAT_14cb43d68;
  return param_1;
}



// FUNCTION 1481f9734 FUN_1481f9734 body=66 status=ok
// SIG undefined FUN_1481f9734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1481f9734(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c4b6c();
  lVar1 = DAT_14cb43d70;
  *param_1 = DAT_14cb43d70;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = _DAT_14cb43d78;
  return param_1;
}



// FUNCTION 1481f9776 FUN_1481f9776 body=339 status=ok
// SIG undefined FUN_1481f9776(void)

longlong FUN_1481f9776(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = FUN_144a79778();
  if (lVar3 == DAT_14c951640) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14cb43da0);
    local_38 = 0x100000000;
    local_30 = &DAT_14cb43db8;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (DAT_14cb43dd0 != 0) {
      FUN_1449c0562(&local_38);
    }
    local_48 = local_28;
    uVar1 = local_48;
    local_40 = local_20;
    local_3c = local_1c;
    local_58 = local_38;
    local_50 = local_30;
    local_60 = &DAT_14cb43da8;
    local_48._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    if (local_48._4_4_ < (int)local_30[6]) {
      iVar2 = local_48._4_4_;
      local_48 = uVar1;
      do {
        lVar3 = FUN_14479d2ce(*local_60 + (longlong)iVar2 * 0x18 + 8);
        if (lVar3 == param_1) {
          param_1 = FUN_14479d2ce((longlong)local_48._4_4_ * 0x18 + *local_60);
          goto LAB_1481f9899;
        }
        local_48 = CONCAT44(local_48._4_4_,(uint)local_48 & ~local_58._4_4_);
        FUN_1449c0562(&local_58);
        iVar2 = local_48._4_4_;
        uVar1 = local_48;
      } while (local_48._4_4_ < (int)local_50[6]);
    }
    local_48 = uVar1;
    param_1 = 0;
LAB_1481f9899:
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cb43da0);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f98ca FUN_1481f98ca body=917 status=ok
// SIG undefined FUN_1481f98ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1481f98ca(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  if ((((short)param_2[1] != 3) &&
      ((((lVar4 = FUN_144a811ba(param_2), lVar4 == 0 || (lVar5 = FUN_1446f8646(), lVar5 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)))) && (cVar3 = FUN_14487ac36(param_2), cVar3 == '\0')) {
    FUN_1408c4b6c();
    lVar4 = DAT_14cb420f0;
    if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb420f0);
    }
    lVar2 = DAT_14cb43d80;
    lVar1 = DAT_14cb42110;
    lVar5 = *param_2;
    if (((lVar5 == lVar4) && ((short)param_2[1] == (short)DAT_14cb420f8)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb420f8._2_1_)) {
      *param_1 = DAT_14cb43d80;
      lVar4 = DAT_14cb43d88;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        lVar4 = DAT_14cb43d88;
      }
      goto LAB_1481f98fc;
    }
    if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42110);
      lVar5 = *param_2;
    }
    lVar2 = DAT_14cb43d40;
    lVar4 = DAT_14cb42140;
    if (((lVar5 == lVar1) && ((short)param_2[1] == (short)DAT_14cb42118)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb42118._2_1_)) {
      *param_1 = DAT_14cb43d40;
      lVar4 = _DAT_14cb43d48;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        lVar4 = _DAT_14cb43d48;
      }
      goto LAB_1481f98fc;
    }
    if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42140);
      lVar5 = *param_2;
    }
    lVar2 = DAT_14cb43d50;
    lVar1 = DAT_14cb42160;
    if (((lVar5 == lVar4) && ((short)param_2[1] == (short)DAT_14cb42148)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb42148._2_1_)) {
      *param_1 = DAT_14cb43d50;
      lVar4 = _DAT_14cb43d58;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        lVar4 = _DAT_14cb43d58;
      }
      goto LAB_1481f98fc;
    }
    if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42160);
      lVar5 = *param_2;
    }
    lVar2 = DAT_14cb43d60;
    lVar4 = DAT_14cb42190;
    if (((lVar5 == lVar1) && ((short)param_2[1] == (short)DAT_14cb42168)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb42168._2_1_)) {
      *param_1 = DAT_14cb43d60;
      lVar4 = _DAT_14cb43d68;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        lVar4 = _DAT_14cb43d68;
      }
      goto LAB_1481f98fc;
    }
    if ((DAT_14cb42190 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(DAT_14cb42190);
      lVar5 = *param_2;
    }
    lVar1 = DAT_14cb43d70;
    if (((lVar5 == lVar4) && ((short)param_2[1] == DAT_14cb42198)) &&
       (*(char *)((longlong)param_2 + 10) == DAT_14cb4219a)) {
      *param_1 = DAT_14cb43d70;
      lVar4 = _DAT_14cb43d78;
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
        lVar4 = _DAT_14cb43d78;
      }
      goto LAB_1481f98fc;
    }
    cVar3 = FUN_144a644ea(param_2);
    if (cVar3 == '\0') {
      uVar6 = FUN_144a64b50(param_2);
      lVar4 = FUN_1481f9776(uVar6);
      if (lVar4 != 0) {
        *param_1 = lVar4;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar4);
        }
        *(undefined2 *)(param_1 + 1) = 2;
        *(undefined1 *)((longlong)param_1 + 10) = 0;
        *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
        return param_1;
      }
    }
  }
  lVar4 = *param_2;
  *param_1 = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar4 = param_2[1];
LAB_1481f98fc:
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 1481f9c60 FUN_1481f9c60 body=66 status=ok
// SIG undefined FUN_1481f9c60(void)

longlong * FUN_1481f9c60(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c4b6c();
  lVar1 = DAT_14cb43d80;
  *param_1 = DAT_14cb43d80;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = DAT_14cb43d88;
  return param_1;
}



// FUNCTION 1481f9ca2 FUN_1481f9ca2 body=205 status=ok
// SIG undefined FUN_1481f9ca2(void)

void FUN_1481f9ca2(undefined2 *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_88 [32];
  uint *local_68;
  undefined1 local_60;
  undefined4 local_58;
  uint local_44;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_58 = 0;
  local_60 = 1;
  local_68 = &local_44;
  FUN_1481f9d70(param_1,param_2,&local_3c,&local_40);
  *param_1 = (short)local_3c;
  uVar1 = local_3c & 0xffff;
  param_1[1] = (short)local_40;
  uVar2 = local_40 & 0xffff;
  uVar3 = local_44 & 0xffff;
  param_1[2] = (short)local_44;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  FUN_14478085e(param_1 + 4,(uVar3 + uVar2 + uVar1) * 2,1);
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_44;
  FUN_1481f9d70(param_1,param_2,&local_3c,&local_40);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481f9d70 FUN_1481f9d70 body=836 status=ok
// SIG undefined FUN_1481f9d70(void)

void FUN_1481f9d70(ushort *param_1,longlong param_2,int *param_3,int *param_4,int *param_5,
                  char param_6,int param_7)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  int *local_88;
  char local_80;
  int local_78;
  int *local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_2 + 0x50);
  }
  local_50 = 0xffffffff;
  local_4c = 0x101;
  local_4a = 0;
  local_68 = param_4;
  local_60 = param_2;
  FUN_144a2daf0(&local_60);
  if (local_58 != 0) {
    do {
      lVar1 = local_58;
      iVar7 = *(int *)(local_58 + 0x44) + param_7;
      lVar3 = FUN_144a64e42();
      lVar5 = *(longlong *)(lVar1 + 8);
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar8 = lVar5 != 0;
        if (lVar5 != lVar3 && bVar8) {
          do {
            lVar5 = *(longlong *)(lVar5 + 0x30);
            bVar8 = lVar5 != 0;
            if (lVar5 == lVar3) break;
          } while (lVar5 != 0);
        }
        if (bVar8) goto LAB_1481f9e1b;
LAB_1481f9e93:
        lVar3 = FUN_140e98e1a();
        lVar5 = *(longlong *)(lVar1 + 8);
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar8 = lVar5 != 0;
          if (lVar5 != lVar3 && bVar8) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar8 = lVar5 != 0;
              if (lVar5 == lVar3) break;
            } while (lVar5 != 0);
          }
          if (bVar8) goto LAB_1481f9eac;
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1481f9eac:
          iVar2 = *param_5;
          if (param_6 == '\0') {
            *(int *)(*(longlong *)(param_1 + 4) +
                    (longlong)(int)(iVar2 + ((uint)param_1[1] + (uint)*param_1) * 2) * 4) = iVar7;
            iVar2 = *param_5;
            *(int *)(*(longlong *)(param_1 + 4) +
                    (longlong)
                    (int)((uint)param_1[2] + iVar2 + ((uint)param_1[1] + (uint)*param_1) * 2) * 4) =
                 iVar2;
          }
          *param_5 = iVar2 + 1;
          goto LAB_1481f9e40;
        }
        lVar3 = FUN_144a7452c();
        lVar5 = *(longlong *)(lVar1 + 8);
        if (*(ulonglong *)(lVar3 + 8) == 0) {
          bVar8 = lVar5 != 0;
          if (lVar5 != lVar3 && bVar8) {
            do {
              lVar5 = *(longlong *)(lVar5 + 0x30);
              bVar8 = lVar5 != 0;
              if (lVar5 == lVar3) break;
            } while (lVar5 != 0);
          }
          if (!bVar8) goto LAB_1481f9fae;
        }
        else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
LAB_1481f9fae:
          lVar3 = FUN_144a5ab96();
          lVar5 = *(longlong *)(lVar1 + 8);
          if (*(ulonglong *)(lVar3 + 8) == 0) {
            bVar8 = lVar5 != 0;
            lVar6 = lVar5;
            if (lVar5 != lVar3 && bVar8) {
              do {
                lVar6 = *(longlong *)(lVar6 + 0x30);
                bVar8 = lVar6 != 0;
                if (lVar6 == lVar3) break;
              } while (lVar6 != 0);
            }
            if (bVar8) goto LAB_1481f9f37;
          }
          else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0)
          goto LAB_1481f9f37;
          lVar3 = FUN_1446dcc8c();
          if (*(ulonglong *)(lVar3 + 8) == 0) {
            bVar8 = lVar5 != 0;
            if (lVar5 != lVar3 && bVar8) {
              do {
                lVar5 = *(longlong *)(lVar5 + 0x30);
                bVar8 = lVar5 != 0;
                if (lVar5 == lVar3) break;
              } while (lVar5 != 0);
            }
            bVar8 = !bVar8;
          }
          else {
            bVar8 = (*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0;
          }
          if (!bVar8) {
            uVar4 = FUN_140c6c286(*(undefined8 *)(lVar1 + 0x70),1);
            local_80 = param_6;
            local_88 = param_5;
            local_78 = iVar7;
            FUN_1481f9d70(param_1,uVar4,param_3,local_68);
          }
          goto LAB_1481f9e40;
        }
LAB_1481f9f37:
        iVar2 = *local_68;
        if (param_6 == '\0') {
          *(int *)(*(longlong *)(param_1 + 4) + ((longlong)iVar2 + (ulonglong)*param_1 * 2) * 4) =
               iVar7;
          iVar2 = *local_68;
          *(int *)(*(longlong *)(param_1 + 4) +
                  (longlong)(int)((uint)param_1[1] + iVar2 + (uint)*param_1 * 2) * 4) = iVar2;
        }
        *local_68 = iVar2 + 1;
      }
      else {
        if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_1481f9e93;
LAB_1481f9e1b:
        iVar2 = *param_3;
        if (param_6 == '\0') {
          *(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar2 * 4) = iVar7;
          iVar2 = *param_3;
          *(int *)(*(longlong *)(param_1 + 4) + ((ulonglong)*param_1 + (longlong)iVar2) * 4) = iVar2
          ;
        }
        *param_3 = iVar2 + 1;
      }
LAB_1481f9e40:
      local_58 = *(longlong *)(local_58 + 0x18);
      FUN_144a2daf0(&local_60);
    } while (local_58 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fa0b6 FUN_1481fa0b6 body=329 status=ok
// SIG undefined FUN_1481fa0b6(void)

void FUN_1481fa0b6(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = param_1 + 0x11;
  if (*(int *)(param_1 + 0x12) != *(int *)((longlong)param_1 + 0xbc)) {
    FUN_1482075a4(puVar1);
    FUN_1482076e8(puVar1);
  }
  (**(code **)*param_1)(param_1,&local_88);
  if ((longlong)local_80 != 0) {
    lVar3 = 0;
    do {
      local_a0 = *(undefined4 *)(local_88 + 8 + lVar3);
      local_a8 = *(undefined8 *)(local_88 + lVar3);
      local_98 = 0;
      uStack_90 = 0;
      cVar2 = FUN_1448ff1e0(&local_a8);
      if (cVar2 != '\0') {
        FUN_14021a2da(local_c8,&local_a8);
        local_78 = local_c8;
        local_70 = &local_a8;
        FUN_14021a44c(puVar1,local_64,&local_78);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)local_80 * 0x28 != lVar3);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fa200 FUN_1481fa200 body=26 status=ok
// SIG undefined FUN_1481fa200(void)

void FUN_1481fa200(undefined8 param_1)

{
  FUN_1481cffc4();
  FUN_1481fa0b6(param_1);
  return;
}



// FUNCTION 1481fa21a FUN_1481fa21a body=33 status=ok
// SIG undefined FUN_1481fa21a(void)

void FUN_1481fa21a(longlong param_1)

{
  FUN_140090dba();
  FUN_148207820(param_1 + 0x88);
  return;
}



// FUNCTION 1481fa23c FUN_1481fa23c body=61 status=ok
// SIG undefined FUN_1481fa23c(void)

void FUN_1481fa23c(longlong param_1)

{
  FUN_143aa3ee4();
  if (*(int *)(param_1 + 0x90) == *(int *)(param_1 + 0xbc)) {
    return;
  }
  FUN_1482075a4(param_1 + 0x88);
  FUN_1482076e8(param_1 + 0x88);
  return;
}



// FUNCTION 1481fa27a FUN_1481fa27a body=348 status=ok
// SIG undefined FUN_1481fa27a(void)

undefined4 FUN_1481fa27a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [40];
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb43e60) {
    FUN_144b3d300(&DAT_14cb43e60);
    if (DAT_14cb43e60 == -1) {
      FUN_1446ddc76(&DAT_14cb43e58,"NiagaraParameterStore",1);
      _Init_thread_footer(&DAT_14cb43e60);
    }
  }
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,*(undefined4 *)(param_2 + 8));
  uVar1 = FUN_1468ec2ac(&local_b0,DAT_14cb43e58);
  if ((char)uVar1 != '\0') {
    local_b0 = &PTR_LAB_14ae02690;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0xffffffff;
    uVar2 = FUN_146476ea8();
    FUN_14483b62e(uVar2,param_3,&local_b0,0);
    FUN_1400563e2(&local_b0,0);
    FUN_1402ae190(param_1,&local_b0);
    FUN_1481fa0b6(param_1);
    FUN_14006c2ae(&local_b0);
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fa3d8 FUN_1481fa3d8 body=39 status=ok
// SIG undefined FUN_1481fa3d8(void)

undefined4 * FUN_1481fa3d8(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1481fa400();
  return param_1;
}



// FUNCTION 1481fa400 FUN_1481fa400 body=167 status=ok
// SIG undefined FUN_1481fa400(void)

void FUN_1481fa400(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = DAT_14c8463f0;
  uStack_30 = DAT_14c8463f8;
  local_28 = DAT_14c846320;
  uStack_20 = DAT_14c846328;
  iVar2 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
    FUN_14820799a((longlong *)(param_1 + 8),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  lVar4 = (longlong)iVar2 * 0x50;
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar4);
  *puVar1 = (undefined4)local_28;
  puVar1[1] = local_28._4_4_;
  puVar1[2] = (undefined4)uStack_20;
  puVar1[3] = uStack_20._4_4_;
  *(undefined8 *)(lVar3 + lVar4) = local_38;
  ((undefined8 *)(lVar3 + lVar4))[1] = uStack_30;
  *(undefined1 *)(lVar3 + 0x20 + lVar4) = 1;
  *(undefined1 (*) [16])(lVar3 + 0x38 + lVar4) = (undefined1  [16])0x0;
  *(undefined1 *)(lVar3 + 0x48 + lVar4) = 0;
  puVar1 = (undefined4 *)(lVar3 + 0x28 + lVar4);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fa4a8 FUN_1481fa4a8 body=111 status=ok
// SIG undefined FUN_1481fa4a8(void)

void FUN_1481fa4a8(longlong param_1,undefined4 param_2,undefined4 *param_3)

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
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar2 + 1U) {
    FUN_148207864(param_1 + 0x18,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar11 = (longlong)iVar2 * 0x30;
  *(undefined8 *)(lVar3 + 0x20 + lVar11) = *(undefined8 *)(param_3 + 8);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[5];
  uVar9 = param_3[6];
  uVar10 = param_3[7];
  puVar1 = (undefined4 *)(lVar3 + 0x10 + lVar11);
  *puVar1 = param_3[4];
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  puVar1 = (undefined4 *)(lVar3 + lVar11);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  *(undefined4 *)(lVar3 + 0x28 + lVar11) = param_2;
  FUN_1481fa518(param_1,0,iVar2,0);
  return;
}



// FUNCTION 1481fa518 FUN_1481fa518 body=365 status=ok
// SIG undefined FUN_1481fa518(void)

void FUN_1481fa518(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pdVar3 = (double *)((longlong)param_2 * 0x50 + *(longlong *)(param_1 + 2));
  pdVar4 = (double *)((longlong)param_3 * 0x30 + *(longlong *)(param_1 + 6));
  uVar2 = FUN_1481fa93a(pdVar3,pdVar4,local_48);
  if (uVar2 == 0) {
    iVar1 = *(int *)(pdVar3 + 8);
    if ((param_4 < param_1[1]) && (*param_1 <= iVar1)) {
      FUN_1481fa9de(param_1,param_2);
      goto LAB_1481fa66d;
    }
    *(uint *)(pdVar3 + 8) = iVar1 + 1U;
    if (*(uint *)((longlong)pdVar3 + 0x44) < iVar1 + 1U) {
      FUN_1446f48e2(pdVar3 + 7,iVar1);
    }
    *(int *)((longlong)pdVar3[7] + (longlong)iVar1 * 4) = param_3;
  }
  else {
    if (uVar2 == 1) {
LAB_1481fa66d:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    if (((pdVar4[3] - pdVar4[1]) * (pdVar4[2] - *pdVar4)) /
        ((pdVar3[3] - pdVar3[1]) * (pdVar3[2] - *pdVar3)) <= 0.25) {
      uVar5 = 0;
      do {
        FUN_1481fa518(param_1,local_48[uVar5],param_3,param_4 + 1);
        uVar5 = uVar5 + 1;
      } while (uVar2 != uVar5);
    }
    else {
      iVar1 = *(int *)(pdVar3 + 8);
      *(uint *)(pdVar3 + 8) = iVar1 + 1U;
      if (*(uint *)((longlong)pdVar3 + 0x44) < iVar1 + 1U) {
        FUN_1446f48e2(pdVar3 + 7,iVar1);
      }
      *(int *)((longlong)pdVar3[7] + (longlong)iVar1 * 4) = param_3;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fa6a2 FUN_1481fa6a2 body=79 status=ok
// SIG undefined FUN_1481fa6a2(void)

void FUN_1481fa6a2(longlong param_1)

{
  FUN_1480da4cb(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1482078f8(param_1 + 8,0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_14820796a(param_1 + 0x18);
  }
  FUN_1481fa400(param_1);
  return;
}



// FUNCTION 1481fa6f2 FUN_1481fa6f2 body=15 status=ok
// SIG undefined FUN_1481fa6f2(void)

void FUN_1481fa6f2(longlong param_1,undefined8 param_2)

{
  FUN_1481fa702(*(undefined8 *)(param_1 + 8),param_1,param_2);
  return;
}



// FUNCTION 1481fa702 FUN_1481fa702 body=567 status=ok
// SIG undefined FUN_1481fa702(void)

ulonglong FUN_1481fa702(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 local_88 [40];
  int local_60;
  undefined4 local_5c;
  undefined4 local_58 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_88;
  uVar6 = (**(code **)(*param_3 + 0x28))(param_3);
  local_5c = 0xffffffff;
  iVar8 = 4;
  do {
    puVar3 = (ulonglong *)param_3[1];
    puVar1 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar1) {
      if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
        (**(code **)(*param_3 + 0x170))(param_3,&local_5c,4);
      }
      else {
        thunk_FUN_14572512c(param_3,&local_5c);
      }
    }
    else {
      local_5c = *(undefined4 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  local_60 = *(int *)(param_1 + 0x40);
  puVar3 = (ulonglong *)param_3[1];
  piVar2 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar2) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_60,4);
    }
    else {
      thunk_FUN_14572512c(param_3,&local_60);
    }
  }
  else {
    local_60 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar2;
  }
  if (0 < local_60) {
    lVar9 = 0;
    do {
      local_58[0] = *(undefined4 *)
                     (*(longlong *)(param_2 + 0x18) + 0x28 +
                     (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + lVar9 * 4) * 0x30);
      puVar3 = (ulonglong *)param_3[1];
      if (puVar3[1] < *puVar3 + 4) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,local_58,4);
        }
        else {
          thunk_FUN_14572512c(param_3,local_58);
        }
      }
      else {
        *puVar3 = *puVar3 + 4;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < local_60);
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    lVar9 = 0;
    do {
      uVar5 = FUN_1481fa702((longlong)*(int *)(param_1 + 0x28 + lVar9 * 4) * 0x50 +
                            *(longlong *)(param_2 + 8),param_2,param_3);
      local_58[lVar9] = uVar5;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 4);
    uVar7 = (**(code **)(*param_3 + 0x28))(param_3);
    (**(code **)(*param_3 + 0x1a0))(param_3,uVar6);
    lVar9 = 0;
    do {
      plVar4 = (longlong *)param_3[1];
      if ((undefined4 *)plVar4[1] < (undefined4 *)*plVar4 + 1) {
        if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
          (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)((longlong)local_58 + lVar9),4);
        }
        else {
          thunk_FUN_14572512c(param_3);
        }
      }
      else {
        *(undefined4 *)((longlong)local_58 + lVar9) = *(undefined4 *)*plVar4;
        *plVar4 = *plVar4 + 4;
      }
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x10);
    (**(code **)(*param_3 + 0x1a0))(param_3,uVar7);
  }
  if ((local_40 ^ (ulonglong)local_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 >> 2 & 0xffffffff;
}



// FUNCTION 1481fa93a FUN_1481fa93a body=163 status=ok
// SIG undefined FUN_1481fa93a(void)

ulonglong FUN_1481fa93a(double *param_1,double *param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 9) == '\x01') {
    dVar8 = (param_1[1] + param_1[3]) * 0.5;
    dVar9 = (*param_1 + param_1[2]) * 0.5;
    dVar1 = *param_2;
    dVar2 = param_2[1];
    uVar5 = 0;
    dVar3 = param_2[2];
    dVar4 = param_2[3];
    if ((dVar1 <= dVar9) && (dVar2 <= dVar8)) {
      *param_3 = *(undefined4 *)(param_1 + 6);
      uVar5 = 1;
    }
    uVar6 = uVar5;
    if ((dVar9 <= dVar3) && (dVar2 <= dVar8)) {
      uVar6 = (ulonglong)((int)uVar5 + 1);
      param_3[uVar5] = *(undefined4 *)((longlong)param_1 + 0x34);
    }
    uVar7 = uVar6;
    if ((dVar1 <= dVar9) && (dVar8 <= dVar4)) {
      uVar7 = (ulonglong)((int)uVar6 + 1);
      param_3[uVar6] = *(undefined4 *)(param_1 + 5);
    }
    uVar5 = uVar7;
    if ((dVar9 <= dVar3) && (dVar8 <= dVar4)) {
      uVar5 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined4 *)((longlong)param_1 + 0x2c);
    }
  }
  return uVar5;
}



// FUNCTION 1481fa9de FUN_1481fa9de body=1361 status=ok
// SIG undefined FUN_1481fa9de(void)

void FUN_1481fa9de(longlong param_1,int param_2)

{
  double *pdVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  double *pdVar14;
  longlong *plVar15;
  int iVar16;
  int *piVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined1 auStack_158 [40];
  longlong *local_130;
  double *local_128;
  int *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8 [6];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar16 = *(int *)(param_1 + 0x10);
  if (iVar16 < -4) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16 + 4);
  }
  local_130 = (longlong *)(param_1 + 8);
  uVar9 = *(uint *)(param_1 + 0x14);
  if ((int)uVar9 < iVar16 + 4) {
    FUN_1482078f8(local_130);
    iVar16 = *(int *)(param_1 + 0x10);
    uVar9 = *(uint *)(param_1 + 0x14);
  }
  plVar15 = local_130;
  lVar10 = *(longlong *)(param_1 + 8);
  lVar11 = (longlong)param_2 * 0x50;
  pdVar1 = (double *)(lVar10 + lVar11);
  dVar4 = *(double *)(lVar10 + 0x18 + lVar11);
  dVar5 = *(double *)(lVar10 + 8 + lVar11);
  dVar19 = *(double *)(lVar10 + 0x10 + lVar11);
  dVar8 = (dVar4 - dVar5) * 0.5;
  dVar18 = (dVar19 - *(double *)(lVar10 + lVar11)) * 0.5;
  dVar4 = (dVar4 + dVar5) * 0.5;
  dVar5 = (dVar19 + *(double *)(lVar10 + lVar11)) * 0.5;
  local_f8 = *(undefined8 *)(lVar10 + lVar11);
  uStack_f0 = ((undefined8 *)(lVar10 + lVar11))[1];
  puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar11);
  local_108 = *puVar2;
  uStack_104 = puVar2[1];
  uStack_100 = puVar2[2];
  uStack_fc = puVar2[3];
  *(uint *)(param_1 + 0x10) = iVar16 + 1U;
  if (uVar9 < iVar16 + 1U) {
    FUN_14820799a(local_130,iVar16);
    lVar10 = *plVar15;
  }
  lVar11 = (longlong)iVar16 * 0x50;
  *(double *)(lVar10 + lVar11) = dVar5 - dVar18;
  *(double *)(lVar10 + 8 + lVar11) = dVar4;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar5 + 0.0;
  *(double *)(lVar10 + 0x18 + lVar11) = dVar4 + dVar8;
  *(undefined1 *)(lVar10 + 0x20 + lVar11) = 1;
  puVar3 = (undefined8 *)(lVar10 + 0x38 + lVar11);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(lVar10 + 0x48 + lVar11) = 0;
  puVar2 = (undefined4 *)(lVar10 + 0x28 + lVar11);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(int *)(pdVar1 + 5) = iVar16;
  iVar16 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar16 + 1U) {
    FUN_14820799a(local_130,iVar16);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  lVar11 = (longlong)iVar16 * 0x50;
  *(double *)(lVar10 + lVar11) = dVar5;
  *(double *)(lVar10 + 8 + lVar11) = dVar4;
  puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar11);
  *puVar2 = local_108;
  puVar2[1] = uStack_104;
  puVar2[2] = uStack_100;
  puVar2[3] = uStack_fc;
  *(undefined1 *)(lVar10 + 0x20 + lVar11) = 1;
  puVar3 = (undefined8 *)(lVar10 + 0x38 + lVar11);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(lVar10 + 0x48 + lVar11) = 0;
  puVar2 = (undefined4 *)(lVar10 + 0x28 + lVar11);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(int *)((longlong)pdVar1 + 0x2c) = iVar16;
  iVar16 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar16 + 1U) {
    FUN_14820799a(local_130,iVar16);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  lVar11 = (longlong)iVar16 * 0x50;
  puVar2 = (undefined4 *)(lVar10 + lVar11);
  *puVar2 = (undefined4)local_f8;
  puVar2[1] = local_f8._4_4_;
  puVar2[2] = (undefined4)uStack_f0;
  puVar2[3] = uStack_f0._4_4_;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar5;
  *(double *)(lVar10 + 0x18 + lVar11) = dVar4;
  *(undefined1 *)(lVar10 + 0x20 + lVar11) = 1;
  puVar3 = (undefined8 *)(lVar10 + 0x38 + lVar11);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(lVar10 + 0x48 + lVar11) = 0;
  puVar2 = (undefined4 *)(lVar10 + 0x28 + lVar11);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(int *)(pdVar1 + 6) = iVar16;
  iVar16 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar16 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar16 + 1U) {
    FUN_14820799a(local_130,iVar16);
  }
  lVar10 = *local_130;
  lVar11 = (longlong)iVar16 * 0x50;
  *(double *)(lVar10 + lVar11) = dVar5;
  *(double *)(lVar10 + 8 + lVar11) = dVar4 - dVar8;
  *(double *)(lVar10 + 0x10 + lVar11) = dVar18 + dVar5;
  *(double *)(lVar10 + 0x18 + lVar11) = dVar4 + 0.0;
  *(undefined1 *)(lVar10 + 0x20 + lVar11) = 1;
  puVar3 = (undefined8 *)(lVar10 + 0x38 + lVar11);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(lVar10 + 0x48 + lVar11) = 0;
  puVar2 = (undefined4 *)(lVar10 + 0x28 + lVar11);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  *(int *)((longlong)pdVar1 + 0x34) = iVar16;
  *(undefined1 *)(pdVar1 + 9) = 1;
  local_128 = pdVar1 + 7;
  local_118 = 0.0;
  uStack_110 = 0.0;
  if ((longlong)*(int *)(pdVar1 + 8) != 0) {
    piVar17 = (int *)pdVar1[7];
    local_120 = piVar17 + *(int *)(pdVar1 + 8);
    do {
      iVar16 = *piVar17;
      pdVar14 = (double *)((longlong)iVar16 * 0x30 + *(longlong *)(param_1 + 0x18));
      uVar9 = FUN_1481fa93a(pdVar1,pdVar14,local_e8);
      if (uVar9 == 1) {
        lVar10 = *local_130 + (longlong)local_e8[0] * 0x50;
        plVar15 = (longlong *)(lVar10 + 0x38);
        iVar13 = *(int *)(lVar10 + 0x40);
        *(uint *)(lVar10 + 0x40) = iVar13 + 1U;
        if (*(uint *)(lVar10 + 0x44) < iVar13 + 1U) {
LAB_1481fada6:
          FUN_1446f48e2(plVar15,iVar13);
        }
LAB_1481fadb1:
        *(int *)(*plVar15 + (longlong)iVar13 * 4) = iVar16;
      }
      else {
        dVar4 = *pdVar1;
        dVar5 = pdVar1[1];
        dVar19 = pdVar14[1];
        if (pdVar14[1] <= dVar5) {
          dVar19 = dVar5;
        }
        dVar18 = *pdVar14;
        if (*pdVar14 <= dVar4) {
          dVar18 = dVar4;
        }
        dVar8 = pdVar1[3];
        dVar20 = pdVar14[3];
        if (dVar8 <= pdVar14[3]) {
          dVar20 = dVar8;
        }
        dVar6 = pdVar1[2];
        dVar7 = pdVar14[2];
        uVar21 = SUB84(dVar7,0);
        uVar22 = (undefined4)((ulonglong)dVar7 >> 0x20);
        if (dVar6 <= dVar7) {
          uVar21 = SUB84(dVar6,0);
          uVar22 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        uVar23 = SUB84(dVar19,0);
        uVar24 = (undefined4)((ulonglong)dVar19 >> 0x20);
        if (dVar19 <= dVar20) {
          uVar23 = SUB84(dVar20,0);
          uVar24 = (undefined4)((ulonglong)dVar20 >> 0x20);
        }
        dVar20 = dVar18;
        if (dVar18 <= (double)CONCAT44(uVar22,uVar21)) {
          dVar20 = (double)CONCAT44(uVar22,uVar21);
        }
        if (0.25 < (((double)CONCAT44(uVar24,uVar23) - dVar19) * (dVar20 - dVar18)) /
                   ((dVar8 - dVar5) * (dVar6 - dVar4))) {
          iVar13 = (int)uStack_110;
          uVar9 = (int)uStack_110 + 1;
          uStack_110 = (double)CONCAT44(uStack_110._4_4_,uVar9);
          if (uStack_110._4_4_ < uVar9) {
            plVar15 = &local_118;
            goto LAB_1481fada6;
          }
          plVar15 = &local_118;
          goto LAB_1481fadb1;
        }
        if (uVar9 != 0) {
          uVar12 = 0;
          do {
            lVar10 = *local_130 + (longlong)local_e8[uVar12] * 0x50;
            iVar13 = *(int *)(lVar10 + 0x40);
            *(uint *)(lVar10 + 0x40) = iVar13 + 1U;
            if (*(uint *)(lVar10 + 0x44) < iVar13 + 1U) {
              FUN_1446f48e2((longlong *)(lVar10 + 0x38),iVar13);
            }
            *(int *)(*(longlong *)(lVar10 + 0x38) + (longlong)iVar13 * 4) = iVar16;
            uVar12 = uVar12 + 1;
          } while (uVar9 != uVar12);
        }
      }
      piVar17 = piVar17 + 1;
    } while (piVar17 != local_120);
  }
  local_e8[0] = (int)local_118;
  local_e8[1] = local_118._4_4_;
  local_e8[2] = (int)uStack_110;
  local_e8[3] = uStack_110._4_4_;
  dVar4 = *local_128;
  dVar5 = local_128[1];
  *(int *)local_128 = (int)local_118;
  *(undefined4 *)((longlong)local_128 + 4) = local_118._4_4_;
  *(int *)(local_128 + 1) = (int)uStack_110;
  *(uint *)((longlong)local_128 + 0xc) = uStack_110._4_4_;
  local_118 = dVar4;
  uStack_110 = dVar5;
  if (dVar4 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481faf36 FUN_1481faf36 body=77 status=ok
// SIG undefined FUN_1481faf36(void)

void FUN_1481faf36(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ae2f4f0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481faf6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1481fafd0 FUN_1481fafd0 body=47 status=ok
// SIG undefined FUN_1481fafd0(void)

void FUN_1481fafd0(longlong *param_1)

{
  FUN_14042b052();
  (**(code **)(*param_1 + 0x340))(param_1,0);
  FUN_14042b016(param_1 + 0x47);
  return;
}



// FUNCTION 1481fb000 FUN_1481fb000 body=89 status=ok
// SIG undefined FUN_1481fb000(void)

longlong *
FUN_1481fb000(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14001cc68(0x390,0x10);
  FUN_1481dcd86(plVar1,param_2,param_1,param_3);
  (**(code **)(*plVar1 + 8))(plVar1,param_1,param_3,param_4);
  return plVar1;
}



// FUNCTION 1481fb05e FUN_1481fb05e body=206 status=ok
// SIG undefined FUN_1481fb05e(void)

void FUN_1481fb05e(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(undefined4 *)(param_1 + 200);
    local_40 = *(undefined8 *)(param_1 + 0xc0);
    local_30 = 0;
    uStack_28 = 0;
    lVar2 = FUN_144aee8ce(param_2,&local_40);
    if (lVar2 == 0) {
LAB_1481fb0d1:
      lVar2 = 0;
    }
    else {
      lVar3 = FUN_1402d2740();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) != lVar3 + 0x30)) goto LAB_1481fb0d1;
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) goto LAB_1481fb0ee;
  }
  lVar2 = *(longlong *)(param_1 + 0xb8);
LAB_1481fb0ee:
  iVar1 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
    FUN_144769b64(param_3,iVar1);
  }
  *(longlong *)(*param_3 + (longlong)iVar1 * 8) = lVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fb12e FUN_1481fb12e body=547 status=ok
// SIG undefined FUN_1481fb12e(void)

void FUN_1481fb12e(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x348))(param_1,*(undefined1 *)((longlong)param_1 + 0xcc),0);
  uVar1 = FUN_144741050(param_1 + 0x22);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x114);
  FUN_144830b78(local_2c,uVar1);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x51) = 1;
    *(undefined4 *)((longlong)param_1 + 0x28c) = 0xffffffff;
  }
  else {
    FUN_140bec572(param_1 + 0x51,param_2,uVar2);
  }
  uVar1 = FUN_144741050(param_1 + 0x29);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x14c);
  FUN_144830b78(local_2c,uVar1);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x52) = 1;
    *(undefined4 *)((longlong)param_1 + 0x294) = 0xffffffff;
  }
  else {
    FUN_141291c16(param_1 + 0x52,param_2,uVar2);
  }
  uVar1 = FUN_144741050(param_1 + 0x30);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x184);
  FUN_144830b78(local_2c,uVar1);
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x53) = 1;
    *(undefined4 *)((longlong)param_1 + 0x29c) = 0xffffffff;
  }
  else {
    FUN_140aa948e(param_1 + 0x53,param_2,uVar2);
  }
  uVar1 = FUN_144741050(param_1 + 0x37);
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x1bc);
  FUN_144830b78(local_2c,uVar1);
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  }
  else {
    FUN_140a6f82a(param_1 + 0x54,param_2,uVar2);
  }
  uVar1 = FUN_144741050(param_1 + 0x3e);
  uVar2 = *(undefined8 *)((longlong)param_1 + 500);
  FUN_144830b78(local_2c,uVar1);
  if (param_2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2a4) = 0xffffffff;
  }
  else {
    FUN_140a6f82a((undefined4 *)((longlong)param_1 + 0x2a4),param_2,uVar2);
  }
  uVar2 = FUN_144741050(param_1 + 0x45);
  FUN_144830b78(local_2c,uVar2);
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  *(undefined1 *)(param_1 + 0x55) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2ac) = 0xffffffff;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fb36a FUN_1481fb36a body=91 status=ok
// SIG undefined FUN_1481fb36a(void)

void FUN_1481fb36a(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140349a5c();
  uVar1 = FUN_144a84c36();
  lVar2 = FUN_144a78ede(param_1,uVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x240) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x238);
    lVar3 = (longlong)*(int *)(param_1 + 0x240) * 0x2c;
    do {
      FUN_140349dfc(lVar4,lVar2);
      lVar4 = lVar4 + 0x2c;
      lVar3 = lVar3 + -0x2c;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 1481fb3c6 FUN_1481fb3c6 body=341 status=ok
// SIG undefined FUN_1481fb3c6(void)

ulonglong FUN_1481fb3c6(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 extraout_AL;
  undefined1 uVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  undefined7 uVar6;
  undefined8 *puVar5;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14021f064();
  iVar1 = *(int *)(param_1 + 0xb0);
  uVar3 = extraout_AL;
  uVar6 = extraout_var;
  if ((longlong)iVar1 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xa8);
    lVar8 = 0;
    do {
      lVar2 = *(longlong *)(lVar7 + lVar8);
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x35) & 3) == 1)) {
        local_68 = *(undefined4 *)(lVar2 + 0x28);
        local_70 = *(undefined8 *)(lVar2 + 0x20);
        local_60 = 0;
        uStack_58 = 0;
        local_78 = 0;
        uVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
        if (local_60 != 0) {
          uVar4 = FUN_1400020a8();
        }
        uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
        uVar3 = 1;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if ((longlong)*(int *)(param_1 + 0x240) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x238);
    lVar8 = (longlong)*(int *)(param_1 + 0x240) * 0x2c;
    do {
      puVar5 = (undefined8 *)FUN_144b3458e(lVar7);
      local_70 = *puVar5;
      local_68 = *(undefined4 *)(puVar5 + 1);
      local_60 = 0;
      uStack_58 = 0;
      local_78 = 0;
      uVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_70,0,1);
      if (local_60 != 0) {
        uVar4 = FUN_1400020a8();
      }
      lVar7 = lVar7 + 0x2c;
      lVar8 = lVar8 + -0x2c;
    } while (lVar8 != 0);
    uVar6 = (undefined7)((ulonglong)uVar4 >> 8);
    uVar3 = 1;
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar6,uVar3) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fb51c FUN_1481fb51c body=266 status=ok
// SIG undefined FUN_1481fb51c(void)

undefined8 FUN_1481fb51c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb44140) {
    FUN_144b3d300(&DAT_14cb44140);
    if (DAT_14cb44140 == -1) {
      uVar1 = FUN_140851d9a();
      DAT_14cb44138 = thunk_FUN_140277b32(uVar1,0,L"/Script/Engine.ETickingGroup",0);
      _Init_thread_footer(&DAT_14cb44140);
    }
  }
  FUN_1401cfb1c(DAT_14cb44138,local_40,*(undefined1 *)(param_1 + 8));
  FUN_140ba7826(local_30,L"FNiagaraWorldManagerTickFunction::Tick(",local_40);
  FUN_144a882a8(param_2,local_30,&DAT_149e06144);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fb628 FUN_1481fb628 body=38 status=ok
// SIG undefined FUN_1481fb628(void)

undefined8 FUN_1481fb628(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"FNiagaraWorldManagerTickFunction",1);
  return param_2;
}



// FUNCTION 1481fb64e FUN_1481fb64e body=339 status=ok
// SIG undefined FUN_1481fb64e(void)

void FUN_1481fb64e(char param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  uVar2 = local_70;
  if (DAT_14cb444a0 != param_1) {
    FUN_147bebc26();
    local_60 = 0x100000000;
    uStack_58 = &DAT_14cb44460;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    DAT_14cb444a0 = param_1;
    if (DAT_14cb44478 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar4 = DAT_14cb44478;
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar2 = local_70;
    local_88 = &DAT_14cb44450;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if ((local_70._4_4_ != iVar4) || (uStack_58 != &DAT_14cb44460)) {
      iVar3 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar1 = *(longlong *)(*local_88 + 8 + (longlong)iVar3 * 0x18);
        if (lVar1 != 0) {
          FUN_14012d6b4(lVar1,0x3c23d70a,0);
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar3 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_88 != &DAT_14cb44450 ||
               ((undefined4 *)CONCAT44(uStack_74,uStack_78) != &DAT_14cb44460 ||
               local_70._4_4_ != iVar4));
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fb7a2 FUN_1481fb7a2 body=32 status=ok
// SIG undefined FUN_1481fb7a2(void)

undefined8 FUN_1481fb7a2(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FNiagaraWorldManager");
  return param_2;
}



// FUNCTION 1481fb7c2 FUN_1481fb7c2 body=561 status=ok
// SIG undefined FUN_1481fb7c2(void)

longlong FUN_1481fb7c2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(ulonglong *)(param_2 + 0x668);
  lVar4 = 0;
  if ((uVar1 != 0) && (DAT_14c762a3c != 0)) {
    local_38 = uVar1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
    uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = (longlong *)FUN_148207c90(param_1 + 0x1c18,uVar2 >> 0x10 ^ uVar2,&local_38);
    lVar4 = *plVar3;
    if (lVar4 == 0) {
      lVar4 = FUN_1481fb9f4(*(undefined8 *)(param_1 + 0x10));
      if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar4);
      }
      *plVar3 = lVar4;
      FUN_1409d23de(lVar4,uVar1,1);
      FUN_140388f42(*plVar3,0);
      *(byte *)(*plVar3 + 0x9e) = *(byte *)(*plVar3 + 0x9e) | 8;
      FUN_1439f4d14(*plVar3,0);
      *(byte *)(*plVar3 + 0x9e) = *(byte *)(*plVar3 + 0x9e) | 4;
      FUN_140b506dc(*plVar3,*(undefined8 *)(param_1 + 0x10),0);
      FUN_14057a3b2(*plVar3,1,1,1);
      local_48 = DAT_14c846508;
      local_58 = DAT_14c8464f8;
      uStack_50 = DAT_14c846500;
      local_78 = (undefined4)DAT_14c8464e0;
      uStack_74 = DAT_14c8464e0._4_4_;
      uStack_70 = (undefined4)DAT_14c8464e8;
      uStack_6c = DAT_14c8464e8._4_4_;
      local_68 = DAT_14c8464f0;
      local_a0 = 0;
      local_a8 = 0;
      FUN_14084af84(*plVar3,&local_78,&local_58,0);
      local_88 = DAT_14c846520;
      local_98 = (undefined4)DAT_14c846510;
      uStack_94 = DAT_14c846510._4_4_;
      uStack_90 = (undefined4)DAT_14c846518;
      uStack_8c = DAT_14c846518._4_4_;
      (**(code **)(*(longlong *)*plVar3 + 0x478))();
      (**(code **)(*(longlong *)*plVar3 + 0x2a8))((longlong *)*plVar3,1);
      FUN_14810e5a6(*plVar3,1);
      FUN_14810e756(*plVar3,1,*(float *)(*(longlong *)(uVar1 + 0x4e0) + 0x34) * 0.999);
      FUN_14072c20e(param_2 + 0x678,*plVar3 + 0x678,0,0);
      lVar4 = *plVar3;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fb9f4 FUN_1481fb9f4 body=175 status=ok
// SIG undefined FUN_1481fb9f4(void)

undefined8 FUN_1481fb9f4(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14143f1a6();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fbaa4 FUN_1481fbaa4 body=227 status=ok
// SIG undefined FUN_1481fbaa4(void)

void FUN_1481fbaa4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x400);
    lVar6 = (longlong)*(int *)(param_1 + 0x408) << 4;
    do {
      if ((undefined8 *)*plVar7 == param_2) {
        if (plVar7 != (longlong *)0x0) {
          return;
        }
        break;
      }
      plVar7 = plVar7 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)param_2[1];
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    uVar8 = 0;
  }
  else {
    iVar5 = (int)plVar7[1];
    uVar8 = 0;
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_1481fbb0d;
      }
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar8 = *param_2;
    bVar3 = false;
  }
LAB_1481fbb0d:
  iVar5 = *(int *)(param_1 + 0x408);
  *(uint *)(param_1 + 0x408) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x40c) < iVar5 + 1U) {
    FUN_1401b1f42((longlong *)(param_1 + 0x400),iVar5);
  }
  lVar6 = *(longlong *)(param_1 + 0x400);
  *(undefined8 *)(lVar6 + (longlong)iVar5 * 0x10) = uVar8;
  *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar7;
  if (!bVar3) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481fbb73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x10))(plVar7);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1481fbb88 FUN_1481fbb88 body=627 status=ok
// SIG undefined FUN_1481fbb88(void)

void FUN_1481fbb88(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  int local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1468161aa(param_2,L"=== FNiagaraWorldManager Dumping Detailed Information");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb44150) && (FUN_144b3d300(&DAT_14cb44150), DAT_14cb44150 == -1)) {
    uVar3 = FUN_140851d9a();
    DAT_14cb44148 = thunk_FUN_140277b32(uVar3,0,L"/Script/Engine.ETickingGroup",0);
    _Init_thread_footer(&DAT_14cb44150);
  }
  uVar9 = 0;
  do {
    lVar4 = uVar9 * 0x50;
    if (*(int *)(param_1 + 0x1c8 + lVar4) != *(int *)(param_1 + 500 + lVar4)) {
      FUN_1401cfb1c(DAT_14cb44148,&local_90,uVar9 & 0xffffffff);
      plVar6 = (longlong *)&DAT_149dfb77a;
      if (local_88 != 0) {
        plVar6 = local_90;
      }
      FUN_140047918(param_2,L"TickingGroup %s",plVar6);
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar5 = (longlong *)(lVar4 + param_1 + 0x1c0);
      plVar6 = plVar5 + 2;
      local_68 = (undefined2 *)0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = plVar6;
      if ((int)plVar5[5] == 0) {
        iVar8 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar8 = (int)plVar5[5];
      }
      local_88 = (int)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (int)uStack_60;
      uStack_7c = uStack_60._4_4_;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_78 = local_58;
      uVar3 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar2 = local_78._4_4_;
      local_90 = plVar5;
      if ((local_78._4_4_ != iVar8) || (local_78 = local_58, uStack_60 != plVar6)) {
        do {
          local_78 = uVar3;
          lVar4 = *(longlong *)(*local_90 + 8 + (longlong)iVar2 * 0x20);
          if (((*(byte *)(lVar4 + 0x30) & 1) != 0) &&
             (((*(longlong *)(lVar4 + 0x28) != 0 &&
               (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 != 0)) &&
              ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)))) {
            FUN_144750a86(lVar1,&local_68,0,0);
            puVar7 = &DAT_149dfb77a;
            if ((int)uStack_60 != 0) {
              puVar7 = local_68;
            }
            FUN_140047918(param_2,L"\tSimulation %s",puVar7);
            if (local_68 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_1481f673c(lVar4,param_2);
          }
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar2 = local_78._4_4_;
          uVar3 = local_78;
        } while (local_90 != plVar5 ||
                 ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar6 || local_78._4_4_ != iVar8));
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 7);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fbdfc FUN_1481fbdfc body=298 status=ok
// SIG undefined FUN_1481fbdfc(void)

void FUN_1481fbdfc(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
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
  uVar2 = local_60;
  if (DAT_14c762a4c != 0) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb44460;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb44478 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb44478;
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_78 = &DAT_14cb44450;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb44460)) {
      iVar3 = local_60._4_4_;
      local_60 = uVar2;
      do {
        lVar1 = *(longlong *)(*local_78 + 8 + (longlong)iVar3 * 0x18);
        if (lVar1 != 0) {
          FUN_1481fbf28(lVar1,param_1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar3 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != &DAT_14cb44450 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb44460 ||
               local_60._4_4_ != iVar4));
    }
  }
  local_60 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fbf28 FUN_1481fbf28 body=101 status=ok
// SIG undefined FUN_1481fbf28(void)

void FUN_1481fbf28(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if ((((((DAT_14c762a4c != 0) && (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) &&
        ((*(byte *)(lVar2 + 0x153) & 0x40) != 0)) &&
       (((*(byte *)(lVar2 + 0x155) & 0x20) == 0 && (*(char *)(param_1 + 0x1c01) == '\0')))) &&
      (*(char *)(param_1 + 0x1c02) == '\0')) &&
     ((bVar1 = *(byte *)(lVar2 + 0x152), bVar1 == 1 ||
      ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    FUN_14012fc50(*(undefined8 *)(param_1 + 0x1b30));
    return;
  }
  return;
}



// FUNCTION 1481fbf8e thunk_FUN_1481fbf94 body=5 status=ok
// SIG undefined thunk_FUN_1481fbf94(void)

void thunk_FUN_1481fbf94(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  lVar1 = *param_1;
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)*plVar3)(plVar3,puVar2 + 4);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    LOCK();
    *DAT_14cb44110 = puVar2;
    DAT_14cb44110 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 1481fbf94 FUN_1481fbf94 body=100 status=ok
// SIG undefined FUN_1481fbf94(void)

void FUN_1481fbf94(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar2 = 0;
  lVar1 = *param_1;
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    plVar3 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[2];
    }
    (**(code **)*plVar3)(plVar3,puVar2 + 4);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    UNLOCK();
    LOCK();
    *DAT_14cb44110 = puVar2;
    DAT_14cb44110 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 1481fbff8 FUN_1481fbff8 body=629 status=ok
// SIG undefined FUN_1481fbff8(void)

void FUN_1481fbff8(longlong param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar3 = FUN_14806bc5a(param_2);
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 2) {
      *(undefined1 *)(lVar3 + 0x94) = 1;
      *(undefined4 *)(lVar3 + 0x98) = *(undefined4 *)(param_1 + 0xe4);
      FUN_144a7484c(param_1 + 0x90,&local_58);
      *(float *)(lVar3 + 0xa0) = (float)local_58;
      *(float *)(lVar3 + 0xa4) = (float)local_50;
      *(float *)(lVar3 + 0xa8) = (float)local_48;
      *(float *)(lVar3 + 0xac) = (float)local_40;
      if (*(int *)(param_1 + 0x78) == 1) {
        uVar4 = *(undefined4 *)(param_1 + 0x88);
        uVar7 = uVar4;
      }
      else {
        uVar7 = *(undefined4 *)(param_1 + 0x88);
        uVar4 = *(undefined4 *)(param_1 + 0x8c);
      }
      *(undefined4 *)(lVar3 + 0xb0) = 0xffffffff;
      *(undefined4 *)(lVar3 + 0xb4) = uVar7;
      *(undefined4 *)(lVar3 + 0xb8) = uVar4;
      *(undefined4 *)(lVar3 + 0xbc) = *(undefined4 *)(param_1 + 0xa8);
      *(undefined4 *)(lVar3 + 0xc0) = *(undefined4 *)(param_1 + 0xac);
      fVar5 = 0.0;
      if (*(char *)(param_1 + 0xdc) == '\x01') {
        fVar5 = *(float *)(param_1 + 0xe0);
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
      *(float *)(lVar3 + 0xc4) = fVar5;
    }
    else {
      if (iVar2 == 1) {
        *(undefined1 *)(lVar3 + 200) = 1;
        *(undefined4 *)(lVar3 + 0xcc) = *(undefined4 *)(param_1 + 0xe4);
        if (*(int *)(param_1 + 0xb8) == 1) {
          uVar4 = *(undefined4 *)(param_1 + 200);
          uVar7 = uVar4;
        }
        else {
          uVar7 = *(undefined4 *)(param_1 + 200);
          uVar4 = *(undefined4 *)(param_1 + 0xcc);
        }
        *(undefined4 *)(lVar3 + 0xd0) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0xd4) = uVar7;
        *(undefined4 *)(lVar3 + 0xd8) = uVar4;
        *(undefined8 *)(lVar3 + 0xe0) = *(undefined8 *)(param_1 + 0xd0);
        *(undefined4 *)(lVar3 + 0xe8) = *(undefined4 *)(param_1 + 0xd8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x40) == 1) {
          fVar5 = *(float *)(param_1 + 0x50);
          fVar8 = *(float *)(param_1 + 0x54);
          fVar6 = *(float *)(param_1 + 0x58);
          fVar9 = fVar6;
          fVar10 = fVar8;
          fVar11 = fVar5;
        }
        else {
          fVar11 = *(float *)(param_1 + 0x50);
          fVar10 = *(float *)(param_1 + 0x54);
          fVar9 = *(float *)(param_1 + 0x58);
          fVar5 = *(float *)(param_1 + 0x5c);
          fVar8 = *(float *)(param_1 + 0x60);
          fVar6 = *(float *)(param_1 + 100);
        }
        *(undefined4 *)(lVar3 + 0x18) = *(undefined4 *)(param_1 + 0xe4);
        fVar1 = *(float *)(param_1 + 0x68);
        *(float *)(lVar3 + 0x20) = fVar11 * fVar1 + *(float *)(lVar3 + 0x20);
        *(float *)(lVar3 + 0x24) = fVar10 * fVar1 + *(float *)(lVar3 + 0x24);
        *(float *)(lVar3 + 0x28) = fVar9 * fVar1 + *(float *)(lVar3 + 0x28);
        fVar11 = *(float *)(param_1 + 0x68);
        *(float *)(lVar3 + 0x2c) = fVar5 * fVar11 + *(float *)(lVar3 + 0x2c);
        *(float *)(lVar3 + 0x30) = fVar8 * fVar11 + *(float *)(lVar3 + 0x30);
        *(float *)(lVar3 + 0x34) = fVar6 * fVar11 + *(float *)(lVar3 + 0x34);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fc274 FUN_1481fc274 body=71 status=ok
// SIG undefined FUN_1481fc274(void)

void FUN_1481fc274(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 8) == 1) {
    param_2[3] = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  else {
    param_2[3] = *(undefined4 *)(param_1 + 0x20);
    *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x24);
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  param_2[6] = uVar1;
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 1481fc2bc FUN_1481fc2bc body=46 status=ok
// SIG undefined FUN_1481fc2bc(void)

void FUN_1481fc2bc(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
  }
  *param_2 = 0xffffffff;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  return;
}



// FUNCTION 1481fc2ea FUN_1481fc2ea body=551 status=ok
// SIG undefined FUN_1481fc2ea(void)

float * FUN_1481fc2ea(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar3 = *param_2;
  fVar9 = param_2[1];
  fVar6 = fVar3 / 3.0;
  fVar4 = param_2[2];
  fVar10 = fVar9 / 3.0;
  fVar8 = fVar4 / 3.0;
  auVar11 = roundss(ZEXT816(0),ZEXT416((uint)(fVar4 + fVar6 + fVar10 + fVar8)),9);
  auVar12 = roundss(ZEXT816(0),ZEXT416((uint)(fVar6 + fVar9 + fVar10 + fVar8)),9);
  auVar5 = roundss(ZEXT816(0),ZEXT416((uint)(fVar8 + fVar10 + fVar3 + fVar6)),9);
  fVar13 = auVar5._0_4_ / 6.0;
  fVar6 = auVar12._0_4_ / 6.0;
  fVar8 = auVar11._0_4_ / 6.0;
  fVar7 = ((auVar11._0_4_ - fVar13) - fVar6) - fVar8;
  fVar10 = ((auVar12._0_4_ - fVar13) - fVar6) - fVar8;
  fVar8 = ((auVar5._0_4_ - fVar13) - fVar6) - fVar8;
  fVar6 = (float)(-(uint)(fVar3 - fVar8 <= fVar4 - fVar7) & 0x3f800000);
  fVar4 = (float)(-(uint)(fVar4 - fVar7 <= fVar9 - fVar10) & 0x3f800000);
  fVar3 = (float)(-(uint)(fVar9 - fVar10 <= fVar3 - fVar8) & 0x3f800000);
  fVar14 = 1.0 - fVar4;
  fVar15 = 1.0 - fVar3;
  fVar13 = 1.0 - fVar6;
  fVar9 = fVar6;
  if (fVar14 <= fVar6) {
    fVar9 = fVar14;
  }
  fVar1 = fVar4;
  if (fVar15 <= fVar4) {
    fVar1 = fVar15;
  }
  fVar2 = fVar3;
  if (fVar13 <= fVar3) {
    fVar2 = fVar13;
  }
  if (fVar6 <= fVar14) {
    fVar6 = fVar14;
  }
  if (fVar4 <= fVar15) {
    fVar4 = fVar15;
  }
  if (fVar3 <= fVar13) {
    fVar3 = fVar13;
  }
  *param_1 = fVar8;
  param_1[1] = fVar10;
  param_1[2] = fVar7;
  param_1[3] = fVar2 + -0.16666667 + fVar8;
  param_1[4] = fVar1 + -0.16666667 + fVar10;
  param_1[5] = fVar9 + -0.16666667 + fVar7;
  param_1[6] = fVar3 + -0.33333334 + fVar8;
  param_1[7] = fVar4 + -0.33333334 + fVar10;
  param_1[8] = fVar6 + -0.33333334 + fVar7;
  param_1[9] = fVar8 + 0.5;
  param_1[10] = fVar10 + 0.5;
  param_1[0xb] = fVar7 + 0.5;
  return param_1;
}



// FUNCTION 1481fc511 FUN_1481fc511 body=412 status=ok
// SIG undefined FUN_1481fc511(void)

float * FUN_1481fc511(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[0xb] * param_2[0xb] + param_2[9] * param_2[9] + param_2[10] * param_2[10];
  fVar2 = param_2[8] * param_2[8] + param_2[6] * param_2[6] + param_2[7] * param_2[7];
  fVar3 = param_2[5] * param_2[5] + param_2[3] * param_2[3] + param_2[4] * param_2[4];
  fVar4 = param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1];
  fVar1 = fVar1 + fVar1;
  fVar2 = fVar2 + fVar2;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (1.0 <= fVar4) {
    fVar4 = 1.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  *param_1 = (((3.0 - fVar4) * fVar4 + -3.0) * fVar4 + 1.0) * 2.7306666;
  param_1[1] = (((3.0 - fVar3) * fVar3 + -3.0) * fVar3 + 1.0) * 2.7306666;
  param_1[2] = (((3.0 - fVar2) * fVar2 + -3.0) * fVar2 + 1.0) * 2.7306666;
  param_1[3] = (((3.0 - fVar1) * fVar1 + -3.0) * fVar1 + 1.0) * 2.7306666;
  return param_1;
}



// FUNCTION 1481fc6ad FUN_1481fc6ad body=725 status=ok
// SIG undefined FUN_1481fc6ad(void)

float * FUN_1481fc6ad(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar16 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2;
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  fVar14 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar7 = param_2[3];
  fVar8 = param_2[4];
  fVar9 = param_2[5];
  fVar15 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar10 = *param_2;
  fVar11 = param_2[1];
  fVar12 = param_2[2];
  fVar17 = fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11;
  fVar16 = fVar16 + fVar16;
  fVar14 = fVar14 + fVar14;
  fVar15 = fVar15 + fVar15;
  fVar17 = fVar17 + fVar17;
  if (1.0 <= fVar16) {
    fVar16 = 1.0;
  }
  if (1.0 <= fVar14) {
    fVar14 = 1.0;
  }
  if (1.0 <= fVar15) {
    fVar15 = 1.0;
  }
  if (1.0 <= fVar17) {
    fVar17 = 1.0;
  }
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar17 <= 0.0) {
    fVar17 = 0.0;
  }
  fVar13 = (65.535995 - fVar16 * 12.0 * 2.7306666) * fVar16 + -32.767998;
  fVar16 = (65.535995 - fVar14 * 12.0 * 2.7306666) * fVar14 + -32.767998;
  fVar15 = (65.535995 - fVar15 * 12.0 * 2.7306666) * fVar15 + -32.767998;
  fVar14 = (65.535995 - fVar17 * 12.0 * 2.7306666) * fVar17 + -32.767998;
  *param_1 = fVar14 * fVar10;
  param_1[1] = fVar15 * fVar7;
  param_1[2] = fVar16 * fVar4;
  param_1[3] = fVar13 * fVar1;
  param_1[4] = fVar11 * fVar14;
  param_1[5] = fVar8 * fVar15;
  param_1[6] = fVar5 * fVar16;
  param_1[7] = fVar2 * fVar13;
  param_1[8] = fVar12 * fVar14;
  param_1[9] = fVar9 * fVar15;
  param_1[10] = fVar6 * fVar16;
  param_1[0xb] = fVar3 * fVar13;
  return param_1;
}



// FUNCTION 1481fc982 FUN_1481fc982 body=5126 status=ok
// SIG undefined FUN_1481fc982(void)

void FUN_1481fc982(float *param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_2f8 [44];
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float *local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined8 local_130;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_130 = *(undefined8 *)param_2;
  local_128 = param_2[2];
  local_1e0 = param_1;
  FUN_1481fc2ea(&local_120);
  local_2c4 = param_2[2];
  fVar16 = local_2c4 - local_118;
  local_2cc = *param_2;
  local_2c8 = param_2[1];
  fVar13 = local_2c8 - local_11c;
  fVar14 = local_2cc - local_120;
  fVar15 = local_118 * 6.0 + 0.5;
  fVar12 = local_11c * 6.0 + 0.5;
  fVar11 = local_120 * 6.0 + 0.5;
  iVar3 = ((int)fVar12 - (uint)(fVar12 < (float)(int)fVar12)) * 0x19660d;
  iVar1 = ((int)fVar15 - (uint)(fVar15 < (float)(int)fVar15)) * 0x19660d;
  iVar2 = iVar1 + 0x3c6ef35f;
  iVar6 = (iVar3 + 0x3c6ef35f) * iVar2 +
          ((int)fVar11 - (uint)(fVar11 < (float)(int)fVar11)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar3 = iVar3 + iVar2 * iVar4 + 0x3c6ef35f;
  iVar2 = iVar1 + iVar4 * iVar3 + 0x3c6ef35f;
  uVar5 = iVar2 * iVar3 + iVar6 + 0x3c6ef35f;
  uVar8 = uVar5 * iVar2 + iVar3;
  uVar7 = uVar8 * uVar5 + iVar2 >> 0x10;
  uVar8 = uVar8 >> 0x10;
  uVar5 = uVar5 >> 0x10;
  fVar11 = local_2c4 - local_10c;
  fVar12 = local_10c * 6.0 + 0.5;
  fVar22 = local_2c8 - local_110;
  fVar15 = local_110 * 6.0 + 0.5;
  local_2a4 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_2a0 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_2a8 = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_200 = local_2a8 * fVar16 + local_2a0 * fVar14 + fVar13 * local_2a4;
  local_1e8 = (float)(uVar8 & 0x4000) * 0.00012207031 + -1.0;
  local_1e4 = (float)(uVar8 & 0x8000) * 6.1035156e-05 + -1.0;
  fVar21 = local_2cc - local_114;
  fVar17 = local_114 * 6.0 + 0.5;
  iVar1 = ((int)fVar15 - (uint)(fVar15 < (float)(int)fVar15)) * 0x19660d;
  iVar3 = ((int)fVar12 - (uint)(fVar12 < (float)(int)fVar12)) * 0x19660d;
  iVar2 = iVar3 + 0x3c6ef35f;
  iVar6 = (iVar1 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar1 = iVar1 + iVar2 * iVar4 + 0x3c6ef35f;
  iVar2 = iVar4 * iVar1 + iVar3 + 0x3c6ef35f;
  uVar10 = iVar2 * iVar1 + iVar6 + 0x3c6ef35f;
  uVar9 = uVar10 * iVar2 + iVar1;
  uVar5 = uVar9 * uVar10 + iVar2 >> 0x10;
  uVar9 = uVar9 >> 0x10;
  uVar10 = uVar10 >> 0x10;
  fVar20 = local_2c4 - local_100;
  fVar18 = local_100 * 6.0 + 0.5;
  fVar12 = local_2c8 - local_104;
  fVar19 = local_104 * 6.0 + 0.5;
  local_208 = (float)(uVar8 & 0x2000) * 0.00024414062 + -1.0;
  local_210 = local_208 * fVar16 + local_1e4 * fVar14 + fVar13 * local_1e8;
  local_1ec = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_298 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_1f8 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_29c = local_1f8 * fVar16 + local_298 * fVar14 + fVar13 * local_1ec;
  local_234 = (float)(uVar10 & 0x4000) * 0.00012207031 + -1.0;
  local_230 = (float)(uVar10 & 0x8000) * 6.1035156e-05 + -1.0;
  local_238 = (float)(uVar10 & 0x2000) * 0.00024414062 + -1.0;
  local_23c = local_238 * fVar11 + local_230 * fVar21 + fVar22 * local_234;
  local_214 = (float)(uVar9 & 0x4000) * 0.00012207031 + -1.0;
  local_20c = (float)(uVar9 & 0x8000) * 6.1035156e-05 + -1.0;
  local_218 = (float)(uVar9 & 0x2000) * 0.00024414062 + -1.0;
  local_21c = local_218 * fVar11 + local_20c * fVar21 + fVar22 * local_214;
  local_1f4 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_1f0 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_1fc = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_204 = local_1fc * fVar11 + local_1f0 * fVar21 + fVar22 * local_1f4;
  fVar15 = local_2cc - local_108;
  fVar17 = local_108 * 6.0 + 0.5;
  iVar3 = ((int)fVar19 - (uint)(fVar19 < (float)(int)fVar19)) * 0x19660d;
  iVar1 = ((int)fVar18 - (uint)(fVar18 < (float)(int)fVar18)) * 0x19660d;
  iVar2 = iVar1 + 0x3c6ef35f;
  iVar6 = (iVar3 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar4 = iVar6 + 0x3c6ef35f;
  iVar3 = iVar2 * iVar4 + iVar3 + 0x3c6ef35f;
  iVar2 = iVar1 + iVar4 * iVar3 + 0x3c6ef35f;
  uVar8 = iVar6 + iVar2 * iVar3 + 0x3c6ef35f;
  uVar5 = uVar8 * iVar2 + iVar3;
  uVar7 = uVar8 >> 0x10;
  local_25c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_258 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_270 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_274 = local_270 * fVar20 + local_258 * fVar15 + fVar12 * local_25c;
  uVar7 = uVar5 >> 0x10;
  local_24c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_244 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_250 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_254 = local_250 * fVar20 + local_244 * fVar15 + fVar12 * local_24c;
  uVar5 = uVar5 * uVar8 + iVar2 >> 0x10;
  local_224 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_220 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  local_22c = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_228 = local_22c * fVar20 + local_220 * fVar15 + fVar12 * local_224;
  local_2c4 = local_2c4 - local_f4;
  local_2c8 = local_2c8 - local_f8;
  local_2cc = local_2cc - local_fc;
  fVar19 = local_f4 * 6.0 + 0.5;
  fVar18 = local_f8 * 6.0 + 0.5;
  fVar17 = local_fc * 6.0 + 0.5;
  iVar1 = ((int)fVar18 - (uint)(fVar18 < (float)(int)fVar18)) * 0x19660d;
  iVar4 = ((int)fVar19 - (uint)(fVar19 < (float)(int)fVar19)) * 0x19660d;
  iVar2 = iVar4 + 0x3c6ef35f;
  iVar6 = (iVar1 + 0x3c6ef35f) * iVar2 +
          ((int)fVar17 - (uint)(fVar17 < (float)(int)fVar17)) * 0x19660d;
  iVar3 = iVar6 + 0x3c6ef35f;
  iVar2 = iVar2 * iVar3 + iVar1 + 0x3c6ef35f;
  iVar4 = iVar4 + iVar3 * iVar2 + 0x3c6ef35f;
  uVar8 = iVar4 * iVar2 + iVar6 + 0x3c6ef35f;
  uVar7 = uVar8 * iVar4 + iVar2;
  uVar5 = uVar7 * uVar8 + iVar4 >> 0x10;
  uVar7 = uVar7 >> 0x10;
  uVar8 = uVar8 >> 0x10;
  local_294 = (float)(uVar8 & 0x2000) * 0.00024414062 + -1.0;
  local_290 = (float)(uVar8 & 0x4000) * 0.00012207031 + -1.0;
  local_28c = (float)(uVar8 & 0x8000) * 6.1035156e-05 + -1.0;
  local_284 = (float)(uVar7 & 0x2000) * 0.00024414062 + -1.0;
  local_27c = (float)(uVar7 & 0x4000) * 0.00012207031 + -1.0;
  local_278 = (float)(uVar7 & 0x8000) * 6.1035156e-05 + -1.0;
  local_26c = (float)(uVar5 & 0x2000) * 0.00024414062 + -1.0;
  local_264 = (float)(uVar5 & 0x4000) * 0.00012207031 + -1.0;
  local_260 = (float)(uVar5 & 0x8000) * 6.1035156e-05 + -1.0;
  fVar17 = local_294 * local_2c4 + local_28c * local_2cc + local_2c8 * local_290;
  local_288 = local_284 * local_2c4 + local_278 * local_2cc + local_2c8 * local_27c;
  local_268 = local_26c * local_2c4 + local_260 * local_2cc + local_2c8 * local_264;
  local_2c0 = fVar12;
  local_2bc = fVar20;
  local_2b8 = fVar21;
  local_2b4 = fVar11;
  local_2b0 = fVar22;
  local_2ac = fVar16;
  local_280 = fVar15;
  local_248 = fVar14;
  local_240 = fVar13;
  local_178 = fVar14;
  local_174 = fVar13;
  local_170 = fVar16;
  local_16c = fVar21;
  local_168 = fVar22;
  local_164 = fVar11;
  local_160 = fVar15;
  local_15c = fVar12;
  local_158 = fVar20;
  local_154 = local_2cc;
  local_150 = local_2c8;
  local_14c = local_2c4;
  FUN_1481fc511(&local_148);
  local_1b4 = local_2cc;
  local_1b0 = local_2c8;
  local_1ac = local_2c4;
  local_1d8 = fVar14;
  local_1d4 = fVar13;
  local_1d0 = fVar16;
  local_1cc = fVar21;
  local_1c8 = fVar22;
  local_1c4 = fVar11;
  local_1c0 = fVar15;
  local_1bc = fVar12;
  local_1b8 = fVar20;
  FUN_1481fc6ad(&local_1a8);
  fVar11 = local_2a8 * local_148;
  fVar12 = local_2a4 * local_148;
  fVar15 = local_2a0 * local_148;
  local_2ac = local_184;
  local_2c4 = local_188;
  local_2c8 = local_180;
  local_2cc = local_17c;
  local_2bc = local_194;
  local_2b0 = local_198;
  local_2b4 = local_190;
  local_2b8 = local_18c;
  local_2a4 = local_1a4;
  local_2a8 = local_1a8;
  local_2c0 = local_1a0;
  local_2a0 = local_19c;
  *local_1e0 = fVar17 * local_19c +
               local_274 * local_1a0 + local_200 * local_1a8 + local_23c * local_1a4 +
               local_28c * local_13c + local_258 * local_140 + fVar15 + local_230 * local_144;
  local_1e0[1] = local_18c * fVar17 +
                 local_190 * local_274 + local_198 * local_200 + local_23c * local_194 +
                 local_290 * local_13c + local_25c * local_140 + fVar12 + local_234 * local_144;
  local_1e0[2] = local_17c * fVar17 +
                 local_180 * local_274 + local_188 * local_200 + local_23c * local_184 +
                 local_294 * local_13c + local_270 * local_140 + fVar11 + local_238 * local_144;
  local_1e0[3] = local_13c * fVar17 +
                 local_140 * local_274 + local_148 * local_200 + local_23c * local_144;
  local_1e0[4] = local_288 * local_19c +
                 local_254 * local_1a0 + local_210 * local_1a8 + local_21c * local_1a4 +
                 local_278 * local_13c +
                 local_244 * local_140 + local_1e4 * local_148 + local_20c * local_144;
  local_1e0[5] = local_18c * local_288 +
                 local_190 * local_254 + local_198 * local_210 + local_21c * local_194 +
                 local_27c * local_13c +
                 local_24c * local_140 + local_1e8 * local_148 + local_214 * local_144;
  local_1e0[6] = local_17c * local_288 +
                 local_180 * local_254 + local_188 * local_210 + local_21c * local_184 +
                 local_284 * local_13c +
                 local_250 * local_140 + local_208 * local_148 + local_218 * local_144;
  local_1e0[7] = local_13c * local_288 +
                 local_140 * local_254 + local_148 * local_210 + local_21c * local_144;
  local_1e0[8] = local_268 * local_19c +
                 local_228 * local_1a0 + local_29c * local_1a8 + local_204 * local_1a4 +
                 local_260 * local_13c +
                 local_220 * local_140 + local_298 * local_148 + local_1f0 * local_144;
  local_1e0[9] = local_18c * local_268 +
                 local_190 * local_228 + local_198 * local_29c + local_194 * local_204 +
                 local_264 * local_13c +
                 local_224 * local_140 + local_1ec * local_148 + local_1f4 * local_144;
  local_1e0[10] =
       local_17c * local_268 + local_180 * local_228 + local_188 * local_29c + local_184 * local_204
       + local_26c * local_13c +
         local_22c * local_140 + local_1f8 * local_148 + local_1fc * local_144;
  local_1e0[0xb] =
       local_13c * local_268 + local_140 * local_228 + local_148 * local_29c + local_204 * local_144
  ;
  if ((local_f0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fdd8a FUN_1481fdd8a body=835 status=ok
// SIG undefined FUN_1481fdd8a(void)

void FUN_1481fdd8a(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_188 [32];
  longlong local_168;
  undefined8 local_160;
  longlong local_158;
  undefined4 local_150;
  float local_144;
  float local_140;
  float local_13c;
  undefined1 local_138 [24];
  float local_120;
  float local_114;
  longlong local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    local_160 = param_2;
    local_168 = FUN_14806bc5a(param_2);
    *(undefined1 *)(local_168 + 0xec) = 1;
    *(undefined4 *)(local_168 + 0xf0) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(local_168 + 0xf4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined8 *)(local_168 + 0xf8) = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(local_168 + 0x100) = *(undefined4 *)(param_1 + 0x38);
    local_108 = 0;
    uStack_100 = 0;
    FUN_14482f6fa(&local_108,0x1000);
    iVar4 = 0;
    do {
      uVar2 = rand();
      fVar9 = ((float)(uVar2 & 0x7fff) / 32767.0) * 128.0 + -64.0;
      uVar2 = rand();
      fVar10 = ((float)(uVar2 & 0x7fff) / 32767.0) * 128.0 + -64.0;
      uVar2 = rand();
      fVar11 = ((float)(uVar2 & 0x7fff) / 32767.0) * 128.0 + -64.0;
      uVar2 = rand();
      fVar12 = (float)(uVar2 & 0x7fff) / 32767.0;
      uVar2 = rand();
      fVar13 = (float)(uVar2 & 0x7fff) / 32767.0;
      uVar2 = rand();
      fVar14 = (float)(uVar2 & 0x7fff) / 32767.0;
      fVar7 = 0.0;
      iVar5 = 0x40;
      do {
        local_144 = fVar11;
        local_140 = fVar10;
        local_13c = fVar9;
        FUN_1481fc982(local_138,&local_144);
        uVar1 = uStack_100;
        fVar8 = local_120 - local_114;
        lVar6 = (longlong)(int)uStack_100;
        uVar2 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar2);
        if (uStack_100._4_4_ < uVar2) {
          FUN_14475e4ac(&local_108,uVar1 & 0xffffffff);
        }
        fVar7 = fVar7 + fVar8;
        fVar11 = fVar11 + fVar14 + fVar14 + -1.0;
        fVar10 = fVar10 + fVar13 + fVar13 + -1.0;
        fVar9 = fVar9 + fVar12 + fVar12 + -1.0;
        *(float *)(local_108 + lVar6 * 4) = fVar7;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x40);
    local_158 = local_108;
    local_150 = (int)uStack_100;
    uVar3 = FUN_1481fe0ce(local_160);
    *(undefined4 *)(local_168 + 0x104) = uVar3;
    *(undefined8 *)(local_168 + 0x108) = 0x4000000040;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fe0ce FUN_1481fe0ce body=195 status=ok
// SIG undefined FUN_1481fe0ce(void)

ulonglong FUN_1481fe0ce(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  void *_Buf2;
  int iVar4;
  ulonglong uVar5;
  void *_Buf1;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  uVar1 = *(uint *)(puVar3 + 1);
  uVar2 = *(uint *)(param_2 + 1);
  if ((int)uVar2 <= (int)uVar1) {
    _Buf2 = (void *)*param_2;
    _Buf1 = (void *)*puVar3;
    uVar5 = 0;
    do {
      iVar4 = memcmp(_Buf1,_Buf2,(longlong)(int)uVar2 * 4);
      if (iVar4 == 0) {
        return uVar5 & 0xffffffff;
      }
      uVar5 = uVar5 + 1;
      _Buf1 = (void *)((longlong)_Buf1 + 4);
    } while ((uVar1 - uVar2) + 1 != uVar5);
  }
  *(uint *)(puVar3 + 1) = uVar1 + uVar2;
  if (*(int *)((longlong)puVar3 + 0xc) - uVar1 < uVar2) {
    FUN_14475e4ac(puVar3,uVar1);
  }
  memcpy((void *)((ulonglong)uVar1 * 4 + **(longlong **)(param_1 + 0x18)),(void *)*param_2,
         (longlong)*(int *)(param_2 + 1) << 2);
  return (ulonglong)uVar1;
}



// FUNCTION 1481fe192 FUN_1481fe192 body=1339 status=ok
// SIG undefined FUN_1481fe192(void)

void FUN_1481fe192(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  int local_80;
  undefined8 local_78;
  int local_70;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar3 = (int *)FUN_1481fe6ce(param_2);
  lVar5 = (longlong)(int)((longlong *)*param_2)[1];
  iVar2 = -1;
  iVar4 = -1;
  if (lVar5 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar6 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar6) == DAT_14cb441ac) &&
         (*(int *)(lVar1 + 8 + uVar6) == DAT_14cb441b4)) {
        iVar4 = (int)(uVar6 >> 2) * -0x55555555;
        goto LAB_1481fe210;
      }
      uVar6 = uVar6 + 0xc;
    } while (lVar5 * 0xc != uVar6);
    iVar4 = -1;
  }
LAB_1481fe210:
  piVar3[0x16] = iVar4;
  lVar5 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar5 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar6 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar6) == DAT_14cb4423c) &&
         (*(int *)(lVar1 + 8 + uVar6) == DAT_14cb44244)) {
        iVar2 = (int)(uVar6 >> 2) * -0x55555555;
        break;
      }
      uVar6 = uVar6 + 0xc;
    } while (lVar5 * 0xc != uVar6);
  }
  piVar3[0x17] = iVar2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    iVar2 = *(int *)(param_1 + 0x30);
    *piVar3 = iVar2;
    if (iVar2 == 2) {
      local_98 = DAT_14c846330;
      local_90 = DAT_14c846338;
      local_a0 = DAT_14c846338;
      local_a8 = DAT_14c846330;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar2 = FUN_1482029d2(param_2,param_1 + 0xa4);
      }
      else {
        if (*(int *)(param_1 + 0xa0) == 1) {
          local_70 = *(int *)(param_1 + 0xb8);
          local_78 = *(undefined8 *)(param_1 + 0xb0);
          local_88 = *(undefined8 *)(param_1 + 0xb0);
          local_a0 = *(int *)(param_1 + 0xb8);
        }
        else {
          local_70 = *(int *)(param_1 + 0xb8);
          local_78 = *(undefined8 *)(param_1 + 0xb0);
          local_88 = *(undefined8 *)(param_1 + 0xbc);
          local_a0 = *(int *)(param_1 + 0xc4);
        }
        local_90 = local_70;
        local_98 = local_78;
        local_a8 = local_88;
        iVar2 = -1;
        local_80 = local_a0;
      }
      piVar3[0xf] = iVar2;
      piVar3[0x12] = local_90;
      *(undefined8 *)(piVar3 + 0x10) = local_98;
      piVar3[0x15] = local_a0;
      *(undefined8 *)(piVar3 + 0x13) = local_a8;
      local_98 = DAT_14c846330;
      local_90 = DAT_14c846338;
      local_a0 = DAT_14c846338;
      local_a8 = DAT_14c846330;
      if (*(int *)(param_1 + 0x40) == 0) {
        iVar2 = FUN_1482029d2(param_2,param_1 + 0x44);
      }
      else {
        if (*(int *)(param_1 + 0x40) == 1) {
          local_70 = *(int *)(param_1 + 0x58);
          local_78 = *(undefined8 *)(param_1 + 0x50);
          local_88 = *(undefined8 *)(param_1 + 0x50);
          local_a0 = *(int *)(param_1 + 0x58);
        }
        else {
          local_70 = *(int *)(param_1 + 0x58);
          local_78 = *(undefined8 *)(param_1 + 0x50);
          local_88 = *(undefined8 *)(param_1 + 0x5c);
          local_a0 = *(int *)(param_1 + 100);
        }
        local_90 = local_70;
        local_98 = local_78;
        local_a8 = local_88;
        iVar2 = -1;
        local_80 = local_a0;
      }
      piVar3[1] = iVar2;
      piVar3[4] = local_90;
      *(undefined8 *)(piVar3 + 2) = local_98;
      piVar3[7] = local_a0;
      *(undefined8 *)(piVar3 + 5) = local_a8;
      local_98 = DAT_14c846330;
      local_90 = DAT_14c846338;
      local_a0 = DAT_14c846338;
      local_a8 = DAT_14c846330;
      if (*(int *)(param_1 + 0x70) == 0) {
        iVar2 = FUN_1482029d2(param_2,param_1 + 0x74);
      }
      else {
        if (*(int *)(param_1 + 0x70) == 1) {
          local_70 = *(int *)(param_1 + 0x88);
          local_78 = *(undefined8 *)(param_1 + 0x80);
          local_88 = *(undefined8 *)(param_1 + 0x80);
          local_a0 = *(int *)(param_1 + 0x88);
        }
        else {
          local_70 = *(int *)(param_1 + 0x88);
          local_78 = *(undefined8 *)(param_1 + 0x80);
          local_88 = *(undefined8 *)(param_1 + 0x8c);
          local_a0 = *(int *)(param_1 + 0x94);
        }
        local_90 = local_70;
        local_98 = local_78;
        local_a8 = local_88;
        iVar2 = -1;
        local_80 = local_a0;
      }
      piVar3[8] = iVar2;
      *(undefined8 *)(piVar3 + 9) = local_98;
      piVar3[0xb] = local_90;
      *(undefined8 *)(piVar3 + 0xc) = local_a8;
      piVar3[0xe] = local_a0;
    }
    else if (iVar2 == 1) {
      piVar3[0x12] = DAT_14c846338;
      *(undefined8 *)(piVar3 + 0x10) = DAT_14c846330;
      piVar3[0x13] = 0x43b40000;
      piVar3[0x14] = 0x43b40000;
      piVar3[0x15] = 0x43b40000;
    }
    else if (iVar2 == 0) {
      local_98 = DAT_14c846330;
      local_90 = DAT_14c846338;
      local_a0 = DAT_14c846338;
      local_a8 = DAT_14c846330;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar2 = FUN_1482029d2(param_2,param_1 + 0xa4);
      }
      else {
        if (*(int *)(param_1 + 0xa0) == 1) {
          local_70 = *(int *)(param_1 + 0xb8);
          local_78 = *(undefined8 *)(param_1 + 0xb0);
          local_88 = *(undefined8 *)(param_1 + 0xb0);
          local_a0 = *(int *)(param_1 + 0xb8);
        }
        else {
          local_70 = *(int *)(param_1 + 0xb8);
          local_78 = *(undefined8 *)(param_1 + 0xb0);
          local_88 = *(undefined8 *)(param_1 + 0xbc);
          local_a0 = *(int *)(param_1 + 0xc4);
        }
        local_90 = local_70;
        local_98 = local_78;
        local_a8 = local_88;
        iVar2 = -1;
        local_80 = local_a0;
      }
      piVar3[0xf] = iVar2;
      *(undefined8 *)(piVar3 + 0x10) = local_98;
      piVar3[0x12] = local_90;
      *(undefined8 *)(piVar3 + 0x13) = local_a8;
      piVar3[0x15] = local_a0;
    }
  }
  if ((piVar3[0x16] != -1) || (piVar3[0x17] != -1)) {
    local_58 = 0;
    local_48 = &PTR_LAB_14ad7a5c0;
    local_40 = FUN_143ad1655;
    local_68 = &LAB_14806c8d4;
    FUN_1481fe7cc(param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fe6ce FUN_1481fe6ce body=173 status=ok
// SIG undefined FUN_1481fe6ce(void)

longlong FUN_1481fe6ce(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + 0x60;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + uVar7) = 0xffffffff00000000;
  puVar1 = (undefined8 *)(lVar4 + 8 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x18 + uVar7) = 0;
  *(undefined4 *)(lVar4 + 0x20 + uVar7) = 0xffffffff;
  puVar1 = (undefined8 *)(lVar4 + 0x24 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x34 + uVar7) = 0;
  *(undefined4 *)(lVar4 + 0x3c + uVar7) = 0xffffffff;
  puVar1 = (undefined8 *)(lVar4 + 0x40 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + 0x50 + uVar7) = 0;
  *(undefined8 *)(lVar4 + 0x58 + uVar7) = 0xffffffffffffffff;
  return lVar4 + uVar7;
}



// FUNCTION 1481fe77c FUN_1481fe77c body=8 status=ok
// SIG undefined FUN_1481fe77c(void)

undefined * FUN_1481fe77c(void)

{
  return &DAT_14cb44158;
}



// FUNCTION 1481fe784 FUN_1481fe784 body=71 status=ok
// SIG undefined FUN_1481fe784(void)

int FUN_1481fe784(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar3 != 0) {
    lVar1 = *(longlong *)*param_1;
    uVar2 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar2) == *param_2) &&
         (*(int *)(lVar1 + 8 + uVar2) == (int)param_2[1])) {
        return (int)(uVar2 >> 2) * -0x55555555;
      }
      uVar2 = uVar2 + 0xc;
    } while (lVar3 * 0xc != uVar2);
  }
  return -1;
}



// FUNCTION 1481fe7cc FUN_1481fe7cc body=256 status=ok
// SIG undefined FUN_1481fe7cc(void)

void FUN_1481fe7cc(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_88 [64];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x20);
    *(uint *)(lVar5 + 0x20) = iVar1 + 1U;
    if (*(uint *)(lVar5 + 0x24) < iVar1 + 1U) {
      FUN_14820954a((longlong *)(lVar5 + 0x18),iVar1);
    }
    plVar11 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)(lVar5 + 0x18));
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar4 = *(undefined4 *)(param_1 + 0x2c);
    lVar5 = *param_2;
    lVar6 = param_2[2];
    param_2[2] = 0;
    lVar7 = param_2[6];
    lVar8 = param_2[7];
    lVar9 = param_2[4];
    lVar10 = param_2[5];
    if (lVar5 != 0) {
      *param_2 = 0;
    }
    *plVar11 = lVar5;
    plVar11[2] = lVar6;
    local_48._0_4_ = (undefined4)lVar9;
    local_48._4_4_ = (undefined4)((ulonglong)lVar9 >> 0x20);
    uStack_40._0_4_ = (undefined4)lVar10;
    uStack_40._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    local_38._0_4_ = (undefined4)lVar7;
    local_38._4_4_ = (undefined4)((ulonglong)lVar7 >> 0x20);
    uStack_30._0_4_ = (undefined4)lVar8;
    uStack_30._4_4_ = (undefined4)((ulonglong)lVar8 >> 0x20);
    *(undefined4 *)(plVar11 + 4) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar11 + 0x24) = local_48._4_4_;
    *(undefined4 *)(plVar11 + 5) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)plVar11 + 0x2c) = uStack_40._4_4_;
    *(undefined4 *)(plVar11 + 6) = (undefined4)local_38;
    *(undefined4 *)((longlong)plVar11 + 0x34) = local_38._4_4_;
    *(undefined4 *)(plVar11 + 7) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)plVar11 + 0x3c) = uStack_30._4_4_;
    *(undefined4 *)(plVar11 + 8) = uVar3;
    *(undefined4 *)((longlong)plVar11 + 0x44) = uVar4;
    *(undefined4 *)(plVar11 + 9) = uVar2;
    local_48 = lVar9;
    uStack_40 = lVar10;
    local_38 = lVar7;
    uStack_30 = lVar8;
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_88);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fe8e0 FUN_1481fe8e0 body=34 status=ok
// SIG undefined FUN_1481fe8e0(void)

void FUN_1481fe8e0(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145e34456();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1481fe902 FUN_1481fe902 body=883 status=ok
// SIG undefined FUN_1481fe902(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1481fe902(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  undefined1 local_68 [24];
  float local_50;
  float fStack_4c;
  float local_48;
  float local_40;
  float fStack_3c;
  float local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  lVar4 = FUN_145e34456();
  *(uint *)(param_2 + 0x38) = uVar9 + *(int *)(lVar4 + 0x3c);
  lVar4 = *(longlong *)(param_2 + 0x30);
  uVar7 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar7 + 0x60;
  lVar3 = *(longlong *)(param_2 + 0x18);
  pfVar8 = (float *)(lVar4 + (ulonglong)uVar9);
  pfVar8[2] = DAT_14c846338;
  *(undefined8 *)pfVar8 = DAT_14c846330;
  *(undefined8 *)(pfVar8 + 4) = DAT_14c846330;
  pfVar8[6] = DAT_14c846338;
  fVar11 = *(float *)(lVar3 + 0x54 + uVar7) - *(float *)(lVar3 + 0x48 + uVar7);
  piVar1 = (int *)(lVar3 + uVar7);
  fVar12 = *(float *)(lVar3 + 0x50 + uVar7) - *(float *)(lVar3 + 0x44 + uVar7);
  fVar13 = *(float *)(lVar3 + 0x4c + uVar7) - *(float *)(lVar3 + 0x40 + uVar7);
  *pfVar8 = fVar13;
  pfVar8[1] = fVar12;
  pfVar8[2] = fVar11;
  iVar2 = *(int *)(lVar3 + 0x3c + uVar7);
  if (iVar2 == -1) {
    pfVar8[6] = *(float *)(uVar7 + lVar3 + 0x48);
    uVar6 = *(undefined8 *)(uVar7 + lVar3 + 0x40);
  }
  else {
    lVar3 = *(longlong *)(param_2 + 8);
    lVar10 = (longlong)(iVar2 << 2);
    pfVar8[6] = *(float *)(lVar3 + 8 + lVar10);
    uVar6 = *(undefined8 *)(lVar3 + lVar10);
  }
  *(undefined8 *)(pfVar8 + 4) = uVar6;
  pfVar8 = (float *)(lVar4 + (ulonglong)uVar9);
  if (*piVar1 == 2) {
    if (piVar1[8] == -1) {
      local_38 = (float)piVar1[0xb];
      uVar6 = *(undefined8 *)(piVar1 + 9);
    }
    else {
      lVar4 = (longlong)(piVar1[8] << 2);
      local_38 = *(float *)(*(longlong *)(param_2 + 8) + 8 + lVar4);
      uVar6 = *(undefined8 *)(*(longlong *)(param_2 + 8) + lVar4);
    }
    if (piVar1[1] == -1) {
      local_48 = (float)piVar1[4];
      uVar5 = *(undefined8 *)(piVar1 + 2);
    }
    else {
      lVar4 = (longlong)(piVar1[1] << 2);
      local_48 = *(float *)(*(longlong *)(param_2 + 8) + 8 + lVar4);
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 8) + lVar4);
    }
    local_40 = (float)uVar6;
    fStack_3c = (float)((ulonglong)uVar6 >> 0x20);
    fVar13 = local_38 * local_38 + local_40 * local_40 + fStack_3c * fStack_3c;
    if (((fVar13 != 1.0) || (fVar12 = local_40, fVar11 = fStack_3c, fVar14 = local_38, NAN(fVar13)))
       && (fVar12 = DAT_14c84637c, fVar11 = _DAT_14c846380, fVar14 = DAT_14c846384, 0.0001 <= fVar13
          )) {
      fVar12 = 1.0 / SQRT(fVar13);
      fVar14 = local_38 * fVar12;
      fVar11 = fStack_3c * fVar12;
      fVar12 = local_40 * fVar12;
    }
    _local_40 = CONCAT44(fVar11,fVar12);
    local_50 = (float)uVar5;
    fStack_4c = (float)((ulonglong)uVar5 >> 0x20);
    fVar13 = local_48 * local_48 + local_50 * local_50 + fStack_4c * fStack_4c;
    if (((fVar13 != 1.0) || (fVar12 = local_50, fVar11 = fStack_4c, fVar15 = local_48, NAN(fVar13)))
       && (fVar12 = DAT_14c84637c, fVar11 = _DAT_14c846380, fVar15 = DAT_14c846384, 0.0001 <= fVar13
          )) {
      fVar12 = 1.0 / SQRT(fVar13);
      fVar15 = local_48 * fVar12;
      fVar11 = fStack_4c * fVar12;
      fVar12 = local_50 * fVar12;
    }
    _local_50 = CONCAT44(fVar11,fVar12);
    local_48 = fVar15;
    local_38 = fVar14;
    FUN_1467fb7de(local_68,&local_40);
    FUN_1467f5e0c(local_68,&local_74);
    local_6c = local_6c + pfVar8[4];
    local_74 = local_74 + pfVar8[5];
    local_70 = local_70 + pfVar8[6];
    fVar13 = *pfVar8;
    fVar12 = pfVar8[1];
    fVar11 = pfVar8[2];
  }
  else {
    local_6c = pfVar8[4];
    local_74 = pfVar8[5];
    local_70 = pfVar8[6];
  }
  *pfVar8 = fVar13 * 0.0027777778;
  pfVar8[1] = fVar12 * 0.0027777778;
  pfVar8[2] = fVar11 * 0.0027777778;
  pfVar8[4] = local_6c * 0.0027777778;
  pfVar8[5] = local_74 * 0.0027777778;
  pfVar8[6] = local_70 * 0.0027777778;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481fec76 FUN_1481fec76 body=667 status=ok
// SIG undefined FUN_1481fec76(void)

void FUN_1481fec76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  int local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined **local_100;
  ulonglong local_f8;
  uint local_f0;
  ulonglong local_e8 [3];
  longlong local_d0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  code *local_90;
  undefined1 local_78 [64];
  undefined1 *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar4 = (uint *)FUN_1481fef12(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar6 = (longlong)(int)((longlong *)*param_2)[1];
    if (lVar6 == 0) {
LAB_1481fed07:
      puVar4[3] = 0xffffffff;
    }
    else {
      lVar1 = *(longlong *)*param_2;
      uVar7 = 0;
      while ((*(longlong *)(lVar1 + uVar7) != DAT_14cb441a0 ||
             (*(int *)(lVar1 + 8 + uVar7) != DAT_14cb441a8))) {
        uVar7 = uVar7 + 0xc;
        if (lVar6 * 0xc == uVar7) goto LAB_1481fed07;
      }
      uVar2 = (int)(uVar7 >> 2) * -0x55555555;
      puVar4[3] = uVar2;
      if (uVar2 == 0xffffffff) goto LAB_1481feca7;
      if (*(int *)(param_1 + 0x30) == 0) {
        uVar3 = FUN_1482029d2(param_2);
        uVar2 = 0;
        uVar5 = 0;
        if (uVar3 != 0xffffffff) {
          *puVar4 = uVar3 | 0x80000000;
          goto LAB_1481feed5;
        }
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x40);
        uVar5 = uVar2;
        if (*(int *)(param_1 + 0x30) != 1) {
          uVar5 = *(uint *)(param_1 + 0x44);
        }
      }
      *puVar4 = uVar2;
      if ((uVar5 - uVar2) - 1 < 0xff) {
        local_110 = *(undefined8 *)(param_1 + 0x48);
        local_108 = *(undefined4 *)(param_1 + 0x50);
        FUN_1481fef8a(&local_100,(uVar5 - uVar2) + 1);
        FUN_147da9508(&local_100);
        if (1 < (int)local_f0) {
          puVar4[2] = local_f0 - 1;
          local_38 = (undefined1 *)0x0;
          local_2c = 0x10;
          local_30 = local_f0 * 2;
          if (8 < local_f0) {
            FUN_1478ddd44(local_78,0);
          }
          uVar7 = 0;
          do {
            uVar9 = (longlong)&local_f8 + ((longlong)local_f8 >> 0x18);
            if ((local_f8 & 1) == 0) {
              uVar9 = local_f8;
            }
            puVar8 = local_38;
            if (local_38 == (undefined1 *)0x0) {
              puVar8 = local_78;
            }
            *(undefined4 *)(puVar8 + uVar7 * 8) = *(undefined4 *)(uVar9 + uVar7 * 4);
            uVar9 = (longlong)local_e8 + ((longlong)local_e8[0] >> 0x18);
            if ((local_e8[0] & 1) == 0) {
              uVar9 = local_e8[0];
            }
            puVar8 = local_38;
            if (local_38 == (undefined1 *)0x0) {
              puVar8 = local_78;
            }
            *(float *)(puVar8 + uVar7 * 8 + 4) = (float)(int)(*(int *)(uVar9 + uVar7 * 4) + uVar2);
            uVar7 = uVar7 + 1;
          } while (local_f0 != uVar7);
          local_120 = local_78;
          if (local_38 != (undefined1 *)0x0) {
            local_120 = local_38;
          }
          local_118 = local_30;
          uVar2 = FUN_1481fe0ce(param_2);
          puVar4[1] = uVar2;
          if (local_38 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
        }
        local_100 = &PTR_LAB_14ae2f7b0;
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        FUN_140296a6e(&local_100);
      }
LAB_1481feed5:
      local_a8 = 0;
      local_98 = &PTR_LAB_14ad7a5c0;
      local_90 = FUN_143ad1ac0;
      local_b8 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
LAB_1481feca7:
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481fef12 FUN_1481fef12 body=120 status=ok
// SIG undefined FUN_1481fef12(void)

longlong FUN_1481fef12(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  iVar1 = (int)plVar2[1];
  uVar6 = (longlong)(iVar1 + 3) & 0xfffffffffffffffc;
  iVar4 = (int)uVar6 + 0x10;
  *(int *)(plVar2 + 1) = iVar4;
  uVar5 = iVar4 - iVar1;
  if ((uint)(*(int *)((longlong)plVar2 + 0xc) - iVar1) < uVar5) {
    FUN_1447403be(plVar2);
  }
  memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar5);
  lVar3 = **(longlong **)(param_1 + 0x10);
  *(undefined8 *)(lVar3 + 8 + uVar6) = 0xffffffff00000000;
  *(undefined8 *)(lVar3 + uVar6) = 0;
  return lVar3 + uVar6;
}



// FUNCTION 1481fef8a FUN_1481fef8a body=272 status=ok
// SIG undefined FUN_1481fef8a(void)

undefined8 * FUN_1481fef8a(undefined8 *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  float fVar4;
  
  FUN_143785b7a();
  *param_1 = &PTR_LAB_14ae2f7b0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (-1 < (int)param_2) {
    FUN_14482f6fa(param_1 + 6,param_2);
    uVar2 = 0;
    do {
      if ((longlong)(int)param_3[1] < 1) {
        iVar3 = *(int *)(param_1 + 7);
        uVar1 = iVar3 + 1;
        *(uint *)(param_1 + 7) = uVar1;
        fVar4 = 1.0;
      }
      else {
        fVar4 = 0.0;
        if ((uVar2 < (ulonglong)(longlong)(int)param_3[1]) &&
           (fVar4 = *(float *)(*param_3 + uVar2 * 4), fVar4 <= 0.0)) {
          fVar4 = 0.0;
        }
        iVar3 = *(int *)(param_1 + 7);
        uVar1 = iVar3 + 1;
        *(uint *)(param_1 + 7) = uVar1;
      }
      if (*(uint *)((longlong)param_1 + 0x3c) < uVar1) {
        FUN_14475e4ac(param_1 + 6,iVar3);
      }
      *(float *)(param_1[6] + (longlong)iVar3 * 4) = fVar4;
      *(float *)(param_1 + 8) =
           *(float *)(param_1[6] + (longlong)(*(int *)(param_1 + 7) + -1) * 4) +
           *(float *)(param_1 + 8);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481ff09c FUN_1481ff09c body=34 status=ok
// SIG undefined FUN_1481ff09c(void)

void FUN_1481ff09c(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145dfefea();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1481ff0be FUN_1481ff0be body=91 status=ok
// SIG undefined FUN_1481ff0be(void)

void FUN_1481ff0be(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar4 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar5 = (ulonglong)uVar4;
  lVar2 = FUN_145dfefea();
  *(uint *)(param_2 + 0x38) = uVar4 + *(int *)(lVar2 + 0x3c);
  lVar2 = *(longlong *)(param_2 + 0x30);
  uVar3 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar3 + 0x10;
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(undefined4 *)(lVar2 + uVar5) = *(undefined4 *)(lVar1 + uVar3);
  *(undefined4 *)(lVar2 + 4 + uVar5) = *(undefined4 *)(lVar1 + 4 + uVar3);
  *(undefined4 *)(lVar2 + 8 + uVar5) = *(undefined4 *)(lVar1 + 8 + uVar3);
  return;
}



// FUNCTION 1481ff11a FUN_1481ff11a body=1250 status=ok
// SIG undefined FUN_1481ff11a(void)

void FUN_1481ff11a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8 [2];
  undefined8 *local_c8 [2];
  undefined8 local_b8;
  int local_b0;
  undefined1 *local_a8;
  undefined4 local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar5 = (undefined4 *)FUN_1481ff5fe(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_1481ff14a;
  lVar9 = (longlong)(int)((longlong *)*param_2)[1];
  iVar3 = -1;
  iVar6 = -1;
  if (lVar9 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar10 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar10) == DAT_14cb441b8) &&
         (*(int *)(lVar1 + 8 + uVar10) == DAT_14cb441c0)) {
        iVar6 = (int)(uVar10 >> 2) * -0x55555555;
        goto LAB_1481ff1c1;
      }
      uVar10 = uVar10 + 0xc;
    } while (lVar9 * 0xc != uVar10);
    iVar6 = -1;
  }
LAB_1481ff1c1:
  puVar5[0x13] = iVar6;
  lVar9 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar9 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar10 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar10) == DAT_14cb44248) &&
         (*(int *)(lVar1 + 8 + uVar10) == DAT_14cb44250)) {
        iVar3 = (int)(uVar10 >> 2) * -0x55555555;
        break;
      }
      uVar10 = uVar10 + 0xc;
    } while (lVar9 * 0xc != uVar10);
  }
  puVar5[0x14] = iVar3;
  lVar9 = (longlong)(int)((longlong *)*param_2)[1];
  uVar4 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar9 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar10 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar10) == DAT_14cb441d0) &&
         (*(int *)(lVar1 + 8 + uVar10) == DAT_14cb441d8)) {
        uVar7 = (int)(uVar10 >> 2) * -0x55555555;
        goto LAB_1481ff25a;
      }
      uVar10 = uVar10 + 0xc;
    } while (lVar9 * 0xc != uVar10);
    uVar7 = 0xffffffff;
  }
LAB_1481ff25a:
  puVar5[0x15] = uVar7;
  lVar9 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar9 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar10 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar10) == DAT_14cb44260) &&
         (*(int *)(lVar1 + 8 + uVar10) == DAT_14cb44268)) {
        uVar4 = (int)(uVar10 >> 2) * -0x55555555;
        break;
      }
      uVar10 = uVar10 + 0xc;
    } while (lVar9 * 0xc != uVar10);
  }
  puVar5[0x16] = uVar4;
  if ((uVar7 & uVar4) == 0xffffffff) goto LAB_1481ff14a;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = FUN_1482029d2(param_2,param_1 + 0x3c);
    uVar11 = 0x447a0000;
    uVar12 = 0x447a0000;
  }
  else {
    uVar11 = *(undefined4 *)(param_1 + 0x48);
    uVar12 = uVar11;
    if (*(int *)(param_1 + 0x38) != 1) {
      uVar12 = *(undefined4 *)(param_1 + 0x4c);
    }
    uVar2 = 0xffffffff;
  }
  puVar5[0xe] = uVar2;
  puVar5[0xf] = uVar11;
  puVar5[0x10] = uVar12;
  local_98 = DAT_14c846350;
  local_90 = DAT_14c846358;
  local_a0 = DAT_14c846358;
  local_a8 = DAT_14c846350;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar11 = FUN_1482029d2(param_2,param_1 + 0x5c);
  }
  else {
    if (*(int *)(param_1 + 0x58) == 1) {
      local_28 = *(undefined4 *)(param_1 + 0x70);
      local_30 = *(undefined1 **)(param_1 + 0x68);
      local_88 = *(undefined1 **)(param_1 + 0x68);
      local_a0 = *(undefined4 *)(param_1 + 0x70);
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 0x70);
      local_30 = *(undefined1 **)(param_1 + 0x68);
      local_88 = *(undefined1 **)(param_1 + 0x74);
      local_a0 = *(undefined4 *)(param_1 + 0x7c);
    }
    local_90 = local_28;
    local_98 = local_30;
    local_a8 = local_88;
    uVar11 = 0xffffffff;
    local_80 = local_a0;
  }
  *puVar5 = uVar11;
  puVar5[3] = local_90;
  *(undefined1 **)(puVar5 + 1) = local_98;
  puVar5[6] = local_a0;
  *(undefined1 **)(puVar5 + 4) = local_a8;
  local_98 = DAT_14c846350;
  local_90 = DAT_14c846358;
  local_a0 = DAT_14c846358;
  local_a8 = DAT_14c846350;
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar11 = FUN_1482029d2(param_2,param_1 + 0x8c);
  }
  else {
    if (*(int *)(param_1 + 0x88) == 1) {
      local_28 = *(undefined4 *)(param_1 + 0xa0);
      local_30 = *(undefined1 **)(param_1 + 0x98);
      local_88 = *(undefined1 **)(param_1 + 0x98);
      local_a0 = *(undefined4 *)(param_1 + 0xa0);
    }
    else {
      local_28 = *(undefined4 *)(param_1 + 0xa0);
      local_30 = *(undefined1 **)(param_1 + 0x98);
      local_88 = *(undefined1 **)(param_1 + 0xa4);
      local_a0 = *(undefined4 *)(param_1 + 0xac);
    }
    local_90 = local_28;
    local_98 = local_30;
    local_a8 = local_88;
    uVar11 = 0xffffffff;
    local_80 = local_a0;
  }
  puVar5[7] = uVar11;
  *(undefined1 **)(puVar5 + 8) = local_98;
  puVar5[10] = local_90;
  *(undefined1 **)(puVar5 + 0xb) = local_a8;
  puVar5[0xd] = local_a0;
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    iVar3 = *(int *)(param_1 + 0xd8);
    if (iVar3 < 2 || 1 < *(int *)(param_1 + 0xc0) - 5U) {
      if (iVar3 < 1) {
        uVar11 = 0x3f800000;
      }
      else {
        uVar11 = **(undefined4 **)(param_1 + 0xd0);
      }
      local_c8[0] = &local_30;
      local_30 = (undefined1 *)CONCAT44(uVar11,uVar11);
      ppuVar8 = local_c8;
      goto LAB_1481ff570;
    }
    local_b8 = *(undefined8 *)(param_1 + 0xd0);
    local_b0 = iVar3;
    uVar11 = FUN_1481fe0ce(param_2);
    puVar5[0x11] = uVar11;
    puVar5[0x12] = *(int *)(param_1 + 0xd8) + -1;
  }
  else {
    local_d8[0] = &local_30;
    local_30 = &DAT_3f8000003f800000;
    ppuVar8 = local_d8;
LAB_1481ff570:
    *(undefined4 *)(ppuVar8 + 1) = 2;
    uVar11 = FUN_1481fe0ce(param_2);
    puVar5[0x11] = uVar11;
    puVar5[0x12] = 1;
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14ad7a5c0;
  local_50 = FUN_143ad1caa;
  local_78 = &LAB_14806c8d4;
  FUN_1481fe7cc(param_2);
LAB_1481ff14a:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ff5fe FUN_1481ff5fe body=269 status=ok
// SIG undefined FUN_1481ff5fe(void)

longlong FUN_1481ff5fe(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar5 = (int)uVar7 + 0x5c;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  *(undefined1 (*) [16])(lVar4 + 0x3c + uVar7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar4 + 0x2c + uVar7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar4 + 0x1c + uVar7) = (undefined1  [16])0x0;
  *(undefined4 *)(lVar4 + uVar7) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0xc + uVar7) = DAT_14c846358;
  *(undefined8 *)(lVar4 + 4 + uVar7) = DAT_14c846350;
  *(undefined8 *)(lVar4 + 0x10 + uVar7) = DAT_14c846350;
  *(undefined4 *)(lVar4 + 0x18 + uVar7) = DAT_14c846358;
  *(undefined4 *)(lVar4 + 0x1c + uVar7) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x20 + uVar7) = DAT_14c846350;
  *(undefined4 *)(lVar4 + 0x28 + uVar7) = DAT_14c846358;
  *(undefined8 *)(lVar4 + 0x2c + uVar7) = DAT_14c846350;
  *(undefined4 *)(lVar4 + 0x34 + uVar7) = DAT_14c846358;
  *(undefined4 *)(lVar4 + 0x38 + uVar7) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x3c + uVar7) = 0;
  *(undefined8 *)(lVar4 + 0x44 + uVar7) = DAT_14c9dd490;
  puVar1 = (undefined4 *)(lVar4 + 0x4c + uVar7);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return lVar4 + uVar7;
}



// FUNCTION 1481ff70c FUN_1481ff70c body=34 status=ok
// SIG undefined FUN_1481ff70c(void)

void FUN_1481ff70c(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145e059f6();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1481ff72e FUN_1481ff72e body=452 status=ok
// SIG undefined FUN_1481ff72e(void)

void FUN_1481ff72e(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  float *pfVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  
  uVar12 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar12 + 0x5c;
  lVar13 = *(longlong *)(param_2 + 8);
  lVar10 = *(longlong *)(param_2 + 0x18);
  pfVar1 = (float *)(lVar10 + 0x3c + uVar12);
  pfVar15 = (float *)((int)pfVar1[-1] * 4 + lVar13);
  if (pfVar1[-1] == -NAN) {
    pfVar15 = pfVar1;
  }
  fVar3 = *pfVar15;
  lVar16 = (longlong)((int)pfVar1[-0xf] * 4);
  pfVar15 = (float *)(lVar13 + lVar16);
  pfVar2 = (float *)(lVar13 + 4 + lVar16);
  pfVar17 = (float *)(lVar13 + 8 + lVar16);
  if (pfVar1[-0xf] == -NAN) {
    pfVar17 = (float *)(lVar10 + 0xc + uVar12);
    pfVar2 = (float *)(lVar10 + 8 + uVar12);
    pfVar15 = (float *)(lVar10 + 4 + uVar12);
  }
  fVar4 = *pfVar17;
  fVar5 = *pfVar2;
  fVar6 = *pfVar15;
  lVar16 = (longlong)((int)pfVar1[-8] * 4);
  pfVar15 = (float *)(lVar10 + 0x20 + uVar12);
  pfVar2 = (float *)(lVar10 + 0x24 + uVar12);
  pfVar17 = (float *)(lVar10 + 0x28 + uVar12);
  pfVar11 = pfVar17;
  if (pfVar1[-8] != -NAN) {
    pfVar15 = (float *)(lVar13 + lVar16);
    pfVar2 = (float *)(lVar13 + 4 + lVar16);
    pfVar11 = (float *)(lVar13 + 8 + lVar16);
  }
  fVar7 = *pfVar15;
  fVar8 = *pfVar2;
  fVar9 = *pfVar11;
  uVar14 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar12 = (ulonglong)uVar14;
  lVar13 = FUN_145e059f6();
  *(uint *)(param_2 + 0x38) = uVar14 + *(int *)(lVar13 + 0x3c);
  lVar13 = *(longlong *)(param_2 + 0x30);
  *(float *)(lVar13 + uVar12) = fVar6;
  *(float *)(lVar13 + 4 + uVar12) = fVar5;
  *(float *)(lVar13 + 8 + uVar12) = fVar4;
  *(float *)(lVar13 + 0x10 + uVar12) = fVar7 - fVar6;
  *(float *)(lVar13 + 0x14 + uVar12) = fVar8 - fVar5;
  *(float *)(lVar13 + 0x18 + uVar12) = fVar9 - fVar4;
  *(uint *)(lVar13 + 0x28 + uVar12) = -(uint)(0.0 < fVar3) & (uint)(1.0 / (fVar3 * fVar3));
  *(undefined8 *)(lVar13 + 0x20 + uVar12) = *(undefined8 *)(pfVar17 + 7);
  return;
}



// FUNCTION 1481ff8f2 FUN_1481ff8f2 body=930 status=ok
// SIG undefined FUN_1481ff8f2(void)

void FUN_1481ff8f2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 **ppuVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8 [2];
  undefined8 *local_98 [2];
  undefined8 local_88;
  int local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar5 = (undefined4 *)FUN_1481ffc96(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) goto LAB_1481ff924;
  lVar10 = (longlong)(int)((longlong *)*param_2)[1];
  iVar3 = -1;
  iVar6 = -1;
  if (lVar10 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar11 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar11) == DAT_14cb441b8) &&
         (*(int *)(lVar1 + 8 + uVar11) == DAT_14cb441c0)) {
        iVar6 = (int)(uVar11 >> 2) * -0x55555555;
        goto LAB_1481ff99d;
      }
      uVar11 = uVar11 + 0xc;
    } while (lVar10 * 0xc != uVar11);
    iVar6 = -1;
  }
LAB_1481ff99d:
  puVar5[0xf] = iVar6;
  lVar10 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar10 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar11 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar11) == DAT_14cb44248) &&
         (*(int *)(lVar1 + 8 + uVar11) == DAT_14cb44250)) {
        iVar3 = (int)(uVar11 >> 2) * -0x55555555;
        break;
      }
      uVar11 = uVar11 + 0xc;
    } while (lVar10 * 0xc != uVar11);
  }
  puVar5[0x10] = iVar3;
  lVar10 = (longlong)(int)((longlong *)*param_2)[1];
  uVar4 = 0xffffffff;
  uVar7 = 0xffffffff;
  if (lVar10 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar11 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar11) == DAT_14cb441f4) &&
         (*(int *)(lVar1 + 8 + uVar11) == DAT_14cb441fc)) {
        uVar7 = (int)(uVar11 >> 2) * -0x55555555;
        goto LAB_1481ffa36;
      }
      uVar11 = uVar11 + 0xc;
    } while (lVar10 * 0xc != uVar11);
    uVar7 = 0xffffffff;
  }
LAB_1481ffa36:
  puVar5[0x11] = uVar7;
  lVar10 = (longlong)(int)((longlong *)*param_2)[1];
  if (lVar10 != 0) {
    lVar1 = *(longlong *)*param_2;
    uVar11 = 0;
    do {
      if ((*(longlong *)(lVar1 + uVar11) == DAT_14cb44284) &&
         (*(int *)(lVar1 + 8 + uVar11) == DAT_14cb4428c)) {
        uVar4 = (int)(uVar11 >> 2) * -0x55555555;
        break;
      }
      uVar11 = uVar11 + 0xc;
    } while (lVar10 * 0xc != uVar11);
  }
  puVar5[0x12] = uVar4;
  if ((uVar7 & uVar4) == 0xffffffff) goto LAB_1481ff924;
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = FUN_1482029d2(param_2,param_1 + 0x3c);
    uVar13 = 0x447a0000;
    uVar14 = 0x447a0000;
  }
  else {
    uVar13 = *(undefined4 *)(param_1 + 0x48);
    uVar14 = uVar13;
    if (*(int *)(param_1 + 0x38) != 1) {
      uVar14 = *(undefined4 *)(param_1 + 0x4c);
    }
    uVar2 = 0xffffffff;
  }
  puVar5[10] = uVar2;
  puVar5[0xb] = uVar13;
  puVar5[0xc] = uVar14;
  uVar8 = DAT_14c8461b4;
  if (*(int *)(param_1 + 0x58) == 0) {
    uVar13 = FUN_1482029d2(param_2,param_1 + 0x5c);
    uVar12 = uVar8;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x68);
    uVar12 = uVar8;
    if (*(int *)(param_1 + 0x58) != 1) {
      uVar12 = *(undefined8 *)(param_1 + 0x70);
    }
    uVar13 = 0xffffffff;
  }
  *puVar5 = uVar13;
  *(undefined8 *)(puVar5 + 1) = uVar8;
  *(undefined8 *)(puVar5 + 3) = uVar12;
  uVar8 = DAT_14c8461b4;
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar13 = FUN_1482029d2(param_2,param_1 + 0x84);
    uVar12 = uVar8;
  }
  else {
    uVar8 = *(undefined8 *)(param_1 + 0x90);
    uVar12 = uVar8;
    if (*(int *)(param_1 + 0x80) != 1) {
      uVar12 = *(undefined8 *)(param_1 + 0x98);
    }
    uVar13 = 0xffffffff;
  }
  puVar5[5] = uVar13;
  *(undefined8 *)(puVar5 + 6) = uVar8;
  *(undefined8 *)(puVar5 + 8) = uVar12;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    iVar3 = *(int *)(param_1 + 200);
    if (iVar3 < 2 || 1 < *(int *)(param_1 + 0xb0) - 5U) {
      if (iVar3 < 1) {
        uVar13 = 0x3f800000;
      }
      else {
        uVar13 = **(undefined4 **)(param_1 + 0xc0);
      }
      local_98[0] = &local_30;
      local_30 = (undefined1 *)CONCAT44(uVar13,uVar13);
      ppuVar9 = local_98;
      goto LAB_1481ffc0b;
    }
    local_88 = *(undefined8 *)(param_1 + 0xc0);
    local_80 = iVar3;
    uVar13 = FUN_1481fe0ce(param_2);
    puVar5[0xd] = uVar13;
    puVar5[0xe] = *(int *)(param_1 + 200) + -1;
  }
  else {
    local_a8[0] = &local_30;
    local_30 = &DAT_3f8000003f800000;
    ppuVar9 = local_a8;
LAB_1481ffc0b:
    *(undefined4 *)(ppuVar9 + 1) = 2;
    uVar13 = FUN_1481fe0ce(param_2);
    puVar5[0xd] = uVar13;
    puVar5[0xe] = 1;
  }
  local_68 = 0;
  local_58 = &PTR_LAB_14ad7a5c0;
  local_50 = FUN_143ad2109;
  local_78 = &LAB_14806c8d4;
  FUN_1481fe7cc(param_2);
LAB_1481ff924:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481ffc96 FUN_1481ffc96 body=211 status=ok
// SIG undefined FUN_1481ffc96(void)

longlong FUN_1481ffc96(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar8 = (longlong)(iVar2 + 3) & 0xfffffffffffffffc;
  iVar6 = (int)uVar8 + 0x4c;
  *(int *)(plVar3 + 1) = iVar6;
  uVar7 = iVar6 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar7) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar7);
  lVar4 = **(longlong **)(param_1 + 0x10);
  *(undefined8 *)(lVar4 + 0x34 + uVar8) = 0;
  *(undefined1 (*) [16])(lVar4 + 0x24 + uVar8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar4 + 0x14 + uVar8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(lVar4 + 4 + uVar8) = (undefined1  [16])0x0;
  uVar5 = DAT_14c8461b4;
  *(undefined4 *)(lVar4 + uVar8) = 0xffffffff;
  *(undefined8 *)(lVar4 + 4 + uVar8) = uVar5;
  *(undefined8 *)(lVar4 + 0xc + uVar8) = uVar5;
  uVar5 = DAT_14c8461b4;
  *(undefined4 *)(lVar4 + 0x14 + uVar8) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x18 + uVar8) = uVar5;
  *(undefined8 *)(lVar4 + 0x20 + uVar8) = uVar5;
  *(undefined4 *)(lVar4 + 0x28 + uVar8) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x2c + uVar8) = 0;
  *(undefined8 *)(lVar4 + 0x34 + uVar8) = DAT_14c9dd490;
  puVar1 = (undefined4 *)(lVar4 + 0x3c + uVar8);
  *puVar1 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  return lVar4 + uVar8;
}



// FUNCTION 1481ffd6a FUN_1481ffd6a body=34 status=ok
// SIG undefined FUN_1481ffd6a(void)

void FUN_1481ffd6a(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145dfe8c2();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 1481ffd8c FUN_1481ffd8c body=318 status=ok
// SIG undefined FUN_1481ffd8c(void)

void FUN_1481ffd8c(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  
  uVar8 = (longlong)(*(int *)(param_2 + 0x28) + 3) & 0xfffffffffffffffc;
  *(int *)(param_2 + 0x28) = (int)uVar8 + 0x4c;
  lVar10 = *(longlong *)(param_2 + 8);
  lVar7 = *(longlong *)(param_2 + 0x18);
  pfVar9 = (float *)(lVar7 + 0x2c + uVar8);
  fVar4 = pfVar9[-1];
  pfVar11 = (float *)((int)fVar4 * 4 + lVar10);
  if (fVar4 == -NAN) {
    pfVar11 = pfVar9;
  }
  fVar4 = *pfVar11;
  piVar1 = (int *)(lVar7 + uVar8);
  pfVar9 = (float *)(*piVar1 * 4 + lVar10);
  if (*piVar1 == -1) {
    pfVar9 = (float *)(piVar1 + 1);
  }
  fVar5 = *pfVar9;
  fVar6 = pfVar9[1];
  pfVar9 = (float *)(piVar1[5] * 4 + lVar10);
  if (piVar1[5] == -1) {
    pfVar9 = (float *)(lVar7 + uVar8 + 0x18);
  }
  fVar2 = *pfVar9;
  fVar3 = pfVar9[1];
  uVar12 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar13 = (ulonglong)uVar12;
  lVar10 = FUN_145dfe8c2();
  *(uint *)(param_2 + 0x38) = uVar12 + *(int *)(lVar10 + 0x3c);
  lVar10 = *(longlong *)(param_2 + 0x30);
  *(float *)(lVar10 + uVar13) = fVar5;
  *(float *)(lVar10 + 4 + uVar13) = fVar6;
  *(float *)(lVar10 + 8 + uVar13) = fVar2 - fVar5;
  *(float *)(lVar10 + 0xc + uVar13) = fVar3 - fVar6;
  *(uint *)(lVar10 + 0x18 + uVar13) = -(uint)(0.0 < fVar4) & (uint)(1.0 / (fVar4 * fVar4));
  *(undefined8 *)(lVar10 + 0x10 + uVar13) = *(undefined8 *)(lVar7 + uVar8 + 0x34);
  return;
}



// FUNCTION 1481ffeca FUN_1481ffeca body=1381 status=ok
// SIG undefined FUN_1481ffeca(void)

float * FUN_1481ffeca(float *param_1,longlong param_2,int *param_3,ulonglong param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  float fVar22;
  undefined4 unaff_XMM15_Db;
  undefined4 unaff_XMM15_Dc;
  undefined4 unaff_XMM15_Dd;
  undefined1 auStack_158 [40];
  float local_130;
  float local_12c;
  undefined1 local_128 [16];
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  ulonglong local_e0;
  
  param_4 = param_4 & 0xffffffff;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar7 = *param_3;
  if (iVar7 == 2) {
    fVar8 = (float)param_3[4];
    fVar9 = (float)param_3[5];
    fVar17 = (float)param_3[6];
    fVar18 = (float)param_3[7];
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    iVar7 = *(int *)(param_2 + 0x18) + 0x1905;
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x60) + param_4 * 4) + 0xdfd;
    local_108 = 0x1bd3;
    local_104 = uVar3;
    local_100 = iVar5;
    local_fc = iVar7;
    FUN_148204234(&local_f8,&local_108);
    fVar9 = (float)((uint)local_f8 >> 8) * 5.9604645e-08 * fVar8 + fVar9;
    local_108 = 0x1bd4;
    local_104 = uVar3;
    local_100 = iVar5;
    local_fc = iVar7;
    FUN_148204234(&local_f8,&local_108);
    fVar18 = (float)((uint)local_f8 >> 8) * 5.9604645e-08 * fVar17 + fVar18;
    fVar8 = sinf(fVar18);
    fVar17 = cosf(fVar18);
    *param_1 = fVar17 * fVar9;
    param_1[1] = fVar8 * fVar9;
    param_1[2] = 0.0;
  }
  else if (iVar7 == 1) {
    FUN_1482004ec(param_2,&local_f8,param_4,0);
    local_f4 = local_f4 + -0.5;
    local_f8 = local_f8 + -0.5;
    fVar9 = local_f8 * local_f8 + local_f4 * local_f4;
    fVar8 = (float)param_3[6];
    fVar17 = 0.0;
    if (0.0001 <= fVar9) {
      fVar17 = local_f4 * (1.0 / SQRT(fVar9));
    }
    fVar18 = (float)param_3[4];
    fVar1 = (float)param_3[5];
    *param_1 = (float)(-(uint)(fVar9 < 0.0001) & 0x3f800000 |
                      ~-(uint)(fVar9 < 0.0001) & (uint)(local_f8 * (1.0 / SQRT(fVar9)))) * fVar8 *
               local_f0;
    param_1[1] = fVar17 * fVar8 * local_f0;
    param_1[2] = local_ec * fVar18 + fVar1;
  }
  else if (iVar7 == 0) {
    fVar8 = (float)param_3[4];
    fVar9 = (float)param_3[5];
    fVar17 = (float)param_3[6];
    fVar18 = (float)param_3[8];
    fVar1 = (float)param_3[9];
    fVar2 = (float)param_3[10];
    iVar7 = param_3[1];
    local_12c = (float)param_3[7];
    fVar10 = (float)param_3[0xb];
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    iVar6 = *(int *)(param_2 + 0x18) + 0x1905;
    iVar5 = *(int *)(*(longlong *)(param_2 + 0x60) + param_4 * 4) + 0xdfd;
    local_108 = 0x1bd3;
    local_104 = uVar3;
    local_100 = iVar5;
    local_fc = iVar6;
    FUN_148204234(&local_f8);
    fVar21 = (float)((uint)local_f0 >> 8) * 5.9604645e-08;
    fVar22 = (float)((uint)local_f4 >> 8) * 5.9604645e-08;
    fVar19 = (float)((uint)local_f8 >> 8) * 5.9604645e-08;
    if (iVar7 == 1) {
      auVar15._0_12_ = ZEXT812(0x3f000000);
      auVar15._12_4_ = 0;
      auVar13._4_4_ = unaff_XMM14_Db;
      auVar13._0_4_ = fVar21;
      auVar13._8_4_ = unaff_XMM14_Dc;
      auVar13._12_4_ = unaff_XMM14_Dd;
      auVar16._4_12_ = auVar13._4_12_;
      auVar16._0_4_ = fVar21 + 0.5;
      local_128 = blendps(auVar16,ZEXT816(0),0xe);
      auVar11._4_4_ = unaff_XMM15_Db;
      auVar11._0_4_ = fVar22;
      auVar11._8_4_ = unaff_XMM15_Dc;
      auVar11._12_4_ = unaff_XMM15_Dd;
      auVar12._4_12_ = auVar11._4_12_;
      auVar12._0_4_ = fVar22 + 0.5;
      auVar13 = blendps(auVar12,ZEXT816(0),0xe);
      auVar13 = roundps(ZEXT416((uint)fVar10),auVar13,1);
      local_108 = 0x1bd4;
      local_130 = fVar10;
      local_104 = uVar3;
      local_100 = iVar5;
      local_fc = iVar6;
      FUN_148204234(&local_f8);
      uVar4 = (uint)local_f8 % 3;
      fVar10 = fVar19;
      if (uVar4 == 0) {
        auVar15 = ZEXT416((uint)(fVar19 + 0.5));
        auVar16 = roundps(ZEXT416((uint)(fVar19 + 0.5)),auVar15,1);
        fVar10 = auVar16._0_4_;
      }
      auVar16 = roundps(auVar15,local_128,1);
      fVar20 = auVar13._0_4_;
      if (uVar4 != 1) {
        fVar20 = fVar22;
      }
      fVar14 = auVar16._0_4_;
      if (uVar4 != 2) {
        fVar14 = fVar21;
      }
      *param_1 = fVar19 * local_12c + local_130 + fVar18 + fVar8 * fVar10;
      param_1[1] = fVar22 * local_12c + local_130 + fVar1 + fVar9 * fVar20;
      param_1[2] = fVar21 * local_12c + local_130 + fVar2 + fVar17 * fVar14;
    }
    else {
      *param_1 = fVar18 + fVar8 * fVar19;
      param_1[1] = fVar1 + fVar9 * fVar22;
      param_1[2] = fVar2 + fVar17 * fVar21;
    }
  }
  else {
    fVar8 = (float)param_3[4];
    fVar9 = (float)param_3[5];
    FUN_1480700a6(param_2,&local_114,param_4,0);
    local_104 = *(undefined4 *)(param_2 + 0x14);
    local_fc = *(int *)(param_2 + 0x18) + 0x1905;
    local_100 = *(int *)(*(longlong *)(param_2 + 0x60) + param_4 * 4) + 0xdfd;
    local_108 = 0x1bd4;
    FUN_148204234(&local_f8);
    fVar9 = (float)((uint)local_f8 >> 8) * 5.9604645e-08 * fVar8 + fVar9;
    *param_1 = fVar9 * local_114;
    param_1[1] = local_110 * fVar9;
    param_1[2] = local_10c * fVar9;
  }
  if ((local_e0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 148200430 FUN_148200430 body=187 status=ok
// SIG undefined FUN_148200430(void)

float * FUN_148200430(longlong param_1,float *param_2,ulonglong param_3,int param_4)

{
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *(int *)(param_1 + 0x18) + 0x1905;
  local_30 = *(int *)(*(longlong *)(param_1 + 0x60) + (param_3 & 0xffffffff) * 4) + 0xdfd;
  local_38 = param_4 + 0x1bd3;
  FUN_148204234(&local_28);
  *param_2 = (float)(local_28 >> 8) * 5.9604645e-08;
  param_2[1] = (float)(local_24 >> 8) * 5.9604645e-08;
  param_2[2] = (float)(local_20 >> 8) * 5.9604645e-08;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482004ec FUN_1482004ec body=206 status=ok
// SIG undefined FUN_1482004ec(void)

float * FUN_1482004ec(longlong param_1,float *param_2,ulonglong param_3,int param_4)

{
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = *(undefined4 *)(param_1 + 0x14);
  local_1c = *(int *)(param_1 + 0x18) + 0x1905;
  local_20 = *(int *)(*(longlong *)(param_1 + 0x60) + (param_3 & 0xffffffff) * 4) + 0xdfd;
  local_28 = param_4 + 0x1bd3;
  FUN_148204234(&local_38);
  *param_2 = (float)(local_38 >> 8) * 5.9604645e-08;
  param_2[1] = (float)(local_34 >> 8) * 5.9604645e-08;
  param_2[2] = (float)(local_30 >> 8) * 5.9604645e-08;
  param_2[3] = (float)(local_2c >> 8) * 5.9604645e-08;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482005bc FUN_1482005bc body=759 status=ok
// SIG undefined FUN_1482005bc(void)

void FUN_1482005bc(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined4 *)FUN_1482008b4(param_2);
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    lVar6 = (longlong)(int)((longlong *)*param_2)[1];
    uVar3 = 0xffffffff;
    uVar5 = 0xffffffff;
    if (lVar6 != 0) {
      lVar2 = *(longlong *)*param_2;
      uVar7 = 0;
      do {
        if ((*(longlong *)(lVar2 + uVar7) == DAT_14cb441b8) &&
           (*(int *)(lVar2 + 8 + uVar7) == DAT_14cb441c0)) {
          uVar5 = (int)(uVar7 >> 2) * -0x55555555;
          goto LAB_148200667;
        }
        uVar7 = uVar7 + 0xc;
      } while (lVar6 * 0xc != uVar7);
      uVar5 = 0xffffffff;
    }
LAB_148200667:
    puVar4[0xc] = uVar5;
    lVar6 = (longlong)(int)((longlong *)*param_2)[1];
    if (lVar6 != 0) {
      lVar2 = *(longlong *)*param_2;
      uVar7 = 0;
      do {
        if ((*(longlong *)(lVar2 + uVar7) == DAT_14cb44248) &&
           (*(int *)(lVar2 + 8 + uVar7) == DAT_14cb44250)) {
          uVar3 = (int)(uVar7 >> 2) * -0x55555555;
          break;
        }
        uVar7 = uVar7 + 0xc;
      } while (lVar6 * 0xc != uVar7);
    }
    puVar4[0xd] = uVar3;
    if ((uVar5 & uVar3) != 0xffffffff) {
      switch(*(undefined4 *)(param_1 + 0x30)) {
      case 0:
        *puVar4 = 0;
        puVar4[1] = (uint)*(byte *)(param_1 + 0x40);
        fVar9 = *(float *)(param_1 + 0x48);
        fVar8 = *(float *)(param_1 + 0x44);
        uVar1 = *(undefined4 *)(param_1 + 0x3c);
        *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x34);
        puVar4[6] = uVar1;
        puVar4[7] = fVar9 - fVar8;
        uVar1 = *(undefined4 *)(param_1 + 0x44);
        fVar9 = *(float *)(param_1 + 0x3c);
        fVar8 = *(float *)(param_1 + 0x38);
        puVar4[8] = *(float *)(param_1 + 0x34) * -0.5;
        puVar4[9] = fVar8 * -0.5;
        puVar4[10] = fVar9 * -0.5;
        puVar4[0xb] = uVar1;
        break;
      case 1:
        *puVar4 = 1;
        fVar9 = *(float *)(param_1 + 0x54);
        puVar4[4] = fVar9;
        puVar4[5] = -*(float *)(param_1 + 0x5c) * fVar9;
        puVar4[6] = *(undefined4 *)(param_1 + 0x58);
        break;
      case 2:
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(param_1 + 0x4c);
        *(undefined8 *)(puVar4 + 6) = 0;
        fVar9 = *(float *)(param_1 + 0x50);
        puVar4[8] = *(float *)(param_1 + 0x4c) * -0.5;
        puVar4[9] = fVar9 * -0.5;
        *(undefined8 *)(puVar4 + 10) = 0;
        break;
      case 3:
        fVar9 = 1.0 - *(float *)(param_1 + 100);
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
        fVar8 = 0.0;
        if (0.0 < fVar9) {
          if (fVar9 < 0.0) {
            fVar8 = sqrtf(fVar9);
          }
          else {
            fVar8 = SQRT(fVar9);
          }
        }
        *puVar4 = 2;
        puVar4[4] = (1.0 - fVar8) * *(float *)(param_1 + 0x60);
        puVar4[5] = fVar8 * *(float *)(param_1 + 0x60);
        puVar4[6] = (1.0 - *(float *)(param_1 + 0x68)) * -6.2831855;
        puVar4[7] = 0;
        break;
      case 4:
        *puVar4 = 3;
        puVar4[4] = *(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x6c);
        puVar4[5] = *(undefined4 *)(param_1 + 0x6c);
        break;
      default:
        *puVar4 = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        *(undefined8 *)(puVar4 + 10) = 0;
      }
      local_68 = 0;
      local_58 = &PTR_LAB_14ad7a5c0;
      local_50 = FUN_143ad2518;
      local_78 = &LAB_14806c8d4;
      FUN_1481fe7cc(param_2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1482008b4 FUN_1482008b4 body=132 status=ok
// SIG undefined FUN_1482008b4(void)

longlong FUN_1482008b4(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar2 = (int)plVar3[1];
  uVar7 = (longlong)(iVar2 + 0xf) & 0xfffffffffffffff0;
  iVar5 = (int)uVar7 + 0x40;
  *(int *)(plVar3 + 1) = iVar5;
  uVar6 = iVar5 - iVar2;
  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar2) < uVar6) {
    FUN_1447403be(plVar3);
  }
  memset((void *)((longlong)iVar2 + *plVar3),0,(longlong)(int)uVar6);
  lVar4 = **(longlong **)(param_1 + 0x10);
  puVar1 = (undefined8 *)(lVar4 + 0x30 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x20 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x10 + uVar7);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + uVar7) = 0;
  ((undefined8 *)(lVar4 + uVar7))[1] = 0;
  *(undefined8 *)(lVar4 + 0x30 + uVar7) = 0xffffffffffffffff;
  return lVar4 + uVar7;
}



// FUNCTION 148200938 FUN_148200938 body=34 status=ok
// SIG undefined FUN_148200938(void)

void FUN_148200938(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_2;
  lVar2 = FUN_145d3f55e();
  *param_2 = (iVar1 + 0xfU & 0xfffffff0) + *(int *)(lVar2 + 0x3c);
  return;
}



// FUNCTION 14820095a FUN_14820095a body=92 status=ok
// SIG undefined FUN_14820095a(void)

void FUN_14820095a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = *(int *)(param_2 + 0x38) + 0xfU & 0xfffffff0;
  uVar8 = (ulonglong)uVar7;
  lVar5 = FUN_145d3f55e();
  *(uint *)(param_2 + 0x38) = *(int *)(lVar5 + 0x3c) + uVar7;
  lVar5 = *(longlong *)(param_2 + 0x30);
  uVar7 = *(int *)(param_2 + 0x28) + 0xfU & 0xfffffff0;
  lVar6 = (longlong)(int)uVar7;
  *(uint *)(param_2 + 0x28) = uVar7 + 0x40;
  lVar3 = *(longlong *)(param_2 + 0x18);
  uVar4 = ((undefined8 *)(lVar3 + lVar6))[1];
  *(undefined8 *)(lVar5 + uVar8) = *(undefined8 *)(lVar3 + lVar6);
  ((undefined8 *)(lVar5 + uVar8))[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar6);
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(lVar5 + 0x10 + uVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar6);
  uVar4 = puVar1[1];
  puVar2 = (undefined8 *)(lVar5 + 0x20 + uVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  return;
}



// FUNCTION 1482009b6 FUN_1482009b6 body=318 status=ok
// SIG undefined FUN_1482009b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1482009b6(undefined1 *param_1,undefined4 param_2,float *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  *(undefined2 *)(param_1 + 7) = 0xff00;
  cVar6 = -(char)param_2;
  param_1[6] = cVar6;
  *(undefined2 *)(param_1 + 4) = 0x1ff;
  bVar9 = (char)param_2 - 1;
  param_1[3] = bVar9 | 1;
  uVar7 = CONCAT31((int3)((uint)param_2 >> 8),cVar6) | 1;
  param_1[2] = (char)uVar7;
  param_1[1] = bVar9;
  *param_1 = 0xff;
  uVar1 = *(undefined8 *)param_3;
  uVar2 = *(undefined8 *)(param_3 + 2);
  uVar3 = *(undefined8 *)(param_3 + 4);
  uVar4 = *(undefined8 *)(param_3 + 6);
  uVar5 = *(undefined8 *)(param_3 + 10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  auVar11 = *(undefined1 (*) [16])(param_3 + 8);
  auVar10._4_4_ = -(uint)(1e-08 < ABS(auVar11._4_4_));
  auVar10._0_4_ = -(uint)(1e-08 < ABS(auVar11._0_4_));
  auVar10._8_4_ = -(uint)(1e-08 < ABS(auVar11._8_4_));
  auVar10._12_4_ = -(uint)(1e-08 < ABS(auVar11._12_4_));
  iVar8 = movmskps(uVar7,auVar10);
  auVar10 = _DAT_14c846080;
  fVar12 = _DAT_14c846060;
  fVar13 = fRam000000014c846064;
  fVar14 = fRam000000014c846068;
  fVar15 = fRam000000014c84606c;
  auVar16 = _DAT_14c846070;
  if (iVar8 != 0) {
    auVar10 = insertps(auVar11,0x3f800000,0x30);
    auVar16 = divps(_DAT_149e1ef10,auVar11);
    auVar11._0_4_ = -(uint)(1e-08 < ABS(auVar10._0_4_)) & auVar16._0_4_;
    auVar11._4_4_ = -(uint)(1e-08 < ABS(auVar10._4_4_)) & auVar16._4_4_;
    auVar11._8_4_ = -(uint)(1e-08 < ABS(auVar10._8_4_)) & auVar16._8_4_;
    auVar11._12_4_ = -(uint)(1e-08 < ABS(auVar10._12_4_)) & auVar16._12_4_;
    auVar10 = blendps(auVar11,ZEXT816(0),8);
    fVar12 = *param_3 * -1.0;
    fVar13 = param_3[1] * -1.0;
    fVar14 = param_3[2] * -1.0;
    fVar15 = param_3[3] * 1.0;
    fVar17 = param_3[4] * auVar10._0_4_;
    fVar18 = param_3[5] * auVar10._4_4_;
    fVar19 = param_3[6] * auVar10._8_4_;
    fVar20 = param_3[7] * auVar10._12_4_;
    fVar21 = fVar18 * fVar12 - fVar13 * fVar17;
    fVar22 = fVar19 * fVar13 - fVar14 * fVar18;
    fVar23 = fVar17 * fVar14 - fVar12 * fVar19;
    fVar24 = fVar20 * fVar15 - fVar15 * fVar20;
    fVar21 = fVar21 + fVar21;
    fVar22 = fVar22 + fVar22;
    fVar23 = fVar23 + fVar23;
    fVar24 = fVar24 + fVar24;
    auVar16._0_4_ = 0.0 - ((fVar21 * fVar13 - fVar23 * fVar14) + fVar15 * fVar22 + fVar17);
    auVar16._4_4_ = 0.0 - ((fVar22 * fVar14 - fVar21 * fVar12) + fVar15 * fVar23 + fVar18);
    auVar16._8_4_ = 0.0 - ((fVar23 * fVar12 - fVar22 * fVar13) + fVar15 * fVar21 + fVar19);
    auVar16._12_4_ = 0.0 - ((fVar24 * fVar15 - fVar24 * fVar15) + fVar15 * fVar24 + fVar20);
    auVar16 = blendps(auVar16,ZEXT816(0),8);
  }
  *(float *)(param_1 + 0x40) = fVar12;
  *(float *)(param_1 + 0x44) = fVar13;
  *(float *)(param_1 + 0x48) = fVar14;
  *(float *)(param_1 + 0x4c) = fVar15;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar10;
  return;
}



// FUNCTION 148200af4 FUN_148200af4 body=419 status=ok
// SIG undefined FUN_148200af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_148200af4(longlong param_1,float *param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  pfVar1 = (float *)(param_1 + 0x10);
  auVar17._4_4_ = -(uint)(0.0001 < ABS(param_2[5] - *(float *)(param_1 + 0x24)));
  auVar17._0_4_ = -(uint)(0.0001 < ABS(param_2[4] - *(float *)(param_1 + 0x20)));
  auVar17._8_4_ = -(uint)(0.0001 < ABS(param_2[6] - *(float *)(param_1 + 0x28)));
  auVar17._12_4_ = -(uint)(0.0001 < ABS(param_2[7] - *(float *)(param_1 + 0x2c)));
  iVar7 = movmskps(param_3,auVar17);
  if (iVar7 == 0) {
    auVar9._4_4_ = -(uint)(0.0001 < ABS(param_2[1] - *(float *)(param_1 + 0x14)));
    auVar9._0_4_ = -(uint)(0.0001 < ABS(*param_2 - *pfVar1));
    auVar9._8_4_ = -(uint)(0.0001 < ABS(param_2[2] - *(float *)(param_1 + 0x18)));
    auVar9._12_4_ = -(uint)(0.0001 < ABS(param_2[3] - *(float *)(param_1 + 0x1c)));
    iVar7 = movmskps(0,auVar9);
    uVar8 = 0;
    if (((iVar7 == 0) ||
        (auVar20._4_4_ = -(uint)(0.0001 < ABS(param_2[1] + *(float *)(param_1 + 0x14))),
        auVar20._0_4_ = -(uint)(0.0001 < ABS(*param_2 + *pfVar1)),
        auVar20._8_4_ = -(uint)(0.0001 < ABS(param_2[2] + *(float *)(param_1 + 0x18))),
        auVar20._12_4_ = -(uint)(0.0001 < ABS(param_2[3] + *(float *)(param_1 + 0x1c))),
        uVar8 = movmskps(iVar7,auVar20), (char)uVar8 == '\0')) &&
       (auVar11._4_4_ = -(uint)(0.0001 < ABS(param_2[9] - *(float *)(param_1 + 0x34))),
       auVar11._0_4_ = -(uint)(0.0001 < ABS(param_2[8] - *(float *)(param_1 + 0x30))),
       auVar11._8_4_ = -(uint)(0.0001 < ABS(param_2[10] - *(float *)(param_1 + 0x38))),
       auVar11._12_4_ = -(uint)(0.0001 < ABS(param_2[0xb] - *(float *)(param_1 + 0x3c))),
       iVar7 = movmskps(uVar8,auVar11), iVar7 == 0)) {
      return 0;
    }
  }
  uVar2 = *(undefined8 *)param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar6 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  *(undefined8 *)pfVar1 = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  auVar17 = *(undefined1 (*) [16])(param_2 + 8);
  auVar16._4_4_ = -(uint)(1e-08 < ABS(auVar17._4_4_));
  auVar16._0_4_ = -(uint)(1e-08 < ABS(auVar17._0_4_));
  auVar16._8_4_ = -(uint)(1e-08 < ABS(auVar17._8_4_));
  auVar16._12_4_ = -(uint)(1e-08 < ABS(auVar17._12_4_));
  iVar7 = movmskps((int)pfVar1,auVar16);
  auVar9 = _DAT_14c846080;
  fVar12 = _DAT_14c846060;
  fVar13 = fRam000000014c846064;
  fVar14 = fRam000000014c846068;
  fVar15 = fRam000000014c84606c;
  auVar20 = _DAT_14c846070;
  if (iVar7 != 0) {
    auVar9 = insertps(auVar17,0x3f800000,0x30);
    auVar17 = divps(_DAT_149e1ef10,auVar17);
    auVar10._0_4_ = -(uint)(1e-08 < ABS(auVar9._0_4_)) & auVar17._0_4_;
    auVar10._4_4_ = -(uint)(1e-08 < ABS(auVar9._4_4_)) & auVar17._4_4_;
    auVar10._8_4_ = -(uint)(1e-08 < ABS(auVar9._8_4_)) & auVar17._8_4_;
    auVar10._12_4_ = -(uint)(1e-08 < ABS(auVar9._12_4_)) & auVar17._12_4_;
    auVar9 = blendps(auVar10,ZEXT816(0),8);
    fVar12 = *param_2 * -1.0;
    fVar13 = param_2[1] * -1.0;
    fVar14 = param_2[2] * -1.0;
    fVar15 = param_2[3] * 1.0;
    fVar18 = param_2[4] * auVar9._0_4_;
    fVar21 = param_2[5] * auVar9._4_4_;
    fVar22 = param_2[6] * auVar9._8_4_;
    fVar23 = param_2[7] * auVar9._12_4_;
    fVar24 = fVar21 * fVar12 - fVar13 * fVar18;
    fVar25 = fVar22 * fVar13 - fVar14 * fVar21;
    fVar26 = fVar18 * fVar14 - fVar12 * fVar22;
    fVar27 = fVar23 * fVar15 - fVar15 * fVar23;
    fVar24 = fVar24 + fVar24;
    fVar25 = fVar25 + fVar25;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar27 + fVar27;
    auVar19._0_4_ = 0.0 - ((fVar24 * fVar13 - fVar26 * fVar14) + fVar15 * fVar25 + fVar18);
    auVar19._4_4_ = 0.0 - ((fVar25 * fVar14 - fVar24 * fVar12) + fVar15 * fVar26 + fVar21);
    auVar19._8_4_ = 0.0 - ((fVar26 * fVar12 - fVar25 * fVar13) + fVar15 * fVar24 + fVar22);
    auVar19._12_4_ = 0.0 - ((fVar27 * fVar15 - fVar27 * fVar15) + fVar15 * fVar27 + fVar23);
    auVar20 = blendps(auVar19,ZEXT816(0),8);
  }
  *(float *)(param_1 + 0x40) = fVar12;
  *(float *)(param_1 + 0x44) = fVar13;
  *(float *)(param_1 + 0x48) = fVar14;
  *(float *)(param_1 + 0x4c) = fVar15;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar20;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar9;
                    /* WARNING: Read-only address (ram,0x000149e1ef10) is written */
  return CONCAT71((int7)(CONCAT44((int)((ulonglong)pfVar1 >> 0x20),iVar7) >> 8),1);
}



// FUNCTION 148200c98 FUN_148200c98 body=145 status=ok
// SIG undefined FUN_148200c98(void)

void FUN_148200c98(longlong param_1,float *param_2,int param_3,int param_4,float *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)*(char *)((longlong)param_4 + (longlong)param_3 * 3 + param_1);
  if (lVar11 != -1) {
    pfVar1 = (float *)(param_1 + 0x10 + lVar11 * 0x30);
    fVar2 = *pfVar1;
    fVar3 = pfVar1[1];
    fVar4 = pfVar1[2];
    fVar5 = pfVar1[3];
    fVar6 = *param_5;
    fVar7 = param_5[1];
    fVar8 = param_5[2];
    fVar9 = param_5[3];
    *param_2 = fVar4 * fVar7 * -1.0 + fVar3 * fVar8 * 1.0 + fVar2 * fVar9 * 1.0 + fVar5 * fVar6;
    param_2[1] = fVar4 * fVar6 * 1.0 + fVar3 * fVar9 * 1.0 + fVar2 * fVar8 * -1.0 + fVar5 * fVar7;
    param_2[2] = fVar4 * fVar9 * 1.0 + fVar3 * fVar6 * -1.0 + fVar2 * fVar7 * 1.0 + fVar5 * fVar8;
    param_2[3] = fVar4 * fVar8 * -1.0 + fVar3 * fVar7 * -1.0 + fVar2 * fVar6 * -1.0 + fVar5 * fVar9;
    return;
  }
  uVar10 = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)param_2 = *(undefined8 *)param_5;
  *(undefined8 *)(param_2 + 2) = uVar10;
  return;
}



// FUNCTION 148200d2a FUN_148200d2a body=159 status=ok
// SIG undefined FUN_148200d2a(void)

void FUN_148200d2a(longlong param_1,ulonglong *param_2,int param_3,int param_4,ulonglong *param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  
  lVar8 = (longlong)*(char *)((longlong)param_4 + (longlong)param_3 * 3 + param_1);
  if (lVar8 != -1) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *param_5;
    auVar16 = insertps(auVar15,(int)param_5[1],0x28);
    lVar8 = lVar8 * 0x30;
    pfVar1 = (float *)(param_1 + 0x30 + lVar8);
    fVar14 = auVar16._0_4_ * *pfVar1;
    fVar17 = auVar16._4_4_ * pfVar1[1];
    fVar18 = auVar16._8_4_ * pfVar1[2];
    fVar19 = auVar16._12_4_ * pfVar1[3];
    pfVar1 = (float *)(param_1 + 0x10 + lVar8);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar11 = pfVar1[2];
    fVar5 = pfVar1[3];
    fVar9 = fVar17 * fVar3 - fVar4 * fVar14;
    fVar10 = fVar18 * fVar4 - fVar11 * fVar17;
    fVar12 = fVar14 * fVar11 - fVar3 * fVar18;
    fVar13 = fVar19 * fVar5 - fVar5 * fVar19;
    fVar9 = fVar9 + fVar9;
    fVar10 = fVar10 + fVar10;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    pfVar1 = (float *)(param_1 + 0x20 + lVar8);
    fVar6 = pfVar1[2];
    fVar7 = pfVar1[3];
    fVar14 = (fVar9 * fVar4 - fVar12 * fVar11) + fVar5 * fVar10 + fVar14 + *pfVar1;
    fVar11 = (fVar10 * fVar11 - fVar9 * fVar3) + fVar5 * fVar12 + fVar17 + pfVar1[1];
    *param_2 = CONCAT44(fVar11,fVar14);
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar14;
    auVar16._8_4_ = (fVar12 * fVar3 - fVar10 * fVar4) + fVar5 * fVar9 + fVar18 + fVar6;
    auVar16._12_4_ = (fVar13 * fVar5 - fVar13 * fVar5) + fVar5 * fVar13 + fVar19 + fVar7;
    uVar2 = extractps(auVar16,2);
    param_2[1] = uVar2;
    return;
  }
  *(int *)(param_2 + 1) = (int)param_5[1];
  *param_2 = *param_5;
  return;
}



// FUNCTION 148200dca FUN_148200dca body=153 status=ok
// SIG undefined FUN_148200dca(void)

void FUN_148200dca(longlong param_1,ulonglong *param_2,int param_3,int param_4,ulonglong *param_5)

{
  float *pfVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar17;
  
  lVar6 = (longlong)*(char *)((longlong)param_4 + (longlong)param_3 * 3 + param_1);
  if (lVar6 != -1) {
    lVar6 = lVar6 * 0x30;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *param_5;
    auVar14 = insertps(auVar13,(int)param_5[1],0x28);
    pfVar1 = (float *)(param_1 + 0x30 + lVar6);
    fVar12 = auVar14._0_4_ * *pfVar1;
    fVar15 = auVar14._4_4_ * pfVar1[1];
    fVar16 = auVar14._8_4_ * pfVar1[2];
    fVar17 = auVar14._12_4_ * pfVar1[3];
    pfVar1 = (float *)(param_1 + 0x10 + lVar6);
    fVar3 = *pfVar1;
    fVar4 = pfVar1[1];
    fVar9 = pfVar1[2];
    fVar5 = pfVar1[3];
    fVar7 = fVar15 * fVar3 - fVar4 * fVar12;
    fVar8 = fVar16 * fVar4 - fVar9 * fVar15;
    fVar10 = fVar12 * fVar9 - fVar3 * fVar16;
    fVar11 = fVar17 * fVar5 - fVar5 * fVar17;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    fVar10 = fVar10 + fVar10;
    fVar11 = fVar11 + fVar11;
    fVar12 = (fVar7 * fVar4 - fVar10 * fVar9) + fVar5 * fVar8 + fVar12;
    fVar9 = (fVar8 * fVar9 - fVar7 * fVar3) + fVar5 * fVar10 + fVar15;
    *param_2 = CONCAT44(fVar9,fVar12);
    auVar14._4_4_ = fVar9;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = (fVar10 * fVar3 - fVar8 * fVar4) + fVar5 * fVar7 + fVar16;
    auVar14._12_4_ = (fVar11 * fVar5 - fVar11 * fVar5) + fVar5 * fVar11 + fVar17;
    uVar2 = extractps(auVar14,2);
    param_2[1] = uVar2;
    return;
  }
  *(int *)(param_2 + 1) = (int)param_5[1];
  *param_2 = *param_5;
  return;
}



// FUNCTION 148200f90 FUN_148200f90 body=280 status=ok
// SIG undefined FUN_148200f90(void)

void FUN_148200f90(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  int local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_a8 [48];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 1) = 0;
  local_78 = 0;
  uStack_70 = 0x3f80000000000000;
  local_68 = 0;
  uStack_60 = 0x3f80000000000000;
  local_ac = 1;
  local_c8 = *param_5;
  uStack_c4 = param_5[1];
  uStack_c0 = param_5[2];
  uStack_bc = param_5[3];
  local_b0 = param_3;
  iVar1 = FUN_148201918(*param_1,&local_c8,&local_b0,local_a8);
  uVar2 = 0;
  if (iVar1 != 0) {
    FUN_14009337e(param_6,iVar1,0);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_6 + 0x128);
    param_1[4] = *(undefined8 *)(param_6 + 0x18);
    param_1[5] = *(undefined8 *)(param_6 + 0x28);
    local_d8 = local_a8;
    local_d0 = iVar1;
    FUN_148204310(param_1,param_2,param_3,param_4);
    uVar2 = *(undefined4 *)(param_1 + 1);
  }
  *(undefined4 *)(param_6 + 0x120) = uVar2;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482010a9 FUN_1482010a9 body=319 status=ok
// SIG undefined FUN_1482010a9(void)

bool FUN_1482010a9(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined8 *local_180;
  undefined8 local_178;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_158 = *(longlong *)(param_2 + 0x10);
  local_48 = *(undefined8 *)(param_2 + 0x40);
  local_28 = *(undefined8 *)(param_2 + 0x50);
  local_20 = *(undefined4 *)(param_2 + 0x58);
  local_70 = 0;
  local_68 = 0x1000000000;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_60 = *(undefined8 *)(local_158 + 0x1b0);
  local_58 = *(undefined4 *)(local_158 + 0x1b8);
  local_50 = 0;
  local_40 = 0;
  local_38 = *(undefined8 *)(local_158 + 0x1c0);
  local_30 = *(undefined4 *)(local_158 + 0x1c8);
  local_168 = *(undefined8 *)(param_2 + 0x30);
  local_180 = &local_168;
  local_160 = *(undefined4 *)(param_2 + 0x38);
  local_188 = *(undefined4 *)(param_2 + 0x28);
  local_178 = param_3;
  FUN_1482011ea(&local_158,param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  iVar1 = (int)local_150;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482011ea FUN_1482011ea body=704 status=ok
// SIG undefined FUN_1482011ea(void)

void FUN_1482011ea(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,longlong param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  int local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_c8 [48];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined4 *)(param_1 + 1) = 0;
  local_98 = 0;
  uStack_90 = 0x3f80000000000000;
  local_88 = 0;
  uStack_80 = 0x3f80000000000000;
  local_cc = 1;
  local_e8 = *param_6;
  uStack_e4 = param_6[1];
  uStack_e0 = param_6[2];
  uStack_dc = param_6[3];
  local_d0 = param_4;
  iVar3 = FUN_148201918(*param_1,&local_e8,&local_d0,local_c8);
  if (iVar3 != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_7 + 0x128);
    iVar2 = *(int *)(param_7 + 0x78);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_2 + 0x69);
      uVar4 = *(undefined8 *)(param_7 + 0x60);
      if (cVar1 == '\0') {
        local_f0 = *(undefined8 *)(param_7 + 0x60);
        FUN_14002049c(param_2,1);
        uVar4 = local_f0;
      }
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar2);
      local_100 = 1;
      uVar4 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
    }
    param_1[4] = uVar4;
    iVar2 = *(int *)(param_7 + 0xa8);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      cVar1 = *(char *)(param_2 + 0x69);
      uVar4 = *(undefined8 *)(param_7 + 0x90);
      if (cVar1 == '\0') {
        local_f0 = *(undefined8 *)(param_7 + 0x90);
        FUN_14002049c(param_2,1);
        uVar4 = local_f0;
      }
      local_108 = (undefined1 *)CONCAT44(local_108._4_4_,iVar2);
      local_100 = 1;
      uVar4 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar4,0);
      if (cVar1 == '\0') {
        FUN_14002049c(param_2,0);
      }
    }
    param_1[5] = uVar4;
    local_108 = local_c8;
    local_100 = iVar3;
    FUN_148204310(param_1,param_3,param_4,param_5);
    if (param_1[4] != 0) {
      uVar4 = *(undefined8 *)(param_7 + 0x60);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
      }
    }
    if (param_1[5] != 0) {
      uVar4 = *(undefined8 *)(param_7 + 0x90);
      if (*(char *)(param_2 + 0x69) == '\0') {
        FUN_14002049c(param_2,1);
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
        FUN_14002049c(param_2,0);
      }
      else {
        (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar4);
      }
    }
  }
  *(undefined4 *)(param_7 + 0x120) = *(undefined4 *)(param_1 + 1);
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482014ac FUN_1482014ac body=182 status=ok
// SIG undefined FUN_1482014ac(void)

undefined8 * FUN_1482014ac(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar2 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar2,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar1 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_148201512;
    bVar1 = DAT_14c8442b8 & 1;
  }
  if (bVar1 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x2b0))(*(longlong **)(param_1 + 0x1a8),param_2)
    ;
    return param_2;
  }
LAB_148201512:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 148201562 FUN_148201562 body=163 status=ok
// SIG undefined FUN_148201562(void)

void FUN_148201562(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143ad9838();
  uVar1 = param_5[2];
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar4 + 4;
  if ((undefined8 *)param_1[1] < puVar5) {
    FUN_140023dd8(param_1,0x28);
    puVar4 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
  }
  *param_1 = (ulonglong)puVar5;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar4;
  param_1[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar4 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x14) = uVar3;
  *(undefined4 *)(puVar4 + 3) = uVar1;
  FUN_143ad9920(param_1,param_2);
  return;
}



// FUNCTION 148201606 FUN_148201606 body=128 status=ok
// SIG undefined FUN_148201606(void)

void FUN_148201606(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14032eae4();
    lVar3 = *(longlong *)(param_1 + 0xd0);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0xd0) = 0;
      LOCK();
      piVar1 = (int *)(lVar3 + 8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
  }
  FUN_14032e8b2(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014820167b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148201686 FUN_148201686 body=245 status=ok
// SIG undefined FUN_148201686(void)

undefined8 * FUN_148201686(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_14ae2be88;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_14820177c(param_2 + 0x1d8,local_20,param_1,&LAB_148201862);
  FUN_14820177c(param_2 + 0x1f0,local_20,param_1,FUN_143ad30f0);
  FUN_14820177c(param_2 + 0x208,local_20,param_1,FUN_143ad34ac);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820177c FUN_14820177c body=228 status=ok
// SIG undefined FUN_14820177c(void)

undefined8
FUN_14820177c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14a8e9c60;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_40[2] = lVar2;
  *local_40 = &PTR_FUN_14ae2fcc0;
  local_40[3] = param_3;
  local_40[4] = param_4;
  FUN_1456d7658(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820186a FUN_14820186a body=174 status=ok
// SIG undefined FUN_14820186a(void)

void FUN_14820186a(longlong param_1)

{
  FUN_14820888a(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_148208846(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_148207088(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148201918 FUN_148201918 body=473 status=ok
// SIG undefined FUN_148201918(void)

int FUN_148201918(longlong param_1,longlong *param_2,float *param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 == 0) {
    iVar3 = 0;
    uVar4 = 0;
  }
  else {
    lVar1 = *param_2;
    lVar9 = 0;
    uVar4 = 0;
    iVar3 = 0;
    do {
      bVar2 = true;
      if (*(char *)(param_3 + 1) == '\x01') {
        if (*(float *)(lVar1 + 8 + lVar9) <= *param_3) {
          bVar2 = *param_3 < *(float *)(lVar1 + 0xc + lVar9) + *(float *)(param_1 + 0x34);
          goto LAB_148201989;
        }
      }
      else {
LAB_148201989:
        if ((bool)(uVar4 < 4 & bVar2)) {
          uVar8 = *(uint *)(lVar1 + 0x14 + lVar9);
          fVar11 = *(float *)(lVar1 + 8 + lVar9);
          if (*(int *)(lVar1 + lVar9) == 1) {
            if (*(char *)(param_3 + 1) == '\0') {
              fVar13 = *(float *)(lVar1 + 0x10 + lVar9);
              uVar5 = 0;
            }
            else {
              fVar12 = *param_3 - fVar11;
              fVar14 = fVar12 - *(float *)(param_1 + 0x34);
              if (fVar14 <= 0.0) {
                fVar14 = 0.0;
              }
              fVar13 = *(float *)(lVar1 + 0x10 + lVar9);
              uVar5 = (int)ROUND(fVar14 * fVar13 + fVar14 * fVar13 + -0.5) >> 1;
              if (uVar8 <= uVar5) {
                uVar5 = uVar8;
              }
              if (fVar12 <= 0.0) {
                fVar12 = 0.0;
              }
              uVar7 = (int)ROUND(fVar12 * fVar13 + fVar12 * fVar13 + -0.5) >> 1;
              if (uVar8 <= uVar7) {
                uVar7 = uVar8;
              }
              uVar8 = uVar7 - uVar5;
            }
            fVar13 = 1.0 / fVar13;
            fVar11 = fVar11 + fVar13;
          }
          else {
            fVar13 = 0.0;
            uVar5 = 0;
          }
          if (uVar8 != 0) {
            if (param_4 != 0) {
              uVar10 = (ulonglong)uVar4;
              *(uint *)(param_4 + uVar10 * 4) = uVar8;
              *(uint *)(param_4 + 0x10 + uVar10 * 4) = uVar5;
              *(undefined4 *)(param_4 + 0x20 + uVar10 * 4) = *(undefined4 *)(lVar1 + 4 + lVar9);
              *(float *)(param_4 + 0x30 + uVar10 * 4) = fVar11;
              *(float *)(param_4 + 0x40 + uVar10 * 4) = fVar13;
              uVar4 = uVar4 + 1;
            }
            iVar3 = iVar3 + uVar8;
          }
        }
      }
      lVar9 = lVar9 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar9);
  }
  if (uVar4 < 4 && param_4 != 0) {
    do {
      lVar6 = (ulonglong)(uVar4 >> 2) * 0x10;
      uVar10 = (ulonglong)((uVar4 & 3) << 2);
      *(undefined4 *)(uVar10 + param_4 + lVar6) = 0;
      *(undefined4 *)(uVar10 + param_4 + 0x10 + lVar6) = 0;
      *(undefined4 *)(uVar10 + param_4 + 0x20 + lVar6) = 0;
      *(undefined4 *)(uVar10 + param_4 + 0x30 + lVar6) = 0;
      *(undefined4 *)(uVar10 + lVar6 + param_4 + 0x40) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
  }
  if (*(char *)(param_3 + 1) == '\x01') {
    *(undefined1 *)(param_3 + 1) = 0;
  }
  return iVar3;
}



// FUNCTION 148201af2 FUN_148201af2 body=852 status=ok
// SIG undefined FUN_148201af2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148201af2(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 **local_90;
  undefined4 local_88;
  undefined8 *local_80;
  longlong local_78;
  uint local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_4 + 0x10);
  local_50 = *(undefined4 *)(param_4 + 0x24);
  local_4c = 1;
  local_60 = *(undefined8 *)(param_4 + 0x30);
  local_58 = *(undefined4 *)(param_4 + 0x38);
  uVar5 = FUN_148201918(lVar2,&local_60,&local_50,*(longlong *)(param_4 + 0x40) + 0x50);
  if (uVar5 == 0) {
    *(undefined4 *)(param_3 + 0x120) = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x24);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 1) == 0) goto LAB_148201b7a;
    }
    else if (((uVar1 & 1) == 0) || (uVar5 <= DAT_14cb442e8)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = lVar3 + 0x38;
    puVar7 = (undefined8 *)FUN_14001cc68(0x198,0x10);
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined4 *)(puVar7 + 1) = 0;
    *puVar7 = &PTR_FUN_14ade2d80;
    puVar7[2] = uVar4;
    puVar7[0xb] = 0xffffffff00000000;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x84) = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    *(undefined8 *)((longlong)puVar7 + 0xac) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xb4) = 0;
    puVar7[0x14] = 0;
    puVar7[0x15] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    *(undefined8 *)((longlong)puVar7 + 0xdc) = 0;
    *(undefined8 *)((longlong)puVar7 + 0xe4) = 0;
    puVar7[0x1a] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x18] = 0;
    puVar7[0x19] = 0;
    *(undefined8 *)((longlong)puVar7 + 0x10c) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x114) = 0;
    puVar7[0x20] = 0;
    puVar7[0x21] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x1f] = 0;
    *(undefined8 *)((longlong)puVar7 + 300) = 0;
    *(undefined8 *)((longlong)puVar7 + 0x134) = 0;
    puVar7[0x24] = 0;
    puVar7[0x25] = 0;
    puVar7[0x28] = 0;
    puVar7[0x29] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x2f] = 0;
    *(undefined4 *)(puVar7 + 0x30) = 1;
    puVar7[0x31] = 0;
    puVar7[0x32] = 0;
    if (puVar7 == (undefined8 *)0x0) {
      uVar6 = FUN_1481c88ee(lVar2,param_2);
      local_98 = L"StatelessSimBuffer";
      local_64 = uVar6;
      FUN_143a7817e(0,param_2,uVar5,*(undefined4 *)(lVar3 + 0x24));
      local_80 = (undefined8 *)0x0;
      _DAT_0000005c = uVar6;
    }
    else {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
      uVar6 = FUN_1481c88ee(lVar2,param_2);
      local_98 = L"StatelessSimBuffer";
      local_64 = uVar6;
      FUN_143a7817e(puVar7,param_2,uVar5,*(undefined4 *)(lVar3 + 0x24));
      *(undefined4 *)((longlong)puVar7 + 0x5c) = uVar6;
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
      UNLOCK();
      local_80 = puVar7;
    }
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 2;
    local_78 = param_4;
    local_70 = uVar5;
    if ((undefined8 *)param_2[1] < puVar9) {
      FUN_140023dd8(param_2,0x18);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 2;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_14ae2f7d8;
    local_90 = &local_80;
    local_88 = 1;
    FUN_143ad2854(param_2,lVar3);
    puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar8 + 2;
    if ((undefined8 *)param_2[1] < puVar9) {
      FUN_140023dd8(param_2,0x18);
      puVar8 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar8 + 2;
    }
    *param_2 = (ulonglong)puVar9;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar8;
    param_2[6] = (ulonglong)(puVar8 + 1);
    puVar8[1] = 0;
    *puVar8 = &PTR_LAB_14ae2f7e0;
    FUN_143a79ab6(puVar7,param_2,lVar3,param_3);
    FUN_143a79364(puVar7);
    *(undefined4 *)((longlong)puVar7 + 0x5c) = 0xffffffff;
    FUN_1400ee60a(lVar2,&local_64);
    if (local_80 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = *(int *)(local_80 + 1) + -1;
      UNLOCK();
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + -1;
      UNLOCK();
    }
  }
LAB_148201b7a:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148201e62 FUN_148201e62 body=41 status=ok
// SIG undefined FUN_148201e62(void)

void FUN_148201e62(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = uVar1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  *param_2 = 0xffffffff;
  *(undefined8 *)(param_2 + 1) = uVar2;
  *(undefined8 *)(param_2 + 3) = uVar1;
  return;
}



// FUNCTION 148201e8c FUN_148201e8c body=41 status=ok
// SIG undefined FUN_148201e8c(void)

void FUN_148201e8c(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x28);
  if (*(int *)(param_1 + 8) == 1) {
    puVar2 = (undefined8 *)(param_1 + 0x18);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_2 + 1) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_2 + 3) = uVar1;
  uVar1 = puVar2[1];
  *(undefined8 *)(param_2 + 5) = *puVar2;
  *(undefined8 *)(param_2 + 7) = uVar1;
  *param_2 = 0xffffffff;
  return;
}



// FUNCTION 148201eb6 FUN_148201eb6 body=216 status=ok
// SIG undefined FUN_148201eb6(void)

bool FUN_148201eb6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar2 = (ulonglong)DAT_14c892b50;
  if (uVar1 == uVar2) {
    FUN_144aa025c(*param_3,&local_44);
    local_5c = 0;
    local_54 = FUN_144830b78(&local_54,&DAT_14cb42160);
    local_60 = 1;
    local_50 = local_44;
    uStack_4c = local_44;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined8 *)(param_1 + 0xc) = local_5c;
    *(undefined4 *)(param_1 + 0x14) = local_54;
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(local_44,local_44);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1 == uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148201f90 FUN_148201f90 body=272 status=ok
// SIG undefined FUN_148201f90(void)

undefined4 FUN_148201f90(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[0] = *(undefined4 *)(param_2 + 8);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  uVar1 = FUN_1468ec2ac(local_68,DAT_14c892c60);
  if ((char)uVar1 != '\0') {
    FUN_144aa025c(*param_3,&local_34);
    FUN_144aa025c(*param_3,(longlong)&local_34 + 4);
    FUN_144aa025c(*param_3,&local_2c);
    local_5c = 0;
    local_54 = FUN_144830b78(&local_54,&DAT_14cb42160);
    local_60 = 2;
    local_48 = local_2c;
    local_50 = local_34;
    local_3c = local_2c;
    local_44 = (undefined4)local_34;
    uStack_40 = (undefined4)((ulonglong)local_34 >> 0x20);
    *(undefined4 *)(param_1 + 8) = 2;
    *(undefined8 *)(param_1 + 0xc) = local_5c;
    *(undefined4 *)(param_1 + 0x14) = local_54;
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(local_2c,uStack_40);
    *(undefined8 *)(param_1 + 0x18) = local_34;
    *(undefined4 *)(param_1 + 0x20) = local_2c;
    *(undefined4 *)(param_1 + 0x24) = local_44;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482020a1 FUN_1482020a1 body=318 status=ok
// SIG undefined FUN_1482020a1(void)

undefined4 FUN_1482020a1(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[0x1d] != 0) {
    if ((((longlong *)param_1[0x35] != (longlong *)0x0 && (int)param_1[0x20] != 0) &&
        (((0.0 < *(float *)(param_1 + 6) || (0.0 < *(float *)((longlong)param_1 + 0x34))) &&
         (*param_1 != 0)))) && (*(int *)(*param_1 + 8) != 0)) {
      lVar2 = (**(code **)(*(longlong *)param_1[0x35] + 0x2a8))();
      FUN_1482014ac(param_1,&local_38);
      uVar1 = 0;
      if ((lVar2 == 0) || (local_38 == (void *)0x0)) goto LAB_1482020e2;
      if (*(int *)(*(longlong *)(lVar2 + 0x48) + 0x78) == 0) {
        local_38 = (void *)0x0;
        local_30 = *(int *)(lVar2 + 0x58);
        lVar3 = (longlong)local_30;
        pvVar4 = *(void **)(lVar2 + 0x50);
        if (lVar3 != 0) {
          uVar1 = 0;
          FUN_140b497e4(&local_38,local_30,0);
          memcpy(local_38,pvVar4,lVar3 * 0x30);
          pvVar4 = local_38;
          if (local_30 != 0) {
            if (*(char *)((longlong)local_38 + 0x18) == '\x15') {
              lVar2 = FUN_145ddc770();
              pvVar4 = local_38;
              uVar1 = FUN_1482021e0(*(undefined8 *)(*(longlong *)((longlong)local_38 + 0x28) + 0x48)
                                    ,*(undefined8 *)(lVar2 + 0x48));
            }
            else {
              uVar1 = 0;
            }
          }
          if (pvVar4 != (void *)0x0) {
            FUN_1400020a8(pvVar4);
          }
          goto LAB_1482020e2;
        }
      }
    }
  }
  uVar1 = 0;
LAB_1482020e2:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482021e0 FUN_1482021e0 body=68 status=ok
// SIG undefined FUN_1482021e0(void)

undefined8 FUN_1482021e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((((*(int *)(param_1 + 0x84) == *(int *)(param_2 + 0x84)) &&
       (*(char *)(param_1 + 0x8a) == *(char *)(param_2 + 0x8a))) &&
      (*(char *)(param_1 + 0x8b) == *(char *)(param_2 + 0x8b))) &&
     (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) {
    uVar1 = FUN_148207209(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
    return uVar1;
  }
  return 0;
}



// FUNCTION 14820222a FUN_14820222a body=233 status=ok
// SIG undefined FUN_14820222a(void)

undefined8 * FUN_14820222a(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  FUN_14570f900(param_1 + 0xe);
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = &PTR_LAB_14ae02690;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | 0xf;
  param_1[0x3d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  return param_1;
}



// FUNCTION 148202314 FUN_148202314 body=270 status=ok
// SIG undefined FUN_148202314(void)

void FUN_148202314(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar4 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14ae2fdb0;
  FUN_1481c12da(plVar4 + 2,param_1 + 0x178);
  if (plVar4 == (longlong *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    *puVar3 = 0x10;
    plVar5 = (longlong *)puVar3[1];
    if (plVar5 == (longlong *)0x0) goto LAB_1482023c9;
    puVar3[1] = 0;
LAB_14820238a:
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
    if (plVar4 == (longlong *)0x0) goto LAB_1482023c9;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    plVar2 = *(longlong **)(param_1 + 0x28);
    *plVar2 = (longlong)(plVar4 + 2);
    plVar5 = (longlong *)plVar2[1];
    if (plVar4 == plVar5) {
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
    else {
      plVar2[1] = (longlong)plVar4;
      if (plVar5 != (longlong *)0x0) goto LAB_14820238a;
    }
  }
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
LAB_1482023c9:
  FUN_14054c6c4(*(longlong *)(param_1 + 0x28) + 0x10,param_1 + 0x1c0);
  return;
}



// FUNCTION 148202422 FUN_148202422 body=97 status=ok
// SIG undefined FUN_148202422(void)

void FUN_148202422(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_145b6a950();
  if (0 < (longlong)(int)param_1[1]) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*param_1 + lVar3 * 8);
      if (lVar1 != 0) {
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          if (param_2 == (longlong *)0x0) {
            return;
          }
          *param_2 = lVar1;
          return;
        }
      }
      lVar3 = lVar3 + 1;
    } while ((int)param_1[1] != lVar3);
  }
  return;
}



// FUNCTION 148202484 FUN_148202484 body=185 status=ok
// SIG undefined FUN_148202484(void)

void FUN_148202484(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xf0) = 0x3f800000;
  uVar2 = FUN_14018d992();
  lVar3 = FUN_144a78ede(param_1,uVar2);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x68) != 0)) {
    lVar3 = FUN_1405d5782();
    if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xf0) = *(undefined4 *)(lVar3 + 0x34);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x170) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x168);
    lVar4 = (longlong)*(int *)(param_1 + 0x170) << 6;
    do {
      cVar1 = FUN_1401e6e8e(lVar3);
      if ((cVar1 != '\0') && ((*(byte *)(lVar3 + 0x38) & 1) != 0)) {
        uVar5 = 0x3f800000;
        if ((*(byte *)(lVar3 + 0x30) & 1) != 0) {
          uVar5 = *(undefined4 *)(lVar3 + 0x34);
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0xf0) = uVar5;
      }
      lVar3 = lVar3 + 0x40;
      lVar4 = lVar4 + -0x40;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14820253e FUN_14820253e body=210 status=ok
// SIG undefined FUN_14820253e(void)

longlong * FUN_14820253e(longlong *param_1,longlong *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = *(uint *)(param_2 + 3);
  if ((int)*(uint *)(param_2 + 1) < (int)*(uint *)(param_2 + 3)) {
    uVar4 = *(uint *)(param_2 + 1);
  }
  FUN_148204888();
  if (0 < (int)uVar4) {
    lVar5 = 10;
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar2 = param_2[2];
      if (*(short *)(lVar2 + -2 + lVar5) == 0) {
        if (*(short *)(lVar2 + lVar5) != 0) {
          lVar3 = *param_2;
          puVar1 = (ushort *)(*param_1 + uVar7 * 2);
          *puVar1 = *puVar1 | 1;
          *(ushort *)(*param_1 + uVar7 * 2) =
               (*(ushort *)(*param_1 + uVar7 * 2) & 1) + *(short *)(lVar2 + -8 + lVar5) * 2;
          if (*(longlong *)(lVar3 + lVar6) == DAT_14cb44218) {
            *(int *)(param_1 + 2) = (int)uVar7;
          }
        }
      }
      else {
        puVar1 = (ushort *)(*param_1 + uVar7 * 2);
        *puVar1 = *puVar1 & 0xfffe;
        *(ushort *)(*param_1 + uVar7 * 2) =
             (*(ushort *)(*param_1 + uVar7 * 2) & 1) +
             (short)*(undefined4 *)(lVar2 + -10 + lVar5) * 2;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0xc;
      lVar5 = lVar5 + 0x20;
    } while (uVar4 != uVar7);
  }
  return param_1;
}



// FUNCTION 148202610 FUN_148202610 body=41 status=ok
// SIG undefined FUN_148202610(void)

void FUN_148202610(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14820943c();
  return;
}



// FUNCTION 14820263a FUN_14820263a body=386 status=ok
// SIG undefined FUN_14820263a(void)

void * FUN_14820263a(longlong param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  void *_Dst;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  void *local_50;
  undefined4 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x1a8) + 0x2a8))();
  iVar2 = *(int *)(lVar4 + 0x3c);
  _Dst = (void *)FUN_14001cc68((longlong)iVar2);
  memset(_Dst,0,(longlong)iVar2);
  local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x1b0);
  local_60 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1b8);
  local_78 = *(undefined8 *)(param_3 + 0x20);
  local_70 = *(undefined4 *)(param_3 + 0x28);
  local_58 = 0;
  local_80 = param_2;
  local_50 = _Dst;
  local_40 = lVar4;
  lVar4 = FUN_145ddc770();
  local_48 = *(undefined4 *)(lVar4 + 0x3c);
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x28) + 0x30);
  *(float *)((longlong)_Dst + 0x10) = *(float *)(*(longlong *)(param_1 + 0x28) + 0x34) - fVar1;
  *(float *)((longlong)_Dst + 0x14) = fVar1;
  iVar2 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x118);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar4 + lVar6);
      (**(code **)(*plVar3 + 0x2b8))(plVar3,&local_80);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  plVar3 = *(longlong **)(param_1 + 0x48);
  if (plVar3 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)plVar3[0x22];
    if (plVar5 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 1000))(plVar3);
      plVar5 = (longlong *)plVar3[0x22];
    }
  }
  local_90 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x18);
  (**(code **)(*plVar5 + 0x2b8))(plVar5,_Dst);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return _Dst;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482027be FUN_1482027be body=256 status=ok
// SIG undefined FUN_1482027be(void)

void FUN_1482027be(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  FUN_14011fb0c(param_1 + 0x1d0);
  lVar3 = *(longlong *)(param_1 + 0x1e8);
  if (lVar3 != 0) {
    FUN_1482028be(lVar3);
    FUN_1400020a8(lVar3);
    *(undefined8 *)(param_1 + 0x1e8) = 0;
  }
  FUN_140038ae8(param_1 + 0x1d0);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FUN_1400020a8();
  }
  FUN_14006c2ae(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_145e099ad(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
  }
  plVar4 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001482028b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1482028be FUN_1482028be body=59 status=ok
// SIG undefined FUN_1482028be(void)

void FUN_1482028be(longlong *param_1)

{
  FUN_1482073bb(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482028fa FUN_1482028fa body=70 status=ok
// SIG undefined FUN_1482028fa(void)

void FUN_1482028fa(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(int *)(param_2 + 1) * 2;
  local_18 = *param_2;
  FUN_1481fe0ce();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148202942 FUN_148202942 body=71 status=ok
// SIG undefined FUN_148202942(void)

void FUN_148202942(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(int *)(param_2 + 1) * 3;
  local_18 = *param_2;
  FUN_1481fe0ce();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820298a FUN_14820298a body=71 status=ok
// SIG undefined FUN_14820298a(void)

void FUN_14820298a(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(int *)(param_2 + 1) << 2;
  local_18 = *param_2;
  FUN_1481fe0ce();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482029d2 FUN_1482029d2 body=178 status=ok
// SIG undefined FUN_1482029d2(void)

int FUN_1482029d2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = -1;
  iVar2 = -1;
  if (*param_2 != 0) {
    plVar1 = (longlong *)FUN_144741050(param_2 + 1);
    if (*plVar1 != 0) {
      local_48 = (undefined4)param_2[1];
      local_50 = *param_2;
      local_40 = 0;
      uStack_38 = 0;
      local_58 = &local_2c;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),&local_50,0,0);
      local_2c = local_2c >> 2;
      iVar2 = local_2c;
      if (local_40 != 0) {
        FUN_1400020a8();
        iVar2 = local_2c;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148202a85 FUN_148202a85 body=164 status=ok
// SIG undefined FUN_148202a85(void)

undefined8 FUN_148202a85(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)param_4 >> 0x20);
  fVar4 = (float)param_4;
  if (*(int *)(param_1 + 8) == 0) {
    if ((((*(longlong *)(param_1 + 0xc) != 0) &&
         (plVar2 = (longlong *)FUN_144741050(param_1 + 0x14), *plVar2 != 0)) &&
        (piVar3 = (int *)(**(code **)(*param_3 + 0x58))(param_3,param_1 + 0xc,0),
        piVar3 != (int *)0x0)) && ((longlong)*piVar3 != -1)) {
      fVar4 = *(float *)(param_3[4] + (longlong)*piVar3);
      uVar5 = 0;
    }
  }
  else {
    uVar1 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_2 + 4) = uVar1;
    uVar5 = 0;
    fVar4 = (*(float *)(param_1 + 0x1c) - *(float *)(param_1 + 0x18)) *
            ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + *(float *)(param_1 + 0x18);
  }
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 148202b29 FUN_148202b29 body=173 status=ok
// SIG undefined FUN_148202b29(void)

int FUN_148202b29(int *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  if (*param_1 == 0) {
    iVar4 = 0;
    if (*(longlong *)(param_1 + 1) != 0) {
      plVar2 = (longlong *)FUN_144741050(param_1 + 3);
      if (*plVar2 != 0) {
        iVar4 = 0;
        piVar3 = (int *)(**(code **)(*param_3 + 0x58))(param_3,param_1 + 1,0);
        if ((piVar3 != (int *)0x0) && ((longlong)*piVar3 != -1)) {
          iVar4 = *(int *)(param_3[4] + (longlong)*piVar3);
        }
      }
    }
  }
  else {
    iVar1 = param_1[4];
    iVar4 = param_1[5] - iVar1;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    else {
      uVar5 = *(int *)(param_2 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_2 + 4) = uVar5;
      iVar4 = (int)((float)(iVar4 + 1) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
    }
    iVar4 = iVar4 + iVar1;
  }
  return iVar4;
}



// FUNCTION 148202bee FUN_148202bee body=332 status=ok
// SIG undefined FUN_148202bee(void)

undefined8 * FUN_148202bee(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  FUN_14015b81e();
  *param_1 = &PTR_FUN_14ae2bec0;
  *(uint *)(param_1 + 0x32) = *(uint *)(param_1 + 0x32) & 0xfffffff0 | 6;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  lVar3 = 0x1f0;
  do {
    puVar1 = (undefined4 *)((longlong)param_1 + lVar3 + -0x20);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0x3f800000;
    puVar2 = (undefined8 *)((longlong)param_1 + lVar3 + -0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1 = (undefined4 *)((longlong)param_1 + lVar3);
    *puVar1 = 0x3f800000;
    puVar1[1] = 0x3f800000;
    puVar1[2] = 0x3f800000;
    puVar1[3] = 0;
    lVar3 = lVar3 + 0x30;
  } while (lVar3 != 0x250);
  FUN_1482009b6(param_1 + 0x38,1,&DAT_14c846060);
  param_1[0x4f] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  *(byte *)(param_1 + 0x1a) = (*(byte *)(param_1 + 0x1a) & 0xfa) + 1;
  lVar3 = FUN_14001cc68(0xb8,0x10);
  *(undefined4 *)(lVar3 + 0x70) = 0;
  *(undefined8 *)(lVar3 + 0x98) = 0;
  *(undefined4 *)(lVar3 + 0xa0) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined8 *)(lVar3 + 0x1c) = 0;
  *(undefined8 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined8 *)(lVar3 + 0x58) = 0;
  *(undefined8 *)(lVar3 + 0x5c) = 0;
  *(undefined8 *)(lVar3 + 100) = 0;
  *(undefined8 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined8 *)(lVar3 + 0xa4) = 0xffffffff00000002;
  *(undefined4 *)(lVar3 + 0xac) = 0xffffffff;
  *(undefined1 *)(lVar3 + 0xb0) = 0;
  *(undefined8 **)(lVar3 + 8) = &DAT_14cb3db48;
  param_1[2] = lVar3;
  return param_1;
}



// FUNCTION 148202d3a FUN_148202d3a body=128 status=ok
// SIG undefined FUN_148202d3a(void)

void FUN_148202d3a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_140396eac(*(longlong *)(param_1 + 8),param_1 + 0x40);
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x110);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x108);
      lVar4 = 0;
      do {
        lVar2 = FUN_140261164(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar1 + lVar4));
        if (lVar2 != 0) {
          FUN_14483a318(lVar2 + 0x40,param_1 + 0x40);
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 148202dba FUN_148202dba body=331 status=ok
// SIG undefined FUN_148202dba(void)

void FUN_148202dba(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) & 0xfe;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  plVar3 = *(longlong **)(param_1 + 0x1a8);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  lVar4 = FUN_144b356c0(param_1);
  lVar5 = FUN_144b356c0(param_1);
  lVar5 = *(longlong *)(lVar5 + 0x40);
  FUN_14485c47a(param_1 + 0x1b0,lVar5);
  if (lVar5 == 0) {
    return;
  }
  lVar6 = *(longlong *)(lVar5 + 0x28);
  plVar3 = *(longlong **)(lVar5 + 0x30);
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x1a0) = lVar6;
    plVar8 = *(longlong **)(param_1 + 0x1a8);
    if (plVar8 == (longlong *)0x0) goto LAB_148202ed9;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
LAB_148202e9a:
    LOCK();
    plVar3 = plVar8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar8)();
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
joined_r0x000148202ec7:
      if (iVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x1a0) = lVar6;
    plVar8 = *(longlong **)(param_1 + 0x1a8);
    if (plVar3 == plVar8) {
      LOCK();
      plVar8 = plVar3 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar8 = plVar3;
        goto joined_r0x000148202ec7;
      }
    }
    else {
      *(longlong **)(param_1 + 0x1a8) = plVar3;
      if (plVar8 != (longlong *)0x0) goto LAB_148202e9a;
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x1a0);
LAB_148202ed9:
  uVar7 = 0;
  if ((lVar6 != 0) && (uVar7 = 0, *(char *)(lVar6 + 0x20) == '\x01')) {
    uVar7 = (uint)*(byte *)(lVar4 + 0x20);
  }
  *(uint *)(param_1 + 400) = *(uint *)(param_1 + 400) & 0xfffffffe | uVar7;
  return;
}



// FUNCTION 148202f06 FUN_148202f06 body=222 status=ok
// SIG undefined FUN_148202f06(void)

void FUN_148202f06(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  *(undefined4 *)(param_1 + 0x260) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  if ((*(byte *)(lVar1 + 0xc0) & 1) != 0) {
    fVar2 = (float)FUN_148202a85(lVar1 + 0xa0,param_1 + 0x198,param_1 + 0x40,0);
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    *(float *)(param_1 + 0x268) = fVar2;
  }
  *(undefined4 *)(param_1 + 0x26c) = 0;
  if ((*(char *)(lVar1 + 0x71) == '\x02') && (*(char *)(lVar1 + 0x78) == '\x01')) {
    *(undefined4 *)(param_1 + 0x264) = 0x7f7fffff;
    fVar2 = 3.4028235e+38;
  }
  else {
    fVar2 = (float)FUN_148202a85(lVar1 + 0x80,param_1 + 0x198,param_1 + 0x40,0x3a83126f);
    if (fVar2 <= 0.001) {
      fVar2 = 0.001;
    }
    *(float *)(param_1 + 0x264) = fVar2;
    fVar2 = *(float *)(param_1 + 0x26c) + *(float *)(param_1 + 0x268) + fVar2;
  }
  *(float *)(param_1 + 0x270) = fVar2;
  return;
}



// FUNCTION 148202fe4 FUN_148202fe4 body=232 status=ok
// SIG undefined FUN_148202fe4(void)

void FUN_148202fe4(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(byte *)(param_1 + 400) & 2) != 0) && (*(int *)(param_1 + 0x25c) == 0)) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0xe8);
    if (lVar4 != 0) {
      lVar4 = lVar4 * 0x68;
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0xe0) + 0x48;
      do {
        if (*(int *)(lVar6 + -0x48) == 1) {
          lVar5 = FUN_148203e4a(param_1 + 0x248);
          uVar1 = *(undefined4 *)(lVar6 + -0x1c);
          uVar2 = *(undefined4 *)(lVar6 + -0x18);
          uVar3 = *(undefined4 *)(lVar6 + -0x14);
          *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(lVar6 + -0x20);
          *(undefined4 *)(lVar5 + 0xc) = uVar1;
          *(undefined4 *)(lVar5 + 0x10) = uVar2;
          *(undefined4 *)(lVar5 + 0x14) = uVar3;
          *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(lVar6 + -0x10);
          if (((*(byte *)(lVar6 + -8) & 2) != 0) && (lVar6 != lVar5 + 0x28)) {
            *(undefined ***)(lVar5 + 0x28) = &PTR_FUN_14ad6aa90;
            uVar1 = *(undefined4 *)(lVar6 + 0xc);
            uVar2 = *(undefined4 *)(lVar6 + 0x10);
            uVar3 = *(undefined4 *)(lVar6 + 0x14);
            *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(lVar6 + 8);
            *(undefined4 *)(lVar5 + 0x34) = uVar1;
            *(undefined4 *)(lVar5 + 0x38) = uVar2;
            *(undefined4 *)(lVar5 + 0x3c) = uVar3;
            *(undefined ***)(lVar5 + 0x28) = &PTR_FUN_14ad6ad70;
            *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(lVar6 + 0x18);
            *(undefined1 *)(lVar5 + 0x48) = 1;
          }
        }
        lVar6 = lVar6 + 0x68;
        lVar4 = lVar4 + -0x68;
      } while (lVar4 != 0);
    }
    FUN_1482039b6(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1482030cc FUN_1482030cc body=68 status=ok
// SIG undefined FUN_1482030cc(void)

void FUN_1482030cc(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1482095de(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1482097b0(param_1,param_2);
  return;
}



// FUNCTION 148203128 FUN_148203128 body=131 status=ok
// SIG undefined FUN_148203128(void)

undefined8 FUN_148203128(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  int local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0;
  if (((*(byte *)(param_1 + 400) & 1) != 0) && (0 < *(int *)(param_1 + 0x240))) {
    local_10 = *(undefined4 *)(param_1 + 0x230);
    local_c = 1;
    local_20 = *(undefined8 *)(param_1 + 0x238);
    local_18 = *(int *)(param_1 + 0x240);
    uVar1 = FUN_148201918(*(undefined8 *)(param_1 + 0x1a0),&local_20,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482031d6 FUN_1482031d6 body=131 status=ok
// SIG undefined FUN_1482031d6(void)

void FUN_1482031d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_1401a63ae(*(longlong *)(param_1 + 8),param_1 + 0x40);
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0x110);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a0) + 0x108);
      lVar4 = 0;
      do {
        lVar2 = FUN_140261164(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar1 + lVar4));
        if (lVar2 != 0) {
          FUN_1448b09be(lVar2 + 0x40,param_1 + 0x40,0);
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 148203266 FUN_148203266 body=58 status=ok
// SIG undefined FUN_148203266(void)

void FUN_148203266(longlong param_1,float param_2)

{
  *(float *)(param_1 + 0x230) = param_2 + *(float *)(param_1 + 0x230);
  FUN_1482032a0();
  FUN_148203416(param_1);
  FUN_148203738(param_1);
  FUN_143ad696e(param_1);
  return;
}



// FUNCTION 1482032a0 FUN_1482032a0 body=373 status=ok
// SIG undefined FUN_1482032a0(void)

void FUN_1482032a0(longlong param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  uVar3 = *(uint *)(param_1 + 400);
  uVar7 = 0;
  if ((uVar3 & 2) != 0) {
    uVar7 = (uint)(*(int *)(param_1 + 0x25c) == 0);
  }
  if ((uVar3 >> 2 & 1) != uVar7) {
    *(uint *)(param_1 + 400) = (uVar3 & 0xfffffffb) + uVar7 * 4;
    if (uVar7 == 0) {
      FUN_1482037f6(param_1);
    }
    else {
      FUN_148202fe4(param_1,*(undefined4 *)(param_1 + 0x230));
    }
  }
  iVar4 = *(int *)(param_1 + 0x240);
  lVar9 = (longlong)iVar4;
  if (lVar9 != 0) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 0x34);
    lVar5 = *(longlong *)(param_1 + 0x238);
    iVar16 = 0;
    bVar8 = *(float *)(lVar5 + 0xc) + fVar1 <= *(float *)(param_1 + 0x230);
    iVar13 = 0;
    do {
      lVar11 = (longlong)iVar13;
      iVar6 = iVar13 + 1;
      if (iVar13 + 1 < iVar4) {
        iVar6 = iVar4;
      }
      pfVar10 = (float *)(lVar5 + 0x24 + lVar11 * 0x18);
      iVar14 = iVar13;
      lVar12 = lVar11;
      do {
        lVar12 = lVar12 + 1;
        iVar15 = iVar6;
        if (lVar9 <= lVar12) break;
        fVar2 = *pfVar10;
        iVar14 = iVar14 + 1;
        pfVar10 = pfVar10 + 6;
        iVar15 = iVar14;
      } while (bVar8 == fVar2 + fVar1 <= *(float *)(param_1 + 0x230));
      if (bVar8 == false) {
        if (iVar16 != iVar13) {
          memmove((void *)(lVar5 + (longlong)iVar16 * 0x18),(void *)(lVar5 + lVar11 * 0x18),
                  (longlong)(iVar15 - iVar13) * 0x18);
        }
        iVar16 = iVar16 + (iVar15 - iVar13);
      }
      bVar8 = (bool)(bVar8 ^ 1);
      iVar13 = iVar15;
    } while (lVar12 < lVar9);
    *(int *)(param_1 + 0x240) = iVar16;
  }
  return;
}



// FUNCTION 148203416 FUN_148203416 body=801 status=ok
// SIG undefined FUN_148203416(void)

void FUN_148203416(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar3 = 3;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 8) + 0x86c);
  }
  uVar5 = *(uint *)(param_1 + 600);
  if (uVar5 < uVar3) {
    FUN_143ad7308(param_1);
    uVar5 = *(uint *)(param_1 + 600);
  }
  if (uVar5 == 1) {
    iVar2 = FUN_148203128(param_1);
    uVar5 = *(uint *)(param_1 + 600);
    if (iVar2 == 0) goto joined_r0x0001482036bb;
  }
  if (uVar5 != 0) {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  iVar2 = 0;
  if (((*(uint *)(lVar1 + 0xc0) & 0x20) != 0) &&
     (fVar6 = *(float *)(*(longlong *)(param_1 + 8) + 0x2b0 +
                        (ulonglong)((*(byte *)(*(longlong *)(param_1 + 8) + 0x790) & 1) << 6)),
     iVar2 = 0, *(float *)(lVar1 + 0xd8) <= fVar6 && fVar6 != *(float *)(lVar1 + 0xd8))) {
    iVar2 = *(int *)(lVar1 + 0xd4);
  }
  if ((*(uint *)(lVar1 + 0xc0) & 0x10) != 0) {
    fVar6 = (float)FUN_141839f98(*(undefined8 *)(param_1 + 8));
    lVar4 = 0xd0;
    if ((*(float *)(lVar1 + 0xcc) <= fVar6 && fVar6 != *(float *)(lVar1 + 0xcc)) ||
       (lVar4 = 200, fVar6 < *(float *)(lVar1 + 0xc4))) {
      iVar2 = *(int *)(lVar1 + lVar4);
    }
  }
  if (iVar2 != *(int *)(param_1 + 0x25c)) {
    uVar5 = *(uint *)(param_1 + 600);
    *(uint *)(param_1 + 0xd4) = uVar5;
    *(int *)(param_1 + 0x25c) = iVar2;
    switch(iVar2) {
    case 0:
      if ((*(byte *)(lVar1 + 0xc1) & 1) == 0) goto LAB_1482034de;
      FUN_143ad5e88(param_1,0);
      break;
    case 1:
    case 4:
      *(undefined4 *)(param_1 + 0xd4) = 1;
      FUN_1482037f6(param_1);
      break;
    case 2:
      *(undefined4 *)(param_1 + 0xd4) = 1;
      FUN_148203938(param_1);
      break;
    case 3:
      goto joined_r0x0001482036bb;
    default:
      goto switchD_148203588_default;
    }
    iVar2 = *(int *)(param_1 + 0x25c);
  }
switchD_148203588_default:
  if ((iVar2 != 4) || (iVar2 = FUN_148203128(param_1), iVar2 != 0)) {
LAB_1482034de:
    if (*(float *)(param_1 + 0x230) < *(float *)(param_1 + 0x270)) {
      return;
    }
    if (*(char *)(lVar1 + 0x71) != '\x02') {
      while( true ) {
        iVar2 = *(int *)(param_1 + 0x260) + 1;
        *(int *)(param_1 + 0x260) = iVar2;
        if ((*(char *)(lVar1 + 0x71) == '\x01') && (*(int *)(lVar1 + 0x74) <= iVar2)) break;
        uVar3 = *(uint *)(lVar1 + 0xc0);
        if ((uVar3 & 2) != 0) {
          fVar6 = (float)FUN_148202a85(lVar1 + 0x80,param_1 + 0x198,param_1 + 0x40,0x3a83126f);
          if (fVar6 <= 0.001) {
            fVar6 = 0.001;
          }
          *(float *)(param_1 + 0x264) = fVar6;
          uVar3 = *(uint *)(lVar1 + 0xc0);
        }
        if ((uVar3 & 1) != 0) {
          fVar6 = 0.0;
          if ((uVar3 & 4) == 0) {
            if ((uVar3 & 8) == 0) goto LAB_14820362a;
            fVar6 = (float)FUN_148202a85(lVar1 + 0xa0,param_1 + 0x198,param_1 + 0x40,0);
            if (fVar6 <= 0.0) {
              fVar6 = 0.0;
            }
          }
          *(float *)(param_1 + 0x268) = fVar6;
        }
LAB_14820362a:
        *(float *)(param_1 + 0x26c) = *(float *)(param_1 + 0x270);
        *(float *)(param_1 + 0x270) =
             *(float *)(param_1 + 0x268) + *(float *)(param_1 + 0x270) + *(float *)(param_1 + 0x264)
        ;
        FUN_1482039b6(param_1);
        if (*(float *)(param_1 + 0x230) < *(float *)(param_1 + 0x270)) {
          return;
        }
      }
    }
    FUN_143ad7308(param_1,1);
    return;
  }
  uVar5 = *(uint *)(param_1 + 600);
joined_r0x0001482036bb:
  if (uVar5 != 3) {
    FUN_148203938(param_1);
    *(undefined4 *)(param_1 + 600) = 3;
    *(undefined4 *)(param_1 + 0xd4) = 3;
  }
  return;
}



// FUNCTION 148203738 FUN_148203738 body=190 status=ok
// SIG undefined FUN_148203738(void)

void FUN_148203738(longlong param_1)

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
  undefined4 *puVar13;
  
  *(undefined8 *)(param_1 + 0x108) = DAT_14c8464f0;
  uVar12 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *(ulonglong *)(param_1 + 0xf8) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  *(undefined8 *)(param_1 + 0x100) = uVar12;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xe0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0xe4) = uVar1;
  *(undefined4 *)(param_1 + 0xe8) = uVar2;
  *(undefined4 *)(param_1 + 0xec) = uVar3;
  *(undefined8 *)(param_1 + 0xf0) = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x150));
  if (*(char *)(param_1 + 0x188) == '\0') {
    if (*(char *)(param_1 + 0x148) == '\0') {
      puVar13 = (undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
    }
    else {
      puVar13 = (undefined4 *)(param_1 + 0x118);
    }
  }
  else {
    puVar13 = (undefined4 *)(param_1 + 0x158);
  }
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(puVar13 + 0xc);
  uVar1 = *puVar13;
  uVar2 = puVar13[1];
  uVar3 = puVar13[2];
  uVar4 = puVar13[3];
  uVar5 = puVar13[4];
  uVar6 = puVar13[5];
  uVar7 = puVar13[6];
  uVar8 = puVar13[7];
  uVar9 = puVar13[9];
  uVar10 = puVar13[10];
  uVar11 = puVar13[0xb];
  *(undefined4 *)(param_1 + 0x100) = puVar13[8];
  *(undefined4 *)(param_1 + 0x104) = uVar9;
  *(undefined4 *)(param_1 + 0x108) = uVar10;
  *(undefined4 *)(param_1 + 0x10c) = uVar11;
  *(undefined4 *)(param_1 + 0xf0) = uVar5;
  *(undefined4 *)(param_1 + 0xf4) = uVar6;
  *(undefined4 *)(param_1 + 0xf8) = uVar7;
  *(undefined4 *)(param_1 + 0xfc) = uVar8;
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xe4) = uVar2;
  *(undefined4 *)(param_1 + 0xe8) = uVar3;
  *(undefined4 *)(param_1 + 0xec) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001482037d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x150));
  return;
}



// FUNCTION 1482037f6 FUN_1482037f6 body=322 status=ok
// SIG undefined FUN_1482037f6(void)

void FUN_1482037f6(longlong param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_1 + 0x240) != 0) || (*(int *)(param_1 + 0x250) != 0)) {
    FUN_1482030cc(param_1 + 0x248);
    if (0 < *(int *)(param_1 + 0x240)) {
      fVar2 = *(float *)(*(longlong *)(param_1 + 0x1a0) + 0x34);
      uVar5 = 0;
      do {
        uVar4 = (uint)uVar5;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x238) + uVar5 * 0x18);
        fVar8 = *(float *)(param_1 + 0x230);
        if (*piVar1 == 1) {
          fVar6 = (float)piVar1[2];
          fVar7 = (float)piVar1[3];
          if (fVar8 <= (float)piVar1[3]) {
            fVar7 = fVar8;
          }
          piVar1[3] = (int)fVar7;
          fVar8 = (fVar7 - fVar6) * (float)piVar1[4];
          piVar1[5] = (int)ROUND(fVar8 + fVar8 + -0.5) >> 1;
          fVar8 = *(float *)(param_1 + 0x230);
        }
        else {
          fVar6 = (float)piVar1[2];
        }
        if ((fVar8 < fVar6) || ((float)piVar1[3] + fVar2 <= fVar8)) {
          iVar3 = *(int *)(param_1 + 0x240);
          if (~uVar4 + iVar3 != 0) {
            memmove((void *)(*(longlong *)(param_1 + 0x238) + uVar5 * 0x18),
                    (void *)(*(longlong *)(param_1 + 0x238) + uVar5 * 0x18 + 0x18),
                    (longlong)(int)(~uVar4 + iVar3) * 0x18);
            iVar3 = *(int *)(param_1 + 0x240);
          }
          *(int *)(param_1 + 0x240) = iVar3 + -1;
          FUN_148209a24(param_1 + 0x238);
          uVar4 = uVar4 - 1;
        }
        uVar5 = (ulonglong)(uVar4 + 1);
      } while ((int)(uVar4 + 1) < *(int *)(param_1 + 0x240));
    }
    *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 8;
  }
  return;
}



// FUNCTION 148203938 FUN_148203938 body=125 status=ok
// SIG undefined FUN_148203938(void)

void FUN_148203938(longlong param_1)

{
  if ((*(int *)(param_1 + 0x240) != 0) || (*(int *)(param_1 + 0x250) != 0)) {
    *(undefined4 *)(param_1 + 0x240) = 0;
    if (*(int *)(param_1 + 0x244) != 0) {
      FUN_148209780(param_1 + 0x238);
    }
    FUN_1482095de(*(undefined8 *)(param_1 + 0x248),*(undefined4 *)(param_1 + 0x250));
    *(undefined4 *)(param_1 + 0x250) = 0;
    if (*(int *)(param_1 + 0x254) != 0) {
      FUN_1482097b0(param_1 + 0x248,0);
    }
    *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 8;
  }
  return;
}



// FUNCTION 1482039b6 FUN_1482039b6 body=1080 status=ok
// SIG undefined FUN_1482039b6(void)

void FUN_1482039b6(longlong param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((*(byte *)(param_1 + 400) & 2) != 0) && (*(int *)(param_1 + 0x25c) == 0)) {
    if ((longlong)*(int *)(param_1 + 0x250) != 0) {
      lVar9 = (longlong)*(int *)(param_1 + 0x250) * 0x50;
      lVar7 = *(longlong *)(param_1 + 0x248) + 0x28;
      do {
        if (*(char *)(lVar7 + 0x20) == '\x01') {
          fVar10 = (float)FUN_148202a85(lVar7,param_1 + 0x198,param_1 + 0x40,0);
          if (1.0 <= fVar10) {
            fVar10 = 1.0;
          }
          if (fVar10 <= 0.0) {
            fVar10 = 0.0;
          }
          uVar3 = *(int *)(param_1 + 0x19c) * 0xbb38435 + 0x3619636b;
          *(uint *)(param_1 + 0x19c) = uVar3;
          if ((float)(uVar3 >> 9 | 0x3f800000) + -1.0 <= fVar10) goto LAB_148203b29;
        }
        else {
LAB_148203b29:
          fVar10 = (float)FUN_148202a85(lVar7 + -0x28,param_1 + 0x198,param_1 + 0x40,0);
          fVar10 = fVar10 * *(float *)(*(longlong *)(param_1 + 0x1a0) + 0xf0);
          if (0.0 < fVar10) {
            fVar11 = *(float *)(param_1 + 0x270);
            fVar13 = (*(float *)(param_1 + 0x268) + param_2) - *(float *)(lVar7 + -8);
            if (fVar11 <= fVar13) {
              fVar13 = fVar11;
            }
            fVar12 = (fVar11 - fVar13) * fVar10;
            iVar6 = (int)ROUND(fVar12 + fVar12 + -0.5) >> 1;
            fVar12 = (float)iVar6 / fVar10 + fVar13;
            if (0 < iVar6) {
              lVar5 = (longlong)*(int *)(param_1 + 0x240);
              if ((((lVar5 < 1) ||
                   (lVar1 = *(longlong *)(param_1 + 0x238),
                   *(int *)(lVar1 + -0x18 + lVar5 * 0x18) != 1)) ||
                  (fVar11 = *(float *)(lVar1 + -8 + lVar5 * 0x18), fVar11 != fVar10)) ||
                 (NAN(fVar11) || NAN(fVar10))) {
LAB_148203d6f:
                puVar4 = (undefined4 *)FUN_148203e8a((longlong *)(param_1 + 0x238));
                *puVar4 = 1;
                puVar4[1] = *(undefined4 *)(param_1 + 0x234);
                puVar4[2] = fVar13;
                puVar4[3] = fVar12;
                puVar4[4] = fVar10;
                puVar4[5] = iVar6;
              }
              else {
                lVar1 = lVar1 + lVar5 * 0x18;
                if (((*(float *)(lVar1 + -0xc) != fVar13) ||
                    (NAN(*(float *)(lVar1 + -0xc)) || NAN(fVar13))) ||
                   (*(int *)(lVar1 + -0x14) + *(int *)(lVar1 + -4) != *(int *)(param_1 + 0x234)))
                goto LAB_148203d6f;
                *(float *)(lVar1 + -0xc) = fVar12;
                *(int *)(lVar1 + -4) = *(int *)(lVar1 + -4) + iVar6;
              }
              *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + iVar6;
              *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 8;
              fVar11 = *(float *)(param_1 + 0x270);
            }
            *(float *)(lVar7 + -8) = fVar11 - fVar12;
          }
        }
        lVar7 = lVar7 + 0x50;
        lVar9 = lVar9 + -0x50;
      } while (lVar9 != 0);
    }
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1a0) + 0xe8);
    if (lVar9 != 0) {
      piVar8 = *(int **)(*(longlong *)(param_1 + 0x1a0) + 0xe0);
      lVar9 = lVar9 * 0x68;
      do {
        if (*piVar8 != 1) {
          local_c8 = *(undefined4 *)(param_1 + 0x264);
          local_c4 = 1;
          cVar2 = FUN_148203eca(piVar8,&local_c8);
          if (cVar2 != '\0') {
            if ((*(byte *)(piVar8 + 0x10) & 2) != 0) {
              fVar10 = (float)FUN_148202a85(piVar8 + 0x12,param_1 + 0x198,param_1 + 0x40,0);
              if (1.0 <= fVar10) {
                fVar10 = 1.0;
              }
              if (fVar10 <= 0.0) {
                fVar10 = 0.0;
              }
              uVar3 = *(int *)(param_1 + 0x19c) * 0xbb38435 + 0x3619636b;
              *(uint *)(param_1 + 0x19c) = uVar3;
              if (fVar10 < (float)(uVar3 >> 9 | 0x3f800000) + -1.0) goto LAB_148203c9f;
            }
            iVar6 = FUN_148202b29(piVar8 + 2,param_1 + 0x198,param_1 + 0x40);
            fVar10 = (float)iVar6 * *(float *)(*(longlong *)(param_1 + 0x1a0) + 0xf0);
            iVar6 = (int)ROUND(fVar10 + fVar10 + -0.5) >> 1;
            if ((0 < iVar6) &&
               (fVar10 = *(float *)(param_1 + 0x26c) + *(float *)(param_1 + 0x268) +
                         (float)piVar8[1], param_2 <= fVar10)) {
              puVar4 = (undefined4 *)FUN_148203e8a(param_1 + 0x238);
              *puVar4 = 0;
              puVar4[1] = *(undefined4 *)(param_1 + 0x234);
              puVar4[2] = fVar10;
              puVar4[3] = fVar10;
              puVar4[5] = iVar6;
              *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + iVar6;
              *(byte *)(param_1 + 400) = *(byte *)(param_1 + 400) | 8;
            }
          }
        }
LAB_148203c9f:
        piVar8 = piVar8 + 0x1a;
        lVar9 = lVar9 + -0x68;
      } while (lVar9 != 0);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148203df0 FUN_148203df0 body=89 status=ok
// SIG undefined FUN_148203df0(void)

undefined8 * FUN_148203df0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148209820(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 148203e4a FUN_148203e4a body=63 status=ok
// SIG undefined FUN_148203e4a(void)

longlong FUN_148203e4a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1482098ec(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_148209893(lVar2);
  return lVar2;
}



// FUNCTION 148203e8a FUN_148203e8a body=63 status=ok
// SIG undefined FUN_148203e8a(void)

longlong FUN_148203e8a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148209990(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_148209980(lVar2);
  return lVar2;
}



// FUNCTION 148203eca FUN_148203eca body=101 status=ok
// SIG undefined FUN_148203eca(void)

undefined4 FUN_148203eca(int *param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
LAB_148203ed0:
    uVar2 = 0;
  }
  else {
    if (*param_1 == 1) {
      bVar5 = (float)param_1[0xe] + (float)param_1[0xf] == 0.0;
      bVar4 = (float)param_1[0xe] + (float)param_1[0xf] < 0.0;
      iVar3 = 0;
    }
    else {
      if (((*param_1 != 0) ||
          (iVar3 = param_1[7] + param_1[6],
          iVar3 == 0 || SCARRY4(param_1[7],param_1[6]) != iVar3 < 0)) ||
         (fVar1 = (float)param_1[1], fVar1 < 0.0)) goto LAB_148203ed0;
      if (*(char *)(param_2 + 1) == '\x01') {
        fVar6 = *param_2;
      }
      else {
        fVar6 = fVar1 + 1e-08;
      }
      bVar5 = fVar6 == fVar1;
      bVar4 = fVar6 < fVar1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),!bVar4 && !bVar5);
  }
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return uVar2;
}



// FUNCTION 148203f36 FUN_148203f36 body=126 status=ok
// SIG undefined FUN_148203f36(void)

undefined4 * FUN_148203f36(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2));
  uVar2 = FUN_145f6fcc8();
  FUN_1448e935e(uVar1,&local_30,uVar2,0);
  FUN_145f6fcc8();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14820410c FUN_14820410c body=126 status=ok
// SIG undefined FUN_14820410c(void)

undefined4 * FUN_14820410c(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_144b1c618(*(undefined2 *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2));
  uVar2 = FUN_145f7d1f6();
  FUN_1448e935e(uVar1,&local_30,uVar2,0);
  FUN_145f7d1f6();
  *param_2 = local_30;
  param_2[1] = uStack_2c;
  param_2[2] = uStack_28;
  param_2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148204234 FUN_148204234 body=219 status=ok
// SIG undefined FUN_148204234(void)

void FUN_148204234(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = *param_2 * 0x19660d + 0x3c6ef35f +
          (param_2[3] * 0x19660d + 0x3c6ef35f) * (param_2[1] * 0x19660d + 0x3c6ef35f);
  uVar3 = param_2[1] * 0x19660d + (param_2[2] * 0x19660d + 0x3c6ef35f) * uVar1 + 0x3c6ef35f;
  uVar4 = uVar3 * uVar1 + param_2[2] * 0x19660d + 0x3c6ef35f;
  uVar6 = uVar4 >> 0x10 ^ uVar4;
  uVar4 = param_2[3] * 0x19660d + uVar4 * uVar3 + 0x3c6ef35f;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  iVar2 = uVar4 * uVar3 + (uVar1 >> 0x10 ^ uVar1);
  *param_2 = iVar2;
  iVar5 = iVar2 * uVar6 + uVar3;
  param_2[1] = iVar5;
  iVar2 = iVar2 * iVar5 + uVar6;
  param_2[2] = iVar2;
  param_2[3] = iVar2 * iVar5 + uVar4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return;
}



// FUNCTION 148204310 FUN_148204310 body=1095 status=ok
// SIG undefined FUN_148204310(void)

void FUN_148204310(longlong *param_1,undefined4 param_2,float param_3,float param_4,longlong param_5
                  ,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  uint local_c0 [4];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_1 + 1) = 0;
  *(float *)((longlong)param_1 + 0xc) = param_4;
  *(uint *)(param_1 + 2) = -(uint)(0.0 < param_4) & (uint)(1.0 / param_4);
  *(undefined4 *)((longlong)param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb44320) && (FUN_144b3d300(), DAT_14cb44320 == -1)) {
    DAT_14cb44310 = 0;
    uRam000000014cb44318 = 0;
    atexit((_func_5014 *)&LAB_143ad787c);
    _Init_thread_footer();
  }
  uVar12 = *(uint *)((longlong)param_1 + 0x1c);
  if (DAT_14cb44324 < uVar12) {
    DAT_14cb44324 = uVar12;
    FUN_140393c76(&DAT_14cb44310,uVar12 * 7,1);
    uVar12 = *(uint *)((longlong)param_1 + 0x1c);
  }
  lVar9 = 0;
  do {
    *(ulonglong *)((longlong)param_1 + lVar9 * 2 + 0x30) =
         (ulonglong)(*(int *)((longlong)&DAT_14ae2bf50 + lVar9) * uVar12) + DAT_14cb44310;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x1c);
  plVar10 = *(longlong **)(*param_1 + 0x1e8);
  plVar11 = param_1 + 0xd;
  uVar12 = *(uint *)(plVar10 + 1);
  iVar3 = (int)param_1[0x1e];
  *(uint *)(param_1 + 0x1e) = iVar3 + uVar12;
  if ((uint)(*(int *)((longlong)param_1 + 0xf4) - iVar3) < uVar12) {
    FUN_148209ad2(plVar11);
  }
  plVar6 = (longlong *)param_1[0x1d];
  if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
    plVar6 = plVar11;
  }
  memset(plVar6 + iVar3,0,(longlong)(int)uVar12 << 3);
  if (0 < (int)plVar10[1]) {
    lVar9 = 0;
    do {
      uVar2 = *(ushort *)(*plVar10 + lVar9 * 2);
      plVar6 = (longlong *)param_1[0x1d];
      if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
        plVar6 = plVar11;
      }
      plVar6[lVar9] =
           (ulonglong)((uint)(uVar2 >> 1) * *(int *)((longlong)param_1 + 0x1c)) +
           param_1[(ulonglong)(uVar2 & 1) + 4];
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)plVar10[1]);
  }
  if ((longlong)(int)plVar10[2] != -1) {
    if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[0x1d];
    }
    param_1[0xc] = plVar11[(int)plVar10[2]];
  }
  uVar12 = 0;
  do {
    lVar9 = -4;
    uVar8 = uVar12;
    do {
      puVar1 = (uint *)(param_5 + 0x10 + lVar9 * 4);
      if (uVar8 < *puVar1) {
        uVar8 = uVar8 + *(int *)(param_5 + 0x20 + lVar9 * 4);
        fVar16 = param_3 - ((float)uVar8 * *(float *)(param_5 + 0x50 + lVar9 * 4) +
                           *(float *)(param_5 + 0x40 + lVar9 * 4));
        if (0.0 <= fVar16) {
          *(uint *)(param_1[0xc] + (ulonglong)*(uint *)(param_1 + 1) * 4) =
               uVar8 + *(int *)(param_5 + 0x30 + lVar9 * 4);
          fVar14 = *(float *)(*param_1 + 0x30);
          fVar15 = *(float *)(*param_1 + 0x34);
          uVar8 = *(uint *)(param_1 + 1);
          local_cc = *(undefined4 *)((longlong)param_1 + 0x14);
          local_c4 = (int)param_1[3] + 0x1905;
          local_c8 = *(int *)(param_1[0xc] + (ulonglong)uVar8 * 4) + 0xdfd;
          local_d0 = 0x1bd3;
          FUN_148204234(local_c0,&local_d0);
          fVar14 = (float)(local_c0[0] >> 8) * 5.9604645e-08 * (fVar15 - fVar14) + fVar14;
          if ((0.0 < fVar14) && (fVar16 < fVar14)) {
            fVar15 = fVar16 - *(float *)((longlong)param_1 + 0xc);
            if (fVar15 <= 0.0) {
              fVar15 = 0.0;
            }
            *(undefined4 *)(param_1[6] + (ulonglong)uVar8 * 4) = 1;
            *(float *)(param_1[7] + (ulonglong)*(uint *)(param_1 + 1) * 4) = fVar14;
            *(float *)(param_1[8] + (ulonglong)*(uint *)(param_1 + 1) * 4) = fVar16;
            *(float *)(param_1[9] + (ulonglong)*(uint *)(param_1 + 1) * 4) = fVar16 / fVar14;
            *(float *)(param_1[10] + (ulonglong)*(uint *)(param_1 + 1) * 4) = fVar15;
            *(float *)(param_1[0xb] + (ulonglong)*(uint *)(param_1 + 1) * 4) = fVar15 / fVar14;
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          }
        }
        break;
      }
      lVar9 = lVar9 + 1;
      uVar8 = uVar8 - *puVar1;
    } while (lVar9 != 0);
    uVar12 = uVar12 + 1;
    if (uVar12 == param_6) {
      if (((int)param_1[1] != 0) && (lVar9 = plVar10[4], (longlong)(int)lVar9 != 0)) {
        lVar4 = plVar10[3];
        lVar13 = 0;
        do {
          *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(lVar4 + 0x40 + lVar13);
          *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(lVar4 + 0x44 + lVar13);
          *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar4 + 0x48 + lVar13);
          pcVar5 = *(code **)(lVar4 + lVar13);
          plVar11 = *(longlong **)(lVar4 + 0x10 + lVar13);
          plVar10 = (longlong *)(lVar4 + 0x20 + lVar13);
          if (plVar11 != (longlong *)0x0) {
            plVar10 = plVar11;
          }
          uVar7 = (**(code **)(*plVar10 + 8))();
          (*pcVar5)(uVar7,param_1);
          lVar13 = lVar13 + 0x50;
        } while ((longlong)(int)lVar9 * 0x50 != lVar13);
      }
      if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 148204758 FUN_148204758 body=132 status=ok
// SIG undefined FUN_148204758(void)

void FUN_148204758(longlong param_1,uint param_2,int param_3)

{
  undefined1 auStack_58 [40];
  int local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  uint local_20 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(undefined4 *)(param_1 + 0x14);
  local_24 = *(int *)(param_1 + 0x18) + 0x1905;
  local_28 = *(int *)(*(longlong *)(param_1 + 0x60) + (ulonglong)param_2 * 4) + 0xdfd;
  local_30 = param_3 + 0x1bd3;
  FUN_148204234(local_20);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)(local_20[0] >> 8) * 5.9604645e-08);
}



// FUNCTION 1482047de FUN_1482047de body=168 status=ok
// SIG undefined FUN_1482047de(void)

float * FUN_1482047de(longlong param_1,float *param_2,ulonglong param_3,int param_4)

{
  undefined1 auStack_58 [32];
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_2c = *(int *)(param_1 + 0x18) + 0x1905;
  local_30 = *(int *)(*(longlong *)(param_1 + 0x60) + (param_3 & 0xffffffff) * 4) + 0xdfd;
  local_38 = param_4 + 0x1bd3;
  FUN_148204234(&local_28);
  *param_2 = (float)(local_28 >> 8) * 5.9604645e-08;
  param_2[1] = (float)(local_24 >> 8) * 5.9604645e-08;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148204888 FUN_148204888 body=64 status=ok
// SIG undefined FUN_148204888(void)

void FUN_148204888(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_148209bea(param_1,iVar1);
  }
  FUN_148209bd7((longlong)iVar1 * 2 + *param_1,param_2);
  return;
}



// FUNCTION 1482048cc FUN_1482048cc body=176 status=ok
// SIG undefined FUN_1482048cc(void)

void FUN_1482048cc(longlong param_1,undefined4 param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 == (longlong *)0x0) {
    FUN_143ad78c4(param_1);
    plVar1 = *(longlong **)(param_1 + 0x50);
  }
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_1 + 0x30);
  lVar2 = (longlong)local_38;
  _Src = *(void **)(param_1 + 0x28);
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar2 * 2);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_40,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482049b8 FUN_1482049b8 body=38 status=ok
// SIG undefined FUN_1482049b8(void)

undefined8 FUN_1482049b8(undefined8 param_1,int param_2)

{
  FUN_14820186a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1482049de FUN_1482049de body=38 status=ok
// SIG undefined FUN_1482049de(void)

undefined8 FUN_1482049de(undefined8 param_1,int param_2)

{
  FUN_143ad516c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148204a58 FUN_148204a58 body=59 status=ok
// SIG undefined FUN_148204a58(void)

undefined8 FUN_148204a58(longlong *param_1)

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



// FUNCTION 148204b66 FUN_148204b66 body=59 status=ok
// SIG undefined FUN_148204b66(void)

undefined8 FUN_148204b66(longlong *param_1)

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



// FUNCTION 148204c74 FUN_148204c74 body=59 status=ok
// SIG undefined FUN_148204c74(void)

undefined8 FUN_148204c74(longlong *param_1)

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



// FUNCTION 148204d82 FUN_148204d82 body=59 status=ok
// SIG undefined FUN_148204d82(void)

undefined8 FUN_148204d82(longlong *param_1)

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



// FUNCTION 148204e8a FUN_148204e8a body=78 status=ok
// SIG undefined FUN_148204e8a(void)

void FUN_148204e8a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1448eb174(param_2,0xc,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148204faa FUN_148204faa body=59 status=ok
// SIG undefined FUN_148204faa(void)

undefined8 FUN_148204faa(longlong *param_1)

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



// FUNCTION 1482050b8 FUN_1482050b8 body=59 status=ok
// SIG undefined FUN_1482050b8(void)

undefined8 FUN_1482050b8(longlong *param_1)

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



// FUNCTION 1482051dc FUN_1482051dc body=59 status=ok
// SIG undefined FUN_1482051dc(void)

undefined8 FUN_1482051dc(longlong *param_1)

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



// FUNCTION 1482052ea FUN_1482052ea body=59 status=ok
// SIG undefined FUN_1482052ea(void)

undefined8 FUN_1482052ea(longlong *param_1)

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



// FUNCTION 1482053d4 FUN_1482053d4 body=59 status=ok
// SIG undefined FUN_1482053d4(void)

undefined8 FUN_1482053d4(longlong *param_1)

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



// FUNCTION 1482054be FUN_1482054be body=59 status=ok
// SIG undefined FUN_1482054be(void)

undefined8 FUN_1482054be(longlong *param_1)

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



// FUNCTION 1482055cc FUN_1482055cc body=59 status=ok
// SIG undefined FUN_1482055cc(void)

undefined8 FUN_1482055cc(longlong *param_1)

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



// FUNCTION 148205714 FUN_148205714 body=59 status=ok
// SIG undefined FUN_148205714(void)

undefined8 FUN_148205714(longlong *param_1)

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



// FUNCTION 148205822 FUN_148205822 body=59 status=ok
// SIG undefined FUN_148205822(void)

undefined8 FUN_148205822(longlong *param_1)

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



// FUNCTION 1482058c4 FUN_1482058c4 body=49 status=ok
// SIG undefined FUN_1482058c4(void)

void FUN_1482058c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = 0;
  *(undefined8 *)(param_2 + 5) = 0;
  CoCreateGuid((GUID *)(param_2 + 2));
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}



// FUNCTION 1482058f6 FUN_1482058f6 body=48 status=ok
// SIG undefined FUN_1482058f6(void)

void FUN_1482058f6(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 1;
  *(undefined8 *)(param_2 + 1) = 0;
  *(undefined8 *)(param_2 + 3) = 0;
  param_2[5] = 0;
  CoCreateGuid((GUID *)(param_2 + 2));
  *(undefined1 *)(param_2 + 6) = 1;
  return;
}



// FUNCTION 14820598e FUN_14820598e body=72 status=ok
// SIG undefined FUN_14820598e(void)

void FUN_14820598e(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148205abc FUN_148205abc body=59 status=ok
// SIG undefined FUN_148205abc(void)

undefined8 FUN_148205abc(longlong *param_1)

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



// FUNCTION 148205ba2 FUN_148205ba2 body=75 status=ok
// SIG undefined FUN_148205ba2(void)

undefined8 FUN_148205ba2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1481d5918();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148205c16 FUN_148205c16 body=59 status=ok
// SIG undefined FUN_148205c16(void)

undefined8 FUN_148205c16(longlong *param_1)

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



// FUNCTION 148205c5c FUN_148205c5c body=38 status=ok
// SIG undefined FUN_148205c5c(void)

void FUN_148205c5c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 148205d4a FUN_148205d4a body=59 status=ok
// SIG undefined FUN_148205d4a(void)

undefined8 FUN_148205d4a(longlong *param_1)

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



// FUNCTION 148205e58 FUN_148205e58 body=72 status=ok
// SIG undefined FUN_148205e58(void)

void FUN_148205e58(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,param_2[1]);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148205f8c FUN_148205f8c body=59 status=ok
// SIG undefined FUN_148205f8c(void)

undefined8 FUN_148205f8c(longlong *param_1)

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



// FUNCTION 148206076 FUN_148206076 body=78 status=ok
// SIG undefined FUN_148206076(void)

undefined8 FUN_148206076(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 8 + lVar2;
      *(undefined2 *)(lVar1 + -4) = *(undefined2 *)((undefined4 *)(param_3 + lVar2) + 1);
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_3 + lVar2);
      FUN_1447bdc4c();
      lVar2 = lVar2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1482060ec FUN_1482060ec body=59 status=ok
// SIG undefined FUN_1482060ec(void)

undefined8 FUN_1482060ec(longlong *param_1)

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



// FUNCTION 148206132 FUN_148206132 body=38 status=ok
// SIG undefined FUN_148206132(void)

void FUN_148206132(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1482061f0 FUN_1482061f0 body=100 status=ok
// SIG undefined FUN_1482061f0(void)

undefined1 FUN_1482061f0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 14820627c FUN_14820627c body=126 status=ok
// SIG undefined FUN_14820627c(void)

void FUN_14820627c(longlong *param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *(undefined1 *)((longlong)param_2 + 10);
  uVar2 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar3 = FUN_144a78877(uVar2 >> 0x10 ^ uVar2,(short)param_2[1]);
  FUN_144a78877(uVar3,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1482063ce FUN_1482063ce body=59 status=ok
// SIG undefined FUN_1482063ce(void)

undefined8 FUN_1482063ce(longlong *param_1)

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



// FUNCTION 148206470 FUN_148206470 body=40 status=ok
// SIG undefined FUN_148206470(void)

void FUN_148206470(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  return;
}



// FUNCTION 1482064fc FUN_1482064fc body=190 status=ok
// SIG undefined FUN_1482064fc(void)

void FUN_1482064fc(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar2 = *param_2;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  puVar6 = (ulonglong *)FUN_144741050(param_2 + 1);
  uVar1 = *(undefined1 *)((longlong)puVar6 + 10);
  uVar4 = ((uint)(*puVar6 >> 0x14) & 0xffff ^ (uint)(*puVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar5 = FUN_144a78877(uVar4 >> 0x10 ^ uVar4,(short)puVar6[1]);
  uVar5 = FUN_144a78877(uVar5,uVar1);
  FUN_144a78877(uVar5,((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
                      (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4));
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148206622 FUN_148206622 body=47 status=ok
// SIG undefined FUN_148206622(void)

void FUN_148206622(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  uVar1 = FUN_144830b78(param_2 + 1,&DAT_14cb42160);
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  return;
}



// FUNCTION 148206672 FUN_148206672 body=78 status=ok
// SIG undefined FUN_148206672(void)

undefined8 FUN_148206672(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_1447a122a();
      lVar2 = lVar2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1482066f2 FUN_1482066f2 body=38 status=ok
// SIG undefined FUN_1482066f2(void)

void FUN_1482066f2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1482067a0 FUN_1482067a0 body=103 status=ok
// SIG undefined FUN_1482067a0(void)

undefined1 FUN_1482067a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 148206830 FUN_148206830 body=123 status=ok
// SIG undefined FUN_148206830(void)

int FUN_148206830(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1447addd0(param_2 + 1,0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 + (uVar1 >> 0x10 ^ uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148206912 FUN_148206912 body=114 status=ok
// SIG undefined FUN_148206912(void)

void FUN_148206912(longlong *param_1,int param_2)

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



// FUNCTION 148206ac2 FUN_148206ac2 body=59 status=ok
// SIG undefined FUN_148206ac2(void)

undefined8 FUN_148206ac2(longlong *param_1)

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



// FUNCTION 148206b0e FUN_148206b0e body=38 status=ok
// SIG undefined FUN_148206b0e(void)

void FUN_148206b0e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd8) == '\x01') {
    FUN_1403aed04(param_2);
    *(undefined1 *)(param_2 + 0xd8) = 0;
  }
  return;
}



// FUNCTION 148206bcc FUN_148206bcc body=54 status=ok
// SIG undefined FUN_148206bcc(void)

undefined1 FUN_148206bcc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148206ce4(param_2,param_3);
    param_3 = param_3 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return 1;
}



// FUNCTION 148206c2a FUN_148206c2a body=59 status=ok
// SIG undefined FUN_148206c2a(void)

undefined8 FUN_148206c2a(longlong *param_1)

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



// FUNCTION 148206c70 FUN_148206c70 body=38 status=ok
// SIG undefined FUN_148206c70(void)

void FUN_148206c70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 148206ce4 FUN_148206ce4 body=110 status=ok
// SIG undefined FUN_148206ce4(void)

longlong * FUN_148206ce4(longlong *param_1,longlong *param_2)

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
    }
  }
  param_1[1] = lVar2;
  FUN_1447a122a(param_1 + 2,param_2 + 2);
  *(int *)(param_1 + 4) = (int)param_2[4];
  return param_1;
}



// FUNCTION 148206d54 FUN_148206d54 body=38 status=ok
// SIG undefined FUN_148206d54(void)

undefined8 FUN_148206d54(undefined8 param_1,int param_2)

{
  FUN_1481faf36();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148206e1a FUN_148206e1a body=59 status=ok
// SIG undefined FUN_148206e1a(void)

undefined8 FUN_148206e1a(longlong *param_1)

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



// FUNCTION 148206e60 FUN_148206e60 body=32 status=ok
// SIG undefined FUN_148206e60(void)

void FUN_148206e60(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 148206ed0 FUN_148206ed0 body=38 status=ok
// SIG undefined FUN_148206ed0(void)

undefined8 FUN_148206ed0(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148206ef6 FUN_148206ef6 body=114 status=ok
// SIG undefined FUN_148206ef6(void)

void FUN_148206ef6(longlong *param_1,int param_2)

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



// FUNCTION 148206f68 FUN_148206f68 body=186 status=ok
// SIG undefined FUN_148206f68(void)

void FUN_148206f68(longlong param_1,int *param_2,float *param_3,undefined8 *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  fVar2 = DAT_14c846338;
  fVar3 = (float)DAT_14c846330;
  fVar4 = DAT_14c846330._4_4_;
  if (*param_2 == -1) {
    fVar2 = (float)param_2[6] - (float)param_2[3];
    fVar3 = (float)param_2[4] - (float)param_2[1];
    fVar4 = (float)param_2[5] - (float)param_2[2];
  }
  *param_3 = fVar3;
  param_3[1] = fVar4;
  param_3[2] = fVar2;
  lVar1 = (longlong)*param_2;
  if (lVar1 == -1) {
    local_10 = param_2[3];
    local_18 = *(undefined8 *)(param_2 + 1);
  }
  else {
    local_10 = *(int *)(*(longlong *)(param_1 + 0x130) + 8 + lVar1 * 4);
    local_18 = *(undefined8 *)(*(longlong *)(param_1 + 0x130) + lVar1 * 4);
  }
  *(int *)(param_4 + 1) = local_10;
  *param_4 = local_18;
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148207024 FUN_148207024 body=65 status=ok
// SIG undefined FUN_148207024(void)

undefined8 * FUN_148207024(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ae2f7b0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_140296a6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148207066 FUN_148207066 body=34 status=ok
// SIG undefined FUN_148207066(void)

undefined4 FUN_148207066(longlong param_1,undefined8 param_2)

{
  FUN_144a67f5c(param_2,param_1 + 0x30);
  return *(undefined4 *)(param_1 + 0x40);
}



// FUNCTION 148207088 FUN_148207088 body=52 status=ok
// SIG undefined FUN_148207088(void)

void FUN_148207088(longlong *param_1)

{
  FUN_1482070bc();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1482070bc FUN_1482070bc body=332 status=ok
// SIG undefined FUN_1482070bc(void)

void FUN_1482070bc(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
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
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x18);
      if (lVar2 != 0) {
        FUN_148201606(lVar2);
        FUN_1400020a8(lVar2);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148207209 FUN_148207209 body=63 status=ok
// SIG undefined FUN_148207209(void)

bool FUN_148207209(longlong param_1,longlong param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  
  if (param_3 == 0) {
    return true;
  }
  lVar3 = 0;
  do {
    bVar4 = *(short *)(param_1 + lVar3 * 4) == *(short *)(param_2 + lVar3 * 4);
    bVar5 = *(char *)(param_1 + 2 + lVar3 * 4) == *(char *)(param_2 + 2 + lVar3 * 4);
    bVar1 = bVar5 && bVar4;
    if (!bVar5 || !bVar4) {
      return bVar1;
    }
    iVar2 = (int)lVar3;
    lVar3 = lVar3 + 1;
  } while (param_3 + -1 != iVar2);
  return bVar1;
}



// FUNCTION 148207248 FUN_148207248 body=52 status=ok
// SIG undefined FUN_148207248(void)

void FUN_148207248(longlong *param_1)

{
  FUN_14820727c();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14820727c FUN_14820727c body=318 status=ok
// SIG undefined FUN_14820727c(void)

void FUN_14820727c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
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



// FUNCTION 1482073bb FUN_1482073bb body=58 status=ok
// SIG undefined FUN_1482073bb(void)

void FUN_1482073bb(longlong param_1,int param_2)

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
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1482073f6 FUN_1482073f6 body=38 status=ok
// SIG undefined FUN_1482073f6(void)

undefined8 FUN_1482073f6(undefined8 param_1,int param_2)

{
  FUN_148207420();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148207420 FUN_148207420 body=115 status=ok
// SIG undefined FUN_148207420(void)

void FUN_148207420(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae2f7f0;
  FUN_140038ae8(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1[8]);
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000148207488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148207494 FUN_148207494 body=69 status=ok
// SIG undefined FUN_148207494(void)

void FUN_148207494(longlong param_1,uint param_2)

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
    FUN_141494f50(param_1);
    return;
  }
  return;
}



// FUNCTION 1482074da FUN_1482074da body=87 status=ok
// SIG undefined FUN_1482074da(void)

void FUN_1482074da(longlong *param_1,int param_2)

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
  FUN_148207532();
  return;
}



// FUNCTION 148207532 FUN_148207532 body=114 status=ok
// SIG undefined FUN_148207532(void)

void FUN_148207532(longlong *param_1,int param_2)

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



// FUNCTION 1482075a4 FUN_1482075a4 body=322 status=ok
// SIG undefined FUN_1482075a4(void)

void FUN_1482075a4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 1482076e8 FUN_1482076e8 body=311 status=ok
// SIG undefined FUN_1482076e8(void)

void FUN_1482076e8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x30 + lVar2 * 0x48) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x48 + 0x10) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


