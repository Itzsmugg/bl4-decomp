// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149544712 FUN_149544712 body=62 status=ok
// SIG undefined FUN_149544712(void)

void FUN_149544712(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14954477c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149544750 FUN_149544750 body=43 status=ok
// SIG undefined FUN_149544750(void)

void FUN_149544750(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14954477c FUN_14954477c body=93 status=ok
// SIG undefined FUN_14954477c(void)

ulonglong FUN_14954477c(uint param_1,uint param_2)

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



// FUNCTION 1495447da FUN_1495447da body=132 status=ok
// SIG undefined FUN_1495447da(void)

void FUN_1495447da(longlong param_1,int param_2)

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



// FUNCTION 149544860 FUN_149544860 body=89 status=ok
// SIG undefined FUN_149544860(void)

void FUN_149544860(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_1495448f8(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1495448ba FUN_1495448ba body=62 status=ok
// SIG undefined FUN_1495448ba(void)

void FUN_1495448ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149544924(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1495448f8 FUN_1495448f8 body=43 status=ok
// SIG undefined FUN_1495448f8(void)

void FUN_1495448f8(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149544924 FUN_149544924 body=93 status=ok
// SIG undefined FUN_149544924(void)

ulonglong FUN_149544924(uint param_1,uint param_2)

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



// FUNCTION 149544982 FUN_149544982 body=132 status=ok
// SIG undefined FUN_149544982(void)

void FUN_149544982(longlong param_1,int param_2)

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



// FUNCTION 149544a08 FUN_149544a08 body=89 status=ok
// SIG undefined FUN_149544a08(void)

void FUN_149544a08(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x10 + *param_1);
  FUN_149544aa0(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149544a62 FUN_149544a62 body=62 status=ok
// SIG undefined FUN_149544a62(void)

void FUN_149544a62(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149544acc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 149544aa0 FUN_149544aa0 body=43 status=ok
// SIG undefined FUN_149544aa0(void)

void FUN_149544aa0(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 149544acc FUN_149544acc body=93 status=ok
// SIG undefined FUN_149544acc(void)

ulonglong FUN_149544acc(uint param_1,uint param_2)

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



// FUNCTION 149544b2a FUN_149544b2a body=132 status=ok
// SIG undefined FUN_149544b2a(void)

void FUN_149544b2a(longlong param_1,int param_2)

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



// FUNCTION 149544bb0 FUN_149544bb0 body=9 status=ok
// SIG undefined FUN_149544bb0(void)

void FUN_149544bb0(longlong param_1)

{
  FUN_1448eac94(param_1 + 0x10);
  return;
}



// FUNCTION 149544bba FUN_149544bba body=29 status=ok
// SIG undefined FUN_149544bba(void)

undefined8 FUN_149544bba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149544bd8 FUN_149544bd8 body=78 status=ok
// SIG undefined FUN_149544bd8(void)

void FUN_149544bd8(undefined8 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
  puVar2 = (undefined8 *)FUN_14001cc68(0xb8,8);
  *param_1 = puVar2;
  bVar1 = *(byte *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x10) = bVar1 | 1;
  if ((bVar1 & 2) == 0) {
    param_1 = puVar2;
  }
  FUN_14953cbf0(param_1,param_2);
  return;
}



// FUNCTION 149544c26 FUN_149544c26 body=132 status=ok
// SIG undefined FUN_149544c26(void)

void FUN_149544c26(longlong param_1,int param_2)

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



// FUNCTION 149544cac FUN_149544cac body=83 status=ok
// SIG undefined FUN_149544cac(void)

undefined8 * FUN_149544cac(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd3ac78;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149544d00 FUN_149544d00 body=132 status=ok
// SIG undefined FUN_149544d00(void)

void FUN_149544d00(longlong param_1,int param_2)

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



// FUNCTION 149544d86 FUN_149544d86 body=23 status=ok
// SIG undefined FUN_149544d86(void)

void FUN_149544d86(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000149544d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 149544d9e FUN_149544d9e body=29 status=ok
// SIG undefined FUN_149544d9e(void)

undefined8 FUN_149544d9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149544dbc FUN_149544dbc body=167 status=ok
// SIG undefined FUN_149544dbc(void)

void FUN_149544dbc(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_149544e37;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_149544e37;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_149544e37:
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
                    /* WARNING: Could not recover jumptable at 0x000149544e57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 149544e64 FUN_149544e64 body=139 status=ok
// SIG undefined FUN_149544e64(void)

undefined8 * FUN_149544e64(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3acc0;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 149544efa FUN_149544efa body=29 status=ok
// SIG undefined FUN_149544efa(void)

undefined8 FUN_149544efa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149544f18 FUN_149544f18 body=38 status=ok
// SIG undefined FUN_149544f18(void)

undefined8 FUN_149544f18(undefined8 param_1,int param_2)

{
  FUN_149545142();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149544f3e FUN_149544f3e body=188 status=ok
// SIG undefined FUN_149544f3e(void)

void FUN_149544f3e(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar6 = FUN_149545188(param_1 + 0x10,uVar4 & 0xffffffff,param_3,param_4);
      uVar1 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      *(uint *)(lVar3 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_149545338((longlong *)(lVar3 + lVar5),iVar2);
      }
      lVar3 = *(longlong *)(lVar3 + lVar5);
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = uVar6;
      *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = uVar1;
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 149544ffa FUN_149544ffa body=143 status=ok
// SIG undefined FUN_149544ffa(void)

void FUN_149544ffa(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0x68;
    uVar2 = 0;
    do {
      FUN_1495453be(param_1 + 0x10,uVar2 & 0xffffffff,param_5,param_6,
                    *(undefined4 *)
                     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + lVar1) +
                     (longlong)param_2 * 0x1c));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x110;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 14954508a FUN_14954508a body=182 status=ok
// SIG undefined FUN_14954508a(void)

void FUN_14954508a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_1400f01f6(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + lVar1,*param_2,&local_4c);
      local_58 = local_4c;
      FUN_1495453be(param_1 + 0x10,uVar2 & 0xffffffff,param_5,param_6);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x110;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149545142 FUN_149545142 body=70 status=ok
// SIG undefined FUN_149545142(void)

void FUN_149545142(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3acc0;
  FUN_149543a34(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149545188 FUN_149545188 body=431 status=ok
// SIG undefined FUN_149545188(void)

undefined4 FUN_149545188(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  ulonglong *local_88;
  int local_80;
  undefined4 local_7c;
  byte local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14953e9a4(param_1,local_70);
  lVar2 = FUN_14953e8de(local_70);
  uVar9 = 0;
  if (lVar2 == 0) goto LAB_1495451ce;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) {
LAB_149545291:
      lVar5 = FUN_14953e8de(local_70);
      if (lVar5 == 0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_48);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_7c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_90 = *(longlong *)(lVar2 + 0x78);
      local_80 = *(int *)(local_90 + 0x34);
      local_88 = puVar7;
      local_78 = bVar1;
      FUN_140d50566(&local_90,param_2);
      uVar9 = 0;
      if ((int)local_88[1] != 0) {
        if ((local_78 & 1) == 0) {
          uVar6 = *local_88;
        }
        else {
          uVar6 = *local_88;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_88 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_80 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined4 *)0x0) {
          uVar9 = *puVar4;
        }
      }
      goto LAB_1495451ce;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_149545291;
  lVar2 = FUN_14953e8de(local_70);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_48), puVar4 != (undefined4 *)0x0))
  {
    uVar9 = *puVar4;
  }
LAB_1495451ce:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149545338 FUN_149545338 body=132 status=ok
// SIG undefined FUN_149545338(void)

void FUN_149545338(longlong param_1,int param_2)

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



// FUNCTION 1495453be FUN_1495453be body=431 status=ok
// SIG undefined FUN_1495453be(void)

void FUN_1495453be(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  ulonglong *local_88;
  int local_80;
  undefined4 local_7c;
  byte local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14953e9a4(param_1,local_70);
  lVar2 = FUN_14953e8de(local_70);
  if (lVar2 == 0) goto LAB_149545401;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) {
LAB_1495454ca:
      lVar5 = FUN_14953e8de(local_70);
      if (lVar5 == 0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_48);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_7c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_90 = *(longlong *)(lVar2 + 0x78);
      local_80 = *(int *)(local_90 + 0x34);
      local_88 = puVar7;
      local_78 = bVar1;
      FUN_140d50566(&local_90,param_2);
      if ((int)local_88[1] != 0) {
        if ((local_78 & 1) == 0) {
          uVar6 = *local_88;
        }
        else {
          uVar6 = *local_88;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_88 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_80 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = param_5;
        }
      }
      goto LAB_149545401;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1495454ca;
  lVar2 = FUN_14953e8de(local_70);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_48), puVar4 != (undefined4 *)0x0))
  {
    *puVar4 = param_5;
  }
LAB_149545401:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14954556e FUN_14954556e body=139 status=ok
// SIG undefined FUN_14954556e(void)

undefined8 * FUN_14954556e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3ad20;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 149545604 FUN_149545604 body=29 status=ok
// SIG undefined FUN_149545604(void)

undefined8 FUN_149545604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149545622 FUN_149545622 body=38 status=ok
// SIG undefined FUN_149545622(void)

undefined8 FUN_149545622(undefined8 param_1,int param_2)

{
  FUN_149545884();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149545648 FUN_149545648 body=182 status=ok
// SIG undefined FUN_149545648(void)

void FUN_149545648(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = FUN_1495458ca(param_1 + 0x10,uVar6 & 0xffffffff,param_3,param_4);
      uVar1 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      *(uint *)(lVar3 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_149545a62((longlong *)(lVar3 + lVar5),iVar2);
      }
      *(ulonglong *)(*(longlong *)(lVar3 + lVar5) + (longlong)iVar2 * 8) = CONCAT44(uVar1,uVar4);
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 1495456fe FUN_1495456fe body=209 status=ok
// SIG undefined FUN_1495456fe(void)

void FUN_1495456fe(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      FUN_140861d3c(local_68,lVar1 + lVar2,lVar1 + lVar2 + 0x58,lVar1 + 0x80 + lVar2);
      local_78 = *(undefined4 *)(*(longlong *)(lVar1 + lVar2 + 0x70) + (longlong)param_2 * 4);
      local_50 = lVar1 + lVar2 + 0x70;
      FUN_149545ae8(param_1 + 0x10,uVar3 & 0xffffffff,param_5,param_6);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x108;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495457d0 FUN_1495457d0 body=178 status=ok
// SIG undefined FUN_1495457d0(void)

void FUN_1495457d0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_14752e8c0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + lVar1,*param_2,&local_4c);
      local_58 = local_4c;
      FUN_149545ae8(param_1 + 0x10,uVar2 & 0xffffffff,param_5,param_6);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x108;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149545884 FUN_149545884 body=70 status=ok
// SIG undefined FUN_149545884(void)

void FUN_149545884(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3ad20;
  FUN_149543e76(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1495458ca FUN_1495458ca body=406 status=ok
// SIG undefined FUN_1495458ca(void)

undefined4 FUN_1495458ca(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  uVar7 = 0;
  if (lVar2 == 0) goto LAB_149545906;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar9 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar9) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar9 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar9) {
LAB_1495459bd:
      lVar5 = FUN_14953e8de(local_68);
      uVar7 = 0;
      if (lVar5 == 0) {
        puVar8 = (ulonglong *)0x0;
      }
      else {
        puVar8 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_40);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_88 = *(longlong *)(lVar2 + 0x78);
      local_78 = *(int *)(local_88 + 0x34);
      local_80 = puVar8;
      local_70 = bVar1;
      FUN_140d50566(&local_88,param_2);
      if ((int)local_80[1] != 0) {
        if ((local_70 & 1) == 0) {
          uVar6 = *local_80;
        }
        else {
          uVar6 = *local_80;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_80 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_78 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined4 *)0x0) {
          uVar7 = *puVar4;
        }
      }
      goto LAB_149545906;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1495459bd;
  lVar2 = FUN_14953e8de(local_68);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40), puVar4 != (undefined4 *)0x0))
  {
    uVar7 = *puVar4;
  }
LAB_149545906:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149545a62 FUN_149545a62 body=132 status=ok
// SIG undefined FUN_149545a62(void)

void FUN_149545a62(longlong param_1,int param_2)

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



// FUNCTION 149545ae8 FUN_149545ae8 body=407 status=ok
// SIG undefined FUN_149545ae8(void)

void FUN_149545ae8(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_149545b22;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) {
LAB_149545bde:
      lVar5 = FUN_14953e8de(local_68);
      if (lVar5 == 0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_40);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_88 = *(longlong *)(lVar2 + 0x78);
      local_78 = *(int *)(local_88 + 0x34);
      local_80 = puVar7;
      local_70 = bVar1;
      FUN_140d50566(&local_88,param_2);
      if ((int)local_80[1] != 0) {
        if ((local_70 & 1) == 0) {
          uVar6 = *local_80;
        }
        else {
          uVar6 = *local_80;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_80 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_78 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = param_5;
        }
      }
      goto LAB_149545b22;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_149545bde;
  lVar2 = FUN_14953e8de(local_68);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40), puVar4 != (undefined4 *)0x0))
  {
    *puVar4 = param_5;
  }
LAB_149545b22:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149545c80 FUN_149545c80 body=139 status=ok
// SIG undefined FUN_149545c80(void)

undefined8 * FUN_149545c80(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3ad80;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 149545d16 FUN_149545d16 body=29 status=ok
// SIG undefined FUN_149545d16(void)

undefined8 FUN_149545d16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149545d34 FUN_149545d34 body=38 status=ok
// SIG undefined FUN_149545d34(void)

undefined8 FUN_149545d34(undefined8 param_1,int param_2)

{
  FUN_149545f82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149545d5a FUN_149545d5a body=177 status=ok
// SIG undefined FUN_149545d5a(void)

void FUN_149545d5a(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = FUN_144541530(param_1 + 0x10,uVar6 & 0xffffffff,param_3,param_4);
      uVar1 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      *(uint *)(lVar3 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_149545fc8((longlong *)(lVar3 + lVar5),iVar2);
      }
      *(ulonglong *)(*(longlong *)(lVar3 + lVar5) + (longlong)iVar2 * 8) =
           (ulonglong)uVar4 & 0xff | (ulonglong)uVar1 << 0x20;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 149545e0c FUN_149545e0c body=188 status=ok
// SIG undefined FUN_149545e0c(void)

void FUN_149545e0c(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [24];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
      (**(code **)(*(longlong *)(lVar1 + lVar2) + 0x90))(lVar1 + lVar2,local_68);
      local_78 = *(undefined1 *)(*local_50 + (longlong)param_2);
      FUN_14953eb38(param_1 + 0x10,uVar3 & 0xffffffff,param_5,param_6);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x108;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149545eca FUN_149545eca body=183 status=ok
// SIG undefined FUN_149545eca(void)

void FUN_149545eca(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
      (**(code **)(*(longlong *)(lVar1 + lVar2) + 0x98))(lVar1 + lVar2,*param_2,&local_49);
      local_58 = local_49;
      FUN_14953eb38(param_1 + 0x10,uVar3 & 0xffffffff,param_5,param_6);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x108;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149545f82 FUN_149545f82 body=70 status=ok
// SIG undefined FUN_149545f82(void)

void FUN_149545f82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3ad80;
  FUN_149544750(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149545fc8 FUN_149545fc8 body=132 status=ok
// SIG undefined FUN_149545fc8(void)

void FUN_149545fc8(longlong param_1,int param_2)

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



// FUNCTION 14954604e FUN_14954604e body=139 status=ok
// SIG undefined FUN_14954604e(void)

undefined8 * FUN_14954604e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3ade0;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 1495460e4 FUN_1495460e4 body=29 status=ok
// SIG undefined FUN_1495460e4(void)

undefined8 FUN_1495460e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149546102 FUN_149546102 body=38 status=ok
// SIG undefined FUN_149546102(void)

undefined8 FUN_149546102(undefined8 param_1,int param_2)

{
  FUN_149546404();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149546128 FUN_149546128 body=398 status=ok
// SIG undefined FUN_149546128(void)

void FUN_149546128(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_98;
  undefined8 local_90;
  void *local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_90 = param_3;
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    local_98 = param_1 + 0x10;
    lVar4 = 0;
    uVar3 = 0;
    do {
      local_a8 = param_4;
      FUN_14954644a(local_98,&local_70,uVar3 & 0xffffffff,local_90);
      local_88 = (void *)0x0;
      uStack_80 = 0;
      local_78 = *param_2;
      iVar2 = local_68 + -1;
      if (local_68 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(&local_88,local_70,iVar2);
      lVar5 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar5 + 8 + lVar4);
      *(uint *)(lVar5 + 8 + lVar4) = iVar2 + 1U;
      if (*(uint *)(lVar5 + 0xc + lVar4) < iVar2 + 1U) {
        FUN_149546642((longlong *)(lVar5 + lVar4),iVar2);
      }
      _Src = local_88;
      puVar1 = (undefined8 *)(*(longlong *)(lVar5 + lVar4) + (longlong)iVar2 * 0x18);
      *puVar1 = 0;
      lVar5 = (longlong)(int)uStack_80;
      *(int *)(puVar1 + 1) = (int)uStack_80;
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_80 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar5 * 2);
      }
      *(undefined4 *)(puVar1 + 2) = local_78;
      if (local_88 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495462b8 FUN_1495462b8 body=164 status=ok
// SIG undefined FUN_1495462b8(void)

void FUN_1495462b8(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      FUN_14953a510(param_1,local_50,param_2,iVar1);
      local_58 = local_50;
      FUN_1495466d6(param_1 + 0x10,iVar1,param_5,param_6);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954635e FUN_14954635e body=165 status=ok
// SIG undefined FUN_14954635e(void)

void FUN_14954635e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    do {
      FUN_14953a5e0(param_1,local_50,param_2,iVar1);
      local_58 = local_50;
      FUN_1495466d6(param_1 + 0x10,iVar1,param_5,param_6);
      if (local_50[0] != 0) {
        FUN_1400020a8();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x28));
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149546404 FUN_149546404 body=70 status=ok
// SIG undefined FUN_149546404(void)

void FUN_149546404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3ade0;
  FUN_1495441e8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14954644a FUN_14954644a body=502 status=ok
// SIG undefined FUN_14954644a(void)

undefined8 *
FUN_14954644a(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,longlong param_5
             )

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  void *_Src;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68,param_4);
  lVar3 = FUN_14953e8de(local_68);
  if (lVar3 != 0) {
    lVar6 = *(longlong *)(lVar3 + 8);
    lVar4 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar4 + 8) == 0) {
      bVar9 = lVar6 != 0;
      if (lVar6 != lVar4 && bVar9) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar9 = lVar6 != 0;
          if (lVar6 == lVar4) break;
        } while (lVar6 != 0);
      }
      if (bVar9) goto LAB_14954655a;
LAB_14954650e:
      lVar3 = FUN_14953e8de(local_68);
      if ((lVar3 == 0) ||
         (puVar5 = (undefined8 *)
                   ((longlong)param_3 * (longlong)*(int *)(lVar3 + 0x34) +
                   (longlong)*(int *)(lVar3 + 0x44) + param_5 + local_40),
         puVar5 == (undefined8 *)0x0)) goto LAB_149546488;
      *param_2 = 0;
      iVar2 = *(int *)(puVar5 + 1);
      _Src = (void *)*puVar5;
LAB_1495465ec:
      *(int *)(param_2 + 1) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar2,0);
        memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
      }
      goto LAB_14954648e;
    }
    if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar4 + 8)) == 0) goto LAB_14954650e;
LAB_14954655a:
    lVar6 = FUN_14953e8de(local_68);
    if (lVar6 == 0) {
      puVar8 = (ulonglong *)0x0;
    }
    else {
      puVar8 = (ulonglong *)((longlong)*(int *)(lVar6 + 0x44) + param_5 + local_40);
    }
    bVar1 = *(byte *)(lVar3 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar3 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar3 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar8;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_3);
    if ((int)local_80[1] != 0) {
      if ((local_70 & 1) == 0) {
        uVar7 = *local_80;
      }
      else {
        uVar7 = *local_80;
        if ((uVar7 & 1) != 0) {
          uVar7 = (longlong)local_80 + ((longlong)uVar7 >> 0x18);
        }
      }
      puVar5 = (undefined8 *)((longlong)local_78 * (longlong)param_3 + uVar7);
      if (puVar5 != (undefined8 *)0x0) {
        *param_2 = 0;
        iVar2 = *(int *)(puVar5 + 1);
        _Src = (void *)*puVar5;
        goto LAB_1495465ec;
      }
    }
  }
LAB_149546488:
  *param_2 = 0;
  param_2[1] = 0;
LAB_14954648e:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149546642 FUN_149546642 body=147 status=ok
// SIG undefined FUN_149546642(void)

void FUN_149546642(longlong param_1,int param_2)

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



// FUNCTION 1495466d6 FUN_1495466d6 body=412 status=ok
// SIG undefined FUN_1495466d6(void)

void FUN_1495466d6(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  bool bVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_149546710;
  lVar4 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar4 != 0;
    if (lVar4 != lVar3 && bVar7) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar7 = lVar4 != 0;
        if (lVar4 == lVar3) break;
      } while (lVar4 != 0);
    }
    if (!bVar7) goto LAB_14954678d;
LAB_1495467cb:
    lVar4 = FUN_14953e8de(local_68);
    if (lVar4 == 0) {
      puVar6 = (ulonglong *)0x0;
    }
    else {
      puVar6 = (ulonglong *)((longlong)*(int *)(lVar4 + 0x44) + param_4 + local_40);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar2 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar6;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_2);
    if ((int)local_80[1] == 0) goto LAB_149546710;
    if ((local_70 & 1) == 0) {
      uVar5 = *local_80;
    }
    else {
      uVar5 = *local_80;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)local_80 + ((longlong)uVar5 >> 0x18);
      }
    }
    lVar2 = (longlong)local_78 * (longlong)param_2 + uVar5;
  }
  else {
    if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_1495467cb;
LAB_14954678d:
    lVar2 = FUN_14953e8de(local_68);
    if (lVar2 == 0) goto LAB_149546710;
    lVar2 = (longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
            (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40;
  }
  if (lVar2 != 0) {
    FUN_144a787a6(lVar2,param_5);
  }
LAB_149546710:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149546874 FUN_149546874 body=139 status=ok
// SIG undefined FUN_149546874(void)

undefined8 * FUN_149546874(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3ae40;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 14954690a FUN_14954690a body=29 status=ok
// SIG undefined FUN_14954690a(void)

undefined8 FUN_14954690a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149546928 FUN_149546928 body=38 status=ok
// SIG undefined FUN_149546928(void)

undefined8 FUN_149546928(undefined8 param_1,int param_2)

{
  FUN_149546b8c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954694e FUN_14954694e body=184 status=ok
// SIG undefined FUN_14954694e(void)

void FUN_14954694e(longlong param_1,uint *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      uVar4 = FUN_149546bd2(param_1 + 0x10,uVar6 & 0xffffffff,param_3,param_4);
      uVar1 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar5);
      *(uint *)(lVar3 + 8 + lVar5) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar5) < iVar2 + 1U) {
        FUN_149546d6c((longlong *)(lVar3 + lVar5),iVar2);
      }
      *(ulonglong *)(*(longlong *)(lVar3 + lVar5) + (longlong)iVar2 * 8) =
           (ulonglong)uVar4 & 0xff | (ulonglong)uVar1 << 0x20;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 149546a06 FUN_149546a06 body=209 status=ok
// SIG undefined FUN_149546a06(void)

void FUN_149546a06(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      FUN_140861d3c(local_68,lVar1 + lVar2,lVar1 + lVar2 + 0x58,lVar1 + 0x88 + lVar2);
      local_78 = *(undefined1 *)(*(longlong *)(lVar1 + lVar2 + 0x70) + (longlong)param_2);
      local_50 = lVar1 + lVar2 + 0x70;
      FUN_149546df2(param_1 + 0x10,uVar3 & 0xffffffff,param_5,param_6);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x110;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149546ad8 FUN_149546ad8 body=178 status=ok
// SIG undefined FUN_149546ad8(void)

void FUN_149546ad8(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_1410676cc(*(longlong *)(*(longlong *)(param_1 + 8) + 0x48) + lVar1,*param_2,&local_49);
      local_58 = local_49;
      FUN_149546df2(param_1 + 0x10,uVar2 & 0xffffffff,param_5,param_6);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x110;
    } while ((longlong)uVar2 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149546b8c FUN_149546b8c body=70 status=ok
// SIG undefined FUN_149546b8c(void)

void FUN_149546b8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3ae40;
  FUN_1495443c6(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149546bd2 FUN_149546bd2 body=408 status=ok
// SIG undefined FUN_149546bd2(void)

undefined1 FUN_149546bd2(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  ulonglong *local_78;
  int local_70;
  undefined4 local_6c;
  byte local_68;
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_60);
  lVar2 = FUN_14953e8de(local_60);
  if (lVar2 != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar9 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar9) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar9 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar9) {
LAB_149546cc8:
        lVar5 = FUN_14953e8de(local_60);
        if (lVar5 == 0) {
          puVar8 = (ulonglong *)0x0;
        }
        else {
          puVar8 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_38);
        }
        bVar1 = *(byte *)(lVar2 + 0x70);
        local_6c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
        local_80 = *(longlong *)(lVar2 + 0x78);
        local_70 = *(int *)(local_80 + 0x34);
        local_78 = puVar8;
        local_68 = bVar1;
        FUN_140d50566(&local_80,param_2);
        if ((int)local_78[1] != 0) {
          if ((local_68 & 1) == 0) {
            uVar6 = *local_78;
          }
          else {
            uVar6 = *local_78;
            if ((uVar6 & 1) != 0) {
              uVar6 = (longlong)local_78 + ((longlong)uVar6 >> 0x18);
            }
          }
          puVar4 = (undefined1 *)((longlong)local_70 * (longlong)param_2 + uVar6);
          if (puVar4 != (undefined1 *)0x0) {
            uVar7 = *puVar4;
            goto LAB_149546c0f;
          }
        }
        goto LAB_149546c0d;
      }
    }
    else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_149546cc8;
    lVar2 = FUN_14953e8de(local_60);
    if ((lVar2 != 0) &&
       (puVar4 = (undefined1 *)
                 ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
                 (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_38), puVar4 != (undefined1 *)0x0
       )) {
      uVar7 = *puVar4;
      goto LAB_149546c0f;
    }
  }
LAB_149546c0d:
  uVar7 = 0;
LAB_149546c0f:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 149546d6c FUN_149546d6c body=132 status=ok
// SIG undefined FUN_149546d6c(void)

void FUN_149546d6c(longlong param_1,int param_2)

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



// FUNCTION 149546df2 FUN_149546df2 body=410 status=ok
// SIG undefined FUN_149546df2(void)

void FUN_149546df2(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined1 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_149546e2c;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) {
LAB_149546eea:
      lVar5 = FUN_14953e8de(local_68);
      if (lVar5 == 0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_40);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_88 = *(longlong *)(lVar2 + 0x78);
      local_78 = *(int *)(local_88 + 0x34);
      local_80 = puVar7;
      local_70 = bVar1;
      FUN_140d50566(&local_88,param_2);
      if ((int)local_80[1] != 0) {
        if ((local_70 & 1) == 0) {
          uVar6 = *local_80;
        }
        else {
          uVar6 = *local_80;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_80 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined1 *)((longlong)local_78 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = param_5;
        }
      }
      goto LAB_149546e2c;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_149546eea;
  lVar2 = FUN_14953e8de(local_68);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined1 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40), puVar4 != (undefined1 *)0x0))
  {
    *puVar4 = param_5;
  }
LAB_149546e2c:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149546f8e FUN_149546f8e body=134 status=ok
// SIG undefined FUN_149546f8e(void)

undefined8 * FUN_149546f8e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3aea0;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14954701e FUN_14954701e body=29 status=ok
// SIG undefined FUN_14954701e(void)

undefined8 FUN_14954701e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954703c FUN_14954703c body=38 status=ok
// SIG undefined FUN_14954703c(void)

undefined8 FUN_14954703c(undefined8 param_1,int param_2)

{
  FUN_149547062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149547062 FUN_149547062 body=70 status=ok
// SIG undefined FUN_149547062(void)

void FUN_149547062(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3aea0;
  FUN_1495436d0(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1495470a8 FUN_1495470a8 body=134 status=ok
// SIG undefined FUN_1495470a8(void)

undefined8 * FUN_1495470a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3af00;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14954712e FUN_14954712e body=9 status=ok
// SIG undefined FUN_14954712e(void)

void FUN_14954712e(longlong param_1)

{
  FUN_14954717c(param_1 + 0x10);
  return;
}



// FUNCTION 149547138 FUN_149547138 body=29 status=ok
// SIG undefined FUN_149547138(void)

undefined8 FUN_149547138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149547156 FUN_149547156 body=38 status=ok
// SIG undefined FUN_149547156(void)

undefined8 FUN_149547156(undefined8 param_1,int param_2)

{
  FUN_14954717c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954717c FUN_14954717c body=70 status=ok
// SIG undefined FUN_14954717c(void)

void FUN_14954717c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3af00;
  FUN_1495471c2(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1495471c2 FUN_1495471c2 body=41 status=ok
// SIG undefined FUN_1495471c2(void)

void FUN_1495471c2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1495471ec(param_1);
    param_1 = param_1 + 0xa0;
  }
  return;
}



// FUNCTION 1495471ec FUN_1495471ec body=165 status=ok
// SIG undefined FUN_1495471ec(void)

void FUN_1495471ec(longlong *param_1)

{
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 149547292 FUN_149547292 body=139 status=ok
// SIG undefined FUN_149547292(void)

undefined8 * FUN_149547292(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3af60;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 149547328 FUN_149547328 body=29 status=ok
// SIG undefined FUN_149547328(void)

undefined8 FUN_149547328(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149547346 FUN_149547346 body=38 status=ok
// SIG undefined FUN_149547346(void)

undefined8 FUN_149547346(undefined8 param_1,int param_2)

{
  FUN_149547644();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954736c FUN_14954736c body=237 status=ok
// SIG undefined FUN_14954736c(void)

void FUN_14954736c(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_3;
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    local_70 = param_1 + 0x10;
    lVar7 = 0;
    uVar6 = 0;
    do {
      local_78 = param_4;
      FUN_14954768a(local_70,&local_60,uVar6 & 0xffffffff,local_68);
      uVar2 = *param_2;
      lVar4 = *(longlong *)(param_1 + 0x30);
      iVar3 = *(int *)(lVar4 + 8 + lVar7);
      *(uint *)(lVar4 + 8 + lVar7) = iVar3 + 1U;
      if (*(uint *)(lVar4 + 0xc + lVar7) < iVar3 + 1U) {
        FUN_149547852((longlong *)(lVar4 + lVar7),iVar3);
      }
      lVar4 = *(longlong *)(lVar4 + lVar7);
      lVar5 = (longlong)iVar3 * 0x20;
      *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_50;
      puVar1 = (undefined4 *)(lVar4 + lVar5);
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
      *(undefined4 *)(lVar4 + 0x18 + lVar5) = uVar2;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14954745a FUN_14954745a body=239 status=ok
// SIG undefined FUN_14954745a(void)

void FUN_14954745a(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      plVar1 = (longlong *)(uVar4 * 0x110 + *(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x68);
      lVar2 = 0;
      do {
        (&local_60)[lVar2] = (double)*(float *)(*plVar1 + (longlong)param_2 * 0x1c);
        lVar2 = lVar2 + 1;
        plVar1 = plVar1 + 0x22;
      } while (lVar2 != 3);
      local_68 = local_50;
      local_78 = (undefined4)local_60;
      uStack_74 = local_60._4_4_;
      uStack_70 = uStack_58;
      uStack_6c = uStack_54;
      local_88 = &local_78;
      FUN_1495478d8(param_1 + 0x10,iVar3,param_5,param_6);
      iVar3 = iVar3 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 3);
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954754a FUN_14954754a body=248 status=ok
// SIG undefined FUN_14954754a(void)

void FUN_14954754a(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 local_98 [32];
  double *local_78;
  double local_70;
  double local_68;
  double local_60;
  float local_54;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)local_98;
  if (0 < *(int *)(param_1 + 0x28)) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      lVar2 = uVar4 * 0x110;
      lVar1 = *(longlong *)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_1400f01f6(*(longlong *)(lVar1 + 8) + lVar2,*param_2,(longlong)&local_54 + lVar5);
        lVar2 = lVar2 + 0x110;
        lVar5 = lVar5 + 4;
      } while (lVar5 != 0xc);
      local_60 = (double)local_4c;
      local_68 = (double)local_50;
      local_70 = (double)local_54;
      local_78 = &local_70;
      FUN_1495478d8(param_1 + 0x10,iVar3,param_5,param_6);
      iVar3 = iVar3 + 1;
      uVar4 = (ulonglong)((int)uVar4 + 3);
    } while (iVar3 < *(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)local_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149547644 FUN_149547644 body=70 status=ok
// SIG undefined FUN_149547644(void)

void FUN_149547644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3af60;
  FUN_1495448f8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14954768a FUN_14954768a body=454 status=ok
// SIG undefined FUN_14954768a(void)

undefined8 *
FUN_14954768a(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,longlong param_5
             )

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68,param_4);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 != 0) {
    lVar5 = *(longlong *)(lVar2 + 8);
    lVar3 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar3 + 8) == 0) {
      bVar8 = lVar5 != 0;
      if (lVar5 != lVar3 && bVar8) {
        do {
          lVar5 = *(longlong *)(lVar5 + 0x30);
          bVar8 = lVar5 != 0;
          if (lVar5 == lVar3) break;
        } while (lVar5 != 0);
      }
      if (bVar8) goto LAB_14954779f;
LAB_149547756:
      lVar2 = FUN_14953e8de(local_68);
      if ((lVar2 == 0) ||
         (puVar4 = (undefined4 *)
                   ((longlong)param_3 * (longlong)*(int *)(lVar2 + 0x34) +
                   (longlong)*(int *)(lVar2 + 0x44) + param_5 + local_40),
         puVar4 == (undefined4 *)0x0)) goto LAB_1495476c8;
      param_2[2] = *(undefined8 *)(puVar4 + 4);
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
LAB_14954782e:
      *(undefined4 *)param_2 = uVar9;
      *(undefined4 *)((longlong)param_2 + 4) = uVar10;
      *(undefined4 *)(param_2 + 1) = uVar11;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
      goto LAB_1495476d6;
    }
    if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) goto LAB_149547756;
LAB_14954779f:
    lVar5 = FUN_14953e8de(local_68);
    if (lVar5 == 0) {
      puVar7 = (ulonglong *)0x0;
    }
    else {
      puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_5 + local_40);
    }
    bVar1 = *(byte *)(lVar2 + 0x70);
    local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
    local_88 = *(longlong *)(lVar2 + 0x78);
    local_78 = *(int *)(local_88 + 0x34);
    local_80 = puVar7;
    local_70 = bVar1;
    FUN_140d50566(&local_88,param_3);
    if ((int)local_80[1] != 0) {
      if ((local_70 & 1) == 0) {
        uVar6 = *local_80;
      }
      else {
        uVar6 = *local_80;
        if ((uVar6 & 1) != 0) {
          uVar6 = (longlong)local_80 + ((longlong)uVar6 >> 0x18);
        }
      }
      puVar4 = (undefined4 *)((longlong)local_78 * (longlong)param_3 + uVar6);
      if (puVar4 != (undefined4 *)0x0) {
        param_2[2] = *(undefined8 *)(puVar4 + 4);
        uVar9 = *puVar4;
        uVar10 = puVar4[1];
        uVar11 = puVar4[2];
        uVar12 = puVar4[3];
        goto LAB_14954782e;
      }
    }
  }
LAB_1495476c8:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
LAB_1495476d6:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149547852 FUN_149547852 body=132 status=ok
// SIG undefined FUN_149547852(void)

void FUN_149547852(longlong param_1,int param_2)

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



// FUNCTION 1495478d8 FUN_1495478d8 body=438 status=ok
// SIG undefined FUN_1495478d8(void)

void FUN_1495478d8(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined4 *param_5)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  bool bVar11;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar5 = FUN_14953e8de(local_68);
  if (lVar5 == 0) goto LAB_149547912;
  lVar8 = *(longlong *)(lVar5 + 8);
  lVar6 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar6 + 8) == 0) {
    bVar11 = lVar8 != 0;
    if (lVar8 != lVar6 && bVar11) {
      do {
        lVar8 = *(longlong *)(lVar8 + 0x30);
        bVar11 = lVar8 != 0;
        if (lVar8 == lVar6) break;
      } while (lVar8 != 0);
    }
    if (bVar11) {
LAB_1495479dc:
      lVar8 = FUN_14953e8de(local_68);
      if (lVar8 == 0) {
        puVar10 = (ulonglong *)0x0;
      }
      else {
        puVar10 = (ulonglong *)((longlong)*(int *)(lVar8 + 0x44) + param_4 + local_40);
      }
      bVar1 = *(byte *)(lVar5 + 0x70);
      local_74 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x178))();
      local_88 = *(longlong *)(lVar5 + 0x78);
      local_78 = *(int *)(local_88 + 0x34);
      local_80 = puVar10;
      local_70 = bVar1;
      FUN_140d50566(&local_88,param_2);
      if ((int)local_80[1] != 0) {
        if ((local_70 & 1) == 0) {
          uVar9 = *local_80;
        }
        else {
          uVar9 = *local_80;
          if ((uVar9 & 1) != 0) {
            uVar9 = (longlong)local_80 + ((longlong)uVar9 >> 0x18);
          }
        }
        puVar7 = (undefined4 *)((longlong)local_78 * (longlong)param_2 + uVar9);
        if (puVar7 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_5 + 4);
          uVar2 = param_5[1];
          uVar3 = param_5[2];
          uVar4 = param_5[3];
          *puVar7 = *param_5;
          puVar7[1] = uVar2;
          puVar7[2] = uVar3;
          puVar7[3] = uVar4;
        }
      }
      goto LAB_149547912;
    }
  }
  else if ((*(ulonglong *)(lVar8 + 0x18) & *(ulonglong *)(lVar6 + 8)) != 0) goto LAB_1495479dc;
  lVar5 = FUN_14953e8de(local_68);
  if ((lVar5 != 0) &&
     (puVar7 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar5 + 0x34) +
               (longlong)*(int *)(lVar5 + 0x44) + param_4 + local_40), puVar7 != (undefined4 *)0x0))
  {
    *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_5 + 4);
    uVar2 = param_5[1];
    uVar3 = param_5[2];
    uVar4 = param_5[3];
    *puVar7 = *param_5;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    puVar7[3] = uVar4;
  }
LAB_149547912:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149547a90 FUN_149547a90 body=139 status=ok
// SIG undefined FUN_149547a90(void)

undefined8 * FUN_149547a90(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &PTR_FUN_14bd3afc0;
  param_1[1] = param_3;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
    param_3 = (undefined8 *)param_1[1];
  }
  param_1[4] = param_2[2];
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_3 = param_2[2];
  return param_1;
}



// FUNCTION 149547b1c FUN_149547b1c body=9 status=ok
// SIG undefined FUN_149547b1c(void)

void FUN_149547b1c(longlong param_1)

{
  FUN_149547dbe(param_1 + 0x10);
  return;
}



// FUNCTION 149547b26 FUN_149547b26 body=29 status=ok
// SIG undefined FUN_149547b26(void)

undefined8 FUN_149547b26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149547b44 FUN_149547b44 body=38 status=ok
// SIG undefined FUN_149547b44(void)

undefined8 FUN_149547b44(undefined8 param_1,int param_2)

{
  FUN_149547dbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149547b6a FUN_149547b6a body=232 status=ok
// SIG undefined FUN_149547b6a(void)

void FUN_149547b6a(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_2;
  local_58 = param_3;
  if ((param_4 != 0) && (0 < *(int *)(param_1 + 0x28))) {
    local_68 = param_1 + 0x10;
    lVar6 = 0;
    uVar5 = 0;
    do {
      local_78 = param_4;
      FUN_149547e04(local_68,&local_4c,uVar5 & 0xffffffff,local_58);
      uVar4 = local_4c;
      uVar1 = *local_60;
      lVar3 = *(longlong *)(param_1 + 0x30);
      iVar2 = *(int *)(lVar3 + 8 + lVar6);
      *(uint *)(lVar3 + 8 + lVar6) = iVar2 + 1U;
      if (*(uint *)(lVar3 + 0xc + lVar6) < iVar2 + 1U) {
        FUN_149547fb0((longlong *)(lVar3 + lVar6),iVar2);
      }
      *(ulonglong *)(*(longlong *)(lVar3 + lVar6) + (longlong)iVar2 * 8) = CONCAT44(uVar1,uVar4);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149547c54 FUN_149547c54 body=188 status=ok
// SIG undefined FUN_149547c54(void)

void FUN_149547c54(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = (longlong)param_2;
    lVar3 = 0x3a0;
    uVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      FUN_149548036(param_1 + 0x10,uVar4 & 0xffffffff,param_5,param_6,
                    (uint)*(byte *)(*(longlong *)(lVar1 + -0x220 + lVar3) + lVar2) << 8 |
                    (uint)*(byte *)(*(longlong *)(lVar1 + -0x330 + lVar3) + lVar2) << 0x10 |
                    (uint)*(byte *)(*(longlong *)(lVar1 + -0x110 + lVar3) + lVar2) |
                    (uint)*(byte *)(*(longlong *)(lVar1 + lVar3) + lVar2) << 0x18);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x440;
    } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x28));
  }
  return;
}



// FUNCTION 149547d10 FUN_149547d10 body=173 status=ok
// SIG undefined FUN_149547d10(void)

void FUN_149547d10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      local_4c = iVar1;
      FUN_149539a05(param_2,&local_4c,*(longlong *)(param_1 + 8) + 0x48,&local_50);
      local_58 = local_50;
      FUN_149548036(param_1 + 0x10,iVar2,param_5,param_6);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 0x28));
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149547dbe FUN_149547dbe body=70 status=ok
// SIG undefined FUN_149547dbe(void)

void FUN_149547dbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3afc0;
  FUN_149544aa0(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149547e04 FUN_149547e04 body=426 status=ok
// SIG undefined FUN_149547e04(void)

undefined4 *
FUN_149547e04(undefined8 param_1,undefined4 *param_2,int param_3,undefined8 param_4,longlong param_5
             )

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  bool bVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  ulonglong *local_88;
  int local_80;
  undefined4 local_7c;
  byte local_78;
  undefined1 local_70 [24];
  longlong local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14953e9a4(param_1,local_70,param_4);
  lVar2 = FUN_14953e8de(local_70);
  if (lVar2 == 0) {
    *param_2 = 0;
    goto LAB_149547e4d;
  }
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar9 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar9) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar9 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar9) {
LAB_149547f0e:
      lVar5 = FUN_14953e8de(local_70);
      if (lVar5 == 0) {
        puVar8 = (ulonglong *)0x0;
      }
      else {
        puVar8 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_5 + local_48);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_7c = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_90 = *(longlong *)(lVar2 + 0x78);
      local_80 = *(int *)(local_90 + 0x34);
      local_88 = puVar8;
      local_78 = bVar1;
      FUN_140d50566(&local_90,param_3);
      uVar7 = 0;
      if ((int)local_88[1] != 0) {
        if ((local_78 & 1) == 0) {
          uVar6 = *local_88;
        }
        else {
          uVar6 = *local_88;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_88 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_80 * (longlong)param_3 + uVar6);
        uVar7 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          uVar7 = *puVar4;
        }
      }
      *param_2 = uVar7;
      goto LAB_149547e4d;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_149547f0e;
  lVar2 = FUN_14953e8de();
  uVar7 = 0;
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_3 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_5 + local_48), uVar7 = 0,
     puVar4 != (undefined4 *)0x0)) {
    uVar7 = *puVar4;
  }
  *param_2 = uVar7;
LAB_149547e4d:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149547fb0 FUN_149547fb0 body=132 status=ok
// SIG undefined FUN_149547fb0(void)

void FUN_149547fb0(longlong param_1,int param_2)

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



// FUNCTION 149548036 FUN_149548036 body=407 status=ok
// SIG undefined FUN_149548036(void)

void FUN_149548036(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  ulonglong *local_80;
  int local_78;
  undefined4 local_74;
  byte local_70;
  undefined1 local_68 [24];
  longlong local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14953e9a4(param_1,local_68);
  lVar2 = FUN_14953e8de(local_68);
  if (lVar2 == 0) goto LAB_149548070;
  lVar5 = *(longlong *)(lVar2 + 8);
  lVar3 = FUN_1446e6bbc();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar8 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar8) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar8 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar8) {
LAB_14954812c:
      lVar5 = FUN_14953e8de(local_68);
      if (lVar5 == 0) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        puVar7 = (ulonglong *)((longlong)*(int *)(lVar5 + 0x44) + param_4 + local_40);
      }
      bVar1 = *(byte *)(lVar2 + 0x70);
      local_74 = (**(code **)(**(longlong **)(lVar2 + 0x78) + 0x178))();
      local_88 = *(longlong *)(lVar2 + 0x78);
      local_78 = *(int *)(local_88 + 0x34);
      local_80 = puVar7;
      local_70 = bVar1;
      FUN_140d50566(&local_88,param_2);
      if ((int)local_80[1] != 0) {
        if ((local_70 & 1) == 0) {
          uVar6 = *local_80;
        }
        else {
          uVar6 = *local_80;
          if ((uVar6 & 1) != 0) {
            uVar6 = (longlong)local_80 + ((longlong)uVar6 >> 0x18);
          }
        }
        puVar4 = (undefined4 *)((longlong)local_78 * (longlong)param_2 + uVar6);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = param_5;
        }
      }
      goto LAB_149548070;
    }
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_14954812c;
  lVar2 = FUN_14953e8de(local_68);
  if ((lVar2 != 0) &&
     (puVar4 = (undefined4 *)
               ((longlong)param_2 * (longlong)*(int *)(lVar2 + 0x34) +
               (longlong)*(int *)(lVar2 + 0x44) + param_4 + local_40), puVar4 != (undefined4 *)0x0))
  {
    *puVar4 = param_5;
  }
LAB_149548070:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495481ce FUN_1495481ce body=366 status=ok
// SIG undefined FUN_1495481ce(void)

undefined4 * FUN_1495481ce(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined *puVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14954833e(local_48);
  puVar1 = (undefined4 *)*param_2;
  lVar2 = param_2[1];
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  *(undefined4 *)local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 4) = uVar5;
  *(undefined4 *)(local_40 + 1) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar7;
  FUN_1406fa146(local_40 + 2,lVar2);
  local_40[7] = *(undefined8 *)(lVar2 + 0x28);
  *(undefined4 *)(local_40 + 8) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = local_40[1];
  iVar9 = FUN_144a788f7();
  uVar4 = *local_40;
  iVar10 = FUN_144a788f7();
  uVar11 = FUN_144a78877((int)((ulonglong)uVar4 >> 0x20) + iVar10,
                         (int)((ulonglong)uVar3 >> 0x20) + iVar9);
  cVar8 = FUN_14954844c(uVar11,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar8 == '\0') {
    uVar12 = DAT_14cc1e720 - DAT_14cc1e74c;
    iVar9 = 1;
    if (3 < uVar12) {
      uVar14 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar9 <= DAT_14cc1e760)) {
      uVar11 = DAT_14cc1e760 - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x44) = uVar11;
      puVar13 = DAT_14cc1e758;
      if (DAT_14cc1e758 == (undefined *)0x0) {
        puVar13 = &DAT_14cc1e750;
      }
      *(undefined4 *)(local_40 + 8) =
           *(undefined4 *)(puVar13 + ((longlong)DAT_14cc1e760 - 1U & (longlong)(int)uVar11) * 4);
      puVar13 = DAT_14cc1e758;
      if (DAT_14cc1e758 == (undefined *)0x0) {
        puVar13 = &DAT_14cc1e750;
      }
      *(undefined4 *)(puVar13 + ((longlong)DAT_14cc1e760 - 1U & (longlong)(int)uVar11) * 4) =
           local_4c;
    }
    else {
      DAT_14cc1e760 = iVar9;
      FUN_149548592();
    }
  }
  *param_1 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954833e FUN_14954833e body=270 status=ok
// SIG undefined FUN_14954833e(void)

int * FUN_14954833e(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar2 = DAT_14cc1e748;
  iVar4 = DAT_14cc1e720;
  if (DAT_14cc1e74c == 0) {
    iVar2 = DAT_14cc1e720 + 1;
    bVar7 = DAT_14cc1e724 == DAT_14cc1e720;
    DAT_14cc1e720 = iVar2;
    if (bVar7) {
      FUN_14021b4e8(&DAT_14cc1e718,iVar4);
    }
    lVar6 = (longlong)iVar4;
    iVar2 = FUN_144a54ea4(&DAT_14cc1e728,1);
    puVar3 = DAT_14cc1e738;
    if (DAT_14cc1e738 == (undefined *)0x0) {
      puVar3 = &DAT_14cc1e728;
    }
    iVar5 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar5 = iVar2;
    }
    bVar1 = (byte)iVar2 & 0x1f;
    *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) =
         *(uint *)(puVar3 + (longlong)(iVar5 >> 5) * 4) &
         (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  }
  else {
    lVar6 = (longlong)DAT_14cc1e748;
    DAT_14cc1e748 = *(int *)(DAT_14cc1e718 + 4 + lVar6 * 0x48);
    DAT_14cc1e74c = DAT_14cc1e74c + -1;
    iVar4 = iVar2;
    if (DAT_14cc1e74c != 0) {
      *(undefined4 *)(DAT_14cc1e718 + (longlong)DAT_14cc1e748 * 0x48) = 0xffffffff;
    }
  }
  puVar3 = &DAT_14cc1e728;
  if (DAT_14cc1e738 != (undefined *)0x0) {
    puVar3 = DAT_14cc1e738;
  }
  iVar2 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar2 = iVar4;
  }
  *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar4 & 0x1f);
  *param_1 = iVar4;
  *(longlong *)(param_1 + 2) = lVar6 * 0x48 + DAT_14cc1e718;
  return param_1;
}



// FUNCTION 14954844c FUN_14954844c body=198 status=ok
// SIG undefined FUN_14954844c(void)

undefined8 FUN_14954844c(uint param_1,longlong *param_2,int *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *puVar17;
  int iVar18;
  
  if (1 < (uint)(DAT_14cc1e720 - DAT_14cc1e74c)) {
    puVar17 = &DAT_14cc1e750;
    if (DAT_14cc1e758 != (undefined *)0x0) {
      puVar17 = DAT_14cc1e758;
    }
    iVar18 = *(int *)(puVar17 + (ulonglong)(DAT_14cc1e760 - 1U & param_1) * 4);
    if (iVar18 != -1) {
      do {
        plVar1 = (longlong *)(DAT_14cc1e718 + (longlong)iVar18 * 0x48);
        if ((*plVar1 == *param_2) &&
           (*(longlong *)(DAT_14cc1e718 + 8 + (longlong)iVar18 * 0x48) == param_2[1])) {
          if (plVar1[5] != 0) {
            FUN_1400020a8();
          }
          lVar10 = *param_2;
          uVar2 = *(undefined4 *)((longlong)param_2 + 4);
          lVar11 = param_2[1];
          uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
          lVar12 = param_2[2];
          uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
          lVar13 = param_2[3];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
          lVar14 = param_2[4];
          uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
          lVar15 = param_2[5];
          uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
          uVar8 = *(undefined4 *)((longlong)param_2 + 0x34);
          lVar16 = param_2[7];
          uVar9 = *(undefined4 *)((longlong)param_2 + 0x3c);
          *(int *)(plVar1 + 6) = (int)param_2[6];
          *(undefined4 *)((longlong)plVar1 + 0x34) = uVar8;
          *(int *)(plVar1 + 7) = (int)lVar16;
          *(undefined4 *)((longlong)plVar1 + 0x3c) = uVar9;
          *(int *)(plVar1 + 4) = (int)lVar14;
          *(undefined4 *)((longlong)plVar1 + 0x24) = uVar6;
          *(int *)(plVar1 + 5) = (int)lVar15;
          *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar7;
          *(int *)(plVar1 + 2) = (int)lVar12;
          *(undefined4 *)((longlong)plVar1 + 0x14) = uVar4;
          *(int *)(plVar1 + 3) = (int)lVar13;
          *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
          *(int *)plVar1 = (int)lVar10;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar11;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_149548512(*param_3);
          *param_3 = iVar18;
          return 1;
        }
        iVar18 = (int)plVar1[8];
      } while (iVar18 != -1);
    }
  }
  return 0;
}



// FUNCTION 149548512 FUN_149548512 body=128 status=ok
// SIG undefined FUN_149548512(void)

void FUN_149548512(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc1e718;
  if (DAT_14cc1e74c != 0) {
    *(int *)(DAT_14cc1e718 + (longlong)DAT_14cc1e748 * 0x48) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x48) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc1e74c) {
    iVar4 = DAT_14cc1e748;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x48) = iVar4;
  DAT_14cc1e74c = DAT_14cc1e74c + 1;
  puVar3 = &DAT_14cc1e728;
  if (DAT_14cc1e738 != (undefined *)0x0) {
    puVar3 = DAT_14cc1e738;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc1e748 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 149548592 FUN_149548592 body=525 status=ok
// SIG undefined FUN_149548592(void)

void FUN_149548592(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cc1e758 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14cc1e758,0,0,4);
  }
  uVar4 = DAT_14cc1e760;
  uVar2 = local_70;
  if (DAT_14cc1e760 != 0) {
    uVar10 = 0;
    FUN_144a1cbf0(&DAT_14cc1e750,0,DAT_14cc1e760,4);
    if (0 < (int)uVar4) {
      do {
        puVar9 = DAT_14cc1e758;
        if (DAT_14cc1e758 == (undefined *)0x0) {
          puVar9 = &DAT_14cc1e750;
        }
        *(undefined4 *)(puVar9 + (ulonglong)(DAT_14cc1e760 + 0x7fffffff & uVar10) * 4) = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    local_60 = 0x100000000;
    local_58 = &DAT_14cc1e728;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (DAT_14cc1e740 != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = &DAT_14cc1e718;
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar2 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar2;
      do {
        lVar1 = *local_88;
        lVar11 = (longlong)iVar5;
        uVar2 = *(undefined8 *)(lVar1 + 8 + lVar11 * 0x48);
        iVar6 = FUN_144a788f7();
        uVar3 = *(undefined8 *)(lVar1 + lVar11 * 0x48);
        iVar7 = FUN_144a788f7();
        iVar6 = FUN_144a78877((int)((ulonglong)uVar3 >> 0x20) + iVar7,
                              (int)((ulonglong)uVar2 >> 0x20) + iVar6);
        uVar8 = (longlong)iVar6 & (longlong)(int)DAT_14cc1e760 - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar1 + 0x44 + lVar11 * 0x48) = iVar6;
        puVar9 = DAT_14cc1e758;
        if (DAT_14cc1e758 == (undefined *)0x0) {
          puVar9 = &DAT_14cc1e750;
        }
        *(undefined4 *)(lVar1 + 0x40 + lVar11 * 0x48) =
             *(undefined4 *)(puVar9 + ((longlong)(int)DAT_14cc1e760 - 1U & uVar8) * 4);
        puVar9 = DAT_14cc1e758;
        if (DAT_14cc1e758 == (undefined *)0x0) {
          puVar9 = &DAT_14cc1e750;
        }
        *(int *)(puVar9 + ((longlong)iVar6 & (longlong)(int)DAT_14cc1e760 - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar2 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
  }
  local_70 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495487a0 FUN_1495487a0 body=13 status=ok
// SIG undefined FUN_1495487a0(void)

void FUN_1495487a0(void *param_1,ulonglong param_2)

{
  memset(param_1,0,(param_2 & 0xffffffff) * 0x58);
  return;
}



// FUNCTION 1495487ae FUN_1495487ae body=143 status=ok
// SIG undefined FUN_1495487ae(void)

void FUN_1495487ae(longlong param_1,int param_2)

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



// FUNCTION 14954883e FUN_14954883e body=79 status=ok
// SIG undefined FUN_14954883e(void)

void FUN_14954883e(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)(*param_1 + 0x58);
  FUN_1459072a9(_Dst);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + 1);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((ulonglong)param_2 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(uint *)(param_1 + 1) = iVar1 - param_2;
  return;
}



// FUNCTION 14954888e FUN_14954888e body=62 status=ok
// SIG undefined FUN_14954888e(void)

void FUN_14954888e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1495488cc(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 1495488cc FUN_1495488cc body=104 status=ok
// SIG undefined FUN_1495488cc(void)

ulonglong FUN_1495488cc(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149548902;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_149548902:
  return param_2 & 0xffffffff;
}



// FUNCTION 149548934 FUN_149548934 body=22 status=ok
// SIG undefined FUN_149548934(void)

void FUN_149548934(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0xa0);
    return;
  }
  return;
}



// FUNCTION 14954894a FUN_14954894a body=147 status=ok
// SIG undefined FUN_14954894a(void)

void FUN_14954894a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1495489de FUN_1495489de body=101 status=ok
// SIG undefined FUN_1495489de(void)

void FUN_1495489de(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0xa0 + *param_1);
  FUN_1495471c2(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0xa0 + (longlong)_Dst),(longlong)iVar2 * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 149548a44 FUN_149548a44 body=62 status=ok
// SIG undefined FUN_149548a44(void)

void FUN_149548a44(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_149548a82(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xa0,8);
  }
  return;
}



// FUNCTION 149548a82 FUN_149548a82 body=112 status=ok
// SIG undefined FUN_149548a82(void)

ulonglong FUN_149548a82(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xa0) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_149548abc;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xa0,8);
      param_2 = param_2 / 0xa0;
    }
  }
LAB_149548abc:
  return param_2 & 0xffffffff;
}



// FUNCTION 149548af6 FUN_149548af6 body=26 status=ok
// SIG undefined FUN_149548af6(void)

void FUN_149548af6(undefined8 param_1)

{
  FUN_147574e9a();
  FUN_1415d87a2(param_1);
  return;
}



// FUNCTION 149548b18 FUN_149548b18 body=131 status=ok
// SIG undefined FUN_149548b18(void)

void FUN_149548b18(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar1 + 1U) {
    FUN_14759143a((longlong *)(param_1 + 0xf8),iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
    return;
  }
  return;
}



// FUNCTION 149548b9c FUN_149548b9c body=75 status=ok
// SIG undefined FUN_149548b9c(void)

bool FUN_149548b9c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14055f146();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_149548bd5;
    }
  }
  lVar2 = 0;
LAB_149548bd5:
  lVar1 = FUN_145ba8da4();
  return lVar2 == lVar1;
}



// FUNCTION 149548bed FUN_149548bed body=174 status=ok
// SIG undefined FUN_149548bed(void)

undefined8 FUN_149548bed(undefined8 param_1)

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
  uVar1 = FUN_145ba8da4();
  FUN_144a5c54a(local_a8,uVar1);
  local_98 = 0;
  local_90 = 8;
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



// FUNCTION 149548d0a FUN_149548d0a body=106 status=ok
// SIG undefined FUN_149548d0a(void)

void FUN_149548d0a(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_18 = &local_20;
  FUN_1475914c0(param_1 + 0xf8);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149548d76 FUN_149548d76 body=95 status=ok
// SIG undefined FUN_149548d76(void)

void FUN_149548d76(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x100);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)param_2 * 8 + 8),
            (longlong)(int)(~param_2 + iVar1) << 3);
    iVar1 = *(int *)(param_1 + 0x100);
  }
  *(int *)(param_1 + 0x100) = iVar1 + -1;
  FUN_1475915fe(param_1 + 0xf8);
  return;
}



// FUNCTION 149548dda FUN_149548dda body=31 status=ok
// SIG undefined FUN_149548dda(void)

undefined8 FUN_149548dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149548e16 FUN_149548e16 body=93 status=ok
// SIG undefined FUN_149548e16(void)

void FUN_149548e16(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd3c1a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149548e74 FUN_149548e74 body=126 status=ok
// SIG undefined FUN_149548e74(void)

void FUN_149548e74(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd3c1a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149548ee3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149548ef2 FUN_149548ef2 body=21 status=ok
// SIG undefined FUN_149548ef2(void)

undefined8 FUN_149548ef2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 149548f08 FUN_149548f08 body=30 status=ok
// SIG undefined FUN_149548f08(void)

undefined1 FUN_149548f08(longlong *param_1)

{
  undefined1 uVar1;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x78))();
  }
  return uVar1;
}



// FUNCTION 149548f26 FUN_149548f26 body=21 status=ok
// SIG undefined FUN_149548f26(void)

undefined8 FUN_149548f26(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149548f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 149548f3c FUN_149548f3c body=169 status=ok
// SIG undefined FUN_149548f3c(void)

undefined4 FUN_149548f3c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    local_58[0] = *param_3;
    local_48 = param_3[2];
    param_3[2] = 0;
    local_38 = (undefined4)param_3[4];
    uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_30 = (undefined4)param_3[5];
    uStack_2c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_28 = (undefined4)param_3[6];
    uStack_24 = *(undefined4 *)((longlong)param_3 + 0x34);
    uStack_20 = (undefined4)param_3[7];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0x3c);
    if (local_58[0] != 0) {
      *param_3 = 0;
    }
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_28,local_58);
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149548fe6 FUN_149548fe6 body=18 status=ok
// SIG undefined FUN_149548fe6(void)

undefined8 FUN_149548fe6(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149548ff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x38))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 149548ff8 FUN_149548ff8 body=18 status=ok
// SIG undefined FUN_149548ff8(void)

undefined8 FUN_149548ff8(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149549003. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x40))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14954900a FUN_14954900a body=18 status=ok
// SIG undefined FUN_14954900a(void)

undefined8 FUN_14954900a(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149549015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x60))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14954901c FUN_14954901c body=18 status=ok
// SIG undefined FUN_14954901c(void)

undefined8 FUN_14954901c(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149549027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)*param_1 + 0x68))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 14954902e FUN_14954902e body=239 status=ok
// SIG undefined FUN_14954902e(void)

ulonglong FUN_14954902e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  code *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    if (cVar2 != '\0') goto LAB_149549062;
  }
  if (*(int *)(param_1 + 0x7c) < 0x2ee00) {
    FUN_14482f6fa(param_1 + 0x70,0x2ee00);
  }
  local_88 = 0;
  uStack_84 = 0xffffffff;
  uStack_80 = 0xffffffff;
  uStack_7c = 0xffffffff;
  local_78 = 6;
  local_68[0] = FUN_144543734;
  local_58 = 0;
  local_48 = &PTR_LAB_14bd3c350;
  local_40 = param_1;
  uVar3 = FUN_149548f3c((longlong *)(param_1 + 0x40),&local_88,local_68,0x400);
  uVar4 = (ulonglong)uVar3;
  if (((char)uVar3 != '\0') && (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0))
  {
    (**(code **)(*plVar1 + 0x38))();
  }
LAB_149549062:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954911e FUN_14954911e body=80 status=ok
// SIG undefined FUN_14954911e(void)

undefined1 FUN_14954911e(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  if (*(int *)(param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN_14482f6fa(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  *(undefined1 *)(param_1 + 0x81) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return 1;
}



// FUNCTION 14954916e FUN_14954916e body=45 status=ok
// SIG undefined FUN_14954916e(void)

void FUN_14954916e(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  *(undefined1 *)(param_1 + 0x81) = 0;
                    /* WARNING: Could not recover jumptable at 0x000149549194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x48));
  return;
}



// FUNCTION 14954919c FUN_14954919c body=51 status=ok
// SIG undefined FUN_14954919c(void)

void FUN_14954919c(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x48))();
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495491c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x40) + 0x30))();
      return;
    }
  }
  return;
}



// FUNCTION 1495491d4 FUN_1495491d4 body=38 status=ok
// SIG undefined FUN_1495491d4(void)

undefined8 FUN_1495491d4(undefined8 param_1,int param_2)

{
  FUN_145c8cd64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495491fa FUN_1495491fa body=137 status=ok
// SIG undefined FUN_1495491fa(void)

longlong * FUN_1495491fa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_149549284(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 149549284 FUN_149549284 body=132 status=ok
// SIG undefined FUN_149549284(void)

void FUN_149549284(longlong param_1,int param_2)

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



// FUNCTION 149549316 FUN_149549316 body=384 status=ok
// SIG undefined FUN_149549316(void)

undefined4 FUN_149549316(longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_108 [32];
  code *local_e8 [2];
  undefined8 local_d8;
  longlong local_a8;
  longlong local_98 [2];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = *param_3;
  local_98[0] = 0;
  if (local_a8 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)*plVar2)(plVar2,local_98);
  }
  local_68 = (code *)0x0;
  local_58 = (longlong *)FUN_14001cc68(0x50,0x10);
  *local_58 = (longlong)&PTR_FUN_14bd3c330;
  local_58[2] = local_a8;
  local_58[4] = local_98[0];
  *(undefined4 *)(local_58 + 8) = local_78;
  *(undefined4 *)((longlong)local_58 + 0x44) = uStack_74;
  *(undefined4 *)(local_58 + 9) = uStack_70;
  *(undefined4 *)((longlong)local_58 + 0x4c) = uStack_6c;
  *(undefined4 *)(local_58 + 6) = local_88;
  *(undefined4 *)((longlong)local_58 + 0x34) = uStack_84;
  *(undefined4 *)(local_58 + 7) = uStack_80;
  *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_7c;
  if (local_58 + 2 == (longlong *)0x0) {
    local_e8[0] = (code *)0x0;
    local_d8 = 0;
  }
  else {
    local_68 = FUN_1495494ea;
    local_e8[0] = FUN_1495494ea;
    local_d8 = 0;
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)*plVar2)(plVar2);
  }
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2,local_e8,param_4);
  if (local_68 != (code *)0x0) {
    plVar2 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar2 = local_48;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*param_3 != 0) {
    plVar2 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149549498 FUN_149549498 body=41 status=ok
// SIG undefined FUN_149549498(void)

undefined8 FUN_149549498(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return 0;
}



// FUNCTION 1495494ea FUN_1495494ea body=216 status=ok
// SIG undefined FUN_1495494ea(void)

void FUN_1495494ea(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined1 *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_41 = *param_7;
  local_50 = *param_6;
  local_54 = *param_5;
  local_58 = *param_4;
  local_5c = *param_3;
  local_68 = *param_2;
  pcVar1 = (code *)*param_1;
  plVar3 = param_1 + 4;
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[2];
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_88 = &local_54;
  local_80 = &local_50;
  local_78 = &local_41;
  (*pcVar1)(uVar2,&local_68,&local_5c,&local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495495c4 FUN_1495495c4 body=106 status=ok
// SIG undefined FUN_1495495c4(void)

undefined8 * FUN_1495495c4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14bd3c330;
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  puVar2[4] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x30);
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x20);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 4);
  }
  return puVar2 + 2;
}



// FUNCTION 149549634 FUN_149549634 body=29 status=ok
// SIG undefined FUN_149549634(void)

void FUN_149549634(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149549652 FUN_149549652 body=71 status=ok
// SIG undefined FUN_149549652(void)

undefined8 * FUN_149549652(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd3c330;
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



// FUNCTION 14954969a FUN_14954969a body=34 status=ok
// SIG undefined FUN_14954969a(void)

void FUN_14954969a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_FUN_14bd3c3e0;
  return;
}



// FUNCTION 1495496bc FUN_1495496bc body=31 status=ok
// SIG undefined FUN_1495496bc(void)

undefined8 FUN_1495496bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1495496f8 FUN_1495496f8 body=93 status=ok
// SIG undefined FUN_1495496f8(void)

void FUN_1495496f8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd3c370;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 149549756 FUN_149549756 body=126 status=ok
// SIG undefined FUN_149549756(void)

void FUN_149549756(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd3c370;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001495497c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1495497e0 FUN_1495497e0 body=21 status=ok
// SIG undefined FUN_1495497e0(void)

undefined8 FUN_1495497e0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1495497f6 FUN_1495497f6 body=29 status=ok
// SIG undefined FUN_1495497f6(void)

undefined8 FUN_1495497f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149549814 FUN_149549814 body=104 status=ok
// SIG undefined FUN_149549814(void)

undefined8 * FUN_149549814(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3c900;
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  CoCreateInstance((IID *)&DAT_14ab423d0,(LPUNKNOWN)0x0,1,(IID *)&DAT_14ab423c0,
                   (LPVOID *)(param_1 + 6));
  FUN_1445440c6(param_1 + 2);
  return param_1;
}



// FUNCTION 14954987c FUN_14954987c body=125 status=ok
// SIG undefined FUN_14954987c(void)

longlong * FUN_14954987c(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(char *)(param_1 + 5) = (char)param_2[5];
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 1495498fa FUN_1495498fa body=554 status=ok
// SIG undefined FUN_1495498fa(void)

ulonglong FUN_1495498fa(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_58;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = (longlong *)0x0;
  local_4c = param_4;
  cVar5 = FUN_14454426c(param_1 + 0x10);
  if (cVar5 != '\0') {
    plVar6 = (longlong *)FUN_14494321d(0xb0);
    local_68 = param_5;
    FUN_14954a6d4(plVar6,&local_58,param_3,&local_4c);
    if (plVar6 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x38) = 0x10;
      plVar9 = *(longlong **)(param_1 + 0x40);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x40) = 0;
LAB_1495499f2:
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        if (plVar6 != (longlong *)0x0) goto LAB_149549a16;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x38) = plVar6 + 2;
      plVar9 = *(longlong **)(param_1 + 0x40);
      if (plVar6 == plVar9) {
        LOCK();
        plVar9 = plVar6 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x40) = plVar6;
        if (plVar9 != (longlong *)0x0) goto LAB_1495499f2;
      }
LAB_149549a16:
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    plVar6 = (longlong *)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (*(char *)(lVar3 + 0x39) == '\x01') {
      uVar7 = FUN_14494321d(0x10);
      local_40 = *plVar6;
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
        UNLOCK();
      }
      local_48 = lVar3;
      FUN_149549f12(uVar7,&local_48);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = uVar7;
      FUN_14954a398(uVar4);
      FUN_14954a398(0);
      *(undefined4 *)(param_1 + 8) = 2;
      uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_149549944;
    }
    *(longlong *)(param_1 + 0x38) = 0;
    plVar9 = (longlong *)*plVar6;
    if (plVar9 != (longlong *)0x0) {
      *plVar6 = 0;
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  uVar8 = 0;
LAB_149549944:
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (*param_5 != 0) {
    plVar6 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149549b26 FUN_149549b26 body=38 status=ok
// SIG undefined FUN_149549b26(void)

bool FUN_149549b26(longlong param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*(int *)(param_1 + 0x60) != 1) {
    FUN_144543e06(param_1 + 0x58);
    bVar1 = *(int *)(param_1 + 0x60) == 1;
  }
  return bVar1;
}



// FUNCTION 149549b4c FUN_149549b4c body=39 status=ok
// SIG undefined FUN_149549b4c(void)

void FUN_149549b4c(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_149549fb6(*(undefined8 *)(param_1 + 0xa0));
  *(uint *)(param_1 + 0x60) = (uint)bVar1 * 4;
  return;
}



// FUNCTION 149549b96 FUN_149549b96 body=189 status=ok
// SIG undefined FUN_149549b96(void)

void FUN_149549b96(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_54 = *(undefined4 *)(param_1 + 0x54);
  local_41 = param_5;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  local_68 = param_2;
  local_5c = param_3;
  local_50 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_88 = &local_54;
  local_80 = &local_50;
  local_78 = &local_41;
  (*pcVar1)(uVar2,&local_68,&local_5c,&local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149549c54 FUN_149549c54 body=450 status=ok
// SIG undefined FUN_149549c54(void)

/* WARNING: Removing unreachable block (ram,0x000149549d8f) */
/* WARNING: Removing unreachable block (ram,0x000149549d9e) */

undefined4 FUN_149549c54(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  uVar3 = FUN_144544982(param_1 + 0x68,&local_78);
  uVar5 = uStack_70 & 0xffffffff;
  if ((char)uVar3 != '\0') {
    if ((int)uStack_70 == 0) {
      uVar5 = 0;
    }
    else {
      lVar6 = (longlong)(int)uStack_70 * 0x38 + local_78;
      lVar7 = local_78;
      do {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_144a787a6(&local_98,lVar7);
        FUN_144a787a6(&local_a8,lVar7 + 0x10);
        local_88 = *(undefined4 *)(lVar7 + 0x20);
        uStack_84 = *(undefined4 *)(lVar7 + 0x2c);
        local_80 = 0;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_14954a41e(param_2,iVar1);
        }
        lVar2 = *param_2;
        lVar4 = (longlong)iVar1 * 0x30;
        *(undefined8 *)(lVar2 + lVar4) = 0;
        *(undefined8 *)(lVar2 + lVar4) = local_a8;
        *(undefined4 *)(lVar2 + 8 + lVar4) = (undefined4)uStack_a0;
        *(undefined4 *)(lVar2 + 0xc + lVar4) = uStack_a0._4_4_;
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
        *(undefined8 *)(lVar2 + 0x10 + lVar4) = local_98;
        *(undefined4 *)(lVar2 + 0x18 + lVar4) = (undefined4)uStack_90;
        *(undefined4 *)(lVar2 + 0x1c + lVar4) = uStack_90._4_4_;
        *(undefined1 *)(lVar2 + 0x28 + lVar4) = local_80;
        *(ulonglong *)(lVar2 + 0x20 + lVar4) = CONCAT44(uStack_84,local_88);
        uStack_90 = 0;
        local_98 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        lVar7 = lVar7 + 0x38;
      } while (lVar7 != lVar6);
      uVar5 = uStack_70 & 0xffffffff;
    }
  }
  FUN_14954a3e0(local_78,uVar5);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149549e18 FUN_149549e18 body=103 status=ok
// SIG undefined FUN_149549e18(void)

undefined8 * FUN_149549e18(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14bd3c4e0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
    plVar4 = (longlong *)param_2[1];
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
  return param_1;
}



// FUNCTION 149549e80 FUN_149549e80 body=146 status=ok
// SIG undefined FUN_149549e80(void)

undefined8 FUN_149549e80(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  DWORD DVar6;
  
  LOCK();
  *(undefined1 *)(param_1 + 8) = 1;
  UNLOCK();
  cVar4 = FUN_14593c384(1);
  plVar2 = *(longlong **)(param_1 + 0x18);
  plVar3 = (longlong *)*plVar2;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))();
    FUN_14954a1f2(plVar2);
  }
  bVar1 = *(byte *)(param_1 + 8);
  while ((bVar1 & 1) != 0) {
    DVar6 = WaitForSingleObject(*(HANDLE *)(*(longlong *)(param_1 + 0x18) + 0x48),1000);
    if (DVar6 != 0) {
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
    cVar5 = FUN_144543f06(*(undefined8 *)(param_1 + 0x18));
    if (cVar5 == '\0') {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((longlong *)**(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x18) + 0x58))();
  }
  if (cVar4 != '\0') {
    CoUninitialize();
  }
  return 0;
}



// FUNCTION 149549f12 FUN_149549f12 body=162 status=ok
// SIG undefined FUN_149549f12(void)

undefined8 * FUN_149549f12(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  uVar4 = FUN_14494321d(0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_149549e18(uVar4,&local_30);
  param_1[1] = uVar4;
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149549fb6 FUN_149549fb6 body=84 status=ok
// SIG undefined FUN_149549fb6(void)

bool FUN_149549fb6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = FUN_1411b1052(param_1[1],L"Audio Capture Thread",0,6,0xffffffffffffffff,0);
  plVar1 = (longlong *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    lVar2 = *param_1;
  }
  return lVar2 != 0;
}



// FUNCTION 14954a00a FUN_14954a00a body=250 status=ok
// SIG undefined FUN_14954a00a(void)

ulonglong FUN_14954a00a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68 [6];
  undefined4 local_38;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = (longlong *)0x0;
  cVar2 = FUN_14454426c(param_1,param_2,&local_28);
  plVar1 = local_28;
  if (cVar2 != '\0') {
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    local_38 = 0;
    local_70 = local_28;
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 8))(local_28);
    }
    cVar2 = FUN_14454434e(&local_70,local_68);
    if (cVar2 != '\0') {
      FUN_14954a106(param_3,local_68);
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      uVar3 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      goto LAB_14954a0a1;
    }
    if (local_68[2] != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar3 = 0;
LAB_14954a0a1:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954a106 FUN_14954a106 body=125 status=ok
// SIG undefined FUN_14954a106(void)

longlong * FUN_14954a106(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = param_2[2];
    param_2[2] = 0;
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  return param_1;
}



// FUNCTION 14954a184 FUN_14954a184 body=110 status=ok
// SIG undefined FUN_14954a184(void)

void FUN_14954a184(longlong *param_1)

{
  longlong *plVar1;
  
  if ((HANDLE)param_1[9] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[9]);
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014954a1e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14954a1f2 FUN_14954a1f2 body=215 status=ok
// SIG undefined FUN_14954a1f2(void)

void FUN_14954a1f2(longlong param_1)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  if ((-1 < iVar1) && (local_54 != 0)) {
    while( true ) {
      local_58 = 0;
      local_60 = 0;
      local_64 = 0;
      local_78 = 0;
      uStack_70 = 0;
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                        (*(longlong **)(param_1 + 8),&local_60,&local_64,&local_58);
      if (iVar1 < 0) break;
      (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(*(longlong **)(param_1 + 8),local_64);
      iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                        (*(longlong **)(param_1 + 8),&local_54);
      if ((iVar1 < 0) || (local_54 == 0)) break;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954a2ca FUN_14954a2ca body=80 status=ok
// SIG undefined FUN_14954a2ca(void)

undefined8 * FUN_14954a2ca(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd3c420;
  FUN_14954a7cc(param_1 + 0xb);
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



// FUNCTION 14954a31e FUN_14954a31e body=83 status=ok
// SIG undefined FUN_14954a31e(void)

undefined8 * FUN_14954a31e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd3c4e0;
  plVar3 = (longlong *)param_1[4];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954a372 FUN_14954a372 body=38 status=ok
// SIG undefined FUN_14954a372(void)

undefined8 FUN_14954a372(undefined8 param_1,int param_2)

{
  FUN_14954a7cc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954a398 FUN_14954a398 body=72 status=ok
// SIG undefined FUN_14954a398(void)

void FUN_14954a398(longlong *param_1)

{
  longlong *plVar1;
  
  if (param_1 != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[1];
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
    plVar1 = (longlong *)*param_1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 14954a3e0 FUN_14954a3e0 body=61 status=ok
// SIG undefined FUN_14954a3e0(void)

void FUN_14954a3e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14954a41e FUN_14954a41e body=147 status=ok
// SIG undefined FUN_14954a41e(void)

void FUN_14954a41e(longlong param_1,int param_2)

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



// FUNCTION 14954a4b2 FUN_14954a4b2 body=31 status=ok
// SIG undefined FUN_14954a4b2(void)

undefined8 FUN_14954a4b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954a4ee FUN_14954a4ee body=93 status=ok
// SIG undefined FUN_14954a4ee(void)

void FUN_14954a4ee(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bd3c930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14954a54c FUN_14954a54c body=123 status=ok
// SIG undefined FUN_14954a54c(void)

void FUN_14954a54c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
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
  *(undefined ***)p_Var1 = &PTR_FUN_14bd3c930;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14954a5c8 FUN_14954a5c8 body=21 status=ok
// SIG undefined FUN_14954a5c8(void)

undefined8 FUN_14954a5c8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14954a5de FUN_14954a5de body=29 status=ok
// SIG undefined FUN_14954a5de(void)

undefined8 FUN_14954a5de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954a5fc FUN_14954a5fc body=72 status=ok
// SIG undefined FUN_14954a5fc(void)

undefined8 * FUN_14954a5fc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0xb0);
  *puVar1 = &PTR_FUN_14bd3c420;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[10] = 0xffffffffffffffff;
  FUN_149549814(puVar1 + 0xb);
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14954a644 FUN_14954a644 body=143 status=ok
// SIG undefined FUN_14954a644(void)

void FUN_14954a644(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14954a6d4 FUN_14954a6d4 body=206 status=ok
// SIG undefined FUN_14954a6d4(void)

undefined8 *
FUN_14954a6d4(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
             longlong *param_5)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd3c9f0;
  local_68[0] = *param_5;
  local_58 = param_5[2];
  param_5[2] = 0;
  local_48 = (undefined4)param_5[4];
  uStack_44 = *(undefined4 *)((longlong)param_5 + 0x24);
  uStack_40 = (undefined4)param_5[5];
  uStack_3c = *(undefined4 *)((longlong)param_5 + 0x2c);
  local_38 = (undefined4)param_5[6];
  uStack_34 = *(undefined4 *)((longlong)param_5 + 0x34);
  uStack_30 = (undefined4)param_5[7];
  uStack_2c = *(undefined4 *)((longlong)param_5 + 0x3c);
  if (local_68[0] != 0) {
    *param_5 = 0;
  }
  uVar1 = *param_4;
  local_70 = (longlong *)*param_2;
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 8))();
  }
  local_78 = local_68;
  FUN_144544c1c(param_1 + 2,&local_70,param_3,uVar1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954a7ae FUN_14954a7ae body=29 status=ok
// SIG undefined FUN_14954a7ae(void)

undefined8 FUN_14954a7ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14954a7cc FUN_14954a7cc body=84 status=ok
// SIG undefined FUN_14954a7cc(void)

void FUN_14954a7cc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd3c900;
  FUN_14954a398(param_1[9]);
  plVar3 = (longlong *)param_1[8];
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
  FUN_14954a820(param_1 + 2);
  return;
}



// FUNCTION 14954a820 FUN_14954a820 body=62 status=ok
// SIG undefined FUN_14954a820(void)

void FUN_14954a820(longlong *param_1)

{
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
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



// FUNCTION 14954a85e FUN_14954a85e body=65 status=ok
// SIG undefined FUN_14954a85e(void)

undefined8 * FUN_14954a85e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3ca50;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  FUN_144545190(param_1 + 0xb);
  return param_1;
}



// FUNCTION 14954a8a0 Unwind@14954a8a0 body=57 status=ok
// SIG undefined Unwind@14954a8a0(void)

void Unwind_14954a8a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x10) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x20);
    plVar2 = (longlong *)(*(longlong *)(param_2 + 0x20) + 0x30);
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  return;
}



// FUNCTION 14954a8da FUN_14954a8da body=47 status=ok
// SIG undefined FUN_14954a8da(void)

void FUN_14954a8da(longlong *param_1)

{
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14954a92a FUN_14954a92a body=189 status=ok
// SIG undefined FUN_14954a92a(void)

void FUN_14954a92a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)(param_1 + 0x50);
  local_54 = *(undefined4 *)(param_1 + 0x54);
  local_41 = param_5;
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  local_68 = param_2;
  local_5c = param_3;
  local_50 = param_4;
  uVar2 = (**(code **)(*plVar3 + 8))();
  local_88 = &local_54;
  local_80 = &local_50;
  local_78 = &local_41;
  (*pcVar1)(uVar2,&local_68,&local_5c,&local_58);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954a9e8 FUN_14954a9e8 body=102 status=ok
// SIG undefined FUN_14954a9e8(void)

void FUN_14954a9e8(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined4 *)*param_1;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar1 != (undefined4 *)param_1[1]) {
    param_1[1] = puVar1;
    puVar2 = puVar1;
  }
  local_c = 8;
  if (puVar2 == (undefined4 *)param_1[2]) {
    FUN_14955036e(param_1,puVar2,&local_c);
  }
  else {
    *puVar2 = 8;
    param_1[1] = param_1[1] + 4;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954aa50 FUN_14954aa50 body=97 status=ok
// SIG undefined FUN_14954aa50(void)

void FUN_14954aa50(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  *param_1 = 0;
  if (param_2 == 8) {
    lVar2 = FUN_14001cc68(0x2a8,0x10);
    FUN_14954aad4(lVar2);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 14954aab2 Unwind@14954aab2 body=34 status=ok
// SIG undefined Unwind@14954aab2(void)

void Unwind_14954aab2(undefined8 param_1,longlong param_2)

{
  FUN_1400020a8(*(undefined8 *)(param_2 + 0x20));
  return;
}



// FUNCTION 14954aad4 FUN_14954aad4 body=79 status=ok
// SIG undefined FUN_14954aad4(void)

undefined8 * FUN_14954aad4(undefined8 *param_1)

{
  HRESULT HVar1;
  
  FUN_14954ac84();
  *param_1 = &PTR_FUN_14bd3cd20;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  HVar1 = CoInitialize((LPVOID)0x0);
  if (-1 < HVar1) {
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return param_1;
}



// FUNCTION 14954ab24 FUN_14954ab24 body=351 status=ok
// SIG undefined FUN_14954ab24(void)

void FUN_14954ab24(longlong *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,longlong param_6)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  if (*(int *)((longlong)param_1 + 300) == -0x32) {
    FUN_14954afc2(param_1);
    if (param_2 == (uint *)0x0) {
      pcVar4 = "RtApi::openStream: input and output StreamParameters structures are both NULL!";
    }
    else if (param_2[1] == 0) {
      pcVar4 = 
      "RtApi::openStream: a non-NULL input StreamParameters structure cannot have an nChannels value less than one."
      ;
    }
    else {
      iVar2 = FUN_14954b0c6(param_1,param_3);
      if (iVar2 == 0) {
        pcVar4 = "RtApi::openStream: \'format\' parameter value is undefined.";
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x10))(param_1);
        if (*param_2 < uVar3) {
          if (param_2[1] == 0) {
LAB_14954ac18:
            param_1[0x38] = (longlong)FUN_1445459ee;
            param_1[0x39] = param_6;
            param_1[0x3a] = 0;
            *(undefined4 *)((longlong)param_1 + 300) = 0;
            return;
          }
          cVar1 = (**(code **)(*param_1 + 0x60))
                            (param_1,*param_2,1,param_2[1],param_2[2],param_4,param_3,param_5,0);
          if (cVar1 != '\0') goto LAB_14954ac18;
          uVar5 = 9;
          goto LAB_14954ab8e;
        }
        pcVar4 = "RtApi::openStream: input device parameter value is invalid.";
      }
    }
  }
  else {
    pcVar4 = "RtApi::openStream: a stream is already open!";
  }
  FUN_1401d7cf8(param_1 + 0x1e,pcVar4);
  uVar5 = 7;
LAB_14954ab8e:
  FUN_14954ae26(param_1,uVar5);
  return;
}



// FUNCTION 14954ac84 FUN_14954ac84 body=238 status=ok
// SIG undefined FUN_14954ac84(void)

undefined8 * FUN_14954ac84(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14bd3cb50;
  FUN_1483c8064(param_1 + 1,1);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0xf;
  param_1[0x28] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x23] = 0x2b6700002b67;
  *(undefined4 *)((longlong)param_1 + 300) = 0xffffffce;
  *(undefined4 *)(param_1 + 0x25) = 0xffffffb5;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined1 *)(param_1 + 0x50) = 0;
  return param_1;
}



// FUNCTION 14954ad72 FUN_14954ad72 body=180 status=ok
// SIG undefined FUN_14954ad72(void)

void FUN_14954ad72(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14bd3cb50;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x31));
  puVar2 = param_1 + 0x49;
  lVar1 = -0x90;
  do {
    FUN_14627a26c(puVar2 + 3);
    FUN_14627a26c(puVar2);
    puVar2 = puVar2 + -9;
    lVar1 = lVar1 + 0x48;
  } while (lVar1 != 0);
  FUN_1401d9a90(param_1 + 0x1e);
  *(undefined ***)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 8) = &PTR_LAB_14ae75850;
  *(int *)((longlong)param_1 + (longlong)*(int *)(param_1[1] + 4) + 4) =
       *(int *)(param_1[1] + 4) + -0x88;
  param_1[2] = &PTR_FUN_14a179f40;
  FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 2));
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 2));
                    /* WARNING: Could not recover jumptable at 0x00014954ae1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::ios_base::~ios_base((ios_base *)(param_1 + 0x12));
  return;
}



// FUNCTION 14954ae26 FUN_14954ae26 body=331 status=ok
// SIG undefined FUN_14954ae26(void)

void FUN_14954ae26(longlong *param_1,int param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0xf;
  FUN_1470a9532(param_1 + 2);
  FUN_1470ab8be(param_1 + 2,&local_58,(int)param_1[0x10]);
  FUN_1401d9a90(&local_58);
  pcVar1 = (code *)param_1[0x3a];
  if (pcVar1 == (code *)0x0) {
    if ((param_2 == 0) && ((char)param_1[0x22] == '\x01')) {
      uVar2 = FUN_149550148(cerr_exref,10);
      if ((ulonglong)param_1[0x21] < 0x10) {
        plVar3 = param_1 + 0x1e;
      }
      else {
        plVar3 = (longlong *)param_1[0x1e];
      }
      uVar2 = FUN_1470ab2a8(uVar2,plVar3,param_1[0x20]);
      FUN_141302cc4(uVar2,&DAT_14a370a31);
    }
  }
  else if ((char)param_1[0x50] == '\0') {
    *(undefined1 *)(param_1 + 0x50) = 1;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if ((ulonglong)param_1[0x21] < 0x10) {
      plVar3 = param_1 + 0x1e;
    }
    else {
      plVar3 = (longlong *)param_1[0x1e];
    }
    FUN_1401d9f72(&local_58,plVar3,param_1[0x20]);
    if ((param_2 != 0) && (*(int *)((longlong)param_1 + 300) != 0)) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    (*pcVar1)(param_2,&local_58);
    *(undefined1 *)(param_1 + 0x50) = 0;
    FUN_1401d9a90(&local_58);
  }
  return;
}



// FUNCTION 14954af72 Unwind@14954af72 body=40 status=ok
// SIG undefined Unwind@14954af72(void)

void Unwind_14954af72(undefined8 param_1,longlong param_2)

{
  FUN_1401d9a90(param_2 + 0x20);
  return;
}



// FUNCTION 14954af9a Unwind@14954af9a body=40 status=ok
// SIG undefined Unwind@14954af9a(void)

void Unwind_14954af9a(undefined8 param_1,longlong param_2)

{
  FUN_1401d9a90(param_2 + 0x20);
  return;
}



// FUNCTION 14954afc2 FUN_14954afc2 body=259 status=ok
// SIG undefined FUN_14954afc2(void)

void FUN_14954afc2(longlong param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x128) = 0xffffffceffffffb5;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x14a) = 1;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  lVar4 = 0;
  bVar2 = true;
  do {
    bVar3 = bVar2;
    *(undefined4 *)(param_1 + 0x118 + lVar4 * 4) = 0x2b67;
    *(undefined1 *)(param_1 + 0x148 + lVar4) = 0;
    *(undefined1 *)(param_1 + 0x14b + lVar4) = 1;
    *(undefined1 *)(param_1 + 0x14d + lVar4) = 0;
    *(undefined4 *)(param_1 + 0x15c + lVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x164 + lVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x16c + lVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x180 + lVar4 * 4) = 0;
    *(undefined4 *)(param_1 + 0x174 + lVar4 * 4) = 0;
    *(undefined8 *)(param_1 + 0x130 + lVar4 * 8) = 0;
    puVar1 = (undefined8 *)(param_1 + 0x1e8 + lVar4 * 0x48);
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    if (puVar1[3] != puVar1[4]) {
      puVar1[4] = puVar1[3];
    }
    if (puVar1[6] != puVar1[7]) {
      puVar1[7] = puVar1[6];
    }
    lVar4 = 1;
    bVar2 = false;
  } while (bVar3);
  return;
}



// FUNCTION 14954b0c6 FUN_14954b0c6 body=105 status=ok
// SIG undefined FUN_14954b0c6(void)

int FUN_14954b0c6(longlong param_1,int param_2)

{
  if (param_2 < 8) {
    if (param_2 - 1U < 2) {
      return param_2;
    }
    if (param_2 == 4) {
      return 3;
    }
  }
  else {
    if ((param_2 == 8) || (param_2 == 0x10)) {
      return 4;
    }
    if (param_2 == 0x20) {
      return 8;
    }
  }
  FUN_1401d7cf8(param_1 + 0xf0,"RtApi::formatBytes: undefined format.");
  FUN_14954ae26(param_1,0);
  return 0;
}



// FUNCTION 14954b13e FUN_14954b13e body=65 status=ok
// SIG undefined FUN_14954b13e(void)

undefined8 FUN_14954b13e(longlong param_1)

{
  if (*(int *)(param_1 + 300) == -0x32) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApi:: a stream is not open!");
    FUN_14954ae26(param_1,7);
  }
  return *(undefined8 *)(param_1 + 0x278);
}



// FUNCTION 14954b180 FUN_14954b180 body=89 status=ok
// SIG undefined FUN_14954b180(void)

void FUN_14954b180(longlong param_1,double param_2)

{
  if (*(int *)(param_1 + 300) == -0x32) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApi:: a stream is not open!");
    FUN_14954ae26(param_1,7);
  }
  if (0.0 <= param_2) {
    *(double *)(param_1 + 0x278) = param_2;
  }
  return;
}



// FUNCTION 14954b1da FUN_14954b1da body=90 status=ok
// SIG undefined FUN_14954b1da(void)

void FUN_14954b1da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd3cd20;
  if (*(int *)((longlong)param_1 + 300) != -0x32) {
    FUN_14954d756(param_1);
  }
  if (*(char *)(param_1 + 0x51) == '\x01') {
    CoUninitialize();
  }
  FUN_149550550(param_1 + 0x52);
  FUN_14954ad72(param_1);
  return;
}



// FUNCTION 14954b234 Unwind@14954b234 body=20 status=ok
// SIG undefined Unwind@14954b234(void)

void Unwind_14954b234(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 14954b252 FUN_14954b252 body=626 status=ok
// SIG undefined FUN_14954b252(void)

ulonglong FUN_14954b252(longlong param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x298) != lVar3) {
    uVar7 = 1;
    uVar4 = 0;
    do {
      *(undefined1 *)(lVar3 + 0x12 + uVar4 * 0x38) = 0;
      uVar4 = (ulonglong)uVar7;
      lVar3 = *(longlong *)(param_1 + 0x290);
      uVar9 = (*(longlong *)(param_1 + 0x298) - lVar3 >> 3) * 0x6db6db6db6db6db7;
      uVar7 = uVar7 + 1;
    } while (uVar4 <= uVar9 && uVar9 - uVar4 != 0);
  }
  local_68 = 0;
  local_60 = param_1 + 0x290;
  iVar2 = Ordinal_3(FUN_144545f1f);
  if (iVar2 < 0) {
    uVar5 = FUN_141302cc4(param_1 + 8,"RtApiDs::getDeviceCount: error (");
    uVar6 = FUN_144546232(iVar2);
    uVar5 = FUN_141302cc4(uVar5,uVar6);
    FUN_141302cc4(uVar5,") enumerating output devices!");
    FUN_1470ab43c(param_1 + 0x10,&local_58);
    puVar1 = (uint *)(param_1 + 0xf0);
    if (puVar1 != &local_58) {
      FUN_1401d9a90(puVar1);
      *(undefined8 *)(param_1 + 0x100) = local_48;
      *(undefined8 *)(param_1 + 0x108) = uStack_40;
      *puVar1 = local_58;
      *(undefined4 *)(param_1 + 0xf4) = uStack_54;
      *(undefined4 *)(param_1 + 0xf8) = uStack_50;
      *(undefined4 *)(param_1 + 0xfc) = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
    }
    FUN_1401d9a90(&local_58);
    FUN_14954ae26(param_1,0);
  }
  local_68 = 1;
  iVar2 = Ordinal_8(FUN_144545f1f);
  if (iVar2 < 0) {
    uVar5 = FUN_141302cc4(param_1 + 8,"RtApiDs::getDeviceCount: error (");
    uVar6 = FUN_144546232(iVar2);
    uVar5 = FUN_141302cc4(uVar5,uVar6);
    FUN_141302cc4(uVar5,") enumerating input devices!");
    FUN_1470ab43c(param_1 + 0x10);
    puVar1 = (uint *)(param_1 + 0xf0);
    if (puVar1 != &local_58) {
      FUN_1401d9a90(puVar1);
      *(undefined8 *)(param_1 + 0x100) = local_48;
      *(undefined8 *)(param_1 + 0x108) = uStack_40;
      *puVar1 = local_58;
      *(undefined4 *)(param_1 + 0xf4) = uStack_54;
      *(undefined4 *)(param_1 + 0xf8) = uStack_50;
      *(undefined4 *)(param_1 + 0xfc) = uStack_4c;
      local_48 = 0;
      uStack_40 = 0xf;
      local_58 = local_58 & 0xffffff00;
    }
    FUN_1401d9a90(&local_58);
    FUN_14954ae26(param_1);
  }
  lVar3 = *(longlong *)(param_1 + 0x290);
  lVar8 = *(longlong *)(param_1 + 0x298);
  if (lVar8 == lVar3) {
    uVar4 = 0;
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    do {
      if (*(char *)(lVar3 + 0x12 + uVar9 * 0x38) == '\0') {
        FUN_14954b4c6(param_1 + 0x290,&local_58,lVar3 + uVar9 * 0x38);
        lVar3 = *(longlong *)(param_1 + 0x290);
        lVar8 = *(longlong *)(param_1 + 0x298);
      }
      else {
        uVar7 = uVar7 + 1;
      }
      uVar9 = (ulonglong)uVar7;
      uVar4 = (lVar8 - lVar3 >> 3) * 0x6db6db6db6db6db7;
    } while (uVar9 <= uVar4 && uVar4 - uVar9 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14954b4c6 FUN_14954b4c6 body=148 status=ok
// SIG undefined FUN_14954b4c6(void)

longlong * FUN_14954b4c6(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  puVar2 = (undefined4 *)(param_3 + 0x38);
  if (puVar2 != puVar1) {
    do {
      *(undefined4 *)((longlong)puVar2 + -0x29) = *(undefined4 *)((longlong)puVar2 + 0xf);
      puVar2[-0xe] = *puVar2;
      puVar2[-0xd] = puVar2[1];
      puVar2[-0xc] = puVar2[2];
      puVar2[-0xb] = puVar2[3];
      FUN_1401d9a90(puVar2 + -8);
      puVar2[-4] = puVar2[10];
      puVar2[-3] = puVar2[0xb];
      puVar2[-2] = puVar2[0xc];
      puVar2[-1] = puVar2[0xd];
      puVar2[-8] = puVar2[6];
      puVar2[-7] = puVar2[7];
      puVar2[-6] = puVar2[8];
      puVar2[-5] = puVar2[9];
      *(undefined8 *)(puVar2 + 10) = 0;
      *(undefined8 *)(puVar2 + 0xc) = 0xf;
      *(undefined1 *)(puVar2 + 6) = 0;
      puVar2 = puVar2 + 0xe;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined4 **)(param_1 + 8);
  }
  FUN_1401d9a90(puVar1 + -8);
  *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + -0x38;
  *param_2 = param_3;
  return param_2;
}



// FUNCTION 14954b55a FUN_14954b55a body=3141 status=ok
// SIG undefined FUN_14954b55a(void)

undefined1 * FUN_14954b55a(longlong *param_1,undefined1 *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  uint local_11c;
  uint local_118;
  uint local_114;
  longlong *local_c0;
  longlong *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  uint *local_a0;
  undefined4 local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  undefined4 *puStack_60;
  undefined4 *local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar10 = (ulonglong)param_3;
  local_a8 = param_2 + 8;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0xf;
  local_a0 = (uint *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0xf;
  local_b0 = param_2 + 0x58;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x4e) = 0;
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x70) = 0;
  lVar8 = param_1[0x52];
  lVar13 = param_1[0x53];
  if (lVar13 == lVar8) {
    (**(code **)(*param_1 + 0x10))(param_1);
    lVar8 = param_1[0x52];
    lVar13 = param_1[0x53];
    if (lVar13 == lVar8) {
      FUN_1401d7cf8(param_1 + 0x1e,"RtApiDs::getDeviceInfo: no devices found!");
      FUN_14954ae26(param_1,7);
      return param_2;
    }
  }
  uVar11 = (lVar13 - lVar8 >> 3) * 0x6db6db6db6db6db7;
  if (uVar11 < uVar10 || uVar11 - uVar10 == 0) {
    FUN_1401d7cf8(param_1 + 0x1e,"RtApiDs::getDeviceInfo: device ID is invalid!");
    FUN_14954ae26(param_1,7);
    return param_2;
  }
  lVar13 = uVar10 * 0x38;
  if (*(char *)(lVar8 + 0x10 + lVar13) != '\0') {
    iVar3 = Ordinal_1(*(undefined8 *)(lVar8 + lVar13),&local_c0,0);
    if (iVar3 < 0) {
      uVar5 = FUN_141302cc4(param_1 + 1,"RtApiDs::getDeviceInfo: error (");
      uVar6 = FUN_144546232(iVar3);
      uVar5 = FUN_141302cc4(uVar5,uVar6);
      uVar5 = FUN_141302cc4(uVar5,") opening output device (");
      lVar8 = param_1[0x52];
      if (*(ulonglong *)(lVar8 + 0x30 + lVar13) < 0x10) {
        lVar9 = lVar8 + lVar13 + 0x18;
      }
      else {
        lVar9 = *(longlong *)(lVar8 + 0x18 + lVar13);
      }
      uVar5 = FUN_1470ab2a8(uVar5,lVar9,*(undefined8 *)(lVar8 + 0x28 + lVar13));
      FUN_141302cc4(uVar5,&DAT_14bd3ce76);
      FUN_1470ab43c(param_1 + 2,&local_88);
      puVar1 = (uint *)(param_1 + 0x1e);
      if (puVar1 != &local_88) {
        FUN_1401d9a90(puVar1);
        param_1[0x20] = local_78;
        param_1[0x21] = lStack_70;
        *puVar1 = local_88;
        *(uint *)((longlong)param_1 + 0xf4) = uStack_84;
        *(uint *)(param_1 + 0x1f) = uStack_80;
        *(uint *)((longlong)param_1 + 0xfc) = uStack_7c;
        local_78 = 0;
        lStack_70 = 0xf;
        local_88 = local_88 & 0xffffff00;
      }
      FUN_1401d9a90(&local_88);
      FUN_14954ae26(param_1,0);
    }
    else {
      iVar3 = (**(code **)(*local_c0 + 0x20))();
      if (iVar3 < 0) {
        (**(code **)(*local_c0 + 0x10))();
        uVar5 = FUN_141302cc4(param_1 + 1,"RtApiDs::getDeviceInfo: error (");
        uVar6 = FUN_144546232(iVar3);
        uVar5 = FUN_141302cc4(uVar5,uVar6);
        FUN_141302cc4(uVar5,") getting capabilities!");
        FUN_1470ab43c(param_1 + 2,&local_88);
        puVar1 = (uint *)(param_1 + 0x1e);
        if (puVar1 != &local_88) {
          FUN_1401d9a90(puVar1);
          param_1[0x20] = local_78;
          param_1[0x21] = lStack_70;
          *puVar1 = local_88;
          *(uint *)((longlong)param_1 + 0xf4) = uStack_84;
          *(uint *)(param_1 + 0x1f) = uStack_80;
          *(uint *)((longlong)param_1 + 0xfc) = uStack_7c;
          local_78 = 0;
          lStack_70 = 0xf;
          local_88 = local_88 & 0xffffff00;
        }
        FUN_1401d9a90(&local_88);
        FUN_14954ae26(param_1,0);
      }
      else {
        *(uint *)(param_2 + 0x48) = 2 - (uint)((local_11c & 2) == 0);
        if (*(longlong *)(param_2 + 0x58) != *(longlong *)(param_2 + 0x60)) {
          *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x58);
        }
        uVar10 = 0;
        while (uVar4 = (uint)uVar10, uVar4 < 0xe) {
          uVar7 = (&DAT_14bd3cb10)[uVar10];
          if ((local_118 <= uVar7) && (uVar7 <= local_114)) {
            if (*(uint **)(param_2 + 0x60) == *(uint **)(param_2 + 0x68)) {
              FUN_149550626(local_b0);
            }
            else {
              **(uint **)(param_2 + 0x60) = uVar7;
              *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 4;
            }
            if ((*(uint *)(param_2 + 0x70) == 0) ||
               (*(uint *)(param_2 + 0x70) < uVar7 && uVar4 < 10)) {
              *(uint *)(param_2 + 0x70) = uVar7;
            }
          }
          uVar10 = (ulonglong)(uVar4 + 1);
        }
        if ((local_11c & 8) != 0) {
          param_2[0x74] = param_2[0x74] | 2;
        }
        if ((local_11c & 4) != 0) {
          param_2[0x74] = param_2[0x74] | 1;
        }
        (**(code **)(*local_c0 + 0x10))();
        uVar4 = (**(code **)(*param_1 + 0x28))(param_1);
        if (uVar4 == param_3) {
          param_2[0x54] = 1;
        }
        if (*(char *)(param_1[0x52] + 0x11 + lVar13) == '\0') {
          FUN_1401d7e14(local_a8,param_1[0x52] + lVar13 + 0x18);
          FUN_14454637e(&local_88,*(undefined8 *)(param_1[0x52] + lVar13));
          puVar1 = local_a0;
          if (local_a0 != &local_88) {
            FUN_1401d9a90(local_a0);
            *(longlong *)(puVar1 + 4) = local_78;
            *(longlong *)(puVar1 + 6) = lStack_70;
            *puVar1 = local_88;
            puVar1[1] = uStack_84;
            puVar1[2] = uStack_80;
            puVar1[3] = uStack_7c;
            local_78 = 0;
            lStack_70 = 0xf;
            local_88 = local_88 & 0xffffff00;
          }
          FUN_1401d9a90(&local_88);
          *param_2 = 1;
          return param_2;
        }
      }
    }
  }
  iVar3 = Ordinal_6(*(undefined8 *)(param_1[0x52] + 8 + lVar13),&local_b8,0);
  if (iVar3 < 0) {
    uVar5 = FUN_141302cc4(param_1 + 1,"RtApiDs::getDeviceInfo: error (");
    uVar6 = FUN_144546232(iVar3);
    uVar5 = FUN_141302cc4(uVar5,uVar6);
    uVar5 = FUN_141302cc4(uVar5,") opening input device (");
    lVar8 = param_1[0x52];
    if (*(ulonglong *)(lVar8 + 0x30 + lVar13) < 0x10) {
      lVar9 = lVar8 + lVar13 + 0x18;
    }
    else {
      lVar9 = *(longlong *)(lVar8 + 0x18 + lVar13);
    }
    uVar5 = FUN_1470ab2a8(uVar5,lVar9,*(undefined8 *)(lVar8 + 0x28 + lVar13));
    FUN_141302cc4(uVar5,&DAT_14bd3ce76);
    FUN_1470ab43c(param_1 + 2,&local_88);
    puVar1 = (uint *)(param_1 + 0x1e);
    if (puVar1 != &local_88) {
      FUN_1401d9a90(puVar1);
      param_1[0x20] = local_78;
      param_1[0x21] = lStack_70;
      *puVar1 = local_88;
      *(uint *)((longlong)param_1 + 0xf4) = uStack_84;
      *(uint *)(param_1 + 0x1f) = uStack_80;
      *(uint *)((longlong)param_1 + 0xfc) = uStack_7c;
      local_78 = 0;
      lStack_70 = 0xf;
      local_88 = local_88 & 0xffffff00;
    }
    FUN_1401d9a90(&local_88);
    FUN_14954ae26(param_1,0);
    return param_2;
  }
  local_98 = 0x10;
  iVar3 = (**(code **)(*local_b8 + 0x20))();
  if (iVar3 < 0) {
    (**(code **)(*local_b8 + 0x10))();
    uVar5 = FUN_141302cc4(param_1 + 1,"RtApiDs::getDeviceInfo: error (");
    uVar6 = FUN_144546232(iVar3);
    uVar5 = FUN_141302cc4(uVar5,uVar6);
    uVar5 = FUN_141302cc4(uVar5,") getting object capabilities (");
    lVar8 = param_1[0x52];
    if (*(ulonglong *)(lVar8 + 0x30 + lVar13) < 0x10) {
      lVar9 = lVar8 + lVar13 + 0x18;
    }
    else {
      lVar9 = *(longlong *)(lVar8 + 0x18 + lVar13);
    }
    uVar5 = FUN_1470ab2a8(uVar5,lVar9,*(undefined8 *)(lVar8 + 0x28 + lVar13));
    FUN_141302cc4(uVar5,&DAT_14bd3ce76);
    FUN_1470ab43c(param_1 + 2,&local_88);
    puVar1 = (uint *)(param_1 + 0x1e);
    if (puVar1 != &local_88) {
      FUN_1401d9a90(puVar1);
      param_1[0x20] = local_78;
      param_1[0x21] = lStack_70;
      *puVar1 = local_88;
      *(uint *)((longlong)param_1 + 0xf4) = uStack_84;
      *(uint *)(param_1 + 0x1f) = uStack_80;
      *(uint *)((longlong)param_1 + 0xfc) = uStack_7c;
      local_78 = 0;
      lStack_70 = 0xf;
      local_88 = local_88 & 0xffffff00;
    }
    FUN_1401d9a90(&local_88);
    FUN_14954ae26(param_1,0);
    return param_2;
  }
  *(uint *)(param_2 + 0x4c) = local_8c;
  local_68 = 0;
  puStack_60 = (undefined4 *)0x0;
  local_58 = (undefined4 *)0x0;
  if (local_8c < 2) {
    if (local_8c != 1) {
      *(undefined4 *)(param_2 + 0x4c) = 0;
      goto LAB_14954bd2a;
    }
    uVar4 = 2;
    if ((local_90 & 0x40440) == 0) {
      uVar4 = (local_90 & 4) >> 1;
    }
    uVar7 = *(uint *)(param_2 + 0x74);
    uVar12 = 1;
    if ((local_90 & 0x11110) == 0) {
      uVar12 = local_90 & 1;
    }
    if ((local_90 & 0x51555) != 0) {
      *(uint *)(param_2 + 0x74) = uVar12 | uVar4 | uVar7;
    }
    if (uVar4 == 0 && (uVar7 & 2) == 0) {
      if (uVar12 == 0 && (uVar7 & 1) == 0) goto LAB_14954bd2a;
      if ((local_90 & 1) != 0) {
        local_88 = 0x2b11;
        FUN_1495506fe(&local_68,0);
      }
      if ((local_90 & 0x10) != 0) {
        local_88 = 0x5622;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0x5622;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 8 & 1) != 0) {
        local_88 = 0xac44;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0xac44;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0xc & 1) != 0) {
        local_88 = 48000;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 48000;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0x10 & 1) == 0) goto LAB_14954bd2a;
      local_88 = 96000;
      if (puStack_60 == local_58) {
        FUN_1495506fe(&local_68,puStack_60,&local_88);
        goto LAB_14954bd2a;
      }
    }
    else {
      if ((local_90 & 4) != 0) {
        local_88 = 0x2b11;
        FUN_1495506fe(&local_68,0);
      }
      if ((local_90 & 0x40) != 0) {
        local_88 = 0x5622;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0x5622;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 10 & 1) != 0) {
        local_88 = 0xac44;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0xac44;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0xe & 1) != 0) {
        local_88 = 48000;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 48000;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0x12 & 1) == 0) goto LAB_14954bd2a;
      local_88 = 96000;
      if (puStack_60 == local_58) {
        FUN_1495506fe(&local_68,puStack_60,&local_88);
        goto LAB_14954bd2a;
      }
    }
  }
  else {
    uVar4 = 2;
    if ((local_90 & 0x80880) == 0) {
      uVar4 = (local_90 & 8) >> 2;
    }
    uVar7 = *(uint *)(param_2 + 0x74);
    uVar12 = 1;
    if ((local_90 & 0x22220) == 0) {
      uVar12 = (local_90 & 2) >> 1;
    }
    if ((local_90 & 0xa2aaa) != 0) {
      *(uint *)(param_2 + 0x74) = uVar12 | uVar4 | uVar7;
    }
    if (uVar4 == 0 && (uVar7 & 2) == 0) {
      if (uVar12 == 0 && (uVar7 & 1) == 0) goto LAB_14954bd2a;
      if ((local_90 & 2) != 0) {
        local_88 = 0x2b11;
        FUN_1495506fe(&local_68,0);
      }
      if ((local_90 & 0x20) != 0) {
        local_88 = 0x5622;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0x5622;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 9 & 1) != 0) {
        local_88 = 0xac44;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0xac44;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0xd & 1) != 0) {
        local_88 = 48000;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 48000;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0x11 & 1) == 0) goto LAB_14954bd2a;
      local_88 = 96000;
      if (puStack_60 == local_58) {
        FUN_1495506fe(&local_68,puStack_60,&local_88);
        goto LAB_14954bd2a;
      }
    }
    else {
      if ((local_90 & 8) != 0) {
        local_88 = 0x2b11;
        FUN_1495506fe(&local_68,0);
      }
      if ((char)local_90 < '\0') {
        local_88 = 0x5622;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0x5622;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0xb & 1) != 0) {
        local_88 = 0xac44;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 0xac44;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((short)local_90 < 0) {
        local_88 = 48000;
        if (puStack_60 == local_58) {
          FUN_1495506fe(&local_68,puStack_60,&local_88);
        }
        else {
          *puStack_60 = 48000;
          puStack_60 = puStack_60 + 1;
        }
      }
      if ((local_90 >> 0x13 & 1) == 0) goto LAB_14954bd2a;
      local_88 = 96000;
      if (puStack_60 == local_58) {
        FUN_1495506fe(&local_68,puStack_60,&local_88);
        goto LAB_14954bd2a;
      }
    }
  }
  local_88 = 96000;
  *puStack_60 = 96000;
  puStack_60 = puStack_60 + 1;
LAB_14954bd2a:
  (**(code **)(*local_b8 + 0x10))();
  if (*(int *)(param_2 + 0x4c) != 0) {
    uVar10 = 0;
    while( true ) {
      lVar8 = *(longlong *)(param_2 + 0x58);
      puVar2 = *(undefined4 **)(param_2 + 0x60);
      if ((ulonglong)((longlong)puStack_60 - local_68 >> 2) <= uVar10) break;
      if ((longlong)puVar2 - lVar8 != 0) {
        uVar4 = 1;
        uVar11 = 0;
        do {
          if (*(int *)(local_68 + uVar10 * 4) == *(int *)(lVar8 + uVar11 * 4)) goto LAB_14954bd9e;
          uVar11 = (ulonglong)uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar11 < (ulonglong)((longlong)puVar2 - lVar8 >> 2));
      }
      if (puVar2 == *(undefined4 **)(param_2 + 0x68)) {
        FUN_149550626(local_b0);
      }
      else {
        *puVar2 = *(undefined4 *)(local_68 + uVar10 * 4);
        *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 4;
      }
LAB_14954bd9e:
      uVar10 = (ulonglong)((int)uVar10 + 1);
    }
    FUN_1495507d6(lVar8,puVar2,(longlong)puVar2 - lVar8 >> 2);
    lVar8 = *(longlong *)(param_2 + 0x60) - *(longlong *)(param_2 + 0x58);
    if (lVar8 != 0) {
      uVar4 = *(uint *)(param_2 + 0x70);
      uVar10 = 1;
      do {
        uVar7 = *(uint *)(*(longlong *)(param_2 + 0x58) + -4 + uVar10 * 4);
        if (uVar4 < 48000 && uVar4 < uVar7) {
          *(uint *)(param_2 + 0x70) = uVar7;
          uVar4 = uVar7;
        }
        uVar11 = uVar10 & 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar11 < (ulonglong)(lVar8 >> 2));
    }
    uVar4 = *(uint *)(param_2 + 0x48);
    uVar7 = *(uint *)(param_2 + 0x4c);
    if (uVar4 != 0 && uVar7 != 0) {
      if (uVar4 < uVar7) {
        uVar7 = uVar4;
      }
      *(uint *)(param_2 + 0x50) = uVar7;
    }
    if (param_3 == 0) {
      param_2[0x55] = 1;
    }
    FUN_1401d7e14(local_a8,param_1[0x52] + lVar13 + 0x18);
    FUN_14454637e(&local_88,*(undefined8 *)(param_1[0x52] + 8 + lVar13));
    puVar1 = local_a0;
    if (local_a0 != &local_88) {
      FUN_1401d9a90(local_a0);
      *(longlong *)(puVar1 + 4) = local_78;
      *(longlong *)(puVar1 + 6) = lStack_70;
      *puVar1 = local_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
      puVar1[3] = uStack_7c;
      local_78 = 0;
      lStack_70 = 0xf;
      local_88 = local_88 & 0xffffff00;
    }
    FUN_1401d9a90(&local_88);
    *param_2 = 1;
  }
  FUN_148276cee(&local_68);
  return param_2;
}



// FUNCTION 14954c1a0 Unwind@14954c1a0 body=73 status=ok
// SIG undefined Unwind@14954c1a0(void)

void Unwind_14954c1a0(undefined8 param_1,longlong param_2)

{
  FUN_148276cee(*(undefined8 *)(param_2 + 0x98));
  FUN_1401d9a90(*(undefined8 *)(param_2 + 0xa8));
  FUN_1401d9a90(*(undefined8 *)(param_2 + 0xa0));
  return;
}



// FUNCTION 14954c1ea Unwind@14954c1ea body=55 status=ok
// SIG undefined Unwind@14954c1ea(void)

void Unwind_14954c1ea(undefined8 param_1,longlong param_2)

{
  FUN_148276cee(param_2 + 0xe0);
  return;
}



// FUNCTION 14954c222 FUN_14954c222 body=4449 status=ok
// SIG undefined FUN_14954c222(void)

undefined8
FUN_14954c222(longlong param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
             int param_7,uint *param_8,byte *param_9)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HWND pHVar8;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar9;
  basic_ostream<char,std::char_traits<char>_> *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined4 *puVar14;
  HANDLE pvVar15;
  ushort uVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  char *pcVar20;
  ulonglong uVar21;
  uint *puVar22;
  bool bVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  bool bVar28;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  uint local_12c;
  uint local_128;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined2 *local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  HWND local_e0;
  int local_d8;
  undefined2 local_d2;
  ushort local_d0;
  int local_ce;
  undefined8 local_ca;
  undefined2 local_c2;
  void *local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_54;
  uint local_4c;
  
  uVar27 = param_5 + param_4;
  if (2 < uVar27) {
    pcVar20 = 
    "RtApiDs::probeDeviceOpen: DirectSound does not support more than 2 channels per device.";
    goto LAB_14954c25a;
  }
  lVar26 = *(longlong *)(param_1 + 0x290);
  lVar18 = *(longlong *)(param_1 + 0x298) - lVar26;
  if (lVar18 == 0) {
    pcVar20 = "RtApiDs::probeDeviceOpen: no devices found!";
    goto LAB_14954c25a;
  }
  uVar21 = (lVar18 >> 3) * 0x6db6db6db6db6db7;
  uVar25 = (ulonglong)param_2;
  if (uVar21 < uVar25 || uVar21 - uVar25 == 0) {
    pcVar20 = "RtApiDs::probeDeviceOpen: device ID is invalid!";
    goto LAB_14954c25a;
  }
  if (param_3 == 0) {
    if (*(char *)(lVar26 + 0x10 + uVar25 * 0x38) != '\0') goto LAB_14954c2cc;
    pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: device (");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar10,param_2);
    pcVar20 = ") does not support output!";
  }
  else if (*(char *)(lVar26 + 0x11 + uVar25 * 0x38) == '\0') {
    pbVar10 = (basic_ostream<char,std::char_traits<char>_> *)
              FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: device (");
    pbVar9 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar10,param_2);
    pcVar20 = ") does not support input!";
  }
  else {
LAB_14954c2cc:
    pHVar8 = GetDesktopWindow();
    if ((param_9 == (byte *)0x0) ||
       ((iVar2 = 2, (*param_9 & 2) == 0 && (iVar2 = *(int *)(param_9 + 4), iVar2 < 2)))) {
      iVar2 = 3;
    }
    if (*param_8 < 0x20) {
      *param_8 = 0x20;
    }
    local_c2 = 0;
    local_ca = 0;
    local_d2 = 1;
    local_d0 = (ushort)uVar27;
    local_ce = param_6;
    local_d8 = iVar2;
    if (param_3 == 0) {
      local_138 = (longlong *)(uVar25 * 0x38);
      local_e0 = pHVar8;
      iVar6 = Ordinal_1(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + (longlong)local_138),
                        &local_148,0);
      if (-1 < iVar6) {
        local_b8 = CONCAT44(local_b8._4_4_,0x60);
        iVar6 = (**(code **)(*local_148 + 0x20))();
        pHVar8 = local_e0;
        if (iVar6 < 0) {
          (**(code **)(*local_148 + 0x10))();
          uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
          uVar12 = FUN_144546232(iVar6);
          uVar11 = FUN_141302cc4(uVar11,uVar12);
          pcVar20 = ") getting capabilities (";
LAB_14954c8f6:
          uVar12 = FUN_141302cc4(uVar11,pcVar20);
          lVar26 = *(longlong *)(param_1 + 0x290);
          uVar11 = *(undefined8 *)(lVar26 + 0x28 + (longlong)local_138);
          if (*(ulonglong *)(lVar26 + 0x30 + (longlong)local_138) < 0x10) {
            lVar26 = (longlong)local_138 + lVar26 + 0x18;
          }
          else {
            lVar26 = *(longlong *)(lVar26 + 0x18 + (longlong)local_138);
          }
LAB_14954cb18:
          uVar11 = FUN_1470ab2a8(uVar12,lVar26,uVar11);
          pcVar20 = ")!";
        }
        else {
          if ((local_b8 & 0x200000000) != 0 || uVar27 != 2) {
            if (((local_b8 & 0x800000000) == 0) || ((local_b8 & 0x400000000) != 0 && param_7 == 1))
            {
              uVar3 = 1;
              uVar16 = 8;
            }
            else {
              uVar3 = 2;
              uVar16 = 0x10;
            }
            *(undefined4 *)(param_1 + 0x180) = uVar3;
            *(int *)(param_1 + 0x17c) = param_7;
            uVar4 = (uint)local_d0 * (uint)uVar16 >> 3;
            local_ca = CONCAT44(CONCAT22(uVar16,(short)uVar4),(uVar4 & 0xffff) * local_ce);
            uVar5 = iVar2 * param_4 * (uint)(uVar16 >> 3) * *param_8;
            local_e0 = (HWND)(ulonglong)uVar5;
            uVar4 = 0x8000;
            do {
              uVar17 = uVar4;
              uVar4 = uVar17 * 2;
            } while (uVar17 < uVar5 * 2);
            iVar2 = (**(code **)(*local_148 + 0x30))(local_148,pHVar8,2);
            if (-1 < iVar2) {
              uStack_f0 = 0;
              uStack_e8 = 0;
              uStack_100 = 0;
              local_f8 = (undefined2 *)0x0;
              local_108 = &DAT_100000028;
              iVar2 = (**(code **)(*local_148 + 0x18))(local_148,&local_108,&local_140,0);
              if (iVar2 < 0) {
                (**(code **)(*local_148 + 0x10))();
                uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                uVar12 = FUN_144546232(iVar2);
                uVar11 = FUN_141302cc4(uVar11,uVar12);
                pcVar20 = ") accessing primary buffer (";
              }
              else {
                iVar2 = (**(code **)(*local_140 + 0x70))(local_140,&local_d2);
                if (iVar2 < 0) {
                  (**(code **)(*local_148 + 0x10))();
                  uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                  uVar12 = FUN_144546232(iVar2);
                  uVar11 = FUN_141302cc4(uVar11,uVar12);
                  pcVar20 = ") setting primary buffer format (";
                }
                else {
                  uStack_f0 = 0;
                  uStack_e8 = 0;
                  local_108 = (undefined1 *)0x1c00400000028;
                  uStack_100 = (ulonglong)uVar17;
                  local_f8 = &local_d2;
                  iVar2 = (**(code **)(*local_148 + 0x18))(local_148,&local_108,&local_140,0);
                  if (iVar2 < 0) {
                    local_108 = (undefined1 *)CONCAT44(0x1c008,(uint)local_108);
                    iVar2 = (**(code **)(*local_148 + 0x18))(local_148,&local_108,&local_140,0);
                    if (iVar2 < 0) {
                      (**(code **)(*local_148 + 0x10))();
                      uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                      uVar12 = FUN_144546232(iVar2);
                      uVar11 = FUN_141302cc4(uVar11,uVar12);
                      pcVar20 = ") creating secondary buffer (";
                      goto LAB_14954cc12;
                    }
                  }
                  local_54 = 0x14;
                  iVar2 = (**(code **)(*local_140 + 0x18))();
                  uVar4 = local_4c;
                  if (iVar2 < 0) {
                    (**(code **)(*local_148 + 0x10))();
                    (**(code **)(*local_140 + 0x10))();
                    uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                    uVar12 = FUN_144546232(iVar2);
                    uVar11 = FUN_141302cc4(uVar11,uVar12);
                    pcVar20 = ") getting buffer settings (";
                  }
                  else {
                    puVar22 = &local_12c;
                    iVar2 = (**(code **)(*local_140 + 0x58))
                                      (local_140,0,local_4c,&local_c0,puVar22,0,0,0);
                    if (iVar2 < 0) {
                      (**(code **)(*local_148 + 0x10))();
                      (**(code **)(*local_140 + 0x10))();
                      uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                      uVar12 = FUN_144546232(iVar2);
                      uVar11 = FUN_141302cc4(uVar11,uVar12);
                      pcVar20 = ") locking buffer (";
                    }
                    else {
                      memset(local_c0,0,(ulonglong)local_12c);
                      iVar2 = (**(code **)(*local_140 + 0x98))
                                        (local_140,local_c0,local_12c,0,
                                         (ulonglong)puVar22 & 0xffffffff00000000);
                      plVar19 = local_148;
                      pHVar8 = local_e0;
                      plVar24 = local_140;
                      if (-1 < iVar2) goto LAB_14954c365;
                      (**(code **)(*local_148 + 0x10))();
                      (**(code **)(*local_140 + 0x10))();
                      uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                      uVar12 = FUN_144546232(iVar2);
                      uVar11 = FUN_141302cc4(uVar11,uVar12);
                      pcVar20 = ") unlocking buffer (";
                    }
                  }
                }
              }
LAB_14954cc12:
              uVar11 = FUN_141302cc4(uVar11,pcVar20);
              lVar26 = *(longlong *)(param_1 + 0x290);
              if (*(ulonglong *)(lVar26 + 0x30 + (longlong)local_138) < 0x10) {
                lVar18 = (longlong)local_138 + lVar26 + 0x18;
              }
              else {
                lVar18 = *(longlong *)(lVar26 + 0x18 + (longlong)local_138);
              }
              uVar11 = FUN_1470ab2a8(uVar11,lVar18,
                                     *(undefined8 *)(lVar26 + 0x28 + (longlong)local_138));
              FUN_141302cc4(uVar11,&DAT_14bd3ce76);
              FUN_1470ab43c(param_1 + 0x10,&local_128);
              puVar22 = (uint *)(param_1 + 0xf0);
              if (puVar22 != &local_128) {
                FUN_1401d9a90(puVar22);
                *(undefined8 *)(param_1 + 0x100) = local_118;
                *(undefined8 *)(param_1 + 0x108) = uStack_110;
                *puVar22 = local_128;
                *(undefined4 *)(param_1 + 0xf4) = uStack_124;
                *(uint *)(param_1 + 0xf8) = uStack_120;
                *(uint *)(param_1 + 0xfc) = uStack_11c;
                local_118 = 0;
                uStack_110 = 0xf;
                local_128 = local_128 & 0xffffff00;
              }
              puVar22 = &local_128;
              goto LAB_14954c7bc;
            }
            (**(code **)(*local_148 + 0x10))();
            uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
            uVar12 = FUN_144546232(iVar2);
            uVar11 = FUN_141302cc4(uVar11,uVar12);
            pcVar20 = ") setting cooperative level (";
            goto LAB_14954c8f6;
          }
          uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::getDeviceInfo: the output device (");
          lVar26 = *(longlong *)(param_1 + 0x290);
          if (*(ulonglong *)(lVar26 + 0x30 + (longlong)local_138) < 0x10) {
            lVar18 = (longlong)local_138 + lVar26 + 0x18;
          }
          else {
            lVar18 = *(longlong *)(lVar26 + 0x18 + (longlong)local_138);
          }
          uVar11 = FUN_1470ab2a8(uVar11,lVar18,*(undefined8 *)(lVar26 + 0x28 + (longlong)local_138))
          ;
          pcVar20 = ") does not support stereo playback.";
        }
        FUN_141302cc4(uVar11,pcVar20);
        FUN_1470ab43c(param_1 + 0x10,&local_108);
        puVar22 = (uint *)(param_1 + 0xf0);
        if (puVar22 != (uint *)&local_108) {
          FUN_1401d9a90(puVar22);
          *(undefined2 **)(param_1 + 0x100) = local_f8;
          *(undefined8 *)(param_1 + 0x108) = uStack_f0;
          *puVar22 = (uint)local_108;
          *(undefined4 *)(param_1 + 0xf4) = local_108._4_4_;
          *(undefined4 *)(param_1 + 0xf8) = (undefined4)uStack_100;
          *(undefined4 *)(param_1 + 0xfc) = uStack_100._4_4_;
          local_f8 = (undefined2 *)0x0;
          uStack_f0 = 0xf;
          local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffffffffff00);
        }
        puVar22 = (uint *)&local_108;
        goto LAB_14954c7bc;
      }
      uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
      uVar12 = FUN_144546232(iVar6);
      uVar11 = FUN_141302cc4(uVar11,uVar12);
      uVar12 = FUN_141302cc4(uVar11,") opening output device (");
      lVar26 = *(longlong *)(param_1 + 0x290);
      uVar11 = *(undefined8 *)(lVar26 + 0x28 + (longlong)local_138);
      if (*(ulonglong *)(lVar26 + 0x30 + (longlong)local_138) < 0x10) {
        lVar26 = (longlong)local_138 + lVar26 + 0x18;
      }
      else {
        lVar26 = *(longlong *)(lVar26 + 0x18 + (longlong)local_138);
      }
    }
    else {
      uVar4 = 0x8000;
      plVar19 = (longlong *)0x0;
      pHVar8 = (HWND)0x0;
      plVar24 = (longlong *)0x0;
LAB_14954c365:
      if (param_3 != 1) {
LAB_14954cf59:
        lVar26 = (longlong)param_3;
        *(uint *)(param_1 + 0x164 + lVar26 * 4) = uVar27;
        *(int *)(param_1 + 0x15c + lVar26 * 4) = param_4;
        *(uint *)(param_1 + 0x154) = *param_8;
        *(int *)(param_1 + 0x16c + lVar26 * 4) = param_5;
        *(undefined1 *)(param_1 + 0x14b + lVar26) = 1;
        if ((param_9 == (byte *)0x0) || ((*param_9 & 1) == 0)) {
          uVar1 = 1;
        }
        else {
          uVar1 = 0;
        }
        *(undefined1 *)(param_1 + 0x14a) = uVar1;
        *(undefined1 *)(param_1 + 0x148 + lVar26) = 0;
        bVar28 = *(int *)(param_1 + 0x15c + lVar26 * 4) != *(int *)(param_1 + 0x164 + lVar26 * 4);
        *(bool *)(param_1 + 0x148 + lVar26) = bVar28;
        *(bool *)(param_1 + 0x148 + lVar26) =
             *(int *)(param_1 + 0x17c) != *(int *)(param_1 + 0x180 + lVar26 * 4) || bVar28;
        uVar27 = *(uint *)(param_1 + 0x15c + lVar26 * 4);
        if (1 < uVar27 && *(char *)(param_1 + 0x14a) != *(char *)(param_1 + 0x14b + lVar26)) {
          *(undefined1 *)(param_1 + 0x148 + lVar26) = 1;
          uVar27 = *(uint *)(param_1 + 0x15c + lVar26 * 4);
        }
        uVar5 = *param_8;
        local_138 = plVar19;
        local_e0 = pHVar8;
        iVar2 = FUN_14954b0c6(param_1,*(undefined4 *)(param_1 + 0x17c));
        pvVar13 = calloc((longlong)(int)(iVar2 * uVar27 * uVar5),1);
        *(void **)(param_1 + 0x130 + lVar26 * 8) = pvVar13;
        if (pvVar13 == (void *)0x0) {
          pcVar20 = "RtApiDs::probeDeviceOpen: error allocating user buffer memory.";
LAB_14954d1d8:
          FUN_1401d7cf8(param_1 + 0xf0,pcVar20);
        }
        else {
          if (*(char *)(param_1 + 0x148 + lVar26) == '\x01') {
            iVar2 = *(int *)(param_1 + 0x164 + lVar26 * 4);
            iVar6 = FUN_14954b0c6(param_1,*(undefined4 *)(param_1 + 0x180 + lVar26 * 4));
            iVar6 = iVar6 * iVar2;
            if ((((param_3 != 1) || (*(int *)(param_1 + 0x128) != 0)) ||
                (*(longlong *)(param_1 + 0x140) == 0)) ||
               (iVar2 = *(int *)(param_1 + 0x164), iVar7 = FUN_14954b0c6(param_1),
               iVar7 * iVar2 < iVar6)) {
              uVar27 = *param_8;
              if (*(void **)(param_1 + 0x140) != (void *)0x0) {
                free(*(void **)(param_1 + 0x140));
              }
              pvVar13 = calloc((longlong)(int)(iVar6 * uVar27),1);
              *(void **)(param_1 + 0x140) = pvVar13;
              if (pvVar13 == (void *)0x0) {
                pcVar20 = "RtApiDs::probeDeviceOpen: error allocating device buffer memory.";
                goto LAB_14954d1d8;
              }
            }
          }
          puVar14 = *(undefined4 **)(param_1 + 0x120);
          if (puVar14 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)FUN_14001cc68(0x50,0x10);
            *puVar14 = 0;
            *(undefined1 *)(puVar14 + 1) = 0;
            *(undefined8 *)(puVar14 + 0xb) = 0;
            *(undefined8 *)(puVar14 + 2) = 0;
            *(undefined8 *)(puVar14 + 4) = 0;
            *(undefined8 *)(puVar14 + 6) = 0;
            *(undefined8 *)(puVar14 + 8) = 0;
            *(undefined2 *)(puVar14 + 10) = 0;
            pvVar15 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
            *(HANDLE *)(puVar14 + 0x12) = pvVar15;
            *(undefined4 **)(param_1 + 0x120) = puVar14;
          }
          *(longlong **)(puVar14 + lVar26 * 2 + 2) = local_138;
          *(longlong **)(puVar14 + lVar26 * 2 + 6) = plVar24;
          puVar14[lVar26 + 0xd] = uVar4;
          puVar14[lVar26 + 0xf] = (int)local_e0;
          *(uint *)(param_1 + 0x118 + lVar26 * 4) = param_2;
          *(undefined4 *)(param_1 + 300) = 0;
          iVar2 = 2;
          if (param_3 != 1 || *(int *)(param_1 + 0x128) != 0) {
            iVar2 = param_3;
          }
          *(int *)(param_1 + 0x128) = iVar2;
          *(int *)(param_1 + 0x158) = local_d8;
          *(int *)(param_1 + 0x150) = param_6;
          if (*(char *)(param_1 + 0x148 + lVar26) == '\x01') {
            FUN_14954d384(param_1,param_3,param_5);
          }
          uVar11 = CONCAT71((uint7)(uint3)(param_2 >> 8),1);
          if (*(char *)(param_1 + 0x1e0) != '\0') {
            return uVar11;
          }
          *(undefined1 *)(param_1 + 0x1e0) = 1;
          *(longlong *)(param_1 + 0x1b0) = param_1;
          pvVar15 = (HANDLE)_beginthreadex((void *)0x0,0,FUN_14454644a,(void *)(param_1 + 0x1b0),0,
                                           (uint *)&local_b8);
          *(HANDLE *)(param_1 + 0x1b8) = pvVar15;
          if (pvVar15 != (HANDLE)0x0) {
            SetThreadPriority(pvVar15,2);
            return uVar11;
          }
          FUN_1401d7cf8(param_1 + 0xf0,"RtApiDs::probeDeviceOpen: error creating callback thread!");
          if (puVar14 != (undefined4 *)0x0) {
            if (*(longlong **)(puVar14 + 6) != (longlong *)0x0) {
              plVar19 = *(longlong **)(puVar14 + 2);
              (**(code **)(**(longlong **)(puVar14 + 6) + 0x10))();
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
            if (*(longlong **)(puVar14 + 8) != (longlong *)0x0) {
              plVar19 = *(longlong **)(puVar14 + 4);
              (**(code **)(**(longlong **)(puVar14 + 8) + 0x10))();
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
            CloseHandle(*(HANDLE *)(puVar14 + 0x12));
            FUN_1400020a8(puVar14);
            *(undefined8 *)(param_1 + 0x120) = 0;
          }
        }
        lVar26 = 0;
        bVar28 = true;
        do {
          bVar23 = bVar28;
          pvVar13 = *(void **)(param_1 + 0x130 + lVar26 * 8);
          if (pvVar13 != (void *)0x0) {
            free(pvVar13);
            *(undefined8 *)(param_1 + 0x130 + lVar26 * 8) = 0;
          }
          lVar26 = 1;
          bVar28 = false;
        } while (bVar23);
        if (*(void **)(param_1 + 0x140) != (void *)0x0) {
          free(*(void **)(param_1 + 0x140));
          *(undefined8 *)(param_1 + 0x140) = 0;
        }
        *(undefined4 *)(param_1 + 300) = 0xffffffce;
        return 0;
      }
      lVar26 = uVar25 * 0x38;
      iVar2 = Ordinal_6(*(undefined8 *)(*(longlong *)(param_1 + 0x290) + 8 + lVar26),&local_148,0);
      if (iVar2 < 0) {
        uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
        uVar12 = FUN_144546232(iVar2);
        uVar11 = FUN_141302cc4(uVar11,uVar12);
        pcVar20 = ") opening input device (";
      }
      else {
        local_128 = 0x10;
        iVar2 = (**(code **)(*local_148 + 0x20))();
        if (-1 < iVar2) {
          if (uStack_11c < uVar27) {
            pcVar20 = 
            "RtApiDs::getDeviceInfo: the input device does not support requested input channels.";
LAB_14954c25a:
            FUN_1401d7cf8(param_1 + 0xf0,pcVar20);
            return 0;
          }
          if (uVar27 == 2) {
            if ((param_7 == 1) && ((uStack_120 & 0x20222) != 0)) goto LAB_14954cdd3;
LAB_14954c945:
            uVar3 = 2;
            uVar16 = 0x10;
          }
          else {
            if ((param_7 != 1) || ((uStack_120 & 0x10111) == 0)) goto LAB_14954c945;
LAB_14954cdd3:
            uVar3 = 1;
            uVar16 = 8;
          }
          *(undefined4 *)(param_1 + 0x184) = uVar3;
          *(int *)(param_1 + 0x17c) = param_7;
          uVar5 = (uint)local_d0 * (uint)uVar16 >> 3;
          local_ca = CONCAT44(CONCAT22(uVar16,(short)uVar5),(uVar5 & 0xffff) * local_ce);
          uVar5 = local_d8 * param_4 * (uint)(uVar16 >> 3) * *param_8;
          local_e0 = (HWND)(ulonglong)uVar5;
          do {
            uStack_b0 = uVar4;
            uVar4 = uStack_b0 * 2;
          } while (uStack_b0 < uVar5 * 2);
          uStack_a0 = 0;
          uStack_98 = 0;
          local_b8 = 0x28;
          uStack_ac = 0;
          local_a8 = &local_d2;
          iVar2 = (**(code **)(*local_148 + 0x18))(local_148,&local_b8,&local_140,0);
          if (iVar2 < 0) {
            (**(code **)(*local_148 + 0x10))();
            uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
            uVar12 = FUN_144546232(iVar2);
            uVar11 = FUN_141302cc4(uVar11,uVar12);
            pcVar20 = ") creating input buffer (";
          }
          else {
            local_54 = 0x10;
            iVar2 = (**(code **)(*local_140 + 0x18))();
            if (iVar2 < 0) {
              (**(code **)(*local_148 + 0x10))();
              (**(code **)(*local_140 + 0x10))();
              uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
              uVar12 = FUN_144546232(iVar2);
              uVar11 = FUN_141302cc4(uVar11,uVar12);
              pcVar20 = ") getting buffer settings (";
            }
            else {
              puVar22 = &local_12c;
              iVar2 = (**(code **)(*local_140 + 0x40))(local_140,0,local_4c,&local_c0,puVar22,0,0,0)
              ;
              if (iVar2 < 0) {
                (**(code **)(*local_148 + 0x10))();
                (**(code **)(*local_140 + 0x10))();
                uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                uVar12 = FUN_144546232(iVar2);
                uVar11 = FUN_141302cc4(uVar11,uVar12);
                pcVar20 = ") locking input buffer (";
              }
              else {
                memset(local_c0,0,(ulonglong)local_12c);
                iVar2 = (**(code **)(*local_140 + 0x58))
                                  (local_140,local_c0,local_12c,0,
                                   (ulonglong)puVar22 & 0xffffffff00000000);
                plVar19 = local_148;
                pHVar8 = local_e0;
                plVar24 = local_140;
                uVar4 = local_4c;
                if (-1 < iVar2) goto LAB_14954cf59;
                (**(code **)(*local_148 + 0x10))();
                (**(code **)(*local_140 + 0x10))();
                uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
                uVar12 = FUN_144546232(iVar2);
                uVar11 = FUN_141302cc4(uVar11,uVar12);
                pcVar20 = ") unlocking input buffer (";
              }
            }
          }
          uVar12 = FUN_141302cc4(uVar11,pcVar20);
          lVar18 = *(longlong *)(param_1 + 0x290);
          uVar11 = *(undefined8 *)(lVar18 + 0x28 + lVar26);
          if (*(ulonglong *)(lVar18 + 0x30 + lVar26) < 0x10) {
            lVar26 = lVar18 + lVar26 + 0x18;
          }
          else {
            lVar26 = *(longlong *)(lVar18 + 0x18 + lVar26);
          }
          goto LAB_14954cb18;
        }
        (**(code **)(*local_148 + 0x10))();
        uVar11 = FUN_141302cc4(param_1 + 8,"RtApiDs::probeDeviceOpen: error (");
        uVar12 = FUN_144546232(iVar2);
        uVar11 = FUN_141302cc4(uVar11,uVar12);
        pcVar20 = ") getting input capabilities (";
      }
      uVar12 = FUN_141302cc4(uVar11,pcVar20);
      lVar18 = *(longlong *)(param_1 + 0x290);
      uVar11 = *(undefined8 *)(lVar18 + 0x28 + lVar26);
      if (*(ulonglong *)(lVar18 + 0x30 + lVar26) < 0x10) {
        lVar26 = lVar18 + lVar26 + 0x18;
      }
      else {
        lVar26 = *(longlong *)(lVar18 + 0x18 + lVar26);
      }
    }
    pbVar9 = (basic_ostream<char,struct_std::char_traits<char>_> *)
             FUN_1470ab2a8(uVar12,lVar26,uVar11);
    pcVar20 = ")!";
  }
  FUN_141302cc4(pbVar9,pcVar20);
  FUN_1470ab43c(param_1 + 0x10,&local_b8);
  puVar22 = (uint *)(param_1 + 0xf0);
  if (puVar22 != (uint *)&local_b8) {
    FUN_1401d9a90(puVar22);
    *(undefined2 **)(param_1 + 0x100) = local_a8;
    *(undefined8 *)(param_1 + 0x108) = uStack_a0;
    *puVar22 = (uint)local_b8;
    *(undefined4 *)(param_1 + 0xf4) = local_b8._4_4_;
    *(uint *)(param_1 + 0xf8) = uStack_b0;
    *(undefined4 *)(param_1 + 0xfc) = uStack_ac;
    local_a8 = (undefined2 *)0x0;
    uStack_a0 = 0xf;
    local_b8 = local_b8 & 0xffffffffffffff00;
  }
  puVar22 = (uint *)&local_b8;
LAB_14954c7bc:
  FUN_1401d9a90(puVar22);
  return 0;
}



// FUNCTION 14954d384 FUN_14954d384 body=976 status=ok
// SIG undefined FUN_14954d384(void)

void FUN_14954d384(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 1) {
    iVar4 = *(int *)(param_1 + 0x160);
    iVar6 = *(int *)(param_1 + 0x168);
    *(int *)(param_1 + 0x234) = iVar6;
    *(int *)(param_1 + 0x238) = iVar4;
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x17c);
    lVar7 = 1;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x15c);
    lVar7 = (longlong)param_2;
    *(int *)(param_1 + 0x1ec + lVar7 * 0x48) = iVar6;
    iVar4 = *(int *)(param_1 + 0x164);
    *(int *)(param_1 + 0x1f0 + lVar7 * 0x48) = iVar4;
    *(undefined4 *)(param_1 + 500 + lVar7 * 0x48) = *(undefined4 *)(param_1 + 0x17c);
    *(undefined4 *)(param_1 + 0x1f8 + lVar7 * 0x48) = *(undefined4 *)(param_1 + 0x180);
  }
  lVar1 = param_1 + lVar7 * 0x48;
  piVar5 = (int *)(lVar1 + 0x1e8);
  if (iVar6 < iVar4) {
    iVar4 = iVar6;
  }
  *piVar5 = iVar4;
  bVar2 = *(byte *)(param_1 + 0x14b + lVar7);
  if (bVar2 == *(byte *)(param_1 + 0x14a)) {
    if (bVar2 == 0) {
      if (0 < iVar4) {
        local_58 = lVar1 + 0x200;
        iVar6 = 0;
        do {
          local_4c = *(int *)(param_1 + 0x154) * iVar6;
          piVar3 = *(int **)(lVar1 + 0x208);
          if (piVar3 == *(int **)(lVar1 + 0x210)) {
            FUN_14694af78(local_58,piVar3,&local_4c);
          }
          else {
            *piVar3 = local_4c;
            *(longlong *)(lVar1 + 0x208) = *(longlong *)(lVar1 + 0x208) + 4;
          }
          local_4c = *(int *)(param_1 + 0x154) * iVar6;
          piVar3 = *(int **)(lVar1 + 0x220);
          if (piVar3 == *(int **)(lVar1 + 0x228)) {
            FUN_14694af78(lVar1 + 0x218,piVar3,&local_4c);
          }
          else {
            *piVar3 = local_4c;
            *(longlong *)(lVar1 + 0x220) = *(longlong *)(lVar1 + 0x220) + 4;
          }
          *(undefined1 **)(lVar1 + 0x1ec) = &DAT_100000001;
          iVar6 = iVar6 + 1;
          iVar4 = *piVar5;
        } while (iVar6 < iVar4);
      }
    }
    else {
      local_4c = 0;
      if (0 < iVar4) {
        do {
          piVar3 = *(int **)(lVar1 + 0x208);
          if (piVar3 == *(int **)(lVar1 + 0x210)) {
            FUN_14694bab6(lVar1 + 0x200,piVar3,&local_4c);
          }
          else {
            *piVar3 = local_4c;
            *(longlong *)(lVar1 + 0x208) = *(longlong *)(lVar1 + 0x208) + 4;
          }
          piVar3 = *(int **)(lVar1 + 0x220);
          if (piVar3 == *(int **)(lVar1 + 0x228)) {
            FUN_14694bab6(lVar1 + 0x218,piVar3,&local_4c);
          }
          else {
            *piVar3 = local_4c;
            *(longlong *)(lVar1 + 0x220) = *(longlong *)(lVar1 + 0x220) + 4;
          }
          local_4c = local_4c + 1;
          iVar4 = *piVar5;
        } while (local_4c < iVar4);
      }
    }
  }
  else if (((param_2 == 0 & bVar2) == 0) && ((param_2 != 1 || (*(byte *)(param_1 + 0x14a) == 0)))) {
    local_4c = 0;
    if (0 < iVar4) {
      do {
        piVar3 = *(int **)(lVar1 + 0x208);
        if (piVar3 == *(int **)(lVar1 + 0x210)) {
          FUN_14694bab6(lVar1 + 0x200,piVar3,&local_4c);
        }
        else {
          *piVar3 = local_4c;
          *(longlong *)(lVar1 + 0x208) = *(longlong *)(lVar1 + 0x208) + 4;
        }
        local_50 = *(int *)(param_1 + 0x154) * local_4c;
        piVar3 = *(int **)(lVar1 + 0x220);
        if (piVar3 == *(int **)(lVar1 + 0x228)) {
          FUN_14694af78(lVar1 + 0x218,piVar3,&local_50);
        }
        else {
          *piVar3 = local_50;
          *(longlong *)(lVar1 + 0x220) = *(longlong *)(lVar1 + 0x220) + 4;
        }
        *(undefined4 *)(lVar1 + 0x1f0) = 1;
        local_4c = local_4c + 1;
        iVar4 = *piVar5;
      } while (local_4c < iVar4);
    }
  }
  else {
    local_4c = 0;
    if (0 < iVar4) {
      do {
        local_50 = local_4c * *(int *)(param_1 + 0x154);
        piVar3 = *(int **)(lVar1 + 0x208);
        if (piVar3 == *(int **)(lVar1 + 0x210)) {
          FUN_14694af78(lVar1 + 0x200,piVar3,&local_50);
        }
        else {
          *piVar3 = local_50;
          *(longlong *)(lVar1 + 0x208) = *(longlong *)(lVar1 + 0x208) + 4;
        }
        piVar3 = *(int **)(lVar1 + 0x220);
        if (piVar3 == *(int **)(lVar1 + 0x228)) {
          FUN_14694bab6(lVar1 + 0x218,piVar3,&local_4c);
        }
        else {
          *piVar3 = local_4c;
          *(longlong *)(lVar1 + 0x220) = *(longlong *)(lVar1 + 0x220) + 4;
        }
        *(undefined4 *)(lVar1 + 0x1ec) = 1;
        local_4c = local_4c + 1;
        iVar4 = *piVar5;
      } while (local_4c < iVar4);
    }
  }
  if (param_3 != 0) {
    if (*(char *)(param_1 + 0x14b + lVar7) == '\x01') {
      if (param_2 == 0) {
        if (0 < iVar4) {
          lVar7 = 0;
          do {
            piVar3 = (int *)(*(longlong *)(lVar1 + 0x218) + lVar7 * 4);
            *piVar3 = *piVar3 + param_3;
            lVar7 = lVar7 + 1;
          } while (lVar7 < *piVar5);
        }
      }
      else if (0 < iVar4) {
        lVar7 = 0;
        do {
          piVar3 = (int *)(*(longlong *)(lVar1 + 0x200) + lVar7 * 4);
          *piVar3 = *piVar3 + param_3;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *piVar5);
      }
    }
    else if (param_2 == 0) {
      if (0 < iVar4) {
        lVar7 = 0;
        do {
          piVar3 = (int *)(*(longlong *)(lVar1 + 0x218) + lVar7 * 4);
          *piVar3 = *piVar3 + *(int *)(param_1 + 0x154) * param_3;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *piVar5);
      }
    }
    else if (0 < iVar4) {
      lVar7 = 0;
      do {
        piVar3 = (int *)(*(longlong *)(lVar1 + 0x200) + lVar7 * 4);
        *piVar3 = *piVar3 + *(int *)(param_1 + 0x154) * param_3;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *piVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14954d756 FUN_14954d756 body=338 status=ok
// SIG undefined FUN_14954d756(void)

void FUN_14954d756(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  void *_Memory;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 300) != -0x32) {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x1b8),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x1b8));
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 != 0) {
      plVar1 = *(longlong **)(lVar5 + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = *(longlong **)(lVar5 + 8);
        (**(code **)(*plVar1 + 0x90))(plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      plVar1 = *(longlong **)(lVar5 + 0x20);
      if (plVar1 != (longlong *)0x0) {
        plVar2 = *(longlong **)(lVar5 + 0x10);
        (**(code **)(*plVar1 + 0x50))(plVar1);
        (**(code **)(*plVar1 + 0x10))(plVar1);
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
      CloseHandle(*(HANDLE *)(lVar5 + 0x48));
      FUN_1400020a8(lVar5);
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    lVar5 = 0;
    bVar3 = true;
    do {
      bVar4 = bVar3;
      _Memory = *(void **)(param_1 + 0x130 + lVar5 * 8);
      if (_Memory != (void *)0x0) {
        free(_Memory);
        *(undefined8 *)(param_1 + 0x130 + lVar5 * 8) = 0;
      }
      lVar5 = 1;
      bVar3 = false;
    } while (bVar4);
    if (*(void **)(param_1 + 0x140) != (void *)0x0) {
      free(*(void **)(param_1 + 0x140));
      *(undefined8 *)(param_1 + 0x140) = 0;
    }
    *(undefined8 *)(param_1 + 0x128) = 0xffffffceffffffb5;
    return;
  }
  FUN_1401d7cf8(param_1 + 0xf0,"RtApiDs::closeStream(): no open stream to close!");
  FUN_14954ae26(param_1,0);
  return;
}



// FUNCTION 14954d8a8 FUN_14954d8a8 body=611 status=ok
// SIG undefined FUN_14954d8a8(void)

void FUN_14954d8a8(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = *(int *)(param_1 + 300);
  if (iVar5 == -0x32) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApi:: a stream is not open!");
    FUN_14954ae26(param_1,7);
    iVar5 = *(int *)(param_1 + 300);
  }
  if (iVar5 == 2) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApiDs::startStream(): the stream is already running!");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  puVar3 = *(undefined4 **)(param_1 + 0x120);
  timeBeginPeriod(1);
  *(undefined1 *)(param_1 + 0x289) = 0;
  *(undefined4 *)(param_1 + 0x28c) = 0;
  uVar4 = *(uint *)(param_1 + 0x128);
  if (uVar4 == 2) {
    uVar2 = *(uint *)(param_1 + 0x150);
    iVar5 = FUN_14954b0c6(param_1,*(undefined4 *)(param_1 + 0x184));
    uVar4 = *(uint *)(param_1 + 0x128);
    *(int *)(param_1 + 0x28c) =
         (int)((double)*(uint *)(param_1 + 0x168) * (double)iVar5 * (double)uVar2 * 0.5);
  }
  if ((uVar4 & 0xfffffffd) == 0) {
    iVar5 = (**(code **)(**(longlong **)(puVar3 + 6) + 0x60))(*(longlong **)(puVar3 + 6),0,0,1);
    if (-1 < iVar5) {
      uVar4 = *(uint *)(param_1 + 0x128);
      goto LAB_14954d93b;
    }
    uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::startStream: error (");
    uVar7 = FUN_144546232(iVar5);
    uVar6 = FUN_141302cc4(uVar6,uVar7);
    pcVar8 = ") starting output buffer!";
LAB_14954da7a:
    FUN_141302cc4(uVar6,pcVar8);
    FUN_1470ab43c(param_1 + 0x10,&local_50);
    puVar1 = (undefined8 *)(param_1 + 0xf0);
    if (puVar1 != (undefined8 *)&local_50) {
      FUN_1401d9a90(puVar1);
      *(undefined8 *)(param_1 + 0x100) = local_40;
      *(undefined8 *)(param_1 + 0x108) = uStack_38;
      *puVar1 = CONCAT71(uStack_4f,local_50);
      *(undefined8 *)(param_1 + 0xf8) = uStack_48;
      local_40 = 0;
      uStack_38 = 0xf;
      local_50 = 0;
    }
    FUN_1401d9a90(&local_50);
    FUN_14954ae26(param_1,9);
  }
  else {
LAB_14954d93b:
    if (uVar4 - 1 < 2) {
      iVar5 = (**(code **)(**(longlong **)(puVar3 + 8) + 0x48))(*(longlong **)(puVar3 + 8),1);
      if (iVar5 < 0) {
        uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::startStream: error (");
        uVar7 = FUN_144546232(iVar5);
        uVar6 = FUN_141302cc4(uVar6,uVar7);
        pcVar8 = ") starting input buffer!";
        goto LAB_14954da7a;
      }
    }
    *puVar3 = 0;
    *(undefined1 *)(puVar3 + 1) = 0;
    ResetEvent(*(HANDLE *)(puVar3 + 0x12));
    *(undefined4 *)(param_1 + 300) = 2;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954db22 FUN_14954db22 body=1036 status=ok
// SIG undefined FUN_14954db22(void)

void FUN_14954db22(longlong param_1)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  uint local_54;
  void *local_50;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = *(int *)(param_1 + 300);
  if (iVar4 == -0x32) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApi:: a stream is not open!");
    FUN_14954ae26(param_1);
    iVar4 = *(int *)(param_1 + 300);
  }
  if (iVar4 == 0) {
    FUN_1401d7cf8(param_1 + 0xf0,"RtApiDs::stopStream(): the stream is already stopped!");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  piVar2 = *(int **)(param_1 + 0x120);
  uVar5 = *(uint *)(param_1 + 0x128);
  if ((uVar5 & 0xfffffffd) == 0) {
    if (*piVar2 == 0) {
      *piVar2 = 2;
      WaitForSingleObject(*(HANDLE *)(piVar2 + 0x12),0xffffffff);
    }
    *(undefined4 *)(param_1 + 300) = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
    plVar3 = *(longlong **)(piVar2 + 6);
    iVar4 = (**(code **)(*plVar3 + 0x90))(plVar3);
    if (iVar4 < 0) {
      uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar7 = FUN_144546232(iVar4);
      uVar6 = FUN_141302cc4(uVar6,uVar7);
      pcVar8 = ") stopping output buffer!";
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = &local_54;
      local_60 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,0,piVar2[0xd],&local_50);
      if (iVar4 < 0) {
        uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
        uVar7 = FUN_144546232(iVar4);
        uVar6 = FUN_141302cc4(uVar6,uVar7);
        pcVar8 = ") locking output buffer!";
      }
      else {
        memset(local_50,0,(ulonglong)local_54);
        local_78 = (uint *)((ulonglong)local_78 & 0xffffffff00000000);
        iVar4 = (**(code **)(*plVar3 + 0x98))(plVar3,local_50,local_54,0);
        if (-1 < iVar4) {
          piVar2[0xb] = 0;
          uVar5 = *(uint *)(param_1 + 0x128);
          goto LAB_14954dc35;
        }
        uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
        uVar7 = FUN_144546232(iVar4);
        uVar6 = FUN_141302cc4(uVar6,uVar7);
        pcVar8 = ") unlocking output buffer!";
      }
    }
  }
  else {
LAB_14954dc35:
    if (1 < uVar5 - 1) {
LAB_14954dcf2:
      timeEndPeriod(1);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
      goto LAB_14954dd0d;
    }
    plVar3 = *(longlong **)(piVar2 + 8);
    local_50 = (void *)0x0;
    local_54 = 0;
    *(undefined4 *)(param_1 + 300) = 0;
    if (uVar5 != 2) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
    }
    iVar4 = (**(code **)(*plVar3 + 0x50))(plVar3);
    if (iVar4 < 0) {
      uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
      uVar7 = FUN_144546232(iVar4);
      uVar6 = FUN_141302cc4(uVar6,uVar7);
      pcVar8 = ") stopping input buffer!";
    }
    else {
      local_70 = 0;
      uStack_68 = 0;
      local_78 = &local_54;
      local_60 = 0;
      iVar4 = (**(code **)(*plVar3 + 0x40))(plVar3,0,piVar2[0xe],&local_50);
      if (iVar4 < 0) {
        uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
        uVar7 = FUN_144546232(iVar4);
        uVar6 = FUN_141302cc4(uVar6,uVar7);
        pcVar8 = ") locking input buffer!";
      }
      else {
        memset(local_50,0,(ulonglong)local_54);
        local_78 = (uint *)((ulonglong)local_78 & 0xffffffff00000000);
        iVar4 = (**(code **)(*plVar3 + 0x58))(plVar3,local_50,local_54,0);
        if (-1 < iVar4) {
          piVar2[0xc] = 0;
          goto LAB_14954dcf2;
        }
        uVar6 = FUN_141302cc4(param_1 + 8,"RtApiDs::stopStream: error (");
        uVar7 = FUN_144546232(iVar4);
        uVar6 = FUN_141302cc4(uVar6,uVar7);
        pcVar8 = ") unlocking input buffer!";
      }
    }
  }
  FUN_141302cc4(uVar6,pcVar8);
  FUN_1470ab43c(param_1 + 0x10,&local_48);
  puVar1 = (uint *)(param_1 + 0xf0);
  if (puVar1 != &local_48) {
    FUN_1401d9a90(puVar1);
    *(undefined8 *)(param_1 + 0x100) = local_38;
    *(undefined8 *)(param_1 + 0x108) = uStack_30;
    *puVar1 = local_48;
    *(undefined4 *)(param_1 + 0xf4) = uStack_44;
    *(undefined4 *)(param_1 + 0xf8) = uStack_40;
    *(undefined4 *)(param_1 + 0xfc) = uStack_3c;
    local_38 = 0;
    uStack_30 = 0xf;
    local_48 = local_48 & 0xffffff00;
  }
  FUN_1401d9a90(&local_48);
  timeEndPeriod(1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x188));
  FUN_14954ae26(param_1,9);
LAB_14954dd0d:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14954df42 FUN_14954df42 body=125 status=ok
// SIG undefined FUN_14954df42(void)

void FUN_14954df42(longlong *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 300);
  if (iVar1 == -0x32) {
    FUN_1401d7cf8(param_1 + 0x1e,"RtApi:: a stream is not open!");
    FUN_14954ae26(param_1,7);
    iVar1 = *(int *)((longlong)param_1 + 300);
  }
  if (iVar1 != 0) {
    *(undefined4 *)param_1[0x24] = 2;
                    /* WARNING: Could not recover jumptable at 0x00014954df71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1);
    return;
  }
  FUN_1401d7cf8(param_1 + 0x1e,"RtApiDs::abortStream(): the stream is already stopped!");
  FUN_14954ae26(param_1,0);
  return;
}



// FUNCTION 14954dfc0 FUN_14954dfc0 body=3305 status=ok
// SIG undefined FUN_14954dfc0(void)

void FUN_14954dfc0(longlong *param_1)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong uVar18;
  uint uVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  void *pvVar23;
  uint uVar24;
  undefined1 auStack_118 [32];
  uint *local_f8;
  void **local_f0;
  uint *local_e8;
  undefined4 local_e0;
  LPCRITICAL_SECTION local_d8;
  longlong *local_d0;
  uint local_c8;
  uint local_c4;
  void *local_c0;
  void *local_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  longlong lStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(uint *)((longlong)param_1 + 300) < 2) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
  }
  if (*(uint *)((longlong)param_1 + 300) == 0xffffffce) {
    FUN_1401d7cf8(param_1 + 0x1e,
                  "RtApiDs::callbackEvent(): the stream is closed ... this shouldn\'t happen!");
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
  }
  puVar2 = (uint *)param_1[0x24];
  if ((int)param_1[0x2b] + 2U < *puVar2) {
    *(undefined4 *)((longlong)param_1 + 300) = 1;
    if ((char)puVar2[1] == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
  }
  if (*puVar2 == 0) {
    pcVar3 = (code *)param_1[0x38];
    uVar13 = (**(code **)(*param_1 + 0x50))(param_1);
    iVar21 = (int)param_1[0x25];
    uVar11 = 0;
    if (iVar21 == 1) {
LAB_14954e21c:
      if (*(char *)((longlong)puVar2 + 0x29) == '\x01') {
        uVar11 = uVar11 | 1;
        *(undefined1 *)((longlong)puVar2 + 0x29) = 0;
      }
    }
    else {
      uVar11 = 0;
      if ((char)puVar2[10] == '\x01') {
        *(undefined1 *)(puVar2 + 10) = 0;
        iVar21 = (int)param_1[0x25];
        uVar11 = 2;
      }
      if (iVar21 != 0) goto LAB_14954e21c;
    }
    local_f0 = (void **)param_1[0x39];
    local_f8 = (uint *)CONCAT44(local_f8._4_4_,uVar11);
    iVar21 = (*pcVar3)(param_1[0x26],param_1[0x27],*(undefined4 *)((longlong)param_1 + 0x154),uVar13
                      );
    if (iVar21 == 2) {
      *(undefined4 *)((longlong)param_1 + 300) = 1;
      *puVar2 = 2;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
    }
    if (iVar21 == 1) {
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
  }
  local_b8 = (void *)0x0;
  local_c0 = (void *)0x0;
  local_c4 = 0;
  local_c8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x31);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)((longlong)param_1 + 300) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_118);
  }
  if (*(char *)((longlong)param_1 + 0x289) == '\0') {
    if ((int)param_1[0x25] == 0) {
      iVar21 = (**(code **)(**(longlong **)(puVar2 + 6) + 0x20))
                         (*(longlong **)(puVar2 + 6),&local_a4,&local_a8);
      if (-1 < iVar21) {
        uVar11 = puVar2[0xf] + local_a8;
        puVar2[0xb] = uVar11;
        if (puVar2[0xd] <= uVar11) {
          puVar2[0xb] = uVar11 - puVar2[0xd];
        }
        goto LAB_14954e5b6;
      }
      uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
      uVar14 = FUN_144546232(iVar21);
LAB_14954e901:
      uVar13 = FUN_141302cc4(uVar13,uVar14);
      pcVar20 = ") getting current write position!";
    }
    else {
      if ((int)param_1[0x25] != 2) {
LAB_14954e5b6:
        *(undefined1 *)((longlong)param_1 + 0x289) = 1;
        goto LAB_14954e118;
      }
      plVar5 = *(longlong **)(puVar2 + 6);
      plVar4 = *(longlong **)(puVar2 + 8);
      iVar21 = (**(code **)(*plVar5 + 0x20))(plVar5,0,&local_a4);
      if (iVar21 < 0) {
LAB_14954e8e4:
        uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
        uVar14 = FUN_144546232(iVar21);
        goto LAB_14954e901;
      }
      iVar21 = (**(code **)(*plVar4 + 0x20))(plVar4,0,&local_ac);
      if (-1 < iVar21) {
        iVar21 = (**(code **)(*plVar5 + 0x20))(plVar5,0,&local_a8);
        if (-1 < iVar21) {
          local_d8 = lpCriticalSection;
          do {
            iVar21 = (**(code **)(*plVar4 + 0x20))(plVar4,0,&local_b0);
            if (iVar21 < 0) {
              uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
              uVar14 = FUN_144546232(iVar21);
              uVar13 = FUN_141302cc4(uVar13,uVar14);
              FUN_141302cc4(uVar13,") getting current read position!");
              FUN_1470ab43c(param_1 + 2,&local_a0);
              puVar2 = (uint *)(param_1 + 0x1e);
              if (puVar2 != &local_a0) {
                FUN_1401d9a90(puVar2);
                param_1[0x20] = local_90;
                param_1[0x21] = lStack_88;
                *puVar2 = local_a0;
                *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_9c;
                *(undefined4 *)(param_1 + 0x1f) = uStack_98;
                *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_94;
                local_90 = 0;
                lStack_88 = 0xf;
                local_a0 = local_a0 & 0xffffff00;
              }
              FUN_1401d9a90(&local_a0);
              lpCriticalSection = local_d8;
              goto LAB_14954e97d;
            }
            if ((local_a8 != local_a4) && (local_b0 != local_ac)) {
              uVar11 = local_a8 + puVar2[0xf];
              puVar2[0xb] = uVar11;
              if (puVar2[0xd] <= uVar11) {
                puVar2[0xb] = uVar11 - puVar2[0xd];
              }
              puVar2[0xc] = local_b0;
              lpCriticalSection = local_d8;
              goto LAB_14954e5b6;
            }
            Sleep(1);
            iVar21 = (**(code **)(*plVar5 + 0x20))(plVar5,0,&local_a8);
            lpCriticalSection = local_d8;
          } while (-1 < iVar21);
        }
        goto LAB_14954e8e4;
      }
      uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
      uVar14 = FUN_144546232(iVar21);
      uVar13 = FUN_141302cc4(uVar13,uVar14);
      pcVar20 = ") getting current read position!";
    }
    FUN_141302cc4(uVar13,pcVar20);
    FUN_1470ab43c(param_1 + 2,&local_a0);
    puVar2 = (uint *)(param_1 + 0x1e);
    if (puVar2 != &local_a0) {
      FUN_1401d9a90(puVar2);
      param_1[0x20] = local_90;
      param_1[0x21] = lStack_88;
      *puVar2 = local_a0;
      *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_9c;
      *(undefined4 *)(param_1 + 0x1f) = uStack_98;
      *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_94;
      local_90 = 0;
      lStack_88 = 0xf;
      local_a0 = local_a0 & 0xffffff00;
    }
    FUN_1401d9a90(&local_a0);
  }
  else {
LAB_14954e118:
    if ((*(uint *)(param_1 + 0x25) & 0xfffffffd) != 0) {
LAB_14954e128:
      if (*puVar2 == 0) {
        if ((int)param_1[0x25] - 1U < 2) {
          uVar18 = (ulonglong)*(byte *)((longlong)param_1 + 0x149);
          pvVar23 = (void *)param_1[uVar18 + 0x27];
          lVar12 = param_1[uVar18 + 0x2c];
          iVar21 = *(int *)((longlong)param_1 + 0x154);
          local_d8 = lpCriticalSection;
          iVar8 = FUN_14954b0c6(param_1,*(undefined4 *)((longlong)param_1 + uVar18 * 8 + 0x17c));
          plVar5 = *(longlong **)(puVar2 + 8);
          uVar11 = puVar2[0xc];
          local_d0 = (longlong *)CONCAT44(local_d0._4_4_,puVar2[0xe]);
          iVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_ac,&local_b0);
          if (iVar9 < 0) {
LAB_14954ed88:
            uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
            uVar14 = FUN_144546232(iVar9);
            uVar13 = FUN_141302cc4(uVar13,uVar14);
            pcVar20 = ") getting current read position!";
          }
          else {
            uVar24 = (int)lVar12 * iVar21 * iVar8;
            if (local_b0 < uVar11) {
              local_b0 = local_b0 + (uint)local_d0;
            }
            uVar1 = uVar11 + uVar24;
            if ((int)param_1[0x25] == 2) {
              iVar21 = uVar1 - local_b0;
              if (local_b0 <= uVar1 && iVar21 != 0) {
                if (*(int *)((longlong)param_1 + 0x28c) < 1) {
                  *(undefined1 *)((longlong)puVar2 + 0x29) = 1;
                  iVar8 = uVar24 + iVar21;
                  if ((int)(uVar24 * 2) <= iVar21) {
                    iVar8 = uVar24 * 2;
                  }
                  uVar11 = ((int)(local_b0 - iVar8) >> 0x1f & (uint)local_d0) + (local_b0 - iVar8);
                }
                else {
                  uVar11 = (local_b0 - uVar24) - (uint)local_d0;
                  do {
                    uVar11 = uVar11 + (uint)local_d0;
                  } while ((int)uVar11 < 0);
                }
              }
            }
            else if (local_b0 < uVar1) {
              do {
                if ((char)param_1[0x3c] != '\x01') break;
                uVar16 = uVar1 - local_b0;
                iVar21 = FUN_14954b0c6(param_1,*(undefined4 *)((longlong)param_1 + 0x184));
                dVar6 = ((double)uVar16 * 1000.0) /
                        (double)(uint)(iVar21 * (int)param_1[0x2d] * (int)param_1[0x2a]);
                dVar7 = 1.0;
                if (1.0 <= dVar6) {
                  dVar7 = dVar6;
                }
                Sleep((DWORD)(longlong)dVar7);
                iVar9 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_ac,&local_b0);
                if (iVar9 < 0) goto LAB_14954ed88;
                if (local_b0 < uVar11) {
                  local_b0 = local_b0 + (uint)local_d0;
                }
              } while (local_b0 < uVar1);
            }
            local_e8 = &local_c8;
            local_f0 = &local_c0;
            local_f8 = &local_c4;
            local_e0 = 0;
            iVar21 = (**(code **)(*plVar5 + 0x40))(plVar5,uVar11,uVar24,&local_b8);
            if (-1 < iVar21) {
              if (*(int *)((longlong)param_1 + 0x28c) < 1) {
                memcpy(pvVar23,local_b8,(ulonglong)local_c4);
                uVar18 = (ulonglong)local_c4;
                if (local_c0 != (void *)0x0) {
                  memcpy((void *)(uVar18 + (longlong)pvVar23),local_c0,(ulonglong)local_c8);
                  uVar18 = (ulonglong)local_c4;
                }
              }
              else {
                memset(pvVar23,0,(ulonglong)local_c4);
                if (local_c0 != (void *)0x0) {
                  memset((void *)((ulonglong)local_c4 + (longlong)pvVar23),0,(ulonglong)local_c8);
                }
                uVar18 = (ulonglong)local_c4;
                *(int *)((longlong)param_1 + 0x28c) =
                     *(int *)((longlong)param_1 + 0x28c) - (local_c8 + local_c4);
              }
              uVar1 = local_c8;
              local_f8 = (uint *)CONCAT44(local_f8._4_4_,local_c8);
              (**(code **)(*plVar5 + 0x58))(plVar5,local_b8,uVar18,local_c0);
              lpCriticalSection = local_d8;
              puVar2[0xc] = (uVar11 + uVar1 + (int)uVar18) % (uint)local_d0;
              if ((*(int *)((longlong)param_1 + 0x184) == 1) && (0 < (int)uVar24)) {
                uVar18 = 0;
                do {
                  *(byte *)((longlong)pvVar23 + uVar18) =
                       *(byte *)((longlong)pvVar23 + uVar18) ^ 0x80;
                  uVar18 = uVar18 + 1;
                } while (uVar24 != uVar18);
              }
              if (*(char *)((longlong)param_1 + 0x149) == '\x01') {
                FUN_14954edf0(param_1,param_1[0x27],param_1[0x28],param_1 + 0x46);
              }
              goto LAB_14954e136;
            }
            uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
            uVar14 = FUN_144546232(iVar21);
            uVar13 = FUN_141302cc4(uVar13,uVar14);
            pcVar20 = ") locking capture buffer!";
          }
LAB_14954eba3:
          FUN_141302cc4(uVar13,pcVar20);
          FUN_1470ab43c(param_1 + 2,&local_a0);
          puVar2 = (uint *)(param_1 + 0x1e);
          if (puVar2 != &local_a0) {
            FUN_1401d9a90(puVar2);
            param_1[0x20] = local_90;
            param_1[0x21] = lStack_88;
            *puVar2 = local_a0;
            *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_9c;
            *(undefined4 *)(param_1 + 0x1f) = uStack_98;
            *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_94;
            local_90 = 0;
            lStack_88 = 0xf;
            local_a0 = local_a0 & 0xffffff00;
          }
          FUN_1401d9a90(&local_a0);
          lpCriticalSection = local_d8;
          goto LAB_14954e97d;
        }
      }
      else {
        *puVar2 = *puVar2 + 1;
      }
LAB_14954e136:
      LeaveCriticalSection(lpCriticalSection);
      param_1[0x4f] =
           (longlong)
           ((double)*(uint *)((longlong)param_1 + 0x154) / (double)*(uint *)(param_1 + 0x2a) +
           (double)param_1[0x4f]);
      goto LAB_14954e16c;
    }
    plVar5 = *(longlong **)(puVar2 + 6);
    if (1 < *puVar2) {
      iVar21 = *(int *)((longlong)param_1 + 0x15c);
      iVar8 = *(int *)((longlong)param_1 + 0x154);
      iVar9 = FUN_14954b0c6(param_1);
      memset((void *)param_1[0x26],0,(longlong)(iVar9 * iVar21 * iVar8));
    }
    if ((char)param_1[0x29] == '\x01') {
      pvVar23 = (void *)param_1[0x28];
      FUN_14954edf0(param_1,pvVar23,param_1[0x26],param_1 + 0x3d);
      lVar12 = 0x180;
      lVar17 = 0x164;
    }
    else {
      pvVar23 = (void *)param_1[0x26];
      lVar12 = 0x17c;
      lVar17 = 0x15c;
    }
    iVar21 = *(int *)((longlong)param_1 + lVar17);
    iVar8 = *(int *)((longlong)param_1 + 0x154);
    local_d8 = lpCriticalSection;
    iVar9 = FUN_14954b0c6(param_1,*(undefined4 *)((longlong)param_1 + lVar12));
    uVar11 = iVar9 * iVar21 * iVar8;
    if (((int)param_1[0x30] == 1) && (0 < (int)uVar11)) {
      uVar18 = 0;
      do {
        *(byte *)((longlong)pvVar23 + uVar18) = *(byte *)((longlong)pvVar23 + uVar18) ^ 0x80;
        uVar18 = uVar18 + 1;
      } while (uVar11 != uVar18);
    }
    uVar24 = puVar2[0xb];
    uVar1 = puVar2[0xd];
    local_d0 = plVar5;
    iVar21 = (**(code **)(*plVar5 + 0x20))(plVar5,&local_a4,&local_a8);
    if (-1 < iVar21) {
      uVar16 = uVar24 + uVar11;
      do {
        plVar5 = local_d0;
        uVar10 = puVar2[0xf] + local_a8;
        uVar15 = 0;
        if (uVar1 < uVar10) {
          uVar15 = uVar1;
        }
        uVar22 = 0;
        if (uVar10 - uVar15 < uVar24) {
          uVar22 = uVar1;
        }
        uVar22 = uVar22 + (uVar10 - uVar15);
        uVar15 = uVar16 - uVar22;
        if (uVar16 < uVar22 || uVar15 == 0) {
          uVar15 = 0;
          if (uVar1 < uVar24) {
            uVar15 = uVar1;
          }
          uVar22 = 0;
          if (local_a8 < local_a4) {
            uVar22 = uVar1;
          }
          uVar19 = 0;
          if (uVar24 - uVar15 < local_a4) {
            uVar19 = uVar1;
          }
          uVar19 = uVar19 + (uVar24 - uVar15);
          if ((uVar19 < local_a4) || (uVar22 + local_a8 <= uVar19)) {
            uVar15 = 0;
            if (uVar1 < uVar16) {
              uVar15 = uVar1;
            }
            uVar19 = 0;
            if (uVar16 - uVar15 < local_a4) {
              uVar19 = uVar1;
            }
            uVar19 = uVar19 + (uVar16 - uVar15);
            if ((local_a4 <= uVar19) && (uVar19 < uVar22 + local_a8)) goto LAB_14954e7e2;
          }
          else {
LAB_14954e7e2:
            uVar24 = 0;
            if (uVar1 <= uVar10 - uVar11) {
              uVar24 = uVar1;
            }
            *(undefined1 *)(puVar2 + 10) = 1;
            uVar24 = (uVar10 - uVar11) - uVar24;
            puVar2[0xb] = uVar24;
          }
          local_e8 = &local_c8;
          local_f0 = &local_c0;
          local_f8 = &local_c4;
          local_e0 = 0;
          iVar21 = (**(code **)(*local_d0 + 0x58))(local_d0,uVar24,uVar11,&local_b8);
          if (iVar21 < 0) {
            uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
            uVar14 = FUN_144546232(iVar21);
            uVar13 = FUN_141302cc4(uVar13,uVar14);
            pcVar20 = ") locking buffer during playback!";
            goto LAB_14954eba3;
          }
          memcpy(local_b8,pvVar23,(ulonglong)local_c4);
          if (local_c0 == (void *)0x0) {
            pvVar23 = (void *)0x0;
          }
          else {
            memcpy(local_c0,(void *)((longlong)pvVar23 + (ulonglong)local_c4),(ulonglong)local_c8);
            pvVar23 = local_c0;
          }
          local_f8 = (uint *)CONCAT44(local_f8._4_4_,local_c8);
          (**(code **)(*plVar5 + 0x98))(plVar5,local_b8,local_c4,pvVar23);
          puVar2[0xb] = (uVar24 + local_c4 + local_c8) % uVar1;
          lpCriticalSection = local_d8;
          goto LAB_14954e128;
        }
        iVar21 = FUN_14954b0c6(param_1,(int)param_1[0x30]);
        dVar6 = ((double)uVar15 * 1000.0) /
                (double)(uint)(iVar21 * *(int *)((longlong)param_1 + 0x164) * (int)param_1[0x2a]);
        dVar7 = 1.0;
        if (1.0 <= dVar6) {
          dVar7 = dVar6;
        }
        Sleep((DWORD)(longlong)dVar7);
        iVar21 = (**(code **)(*local_d0 + 0x20))(local_d0,&local_a4,&local_a8);
      } while (-1 < iVar21);
    }
    uVar13 = FUN_141302cc4(param_1 + 1,"RtApiDs::callbackEvent: error (");
    uVar14 = FUN_144546232(iVar21);
    uVar13 = FUN_141302cc4(uVar13,uVar14);
    FUN_141302cc4(uVar13,") getting current write position!");
    FUN_1470ab43c(param_1 + 2,&local_a0);
    lpCriticalSection = local_d8;
    puVar2 = (uint *)(param_1 + 0x1e);
    if (puVar2 != &local_a0) {
      FUN_1401d9a90(puVar2);
      param_1[0x20] = local_90;
      param_1[0x21] = lStack_88;
      *puVar2 = local_a0;
      *(undefined4 *)((longlong)param_1 + 0xf4) = uStack_9c;
      *(undefined4 *)(param_1 + 0x1f) = uStack_98;
      *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_94;
      local_90 = 0;
      lStack_88 = 0xf;
      local_a0 = local_a0 & 0xffffff00;
    }
    FUN_1401d9a90(&local_a0);
  }
LAB_14954e97d:
  LeaveCriticalSection(lpCriticalSection);
  FUN_14954ae26(param_1,9);
LAB_14954e16c:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14954edf0 FUN_14954edf0 body=4952 status=ok
// SIG undefined FUN_14954edf0(void)

void FUN_14954edf0(longlong param_1,void *param_2,longlong param_3,uint *param_4)

{
  short *psVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  if (((*(void **)(param_1 + 0x140) == param_2) && (*(int *)(param_1 + 0x128) == 2)) &&
     (*(uint *)(param_1 + 0x164) < *(uint *)(param_1 + 0x168))) {
    uVar9 = param_4[2];
    iVar12 = *(int *)(param_1 + 0x154);
    iVar10 = FUN_14954b0c6(param_1);
    memset(param_2,0,(ulonglong)(uVar9 * iVar12 * iVar10));
  }
  uVar9 = param_4[4];
  switch(uVar9) {
  case 1:
    uVar9 = param_4[3];
    if (uVar9 == 1) {
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 == 0) {
        return;
      }
      uVar13 = (ulonglong)*param_4;
      uVar11 = 0;
      lVar14 = param_3;
      do {
        if (0 < (int)uVar13) {
          lVar15 = 0;
          do {
            *(undefined1 *)
             ((longlong)param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar15 * 4)) =
                 *(undefined1 *)(lVar14 + *(int *)(*(longlong *)(param_4 + 6) + lVar15 * 4));
            lVar15 = lVar15 + 1;
            uVar13 = (ulonglong)(int)*param_4;
          } while (lVar15 < (longlong)uVar13);
          uVar9 = *(uint *)(param_1 + 0x154);
        }
        lVar14 = lVar14 + (int)param_4[1];
        param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
      uVar9 = param_4[3];
    }
    if ((int)uVar9 < 8) {
      if (uVar9 == 2) {
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(undefined1 *)
                 ((longlong)param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4))
                     = *(undefined1 *)
                        (param_3 + 1 +
                        (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 2;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
      else if ((uVar9 == 4) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined1 *)
               ((longlong)param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4)) =
                   *(undefined1 *)
                    (param_3 + 2 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 3;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    else if (uVar9 == 8) {
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined1 *)
               ((longlong)param_2 + (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4)) =
                   *(undefined1 *)
                    (param_3 + 3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 4;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    else if (uVar9 == 0x10) {
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(char *)((longlong)param_2 +
                       (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4)) =
                   (char)(int)(*(float *)(param_3 +
                                         (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4)
                                         * 4) * 127.5 + -0.5);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 4;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
      uVar13 = (ulonglong)*param_4;
      uVar11 = 0;
      do {
        if (0 < (int)uVar13) {
          lVar14 = 0;
          do {
            *(char *)((longlong)param_2 +
                     (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4)) =
                 (char)(int)(*(double *)
                              (param_3 +
                              (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8) *
                             127.5 + -0.5);
            lVar14 = lVar14 + 1;
            uVar13 = (ulonglong)(int)*param_4;
          } while (lVar14 < (longlong)uVar13);
          uVar9 = *(uint *)(param_1 + 0x154);
        }
        param_3 = param_3 + (longlong)(int)param_4[1] * 8;
        param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2]);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar9);
    }
    break;
  case 2:
    uVar9 = param_4[3];
    switch(uVar9) {
    case 1:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(short *)((longlong)param_2 +
                        (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                   (short)*(char *)(param_3 + *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4));
              psVar1 = (short *)((longlong)param_2 +
                                (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2);
              *psVar1 = *psVar1 << 8;
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (int)param_4[1];
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 2:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined2 *)
               ((longlong)param_2 +
               (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                   *(undefined2 *)
                    (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 2;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined2 *)
               ((longlong)param_2 +
               (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                   *(undefined2 *)
                    (param_3 + 1 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 3;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 8:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined2 *)
               ((longlong)param_2 +
               (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                   *(undefined2 *)
                    (param_3 + 2 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 4;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    default:
      if (uVar9 == 0x10) {
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(short *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                     (short)(int)(*(float *)(param_3 +
                                            (longlong)
                                            *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4) *
                                  32767.5 + -0.5);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 4;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
      else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(short *)((longlong)param_2 +
                        (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 2) =
                   (short)(int)(*(double *)
                                 (param_3 +
                                 (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8) *
                                32767.5 + -0.5);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 8;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 2);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    break;
  case 4:
    uVar9 = param_4[3];
    switch(uVar9) {
    case 1:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              uVar3 = *(undefined1 *)(param_3 + *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4));
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
              *(undefined2 *)((longlong)param_2 + lVar15) = 0;
              *(undefined1 *)((longlong)param_2 + lVar15 + 2) = uVar3;
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (int)param_4[1];
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 2:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              uVar5 = *(undefined2 *)
                       (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
              *(undefined1 *)((longlong)param_2 + lVar15) = 0;
              *(char *)((longlong)param_2 + lVar15 + 1) = (char)uVar5;
              *(char *)((longlong)param_2 + lVar15 + 2) = (char)((ushort)uVar5 >> 8);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 2;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3;
              lVar8 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
              *(undefined1 *)((longlong)param_2 + lVar8 + 2) = *(undefined1 *)(param_3 + 2 + lVar15)
              ;
              *(undefined2 *)((longlong)param_2 + lVar8) = *(undefined2 *)(param_3 + lVar15);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 3;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 8:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              uVar7 = *(undefined4 *)
                       (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4);
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
              *(char *)((longlong)param_2 + lVar15) = (char)((uint)uVar7 >> 8);
              *(char *)((longlong)param_2 + lVar15 + 1) = (char)((uint)uVar7 >> 0x10);
              *(char *)((longlong)param_2 + lVar15 + 2) = (char)((uint)uVar7 >> 0x18);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 4;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    default:
      if (uVar9 == 0x10) {
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                iVar12 = (int)(*(float *)(param_3 +
                                         (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4)
                                         * 4) * 8388607.5 + -0.5);
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
                *(char *)((longlong)param_2 + lVar15) = (char)iVar12;
                *(char *)((longlong)param_2 + lVar15 + 1) = (char)((uint)iVar12 >> 8);
                *(char *)((longlong)param_2 + lVar15 + 2) = (char)((uint)iVar12 >> 0x10);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 4;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
      else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              iVar12 = (int)(*(double *)
                              (param_3 +
                              (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8) *
                             8388607.5 + -0.5);
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 3;
              *(char *)((longlong)param_2 + lVar15) = (char)iVar12;
              *(char *)((longlong)param_2 + lVar15 + 1) = (char)((uint)iVar12 >> 8);
              *(char *)((longlong)param_2 + lVar15 + 2) = (char)((uint)iVar12 >> 0x10);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 8;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 3);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    break;
  case 8:
    uVar9 = param_4[3];
    switch(uVar9) {
    case 1:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(int *)((longlong)param_2 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                   (int)*(char *)(param_3 + *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4));
              piVar2 = (int *)((longlong)param_2 +
                              (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4);
              *piVar2 = *piVar2 << 0x18;
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (int)param_4[1];
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 2:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(int *)((longlong)param_2 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                   (int)*(short *)(param_3 +
                                  (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
              piVar2 = (int *)((longlong)param_2 +
                              (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4);
              *piVar2 = *piVar2 << 0x10;
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 2;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 3:
    case 5:
    case 6:
    case 7:
      break;
    case 4:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3;
              uVar6 = *(ushort *)(param_3 + lVar15);
              bVar4 = *(byte *)(param_3 + 2 + lVar15);
              uVar9 = ((uint)uVar6 + (uint)bVar4 * 0x10000) - 0x1000000;
              if (-1 < (char)bVar4) {
                uVar9 = (uint)CONCAT12(bVar4,uVar6);
              }
              *(uint *)((longlong)param_2 +
                       (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) = uVar9;
              piVar2 = (int *)((longlong)param_2 +
                              (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4);
              *piVar2 = *piVar2 << 8;
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 3;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    case 8:
      uVar9 = *(uint *)(param_1 + 0x154);
      if (uVar9 != 0) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(undefined4 *)
               ((longlong)param_2 +
               (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                   *(undefined4 *)
                    (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 4;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
      break;
    default:
      if (uVar9 == 0x10) {
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(int *)((longlong)param_2 +
                        (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (int)(*(float *)(param_3 +
                                     (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4
                                     ) * 2.1474836e+09 + -0.5);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 4;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
      else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
        uVar13 = (ulonglong)*param_4;
        uVar11 = 0;
        do {
          if (0 < (int)uVar13) {
            lVar14 = 0;
            do {
              *(int *)((longlong)param_2 +
                      (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                   (int)(*(double *)
                          (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8
                          ) * 2147483647.5 + -0.5);
              lVar14 = lVar14 + 1;
              uVar13 = (ulonglong)(int)*param_4;
            } while (lVar14 < (longlong)uVar13);
            uVar9 = *(uint *)(param_1 + 0x154);
          }
          param_3 = param_3 + (longlong)(int)param_4[1] * 8;
          param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar9);
      }
    }
    break;
  default:
    if (uVar9 == 0x10) {
      uVar9 = param_4[3];
      switch(uVar9) {
      case 1:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(float *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (float)(int)*(char *)(param_3 +
                                          *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4));
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) * 0.007843138;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (int)param_4[1];
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 2:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(float *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (float)(int)*(short *)(param_3 +
                                           (longlong)
                                           *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) * 3.0518044e-05;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 2;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3;
                uVar6 = *(ushort *)(param_3 + lVar15);
                bVar4 = *(byte *)(param_3 + 2 + lVar15);
                uVar9 = ((uint)uVar6 + (uint)bVar4 * 0x10000) - 0x1000000;
                if (-1 < (char)bVar4) {
                  uVar9 = (uint)CONCAT12(bVar4,uVar6);
                }
                *(float *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (float)(int)uVar9;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) * 1.192093e-07;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 3;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 8:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(float *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (float)*(int *)(param_3 +
                                    (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4)
                ;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(float *)((longlong)param_2 + lVar15 * 4) =
                     *(float *)((longlong)param_2 + lVar15 * 4) * 4.656613e-10;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 4;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      default:
        if (uVar9 == 0x10) {
          uVar9 = *(uint *)(param_1 + 0x154);
          if (uVar9 != 0) {
            uVar13 = (ulonglong)*param_4;
            uVar11 = 0;
            do {
              if (0 < (int)uVar13) {
                lVar14 = 0;
                do {
                  *(undefined4 *)
                   ((longlong)param_2 +
                   (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                       *(undefined4 *)
                        (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4);
                  lVar14 = lVar14 + 1;
                  uVar13 = (ulonglong)(int)*param_4;
                } while (lVar14 < (longlong)uVar13);
                uVar9 = *(uint *)(param_1 + 0x154);
              }
              param_3 = param_3 + (longlong)(int)param_4[1] * 4;
              param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
          }
        }
        else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(float *)((longlong)param_2 +
                          (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 4) =
                     (float)*(double *)
                             (param_3 +
                             (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 8;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 4);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
    }
    else if (uVar9 == 0x20) {
      uVar9 = param_4[3];
      switch(uVar9) {
      case 1:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(double *)
                 ((longlong)param_2 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                     (double)(int)*(char *)(param_3 +
                                           *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4));
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) * 0.00784313725490196;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (int)param_4[1];
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 2:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(double *)
                 ((longlong)param_2 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                     (double)(int)*(short *)(param_3 +
                                            (longlong)
                                            *(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 2);
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) * 3.0518043793392844e-05;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 2;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 3:
      case 5:
      case 6:
      case 7:
        break;
      case 4:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 3;
                uVar6 = *(ushort *)(param_3 + lVar15);
                bVar4 = *(byte *)(param_3 + 2 + lVar15);
                uVar9 = ((uint)uVar6 + (uint)bVar4 * 0x10000) - 0x1000000;
                if (-1 < (char)bVar4) {
                  uVar9 = (uint)CONCAT12(bVar4,uVar6);
                }
                *(double *)
                 ((longlong)param_2 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                     (double)(int)uVar9;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) * 1.1920929665620903e-07;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 3;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      case 8:
        uVar9 = *(uint *)(param_1 + 0x154);
        if (uVar9 != 0) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(double *)
                 ((longlong)param_2 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                     (double)*(int *)(param_3 +
                                     (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 4
                                     );
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) + 0.5;
                lVar15 = (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4);
                *(double *)((longlong)param_2 + lVar15 * 8) =
                     *(double *)((longlong)param_2 + lVar15 * 8) * 4.656612874161595e-10;
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 4;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
        break;
      default:
        if (uVar9 == 0x10) {
          uVar9 = *(uint *)(param_1 + 0x154);
          if (uVar9 != 0) {
            uVar13 = (ulonglong)*param_4;
            uVar11 = 0;
            do {
              if (0 < (int)uVar13) {
                lVar14 = 0;
                do {
                  *(double *)
                   ((longlong)param_2 +
                   (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                       (double)*(float *)(param_3 +
                                         (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4)
                                         * 4);
                  lVar14 = lVar14 + 1;
                  uVar13 = (ulonglong)(int)*param_4;
                } while (lVar14 < (longlong)uVar13);
                uVar9 = *(uint *)(param_1 + 0x154);
              }
              param_3 = param_3 + (longlong)(int)param_4[1] * 4;
              param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
              uVar11 = uVar11 + 1;
            } while (uVar11 < uVar9);
          }
        }
        else if ((uVar9 == 0x20) && (uVar9 = *(uint *)(param_1 + 0x154), uVar9 != 0)) {
          uVar13 = (ulonglong)*param_4;
          uVar11 = 0;
          do {
            if (0 < (int)uVar13) {
              lVar14 = 0;
              do {
                *(undefined8 *)
                 ((longlong)param_2 +
                 (longlong)*(int *)(*(longlong *)(param_4 + 0xc) + lVar14 * 4) * 8) =
                     *(undefined8 *)
                      (param_3 + (longlong)*(int *)(*(longlong *)(param_4 + 6) + lVar14 * 4) * 8);
                lVar14 = lVar14 + 1;
                uVar13 = (ulonglong)(int)*param_4;
              } while (lVar14 < (longlong)uVar13);
              uVar9 = *(uint *)(param_1 + 0x154);
            }
            param_3 = param_3 + (longlong)(int)param_4[1] * 8;
            param_2 = (void *)((longlong)param_2 + (longlong)(int)param_4[2] * 8);
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 149550148 FUN_149550148 body=354 status=ok
// SIG undefined FUN_149550148(void)

longlong * FUN_149550148(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_48 [8];
  char local_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_30 = param_1;
  FUN_141302e6c(local_48);
  local_38 = 0;
  if (local_40 != '\x01') goto LAB_149550263;
  lVar3 = (longlong)*(int *)(*local_30 + 4);
  lVar1 = *(longlong *)((longlong)local_30 + lVar3 + 0x28);
  lVar5 = 0;
  lVar4 = 0;
  if (1 < lVar1) {
    lVar4 = lVar1 + -1;
  }
  if ((*(uint *)((longlong)local_30 + lVar3 + 0x18) & 0x1c0) == 0x40) {
LAB_1495501b7:
    iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        ((longlong)local_30 + lVar3 + 0x48),param_2);
    lVar5 = (ulonglong)(iVar2 == -1) << 2;
  }
  else {
    for (; ((int)lVar5 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
      iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48),
                         *(char *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x58));
      lVar5 = (ulonglong)(iVar2 == -1) << 2;
    }
    if ((int)lVar5 == 0) {
      lVar3 = (longlong)*(int *)(*local_30 + 4);
      goto LAB_1495501b7;
    }
  }
  for (; (local_38 = lVar5, (int)lVar5 == 0 && (0 < lVar4)); lVar4 = lVar4 + -1) {
    iVar2 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x48),
                       *(char *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x58));
    lVar5 = (ulonglong)(iVar2 == -1) << 2;
  }
LAB_149550263:
  *(undefined8 *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x28) = 0;
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)local_30 + (longlong)*(int *)(*local_30 + 4)),
             (uint)local_38 |
             *(uint *)((longlong)local_30 + (longlong)*(int *)(*local_30 + 4) + 0x10),false);
  FUN_1495510b8(local_48);
  return local_30;
}



// FUNCTION 1495502aa Catch_All@1495502aa body=72 status=ok
// SIG undefined Catch_All@1495502aa(void)

undefined8 Catch_All_1495502aa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x38);
  std::basic_ios<char,std::char_traits<char>_>::clear
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4)),
             *(uint *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) | 4,true);
  *(undefined8 *)(param_2 + 0x30) = 0;
  return 0x149550263;
}



// FUNCTION 1495502f2 Unwind@1495502f2 body=36 status=ok
// SIG undefined Unwind@1495502f2(void)

void Unwind_1495502f2(undefined8 param_1,longlong param_2)

{
  FUN_1495510b8(param_2 + 0x20);
  return;
}



// FUNCTION 149550316 FUN_149550316 body=38 status=ok
// SIG undefined FUN_149550316(void)

undefined8 FUN_149550316(undefined8 param_1,int param_2)

{
  FUN_149551554();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149550342 FUN_149550342 body=38 status=ok
// SIG undefined FUN_149550342(void)

undefined8 FUN_149550342(undefined8 param_1,int param_2)

{
  FUN_14954b1da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14955036e FUN_14955036e body=213 status=ok
// SIG undefined FUN_14955036e(void)

void FUN_14955036e(longlong *param_1,void *param_2,undefined4 *param_3)

{
  longlong lVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  ulonglong uVar3;
  void *_Dst_00;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar3 = (param_1[1] - lVar1 >> 2) + 1;
  uVar2 = param_1[2] - lVar1 >> 2;
  uVar4 = (uVar2 >> 1) + uVar2;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar4 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_1495504ae(uVar4);
  *(undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  if ((void *)param_1[1] == param_2) {
    _Size = (longlong)param_2 - *param_1;
    _Dst_00 = _Dst;
    param_2 = (void *)*param_1;
  }
  else {
    _Dst_00 = (void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 4);
    memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FUN_149550444(param_1,_Dst,uVar3,uVar4);
  return;
}



// FUNCTION 149550444 FUN_149550444 body=104 status=ok
// SIG undefined FUN_149550444(void)

void FUN_149550444(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_2 + param_3 * 4;
  param_1[2] = param_2 + param_4 * 4;
  return;
}



// FUNCTION 1495504ae FUN_1495504ae body=76 status=ok
// SIG undefined FUN_1495504ae(void)

undefined8 FUN_1495504ae(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (param_1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x3ff < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 4);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 4,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1495504fc FUN_1495504fc body=82 status=ok
// SIG undefined FUN_1495504fc(void)

void FUN_1495504fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 149550550 FUN_149550550 body=119 status=ok
// SIG undefined FUN_149550550(void)

void FUN_149550550(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9a90(lVar1 + 0x18);
        lVar1 = lVar1 + 0x38;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1495505c8 FUN_1495505c8 body=42 status=ok
// SIG undefined FUN_1495505c8(void)

void FUN_1495505c8(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    FUN_1401d9a90(param_1 + 0x18);
  }
  return;
}



// FUNCTION 1495505f2 FUN_1495505f2 body=51 status=ok
// SIG undefined FUN_1495505f2(void)

void FUN_1495505f2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if ((0xfff < (ulonglong)(param_2 * 0x38)) &&
     (lVar1 = *(longlong *)(param_1 + -8), 0x1f < (ulonglong)((param_1 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 149550626 FUN_149550626 body=216 status=ok
// SIG undefined FUN_149550626(void)

void FUN_149550626(longlong *param_1,void *param_2,undefined4 *param_3)

{
  longlong lVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  ulonglong uVar3;
  void *_Dst_00;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar3 = (param_1[1] - lVar1 >> 2) + 1;
  uVar2 = param_1[2] - lVar1 >> 2;
  uVar4 = (uVar2 >> 1) + uVar2;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar4 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_148276ca6(param_1,uVar4);
  *(undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  if ((void *)param_1[1] == param_2) {
    _Size = (longlong)param_2 - *param_1;
    _Dst_00 = _Dst;
    param_2 = (void *)*param_1;
  }
  else {
    _Dst_00 = (void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 4);
    memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FUN_14827838a(param_1,_Dst,uVar3,uVar4);
  return;
}



// FUNCTION 1495506fe FUN_1495506fe body=216 status=ok
// SIG undefined FUN_1495506fe(void)

void FUN_1495506fe(longlong *param_1,void *param_2,undefined4 *param_3)

{
  longlong lVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t _Size;
  ulonglong uVar3;
  void *_Dst_00;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar3 = (param_1[1] - lVar1 >> 2) + 1;
  uVar2 = param_1[2] - lVar1 >> 2;
  uVar4 = (uVar2 >> 1) + uVar2;
  if (uVar4 <= uVar3) {
    uVar4 = uVar3;
  }
  if (0x3fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar4 = 0x3fffffffffffffff;
  }
  _Dst = (void *)FUN_148276ca6(param_1,uVar4);
  *(undefined4 *)((longlong)_Dst + ((longlong)param_2 - lVar1)) = *param_3;
  if ((void *)param_1[1] == param_2) {
    _Size = (longlong)param_2 - *param_1;
    _Dst_00 = _Dst;
    param_2 = (void *)*param_1;
  }
  else {
    _Dst_00 = (void *)((longlong)_Dst + ((longlong)param_2 - lVar1) + 4);
    memmove(_Dst,(void *)*param_1,(longlong)param_2 - *param_1);
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst_00,param_2,_Size);
  FUN_14827838a(param_1,_Dst,uVar3,uVar4);
  return;
}



// FUNCTION 1495507d6 FUN_1495507d6 body=463 status=ok
// SIG undefined FUN_1495507d6(void)

void FUN_1495507d6(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 uStack_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar8 < 0x81) {
LAB_14955080a:
    puVar4 = param_1 + 1;
    puVar6 = param_1;
    if (param_1 + 1 != param_2 && param_1 != param_2) {
      do {
        puVar3 = puVar4;
        uVar1 = puVar6[1];
        if (uVar1 < *param_1) {
          memmove((void *)((longlong)puVar6 + (8 - ((longlong)puVar3 - (longlong)param_1))),param_1,
                  (longlong)puVar3 - (longlong)param_1);
          puVar4 = param_1;
        }
        else {
          uVar5 = puVar3[-1];
          puVar4 = puVar3;
          while (uVar1 < uVar5) {
            *puVar4 = uVar5;
            puVar6 = puVar4 + -2;
            puVar4 = puVar4 + -1;
            uVar5 = *puVar6;
          }
        }
        *puVar4 = uVar1;
        puVar4 = puVar3 + 1;
        puVar6 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      puVar4 = param_2;
      do {
        FUN_1495509a6(&local_58,param_1,puVar4);
        puVar6 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        param_2 = (uint *)CONCAT44(uStack_54,local_58);
        if ((longlong)param_2 - (longlong)param_1 < (longlong)puVar4 - (longlong)local_50) {
          FUN_1495507d6(param_1,param_2,param_3);
          param_1 = puVar6;
          param_2 = puVar4;
        }
        else {
          FUN_1495507d6(local_50,puVar4,param_3);
        }
        uVar8 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar8 < 0x81) goto LAB_14955080a;
        puVar4 = param_2;
      } while (param_3 != 0);
    }
    uVar10 = uVar8 >> 3;
    do {
      uVar9 = uVar10 - 1;
      local_58 = param_1[uVar9];
      FUN_149550b22(param_1,uVar9,uVar8 >> 2,&local_58);
      bVar2 = 1 < uVar10;
      uVar10 = uVar9;
    } while (bVar2);
    lVar7 = (longlong)param_2 - (longlong)param_1;
    if (4 < lVar7) {
      do {
        param_2 = param_2 + -1;
        local_58 = *param_2;
        *param_2 = *param_1;
        lVar7 = lVar7 + -4;
        FUN_149550b22(param_1,0,lVar7 >> 2,&local_58);
      } while (4 < lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495509a6 FUN_1495509a6 body=380 status=ok
// SIG undefined FUN_1495509a6(void)

undefined8 * FUN_1495509a6(undefined8 *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = (longlong)param_3 - (longlong)param_2 >> 3;
  FUN_149550bae(param_2,param_2 + lVar9,param_3 + -1);
  puVar4 = param_2 + lVar9;
  do {
    puVar7 = puVar4;
    if (puVar7 <= param_2) break;
    puVar4 = puVar7 + -1;
  } while (*puVar7 == puVar7[-1]);
  puVar4 = param_2 + lVar9;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar4;
    puVar8 = puVar7;
    if (param_3 <= puVar4) break;
  } while (*puVar7 == *puVar4);
LAB_149550a0c:
  do {
    puVar2 = puVar7;
    if (puVar5 < param_3) {
      uVar6 = *puVar5;
      if (uVar6 <= *puVar7) {
        if (*puVar7 != uVar6) goto joined_r0x000149550a39;
        if (puVar5 != puVar4) {
          uVar1 = *puVar4;
          *puVar4 = uVar6;
          *puVar5 = uVar1;
        }
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 1;
      goto LAB_149550a0c;
    }
joined_r0x000149550a39:
    while (puVar3 = puVar8, param_2 < puVar3) {
      puVar8 = puVar3 + -1;
      uVar6 = puVar3[-1];
      if (*puVar2 <= uVar6) {
        if (*puVar2 < uVar6) break;
        puVar7 = puVar2 + -1;
        bVar10 = puVar3 != puVar2;
        puVar2 = puVar7;
        if (bVar10) {
          uVar1 = *puVar7;
          *puVar7 = uVar6;
          *puVar8 = uVar1;
        }
      }
    }
    if ((puVar5 == param_3) && (puVar3 == param_2)) {
      *param_1 = puVar2;
      param_1[1] = puVar4;
      return param_1;
    }
    if (puVar3 == param_2) {
      uVar6 = *puVar2;
      if (puVar4 != puVar5) {
        *puVar2 = *puVar4;
        *puVar4 = uVar6;
        uVar6 = *puVar2;
      }
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar5;
      *puVar5 = uVar6;
      puVar7 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      puVar8 = param_2;
    }
    else {
      puVar8 = puVar3 + -1;
      if (puVar5 == param_3) {
        puVar7 = puVar2 + -1;
        uVar6 = puVar2[-1];
        if (puVar3 != puVar2) {
          uVar6 = *puVar8;
          *puVar8 = puVar2[-1];
          *puVar7 = uVar6;
        }
        *puVar7 = puVar4[-1];
        puVar4[-1] = uVar6;
        puVar4 = puVar4 + -1;
      }
      else {
        uVar6 = *puVar5;
        *puVar5 = *puVar8;
        *puVar8 = uVar6;
        puVar5 = puVar5 + 1;
        puVar7 = puVar2;
      }
    }
  } while( true );
}



// FUNCTION 149550b22 FUN_149550b22 body=140 status=ok
// SIG undefined FUN_149550b22(void)

void FUN_149550b22(longlong param_1,longlong param_2,ulonglong param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar2 = param_2;
  while (lVar2 < lVar4) {
    if (*(uint *)(param_1 + 8 + lVar2 * 8) < *(uint *)(param_1 + 4 + lVar2 * 8)) {
      lVar3 = lVar2 * 2 + 1;
    }
    else {
      lVar3 = lVar2 * 2 + 2;
    }
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + lVar3 * 4);
    lVar2 = lVar3;
  }
  if (((param_3 & 1) == 0) && (lVar2 == lVar4)) {
    *(undefined4 *)(param_1 + lVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar2 = param_3 - 1;
  }
  while (param_2 < lVar2) {
    lVar4 = lVar2 + -1 >> 1;
    uVar1 = *(uint *)(param_1 + lVar4 * 4);
    if (*param_4 <= uVar1) break;
    *(uint *)(param_1 + lVar2 * 4) = uVar1;
    lVar2 = lVar4;
  }
  *(uint *)(param_1 + lVar2 * 4) = *param_4;
  return;
}



// FUNCTION 149550bae FUN_149550bae body=325 status=ok
// SIG undefined FUN_149550bae(void)

void FUN_149550bae(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  
  lVar2 = (longlong)param_3 - (longlong)param_1 >> 2;
  if (lVar2 < 0x29) {
    uVar4 = *param_2;
    if (uVar4 < *param_1) {
      *param_2 = *param_1;
      *param_1 = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      *param_2 = uVar1;
      if (uVar1 < *param_1) {
        *param_2 = *param_1;
        *param_1 = uVar1;
      }
    }
  }
  else {
    uVar3 = lVar2 + 1U >> 3;
    uVar4 = param_1[uVar3];
    if (uVar4 < *param_1) {
      param_1[uVar3] = *param_1;
      *param_1 = uVar4;
      uVar4 = param_1[uVar3];
    }
    uVar1 = param_1[uVar3 * 2];
    if (uVar1 < uVar4) {
      param_1[uVar3 * 2] = uVar4;
      param_1[uVar3] = uVar1;
      if (uVar1 < *param_1) {
        param_1[uVar3] = *param_1;
        *param_1 = uVar1;
      }
    }
    uVar4 = *param_2;
    if (uVar4 < param_2[-uVar3]) {
      *param_2 = param_2[-uVar3];
      param_2[-uVar3] = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = param_2[uVar3];
    if (uVar1 < uVar4) {
      param_2[uVar3] = uVar4;
      *param_2 = uVar1;
      if (uVar1 < param_2[-uVar3]) {
        *param_2 = param_2[-uVar3];
        param_2[-uVar3] = uVar1;
      }
    }
    uVar4 = param_3[-uVar3];
    if (uVar4 < param_3[uVar3 * -2]) {
      param_3[-uVar3] = param_3[uVar3 * -2];
      param_3[uVar3 * -2] = uVar4;
      uVar4 = param_3[-uVar3];
    }
    uVar1 = *param_3;
    if (uVar1 < uVar4) {
      *param_3 = uVar4;
      param_3[-uVar3] = uVar1;
      if (uVar1 < param_3[uVar3 * -2]) {
        param_3[-uVar3] = param_3[uVar3 * -2];
        param_3[uVar3 * -2] = uVar1;
      }
    }
    uVar4 = *param_2;
    if (uVar4 < param_1[uVar3]) {
      *param_2 = param_1[uVar3];
      param_1[uVar3] = uVar4;
      uVar4 = *param_2;
    }
    uVar1 = param_3[-uVar3];
    if (uVar1 < uVar4) {
      param_3[-uVar3] = uVar4;
      *param_2 = uVar1;
      if (uVar1 < param_1[uVar3]) {
        *param_2 = param_1[uVar3];
        param_1[uVar3] = uVar1;
      }
    }
  }
  return;
}



// FUNCTION 149550cf4 FUN_149550cf4 body=104 status=ok
// SIG undefined FUN_149550cf4(void)

void FUN_149550cf4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != *(undefined8 **)(param_1 + 0x10)) {
    *(undefined4 *)((longlong)puVar1 + 0xf) = *(undefined4 *)((longlong)param_2 + 0xf);
    uVar2 = param_2[1];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    if ((ulonglong)param_2[6] < 0x10) {
      puVar3 = param_2 + 3;
    }
    else {
      puVar3 = (undefined8 *)param_2[3];
    }
    FUN_1401d9f72(puVar1 + 3,puVar3,param_2[5]);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x38;
    return;
  }
  FUN_149550d5c(param_1,puVar1,param_2);
  return;
}



// FUNCTION 149550d5c FUN_149550d5c body=575 status=ok
// SIG undefined FUN_149550d5c(void)

longlong FUN_149550d5c(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar3 = *param_1;
  uVar13 = (param_1[1] - lVar3 >> 3) * 0x6db6db6db6db6db7 + 1;
  uVar12 = (param_1[2] - lVar3 >> 3) * 0x6db6db6db6db6db7;
  uVar14 = 0x492492492492492 - (uVar12 >> 1);
  uVar8 = (uVar12 >> 1) + uVar12;
  if (uVar8 <= uVar13) {
    uVar8 = uVar13;
  }
  if (uVar14 <= uVar12 && uVar12 - uVar14 != 0) {
    uVar8 = 0x492492492492492;
  }
  lVar7 = FUN_14955106c();
  uVar4 = param_3[1];
  puVar1 = (undefined8 *)((longlong)param_2 + (lVar7 - lVar3));
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0xf) = *(undefined4 *)((longlong)param_3 + 0xf);
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  if ((ulonglong)param_3[6] < 0x10) {
    puVar11 = param_3 + 3;
  }
  else {
    puVar11 = (undefined8 *)param_3[3];
  }
  lVar9 = lVar7 - lVar3;
  FUN_1401d9f72(puVar1 + 3,puVar11,param_3[5]);
  puVar1 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 == param_2) {
    if (puVar1 != param_2) {
      lVar9 = 0;
      do {
        puVar11 = (undefined8 *)((longlong)puVar1 + lVar9);
        *(undefined4 *)(lVar7 + 0xf + lVar9) = *(undefined4 *)((longlong)puVar11 + 0xf);
        uVar4 = puVar11[1];
        *(undefined8 *)(lVar7 + lVar9) = *puVar11;
        ((undefined8 *)(lVar7 + lVar9))[1] = uVar4;
        puVar2 = (undefined8 *)(lVar7 + 0x28 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar9);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar6 = puVar11[6];
        puVar2 = (undefined8 *)(lVar7 + 0x28 + lVar9);
        *puVar2 = puVar11[5];
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar9);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar11[5] = 0;
        puVar11[6] = 0xf;
        *(undefined1 *)(puVar11 + 3) = 0;
        lVar9 = lVar9 + 0x38;
      } while (puVar11 + 7 != param_2);
    }
  }
  else {
    if (puVar1 != param_2) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)((longlong)puVar1 + lVar10);
        *(undefined4 *)(lVar7 + 0xf + lVar10) = *(undefined4 *)((longlong)puVar11 + 0xf);
        uVar4 = puVar11[1];
        *(undefined8 *)(lVar7 + lVar10) = *puVar11;
        ((undefined8 *)(lVar7 + lVar10))[1] = uVar4;
        puVar2 = (undefined8 *)(lVar7 + 0x28 + lVar10);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar10);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar4 = puVar11[3];
        uVar5 = puVar11[4];
        uVar6 = puVar11[6];
        puVar2 = (undefined8 *)(lVar7 + 0x28 + lVar10);
        *puVar2 = puVar11[5];
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)(lVar7 + 0x18 + lVar10);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar11[5] = 0;
        puVar11[6] = 0xf;
        *(undefined1 *)(puVar11 + 3) = 0;
        lVar10 = lVar10 + 0x38;
      } while (puVar11 + 7 != param_2);
      puVar11 = (undefined8 *)param_1[1];
    }
    if (puVar11 != param_2) {
      lVar10 = 0;
      do {
        puVar1 = (undefined8 *)((longlong)param_2 + lVar10);
        *(undefined4 *)((longlong)param_2 + lVar10 + lVar9 + 0x47) =
             *(undefined4 *)((longlong)puVar1 + 0xf);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x38);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x60);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x50);
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar4 = puVar1[3];
        uVar5 = puVar1[4];
        uVar6 = puVar1[6];
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x60);
        *puVar2 = puVar1[5];
        puVar2[1] = uVar6;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x50);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar1[5] = 0;
        puVar1[6] = 0xf;
        *(undefined1 *)(puVar1 + 3) = 0;
        lVar10 = lVar10 + 0x38;
      } while (puVar1 + 7 != puVar11);
    }
  }
  FUN_149550fd4(param_1,lVar7,uVar13,uVar8);
  return (longlong)param_2 + (lVar7 - lVar3);
}



// FUNCTION 149550f9c Catch_All@149550f9c body=55 status=ok
// SIG undefined Catch_All@149550f9c(void)

void Catch_All_149550f9c(undefined8 param_1,longlong param_2)

{
  FUN_1495505c8(*(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x38));
  FUN_1495505f2();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}



// FUNCTION 149550fd4 FUN_149550fd4 body=151 status=ok
// SIG undefined FUN_149550fd4(void)

void FUN_149550fd4(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar2 = param_1[1];
    if (lVar1 != lVar2) {
      do {
        FUN_1401d9a90(lVar1 + 0x18);
        lVar1 = lVar1 + 0x38;
      } while (lVar1 != lVar2);
      lVar1 = *param_1;
    }
    lVar2 = lVar1;
    if ((0xfff < (ulonglong)(param_1[2] - lVar1)) &&
       (lVar2 = *(longlong *)(lVar1 + -8), 0x1f < (ulonglong)((lVar1 + -8) - lVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8(lVar2);
  }
  *param_1 = param_2;
  param_1[1] = param_3 * 0x38 + param_2;
  param_1[2] = param_4 * 0x38 + param_2;
  return;
}



// FUNCTION 14955106c FUN_14955106c body=75 status=ok
// SIG undefined FUN_14955106c(void)

undefined8 FUN_14955106c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (0x492492492492492 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (0x49 < param_1) {
    uVar1 = FUN_140c1ca1d(param_1 * 0x38);
    return uVar1;
  }
  if (param_1 != 0) {
    uVar1 = FUN_14001cc68(param_1 * 0x38,0x10);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1495510b8 FUN_1495510b8 body=74 status=ok
// SIG undefined FUN_1495510b8(void)

void FUN_1495510b8(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = std::uncaught_exceptions();
  if (iVar2 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  plVar1 = *(longlong **)(*param_1 + (longlong)*(int *)(*(longlong *)*param_1 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return;
}



// FUNCTION 149551102 Unwind@149551102 body=20 status=ok
// SIG undefined Unwind@149551102(void)

void Unwind_149551102(void)

{
                    /* WARNING: Subroutine does not return */
  Unwind_14992cdf0();
}



// FUNCTION 149551118 FUN_149551118 body=109 status=ok
// SIG undefined FUN_149551118(void)

longlong FUN_149551118(longlong param_1,char *param_2)

{
  size_t sVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (param_2 == (char *)0x0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else {
    lVar2 = param_1;
    sVar1 = strlen(param_2);
    FUN_1446e6fe8(param_1,param_2,sVar1 & 0xffffffff,1,lVar2,uVar3);
    param_1 = lVar2;
  }
  return param_1;
}



// FUNCTION 149551186 Unwind@149551186 body=46 status=ok
// SIG undefined Unwind@149551186(void)

void Unwind_149551186(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x100) != 0) {
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1495511b4 FUN_1495511b4 body=38 status=ok
// SIG undefined FUN_1495511b4(void)

void FUN_1495511b4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14954a8da(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1495511da FUN_1495511da body=48 status=ok
// SIG undefined FUN_1495511da(void)

void FUN_1495511da(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14955120a FUN_14955120a body=74 status=ok
// SIG undefined FUN_14955120a(void)

void FUN_14955120a(longlong param_1,longlong param_2)

{
  FUN_14698a6cc();
  FUN_14698a6cc(param_1 + 0x10,param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  return;
}



// FUNCTION 149551254 Unwind@149551254 body=42 status=ok
// SIG undefined Unwind@149551254(void)

void Unwind_149551254(undefined8 param_1,longlong param_2)

{
  if (**(longlong **)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  return;
}


