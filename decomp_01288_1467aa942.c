// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1467aa942 FUN_1467aa942 body=129 status=ok
// SIG undefined FUN_1467aa942(void)

longlong * FUN_1467aa942(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)*param_1;
  lVar5 = *param_2;
  *param_2 = 0;
  *param_1 = lVar5;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 3;
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar5 & 0x3fffffff) == 1) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      plVar4[1] = 0;
      plVar4[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar4 + 3);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar3 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar4)(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1467aa9c4 FUN_1467aa9c4 body=118 status=ok
// SIG undefined FUN_1467aa9c4(void)

longlong FUN_1467aa9c4(undefined8 param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                      longlong param_5,undefined8 param_6,ulonglong param_7,ulonglong param_8)

{
  ulonglong uVar1;
  
  if (((*(char *)(param_5 + 8) == '\0') &&
      (uVar1 = *(ulonglong *)(param_5 + 0x10), param_8 <= uVar1 - param_7 && param_7 <= uVar1)) &&
     (*(longlong *)(param_5 + 0x18) == uVar1 + 0x40)) {
    (**(code **)(*param_4 + 0x18))(param_4,param_2,param_7 + 0x40,param_8);
    return param_2;
  }
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0x100000000;
  return param_2;
}



// FUNCTION 1467aaa3a FUN_1467aaa3a body=71 status=ok
// SIG undefined FUN_1467aaa3a(void)

undefined8 FUN_1467aaa3a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((ulonglong)param_3[1] < 0x80000000) {
    uVar3 = 0x7e000000;
    if ((ulonglong)param_2[1] < 0x7e000000) {
      uVar3 = param_2[1];
    }
    iVar1 = FUN_1467a9288(*param_3,*param_2,param_3[1],uVar3);
    uVar2 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),param_2[1] == (longlong)iVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1467aaa96 FUN_1467aaa96 body=89 status=ok
// SIG undefined FUN_1467aaa96(void)

bool FUN_1467aaa96(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_1467ac1a1(*param_2,param_2[1],*param_3,param_3[1],*(undefined1 *)(param_1 + 8),
                        *(undefined1 *)(param_1 + 9),0,0);
  uVar2 = param_2[1];
  if (uVar1 <= (ulonglong)param_2[1]) {
    uVar2 = uVar1;
  }
  param_2[1] = uVar2;
  return 0 < (longlong)uVar1;
}



// FUNCTION 1467aaaf0 FUN_1467aaaf0 body=117 status=ok
// SIG undefined FUN_1467aaaf0(void)

undefined8 * FUN_1467aaaf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (undefined8 *)param_1[1];
    if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
      puVar1 = param_1;
    }
    FUN_1458cf656(puVar1,*(undefined4 *)(param_1 + 2));
    if (param_2[1] == 0) {
      *param_1 = *param_2;
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0x100000000;
  }
  return param_1;
}



// FUNCTION 1467aab66 FUN_1467aab66 body=226 status=ok
// SIG undefined FUN_1467aab66(void)

longlong FUN_1467aab66(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x100000000;
  iVar4 = *(int *)(param_3 + 0x10);
  if (iVar4 < -1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 + 1);
  }
  if (iVar4 < 1) {
    iVar4 = 0;
    uVar2 = 1;
  }
  else {
    FUN_1467aad6e(param_1);
    iVar4 = *(int *)(param_1 + 0x10);
    uVar2 = *(uint *)(param_1 + 0x14);
  }
  *(uint *)(param_1 + 0x10) = iVar4 + 1U;
  if (uVar2 < iVar4 + 1U) {
    FUN_1467aae4a(param_1,iVar4);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar3 = param_1;
  }
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(lVar3 + (longlong)iVar4 * 8) = uVar1;
  FUN_1467aaece(param_1,param_3);
  local_30 = &LAB_1467aad66;
  FUN_1467aac4a(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467aac4a FUN_1467aac4a body=283 status=ok
// SIG undefined FUN_1467aac4a(void)

int FUN_1467aac4a(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar5 = *(int *)(param_1 + 0x10);
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = param_1;
    }
    bVar1 = (*(code *)*param_2)(lVar10);
    iVar4 = 0;
    iVar7 = 0;
    do {
      lVar11 = (longlong)iVar7;
      iVar12 = iVar7 + 1;
      if (iVar7 + 1 < iVar5) {
        iVar12 = iVar5;
      }
      lVar13 = lVar10 + 8 + lVar11 * 8;
      iVar8 = iVar7;
      lVar3 = lVar11;
      do {
        lVar3 = lVar3 + 1;
        iVar9 = iVar12;
        if (lVar6 <= lVar3) break;
        bVar2 = (*(code *)*param_2)(lVar13);
        iVar8 = iVar8 + 1;
        lVar13 = lVar13 + 8;
        iVar9 = iVar8;
      } while ((bVar1 & 1) == bVar2);
      iVar12 = iVar9 - iVar7;
      if ((bVar1 & 1) == 0) {
        if (iVar4 != iVar7) {
          memmove((void *)(lVar10 + (longlong)iVar4 * 8),(void *)(lVar10 + lVar11 * 8),
                  (longlong)iVar12 << 3);
        }
        iVar4 = iVar4 + iVar12;
      }
      else {
        FUN_1458cf656(lVar10 + lVar11 * 8,iVar12);
      }
      iVar7 = iVar9;
      bVar1 = bVar1 ^ 1;
    } while (lVar3 < lVar6);
    *(int *)(param_1 + 0x10) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1467aad6e FUN_1467aad6e body=85 status=ok
// SIG undefined FUN_1467aad6e(void)

void FUN_1467aad6e(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_1467aadc4(param_1,*(undefined4 *)(param_1 + 0x10),uVar3,8);
  return;
}



// FUNCTION 1467aadc4 FUN_1467aadc4 body=133 status=ok
// SIG undefined FUN_1467aadc4(void)

void FUN_1467aadc4(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,param_4);
  return;
}



// FUNCTION 1467aae4a FUN_1467aae4a body=130 status=ok
// SIG undefined FUN_1467aae4a(void)

void FUN_1467aae4a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x14) = (int)uVar5;
    FUN_1467aadc4(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467aaece FUN_1467aaece body=113 status=ok
// SIG undefined FUN_1467aaece(void)

void FUN_1467aaece(longlong param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  uVar1 = *(uint *)((longlong)param_2 + 0x10);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar2) < uVar1) {
      FUN_1467aae4a(param_1,iVar2);
    }
    _Src = *(void **)((longlong)param_2 + 8);
    if (*(void **)((longlong)param_2 + 8) == (void *)0x0) {
      _Src = param_2;
    }
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 8),_Src,(longlong)(int)uVar1 << 3);
    *(undefined4 *)((longlong)param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1467aaf44 FUN_1467aaf44 body=338 status=ok
// SIG undefined FUN_1467aaf44(void)

undefined8 * FUN_1467aaf44(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined1 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e03604(&local_40,param_4);
  FUN_1467a81dc(&local_40,&local_50);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x1a0))
            (*(longlong **)(param_1 + 8),param_3 + *(longlong *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),local_50,local_48)
  ;
  plVar5 = local_40;
  if ((*(byte *)(*(longlong *)(param_1 + 8) + 0x29) & 2) == 0) {
    local_40 = (longlong *)0x0;
    param_2[1] = 0;
    param_2[2] = &DAT_100000001;
    *param_2 = plVar5;
    local_38 = &LAB_1467aad66;
    FUN_1467aac4a(param_2);
  }
  else {
    param_2[1] = 0;
    param_2[2] = 0x100000000;
  }
  plVar5 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 3;
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*local_40 + 0x10))(local_40);
      plVar5[1] = 0;
      plVar5[2] = 0;
      LOCK();
      puVar2 = (ulonglong *)(plVar5 + 3);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if ((uVar4 & 0xfffffffc0000000) == 0x40000000) {
        (**(code **)*plVar5)(plVar5,1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ab09c FUN_1467ab09c body=122 status=ok
// SIG undefined FUN_1467ab09c(void)

bool FUN_1467ab09c(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_3 + 2);
  uVar2 = FUN_1467fdf84(*(undefined8 *)(param_1 + 8));
  if ((ulonglong)(lVar1 + param_2) <= uVar2) {
    local_48 = *param_3;
    uStack_44 = param_3[1];
    uStack_40 = param_3[2];
    uStack_3c = param_3[3];
    FUN_1467fe5c0(*(undefined8 *)(param_1 + 8),&local_48,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)(lVar1 + param_2) <= uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ab118 FUN_1467ab118 body=112 status=ok
// SIG undefined FUN_1467ab118(void)

undefined8
FUN_1467ab118(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  code **local_30;
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_30 = &local_20;
  local_20 = FUN_1467ab1e8;
  local_38 = param_5 + 0x28;
  FUN_1467fe52c(*(undefined8 *)(param_1 + 8),param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ab18a FUN_1467ab18a body=92 status=ok
// SIG undefined FUN_1467ab18a(void)

undefined8 FUN_1467ab18a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1467fe26a(*(undefined8 *)(param_1 + 8),local_30);
  FUN_1467fe062(local_30,param_2);
  FUN_1458cf622(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ab1e8 FUN_1467ab1e8 body=81 status=ok
// SIG undefined FUN_1467ab1e8(void)

undefined8 FUN_1467ab1e8(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  
  uVar2 = (*param_3 + (ulonglong)(*param_3 == 0)) - 1;
  if (uVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar4 = (byte)lVar1 ^ 0x3f;
  }
  uVar3 = 1L << (-bVar4 & 0x3f);
  uVar2 = 0x40000;
  if (0x40000 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_140e03604(param_1,uVar2);
  return param_1;
}



// FUNCTION 1467ab23a FUN_1467ab23a body=132 status=ok
// SIG undefined FUN_1467ab23a(void)

void FUN_1467ab23a(longlong param_1,int param_2)

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



// FUNCTION 1467ab2c0 FUN_1467ab2c0 body=60 status=ok
// SIG undefined FUN_1467ab2c0(void)

void FUN_1467ab2c0(void)

{
  if (DAT_14c82b3ec != 0) {
    DAT_14c82b3ec = 0;
    if (DAT_14c82b3e0 != 0) {
      DAT_14c82b3e0 = FUN_14001fdce(DAT_14c82b3e0,0,0x40);
    }
  }
  return;
}



// FUNCTION 1467ab2fc FUN_1467ab2fc body=89 status=ok
// SIG undefined FUN_1467ab2fc(void)

void FUN_1467ab2fc(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x40 + *param_1);
  FUN_140f1461e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar2 << 6);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467ab356 FUN_1467ab356 body=48 status=ok
// SIG undefined FUN_1467ab356(void)

void FUN_1467ab356(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467ab386(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    return;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  FUN_145a0761a(param_1,iVar1);
  return;
}



// FUNCTION 1467ab386 FUN_1467ab386 body=93 status=ok
// SIG undefined FUN_1467ab386(void)

ulonglong FUN_1467ab386(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x40);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 1467ab3e4 FUN_1467ab3e4 body=121 status=ok
// SIG undefined FUN_1467ab3e4(void)

void FUN_1467ab3e4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  longlong lVar3;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0580,0x80);
    iVar5 = (int)(uVar4 / 0xa0580);
    if (iVar5 < (int)uVar1) {
      iVar5 = 0x7fffffff;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_145a074e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1467ab45e FUN_1467ab45e body=51 status=ok
// SIG undefined FUN_1467ab45e(void)

void FUN_1467ab45e(longlong *param_1)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    if (*param_1 != 0) {
      lVar1 = FUN_14001fdce(*param_1,0,0x40);
      *param_1 = lVar1;
    }
  }
  return;
}



// FUNCTION 1467ab492 FUN_1467ab492 body=113 status=ok
// SIG undefined FUN_1467ab492(void)

void FUN_1467ab492(undefined8 *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DAT_14c82b9b8 == 0;
  if (bVar2) {
    DAT_14c82b9b8 = 1;
  }
  UNLOCK();
  if (!bVar2) {
    FUN_1400c0ca8(&DAT_14c82b9b8);
  }
  *param_1 = DAT_14c82b9b0;
  uVar1 = DAT_14c82b9b8;
  DAT_14c82b9b0 = param_1;
  LOCK();
  DAT_14c82b9b8 = DAT_14c82b9b8 - 1;
  UNLOCK();
  if ((char)(((uint)uVar1 & 2) >> 1) != '\0' || uVar1 < 4) {
    return;
  }
  FUN_1400c0e08(&DAT_14c82b9b8);
  return;
}



// FUNCTION 1467ab504 FUN_1467ab504 body=93 status=ok
// SIG undefined FUN_1467ab504(void)

void FUN_1467ab504(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1456cb466();
  return;
}



// FUNCTION 1467ab562 FUN_1467ab562 body=98 status=ok
// SIG undefined FUN_1467ab562(void)

void FUN_1467ab562(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    uVar2 = 0x80;
    if (0x80 < uVar1) {
      uVar3 = uVar1;
      if (0x80 < *(uint *)(param_1 + 0x40c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0x40c) = uVar2;
    FUN_1467ab5c6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467ab5c6 FUN_1467ab5c6 body=144 status=ok
// SIG undefined FUN_1467ab5c6(void)

void FUN_1467ab5c6(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x81) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1456cb466((longlong)param_1 + 0x400,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1456cb466((longlong)param_1 + 0x400,param_2,param_3,8);
  return;
}



// FUNCTION 1467ab66c FUN_1467ab66c body=93 status=ok
// SIG undefined FUN_1467ab66c(void)

void FUN_1467ab66c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e00260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1467ab6ca FUN_1467ab6ca body=126 status=ok
// SIG undefined FUN_1467ab6ca(void)

void FUN_1467ab6ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e00260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467ab739. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467ab752 FUN_1467ab752 body=20 status=ok
// SIG undefined FUN_1467ab752(void)

undefined8 FUN_1467ab752(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1467ab768 FUN_1467ab768 body=95 status=ok
// SIG undefined FUN_1467ab768(void)

void FUN_1467ab768(longlong param_1,uint param_2)

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



// FUNCTION 1467ab7c8 FUN_1467ab7c8 body=132 status=ok
// SIG undefined FUN_1467ab7c8(void)

void FUN_1467ab7c8(longlong param_1,int param_2)

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



// FUNCTION 1467ab84e FUN_1467ab84e body=1 status=ok
// SIG undefined FUN_1467ab84e(void)

void FUN_1467ab84e(void)

{
  return;
}



// FUNCTION 1467ab850 FUN_1467ab850 body=29 status=ok
// SIG undefined FUN_1467ab850(void)

undefined8 FUN_1467ab850(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ab86e FUN_1467ab86e body=212 status=ok
// SIG undefined FUN_1467ab86e(void)

undefined8 * FUN_1467ab86e(void)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar3 = (undefined8 *)FUN_144a23e24(&DAT_14c896140);
  puVar5 = (undefined8 *)puVar3[1];
  if (puVar5 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 2) + -1;
    goto LAB_1467ab891;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_1467ab915:
      puVar5 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar3[1] = puVar5;
      iVar1 = 0xff;
      puVar6 = puVar5;
      do {
        puVar4 = puVar6 + 0x20;
        *puVar6 = puVar4;
        iVar1 = iVar1 + -1;
        puVar6 = puVar4;
      } while (iVar1 != 0);
      goto LAB_1467ab8b4;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1467ab915;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_1467ab8b4:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_1467ab891:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 1467ab942 FUN_1467ab942 body=227 status=ok
// SIG undefined FUN_1467ab942(void)

undefined8 * FUN_1467ab942(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  param_1[1] = &DAT_100000002;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0x100000000;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0xe800000000000020;
  param_1[0x12] = 0;
  param_1[0x13] = 0x100000000;
  *(undefined2 *)(param_1 + 0x14) = 0;
  FUN_145747f22(param_1 + 8);
  *param_1 = &PTR_FUN_149e00148;
  FUN_144a24082(param_1,L"Runtime\\Core\\Public\\Tasks/Task.h(505)",1,1,0);
  param_1[0x15] = *param_2;
  lVar1 = param_2[1];
  param_1[0x16] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



// FUNCTION 1467aba26 FUN_1467aba26 body=40 status=ok
// SIG undefined FUN_1467aba26(void)

undefined8 FUN_1467aba26(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1467abade(param_1);
  }
  return param_1;
}



// FUNCTION 1467aba4e FUN_1467aba4e body=105 status=ok
// SIG undefined FUN_1467aba4e(void)

void FUN_1467aba4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  longlong *plVar5;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 4) = *(undefined4 *)(param_1 + 0xb8);
  pbVar4 = *(byte **)(param_1 + 0xa8);
  LOCK();
  bVar3 = *pbVar4;
  *pbVar4 = 1;
  UNLOCK();
  if ((bVar3 & 3) == 2) {
    FUN_1447458da(pbVar4,0xffffffff);
  }
  plVar5 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x0001467abaac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1467abab8 FUN_1467abab8 body=38 status=ok
// SIG undefined FUN_1467abab8(void)

undefined8 FUN_1467abab8(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467abade FUN_1467abade body=145 status=ok
// SIG undefined FUN_1467abade(void)

void FUN_1467abade(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_144a23e24();
  if ((int)plVar2[2] < 0x100) {
    lVar3 = plVar2[1];
  }
  else {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      uVar1 = FUN_14493c560();
      if (uVar1 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = (ulonglong)((uVar1 & 0x3fff) * 0x18) +
                *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar1 >> 0xe) * 8);
      }
      *(longlong *)(lVar4 + 8) = lVar3;
      FUN_144a8fde6(&DAT_14c896180,uVar1);
    }
    *plVar2 = plVar2[1];
    *(undefined4 *)(plVar2 + 2) = 0;
    lVar3 = 0;
  }
  *param_1 = lVar3;
  plVar2[1] = (longlong)param_1;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  return;
}



// FUNCTION 1467abb70 FUN_1467abb70 body=97 status=ok
// SIG undefined FUN_1467abb70(void)

void FUN_1467abb70(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar3 + 1U) {
    FUN_1467aae4a(param_1,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *param_2;
  if (lVar5 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(lVar5 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar5 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  if (lVar4 != 0) {
    param_1 = lVar4;
  }
  *(longlong *)(param_1 + (longlong)iVar3 * 8) = lVar5;
  return;
}



// FUNCTION 1467abbd2 FUN_1467abbd2 body=141 status=ok
// SIG undefined FUN_1467abbd2(void)

void FUN_1467abbd2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 2,4);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,4,4);
  return;
}



// FUNCTION 1467abc60 FUN_1467abc60 body=67 status=ok
// SIG undefined FUN_1467abc60(void)

void FUN_1467abc60(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1467abca4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,4,4);
  }
  return;
}



// FUNCTION 1467abca4 FUN_1467abca4 body=94 status=ok
// SIG undefined FUN_1467abca4(void)

ulonglong FUN_1467abca4(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (((((param_2 - param_1 & 0x3ffffffffffff000) != 0) ||
       ((longlong)(param_1 * 3) < (longlong)(param_2 * 2))) &&
      (param_1 == 0 || 0x40 < (longlong)(param_2 - param_1))) &&
     (param_2 = param_1, 0 < (longlong)param_1)) {
    uVar1 = FUN_144a3809e(param_1 << 2,4);
    param_2 = uVar1 >> 2;
  }
  return param_2;
}



// FUNCTION 1467abd02 FUN_1467abd02 body=119 status=ok
// SIG undefined FUN_1467abd02(void)

int FUN_1467abd02(int param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar2 = FUN_1447e0190();
  iVar4 = 0;
  if ((1 < param_1 && cVar2 == '\x01') && (iVar4 = param_1, DAT_14c8335d8 < param_1)) {
    iVar4 = DAT_14c8335d8;
  }
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = (uint)(*(undefined **)(lVar1 + 0x2c0) != &DAT_14c82ba00 || *(int *)(lVar1 + 0x2c8) == 0) +
          iVar4;
  iVar3 = FUN_144a885dc();
  if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  return iVar3;
}



// FUNCTION 1467abd7a FUN_1467abd7a body=175 status=ok
// SIG undefined FUN_1467abd7a(void)

void FUN_1467abd7a(longlong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  iVar3 = (int)param_1[1];
  iVar2 = iVar3 - param_2;
  if (iVar3 < (int)param_2) {
    *(uint *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < param_2 - iVar3) {
      FUN_1467abe2a(param_1);
    }
    memset((void *)((longlong)iVar3 * 8 + *param_1),0,(longlong)(int)(param_2 - iVar3) << 3);
    return;
  }
  if (iVar2 == 0 || iVar3 < (int)param_2) {
    return;
  }
  _Dst = (void *)((ulonglong)param_2 * 8 + *param_1);
  FUN_1458cf656(_Dst,iVar2);
  iVar1 = (int)param_1[1] - iVar3;
  if (iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar2 * 8),(longlong)iVar1 << 3);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 - iVar2;
  FUN_1467abeb0(param_1);
  return;
}



// FUNCTION 1467abe2a FUN_1467abe2a body=132 status=ok
// SIG undefined FUN_1467abe2a(void)

void FUN_1467abe2a(longlong param_1,int param_2)

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



// FUNCTION 1467abeb0 FUN_1467abeb0 body=62 status=ok
// SIG undefined FUN_1467abeb0(void)

void FUN_1467abeb0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467abeee(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1467abeee FUN_1467abeee body=93 status=ok
// SIG undefined FUN_1467abeee(void)

ulonglong FUN_1467abeee(uint param_1,uint param_2)

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



// FUNCTION 1467abf4c FUN_1467abf4c body=39 status=ok
// SIG undefined FUN_1467abf4c(void)

undefined8 * FUN_1467abf4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e002e8;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467abf74 FUN_1467abf74 body=74 status=ok
// SIG undefined FUN_1467abf74(void)

undefined8 * FUN_1467abf74(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149e002f8;
  puVar1 = TlsGetValue(DAT_14c7585d0);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c7585d0,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467abfbe FUN_1467abfbe body=105 status=ok
// SIG undefined FUN_1467abfbe(void)

void FUN_1467abfbe(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar2 + uVar1;
    if ((uint)(*(int *)(param_1 + 0x14) - iVar2) < uVar1) {
      FUN_1467aae4a(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar3 = param_1;
    }
    memmove((void *)(lVar3 + (longlong)iVar2 * 8),(void *)*param_2,(longlong)(int)uVar1 << 3);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 1467ac028 FUN_1467ac028 body=86 status=ok
// SIG undefined FUN_1467ac028(void)

void FUN_1467ac028(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x10) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    return;
  }
  FUN_1467ac07e(param_1,param_3,param_4);
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar1 = param_1;
  }
  FUN_1467ac0d4(lVar1,param_2,param_3);
  return;
}



// FUNCTION 1467ac07e FUN_1467ac07e body=86 status=ok
// SIG undefined FUN_1467ac07e(void)

void FUN_1467ac07e(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_1467aadc4(param_1,0,uVar3,8);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x14) = param_3;
  return;
}



// FUNCTION 1467ac0d4 FUN_1467ac0d4 body=60 status=ok
// SIG undefined FUN_1467ac0d4(void)

void FUN_1467ac0d4(longlong param_1,longlong param_2,int param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + lVar4 * 8);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (ulonglong *)(lVar3 + 0x18);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 0) {
          LOCK();
          *(longlong *)(lVar3 + 0x18) = *(longlong *)(lVar3 + 0x18) + 0x40000000;
          UNLOCK();
        }
      }
      *(longlong *)(param_1 + lVar4 * 8) = lVar3;
      lVar4 = lVar4 + 1;
    } while (param_3 != (int)lVar4);
  }
  return;
}



// FUNCTION 1467ac110 FUN_1467ac110 body=131 status=ok
// SIG undefined FUN_1467ac110(void)

undefined4 FUN_1467ac110(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_20 = 0x100000000;
  FUN_1467abb70(local_30,param_1);
  local_38 = &LAB_1467aad66;
  FUN_1467aac4a(local_30);
  uVar1 = FUN_1467a85e2(local_30);
  FUN_1458cf622(local_30);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ac1a1 FUN_1467ac1a1 body=52 status=ok
// SIG undefined FUN_1467ac1a1(void)

void FUN_1467ac1a1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1400416c5();
  FUN_142745c6c(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1467ac1d6 FUN_1467ac1d6 body=123 status=ok
// SIG undefined FUN_1467ac1d6(void)

void FUN_1467ac1d6(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  ulonglong _Size;
  
  lVar1 = param_1[1];
  _Size = param_2 - lVar1;
  if (_Size != 0 && lVar1 <= param_2) {
    param_1[1] = param_2;
    if ((ulonglong)(param_1[2] - lVar1) < _Size) {
      FUN_14112c458(param_1);
    }
    memset((void *)(lVar1 + *param_1),0,_Size);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < lVar1) && (param_1[1] = param_2, param_3 == '\x01')) {
      FUN_1467af034(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1467ac252 FUN_1467ac252 body=84 status=ok
// SIG undefined FUN_1467ac252(void)

int FUN_1467ac252(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149e02088;
  }
  else {
    puVar4 = (undefined1 *)*param_1;
  }
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  lVar3 = FUN_1467ac2a6(puVar4,iVar1,param_2,param_3);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      iVar2 = 0x49e02088;
    }
    else {
      iVar2 = (int)*param_1;
    }
    iVar2 = (int)lVar3 - iVar2;
  }
  return iVar2;
}



// FUNCTION 1467ac2a6 FUN_1467ac2a6 body=154 status=ok
// SIG undefined FUN_1467ac2a6(void)

char * FUN_1467ac2a6(char *param_1,uint param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  if (0 < (int)param_4) {
    if ((int)param_4 <= (int)param_2) {
      cVar2 = *param_3;
      if (param_1 <= param_1 + ((ulonglong)param_2 - (ulonglong)param_4)) {
        pcVar4 = param_1;
        do {
          pcVar1 = pcVar4 + 1;
          if (((char)((0x19 < (int)*pcVar4 - 0x61U) * ' ' + *pcVar4 + -0x20) ==
               (char)((0x19 < (int)cVar2 - 0x61U) * ' ' + cVar2 + -0x20)) &&
             (iVar3 = FUN_144afd3ce(pcVar1,param_3 + 1,param_4 - 1), iVar3 == 0)) {
            return pcVar4;
          }
          pcVar4 = pcVar1;
        } while (pcVar1 <= param_1 + ((ulonglong)param_2 - (ulonglong)param_4));
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}



// FUNCTION 1467ac340 FUN_1467ac340 body=155 status=ok
// SIG undefined FUN_1467ac340(void)

char * FUN_1467ac340(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  
  if (param_1 != (char *)0x0 && param_2 != (char *)0x0) {
    cVar4 = (0x19 < (int)*param_2 - 0x61U) * ' ' + *param_2;
    if (cVar4 == ' ') {
      return param_1;
    }
    sVar2 = strlen(param_2);
    cVar3 = *param_1;
    if (cVar3 != '\0') {
      do {
        pcVar5 = param_1 + 1;
        if (((char)(cVar3 + (0x19 < (int)cVar3 - 0x61U) * ' ' + -0x20) == (char)(cVar4 + -0x20)) &&
           (iVar1 = FUN_144afd3ce(pcVar5,param_2 + 1,(longlong)((int)sVar2 + -1)), iVar1 == 0)) {
          return param_1;
        }
        cVar3 = *pcVar5;
        param_1 = pcVar5;
      } while (cVar3 != '\0');
    }
  }
  return (char *)0x0;
}



// FUNCTION 1467ac3dc FUN_1467ac3dc body=411 status=ok
// SIG undefined FUN_1467ac3dc(void)

void FUN_1467ac3dc(longlong *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char *_Str;
  uint uVar10;
  
  if ((((param_2 != (char *)0x0) && ((int)param_1[1] - 2U < 0x7fffffff)) && (param_3 != (char *)0x0)
      ) && (*param_2 != '\0')) {
    sVar3 = strlen(param_2);
    sVar4 = strlen(param_3);
    uVar10 = (uint)sVar3;
    if ((uint)sVar4 == uVar10) {
      lVar5 = FUN_1467ac340(*param_1,param_2);
      if (lVar5 != 0) {
        do {
          if (0 < (int)uVar10) {
            uVar8 = 0;
            do {
              *(char *)(lVar5 + uVar8) = param_3[uVar8];
              uVar8 = uVar8 + 1;
            } while ((uVar10 & 0x7fffffff) != uVar8);
          }
          iVar2 = (int)param_1[1];
          puVar9 = &DAT_149e02088;
          if (iVar2 != 0) {
            puVar9 = (undefined1 *)*param_1;
          }
          iVar7 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar7 = 0;
          }
        } while (((lVar5 + (int)uVar10) - (longlong)puVar9 < (longlong)iVar7) &&
                (lVar5 = FUN_1467ac340(lVar5 + (int)uVar10,param_2), lVar5 != 0));
      }
    }
    else {
      iVar2 = FUN_1467ac252(param_1,param_2,sVar3 & 0xffffffff);
      if (iVar2 != -1) {
        pcVar1 = (char *)*param_1;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar6 = (char *)FUN_1467ac340(pcVar1,param_2);
        _Str = pcVar1;
        if (pcVar6 != (char *)0x0) {
          do {
            *pcVar6 = '\0';
            sVar3 = strlen(_Str);
            FUN_14274622a(param_1,_Str,sVar3 & 0xffffffff);
            sVar3 = strlen(param_3);
            FUN_14274622a(param_1,param_3,sVar3 & 0xffffffff);
            *pcVar6 = *param_2;
            _Str = pcVar6 + (int)uVar10;
            pcVar6 = (char *)FUN_1467ac340(_Str,param_2);
          } while (pcVar6 != (char *)0x0);
        }
        sVar3 = strlen(_Str);
        FUN_14274622a(param_1,_Str,sVar3 & 0xffffffff);
        if (pcVar1 != (char *)0x0) {
          FUN_1400020a8(pcVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1467ac578 FUN_1467ac578 body=150 status=ok
// SIG undefined FUN_1467ac578(void)

void FUN_1467ac578(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 8) - 2U < 0x7fffffff) &&
     ((param_2 == (longlong *)0x0 || (0 < (int)param_2[1])))) {
    lVar2 = 0;
    do {
      if (param_2 == (longlong *)0x0) {
        pcVar1 = (&PTR_DAT_149e006e0)[lVar2 * 2];
LAB_1467ac5ee:
        FUN_1467ac3dc(param_1,pcVar1,(&PTR_DAT_149e006e8)[lVar2 * 2]);
      }
      else if ((longlong)(int)param_2[1] != 0) {
        pcVar1 = (&PTR_DAT_149e006e0)[lVar2 * 2];
        lVar3 = 0;
        do {
          if (*(char *)(*param_2 + lVar3) == *pcVar1) goto LAB_1467ac5ee;
          lVar3 = lVar3 + 1;
        } while ((int)param_2[1] != lVar3);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 6);
  }
  return;
}



// FUNCTION 1467ac60e FUN_1467ac60e body=38 status=ok
// SIG undefined FUN_1467ac60e(void)

void FUN_1467ac60e(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Core/Private/Containers/ContainerAllocationPolicies.cpp",8,
                L"Trying to resize TAlignedHeapAllocator to an invalid size of %d with element size %I64u"
                ,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1467ac634 FUN_1467ac634 body=99 status=ok
// SIG undefined FUN_1467ac634(void)

void FUN_1467ac634(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  
  if (param_3 != 0 || *param_1 != 0) {
    if ((((longlong)param_3 < 0) || (param_4 - 0x80000000 < 0xffffffff80000001)) ||
       (auVar1._8_8_ = 0, auVar1._0_8_ = param_4,
       SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff)) / auVar1,0) < param_3)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afa99(0x40,param_3,param_4);
    }
    lVar2 = FUN_14001fdce(*param_1,param_4 * param_3,0);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1467ac698 FUN_1467ac698 body=160 status=ok
// SIG undefined FUN_1467ac698(void)

void FUN_1467ac698(longlong *param_1,int param_2,short param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0x2f) {
    while( true ) {
      iVar1 = (int)((ulonglong)(param_1[1] - *param_1) >> 1);
      local_30 = iVar1 - param_2;
      if (iVar1 <= iVar1 - param_2) {
        local_30 = iVar1;
      }
      if (local_30 < 1) {
        local_30 = 0;
      }
      local_38 = (*param_1 + (longlong)iVar1 * 2) - (ulonglong)(uint)(local_30 * 2);
      iVar1 = FUN_144aff2e5(&local_38,CONCAT62((uint6)(ushort)((uint)(local_30 * 2) >> 0x10),0x2f),0
                           );
      if (iVar1 == -1) break;
      param_2 = param_2 + iVar1;
      *(short *)(*param_1 + (longlong)param_2 * 2) = param_3;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ac73a FUN_1467ac73a body=42 status=ok
// SIG undefined FUN_1467ac73a(void)

void FUN_1467ac73a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    (**(code **)*param_1)(param_1,0);
  }
  *param_1 = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1467ac767 FUN_1467ac767 body=38 status=ok
// SIG undefined FUN_1467ac767(void)

void FUN_1467ac767(undefined4 param_1,undefined8 param_2)

{
  FUN_140033559(".\\Runtime/Core/Private/Containers/MemoryImageAllocator.cpp",0x10,
                L"Trying to resize TMemoryImageAllocator to an invalid size of %d with element size %I64u"
                ,param_1,param_2);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// FUNCTION 1467ac78e FUN_1467ac78e body=168 status=ok
// SIG undefined FUN_1467ac78e(void)

void FUN_1467ac78e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < param_4) {
    uVar1 = *param_1;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_146828134(param_2,local_38);
    FUN_146826a30(local_38,param_5);
    FUN_146828012(local_38,uVar2,param_3,param_4);
    FUN_146827334(local_38);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1468280da(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ac844 FUN_1467ac844 body=174 status=ok
// SIG undefined FUN_1467ac844(void)

void FUN_1467ac844(ulonglong *param_1,longlong param_2,longlong param_3,int param_4,longlong param_5
                  )

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (0 < param_4) {
    uVar8 = *param_1;
    uVar7 = ((longlong)uVar8 >> 0x18) + (longlong)param_1;
    if ((uVar8 & 1) == 0) {
      uVar7 = uVar8;
    }
    pcVar3 = *(code **)(param_3 + 0x28);
    iVar1 = *(int *)(param_3 + 0x58);
    iVar2 = *(int *)(param_3 + 0x60);
    iVar4 = FUN_146826524(param_3,param_2 + 8);
    uVar6 = 0;
    uVar8 = 0;
    do {
      iVar5 = (*pcVar3)(param_2,uVar6 + uVar7,param_3,uVar8 + param_5);
      uVar6 = uVar6 + iVar4 + -1 + iVar5 & -iVar4;
      uVar8 = (ulonglong)(uint)((int)uVar8 + iVar1 + iVar2 + -1 & -iVar2);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 1467ac8f2 FUN_1467ac8f2 body=195 status=ok
// SIG undefined FUN_1467ac8f2(void)

void FUN_1467ac8f2(ulonglong *param_1,longlong param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  code *pcVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  FUN_140212e80(*param_6,L"TArray<%s>, Num: %d, Max: %d\n",*(undefined8 *)(param_2 + 8),param_3,
                param_4);
  iVar2 = *(int *)(param_6 + 2);
  *(int *)(param_6 + 2) = iVar2 + 1;
  uVar4 = *param_1;
  uVar3 = ((longlong)uVar4 >> 0x18) + (longlong)param_1;
  if ((uVar4 & 1) == 0) {
    uVar3 = uVar4;
  }
  if (0 < (int)param_3) {
    pcVar1 = *(code **)(param_2 + 0x40);
    iVar2 = *(int *)(param_2 + 0x58);
    uVar4 = 0;
    uVar5 = 0;
    do {
      FUN_146826ba2(param_6);
      FUN_140212e80(*param_6,L"[%d]: ",uVar5 & 0xffffffff);
      (*pcVar1)(uVar4 + uVar3,param_2,param_5,param_6);
      uVar5 = uVar5 + 1;
      uVar4 = (ulonglong)(uint)((int)uVar4 + iVar2);
    } while (param_3 != uVar5);
    iVar2 = *(int *)(param_6 + 2) + -1;
  }
  *(int *)(param_6 + 2) = iVar2;
  return;
}



// FUNCTION 1467ac9bc FUN_1467ac9bc body=110 status=ok
// SIG undefined FUN_1467ac9bc(void)

void FUN_1467ac9bc(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar3 = (int)param_1[1];
  uVar4 = iVar3 - 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  lVar2 = *param_1;
  if (0 < (int)uVar4) {
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + uVar5 * 2);
      *(ushort *)(lVar2 + uVar5 * 2) = uVar1 + (ushort)(0x19 < uVar1 - 0x61) * 0x20 + -0x20;
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
    lVar2 = *param_1;
    iVar3 = (int)param_1[1];
  }
  *param_2 = lVar2;
  *param_1 = 0;
  *(int *)(param_2 + 1) = iVar3;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return;
}



// FUNCTION 1467aca2a FUN_1467aca2a body=123 status=ok
// SIG undefined FUN_1467aca2a(void)

void FUN_1467aca2a(longlong *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((short)param_3 != 0) {
    iVar1 = (int)param_1[1];
    if (iVar1 == 0) {
      FUN_140002184(param_1,param_3);
      return;
    }
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_144a2dbb8(param_1,iVar1);
    }
    lVar2 = (longlong)param_2;
    memmove((void *)(*param_1 + lVar2 * 2 + 2),(void *)(*param_1 + lVar2 * 2),
            (ulonglong)(uint)(iVar1 - param_2) * 2);
    *(short *)(*param_1 + lVar2 * 2) = (short)param_3;
  }
  return;
}



// FUNCTION 1467acaa6 FUN_1467acaa6 body=94 status=ok
// SIG undefined FUN_1467acaa6(void)

undefined8 * FUN_1467acaa6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  if (param_4 == 0) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  else {
    FUN_1412cfe60(param_1,param_2,param_4 + (uint)(*(int *)(param_2 + 1) == 0));
    FUN_1400020e8(param_1,param_3,param_4);
  }
  return param_1;
}



// FUNCTION 1467acb04 FUN_1467acb04 body=156 status=ok
// SIG undefined FUN_1467acb04(void)

void FUN_1467acb04(longlong *param_1,ushort param_2,ushort param_3)

{
  longlong lVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  
  iVar4 = iswupper(param_2);
  sVar2 = 0;
  if (((uint)(iVar4 != 0) * 0x20 + (uint)param_2) - 0x61 < 0x1a) {
    sVar2 = (ushort)(iVar4 != 0) * 0x40 + -0x20;
  }
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar5 = 0;
    do {
      uVar6 = *(ushort *)(lVar1 + lVar5);
      if (uVar6 == (ushort)(sVar2 + param_2)) {
        uVar6 = param_3;
      }
      *(ushort *)(lVar1 + lVar5) = uVar6;
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
    lVar3 = param_1[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_1;
      lVar5 = 0;
      do {
        uVar6 = *(ushort *)(lVar1 + lVar5);
        if (uVar6 == param_2) {
          uVar6 = param_3;
        }
        *(ushort *)(lVar1 + lVar5) = uVar6;
        lVar5 = lVar5 + 2;
      } while ((longlong)(int)lVar3 * 2 != lVar5);
    }
  }
  return;
}



// FUNCTION 1467acba0 FUN_1467acba0 body=104 status=ok
// SIG undefined FUN_1467acba0(void)

undefined8 * FUN_1467acba0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_140db34f4(param_2,0x22,param_3);
  return param_2;
}



// FUNCTION 1467acc08 FUN_1467acc08 body=111 status=ok
// SIG undefined FUN_1467acc08(void)

undefined8 *
FUN_1467acc08(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  FUN_140db34f4(param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 1467acc78 FUN_1467acc78 body=95 status=ok
// SIG undefined FUN_1467acc78(void)

undefined4 FUN_1467acc78(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_140c8411c();
  uVar1 = *(undefined4 *)(param_1 + 8);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467accd8 FUN_1467accd8 body=65 status=ok
// SIG undefined FUN_1467accd8(void)

void FUN_1467accd8(undefined8 *param_1)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  uVar5 = *(int *)(param_1 + 1) - 1;
  if (*(int *)(param_1 + 1) == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    puVar4 = (undefined2 *)*param_1 + ((ulonglong)uVar5 - 1);
    puVar2 = (undefined2 *)*param_1;
    do {
      puVar3 = puVar2 + 1;
      uVar1 = *puVar2;
      *puVar2 = *puVar4;
      *puVar4 = uVar1;
      puVar4 = puVar4 + -1;
      puVar2 = puVar3;
    } while (puVar3 < puVar4);
  }
  return;
}



// FUNCTION 1467acd1a FUN_1467acd1a body=250 status=ok
// SIG undefined FUN_1467acd1a(void)

ulonglong FUN_1467acd1a(longlong *param_1,undefined1 *param_2,uint param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 unaff_RBX;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  wchar_t local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = (int)param_1[1];
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  bVar2 = (uint)(iVar4 / 3) <= param_3;
  bVar6 = iVar4 * -0x55555555 + 0x2aaaaaaaU < 0x55555555;
  if ((bVar6 && bVar2) && (local_42 = 0, iVar3 - 2U < 0x7fffffff)) {
    lVar5 = 0;
    do {
      lVar1 = *param_1;
      local_48 = *(wchar_t *)(lVar1 + lVar5 * 2);
      local_46 = *(undefined2 *)(lVar1 + 2 + lVar5 * 2);
      local_44 = *(undefined2 *)(lVar1 + 4 + lVar5 * 2);
      iVar3 = _wtoi(&local_48);
      *param_2 = (char)iVar3;
      lVar5 = lVar5 + 3;
      iVar3 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar3 = 0;
      }
      param_2 = param_2 + 1;
    } while ((int)lVar5 < iVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar6 && bVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ace16 FUN_1467ace16 body=86 status=ok
// SIG undefined FUN_1467ace16(void)

longlong * FUN_1467ace16(longlong *param_1,uint param_2,undefined2 param_3)

{
  ulonglong uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(uint *)(param_1 + 1) = param_2 + 1;
  if (param_2 + 1 != 0) {
    FUN_144a2dbb8(param_1,0);
    if (0 < (int)param_2) {
      uVar1 = 0;
      do {
        *(undefined2 *)(*param_1 + uVar1 * 2) = param_3;
        uVar1 = uVar1 + 1;
      } while (param_2 != uVar1);
    }
  }
  *(undefined2 *)(*param_1 + (longlong)(int)param_2 * 2) = 0;
  return param_1;
}



// FUNCTION 1467ace6c FUN_1467ace6c body=245 status=ok
// SIG undefined FUN_1467ace6c(void)

undefined8 * FUN_1467ace6c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = param_3 - iVar2;
  if (uVar3 == 0 || param_3 < iVar2) {
    *param_2 = 0;
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = (ulonglong)(uVar3 + 1);
    uVar4 = 0;
    FUN_144a2dbb8(&local_38,0);
    do {
      *(undefined2 *)(local_38 + uVar4 * 2) = 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    *(undefined2 *)(local_38 + (ulonglong)uVar3 * 2) = 0;
    FUN_144a7dea0(param_2,&local_38,param_1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467acf64 FUN_1467acf64 body=245 status=ok
// SIG undefined FUN_1467acf64(void)

undefined8 * FUN_1467acf64(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  uVar3 = param_3 - iVar2;
  if (uVar3 == 0 || param_3 < iVar2) {
    *param_2 = 0;
    _Src = (void *)*param_1;
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    local_38 = 0;
    uStack_30 = (ulonglong)(uVar3 + 1);
    uVar4 = 0;
    FUN_144a2dbb8(&local_38,0);
    do {
      *(undefined2 *)(local_38 + uVar4 * 2) = 0x20;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    *(undefined2 *)(local_38 + (ulonglong)uVar3 * 2) = 0;
    FUN_1407ec8fc(param_2,param_1,&local_38);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ad05c FUN_1467ad05c body=220 status=ok
// SIG undefined FUN_1467ad05c(void)

undefined8 * FUN_1467ad05c(undefined8 *param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  short sVar3;
  bool bVar4;
  short *psVar5;
  
  iVar2 = FUN_1447ee042(param_1,&DAT_149e01f5a,1,0,0,0xffffffff);
  if (iVar2 != -1) {
    psVar1 = (short *)*param_1;
    iVar2 = *(int *)(param_1 + 1);
    *param_1 = 0;
    param_1[1] = 0;
    psVar5 = &DAT_149dfb77a;
    if (iVar2 != 0) {
      psVar5 = psVar1;
    }
    sVar3 = *psVar5;
    if (sVar3 != 0) {
      bVar4 = false;
      do {
        if (bVar4) {
LAB_1467ad0c3:
          bVar4 = false;
        }
        else {
          if (sVar3 != 0x5c) {
            if (sVar3 == 0x22) {
              FUN_140002184(param_1,0x5c);
              sVar3 = *psVar5;
            }
            goto LAB_1467ad0c3;
          }
          bVar4 = true;
        }
        FUN_140002184(param_1,sVar3);
        sVar3 = psVar5[1];
        psVar5 = psVar5 + 1;
      } while (sVar3 != 0);
    }
    if (psVar1 != (short *)0x0) {
      FUN_1400020a8(psVar1);
    }
  }
  *param_2 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1467ad138 FUN_1467ad138 body=175 status=ok
// SIG undefined FUN_1467ad138(void)

void FUN_1467ad138(longlong param_1,longlong *param_2)

{
  bool bVar1;
  short *psVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((*(int *)(param_1 + 8) - 2U < 0x7fffffff) &&
     ((param_2 == (longlong *)0x0 || (0 < (int)param_2[1])))) {
    uVar4 = 6;
    do {
      uVar5 = uVar4 - 1;
      if (param_2 == (longlong *)0x0) {
        psVar2 = (short *)(&PTR_DAT_149e00c50)[uVar5 * 2];
LAB_1467ad1bb:
        FUN_1448097c4(param_1,(&PTR_DAT_149e00c58)[uVar5 * 2],psVar2);
      }
      else if ((longlong)(int)param_2[1] != 0) {
        psVar2 = (short *)(&PTR_DAT_149e00c50)[uVar5 * 2];
        lVar3 = 0;
        do {
          if (*(short *)(*param_2 + lVar3) == *psVar2) goto LAB_1467ad1bb;
          lVar3 = lVar3 + 2;
        } while ((longlong)(int)param_2[1] * 2 != lVar3);
      }
      bVar1 = 1 < uVar4;
      uVar4 = uVar5;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1467ad1e7 FUN_1467ad1e7 body=81 status=ok
// SIG undefined FUN_1467ad1e7(void)

void FUN_1467ad1e7(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_10 = 0;
  }
  FUN_14682b721(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ad23a FUN_1467ad23a body=84 status=ok
// SIG undefined FUN_1467ad23a(void)

int FUN_1467ad23a(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 0) {
    puVar4 = &DAT_149e02088;
  }
  else {
    puVar4 = (undefined1 *)*param_1;
  }
  iVar1 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  lVar3 = FUN_1467ad28e(puVar4,iVar1,param_2,param_3);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    if (*(int *)(param_1 + 1) == 0) {
      iVar2 = 0x49e02088;
    }
    else {
      iVar2 = (int)*param_1;
    }
    iVar2 = (int)lVar3 - iVar2;
  }
  return iVar2;
}



// FUNCTION 1467ad28e FUN_1467ad28e body=154 status=ok
// SIG undefined FUN_1467ad28e(void)

byte * FUN_1467ad28e(byte *param_1,uint param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  
  if (0 < (int)param_4) {
    if ((int)param_4 <= (int)param_2) {
      bVar2 = *param_3;
      if (param_1 <= param_1 + ((ulonglong)param_2 - (ulonglong)param_4)) {
        pbVar4 = param_1;
        do {
          pbVar1 = pbVar4 + 1;
          if (((byte)((0x19 < *pbVar4 - 0x61) * ' ' + *pbVar4 + -0x20) ==
               (byte)((0x19 < bVar2 - 0x61) * ' ' + bVar2 + -0x20)) &&
             (iVar3 = FUN_14018695a(pbVar1,param_3 + 1,param_4 - 1), iVar3 == 0)) {
            return pbVar4;
          }
          pbVar4 = pbVar1;
        } while (pbVar1 <= param_1 + ((ulonglong)param_2 - (ulonglong)param_4));
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}



// FUNCTION 1467ad328 FUN_1467ad328 body=142 status=ok
// SIG undefined FUN_1467ad328(void)

byte * FUN_1467ad328(byte *param_1,byte *param_2)

{
  int iVar1;
  size_t sVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  
  if (param_1 != (byte *)0x0) {
    cVar4 = (0x19 < *param_2 - 0x61) * ' ' + *param_2;
    if (cVar4 == ' ') {
      return param_1;
    }
    sVar2 = strlen((char *)param_2);
    bVar3 = *param_1;
    if (bVar3 != 0) {
      do {
        pbVar5 = param_1 + 1;
        if (((byte)(bVar3 + (0x19 < bVar3 - 0x61) * ' ' + -0x20) == (byte)(cVar4 + -0x20)) &&
           (iVar1 = FUN_14018695a(pbVar5,param_2 + 1,(longlong)((int)sVar2 + -1)), iVar1 == 0)) {
          return param_1;
        }
        bVar3 = *pbVar5;
        param_1 = pbVar5;
      } while (bVar3 != 0);
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1467ad3b6 FUN_1467ad3b6 body=411 status=ok
// SIG undefined FUN_1467ad3b6(void)

void FUN_1467ad3b6(longlong *param_1,char *param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  longlong lVar5;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char *_Str;
  uint uVar10;
  
  if ((((param_2 != (char *)0x0) && ((int)param_1[1] - 2U < 0x7fffffff)) && (param_3 != (char *)0x0)
      ) && (*param_2 != '\0')) {
    sVar3 = strlen(param_2);
    sVar4 = strlen(param_3);
    uVar10 = (uint)sVar3;
    if ((uint)sVar4 == uVar10) {
      lVar5 = FUN_1467ad328(*param_1,param_2);
      if (lVar5 != 0) {
        do {
          if (0 < (int)uVar10) {
            uVar8 = 0;
            do {
              *(char *)(lVar5 + uVar8) = param_3[uVar8];
              uVar8 = uVar8 + 1;
            } while ((uVar10 & 0x7fffffff) != uVar8);
          }
          iVar2 = (int)param_1[1];
          puVar9 = &DAT_149e02088;
          if (iVar2 != 0) {
            puVar9 = (undefined1 *)*param_1;
          }
          iVar7 = iVar2 + -1;
          if (iVar2 == 0) {
            iVar7 = 0;
          }
        } while (((lVar5 + (int)uVar10) - (longlong)puVar9 < (longlong)iVar7) &&
                (lVar5 = FUN_1467ad328(lVar5 + (int)uVar10,param_2), lVar5 != 0));
      }
    }
    else {
      iVar2 = FUN_1467ad23a(param_1,param_2,sVar3 & 0xffffffff);
      if (iVar2 != -1) {
        pcVar1 = (char *)*param_1;
        *param_1 = 0;
        param_1[1] = 0;
        pcVar6 = (char *)FUN_1467ad328(pcVar1,param_2);
        _Str = pcVar1;
        if (pcVar6 != (char *)0x0) {
          do {
            *pcVar6 = '\0';
            sVar3 = strlen(_Str);
            FUN_142747803(param_1,_Str,sVar3 & 0xffffffff);
            sVar3 = strlen(param_3);
            FUN_142747803(param_1,param_3,sVar3 & 0xffffffff);
            *pcVar6 = *param_2;
            _Str = pcVar6 + (int)uVar10;
            pcVar6 = (char *)FUN_1467ad328(_Str,param_2);
          } while (pcVar6 != (char *)0x0);
        }
        sVar3 = strlen(_Str);
        FUN_142747803(param_1,_Str,sVar3 & 0xffffffff);
        if (pcVar1 != (char *)0x0) {
          FUN_1400020a8(pcVar1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1467ad552 FUN_1467ad552 body=150 status=ok
// SIG undefined FUN_1467ad552(void)

void FUN_1467ad552(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(int *)(param_1 + 8) - 2U < 0x7fffffff) &&
     ((param_2 == (longlong *)0x0 || (0 < (int)param_2[1])))) {
    lVar2 = 0;
    do {
      if (param_2 == (longlong *)0x0) {
        pcVar1 = (char *)(&DAT_14c833780)[lVar2 * 2];
LAB_1467ad5c8:
        FUN_1467ad3b6(param_1,pcVar1,*(undefined8 *)(&DAT_14c833788 + lVar2 * 0x10));
      }
      else if ((longlong)(int)param_2[1] != 0) {
        pcVar1 = (char *)(&DAT_14c833780)[lVar2 * 2];
        lVar3 = 0;
        do {
          if (*(char *)(*param_2 + lVar3) == *pcVar1) goto LAB_1467ad5c8;
          lVar3 = lVar3 + 1;
        } while ((int)param_2[1] != lVar3);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 6);
  }
  return;
}



// FUNCTION 1467ad5e8 FUN_1467ad5e8 body=201 status=ok
// SIG undefined FUN_1467ad5e8(void)

undefined8 FUN_1467ad5e8(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  short *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_2 + 1) == 0) {
    local_28 = &DAT_149dfb77a;
  }
  else {
    local_28 = (short *)*param_2;
  }
  cVar3 = FUN_1467af415();
  if (cVar3 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    if (*local_28 == 0) {
      FUN_144a787a6(param_1,param_2);
      iVar4 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        iVar4 = 0;
      }
      uVar6 = 1;
      if (iVar4 != 1) {
        lVar2 = *param_1;
        lVar5 = 2;
        do {
          uVar1 = *(ushort *)(lVar2 + lVar5);
          if (uVar1 == 0x2f) break;
          *(ushort *)(lVar2 + lVar5) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
          lVar5 = lVar5 + 2;
        } while ((longlong)iVar4 * 2 != lVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1467ad6b2 FUN_1467ad6b2 body=234 status=ok
// SIG undefined FUN_1467ad6b2(void)

undefined8 FUN_1467ad6b2(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  short *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_2[1] == 0) {
    local_20 = &DAT_149dfb77a;
  }
  else {
    local_20 = (short *)*param_2;
  }
  cVar3 = FUN_1467af415();
  if ((cVar3 == '\0') || (*local_20 != 0)) {
    uVar4 = 0;
  }
  else {
    if (param_1 != param_2) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 1) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
    iVar5 = (int)param_1[1] + -1;
    if ((int)param_1[1] == 0) {
      iVar5 = 0;
    }
    uVar4 = 1;
    if (iVar5 != 1) {
      lVar2 = *param_1;
      lVar6 = 2;
      do {
        uVar1 = *(ushort *)(lVar2 + lVar6);
        if (uVar1 == 0x2f) break;
        *(ushort *)(lVar2 + lVar6) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        lVar6 = lVar6 + 2;
      } while ((longlong)iVar5 * 2 != lVar6);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1467ad79e FUN_1467ad79e body=307 status=ok
// SIG undefined FUN_1467ad79e(void)

undefined8 * FUN_1467ad79e(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *_Dst;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x10f4);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  if (*(int *)(param_1 + 0x10f4) == iVar2) {
    lVar4 = *(longlong *)(param_1 + 0x1000);
    lVar3 = param_1;
    while (lVar4 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x1000);
      lVar4 = *(longlong *)(lVar3 + 0x1000);
    }
    _Dst = (undefined8 *)FUN_14001cc68(0x1080);
    lVar4 = 0;
    memset(_Dst,0,0x1080);
    do {
      *(undefined8 *)((longlong)_Dst + lVar4) = 0;
      ((undefined8 *)((longlong)_Dst + lVar4))[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x70);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x60);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x50);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x40);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x30);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = (undefined8 *)((longlong)_Dst + lVar4 + 0x10);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)((longlong)_Dst + lVar4) = 0xffffffffffffffff;
      lVar4 = lVar4 + 0x80;
    } while (lVar4 != 0x1000);
    _Dst[0x200] = 0;
    *_Dst = 0;
    *(longlong *)(lVar3 + 0x1000) = (longlong)_Dst;
    LOCK();
    *(int *)(param_1 + 0x10f4) = *(int *)(param_1 + 0x10f4) + 0x20;
    UNLOCK();
    iVar2 = *(int *)(param_1 + 0x10e8);
    *(uint *)(param_1 + 0x10e8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x10ec) < iVar2 + 1U) {
      FUN_145bd015e((longlong *)(param_1 + 0x10e0),iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x10e0) + (longlong)iVar2 * 8) = _Dst;
  }
  else {
    _Dst = (undefined8 *)FUN_144a75d72(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
  return _Dst;
}



// FUNCTION 1467ad8d1 FUN_1467ad8d1 body=705 status=ok
// SIG undefined FUN_1467ad8d1(void)

longlong * FUN_1467ad8d1(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  int *piVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(uint *)(param_2 + 1);
  uVar13 = (ulonglong)uVar2;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = param_2;
  FUN_140bfc200(&local_78,uVar13,1);
  if ((int)uVar2 < 1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
  }
  else {
    uVar15 = 0;
    do {
      lVar16 = (longlong)*(int *)(*local_80 + 8 + uVar15 * 0x10);
      if (lVar16 != 0) {
        lVar17 = *(longlong *)(*local_80 + uVar15 * 0x10);
        lVar12 = 0;
        do {
          uVar3 = *(uint *)(lVar17 + lVar12);
          if (uVar15 != uVar3) {
            lVar8 = (longlong)(int)uVar3 * 0x10;
            plVar1 = (longlong *)(local_78 + lVar8);
            iVar4 = *(int *)(local_78 + 8 + lVar8);
            *(uint *)(local_78 + 8 + lVar8) = iVar4 + 1U;
            if (*(uint *)(local_78 + 0xc + lVar8) < iVar4 + 1U) {
              FUN_1446f48e2(plVar1,iVar4);
            }
            *(int *)(*plVar1 + (longlong)iVar4 * 4) = (int)uVar15;
          }
          lVar12 = lVar12 + 4;
        } while (lVar16 * 4 != lVar12);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
    uVar15 = 0;
    lVar16 = 0;
    do {
      lVar17 = local_78;
      lVar12 = uVar15 * 0x10;
      FUN_1406de246(*(undefined8 *)(local_78 + lVar12),*(undefined4 *)(local_78 + 8 + lVar12));
      uVar9 = (ulonglong)*(int *)(lVar17 + 8 + lVar12);
      if (1 < (longlong)uVar9) {
        piVar6 = *(int **)(lVar17 + lVar12);
        lVar8 = uVar9 * 4 + -4;
        piVar10 = piVar6;
        piVar14 = piVar6;
        do {
          piVar11 = piVar10;
          if ((*piVar10 != piVar14[1]) && (piVar11 = piVar10 + 1, piVar14 != piVar10)) {
            *piVar11 = piVar14[1];
          }
          piVar14 = piVar14 + 1;
          lVar8 = lVar8 + -4;
          piVar10 = piVar11;
        } while (lVar8 != 0);
        uVar9 = (ulonglong)((longlong)piVar11 + (4 - (longlong)piVar6)) >> 2;
      }
      FUN_144a1a59e(lVar17 + lVar12,uVar9,0);
      lVar16 = (longlong)(int)lVar16 + (longlong)*(int *)(lVar17 + lVar12 + 8);
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar13);
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    if ((int)lVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(lVar16);
    }
    if ((int)lVar16 != 0) {
      FUN_1467b10c2(param_1,lVar16);
    }
  }
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar13);
  }
  local_80 = param_1 + 3;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(uint *)((longlong)param_1 + 0x24) != uVar2) {
    FUN_1467b112c(local_80,uVar13);
  }
  if (uVar13 != 0) {
    lVar16 = *param_1;
    lVar17 = 0;
    do {
      lVar8 = local_78;
      uVar5 = *(undefined4 *)(local_78 + 8 + lVar17);
      lVar12 = param_1[1];
      iVar4 = (int)param_1[4];
      *(uint *)(param_1 + 4) = iVar4 + 1U;
      if (*(uint *)((longlong)param_1 + 0x24) < iVar4 + 1U) {
        FUN_1467b118c(local_80,iVar4);
      }
      lVar7 = *local_80;
      *(longlong *)(lVar7 + (longlong)iVar4 * 0x10) = lVar16 + lVar12 * 4;
      *(undefined4 *)(lVar7 + 8 + (longlong)iVar4 * 0x10) = uVar5;
      uVar15 = (ulonglong)*(int *)(lVar8 + 8 + lVar17);
      if (uVar15 != 0) {
        lVar12 = param_1[1];
        param_1[1] = lVar12 + uVar15;
        if ((ulonglong)(param_1[2] - lVar12) < uVar15) {
          FUN_1467b1212(param_1,lVar12);
        }
        memcpy((void *)(lVar12 * 4 + *param_1),*(void **)(lVar8 + lVar17),uVar15 << 2);
      }
      lVar17 = lVar17 + 0x10;
    } while (uVar13 << 4 != lVar17);
  }
  FUN_144716727(local_78,uStack_70 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467adb94 FUN_1467adb94 body=155 status=ok
// SIG undefined FUN_1467adb94(void)

undefined8 FUN_1467adb94(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  local_20 = *param_2;
  *param_2 = 0;
  FUN_1467adc30(*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8));
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467adc30 FUN_1467adc30 body=286 status=ok
// SIG undefined FUN_1467adc30(void)

void FUN_1467adc30(ulonglong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x348);
  local_28 = param_1;
  if (uVar1 == 1 || uVar1 == param_1) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(ulonglong *)(lVar2 + 0x348) = param_1;
    iVar5 = *(int *)(lVar2 + 0x358);
    *(uint *)(lVar2 + 0x358) = iVar5 + 1U;
    if (iVar5 + 1U <= *(uint *)(lVar2 + 0x35c)) {
      plVar4 = (longlong *)(lVar2 + 0x350);
      goto LAB_1467adcb1;
    }
    plVar4 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x350
             );
  }
  else {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = (longlong *)FUN_1467ae4ae(uVar3 >> 0x10 ^ uVar3,&local_28);
    iVar5 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar5 + 1U;
    if (iVar5 + 1U <= *(uint *)((longlong)plVar4 + 0xc)) goto LAB_1467adcb1;
  }
  FUN_1467ae428(plVar4,iVar5);
LAB_1467adcb1:
  *(undefined8 *)(*plVar4 + (longlong)iVar5 * 8) = *param_2;
  *param_2 = 0;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467add50 FUN_1467add50 body=72 status=ok
// SIG undefined FUN_1467add50(void)

void FUN_1467add50(void)

{
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_1467add98(*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8));
  return;
}



// FUNCTION 1467add98 FUN_1467add98 body=463 status=ok
// SIG undefined FUN_1467add98(void)

void FUN_1467add98(ulonglong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(ulonglong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x348) ==
      param_1) {
    FUN_1467aecdc(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x350,&local_28,0);
    if (local_28 != (longlong *)0x0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x358) == 0) &&
       (lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
       *(undefined8 *)(lVar1 + 0x348) = 1, *(int *)(lVar1 + 0x35c) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0x368) != *(int *)(lVar1 + 0x394)) {
      uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar4 = *(longlong *)(lVar1 + 0x3a0);
      if (*(longlong *)(lVar1 + 0x3a0) == 0) {
        lVar4 = lVar1 + 0x398;
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x3a8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                               4);
      if (iVar3 != -1) {
        lVar1 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x360);
        do {
          lVar4 = lVar1 + (longlong)iVar3 * 0x20;
          if (*(ulonglong *)(lVar1 + (longlong)iVar3 * 0x20) == param_1) goto LAB_1467adeed;
          iVar3 = *(int *)(lVar4 + 0x18);
        } while (iVar3 != -1);
      }
    }
    lVar4 = 0;
LAB_1467adeed:
    FUN_1467aecdc(lVar4 + 8,&local_30,1);
    if (local_30 != (longlong *)0x0) {
      (**(code **)(*local_30 + 0x10))();
    }
    if (*(int *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467adf9e FUN_1467adf9e body=95 status=ok
// SIG undefined FUN_1467adf9e(void)

void FUN_1467adf9e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e01ed0;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_14274a2b0(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 1467adffe FUN_1467adffe body=26 status=ok
// SIG undefined FUN_1467adffe(void)

undefined8 FUN_1467adffe(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1400f7108(param_2,0);
  }
  return 0;
}



// FUNCTION 1467ae042 FUN_1467ae042 body=26 status=ok
// SIG undefined FUN_1467ae042(void)

undefined8 FUN_1467ae042(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_1400f7108(*param_2,0);
  }
  return 0;
}



// FUNCTION 1467ae05c FUN_1467ae05c body=70 status=ok
// SIG undefined FUN_1467ae05c(void)

undefined8
FUN_1467ae05c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_1400f7108(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e01f10;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 1467ae0b0 FUN_1467ae0b0 body=29 status=ok
// SIG undefined FUN_1467ae0b0(void)

undefined8 FUN_1467ae0b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467ae0ce FUN_1467ae0ce body=1 status=ok
// SIG undefined FUN_1467ae0ce(void)

void FUN_1467ae0ce(void)

{
  return;
}



// FUNCTION 1467ae0d0 FUN_1467ae0d0 body=3 status=ok
// SIG undefined FUN_1467ae0d0(void)

undefined1 FUN_1467ae0d0(void)

{
  return 1;
}



// FUNCTION 1467ae0d4 FUN_1467ae0d4 body=3 status=ok
// SIG undefined FUN_1467ae0d4(void)

undefined8 FUN_1467ae0d4(void)

{
  return 0;
}



// FUNCTION 1467ae0d8 FUN_1467ae0d8 body=79 status=ok
// SIG undefined FUN_1467ae0d8(void)

ulonglong * FUN_1467ae0d8(undefined8 param_1,ulonglong *param_2)

{
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401a700c(&local_1c,0x105);
  *param_2 = (ulonglong)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ae12c FUN_1467ae12c body=70 status=ok
// SIG undefined FUN_1467ae12c(void)

bool FUN_1467ae12c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  FUN_1400416c5();
  lVar1 = FUN_14004172c(&DAT_14c8338c8,param_4,param_5,param_2,param_3);
  return lVar1 != 0;
}



// FUNCTION 1467ae176 FUN_1467ae176 body=82 status=ok
// SIG undefined FUN_1467ae176(void)

undefined8 FUN_1467ae176(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144b52c40(*(undefined4 *)(param_1 + 8),param_3);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar2 = param_3 + 0x7fffe;
    if (-1 < param_3 + 0x3ffff) {
      lVar2 = param_3 + 0x3ffff;
    }
    lVar1 = lVar1 + (lVar2 >> 0x12) * 0x112;
  }
  *param_2 = lVar1;
  return 1;
}



// FUNCTION 1467ae1d4 FUN_1467ae1d4 body=194 status=ok
// SIG undefined FUN_1467ae1d4(void)

undefined8 FUN_1467ae1d4(undefined8 param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467ae29c(param_1,&local_40);
  puVar2 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar2 = local_40;
  }
  FUN_1467ae2d6(param_1,&local_50);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  local_58 = L"BA7AA26CD1C3498787A3F3AA53895042";
  FUN_140002266(param_2,L"C_%s_CL_%s_%s",puVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ae29c FUN_1467ae29c body=58 status=ok
// SIG undefined FUN_1467ae29c(void)

undefined8 FUN_1467ae29c(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = *(int *)(param_1 + 0xc) + 4;
  if (uVar1 < 0xe) {
    pwVar2 = (wchar_t *)(&PTR_u_HyperFast4_149e02128)[uVar1];
  }
  else {
    pwVar2 = L"Unknown";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 1467ae2d6 FUN_1467ae2d6 body=58 status=ok
// SIG undefined FUN_1467ae2d6(void)

undefined8 FUN_1467ae2d6(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  wchar_t *pwVar2;
  
  uVar1 = *(int *)(param_1 + 8) - 8;
  if (uVar1 < 6) {
    pwVar2 = (wchar_t *)(&PTR_u_Kraken_149e02198)[uVar1];
  }
  else {
    pwVar2 = L"Unknown";
  }
  FUN_140056680(param_2,pwVar2);
  return param_2;
}



// FUNCTION 1467ae310 FUN_1467ae310 body=279 status=ok
// SIG undefined FUN_1467ae310(void)

void FUN_1467ae310(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if (param_2 != 0) {
    iVar2 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar7 = iVar2;
joined_r0x0001467ae331:
    do {
      iVar5 = iVar2 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar2 * 2 + 2;
        if ((iVar6 < (int)param_2) && ((int)param_1[iVar5] <= (int)param_1[iVar6])) {
          iVar5 = iVar6;
        }
        iVar6 = param_1[iVar2];
        if (iVar6 < (int)param_1[iVar5]) {
          param_1[iVar2] = param_1[iVar5];
          param_1[iVar5] = iVar6;
          iVar2 = iVar5;
          goto joined_r0x0001467ae331;
        }
      }
      bVar8 = iVar7 != 0;
      iVar2 = iVar7 + -1;
      iVar7 = iVar2;
    } while (bVar8);
    if (1 < (int)param_2) {
      uVar3 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar3 - 1];
      param_1[uVar3 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar4 = uVar3 - 1;
          iVar2 = 0;
          iVar5 = 1;
          iVar7 = 0;
          do {
            iVar2 = iVar2 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar2 < (longlong)uVar4) && ((int)param_1[iVar5] <= (int)param_1[iVar2]))
            {
              iVar6 = iVar2;
            }
            iVar2 = param_1[iVar7];
            if ((int)param_1[iVar6] <= iVar2) break;
            param_1[iVar7] = param_1[iVar6];
            param_1[iVar6] = iVar2;
            iVar2 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar7 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar4);
          uVar1 = *param_1;
          *param_1 = param_1[uVar3 - 2];
          param_1[uVar3 - 2] = uVar1;
          uVar3 = uVar4;
        } while (2 < uVar4);
      }
    }
  }
  return;
}



// FUNCTION 1467ae428 FUN_1467ae428 body=132 status=ok
// SIG undefined FUN_1467ae428(void)

void FUN_1467ae428(longlong param_1,int param_2)

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



// FUNCTION 1467ae4ae FUN_1467ae4ae body=267 status=ok
// SIG undefined FUN_1467ae4ae(void)

longlong FUN_1467ae4ae(uint param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x368) != *(int *)(lVar1 + 0x394)) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar3 = *(longlong *)(lVar1 + 0x3a0);
    if (*(longlong *)(lVar1 + 0x3a0) == 0) {
      lVar3 = lVar1 + 0x398;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x3a8) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x360);
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x20;
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x20) == *param_2) {
          if (lVar3 != 0) goto LAB_1467ae59d;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  local_20 = param_2;
  FUN_1467ae5ba(&local_14,param_1);
  lVar3 = (longlong)local_14 * 0x20 +
          *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x360);
LAB_1467ae59d:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1467ae5ba FUN_1467ae5ba body=370 status=ok
// SIG undefined FUN_1467ae5ba(void)

undefined4 * FUN_1467ae5ba(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1467ae72e(local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_14274a6a8(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar3 = FUN_1467ae8ac(param_2,local_40,local_48);
  if (cVar3 == '\0') {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar6 = *(int *)(lVar2 + 0x368) - *(int *)(lVar2 + 0x394);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar2 & 0x1f);
    }
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x3a8);
    if (((int)uVar6 < 1) || (iVar4 <= iVar1)) {
      param_2 = iVar1 - 1U & param_2;
      *(uint *)((longlong)local_40 + 0x1c) = param_2;
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      lVar7 = *(longlong *)(lVar2 + 0x3a0);
      if (*(longlong *)(lVar2 + 0x3a0) == 0) {
        lVar7 = lVar2 + 0x398;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(lVar2 + 0x3a8) - 1U & (longlong)(int)param_2) * 4);
      lVar7 = *(longlong *)(lVar2 + 0x3a0);
      if (*(longlong *)(lVar2 + 0x3a0) == 0) {
        lVar7 = lVar2 + 0x398;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(lVar2 + 0x3a8) - 1U & (longlong)(int)param_2) * 4)
           = local_48[0];
    }
    else {
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x3a8) = iVar4;
      FUN_1467aea4a();
    }
  }
  *param_1 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467ae72e FUN_1467ae72e body=381 status=ok
// SIG undefined FUN_1467ae72e(void)

int * FUN_1467ae72e(int *param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  iVar4 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x394);
  if (iVar4 == 0) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar2 + 0x368);
    *(int *)(lVar2 + 0x368) = iVar6 + 1;
    if (*(int *)(lVar2 + 0x36c) == iVar6) {
      FUN_1447711aa(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                    0x360,iVar6);
    }
    lVar8 = (longlong)iVar6;
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar2 = lVar5 + 0x370;
    iVar4 = FUN_144a54ea4(lVar2,1);
    lVar5 = *(longlong *)(lVar5 + 0x380);
    if (lVar5 == 0) {
      lVar5 = lVar2;
    }
    iVar7 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    bVar3 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar6 = *(int *)(lVar2 + 0x390);
    lVar8 = (longlong)iVar6;
    iVar7 = *(int *)(*(longlong *)(lVar2 + 0x360) + 4 + lVar8 * 0x20);
    *(int *)(lVar2 + 0x390) = iVar7;
    iVar4 = iVar4 + -1;
    *(int *)(lVar2 + 0x394) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x360) + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar2 + 0x380);
  if (*(longlong *)(lVar2 + 0x380) == 0) {
    lVar5 = lVar2 + 0x370;
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_1 = iVar6;
  *(longlong *)(param_1 + 2) = lVar8 * 0x20 + *(longlong *)(lVar2 + 0x360);
  return param_1;
}



// FUNCTION 1467ae8ac FUN_1467ae8ac body=236 status=ok
// SIG undefined FUN_1467ae8ac(void)

undefined8 FUN_1467ae8ac(uint param_1,longlong *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar3 + 0x368);
  iVar2 = *(int *)(lVar3 + 0x394);
  if ((iVar7 - iVar2 != 1) && (iVar7 != iVar2)) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar6 = *(longlong *)(lVar3 + 0x3a0);
    if (*(longlong *)(lVar3 + 0x3a0) == 0) {
      lVar6 = lVar3 + 0x398;
    }
    iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x3a8) - 1U & param_1) * 4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x360);
      do {
        puVar1 = (undefined4 *)(lVar3 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(lVar3 + (longlong)iVar7 * 0x20) == *param_2) {
          FUN_14274a6a8(*(undefined8 *)(puVar1 + 2),puVar1[4]);
          if (*(longlong *)(puVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          lVar3 = *param_2;
          uVar4 = *(undefined4 *)((longlong)param_2 + 4);
          lVar6 = param_2[1];
          uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
          *(longlong *)(puVar1 + 4) = param_2[2];
          *puVar1 = (int)lVar3;
          puVar1[1] = uVar4;
          puVar1[2] = (int)lVar6;
          puVar1[3] = uVar5;
          FUN_1467ae998(*param_3);
          *param_3 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 1467ae998 FUN_1467ae998 body=178 status=ok
// SIG undefined FUN_1467ae998(void)

void FUN_1467ae998(int param_1)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar5 = *(longlong *)(lVar2 + 0x360);
  if (*(int *)(lVar2 + 0x394) != 0) {
    *(int *)(lVar5 + (longlong)
                     *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x390) * 0x20) = param_1;
  }
  uVar6 = 0xffffffff;
  *(undefined4 *)(lVar5 + (longlong)param_1 * 0x20) = 0xffffffff;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (0 < *(int *)(lVar2 + 0x394)) {
    uVar6 = *(undefined4 *)(lVar2 + 0x390);
  }
  *(undefined4 *)(lVar5 + 4 + (longlong)param_1 * 0x20) = uVar6;
  *(int *)(lVar2 + 0x390) = param_1;
  *(int *)(lVar2 + 0x394) = *(int *)(lVar2 + 0x394) + 1;
  lVar5 = *(longlong *)(lVar2 + 0x380);
  if (*(longlong *)(lVar2 + 0x380) == 0) {
    lVar5 = lVar2 + 0x370;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar3 = (byte)param_1 & 0x1f;
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1467aea4a FUN_1467aea4a body=656 status=ok
// SIG undefined FUN_1467aea4a(void)

void FUN_1467aea4a(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x3a0) != 0
     ) {
    FUN_1446efa72(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x3a0,0,0,4);
  }
  uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x3a8);
  uVar1 = local_48;
  if (uVar7 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x398,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        lVar4 = *(longlong *)(lVar3 + 0x3a0);
        if (*(longlong *)(lVar3 + 0x3a0) == 0) {
          lVar4 = lVar3 + 0x398;
        }
        *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x3a8) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_38 = 0x100000000;
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_30 = lVar3 + 0x370;
    local_28 = 0xffffffff;
    local_20 = 0;
    if (*(int *)(lVar3 + 0x388) != 0) {
      FUN_1449c0562(&local_38);
    }
    local_60 = (longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x360);
    local_58 = local_38;
    local_50 = local_30;
    local_48 = local_28;
    uVar1 = local_48;
    local_40 = local_20;
    local_3c = local_1c;
    local_48._4_4_ = (int)((ulonglong)local_28 >> 0x20);
    if (local_48._4_4_ < *(int *)(local_30 + 0x18)) {
      iVar2 = local_48._4_4_;
      local_48 = uVar1;
      do {
        lVar3 = *local_60;
        lVar5 = (longlong)iVar2 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar3 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar3 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(lVar4 + 0x3a8) - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 0x1c + lVar5) = iVar8;
        lVar10 = *(longlong *)(lVar4 + 0x3a0);
        if (*(longlong *)(lVar4 + 0x3a0) == 0) {
          lVar10 = lVar4 + 0x398;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar5) =
             *(undefined4 *)(lVar10 + ((longlong)*(int *)(lVar4 + 0x3a8) - 1U & uVar9) * 4);
        lVar3 = *(longlong *)(lVar4 + 0x3a0);
        if (*(longlong *)(lVar4 + 0x3a0) == 0) {
          lVar3 = lVar4 + 0x398;
        }
        *(int *)(lVar3 + ((longlong)iVar8 & (longlong)*(int *)(lVar4 + 0x3a8) - 1U) * 4) = iVar2;
        local_48 = CONCAT44(local_48._4_4_,(uint)local_48 & ~local_58._4_4_);
        FUN_1449c0562(&local_58);
        iVar2 = local_48._4_4_;
        uVar1 = local_48;
      } while (local_48._4_4_ < *(int *)(local_50 + 0x18));
    }
  }
  local_48 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467aecdc FUN_1467aecdc body=140 status=ok
// SIG undefined FUN_1467aecdc(void)

undefined8 * FUN_1467aecdc(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  lVar5 = param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -8 + (longlong)(int)lVar5 * 8);
  *(undefined8 *)(lVar1 + -8 + (longlong)(int)lVar5 * 8) = 0;
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + -8 + lVar5 * 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
    iVar3 = (int)param_1[1] - iVar4;
    if (iVar3 != 0) {
      memmove((void *)(lVar1 + lVar5 * 8 + -8),(void *)(lVar1 + lVar5 * 8),(longlong)iVar3 << 3);
      iVar4 = (int)param_1[1];
    }
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  if (param_3 == '\x01') {
    FUN_1467aed68(param_1);
  }
  return param_2;
}



// FUNCTION 1467aed68 FUN_1467aed68 body=62 status=ok
// SIG undefined FUN_1467aed68(void)

void FUN_1467aed68(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467aeda6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1467aeda6 FUN_1467aeda6 body=93 status=ok
// SIG undefined FUN_1467aeda6(void)

ulonglong FUN_1467aeda6(uint param_1,uint param_2)

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



// FUNCTION 1467aefec FUN_1467aefec body=38 status=ok
// SIG undefined FUN_1467aefec(void)

undefined8 FUN_1467aefec(undefined8 param_1,int param_2)

{
  FUN_145d0b41a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467af034 FUN_1467af034 body=131 status=ok
// SIG undefined FUN_1467af034(void)

void FUN_1467af034(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (((ulonglong)(lVar2 - lVar1) < 0x4000) && (lVar2 * 2 <= lVar1 * 3)) {
    return;
  }
  if (lVar1 == 0 || 0x40 < lVar2 - lVar1) {
    if (0 < lVar1) {
      lVar1 = FUN_144a3809e(lVar1,1);
      lVar2 = *(longlong *)(param_1 + 0x10);
    }
    if (lVar1 != lVar2) {
      *(longlong *)(param_1 + 0x10) = lVar1;
      FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,1,1);
    }
  }
  return;
}



// FUNCTION 1467af0ba FUN_1467af0ba body=322 status=ok
// SIG undefined FUN_1467af0ba(void)

void FUN_1467af0ba(longlong *param_1)

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



// FUNCTION 1467af1fe FUN_1467af1fe body=48 status=ok
// SIG undefined FUN_1467af1fe(void)

void FUN_1467af1fe(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1467af252 FUN_1467af252 body=93 status=ok
// SIG undefined FUN_1467af252(void)

void FUN_1467af252(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e01730;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467af2b0 FUN_1467af2b0 body=126 status=ok
// SIG undefined FUN_1467af2b0(void)

void FUN_1467af2b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e01730;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467af31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467af32e FUN_1467af32e body=21 status=ok
// SIG undefined FUN_1467af32e(void)

undefined8 FUN_1467af32e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467af346 FUN_1467af346 body=88 status=ok
// SIG undefined FUN_1467af346(void)

void FUN_1467af346(longlong param_1,int param_2)

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



// FUNCTION 1467af39e FUN_1467af39e body=119 status=ok
// SIG undefined FUN_1467af39e(void)

void FUN_1467af39e(longlong param_1)

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
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,1,1);
    }
  }
  return;
}



// FUNCTION 1467af415 FUN_1467af415 body=262 status=ok
// SIG undefined FUN_1467af415(void)

undefined8 FUN_1467af415(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(short *)*param_1 == 0x2f) {
    *param_1 = (short *)*param_1 + 1;
    cVar1 = FUN_1467af51c(param_1,param_3);
    if (cVar1 != '\0') {
      if (*(short *)*param_1 == 0x2f) {
        *param_1 = (short *)*param_1 + 1;
        cVar1 = FUN_1467afa44(param_1,param_3);
        if (cVar1 == '\0') goto LAB_1467af4be;
      }
      uVar2 = 1;
      goto LAB_1467af4c0;
    }
  }
  else if (param_3 != 0) {
    local_38 = L"StartWithSlash";
    local_30 = 0xe;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"VersePath";
    local_30 = 9;
    FUN_1446e940c(local_40,&local_38);
    FUN_140208bae(&local_38,local_40,local_3c,L"Verse path must start with a slash");
    FUN_140008f88(param_3,&local_38);
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
LAB_1467af4be:
  uVar2 = 0;
LAB_1467af4c0:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1467af51c FUN_1467af51c body=1319 status=ok
// SIG undefined FUN_1467af51c(void)

ulonglong FUN_1467af51c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  short sVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  wchar_t *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8;
  int local_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = *param_1;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  cVar4 = FUN_1467afdf7(param_1,1,param_2);
  if (cVar4 == '\0') {
    if (param_2 != (longlong *)0x0) {
      for (lVar5 = 0; (sVar2 = *(short *)(lVar7 + lVar5 * 2), sVar2 != 0 && (sVar2 != 0x2f));
          lVar5 = lVar5 + 1) {
      }
      if ((int)lVar5 == 0) {
        local_88 = L"EmptyDomain";
        local_80[0] = 0xb;
        FUN_1446e940c(&local_98,&local_88);
        local_88 = L"VersePath";
        local_80[0] = 9;
        FUN_1446e940c(&local_a8,&local_88);
        FUN_140208bae(&local_88,&local_a8,&local_98,L"Verse domain cannot be empty");
        FUN_140008f88(param_2,&local_88);
        local_118[0] = local_88;
      }
      else {
        local_d8 = (longlong *)*param_2;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 8))();
        }
        local_d0 = (undefined4)param_2[1];
        local_f8 = lVar7;
        local_f0 = (int)lVar5;
        FUN_1417036e0(local_e8);
        local_88 = L"InvalidDomain";
        local_80[0] = 0xd;
        FUN_1446e940c(local_11c,&local_88);
        local_88 = L"VersePath";
        local_80[0] = 9;
        FUN_1446e940c(local_120,&local_88);
        FUN_140208bae(local_118,local_120,local_11c,L"Invalid Verse domain \"{0}\" : {1}");
        FUN_14023409e(&local_108,local_118,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(local_78,local_e8);
        local_68 = 4;
        FUN_14023423e(local_58,&local_d8);
        local_a0 = &local_48;
        local_a8 = &local_88;
        FUN_14010d304(&local_98);
        local_b8 = local_108;
        local_b0 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar7 = 0x30;
        do {
          plVar3 = *(longlong **)((longlong)local_80 + lVar7 + -8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
            *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
            *(undefined4 *)((longlong)local_80 + lVar7) = 0;
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != -0x10);
LAB_1467af76c:
        if (local_100 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_100 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_100)(local_100);
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_100 + 0x10))(local_100);
            }
          }
        }
        if (local_e8[0] != (longlong *)0x0) {
          (**(code **)(*local_e8[0] + 0x10))();
        }
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 0x10))();
        }
        FUN_140008f88(param_2,local_c8);
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
      }
      if (local_118[0] != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_118[0] + 0x10))();
      }
    }
  }
  else {
    if (*(short *)*param_1 != 0x40) goto LAB_1467af7e6;
    *param_1 = (longlong)((short *)*param_1 + 1);
    cVar4 = FUN_1467afdf7(param_1,0,param_2);
    if (cVar4 != '\0') goto LAB_1467af7e6;
    if (param_2 != (longlong *)0x0) {
      for (lVar5 = 0; (sVar2 = *(short *)(lVar7 + lVar5 * 2), sVar2 != 0 && (sVar2 != 0x2f));
          lVar5 = lVar5 + 1) {
      }
      if ((int)lVar5 != 0) {
        local_d8 = (longlong *)*param_2;
        if (local_d8 != (longlong *)0x0) {
          (**(code **)(*local_d8 + 8))();
        }
        local_d0 = (undefined4)param_2[1];
        local_f8 = lVar7;
        local_f0 = (int)lVar5;
        FUN_1417036e0(local_e8);
        local_88 = L"InvalidDomain";
        local_80[0] = 0xd;
        FUN_1446e940c(local_11c,&local_88);
        local_88 = L"VersePath";
        local_80[0] = 9;
        FUN_1446e940c(local_120,&local_88);
        FUN_140208bae(local_118,local_120,local_11c,L"Invalid Verse domain \"{0}\" : {1}");
        FUN_14023409e(&local_108,local_118,1);
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
        FUN_14023423e(local_78,local_e8);
        local_68 = 4;
        FUN_14023423e(local_58,&local_d8);
        local_a0 = &local_48;
        local_a8 = &local_88;
        FUN_14010d304(&local_98);
        local_b8 = local_108;
        local_b0 = local_100;
        if (local_100 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_100 + 1) = (int)local_100[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_c8,&local_b8,&local_98);
        FUN_14007f2db(local_98,local_90);
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        lVar7 = 0x30;
        do {
          plVar3 = *(longlong **)((longlong)local_80 + lVar7 + -8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))();
            *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
            *(undefined4 *)((longlong)local_80 + lVar7) = 0;
          }
          lVar7 = lVar7 + -0x20;
        } while (lVar7 != -0x10);
        goto LAB_1467af76c;
      }
    }
  }
  uVar6 = 0;
LAB_1467af7e6:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1467afa44 FUN_1467afa44 body=946 status=ok
// SIG undefined FUN_1467afa44(void)

undefined8 FUN_1467afa44(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  short *psVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  wchar_t *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  short *local_f8;
  int local_f0;
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  undefined1 local_78 [16];
  undefined4 local_68;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  psVar5 = (short *)*param_1;
  do {
    cVar3 = FUN_1467b0721(param_1,param_2);
    if (cVar3 == '\0') {
      if (param_2 != (longlong *)0x0) {
        for (lVar7 = 0; (psVar5[lVar7] != 0 && (psVar5[lVar7] != 0x2f)); lVar7 = lVar7 + 1) {
        }
        if ((int)lVar7 == 0) {
          if (*psVar5 == 0) {
            local_88 = L"EndWithSlash";
            local_80[0] = 0xc;
            FUN_1446e940c(&local_98,&local_88);
            local_88 = L"VersePath";
            local_80[0] = 9;
            FUN_1446e940c(&local_a8,&local_88);
            pwVar6 = L"Verse path cannot end with a slash";
          }
          else {
            local_88 = L"ConsecutiveSlashes";
            local_80[0] = 0x12;
            FUN_1446e940c(&local_98,&local_88);
            local_88 = L"VersePath";
            local_80[0] = 9;
            FUN_1446e940c(&local_a8,&local_88);
            pwVar6 = L"Verse path cannot have consecutive slashes";
          }
          FUN_140208bae(&local_88,&local_a8,&local_98,pwVar6);
          FUN_140008f88(param_2,&local_88);
          local_118[0] = local_88;
        }
        else {
          local_d8 = (longlong *)*param_2;
          if (local_d8 != (longlong *)0x0) {
            (**(code **)(*local_d8 + 8))();
          }
          local_d0 = (undefined4)param_2[1];
          local_f8 = psVar5;
          local_f0 = (int)lVar7;
          FUN_1417036e0(local_e8);
          local_88 = L"InvalidIdentifierInSubPath";
          local_80[0] = 0x1a;
          FUN_1446e940c(local_11c,&local_88);
          local_88 = L"VersePath";
          local_80[0] = 9;
          FUN_1446e940c(local_120,&local_88);
          FUN_140208bae(local_118,local_120,local_11c,L"Invalid subpath \"{0}\" : {1}");
          FUN_14023409e(&local_108,local_118,1);
          local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
          FUN_14023423e(local_78,local_e8);
          local_68 = 4;
          FUN_14023423e(local_58,&local_d8);
          local_a0 = &local_48;
          local_a8 = &local_88;
          FUN_14010d304(&local_98);
          local_b8 = local_108;
          local_b0 = local_100;
          if (local_100 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_100 + 1) = (int)local_100[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_c8,&local_b8,&local_98);
          FUN_14007f2db(local_98,local_90);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          lVar7 = 0x30;
          do {
            plVar2 = *(longlong **)((longlong)local_80 + lVar7 + -8);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x10))();
              *(undefined8 *)((longlong)local_80 + lVar7 + -8) = 0;
              *(undefined4 *)((longlong)local_80 + lVar7) = 0;
            }
            lVar7 = lVar7 + -0x20;
          } while (lVar7 != -0x10);
          if (local_100 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_100 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_100)(local_100);
              LOCK();
              piVar1 = (int *)((longlong)local_100 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_100 + 0x10))(local_100);
              }
            }
          }
          if (local_e8[0] != (longlong *)0x0) {
            (**(code **)(*local_e8[0] + 0x10))();
          }
          if (local_d8 != (longlong *)0x0) {
            (**(code **)(*local_d8 + 0x10))();
          }
          FUN_140008f88(param_2,local_c8);
          if (local_c8[0] != (longlong *)0x0) {
            (**(code **)(*local_c8[0] + 0x10))();
          }
        }
        if (local_118[0] != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_118[0] + 0x10))();
        }
      }
      uVar4 = 0;
LAB_1467afcd9:
      if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar4;
    }
    if (*(short *)*param_1 != 0x2f) {
      uVar4 = 1;
      goto LAB_1467afcd9;
    }
    psVar5 = (short *)*param_1 + 1;
    *param_1 = psVar5;
  } while( true );
}



// FUNCTION 1467afdf7 FUN_1467afdf7 body=638 status=ok
// SIG undefined FUN_1467afdf7(void)

undefined8 FUN_1467afdf7(undefined8 *param_1,undefined4 param_2,longlong param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined8 uVar3;
  ushort *puVar4;
  wchar_t *pwVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar4 = (ushort *)*param_1;
  uVar1 = *puVar4;
  if (uVar1 == 0) {
LAB_1467aff58:
    if (param_3 == 0) goto LAB_1467affd9;
    local_38 = L"LabelEmpty";
    local_30 = 10;
    FUN_1446e940c(local_3c,&local_38);
    local_38 = L"VersePath";
    local_30 = 9;
    FUN_1446e940c(local_40,&local_38);
    pwVar5 = L"Domain label cannot be empty";
LAB_1467affad:
    FUN_140208bae(&local_38,local_40,local_3c,pwVar5);
    FUN_140008f88(param_3,&local_38);
  }
  else {
    bVar2 = (byte)param_2 ^ 1;
    if (uVar1 == 0x2f || bVar2 != 0) {
      if (uVar1 == 0x2f) goto LAB_1467aff58;
    }
    else if (uVar1 == 0x40) goto LAB_1467aff58;
    if (((9 < (ushort)(uVar1 - 0x30)) && (uVar1 != 0x5f)) &&
       (0x19 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
      if (param_3 == 0) goto LAB_1467affd9;
      if (uVar1 == 0x2e) {
        local_38 = L"LabelStartWithDot";
        local_30 = 0x11;
        FUN_1446e940c(local_3c,&local_38);
        local_38 = L"VersePath";
        local_30 = 9;
        FUN_1446e940c(local_40,&local_38);
        pwVar5 = L"Domain label cannot start with a dot";
      }
      else {
        if (uVar1 != 0x2d) goto LAB_1467b0056;
        local_38 = L"LabelStartWithDash";
        local_30 = 0x12;
        FUN_1446e940c(local_3c,&local_38);
        local_38 = L"VersePath";
        local_30 = 9;
        FUN_1446e940c(local_40,&local_38);
        pwVar5 = L"Domain label cannot start with a dash";
      }
      goto LAB_1467affad;
    }
    do {
      uVar1 = puVar4[1];
      puVar4 = puVar4 + 1;
      if (uVar1 == 0) {
LAB_1467aff44:
        *param_1 = puVar4;
        uVar3 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
        goto LAB_1467affdb;
      }
      if (uVar1 == 0x2f || bVar2 != 0) {
        if (uVar1 == 0x2f) goto LAB_1467aff44;
      }
      else if (uVar1 == 0x40) goto LAB_1467aff44;
    } while ((((ushort)(uVar1 - 0x2d) < 2) || ((ushort)(uVar1 - 0x30) < 10)) ||
            ((uVar1 == 0x5f || ((ushort)((uVar1 & 0xffdf) - 0x41) < 0x1a))));
    if (param_3 == 0) goto LAB_1467affd9;
LAB_1467b0056:
    FUN_1467b0076(&local_38);
    FUN_140008f88(param_3,&local_38);
  }
  if (local_38 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_38 + 0x10))();
  }
LAB_1467affd9:
  uVar3 = 0;
LAB_1467affdb:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1467b0076 FUN_1467b0076 body=254 status=ok
// SIG undefined FUN_1467b0076(void)

undefined8 FUN_1467b0076(undefined8 param_1)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  wchar_t *local_90;
  undefined4 local_88;
  undefined1 local_80 [64];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1467b0175(local_80);
  local_90 = L"DomainLabel";
  local_88 = 0xb;
  FUN_1446e940c(local_94,&local_90);
  local_90 = L"VersePath";
  local_88 = 9;
  FUN_1446e940c(local_98,&local_90);
  FUN_140208bae(&local_90,local_98,local_94,L"Domain label");
  FUN_142747bf4(param_1,local_80,&local_90);
  if (local_90 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_90 + 0x10))();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_1407d03f6(local_80);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b0175 FUN_1467b0175 body=235 status=ok
// SIG undefined FUN_1467b0175(void)

undefined8 * FUN_1467b0175(undefined8 *param_1,ushort *param_2,char param_3)

{
  ushort uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [6];
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = *param_2;
  if (uVar1 != 0) {
    do {
      param_2 = param_2 + 1;
      if (uVar1 == 0x2f || param_3 != '\x01') {
        if (uVar1 == 0x2f) break;
      }
      else if (uVar1 == 0x40) break;
      local_32 = uVar1;
      if ((((1 < (ushort)(uVar1 - 0x2d)) && (9 < (ushort)(uVar1 - 0x30))) && (uVar1 != 0x5f)) &&
         (0x19 < (ushort)((uVar1 & 0xffdf) - 0x41))) {
        FUN_1467b0262(param_1,local_38,&local_32,0);
      }
      uVar1 = *param_2;
    } while (uVar1 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467b0262 FUN_1467b0262 body=290 status=ok
// SIG undefined FUN_1467b0262(void)

undefined4 * FUN_1467b0262(longlong param_1,undefined4 *param_2,ushort *param_3,undefined8 param_4)

{
  ushort uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ushort *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1467b0386(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  local_48[2] = 0xffff;
  local_48[3] = 0xffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_1467b046c(param_1,uVar1,local_48);
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
      uVar4 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_48 + 4) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar4) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1467b0586(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b0386 FUN_1467b0386 body=230 status=ok
// SIG undefined FUN_1467b0386(void)

int * FUN_1467b0386(longlong *param_1,int *param_2)

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
      FUN_1447cc1b4(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1467b046c FUN_1467b046c body=143 status=ok
// SIG undefined FUN_1467b046c(void)

void FUN_1467b046c(longlong *param_1,uint param_2,short *param_3,int *param_4,undefined1 *param_5)

{
  undefined1 uVar1;
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
        if (*(short *)(*param_1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_1467b04fc(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_1467b04d9;
        }
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_1467b04d9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1467b04fc FUN_1467b04fc body=138 status=ok
// SIG undefined FUN_1467b04fc(void)

void FUN_1467b04fc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
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
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1467b0586 FUN_1467b0586 body=410 status=ok
// SIG undefined FUN_1467b0586(void)

void FUN_1467b0586(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
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
        uVar8 = (int)param_1[9] - 1U & (uint)*(ushort *)(lVar2 + lVar5 * 0xc);
        *(uint *)(lVar2 + 8 + lVar5 * 0xc) = uVar8;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 4 + lVar5 * 0xc) =
             *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4) = iVar4;
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



// FUNCTION 1467b0721 FUN_1467b0721 body=1079 status=ok
// SIG undefined FUN_1467b0721(void)

undefined8 FUN_1467b0721(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ushort *puVar6;
  ushort *puVar7;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  longlong *local_e8;
  longlong *local_e0;
  undefined4 local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  wchar_t *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar7 = (ushort *)*param_1;
  uVar3 = *puVar7;
  if ((uVar3 == 0x2f) || (uVar3 == 0)) {
    if (param_2 == 0) goto LAB_1467b0914;
    local_a8 = DAT_14c8337e0;
    if (DAT_14c8337e0 != (longlong *)0x0) {
      (**(code **)(*DAT_14c8337e0 + 8))();
    }
    local_a0 = DAT_14c8337e8;
    local_58 = L"IdentEmpty";
    local_50 = 10;
    FUN_1446e940c(local_cc,&local_58);
    local_58 = L"VersePath";
    local_50 = 9;
    FUN_1446e940c(local_d0,&local_58);
    FUN_140208bae(local_c8,local_d0,local_cc,L"{0} cannot be empty");
    FUN_14023409e(&local_b8,local_c8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,&local_a8);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_b8;
    local_80 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_98,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    plVar5 = local_a8;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar5 = local_a8;
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          plVar5 = local_a8;
        }
      }
    }
LAB_1467b08d8:
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    FUN_140008f88(param_2,local_98);
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
  }
  else {
    if ((uVar3 == 0x5f) || ((ushort)((uVar3 & 0xffdf) - 0x41) < 0x1a)) {
      puVar6 = puVar7 + 1;
      do {
        puVar7 = puVar6;
        uVar3 = *puVar7;
        if ((uVar3 == 0) || (uVar3 == 0x2f)) {
          *param_1 = puVar7;
          uVar4 = CONCAT71((uint7)(byte)(uVar3 >> 8),1);
          goto LAB_1467b0916;
        }
        puVar6 = puVar7 + 1;
      } while ((((ushort)(uVar3 - 0x30) < 10) || (uVar3 == 0x5f)) ||
              ((ushort)((uVar3 & 0xffdf) - 0x41) < 0x1a));
      if (param_2 == 0) goto LAB_1467b0914;
    }
    else {
      if (param_2 == 0) goto LAB_1467b0914;
      if ((ushort)(uVar3 - 0x30) < 10) {
        local_e0 = DAT_14c8337e0;
        if (DAT_14c8337e0 != (longlong *)0x0) {
          (**(code **)(*DAT_14c8337e0 + 8))();
        }
        local_d8 = DAT_14c8337e8;
        local_58 = L"IdentStartWithNumber";
        local_50 = 0x14;
        FUN_1446e940c(local_cc,&local_58);
        local_58 = L"VersePath";
        local_50 = 9;
        FUN_1446e940c(local_d0,&local_58);
        FUN_140208bae(local_c8,local_d0,local_cc,L"{0} cannot start with a number");
        FUN_14023409e(&local_f0,local_c8,1);
        local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
        FUN_14023423e(local_48,&local_e0);
        local_70 = &local_38;
        local_78 = &local_58;
        FUN_14010d304(&local_68);
        local_88 = local_f0;
        local_80 = local_e8;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_98,&local_88,&local_68);
        FUN_14007f2db(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_48[0] != (longlong *)0x0) {
          (**(code **)(*local_48[0] + 0x10))();
        }
        plVar5 = local_e0;
        if (local_e8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_e8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_e8)(local_e8);
            LOCK();
            piVar2 = (int *)((longlong)local_e8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar5 = local_e0;
            if (*piVar2 == 0) {
              (**(code **)(*local_e8 + 0x10))(local_e8);
              plVar5 = local_e0;
            }
          }
        }
        goto LAB_1467b08d8;
      }
    }
    FUN_1467b0b59(&local_58,puVar7);
    FUN_140008f88(param_2,&local_58);
    local_c8[0] = local_58;
  }
  if (local_c8[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_c8[0] + 0x10))();
  }
LAB_1467b0914:
  uVar4 = 0;
LAB_1467b0916:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1467b0b59 FUN_1467b0b59 body=118 status=ok
// SIG undefined FUN_1467b0b59(void)

undefined8 FUN_1467b0b59(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1467b0bd0(local_68);
  FUN_142747bf4(param_1,local_68,&DAT_14c8337e0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1407d03f6(local_68);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b0bd0 FUN_1467b0bd0 body=199 status=ok
// SIG undefined FUN_1467b0bd0(void)

undefined8 * FUN_1467b0bd0(undefined8 *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined1 auStack_58 [40];
  undefined1 local_30 [6];
  ushort local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  uVar1 = *param_2;
  if ((uVar1 != 0) && (uVar1 != 0x2f)) {
    do {
      local_2a = uVar1;
      param_2 = param_2 + 1;
      if (((9 < (ushort)(local_2a - 0x30)) && (local_2a != 0x5f)) &&
         (0x19 < (ushort)((local_2a & 0xffdf) - 0x41))) {
        FUN_1467b0262(param_1,local_30,&local_2a,0);
      }
      uVar1 = *param_2;
    } while ((uVar1 != 0x2f) && (uVar1 != 0));
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1467b0c9a FUN_1467b0c9a body=119 status=ok
// SIG undefined FUN_1467b0c9a(void)

void FUN_1467b0c9a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x20c) = iVar5;
    FUN_1467b0d12(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467b0d12 FUN_1467b0d12 body=141 status=ok
// SIG undefined FUN_1467b0d12(void)

void FUN_1467b0d12(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,8);
  return;
}



// FUNCTION 1467b0d9f FUN_1467b0d9f body=283 status=ok
// SIG undefined FUN_1467b0d9f(void)

void FUN_1467b0d9f(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001467b0dc0:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x0001467b0dc0;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1467b0eba FUN_1467b0eba body=119 status=ok
// SIG undefined FUN_1467b0eba(void)

void FUN_1467b0eba(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x40c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x40c) = iVar5;
    FUN_1467b0f32(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1467b0f32 FUN_1467b0f32 body=141 status=ok
// SIG undefined FUN_1467b0f32(void)

void FUN_1467b0f32(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x400);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x400,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x400),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x400,param_2,param_3,0x10);
  return;
}



// FUNCTION 1467b0fc0 FUN_1467b0fc0 body=95 status=ok
// SIG undefined FUN_1467b0fc0(void)

void FUN_1467b0fc0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_144716727(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1467b1020 FUN_1467b1020 body=63 status=ok
// SIG undefined FUN_1467b1020(void)

void FUN_1467b1020(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467b1060(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1467b1060 FUN_1467b1060 body=97 status=ok
// SIG undefined FUN_1467b1060(void)

ulonglong FUN_1467b1060(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467b10c2 FUN_1467b10c2 body=105 status=ok
// SIG undefined FUN_1467b10c2(void)

void FUN_1467b10c2(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e(param_2 * 4,4);
    uVar2 = 0x7fffffffffffffff;
    if (param_2 <= (longlong)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2;
    }
  }
  if (uVar2 != *(ulonglong *)(param_1 + 0x10)) {
    *(ulonglong *)(param_1 + 0x10) = uVar2;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1467b112c FUN_1467b112c body=96 status=ok
// SIG undefined FUN_1467b112c(void)

void FUN_1467b112c(longlong param_1,int param_2)

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



// FUNCTION 1467b118c FUN_1467b118c body=132 status=ok
// SIG undefined FUN_1467b118c(void)

void FUN_1467b118c(longlong param_1,int param_2)

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



// FUNCTION 1467b1212 FUN_1467b1212 body=141 status=ok
// SIG undefined FUN_1467b1212(void)

void FUN_1467b1212(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if ((longlong)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (uVar1 * 3 >> 3) + 0x10;
  }
  uVar2 = FUN_144a3809e(uVar3 << 2,4);
  uVar3 = 0x7fffffffffffffff;
  if ((longlong)uVar1 <= (longlong)(uVar2 >> 2)) {
    uVar3 = uVar2 >> 2;
  }
  *(ulonglong *)(param_1 + 0x10) = uVar3;
  FUN_140d2d5e4(param_1,param_2,uVar3,4,4);
  return;
}



// FUNCTION 1467b12a0 FUN_1467b12a0 body=63 status=ok
// SIG undefined FUN_1467b12a0(void)

void FUN_1467b12a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1467b12e0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1467b12e0 FUN_1467b12e0 body=97 status=ok
// SIG undefined FUN_1467b12e0(void)

ulonglong FUN_1467b12e0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1467b1342 FUN_1467b1342 body=67 status=ok
// SIG undefined FUN_1467b1342(void)

void FUN_1467b1342(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1467b1386(param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (lVar1 != *(longlong *)(param_1 + 0x10)) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    FUN_140d2d5e4(param_1,*(undefined8 *)(param_1 + 8),lVar1,4,4);
  }
  return;
}



// FUNCTION 1467b1386 FUN_1467b1386 body=100 status=ok
// SIG undefined FUN_1467b1386(void)

ulonglong FUN_1467b1386(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  
  if (((((param_3 - param_2 & 0x3ffffffffffff000) != 0) ||
       ((longlong)(param_2 * 3) < (longlong)(param_3 * 2))) &&
      (param_2 == 0 || 0x40 < (longlong)(param_3 - param_2))) &&
     (param_3 = param_2, 0 < (longlong)param_2)) {
    uVar1 = FUN_144a3809e(param_2 << 2,4);
    param_3 = uVar1 >> 2;
  }
  return param_3;
}



// FUNCTION 1467b13ea FUN_1467b13ea body=31 status=ok
// SIG undefined FUN_1467b13ea(void)

undefined8 FUN_1467b13ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1467b1426 FUN_1467b1426 body=93 status=ok
// SIG undefined FUN_1467b1426(void)

void FUN_1467b1426(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149e01c10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1467b1484 FUN_1467b1484 body=126 status=ok
// SIG undefined FUN_1467b1484(void)

void FUN_1467b1484(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149e01c10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001467b14f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1467b150e FUN_1467b150e body=21 status=ok
// SIG undefined FUN_1467b150e(void)

undefined8 FUN_1467b150e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1467b152a FUN_1467b152a body=86 status=ok
// SIG undefined FUN_1467b152a(void)

void FUN_1467b152a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 2)) {
    uVar2 = uVar1 >> 2 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1467b1580 FUN_1467b1580 body=132 status=ok
// SIG undefined FUN_1467b1580(void)

void FUN_1467b1580(longlong param_1,int param_2)

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



// FUNCTION 1467b1606 FUN_1467b1606 body=86 status=ok
// SIG undefined FUN_1467b1606(void)

void FUN_1467b1606(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1467b165c(param_1 + 0x15);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001467b1652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1467b165c FUN_1467b165c body=156 status=ok
// SIG undefined FUN_1467b165c(void)

void FUN_1467b165c(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_140074620();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  if (0 < (int)param_1[1]) {
    lVar5 = 0;
    do {
      lVar4 = DAT_14c833a48;
      lVar6 = (longlong)*(int *)(*param_1 + lVar5 * 4) + 1;
      iVar2 = *(int *)(DAT_14c833a48 + 0x14 + lVar6 * 0x18);
      if (iVar2 == 1) {
        lVar1 = DAT_14c833a48 + lVar6 * 0x18;
        *(undefined4 *)(lVar1 + 0xc) = 0;
        iVar3 = *(int *)(lVar4 + 0x10);
        *(int *)(lVar1 + 0x10) = iVar3;
        *(int *)(DAT_14c833a48 + 0xc + (longlong)iVar3 * 0x18) = (int)lVar6;
        *(int *)(lVar4 + 0x10) = (int)lVar6;
        DAT_14c833a68 = DAT_14c833a68 + 1;
      }
      *(int *)(DAT_14c833a48 + 0x14 + lVar6 * 0x18) = iVar2 + -1;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b16f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8339c0);
  return;
}



// FUNCTION 1467b16f8 FUN_1467b16f8 body=89 status=ok
// SIG undefined FUN_1467b16f8(void)

void FUN_1467b16f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 1467b1752 FUN_1467b1752 body=79 status=ok
// SIG undefined FUN_1467b1752(void)

undefined8 FUN_1467b1752(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((DAT_14c83f348 != (longlong *)0x0 && DAT_14c83f350 != 0) &&
     (cVar1 = (**(code **)(*DAT_14c83f348 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14c83f348;
    if (DAT_14c83f350 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001467b179d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1467b17a2 FUN_1467b17a2 body=35 status=ok
// SIG undefined FUN_1467b17a2(void)

void FUN_1467b17a2(void)

{
  if (DAT_14c83f398 == (longlong *)0x0 || DAT_14c83f3a0 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b17c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c83f398 + 0x60))();
  return;
}



// FUNCTION 1467b17c6 FUN_1467b17c6 body=171 status=ok
// SIG undefined FUN_1467b17c6(void)

ulonglong FUN_1467b17c6(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0xf0;
    do {
      if (*(char *)(lVar5 + 0xe9) != '\0') {
        if (lVar5 == 0) {
          return 0;
        }
        iVar1 = FUN_144a788f7(param_2 & 0xffffffff);
        if (*(int *)(lVar5 + 0x88) == *(int *)(lVar5 + 0xb4)) {
          return 0;
        }
        uVar2 = iVar1 + (int)(param_2 >> 0x20);
        uVar4 = (ulonglong)uVar2;
        lVar3 = lVar5 + 0xb8;
        if (*(longlong *)(lVar5 + 0xc0) != 0) {
          lVar3 = *(longlong *)(lVar5 + 0xc0);
        }
        iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar5 + 200) - 1U & uVar2) * 4);
        if (iVar1 == -1) {
          return 0;
        }
        do {
          bVar6 = *(ulonglong *)(*(longlong *)(lVar5 + 0x80) + (longlong)iVar1 * 0x20) == param_2;
          uVar4 = CONCAT71((int7)(uVar4 >> 8),bVar6);
          if (bVar6) {
            return uVar4;
          }
          iVar1 = *(int *)((longlong)iVar1 * 0x20 + *(longlong *)(lVar5 + 0x80) + 0x18);
        } while (iVar1 != -1);
        return uVar4;
      }
      lVar5 = lVar5 + 0xf0;
      lVar3 = lVar3 + -0xf0;
    } while (lVar3 != 0);
  }
  return 0;
}



// FUNCTION 1467b1872 FUN_1467b1872 body=123 status=ok
// SIG undefined FUN_1467b1872(void)

undefined8 * FUN_1467b1872(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[0xb] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 1467b18ee FUN_1467b18ee body=89 status=ok
// SIG undefined FUN_1467b18ee(void)

void FUN_1467b18ee(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
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



// FUNCTION 1467b1948 FUN_1467b1948 body=113 status=ok
// SIG undefined FUN_1467b1948(void)

int FUN_1467b1948(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1467bac4a(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0xf0);
  memmove((void *)((longlong)_Src + 0xf0),_Src,(ulonglong)(uint)(iVar1 - param_3) * 0xf0);
  FUN_1467bab0e((longlong)param_3 * 0xf0 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1467b19ba FUN_1467b19ba body=164 status=ok
// SIG undefined FUN_1467b19ba(void)

void FUN_1467b19ba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  FUN_1467b8e92(param_1 + 0x80);
  FUN_1467b9018(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1467b1a5e FUN_1467b1a5e body=119 status=ok
// SIG undefined FUN_1467b1a5e(void)

void FUN_1467b1a5e(longlong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar2 = FUN_140e92164();
  uVar3 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar3) {
    lVar4 = uVar3 * 0xf0;
    do {
      lVar4 = lVar4 + -0xf0;
      if (*(char *)(*param_1 + 0xe9 + lVar4) == '\0') {
        FUN_14274c220(param_1,uVar2,*param_1 + lVar4);
        FUN_1467b1ad6(param_1,(int)uVar3 + -1,1);
      }
      bVar1 = 1 < uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
  }
  return;
}



// FUNCTION 1467b1ad6 FUN_1467b1ad6 body=112 status=ok
// SIG undefined FUN_1467b1ad6(void)

void FUN_1467b1ad6(longlong *param_1,uint param_2,char param_3)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xf0 + *param_1);
  FUN_1467b19ba(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xf0),(longlong)(int)(~param_2 + iVar1) * 0xf0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  if (param_3 != '\x01') {
    return;
  }
  FUN_1467baef8(param_1);
  return;
}



// FUNCTION 1467b1b46 FUN_1467b1b46 body=137 status=ok
// SIG undefined FUN_1467b1b46(void)

void FUN_1467b1b46(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (1 < (int)param_1[1]) {
    uVar4 = FUN_140e92164();
    uVar5 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar5) {
      lVar6 = uVar5 * 0xf0;
      do {
        lVar6 = lVar6 + -0xf0;
        lVar1 = *param_1;
        cVar3 = FUN_1467b1bd0(param_1,lVar1 + lVar6);
        if (cVar3 == '\0') {
          FUN_14274c220(param_1,uVar4,lVar1 + lVar6);
          FUN_1467b1ad6(param_1,(int)uVar5 + -1,1);
        }
        bVar2 = 1 < uVar5;
        uVar5 = uVar5 - 1;
      } while (bVar2);
    }
  }
  return;
}



// FUNCTION 1467b1bd0 FUN_1467b1bd0 body=174 status=ok
// SIG undefined FUN_1467b1bd0(void)

undefined8 FUN_1467b1bd0(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar6 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0xf0;
    do {
      if (*(char *)(lVar6 + 0xe9) != '\0') {
        if (lVar6 == 0) {
          return 0;
        }
        iVar8 = *(int *)(lVar6 + 0x10);
        iVar3 = *(int *)(param_2 + 0x10);
        if (iVar8 != iVar3) {
          uVar5 = (ulonglong)(uint)(iVar3 + iVar8);
          bVar10 = iVar3 + iVar8 == 1;
          goto LAB_1467b1c6c;
        }
        if (iVar8 < 2) {
          return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
        }
        uVar5 = *(ulonglong *)(param_2 + 8);
        lVar4 = 0;
        goto LAB_1467b1c28;
      }
      lVar6 = lVar6 + 0xf0;
      lVar4 = lVar4 + -0xf0;
    } while (lVar4 != 0);
  }
  return 0;
LAB_1467b1c28:
  uVar1 = *(ushort *)(*(longlong *)(lVar6 + 8) + lVar4);
  uVar2 = *(ushort *)(uVar5 + lVar4);
  uVar9 = (uint)uVar2;
  uVar7 = (uint)uVar1;
  if (uVar1 != uVar2) {
    if ((uVar2 | uVar1) < 0x80) {
      uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar1];
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1467b1c60;
    }
    iVar8 = uVar7 - uVar9;
    goto LAB_1467b1c74;
  }
  if (uVar7 == 0) {
    iVar8 = 0;
LAB_1467b1c74:
    bVar10 = iVar8 == 0;
LAB_1467b1c6c:
    return CONCAT71((int7)(uVar5 >> 8),bVar10);
  }
LAB_1467b1c60:
  lVar4 = lVar4 + 2;
  goto LAB_1467b1c28;
}



// FUNCTION 1467b1c7e FUN_1467b1c7e body=3854 status=ok
// SIG undefined FUN_1467b1c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467b1c7e(uint *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  uint *puVar5;
  void *_Buf1;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_268 [32];
  longlong local_248;
  uint *local_240;
  undefined8 local_238;
  uint *local_230;
  uint *local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 local_214;
  uint local_20c;
  longlong local_208;
  undefined8 uStack_200;
  int local_1ec;
  uint local_1e8;
  undefined1 uStack_1e4;
  undefined1 uStack_1e3;
  undefined2 uStack_1e2;
  uint uStack_1e0;
  uint uStack_1dc;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined **local_178;
  ulonglong *local_170;
  byte local_150;
  byte local_14e;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_1ec = -0x1123f22;
  puVar4 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1ec,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1ec);
    }
  }
  else {
    local_1ec = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      *param_1 = 6;
LAB_1467b1d0f:
      puVar5 = *(uint **)param_2[1];
      if ((uint *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
        }
        else {
          thunk_FUN_14572512c(param_2,param_1);
        }
      }
      else {
        *param_1 = *puVar5;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
    }
  }
  else {
    if (local_1ec == -0x1123f22) goto LAB_1467b1d0f;
    *param_1 = 0;
    (**(code **)(*param_2 + 0x1a0))(param_2,0);
  }
  if (*param_1 < 8) {
    local_238 = (**(code **)(*param_2 + 0x28))(param_2);
    if (*param_1 < 6) {
      local_248 = 0;
    }
    else {
      if ((*(byte *)(param_2 + 5) & 4) != 0) {
        puVar5 = param_1 + 0x36;
        param_1[0x38] = 0;
        if (param_1[0x39] == 0x10) {
          uVar14 = 0;
          uVar8 = 0x10;
        }
        else {
          FUN_144893a1c(puVar5,0x10);
          uVar14 = param_1[0x38];
          uVar8 = param_1[0x39];
        }
        param_1[0x38] = uVar14 + 0x10;
        if (uVar8 - uVar14 < 0x10) {
          FUN_1447403be(puVar5,uVar14);
        }
        lVar11 = *(longlong *)puVar5;
        *(undefined8 *)(lVar11 + (int)uVar14) = 0;
        ((undefined8 *)(lVar11 + (int)uVar14))[1] = 0;
      }
      FUN_1408383eb(param_2,param_1 + 0x34);
      FUN_140077068(param_2,param_1 + 0x36);
      local_248 = (**(code **)(*param_2 + 0x28))(param_2);
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1467b2cae(&local_178,param_2);
        FUN_1467b2d2a(&local_178,&local_1e8,local_248,*(undefined8 *)(param_1 + 0x34));
        local_88 = CONCAT17((undefined1)uStack_1e0,
                            CONCAT25(uStack_1e2,
                                     CONCAT14(uStack_1e3,CONCAT13(uStack_1e4,local_1e8._1_3_))));
        uStack_80 = (uint *)CONCAT17(uStack_1d8,CONCAT43(uStack_1dc,uStack_1e0._1_3_));
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1dc = 0;
        uStack_1e0 = 0x10;
        FUN_1447403be(&local_1e8,0);
        puVar3 = (undefined4 *)
                 CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
        *puVar3 = (uint)local_88;
        puVar3[1] = local_88._4_4_;
        puVar3[2] = (uint)uStack_80;
        puVar3[3] = uStack_80._4_4_;
        bVar17 = uStack_1e0 == param_1[0x38];
        _Buf1 = (void *)CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
        if (uStack_1e0 != 0 && bVar17) {
          iVar9 = memcmp(_Buf1,*(void **)(param_1 + 0x36),(longlong)(int)uStack_1e0);
          bVar17 = iVar9 == 0;
        }
        *(bool *)(param_1 + 0x3a) = bVar17;
        if (_Buf1 != (void *)0x0) {
          FUN_1400020a8(_Buf1);
        }
        local_178 = &PTR_FUN_149e04d70;
        FUN_145c422f4();
        FUN_144a7fc42(&local_178);
        if (bVar17 == false) goto LAB_1467b1d77;
      }
    }
    FUN_1467b2cae(&local_178,param_2);
    local_228 = param_1 + 2;
    FUN_14021219d(&local_178);
    FUN_140077068(&local_178,param_1 + 10);
    FUN_14021219d(&local_178,param_1 + 0x10);
    uVar14 = *param_1;
    if (3 < uVar14) {
      if ((local_150 & 4) != 0) {
        FUN_140212f8e(&local_1e8);
        *(ulonglong *)(param_1 + 0x14) =
             CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
      }
      FUN_1408383eb(&local_178,param_1 + 0x14);
      uVar14 = *param_1;
    }
    if (uVar14 < 3) {
      if (uVar14 == 0) {
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        FUN_14021219d(&local_178,&local_1e8);
        lVar11 = CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
      }
      else {
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e0 = 0;
        uStack_1d8 = 0;
        uStack_1d7 = 0;
        uStack_1d0 = 0;
        FUN_146810015(&local_178,&local_1e8);
        lVar11 = CONCAT71(uStack_1d7,uStack_1d8);
      }
      if (lVar11 != 0) {
        FUN_1400020a8();
      }
    }
    else if ((uint *)local_170[1] < (uint *)*local_170 + 1) {
      if ((local_14e & 2) == 0) {
        (*(code *)local_178[0x2e])(&local_178,param_1 + 0x1a,4);
      }
      else {
        thunk_FUN_14572512c(&local_178);
      }
    }
    else {
      param_1[0x1a] = *(uint *)*local_170;
      *local_170 = *local_170 + 4;
    }
    FUN_1467b2e3c(&local_178,param_1 + 0x16);
    local_1e8 = param_1[0x1e];
    puVar5 = (uint *)*local_170 + 1;
    if ((uint *)local_170[1] < puVar5) {
      if ((local_14e & 2) == 0) {
        (*(code *)local_178[0x2e])(&local_178,&local_1e8,4);
      }
      else {
        thunk_FUN_14572512c(&local_178,&local_1e8);
      }
    }
    else {
      local_1e8 = *(uint *)*local_170;
      *local_170 = (ulonglong)puVar5;
    }
    puVar5 = param_1 + 0x1c;
    if ((local_150 & 1) != 0) {
      uVar14 = local_1e8;
      if ((int)local_1e8 < 0) goto LAB_1467b2b86;
      if ((int)param_1[0x1f] < (int)local_1e8) {
        FUN_1467bb054(puVar5);
      }
    }
    if (local_1e8 != 0) {
      uVar14 = 0;
      do {
        if ((local_150 & 1) == 0) {
          uVar8 = param_1[0x1e];
          param_1[0x1e] = uVar8 + 1;
          if (param_1[0x1f] < uVar8 + 1) {
            FUN_1467bb0c4(puVar5,uVar8);
          }
          puVar16 = (undefined8 *)(*(longlong *)puVar5 + (longlong)(int)uVar8 * 0x18);
          *puVar16 = 0;
          puVar16[1] = 0;
          puVar16[2] = 0;
        }
        else {
          puVar16 = (undefined8 *)((longlong)(int)uVar14 * 0x18 + *(longlong *)puVar5);
        }
        FUN_14021219d(&local_178,puVar16);
        puVar16 = puVar16 + 2;
        if ((undefined4 *)local_170[1] < (undefined4 *)*local_170 + 1) {
          if ((local_14e & 2) == 0) {
            (*(code *)local_178[0x2e])(&local_178,puVar16,4);
          }
          else {
            thunk_FUN_14572512c(&local_178,puVar16);
          }
        }
        else {
          *(undefined4 *)puVar16 = *(undefined4 *)*local_170;
          *local_170 = *local_170 + 4;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_1e8);
    }
    local_208 = 0;
    uStack_200 = 0;
    uStack_200._0_4_ = 0;
    if ((local_150 & 4) != 0) {
      puVar5 = param_1 + 0x20;
      puVar2 = param_1 + 0x24;
      local_88 = 0x100000000;
      local_78 = 0xffffffff;
      local_70 = 0;
      uVar14 = 0;
      uStack_80 = puVar2;
      if (param_1[0x2a] != 0) {
        FUN_1449c0562(&local_88);
        uVar14 = param_1[0x2a];
      }
      uStack_1d0 = local_78;
      uVar7 = uStack_1d0;
      local_1c8 = local_70;
      uStack_1c4 = local_6c;
      uStack_1e0 = (uint)local_88;
      uStack_1dc = (uint)((ulonglong)local_88 >> 0x20);
      uStack_1d8 = SUB81(uStack_80,0);
      uStack_1d7 = (undefined7)((ulonglong)uStack_80 >> 8);
      local_1e8 = (uint)puVar5;
      uStack_1e4 = (undefined1)((ulonglong)puVar5 >> 0x20);
      uStack_1e3 = (undefined1)((ulonglong)puVar5 >> 0x28);
      uStack_1e2 = (undefined2)((ulonglong)puVar5 >> 0x30);
      uStack_1d0._4_4_ = (uint)((ulonglong)local_78 >> 0x20);
      puVar12 = puVar5;
      uVar8 = uStack_1d0._4_4_;
      if ((uStack_1d0._4_4_ != uVar14) || (uStack_1d0 = uVar7, uStack_80 != puVar2)) {
        do {
          uStack_1d0 = uVar7;
          FUN_1467b2f80(&local_208,*(longlong *)puVar12 + (longlong)(int)uVar8 * 0x20 + 8);
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,(uint)uStack_1d0 & ~uStack_1dc);
          FUN_1449c0562(&uStack_1e0);
          puVar12 = (uint *)CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)))
          ;
          uVar8 = uStack_1d0._4_4_;
          uVar7 = uStack_1d0;
        } while (puVar12 != puVar5 ||
                 ((uint *)CONCAT71(uStack_1d7,uStack_1d8) != puVar2 || uStack_1d0._4_4_ != uVar14));
      }
    }
    puVar5 = (uint *)*local_170 + 1;
    if ((uint *)local_170[1] < puVar5) {
      local_20c = (uint)uStack_200;
      if ((local_14e & 2) == 0) {
        (*(code *)local_178[0x2e])(&local_178,&local_20c,4);
      }
      else {
        thunk_FUN_14572512c(&local_178,&local_20c);
      }
    }
    else {
      local_20c = *(uint *)*local_170;
      *local_170 = (ulonglong)puVar5;
    }
    if ((local_150 & 1) != 0) {
      uVar14 = local_20c;
      if ((int)local_20c < 0) {
LAB_1467b2b86:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
      if ((int)uStack_200._4_4_ < (int)local_20c) {
        FUN_1467bb3da(&local_208);
      }
    }
    if (local_20c != 0) {
      local_240 = param_1 + 6;
      local_230 = param_1 + 0x20;
      uVar14 = 0;
      do {
        if ((local_150 & 1) == 0) {
          plVar15 = (longlong *)((longlong)(int)uVar14 * 0x70 + local_208);
        }
        else {
          FUN_1467b1872(&local_1e8,local_228);
          uVar6 = uStack_200;
          lVar11 = (longlong)(int)(uint)uStack_200;
          uVar8 = (uint)uStack_200 + 1;
          uStack_200 = CONCAT44(uStack_200._4_4_,uVar8);
          if (uStack_200._4_4_ < uVar8) {
            FUN_1467bb1ae(&local_208,uVar6 & 0xffffffff);
          }
          lVar11 = lVar11 * 0x70;
          plVar15 = (longlong *)(local_208 + lVar11);
          *(undefined8 *)(local_208 + lVar11) = 0;
          *(ulonglong *)(local_208 + lVar11) =
               CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
          local_1e8 = 0;
          uStack_1e4 = 0;
          uStack_1e3 = 0;
          uStack_1e2 = 0;
          *(uint *)(local_208 + 8 + lVar11) = uStack_1e0;
          *(uint *)(local_208 + 0xc + lVar11) = uStack_1dc;
          uStack_1e0 = 0;
          uStack_1dc = 0;
          *(undefined8 *)(local_208 + 0x10 + lVar11) = 0;
          *(ulonglong *)(local_208 + 0x10 + lVar11) = CONCAT71(uStack_1d7,uStack_1d8);
          uStack_1d8 = 0;
          uStack_1d7 = 0;
          *(uint *)(local_208 + 0x18 + lVar11) = (uint)uStack_1d0;
          *(uint *)(local_208 + 0x1c + lVar11) = uStack_1d0._4_4_;
          uStack_1d0 = 0;
          *(undefined1 *)(local_208 + 0x28 + lVar11) = local_1c0;
          *(ulonglong *)(local_208 + 0x20 + lVar11) = CONCAT44(uStack_1c4,local_1c8);
          *(undefined8 *)(local_208 + 0x30 + lVar11) = 0;
          *(undefined8 *)(local_208 + 0x30 + lVar11) = local_1b8;
          local_1b8 = 0;
          *(undefined4 *)(local_208 + 0x38 + lVar11) = (undefined4)local_1b0;
          *(undefined4 *)(local_208 + 0x3c + lVar11) = local_1b0._4_4_;
          local_1b0 = 0;
          *(undefined8 *)(local_208 + 0x40 + lVar11) = 0;
          *(undefined8 *)(local_208 + 0x40 + lVar11) = local_1a8;
          local_1a8 = 0;
          *(undefined4 *)(local_208 + 0x48 + lVar11) = (undefined4)local_1a0;
          *(undefined4 *)(local_208 + 0x4c + lVar11) = local_1a0._4_4_;
          local_1a0 = 0;
          *(undefined1 *)(local_208 + 0x50 + lVar11) = local_198;
          *(undefined8 *)(local_208 + 0x58 + lVar11) = 0;
          *(undefined8 *)(local_208 + 0x58 + lVar11) = local_190;
          local_190 = 0;
          *(undefined4 *)(local_208 + 0x60 + lVar11) = (undefined4)local_188;
          *(undefined4 *)(local_208 + 100 + lVar11) = local_188._4_4_;
          local_188 = 0;
          *(undefined1 *)(local_208 + 0x68 + lVar11) = local_180;
          FUN_1467b18ee(&local_1e8);
        }
        if ((local_150 & 4) != 0) {
          iVar9 = (int)plVar15[1] + -1;
          if ((int)plVar15[1] == 0) {
            iVar9 = 0;
          }
          FUN_1402980a2(plVar15 + 2,*plVar15,iVar9);
          if ((char)plVar15[10] == '\0') {
            puVar13 = &DAT_149dfb77a;
            if (param_1[8] != 0) {
              puVar13 = *(undefined2 **)local_240;
            }
            FUN_14107002a(plVar15 + 2,puVar13);
          }
        }
        FUN_14021219d(&local_178,plVar15 + 2);
        local_1e8 = 0;
        uStack_1e4 = 0;
        uStack_1e3 = 0;
        uStack_1e2 = 0;
        uStack_1e0 = 0;
        uStack_1dc = 0;
        if ((local_150 & 4) != 0) {
          FUN_1400021e4(plVar15 + 4,&local_88);
          if (CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8))) != 0) {
            FUN_1400020a8();
          }
          local_1e8 = (uint)local_88;
          uStack_1e4 = (undefined1)((ulonglong)local_88 >> 0x20);
          uStack_1e3 = (undefined1)((ulonglong)local_88 >> 0x28);
          uStack_1e2 = (undefined2)((ulonglong)local_88 >> 0x30);
          uStack_1e0 = (uint)uStack_80;
          uStack_1dc = uStack_80._4_4_;
        }
        FUN_14021219d(&local_178,&local_1e8);
        if ((undefined1 *)local_170[1] < (undefined1 *)*local_170 + 1) {
          (*(code *)local_178[0x2e])(&local_178,plVar15 + 5,1);
        }
        else {
          *(undefined1 *)(plVar15 + 5) = *(undefined1 *)*local_170;
          *local_170 = *local_170 + 1;
        }
        if (((local_150 & 4) != 0) && ((char)plVar15[10] == '\0')) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c83bc38) && (FUN_144b3d300(&DAT_14c83bc38), DAT_14c83bc38 == -1)) {
            DAT_14c83bc28 = 0;
            _DAT_14c83bc30 = 0;
            atexit((_func_5014 *)&LAB_14274c8ab);
            _Init_thread_footer(&DAT_14c83bc38);
          }
          FUN_140393c76(&DAT_14c83bc28,0x10000,1);
          FUN_14274bcde(plVar15,&local_88,&DAT_14c83bc28);
          if (plVar15 + 6 == &local_88) {
            if (local_88 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (plVar15[6] != 0) {
              FUN_1400020a8();
            }
            plVar15[6] = local_88;
            local_88 = 0;
            *(uint *)(plVar15 + 7) = (uint)uStack_80;
            *(uint *)((longlong)plVar15 + 0x3c) = uStack_80._4_4_;
          }
          uVar6 = _DAT_14c83bc30 >> 0x20;
          _DAT_14c83bc30 = _DAT_14c83bc30 & 0xffffffff00000000;
          if ((int)uVar6 != 0x10000) {
            FUN_144893a1c(&DAT_14c83bc28,0x10000);
          }
        }
        FUN_140077068(&local_178,plVar15 + 6);
        FUN_14021219d(&local_178,plVar15 + 8);
        if (4 < *param_1) {
          if ((int *)local_170[1] < (int *)*local_170 + 1) {
            local_88 = CONCAT44(local_88._4_4_,(uint)*(byte *)(plVar15 + 10));
            (*(code *)local_178[0x2e])(&local_178,&local_88,4);
            if (1 < (uint)local_88) {
              FUN_14572541c(&local_178);
            }
            *(bool *)(plVar15 + 10) = (uint)local_88 != 0;
          }
          else {
            *(bool *)(plVar15 + 10) = *(int *)*local_170 != 0;
            *local_170 = *local_170 + 4;
          }
        }
        if ((local_150 & 1) != 0) {
          puVar13 = &DAT_149dfb77a;
          if (uStack_1e0 != 0) {
            puVar13 = (undefined2 *)
                      CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8)));
          }
          FUN_1446f470e(&local_88,puVar13,1);
          plVar15[4] = local_88;
          FUN_140bee914(&local_220,local_240);
          FUN_144a882a8(&local_88,&local_220,&DAT_149e065c6);
          if (local_220 != 0) {
            FUN_1400020a8();
          }
          if ((char)plVar15[10] == '\x01') {
            iVar9 = (int)plVar15[3] + -1;
            if ((int)plVar15[3] == 0) {
              iVar9 = 0;
            }
            FUN_1402980a2(plVar15,plVar15[2],iVar9);
          }
          else {
            FUN_146818870(&local_220,&local_88,plVar15 + 2);
            if (plVar15 == &local_220) {
              if (local_220 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*plVar15 != 0) {
                FUN_1400020a8();
              }
              *plVar15 = local_220;
              local_220 = 0;
              *(undefined4 *)(plVar15 + 1) = local_218;
              *(undefined4 *)((longlong)plVar15 + 0xc) = local_214;
            }
          }
          lVar11 = plVar15[4];
          iVar9 = FUN_144a788f7();
          plVar10 = (longlong *)
                    FUN_1467bb51a(local_230,(int)((ulonglong)lVar11 >> 0x20) + iVar9,plVar15 + 4);
          iVar9 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar9 + 1U) {
            FUN_1467bb1ae(plVar10,iVar9);
          }
          FUN_1467bb446((longlong)iVar9 * 0x70 + *plVar10,plVar15);
          if (local_88 != 0) {
            FUN_1400020a8();
          }
        }
        if (CONCAT26(uStack_1e2,CONCAT15(uStack_1e3,CONCAT14(uStack_1e4,local_1e8))) != 0) {
          FUN_1400020a8();
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < local_20c);
    }
    FUN_1467bb158(local_208,uStack_200 & 0xffffffff);
    if (local_208 != 0) {
      FUN_1400020a8();
    }
    if ((5 < *param_1) && ((local_150 & 4) != 0)) {
      lVar11 = (**(code **)(*local_90 + 0x28))();
      *(longlong *)(param_1 + 0x34) = lVar11 - local_248;
      FUN_1467b2d2a(&local_178,&local_1e8,local_248,lVar11 - local_248);
      puVar5 = param_1 + 0x36;
      param_1[0x38] = 0;
      if (param_1[0x39] == 0x10) {
        uVar14 = 0;
        uVar8 = 0x10;
      }
      else {
        FUN_144893a1c(puVar5,0x10);
        uVar14 = param_1[0x38];
        uVar8 = param_1[0x39];
      }
      param_1[0x38] = uVar14 + 0x10;
      if (uVar8 - uVar14 < 0x10) {
        FUN_1447403be(puVar5,uVar14);
      }
      puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0x36) + (longlong)(int)uVar14);
      *puVar3 = CONCAT13(uStack_1e4,local_1e8._1_3_);
      puVar3[1] = CONCAT13((undefined1)uStack_1e0,CONCAT21(uStack_1e2,uStack_1e3));
      puVar3[2] = CONCAT13((undefined1)uStack_1dc,uStack_1e0._1_3_);
      puVar3[3] = CONCAT13(uStack_1d8,uStack_1dc._1_3_);
      *(undefined1 *)(param_1 + 0x3a) = 1;
      (**(code **)(*local_90 + 0x1a0))(local_90,local_238);
      FUN_1408383eb(&local_178,param_1 + 0x34);
      FUN_140077068(&local_178,puVar5);
    }
    local_178 = &PTR_FUN_149e04d70;
    FUN_145c422f4();
    FUN_144a7fc42(&local_178);
  }
LAB_1467b1d77:
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b2b8e FUN_1467b2b8e body=286 status=ok
// SIG undefined FUN_1467b2b8e(void)

ulonglong FUN_1467b2b8e(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  bool bVar3;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x50) == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83bc20) && (FUN_144b3d300(&DAT_14c83bc20), DAT_14c83bc20 == -1)) {
      DAT_14c83bc10 = 0;
      uRam000000014c83bc18 = 0;
      atexit((_func_5014 *)&LAB_14274c89a);
      _Init_thread_footer(&DAT_14c83bc20);
    }
    FUN_140393c76(&DAT_14c83bc10,0x10000,1);
    FUN_14274bcde(param_1,&local_30,&DAT_14c83bc10);
    iVar1 = *(int *)(param_1 + 0x38);
    bVar3 = iVar1 == local_28;
    if (iVar1 != 0 && bVar3) {
      iVar1 = memcmp(*(void **)(param_1 + 0x30),local_30,(longlong)iVar1);
      bVar3 = iVar1 == 0;
    }
    uVar2 = CONCAT71((int7)((ulonglong)&local_30 >> 8),bVar3);
    *(bool *)(param_1 + 0x68) = bVar3;
    if (local_30 != (void *)0x0) {
      FUN_1400020a8(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1467b2cae FUN_1467b2cae body=124 status=ok
// SIG undefined FUN_1467b2cae(void)

longlong * FUN_1467b2cae(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149e04d70;
  FUN_145c422f6(param_1 + 0x12);
  param_1[0x1d] = param_2;
  uVar1 = (ulonglong)*(uint *)(param_2 + 0x48);
  (**(code **)(*param_1 + 0x100))(param_1,uVar1);
  uVar1 = CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_1[0x1d] + 0x28)) & 0xffffffffffffff01;
  (**(code **)(*param_1 + 0xb0))(param_1,uVar1);
  uVar1 = CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_1[0x1d] + 0x28)) & 0xffffffffffffff04;
  (**(code **)(*param_1 + 0xc0))(param_1,CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 2));
  return param_1;
}



// FUNCTION 1467b2d2a FUN_1467b2d2a body=273 status=ok
// SIG undefined FUN_1467b2d2a(void)

undefined1 *
FUN_1467b2d2a(longlong param_1,undefined1 *param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if ((0 < (longlong)param_4) && ((*(byte *)(*(longlong **)(param_1 + 0xe8) + 5) & 1) != 0)) {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x28))();
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x1a0))(*(longlong **)(param_1 + 0xe8),param_3);
    local_48 = 0;
    uStack_40 = param_4 & 0xffffffff;
    if ((int)param_4 != 0) {
      FUN_1447403be(&local_48,0);
    }
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x170))
              (*(longlong **)(param_1 + 0xe8),local_48,param_4);
    FUN_145c4230c(param_1 + 0x90,local_48,param_4);
    (**(code **)(**(longlong **)(param_1 + 0xe8) + 0x1a0))(*(longlong **)(param_1 + 0xe8),uVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1414fe9a8(param_1 + 0x90,param_2 + 1);
  *param_2 = 1;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1467b2e3c FUN_1467b2e3c body=324 status=ok
// SIG undefined FUN_1467b2e3c(void)

longlong * FUN_1467b2e3c(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1467b2f80 FUN_1467b2f80 body=91 status=ok
// SIG undefined FUN_1467b2f80(void)

void FUN_1467b2f80(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_1467bb1ae(param_1,iVar2);
  }
  FUN_1467bb17e((longlong)iVar2 * 0x70 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1467b2ffe FUN_1467b2ffe body=140 status=ok
// SIG undefined FUN_1467b2ffe(void)

undefined8 * FUN_1467b2ffe(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 1;
  FUN_140807d8e(param_2,&local_28,&DAT_149e0619e,&DAT_149e06140);
  FUN_1448097c4(&local_28,&DAT_149e061a6,&DAT_149e06144,1);
  *param_1 = local_28;
  *(undefined4 *)(param_1 + 1) = local_20;
  *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b308c FUN_1467b308c body=151 status=ok
// SIG undefined FUN_1467b308c(void)

undefined8 * FUN_1467b308c(undefined8 *param_1,longlong *param_2)

{
  wint_t _C;
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    FUN_1446f8c06(param_1,iVar3 + 1);
    iVar2 = (int)param_2[1];
  }
  lVar1 = *param_2;
  if (lVar1 + (longlong)iVar2 * 2 + -2 != lVar1 && iVar2 != 0) {
    lVar4 = 0;
    do {
      _C = *(wint_t *)(lVar1 + lVar4);
      iVar3 = iswdigit(_C);
      if (iVar3 == 0) {
        FUN_140002184(param_1,_C);
      }
      lVar4 = lVar4 + 2;
    } while ((longlong)iVar2 * 2 + -2 != lVar4);
  }
  return param_1;
}



// FUNCTION 1467b3124 FUN_1467b3124 body=451 status=ok
// SIG undefined FUN_1467b3124(void)

void FUN_1467b3124(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1467b308c(&local_40);
  iVar4 = local_38 + -1;
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
    iVar4 = 0;
  }
  FUN_14681a488(param_1 + 0x10,puVar3,iVar4);
  if (param_3 == 1) {
    iVar4 = local_38 + -1;
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
      iVar4 = 0;
    }
    FUN_14681a488(param_1 + 0x98,puVar3,iVar4);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x120);
  if (0 < (longlong)*(int *)(param_1 + 0x128)) {
    if (*(char *)(*plVar1 + -1 + (longlong)*(int *)(param_1 + 0x128)) == '\x01') {
      FUN_1400020e8(param_1,&DAT_149e06196,1);
    }
    else {
      FUN_1400020e8(param_1,&DAT_149e022ee,2);
      *(undefined1 *)(*(longlong *)(param_1 + 0x120) + (longlong)(*(int *)(param_1 + 0x128) + -1)) =
           1;
    }
  }
  uVar2 = *(undefined2 *)(&DAT_149e022f4 + (ulonglong)param_3 * 2);
  FUN_1467b2ffe(&local_50,param_2);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  FUN_140002266(&local_40,L"{{%s},%c",puVar3,uVar2);
  iVar4 = local_38 + -1;
  if (local_38 == 0) {
    iVar4 = 0;
  }
  FUN_1400020e8(param_1,local_40,iVar4);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8(local_50);
  }
  iVar4 = *(int *)(param_1 + 0x128);
  *(uint *)(param_1 + 0x128) = iVar4 + 1U;
  if (*(uint *)(param_1 + 300) < iVar4 + 1U) {
    FUN_1401c3474(plVar1,iVar4);
  }
  *(undefined1 *)(*plVar1 + (longlong)iVar4) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b32e8 FUN_1467b32e8 body=98 status=ok
// SIG undefined FUN_1467b32e8(void)

void FUN_1467b32e8(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x120) + -1 + (longlong)*(int *)(param_1 + 0x128));
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
  FUN_1403ed828(param_1 + 0x120);
  if (cVar1 == '\x01') {
    FUN_1400020e8(param_1,&DAT_149e0230c,2);
    return;
  }
  FUN_140002184(param_1,0x7d);
  return;
}



// FUNCTION 1467b334a FUN_1467b334a body=236 status=ok
// SIG undefined FUN_1467b334a(void)

undefined8 * FUN_1467b334a(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  if (param_2 != param_1) {
    *param_2 = *param_1;
    *param_1 = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)param_1 + 0xc);
    param_1[1] = 0;
  }
  FUN_140c54d7a(param_1 + 2);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_142787a10(param_1 + 2,&local_58);
  *(undefined4 *)(param_2 + 4) = local_48;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_50._4_4_;
  FUN_140c54d7a(param_1 + 0x13);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_142787a10(param_1 + 0x13,&local_58);
  *(undefined4 *)((longlong)param_2 + 0x34) = local_48;
  *(undefined4 *)((longlong)param_2 + 0x24) = (undefined4)local_58;
  *(undefined4 *)(param_2 + 5) = local_58._4_4_;
  *(undefined4 *)((longlong)param_2 + 0x2c) = (undefined4)uStack_50;
  *(undefined4 *)(param_2 + 6) = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b3438 FUN_1467b3438 body=232 status=ok
// SIG undefined FUN_1467b3438(void)

void FUN_1467b3438(longlong param_1)

{
  undefined2 *puVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  if (DAT_14c83e268 == '\x01') {
    puVar1 = DAT_14c83e248;
    if (DAT_14c83e250 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    lVar2 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar1 + lVar2);
      uVar4 = (ulonglong)uVar3;
      uVar5 = *(ushort *)((longlong)&DAT_149e0334a + lVar2);
      if (uVar3 != uVar5) break;
      if (uVar3 == 0) goto LAB_1467b34b8;
LAB_1467b34aa:
      lVar2 = lVar2 + 2;
    }
    if ((uVar5 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467b34aa;
    }
    if (uVar3 != uVar5) goto LAB_1467b3513;
LAB_1467b34b8:
    if (*(int *)(param_1 + 0x58) == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    else {
      puVar1 = *(undefined2 **)(param_1 + 0x50);
    }
    lVar2 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar1 + lVar2);
      uVar4 = (ulonglong)uVar3;
      uVar5 = *(ushort *)((longlong)&DAT_149e0334a + lVar2);
      if (uVar3 != uVar5) break;
      if (uVar3 == 0) goto LAB_1467b3513;
LAB_1467b34e3:
      lVar2 = lVar2 + 2;
    }
    if ((uVar5 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar6 = (ulonglong)uVar5;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1467b34e3;
    }
    if (uVar3 != uVar5) {
      return;
    }
  }
LAB_1467b3513:
  FUN_1467b6718(&DAT_14c83e1f8);
  return;
}



// FUNCTION 1467b3520 FUN_1467b3520 body=70 status=ok
// SIG undefined FUN_1467b3520(void)

void FUN_1467b3520(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1467b960c(param_1);
  return;
}



// FUNCTION 1467b3566 FUN_1467b3566 body=2344 status=ok
// SIG undefined FUN_1467b3566(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467b3566(longlong param_1)

{
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  int extraout_EAX_05;
  int extraout_EAX_06;
  int extraout_EAX_07;
  int extraout_EAX_08;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  uint local_98;
  int iStack_94;
  undefined8 uStack_90;
  wchar_t *local_88;
  undefined *puStack_80;
  uint local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  size_t sVar1;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  memcpy((void *)(param_1 + 0x11c18),&DAT_14c83bd00,0x2240);
  memcpy((void *)(param_1 + 0x1180c),&DAT_14c83df40,0x204);
  pwVar11 = (wchar_t *)(param_1 + 0x13e78);
  local_c0 = (undefined *)((ulonglong)local_c0._4_4_ << 0x20);
  memset(pwVar11,0,0x10000);
  *(undefined4 *)(param_1 + 0x13e5c) = 0;
  lVar4 = (longlong)DAT_14c83e150;
  *(int *)(param_1 + 0x13e58) = DAT_14c83e150;
  local_c8 = param_1;
  if (lVar4 != 0) {
    lVar9 = 0;
    local_b8 = (wchar_t *)DAT_14c83e148;
    pwVar12 = (wchar_t *)DAT_14c83e148;
    do {
      pwVar10 = L"";
      if (*(int *)((longlong)pwVar12 + lVar9 + 8) != 0) {
        pwVar10 = *(wchar_t **)((longlong)pwVar12 + lVar9);
      }
      sVar1 = wcslen(pwVar11);
      extraout_EAX = (int)sVar1;
      if (extraout_EAX < 0x7fff) {
        wcsncpy(pwVar11 + extraout_EAX,pwVar10,(ulonglong)(0x7fff - extraout_EAX) - 1);
        (pwVar11 + extraout_EAX)[(ulonglong)(0x7fff - extraout_EAX) - 1] = L'\0';
        pwVar12 = local_b8;
      }
      sVar1 = wcslen(pwVar11);
      extraout_EAX_00 = (int)sVar1;
      if (extraout_EAX_00 < 0x7fff) {
        wcsncpy(pwVar11 + extraout_EAX_00,L"\x01",(ulonglong)(0x7fff - extraout_EAX_00) - 1);
        (pwVar11 + extraout_EAX_00)[(ulonglong)(0x7fff - extraout_EAX_00) - 1] = L'\0';
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar4 << 4 != lVar9);
  }
  sVar1 = wcslen(pwVar11);
  iVar7 = (int)((longlong)(int)sVar1 * 2 + 2U >> 1);
  *(int *)(local_c8 + 0x13e64) = iVar7;
  *(int *)(local_c8 + 0x13e60) = DAT_14c83e160 - _DAT_14c83e18c;
  local_88 = (wchar_t *)0x100000000;
  puStack_80 = &DAT_14c83e168;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  if (DAT_14c83e180 != 0) {
    FUN_1449c0562(&local_88);
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,DAT_14c83e180);
  }
  pwVar12 = pwVar11 + (longlong)(int)sVar1 + 1;
  local_98 = local_78;
  iStack_94 = iStack_74;
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_a8 = local_88;
  puStack_a0 = puStack_80;
  local_b0 = &DAT_14c83e158;
  if ((iStack_74 != (int)local_c0) || (puStack_80 != &DAT_14c83e168)) {
    iVar7 = 0x7fff - iVar7;
    local_b8 = (wchar_t *)&DAT_14c83e168;
    do {
      puVar3 = (undefined8 *)(*local_b0 + (longlong)iStack_94 * 0x28);
      pwVar10 = L"";
      if (*(int *)(puVar3 + 1) != 0) {
        pwVar10 = (wchar_t *)*puVar3;
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_01 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_01;
      if (uVar2 != 0 && extraout_EAX_01 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_01,pwVar10,(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_01)[(ulonglong)uVar2 - 1] = L'\0';
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_02 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_02;
      if (uVar2 != 0 && extraout_EAX_02 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_02,L"\x02",(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_02)[(ulonglong)uVar2 - 1] = L'\0';
      }
      pwVar10 = L"";
      if (*(int *)(puVar3 + 3) != 0) {
        pwVar10 = (wchar_t *)puVar3[2];
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_03 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_03;
      if (uVar2 != 0 && extraout_EAX_03 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_03,pwVar10,(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_03)[(ulonglong)uVar2 - 1] = L'\0';
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_04 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_04;
      if (uVar2 != 0 && extraout_EAX_04 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_04,L"\x01",(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_04)[(ulonglong)uVar2 - 1] = L'\0';
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != &DAT_14c83e158 ||
             ((wchar_t *)puStack_a0 != local_b8 || iStack_94 != (int)local_c0));
  }
  sVar1 = wcslen(pwVar12);
  pwVar12 = pwVar12 + (longlong)(int)sVar1 + 1;
  iVar7 = (int)((ulonglong)((longlong)pwVar12 - (longlong)pwVar11) >> 1);
  *(int *)(local_c8 + 0x13e6c) = iVar7;
  *(int *)(local_c8 + 0x13e68) = DAT_14c83e1b0 - _DAT_14c83e1dc;
  local_88 = (wchar_t *)&DAT_100000000;
  puStack_80 = &DAT_14c83e1b8;
  local_78 = 0xffffffff;
  iStack_74 = 0;
  uStack_70 = 0;
  local_b8 = pwVar11;
  if (DAT_14c83e1d0 == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar5 = DAT_14c83e1d0;
  }
  uStack_90 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_78;
  iStack_94 = iStack_74;
  local_a8 = local_88;
  puStack_a0 = puStack_80;
  local_b0 = &DAT_14c83e1a8;
  if ((iStack_74 != iVar5) || (puStack_80 != &DAT_14c83e1b8)) {
    iVar7 = 0x7fff - iVar7;
    local_c0 = &DAT_14c83e1b8;
    do {
      puVar3 = (undefined8 *)(*local_b0 + (longlong)iStack_94 * 0x28);
      pwVar11 = L"";
      if (*(int *)(puVar3 + 1) != 0) {
        pwVar11 = (wchar_t *)*puVar3;
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_05 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_05;
      if (uVar2 != 0 && extraout_EAX_05 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_05,pwVar11,(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_05)[(ulonglong)uVar2 - 1] = L'\0';
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_06 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_06;
      if (uVar2 != 0 && extraout_EAX_06 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_06,L"\x02",(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_06)[(ulonglong)uVar2 - 1] = L'\0';
      }
      pwVar11 = L"";
      if (*(int *)(puVar3 + 3) != 0) {
        pwVar11 = (wchar_t *)puVar3[2];
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_07 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_07;
      if (uVar2 != 0 && extraout_EAX_07 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_07,pwVar11,(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_07)[(ulonglong)uVar2 - 1] = L'\0';
      }
      sVar1 = wcslen(pwVar12);
      extraout_EAX_08 = (int)sVar1;
      uVar2 = iVar7 - extraout_EAX_08;
      if (uVar2 != 0 && extraout_EAX_08 <= iVar7) {
        wcsncpy(pwVar12 + extraout_EAX_08,L"\x01",(ulonglong)uVar2 - 1);
        (pwVar12 + extraout_EAX_08)[(ulonglong)uVar2 - 1] = L'\0';
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
    } while (local_b0 != &DAT_14c83e1a8 || (puStack_a0 != local_c0 || iStack_94 != iVar5));
  }
  sVar1 = wcslen(pwVar12);
  pwVar12 = pwVar12 + (longlong)(int)sVar1 + 1;
  iVar7 = (int)((ulonglong)((longlong)pwVar12 - (longlong)local_b8) >> 1);
  *(int *)(local_c8 + 0x13e74) = iVar7;
  lVar9 = (longlong)DAT_14c83e278;
  *(int *)(local_c8 + 0x13e70) = DAT_14c83e278;
  lVar4 = DAT_14c83e270;
  if (lVar9 != 0) {
    iVar7 = 0x7fff - iVar7;
    lVar8 = 0;
    do {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar4 + 8 + lVar8) != 0) {
        puVar6 = *(undefined2 **)(lVar4 + lVar8);
      }
      FUN_1467b3e90(pwVar12,iVar7,puVar6);
      FUN_1467b3e90(pwVar12,iVar7,&DAT_149e0619a);
      lVar8 = lVar8 + 0x10;
    } while (lVar9 * 0x10 != lVar8);
  }
  lVar4 = local_c8;
  if (DAT_14c83e268 != '\0') {
    pwVar11 = L"";
    if (DAT_14c83e260 != 0) {
      pwVar11 = DAT_14c83e258;
    }
    pwVar12 = (wchar_t *)(local_c8 + 0x23e88);
    wcsncpy((wchar_t *)(local_c8 + 0x23f08),pwVar11,0x3f);
    *(undefined2 *)(lVar4 + 0x23f86) = 0;
    pwVar11 = L"";
    if (DAT_14c83e250 != 0) {
      pwVar11 = DAT_14c83e248;
    }
    wcsncpy(pwVar12,pwVar11,0x3f);
    *(undefined2 *)(local_c8 + 0x23f06) = 0;
    *(undefined4 *)(local_c8 + 0x23f88) = 0;
    local_88 = (wchar_t *)&DAT_100000000;
    puStack_80 = &DAT_14c83e208;
    local_78 = 0xffffffff;
    iStack_74 = 0;
    uStack_70 = 0;
    iVar7 = 0;
    if (DAT_14c83e220 != 0) {
      FUN_1449c0562(&local_88);
      iVar7 = DAT_14c83e220;
    }
    local_98 = local_78;
    iStack_94 = iStack_74;
    uStack_90 = CONCAT44(uStack_6c,uStack_70);
    local_a8 = local_88;
    puStack_a0 = puStack_80;
    local_b0 = &DAT_14c83e1f8;
    if ((iStack_74 != iVar7) || (puStack_80 != &DAT_14c83e208)) {
      local_c0 = (undefined *)(local_c8 + 0x23f8c);
      do {
        if (0xffffe000 < *(int *)(*local_b0 + 0x18 + (longlong)iStack_94 * 0x50) - 0x2001U) {
          puVar3 = (undefined8 *)(*local_b0 + (longlong)iStack_94 * 0x50);
          pwVar11 = L"";
          if (*(int *)(puVar3 + 1) != 0) {
            pwVar11 = (wchar_t *)*puVar3;
          }
          pwVar12 = (wchar_t *)(local_c0 + (ulonglong)*(uint *)(local_c8 + 0x23f88) * 0x4180);
          wcsncpy(pwVar12,pwVar11,0x3f);
          pwVar12[0x3f] = L'\0';
          local_88 = (wchar_t *)0x0;
          puStack_80 = (undefined *)0x0;
          FUN_1407c8a86(puVar3 + 4,0x14,&local_88);
          pwVar11 = L"";
          if ((int)puStack_80 != 0) {
            pwVar11 = local_88;
          }
          wcsncpy(pwVar12 + 0x40,pwVar11,0x3f);
          pwVar12[0x7f] = L'\0';
          if (local_88 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_88 = (wchar_t *)0x0;
          puStack_80 = (undefined *)0x0;
          FUN_1407c8a86((longlong)puVar3 + 0x34,0x14,&local_88);
          pwVar11 = L"";
          if ((int)puStack_80 != 0) {
            pwVar11 = local_88;
          }
          wcsncpy(pwVar12 + 0x80,pwVar11,0x3f);
          pwVar12[0xbf] = L'\0';
          if (local_88 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          pwVar11 = L"";
          if (*(int *)(puVar3 + 3) != 0) {
            pwVar11 = (wchar_t *)puVar3[2];
          }
          wcsncpy(pwVar12 + 0xc0,pwVar11,0x1fff);
          pwVar12[0x20bf] = L'\0';
          uVar2 = *(int *)(local_c8 + 0x23f88) + 1;
          *(uint *)(local_c8 + 0x23f88) = uVar2;
          if (1 < uVar2) break;
        }
        local_98 = local_98 & ~local_a8._4_4_;
        FUN_1449c0562(&local_a8);
      } while (local_b0 != &DAT_14c83e1f8 || (puStack_a0 != &DAT_14c83e208 || iStack_94 != iVar7));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b3e90 FUN_1467b3e90 body=99 status=ok
// SIG undefined FUN_1467b3e90(void)

wchar_t * FUN_1467b3e90(wchar_t *param_1,int param_2,wchar_t *param_3)

{
  longlong lVar1;
  int extraout_EAX;
  int iVar3;
  longlong lVar4;
  wchar_t wVar5;
  size_t sVar2;
  
  wVar5 = *param_3;
  if (wVar5 != L'\0') {
    sVar2 = wcslen(param_1);
    extraout_EAX = (int)sVar2;
    if (extraout_EAX + 1 < param_2) {
      lVar4 = 0;
      do {
        param_1[extraout_EAX + lVar4] = wVar5;
        wVar5 = param_3[lVar4 + 1];
        lVar1 = lVar4 + 1;
        if (wVar5 == L'\0') break;
        iVar3 = (int)lVar4;
        lVar4 = lVar1;
      } while (iVar3 + extraout_EAX + 2 < param_2);
      param_1[extraout_EAX + lVar1] = L'\0';
    }
  }
  return param_1;
}



// FUNCTION 1467b3ef4 FUN_1467b3ef4 body=72 status=ok
// SIG undefined FUN_1467b3ef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1467b3ef4(void *param_1)

{
  memcpy(&DAT_14c83deb8,param_1,0x88);
  DAT_14c83bd05 = DAT_14c83f1dc;
  _DAT_14c83bd30 = DAT_14c83e280;
  _DAT_14c83bd28 = DAT_14c83e288;
  FUN_14577b282();
  return;
}



// FUNCTION 1467b3f80 FUN_1467b3f80 body=107 status=ok
// SIG undefined FUN_1467b3f80(void)

undefined8 * FUN_1467b3f80(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_149e05f60;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_1446f8c06(param_1 + 0xb,0x20001);
  iVar1 = DAT_14c83bc48 + 1;
  *(int *)(param_1 + 0xd) = DAT_14c83bc48;
  DAT_14c83bc48 = iVar1;
  return param_1;
}



// FUNCTION 1467b3fec FUN_1467b3fec body=189 status=ok
// SIG undefined FUN_1467b3fec(void)

undefined8 FUN_1467b3fec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_40,L"UECrashContext-%llu.xml",param_2);
  uVar2 = FUN_145c83e48();
  iVar1 = local_38;
  FUN_140056680(&local_30,uVar2);
  FUN_1412cfe60(param_1,&local_30,(uint)(local_28 == 0) + iVar1 + (uint)(iVar1 == 0));
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  iVar1 = local_38 + -1;
  if (local_38 == 0) {
    iVar1 = 0;
  }
  FUN_1401aebe8(param_1,local_40,iVar1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b40aa FUN_1467b40aa body=16 status=ok
// SIG undefined FUN_1467b40aa(void)

undefined8 FUN_1467b40aa(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_14c83bc40;
  LOCK();
  DAT_14c83bc40 = (longlong)param_1 | 0x100000000;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1467b40ba FUN_1467b40ba body=2930 status=ok
// SIG undefined FUN_1467b40ba(void)

void FUN_1467b40ba(undefined8 param_1)

{
  char cVar1;
  undefined2 *puVar2;
  byte bVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined1 auStack_468 [32];
  wchar_t *local_448;
  undefined4 local_440;
  wchar_t *local_438;
  undefined4 local_430;
  wchar_t *local_428;
  undefined4 local_420;
  wchar_t *local_418;
  undefined4 local_410;
  wchar_t *local_408;
  undefined4 local_400;
  wchar_t *local_3f8;
  undefined4 local_3f0;
  wchar_t *local_3e8;
  undefined4 local_3e0;
  wchar_t *local_3d8;
  undefined4 local_3d0;
  wchar_t *local_3c8;
  undefined4 local_3c0;
  wchar_t *local_3b8;
  undefined4 local_3b0;
  wchar_t *local_3a8;
  undefined4 local_3a0;
  wchar_t *local_398;
  undefined4 local_390;
  wchar_t *local_388;
  undefined4 local_380;
  wchar_t *local_378;
  undefined4 local_370;
  wchar_t *local_368;
  undefined4 local_360;
  wchar_t *local_358;
  undefined4 local_350;
  wchar_t *local_348;
  undefined4 local_340;
  wchar_t *local_338;
  undefined4 local_330;
  wchar_t *local_328;
  undefined4 local_320;
  wchar_t *local_318;
  undefined4 local_310;
  wchar_t *local_308;
  undefined4 local_300;
  wchar_t *local_2f8;
  undefined4 local_2f0;
  wchar_t *local_2e8;
  undefined4 local_2e0;
  wchar_t *local_2d8;
  undefined4 local_2d0;
  wchar_t *local_2c8;
  undefined4 local_2c0;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  undefined2 *local_248 [2];
  undefined2 *local_238;
  wchar_t *local_230;
  undefined4 local_228;
  wchar_t *local_220;
  undefined4 local_218;
  wchar_t *local_210;
  undefined4 local_208;
  wchar_t *local_200;
  undefined4 local_1f8;
  wchar_t *local_1f0;
  undefined4 local_1e8;
  wchar_t *local_1e0;
  undefined4 local_1d8;
  wchar_t *local_1d0;
  undefined4 local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  wchar_t *local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  undefined4 local_198;
  wchar_t *local_190;
  undefined4 local_188;
  wchar_t *local_180;
  undefined4 local_178;
  wchar_t *local_170;
  undefined4 local_168;
  wchar_t *local_160;
  undefined4 local_158;
  wchar_t *local_150;
  undefined4 local_148;
  wchar_t *local_140;
  undefined4 local_138;
  wchar_t *local_130;
  undefined4 local_128;
  wchar_t *local_120;
  undefined4 local_118;
  wchar_t *local_110;
  undefined4 local_108;
  wchar_t *local_100;
  undefined4 local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  wchar_t *local_e0;
  undefined4 local_d8;
  wchar_t *local_d0;
  undefined4 local_c8;
  undefined2 *local_c0;
  int local_b8;
  wchar_t *local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_50 = L"ProcessId";
  local_48 = 9;
  FUN_1467b4d0c(param_1,&local_50,&DAT_14c83bd08);
  local_60 = L"SecondsSinceStart";
  local_58 = 0x11;
  FUN_1467b4d98(param_1,&local_60,&DAT_14c83bd18);
  local_70 = L"IsInternalBuild";
  local_68 = 0xf;
  FUN_1467b4e24(param_1,&local_70,&DAT_14c83bd00);
  local_80 = L"IsPerforceBuild";
  local_78 = 0xf;
  FUN_1467b4e24(param_1,&local_80,&DAT_14c83bd01);
  local_90 = L"IsWithDebugInfo";
  local_88 = 0xf;
  FUN_1467b4e24(param_1,&local_90,&DAT_14c83bd02);
  local_a0 = L"IsSourceDistribution";
  local_98 = 0x14;
  FUN_1467b4e24(param_1,&local_a0,&DAT_14c83bd03);
  sVar4 = wcslen((wchar_t *)&DAT_14c83c038);
  if ((int)sVar4 < 1) {
    if (DAT_14c764000 == 0) {
      local_e0 = L"GameName";
      local_d8 = 8;
      FUN_1467b4fc8(param_1);
    }
    else {
      FUN_140002266(&local_c0,L"UE-%s",&DAT_14c764000);
      local_248[0] = local_c0;
      if (local_b8 == 0) {
        local_248[0] = &DAT_149dfb77a;
      }
      local_d0 = L"GameName";
      local_c8 = 8;
      FUN_1467b4f42(param_1);
      if (local_c0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_b0 = L"GameName";
    local_a8 = 8;
    FUN_1467b4ebc(param_1,&local_b0,&DAT_14c83c038);
  }
  local_f0 = L"ExecutableName";
  local_e8 = 0xe;
  FUN_1467b4ebc(param_1,&local_f0,&DAT_14c83c1b8);
  local_100 = L"BuildConfiguration";
  local_f8 = 0x12;
  FUN_1467b4ebc(param_1,&local_100,&DAT_14c83c238);
  local_110 = L"GameSessionID";
  local_108 = 0xd;
  FUN_1467b4ebc(param_1,&local_110,&DAT_14c83cdb8);
  local_120 = L"PlatformName";
  local_118 = 0xc;
  FUN_1467b4ebc(param_1,&local_120,&DAT_14c83dd38);
  local_130 = L"PlatformFullName";
  local_128 = 0x10;
  FUN_1467b4ebc(param_1,&local_130,&DAT_14c83dd38);
  local_140 = L"PlatformNameIni";
  local_138 = 0xf;
  FUN_1467b4ebc(param_1,&local_140,&DAT_14c83ddb8);
  local_150 = L"EngineMode";
  local_148 = 10;
  FUN_1467b4ebc(param_1,&local_150,&DAT_14c83c0b8);
  local_160 = L"EngineModeEx";
  local_158 = 0xc;
  FUN_1467b4ebc(param_1,&local_160,&DAT_14c83c138);
  local_170 = L"DeploymentName";
  local_168 = 0xe;
  FUN_1467b4ebc(param_1,&local_170,&DAT_14c83c2b8);
  local_180 = L"EngineVersion";
  local_178 = 0xd;
  FUN_1467b5052(param_1,&local_180,&DAT_14c83bd38);
  local_190 = L"EngineCompatibleVersion";
  local_188 = 0x17;
  FUN_1467b5052(param_1,&local_190,&DAT_14c83be38);
  local_1a0 = L"CommandLine";
  local_198 = 0xb;
  FUN_1467b50d8(param_1);
  local_1b0 = L"LanguageLCID";
  local_1a8 = 0xc;
  FUN_1467b4d98(param_1,&local_1b0,&DAT_14c83bd0c);
  local_1c0 = L"AppDefaultLocale";
  local_1b8 = 0x10;
  FUN_1467b4ebc(param_1,&local_1c0,&DAT_14c83cc38);
  local_1d0 = L"BuildVersion";
  local_1c8 = 0xc;
  FUN_1467b5052(param_1,&local_1d0,&DAT_14c83bf38);
  local_1e0 = L"Symbols";
  local_1d8 = 7;
  FUN_1467b5052(param_1,&local_1e0,&DAT_14c83c838);
  local_1f0 = L"IsUERelease";
  local_1e8 = 0xb;
  FUN_1467b4e24(param_1,&local_1f0,&DAT_14c83bd04);
  local_200 = L"IsRequestingExit";
  local_1f8 = 0x10;
  FUN_1467b4e24(param_1,&local_200,&DAT_14c83bd06);
  cVar1 = DAT_14c83bd00;
  FUN_140056680(&local_c0,&DAT_14c83cbb8);
  FUN_1448097c4(&local_c0,&DAT_149e0635c,&DAT_149dfb77a,1);
  puVar2 = local_c0;
  if (local_b8 == 0) {
    local_c0 = &DAT_149dfb77a;
  }
  if (cVar1 == '\0') {
    local_c0 = &DAT_149dfb77a;
  }
  local_210 = L"UserName";
  local_208 = 8;
  FUN_1467b4f42(param_1,&local_210,&local_c0);
  local_220 = L"BaseDir";
  local_218 = 7;
  FUN_1467b5162(param_1,&local_220,&DAT_14c83c338);
  local_230 = L"RootDir";
  local_228 = 7;
  FUN_1467b5162(param_1,&local_230,&DAT_14c83c538);
  FUN_140056680(local_248,&DAT_14c83c7b8);
  FUN_1467ac9bc(local_248,&local_c0);
  local_238 = &DAT_149dfb77a;
  if (local_b8 != 0) {
    local_238 = local_c0;
  }
  local_258 = L"MachineId";
  local_250 = 9;
  FUN_1467b4f42(param_1);
  if (local_c0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_248[0] != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_268 = L"LoginId";
  local_260 = 7;
  FUN_1467b4ebc(param_1,&local_268,&DAT_14c83c7b8);
  local_278 = L"EpicAccountId";
  local_270 = 0xd;
  FUN_1467b4ebc(param_1,&local_278,&DAT_14c83c738);
  local_288 = L"SourceContext";
  local_280 = 0xd;
  FUN_1467b4fc8(param_1);
  local_298 = L"UserDescription";
  local_290 = 0xf;
  FUN_1467b4fc8(param_1);
  local_2a8 = L"UserActivityHint";
  local_2a0 = 0x10;
  FUN_1467b4ebc(param_1,&local_2a8,&DAT_14c83cd38);
  local_2b8 = L"CrashDumpMode";
  local_2b0 = 0xd;
  FUN_1467b4d98(param_1,&local_2b8,&DAT_14c83bd1c);
  local_2c8 = L"GameStateName";
  local_2c0 = 0xd;
  FUN_1467b4ebc(param_1,&local_2c8,&DAT_14c83da38);
  local_2d8 = L"Misc.NumberOfCores";
  local_2d0 = 0x12;
  FUN_1467b4d98(param_1,&local_2d8,&DAT_14c83bd10);
  local_2e8 = L"Misc.NumberOfCoresIncludingHyperthreads";
  local_2e0 = 0x27;
  FUN_1467b4d98(param_1,&local_2e8,&DAT_14c83bd14);
  bVar3 = FUN_14682f5c6();
  local_c0 = (undefined2 *)CONCAT44(local_c0._4_4_,(uint)bVar3);
  local_2f8 = L"Misc.Is64bitOperatingSystem";
  local_2f0 = 0x1b;
  FUN_1467b4d98(param_1);
  local_308 = L"Misc.CPUVendor";
  local_300 = 0xe;
  FUN_1467b4ebc(param_1,&local_308,&DAT_14c83ca38);
  local_318 = L"Misc.CPUBrand";
  local_310 = 0xd;
  FUN_1467b4ebc(param_1,&local_318,&DAT_14c83cab8);
  local_328 = L"Misc.PrimaryGPUBrand";
  local_320 = 0x14;
  FUN_1467b4ebc(param_1,&local_328,&DAT_14c83cb38);
  local_338 = L"Misc.OSVersionMajor";
  local_330 = 0x13;
  FUN_1467b4ebc(param_1,&local_338,&DAT_14c83c938);
  local_348 = L"Misc.OSVersionMinor";
  local_340 = 0x13;
  FUN_1467b4ebc(param_1,&local_348,&DAT_14c83c9b8);
  local_358 = L"Misc.AnticheatProvider";
  local_350 = 0x16;
  FUN_1467b4ebc(param_1,&local_358,&DAT_14c83de38);
  if (DAT_14c83bd07 == '\x01') {
    local_368 = L"Misc.IsStuck";
    local_360 = 0xc;
    FUN_1467b4e24(param_1,&local_368,&DAT_14c83bd07);
    local_378 = L"Misc.StuckThreadId";
    local_370 = 0x12;
    FUN_1467b4d0c(param_1,&local_378,&DAT_14c83bd24);
  }
  puVar5 = (undefined8 *)FUN_14016c8d4();
  local_c0 = (undefined2 *)*puVar5;
  local_388 = L"MemoryStats.TotalPhysical";
  local_380 = 0x19;
  FUN_1467b51e8(param_1,&local_388,&local_c0);
  local_c0 = (undefined2 *)puVar5[1];
  local_398 = L"MemoryStats.TotalVirtual";
  local_390 = 0x18;
  FUN_1467b51e8(param_1,&local_398,&local_c0);
  local_c0 = (undefined2 *)puVar5[2];
  local_3a8 = L"MemoryStats.PageSize";
  local_3a0 = 0x14;
  FUN_1467b51e8(param_1,&local_3a8,&local_c0);
  local_3b8 = L"MemoryStats.TotalPhysicalGB";
  local_3b0 = 0x1b;
  FUN_1467b4d0c(param_1,&local_3b8,puVar5 + 8);
  local_c0 = DAT_14c83df00;
  local_3c8 = L"MemoryStats.AvailablePhysical";
  local_3c0 = 0x1d;
  FUN_1467b51e8(param_1,&local_3c8,&local_c0);
  local_c0 = DAT_14c83df08;
  local_3d8 = L"MemoryStats.AvailableVirtual";
  local_3d0 = 0x1c;
  FUN_1467b51e8(param_1,&local_3d8,&local_c0);
  local_c0 = DAT_14c83df10;
  local_3e8 = L"MemoryStats.UsedPhysical";
  local_3e0 = 0x18;
  FUN_1467b51e8(param_1,&local_3e8,&local_c0);
  local_c0 = DAT_14c83df18;
  local_3f8 = L"MemoryStats.PeakUsedPhysical";
  local_3f0 = 0x1c;
  FUN_1467b51e8(param_1,&local_3f8,&local_c0);
  local_c0 = DAT_14c83df20;
  local_408 = L"MemoryStats.UsedVirtual";
  local_400 = 0x17;
  FUN_1467b51e8(param_1,&local_408,&local_c0);
  local_c0 = DAT_14c83df28;
  local_418 = L"MemoryStats.PeakUsedVirtual";
  local_410 = 0x1b;
  FUN_1467b51e8(param_1,&local_418,&local_c0);
  local_c0 = (undefined2 *)CONCAT44(local_c0._4_4_,(uint)DAT_14c83bd05);
  local_428 = L"MemoryStats.bIsOOM";
  local_420 = 0x12;
  FUN_1467b4d98(param_1,&local_428,&local_c0);
  local_438 = L"MemoryStats.OOMAllocationSize";
  local_430 = 0x1d;
  FUN_1467b51e8(param_1,&local_438,&DAT_14c83bd30);
  local_448 = L"MemoryStats.OOMAllocationAlignment";
  local_440 = 0x22;
  FUN_1467b4d98(param_1,&local_448,&DAT_14c83bd28);
  if (puVar2 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b4c2e FUN_1467b4c2e body=220 status=ok
// SIG undefined FUN_1467b4c2e(void)

void FUN_1467b4c2e(undefined8 param_1)

{
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = L"NoDialog";
  local_20 = 8;
  FUN_1467b4e24(param_1,&local_28,&DAT_14c83df40);
  local_38 = L"SendUnattendedBugReports";
  local_30 = 0x18;
  FUN_1467b4e24(param_1,&local_38,&DAT_14c83df41);
  local_48 = L"SendUsageData";
  local_40 = 0xd;
  FUN_1467b4e24(param_1,&local_48,&DAT_14c83df42);
  FUN_1460119fe(local_58);
  local_68 = L"LogFilePath";
  local_60 = 0xb;
  FUN_1467b5274(param_1,&local_68,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4d0c FUN_1467b4d0c body=139 status=ok
// SIG undefined FUN_1467b4d0c(void)

void FUN_1467b4d0c(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_40,&DAT_149e061aa,*param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4d98 FUN_1467b4d98 body=139 status=ok
// SIG undefined FUN_1467b4d98(void)

void FUN_1467b4d98(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_40,&DAT_149e063bc,*param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4e24 FUN_1467b4e24 body=151 status=ok
// SIG undefined FUN_1467b4e24(void)

void FUN_1467b4e24(undefined8 param_1,undefined4 *param_2,char *param_3)

{
  wchar_t *pwVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pwVar1 = L"false";
  if (*param_3 != '\0') {
    pwVar1 = L"true";
  }
  FUN_140056680(&local_40,pwVar1);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4ebc FUN_1467b4ebc body=132 status=ok
// SIG undefined FUN_1467b4ebc(void)

void FUN_1467b4ebc(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4f42 FUN_1467b4f42 body=132 status=ok
// SIG undefined FUN_1467b4f42(void)

void FUN_1467b4f42(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,*param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b4fc8 FUN_1467b4fc8 body=136 status=ok
// SIG undefined FUN_1467b4fc8(void)

void FUN_1467b4fc8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,&DAT_149dfb77a);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b5052 FUN_1467b5052 body=132 status=ok
// SIG undefined FUN_1467b5052(void)

void FUN_1467b5052(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b50d8 FUN_1467b50d8 body=136 status=ok
// SIG undefined FUN_1467b50d8(void)

void FUN_1467b50d8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,&DAT_14c83ce38);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b5162 FUN_1467b5162 body=132 status=ok
// SIG undefined FUN_1467b5162(void)

void FUN_1467b5162(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(&local_40,param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b51e8 FUN_1467b51e8 body=139 status=ok
// SIG undefined FUN_1467b51e8(void)

void FUN_1467b51e8(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140002266(&local_40,L"%llu",*param_3);
  local_30 = local_40;
  local_28 = local_38 + -1;
  if (local_38 == 0) {
    local_28 = 0;
  }
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  FUN_1467b61f2(param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b5274 FUN_1467b5274 body=201 status=ok
// SIG undefined FUN_1467b5274(void)

void FUN_1467b5274(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar2 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar2 == 0) {
    local_44 = 0;
    iVar1 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar2 * 2);
    iVar1 = local_48;
  }
  local_38 = iVar1 + -1;
  if (iVar1 == 0) {
    local_38 = 0;
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_40 = local_50;
  FUN_1467b61f2(param_1);
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b533e FUN_1467b533e body=2040 status=ok
// SIG undefined FUN_1467b533e(void)

void FUN_1467b533e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  wchar_t *_Str;
  size_t sVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  wchar_t *local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  uint local_180;
  int iStack_17c;
  undefined8 uStack_178;
  wchar_t *local_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  uint local_158;
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t local_148 [128];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar1 = param_1 + 0xb;
  FUN_1446f8bcc(plVar1,0);
  local_1a8 = (undefined4)param_1[0xd];
  FUN_144737500(local_148,0x80,L"%s_%04i",&DAT_14c83ccb8);
  FUN_1400020e8(plVar1,L"<?xml version=\"1.0\" encoding=\"UTF-8\"?>\r\n",0x28);
  FUN_1407c8b48(plVar1,L"<%s>\r\n",L"FGenericCrashContext");
  FUN_1407c8b48(plVar1,L"<%s>\r\n",L"RuntimeProperties");
  local_168 = (wchar_t *)CONCAT44(local_168._4_4_,3);
  local_198 = L"CrashVersion";
  uStack_190._0_4_ = 0xc;
  FUN_1467b4d98(plVar1,&local_198,&local_168);
  local_168 = (wchar_t *)0x0;
  uStack_160 = (undefined *)0x0;
  FUN_1407c869a(&DAT_14c83bc4c,&local_168,0);
  local_170 = local_168;
  if ((int)uStack_160 == 0) {
    local_170 = L"";
  }
  local_198 = L"ExecutionGuid";
  uStack_190 = (wchar_t *)CONCAT44(uStack_190._4_4_,0xd);
  FUN_1467b4f42(plVar1);
  if (local_168 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_198 = L"CrashGUID";
  uStack_190._0_4_ = 9;
  local_168 = local_148;
  FUN_1467b4f42(plVar1,&local_198,&local_168);
  local_198 = L"IsEnsure";
  uStack_190._0_4_ = 8;
  local_168._0_1_ = (int)param_1[2] == 2;
  FUN_1467b4e24(plVar1,&local_198,&local_168);
  local_168._0_1_ = (int)param_1[2] == 3;
  local_198 = L"IsStall";
  uStack_190._0_4_ = 7;
  FUN_1467b4e24(plVar1,&local_198,&local_168);
  local_168 = (wchar_t *)CONCAT71(local_168._1_7_,(int)param_1[2] == 1);
  local_198 = L"IsAssert";
  uStack_190._0_4_ = 8;
  FUN_1467b4e24(plVar1,&local_198,&local_168);
  uVar5 = (int)param_1[2] - 1;
  if (uVar5 < 9) {
    local_168 = (wchar_t *)(&PTR_u_Assert_149e066a8)[uVar5];
  }
  else {
    local_168 = L"Crash";
  }
  local_198 = L"CrashType";
  uStack_190._0_4_ = 9;
  FUN_1467b4f42(plVar1,&local_198);
  local_198 = L"ErrorMessage";
  uStack_190._0_4_ = 0xc;
  FUN_1467b4f42(plVar1,&local_198,param_1 + 3);
  local_198 = L"CrashReporterMessage";
  uStack_190._0_4_ = 0x14;
  FUN_1467bbd38(plVar1,&local_198);
  local_198 = L"CrashReporterMessage";
  uStack_190._0_4_ = 0x14;
  FUN_1467b4ebc(plVar1,&local_198,&DAT_14c83dcb8);
  FUN_1467b40ba(plVar1);
  local_198 = L"NumMinidumpFramesToIgnore";
  uStack_190 = (wchar_t *)CONCAT44(uStack_190._4_4_,0x19);
  FUN_1467b4d98(plVar1,&local_198,param_1 + 4);
  FUN_1400020e8(plVar1,L"<CallStack>",0xb);
  _Str = (wchar_t *)(**(code **)(*param_1 + 0x50))(param_1);
  sVar7 = wcslen(_Str);
  FUN_1400020e8(plVar1,_Str,sVar7 & 0xffffffff);
  FUN_1400020e8(plVar1,L"</CallStack>",0xc);
  FUN_1400020e8(plVar1,&DAT_149e02010,2);
  FUN_1467b5b38(param_1);
  FUN_1467b5bf0(param_1);
  FUN_1467b5e6e(param_1);
  local_198 = (wchar_t *)0x0;
  uStack_190 = (wchar_t *)0x0;
  cVar4 = (**(code **)(*param_1 + 0x48))(param_1,&local_198);
  if (cVar4 != '\0') {
    FUN_1400020e8(plVar1,L"<Threads>",9);
    iVar8 = (int)uStack_190 + -1;
    if ((int)uStack_190 == 0) {
      iVar8 = 0;
    }
    FUN_1400020e8(plVar1,local_198,iVar8);
    FUN_1400020e8(plVar1,L"</Threads>",10);
    FUN_1400020e8(plVar1,&DAT_149e02010,2);
  }
  if (local_198 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407c8b48(plVar1,L"</%s>\r\n",L"RuntimeProperties");
  FUN_1407c8b48(plVar1,L"<%s>\r\n",L"PlatformProperties");
  (**(code **)(*param_1 + 0x58))(param_1);
  local_198 = L"PlatformCallbackResult";
  uStack_190._0_4_ = 0x16;
  FUN_1467b4d98(plVar1,&local_198,&DAT_14c83bd20);
  local_198 = L"CrashTrigger";
  uStack_190 = (wchar_t *)CONCAT44(uStack_190._4_4_,0xc);
  FUN_1467b4d98(plVar1,&local_198,&DAT_14c83bd20);
  FUN_1407c8b48(plVar1,L"</%s>\r\n",L"PlatformProperties");
  FUN_1407c8b48(plVar1,L"<%s>\r\n",L"EngineData");
  local_168 = (wchar_t *)&DAT_100000000;
  uStack_160 = &DAT_14c83e168;
  local_158 = 0xffffffff;
  iStack_154 = 0;
  uStack_150 = 0;
  if (DAT_14c83e180 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_168);
    iVar8 = DAT_14c83e180;
  }
  uStack_178 = CONCAT44(uStack_14c,uStack_150);
  local_180 = local_158;
  iStack_17c = iStack_154;
  uStack_190 = local_168;
  local_188 = (int)uStack_160;
  uStack_184 = uStack_160._4_4_;
  local_198 = (wchar_t *)&DAT_14c83e158;
  if ((iStack_154 != iVar8) || (uStack_160 != &DAT_14c83e168)) {
    do {
      puVar2 = (undefined8 *)(*(longlong *)local_198 + (longlong)iStack_17c * 0x28);
      local_170 = L"";
      if (*(int *)(puVar2 + 3) != 0) {
        local_170 = (wchar_t *)puVar2[2];
      }
      if (*(int *)(puVar2 + 1) == 0) {
        local_168 = L"";
LAB_1467b5a0d:
        sVar7 = wcslen(local_168);
        uVar6 = (int)sVar7;
      }
      else {
        local_168 = (wchar_t *)*puVar2;
        uVar6 = 0;
        if (local_168 != (wchar_t *)0x0) goto LAB_1467b5a0d;
      }
      uStack_160 = (undefined *)CONCAT44(uStack_160._4_4_,uVar6);
      FUN_1467b4f42(plVar1,&local_168,&local_170);
      local_180 = local_180 & ~uStack_190._4_4_;
      FUN_1449c0562(&uStack_190);
    } while (local_198 != (wchar_t *)&DAT_14c83e158 ||
             ((undefined *)CONCAT44(uStack_184,local_188) != &DAT_14c83e168 || iStack_17c != iVar8))
    ;
  }
  FUN_1407c8b48(plVar1,L"</%s>\r\n",L"EngineData");
  FUN_1407c8b48(plVar1,L"<%s>\r\n",L"GameData");
  local_168 = (wchar_t *)&DAT_100000000;
  uStack_160 = &DAT_14c83e1b8;
  local_158 = 0xffffffff;
  iStack_154 = 0;
  uStack_150 = 0;
  if (DAT_14c83e1d0 == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_168);
    iVar8 = DAT_14c83e1d0;
  }
  uStack_178 = CONCAT44(uStack_14c,uStack_150);
  local_180 = local_158;
  iStack_17c = iStack_154;
  uStack_190 = local_168;
  local_188 = (int)uStack_160;
  uStack_184 = uStack_160._4_4_;
  local_198 = (wchar_t *)&DAT_14c83e1a8;
  if ((iStack_154 != iVar8) || (uStack_160 != &DAT_14c83e1b8)) {
    do {
      puVar2 = (undefined8 *)(*(longlong *)local_198 + (longlong)iStack_17c * 0x28);
      local_170 = L"";
      if (*(int *)(puVar2 + 3) != 0) {
        local_170 = (wchar_t *)puVar2[2];
      }
      if (*(int *)(puVar2 + 1) == 0) {
        local_168 = L"";
LAB_1467b5abe:
        sVar7 = wcslen(local_168);
        uVar6 = (int)sVar7;
      }
      else {
        local_168 = (wchar_t *)*puVar2;
        uVar6 = 0;
        if (local_168 != (wchar_t *)0x0) goto LAB_1467b5abe;
      }
      uStack_160 = (undefined *)CONCAT44(uStack_160._4_4_,uVar6);
      FUN_1467b4f42(plVar1,&local_168,&local_170);
      local_180 = local_180 & ~uStack_190._4_4_;
      FUN_1449c0562(&uStack_190);
    } while (local_198 != (wchar_t *)&DAT_14c83e1a8 ||
             ((undefined *)CONCAT44(uStack_184,local_188) != &DAT_14c83e1b8 || iStack_17c != iVar8))
    ;
  }
  FUN_1407c8b48(plVar1,L"</%s>\r\n",L"GameData");
  if (0 < DAT_14c83e150) {
    FUN_1407c8b48(plVar1,L"<%s>\r\n",L"EnabledPlugins");
    lVar3 = DAT_14c83e148;
    lVar10 = (longlong)DAT_14c83e150;
    if (lVar10 != 0) {
      lVar9 = 0;
      do {
        local_168 = L"";
        if (*(int *)(lVar3 + 8 + lVar9) != 0) {
          local_168 = *(wchar_t **)(lVar3 + lVar9);
        }
        local_198 = L"Plugin";
        uStack_190 = (wchar_t *)CONCAT44(uStack_190._4_4_,6);
        FUN_1467b4f42(plVar1,&local_198,&local_168);
        lVar9 = lVar9 + 0x10;
      } while (lVar10 * 0x10 != lVar9);
    }
    FUN_1407c8b48(plVar1,L"</%s>\r\n",L"EnabledPlugins");
  }
  FUN_1407c8b48(plVar1,L"</%s>\r\n",L"FGenericCrashContext");
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b5b38 FUN_1467b5b38 body=182 status=ok
// SIG undefined FUN_1467b5b38(void)

void FUN_1467b5b38(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_30 = L"PCallStack";
    local_28 = 10;
    FUN_1467b4fc8(param_1 + 0x58);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  lVar1 = param_1 + 0x58;
  FUN_1407c8b48(lVar1,L"<%s>\r\n",L"PCallStack");
  local_40 = *(undefined8 *)(param_1 + 0x28);
  local_38 = *(undefined4 *)(param_1 + 0x30);
  FUN_1467b6394(lVar1);
  FUN_1407c8b48(lVar1,L"</%s>\r\n",L"PCallStack");
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b5bf0 FUN_1467b5bf0 body=637 status=ok
// SIG undefined FUN_1467b5bf0(void)

void FUN_1467b5bf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined2 *local_140;
  wchar_t *local_138;
  undefined4 local_130;
  undefined2 *local_128;
  undefined8 uStack_120;
  wchar_t *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  wchar_t *local_e8;
  undefined4 local_e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_e8 = L"PCallStackHash";
    local_e0 = 0xe;
    FUN_1467b4fc8(param_1 + 0x58);
  }
  else {
    lVar2 = FUN_145789b0e(1);
    FUN_1427879d8(&local_e8);
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      lVar12 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x28);
        lVar6 = lVar12 * 0x20;
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(lVar3 + 8 + lVar6) != 0) {
          puVar5 = *(undefined2 **)(lVar3 + lVar6);
        }
        lVar7 = 0;
        while( true ) {
          uVar8 = *(ushort *)((longlong)puVar5 + lVar7);
          uVar9 = (ulonglong)uVar8;
          uVar10 = *(ushort *)(lVar2 + lVar7);
          if (uVar8 != uVar10) break;
          if (uVar8 == 0) goto LAB_1467b5d36;
LAB_1467b5cfb:
          lVar7 = lVar7 + 2;
        }
        if ((uVar10 | uVar8) < 0x80) {
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar11 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_1467b5cfb;
        }
        if (uVar8 != uVar10) {
          local_150 = 0xffffffff;
          local_158 = 0;
          iVar1 = FUN_1447ee042((undefined8 *)(lVar3 + lVar6),L"UnrealEditor",0xc,1);
          if (iVar1 == -1) goto LAB_1467b5d4c;
          lVar3 = *(longlong *)(param_1 + 0x28);
        }
LAB_1467b5d36:
        FUN_140c54e34(&local_e8,lVar3 + lVar6 + 0x18);
LAB_1467b5d4c:
        lVar12 = lVar12 + 1;
      } while ((int)lVar12 < *(int *)(param_1 + 0x30));
    }
    FUN_140c54d7a(&local_e8);
    FUN_142787a10(&local_e8,&local_108);
    local_128 = (undefined2 *)0x0;
    uStack_120 = 0;
    local_118 = (wchar_t *)0x0;
    uStack_110 = 0;
    FUN_1407c8a86(&local_108,0x14,&local_118);
    local_138 = local_118;
    if ((int)uStack_110 == 0) {
      local_138 = L"";
    }
    local_130 = 0;
    if (local_138 != (wchar_t *)0x0) {
      sVar4 = wcslen(local_138);
      local_130 = (int)sVar4;
    }
    FUN_1467b62c0(&local_128);
    if (local_118 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    local_140 = local_128;
    if ((int)uStack_120 == 0) {
      local_140 = &DAT_149dfb77a;
    }
    local_118 = L"PCallStackHash";
    uStack_110 = CONCAT44(uStack_110._4_4_,0xe);
    FUN_1467b4f42(param_1 + 0x58);
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1427879f6(&local_e8);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b5e6e FUN_1467b5e6e body=772 status=ok
// SIG undefined FUN_1467b5e6e(void)

void FUN_1467b5e6e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_d8 [36];
  int local_b4;
  undefined *local_b0;
  longlong local_a8 [2];
  wchar_t *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c83e268 == '\x01') {
    param_1 = param_1 + 0x58;
    FUN_1407c8b48(param_1,L"<%s>\r\n",L"GPUBreadcrumbs");
    local_98 = L"FormatVersion";
    local_90 = 0xd;
    FUN_1467b5274(param_1,&local_98,&DAT_14c83e258);
    local_98 = L"Source";
    local_90 = 6;
    FUN_1467b5274(param_1,&local_98,&DAT_14c83e248);
    local_70 = (wchar_t *)0x100000000;
    uStack_68 = &DAT_14c83e208;
    local_60 = 0xffffffff;
    uStack_58 = 0;
    if (DAT_14c83e220 == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      iVar5 = DAT_14c83e220;
    }
    uStack_78 = CONCAT44(uStack_54,uStack_58);
    local_80 = local_60;
    uVar2 = local_80;
    local_90 = (undefined4)local_70;
    uStack_8c = local_70._4_4_;
    uStack_88 = (undefined4)uStack_68;
    uStack_84 = uStack_68._4_4_;
    local_98 = (wchar_t *)&DAT_14c83e1f8;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    if ((local_80._4_4_ != iVar5) || (uStack_68 != &DAT_14c83e208)) {
      local_b0 = &DAT_14c83e208;
      iVar3 = local_80._4_4_;
      local_b4 = iVar5;
      local_80 = uVar2;
      do {
        lVar1 = *(longlong *)local_98;
        lVar4 = (longlong)iVar3 * 0x50;
        FUN_1407c8b48(param_1,L"<%s>\r\n",L"Queue");
        local_70 = L"Name";
        uStack_68._0_4_ = 4;
        FUN_1467b5274(param_1,&local_70,lVar1 + lVar4);
        local_a8[0] = 0;
        local_a8[1] = 0;
        FUN_1407c8a86(lVar1 + lVar4 + 0x20,0x14,local_a8);
        local_70 = L"FullHash";
        uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,8);
        FUN_1467b5274(param_1,&local_70,local_a8);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        local_a8[0] = 0;
        local_a8[1] = 0;
        FUN_1407c8a86(lVar1 + lVar4 + 0x34,0x14,local_a8);
        local_70 = L"ActiveHash";
        uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,10);
        FUN_1467b5274(param_1,&local_70,local_a8);
        if (local_a8[0] != 0) {
          FUN_1400020a8();
        }
        local_70 = L"Breadcrumbs";
        uStack_68 = (undefined *)CONCAT44(uStack_68._4_4_,0xb);
        FUN_1467b5274(param_1,&local_70,lVar1 + lVar4 + 0x10);
        FUN_1407c8b48(param_1,L"</%s>\r\n",L"Queue");
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
        FUN_1449c0562(&local_90);
        iVar3 = local_80._4_4_;
        uVar2 = local_80;
      } while (local_98 != (wchar_t *)&DAT_14c83e1f8 ||
               ((undefined *)CONCAT44(uStack_84,uStack_88) != local_b0 || local_80._4_4_ != local_b4
               ));
    }
    local_80 = uVar2;
    FUN_1407c8b48(param_1,L"</%s>\r\n",L"GPUBreadcrumbs");
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b617c FUN_1467b617c body=116 status=ok
// SIG undefined FUN_1467b617c(void)

void FUN_1467b617c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1467b533e();
  uVar1 = FUN_14054d1d4();
  local_28 = *(undefined8 *)(param_1 + 0x58);
  local_20 = *(int *)(param_1 + 0x60) + -1;
  if (*(int *)(param_1 + 0x60) == 0) {
    local_20 = 0;
  }
  local_38 = 0;
  FUN_1415d54ec(&local_28,param_2,0,uVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b61f2 FUN_1467b61f2 body=202 status=ok
// SIG undefined FUN_1467b61f2(void)

void FUN_1467b61f2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_4a8 [32];
  undefined2 *local_488;
  undefined4 local_480;
  undefined8 local_478;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined2 *local_450;
  undefined2 *local_448;
  ulonglong *local_440;
  char local_438;
  undefined2 local_430 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  uVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  local_468 = *param_3;
  uStack_464 = param_3[1];
  uStack_460 = param_3[2];
  uStack_45c = param_3[3];
  local_450 = local_430;
  local_438 = '\0';
  local_440 = &local_30;
  local_448 = local_450;
  FUN_1467b655c(&local_450);
  *local_448 = 0;
  local_488 = local_450;
  local_480 = uVar1;
  local_478 = uVar2;
  FUN_1407c8b48(param_1,L"<%.*s>%s</%.*s>\r\n",*(undefined4 *)(param_2 + 1),*param_2);
  if (local_438 == '\x01') {
    FUN_1400020a8(local_450);
  }
  if ((local_30 ^ (ulonglong)auStack_4a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b62c0 FUN_1467b62c0 body=212 status=ok
// SIG undefined FUN_1467b62c0(void)

void FUN_1467b62c0(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar5);
      if (uVar1 < 0x27) {
        if (uVar1 != 0xd) {
          if (uVar1 == 0x22) {
            pwVar4 = L"&quot;";
            goto LAB_1467b6361;
          }
          if (uVar1 == 0x26) {
            pwVar4 = L"&amp;";
            uVar6 = 5;
            goto LAB_1467b6375;
          }
LAB_1467b634d:
          FUN_140002184(param_1);
        }
      }
      else {
        if (uVar1 == 0x27) {
          pwVar4 = L"&apos;";
LAB_1467b6361:
          uVar6 = 6;
        }
        else {
          if (uVar1 == 0x3c) {
            pwVar4 = L"&lt;";
          }
          else {
            if (uVar1 != 0x3e) goto LAB_1467b634d;
            pwVar4 = L"&gt;";
          }
          uVar6 = 4;
        }
LAB_1467b6375:
        FUN_1400020e8(param_1,pwVar4,uVar6);
      }
      lVar5 = lVar5 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar5);
  }
  return;
}



// FUNCTION 1467b6394 FUN_1467b6394 body=455 status=ok
// SIG undefined FUN_1467b6394(void)

void FUN_1467b6394(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_4c8 [32];
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_490;
  int local_488;
  undefined2 *local_480;
  undefined2 *local_478;
  ulonglong *local_470;
  char local_468;
  undefined2 local_460 [512];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  FUN_1400020e8(param_1,&DAT_149e02010,2);
  if ((longlong)(int)param_2[1] != 0) {
    puVar8 = (undefined8 *)*param_2;
    puVar6 = puVar8 + (longlong)(int)param_2[1] * 4;
    iVar7 = 0;
    do {
      local_490 = *puVar8;
      local_488 = *(int *)(puVar8 + 1) + -1;
      if (*(int *)(puVar8 + 1) == 0) {
        local_488 = 0;
      }
      local_468 = '\0';
      local_470 = local_60;
      local_480 = local_460;
      local_478 = local_460;
      FUN_1467b655c(&local_480,&local_490);
      iVar5 = (int)((ulonglong)((longlong)local_478 - (longlong)local_480) >> 1);
      if (iVar7 < iVar5) {
        iVar7 = iVar5;
      }
      if (local_468 == '\x01') {
        FUN_1400020a8();
      }
      puVar8 = puVar8 + 4;
    } while (puVar8 != puVar6);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = *param_2;
      lVar9 = 0;
      do {
        puVar8 = (undefined8 *)(lVar1 + 0x10 + lVar9);
        uVar2 = *puVar8;
        uVar3 = puVar8[1];
        local_490 = *(undefined8 *)(lVar1 + lVar9);
        iVar5 = *(int *)(lVar1 + 8 + lVar9);
        local_488 = iVar5 + -1;
        if (iVar5 == 0) {
          local_488 = 0;
        }
        local_468 = '\0';
        local_470 = local_60;
        local_480 = local_460;
        local_478 = local_460;
        FUN_1467b655c(&local_480,&local_490);
        *local_478 = 0;
        local_4a8 = uVar2;
        uStack_4a0 = uVar3;
        FUN_1407c8b48(param_1,L"%-*s 0x%016llx + %-16llx\r\n",iVar7 + 1,local_480);
        if (local_468 == '\x01') {
          FUN_1400020a8(local_480);
        }
        lVar9 = lVar9 + 0x20;
      } while ((longlong)(int)lVar4 * 0x20 != lVar9);
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_4c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b655c FUN_1467b655c body=443 status=ok
// SIG undefined FUN_1467b655c(void)

void FUN_1467b655c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ushort *puVar5;
  longlong lVar6;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar6 = 0;
    do {
      uVar1 = *(ushort *)(lVar2 + lVar6);
      if (uVar1 < 0x27) {
        if (uVar1 != 0xd) {
          if (uVar1 == 0x22) {
            puVar4 = *(undefined8 **)(param_1 + 8);
            if (*(ulonglong *)(param_1 + 0x10) <= (longlong)puVar4 + 0xcU) {
              FUN_140213274(param_1,6);
              puVar4 = *(undefined8 **)(param_1 + 8);
            }
            *puVar4 = 0x6f007500710026;
            *(undefined4 *)(puVar4 + 1) = 0x3b0074;
            goto LAB_1467b66c2;
          }
          if (uVar1 == 0x26) {
            puVar4 = *(undefined8 **)(param_1 + 8);
            if (*(ulonglong *)(param_1 + 0x10) <= (longlong)puVar4 + 10U) {
              FUN_140213274(param_1,5);
              puVar4 = *(undefined8 **)(param_1 + 8);
            }
            *puVar4 = 0x70006d00610026;
            *(undefined2 *)(puVar4 + 1) = 0x3b;
            puVar4 = (undefined8 *)((longlong)puVar4 + 10);
            goto LAB_1467b66f5;
          }
LAB_1467b6662:
          puVar5 = *(ushort **)(param_1 + 8);
          if (*(ushort **)(param_1 + 0x10) <= puVar5 + 1) {
            FUN_140213274(param_1,1);
            puVar5 = *(ushort **)(param_1 + 8);
          }
          *(ushort **)(param_1 + 8) = puVar5 + 1;
          *puVar5 = uVar1;
        }
      }
      else {
        if (uVar1 == 0x27) {
          puVar4 = *(undefined8 **)(param_1 + 8);
          if (*(ulonglong *)(param_1 + 0x10) <= (longlong)puVar4 + 0xcU) {
            FUN_140213274(param_1,6);
            puVar4 = *(undefined8 **)(param_1 + 8);
          }
          *puVar4 = 0x6f007000610026;
          *(undefined4 *)(puVar4 + 1) = 0x3b0073;
LAB_1467b66c2:
          puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
        }
        else {
          if (uVar1 == 0x3c) {
            puVar4 = *(undefined8 **)(param_1 + 8);
            if (*(undefined8 **)(param_1 + 0x10) <= puVar4 + 1) {
              FUN_140213274(param_1,4);
              puVar4 = *(undefined8 **)(param_1 + 8);
            }
            *puVar4 = 0x3b0074006c0026;
          }
          else {
            if (uVar1 != 0x3e) goto LAB_1467b6662;
            puVar4 = *(undefined8 **)(param_1 + 8);
            if (*(undefined8 **)(param_1 + 0x10) <= puVar4 + 1) {
              FUN_140213274(param_1,4);
              puVar4 = *(undefined8 **)(param_1 + 8);
            }
            *puVar4 = 0x3b007400670026;
          }
          puVar4 = puVar4 + 1;
        }
LAB_1467b66f5:
        *(undefined8 **)(param_1 + 8) = puVar4;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)(int)lVar3 * 2 != lVar6);
  }
  return;
}



// FUNCTION 1467b6718 FUN_1467b6718 body=117 status=ok
// SIG undefined FUN_1467b6718(void)

longlong FUN_1467b6718(longlong param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0x70) == '\x01') {
    FUN_1467b3520(param_1);
  }
  FUN_1467bbdc2(param_1,param_2);
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x70) = 1;
  return param_1;
}



// FUNCTION 1467b678e FUN_1467b678e body=100 status=ok
// SIG undefined FUN_1467b678e(void)

longlong FUN_1467b678e(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar4 = (ulonglong)(iVar2 - 1);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  uVar1 = FUN_144a49b4a(uVar4,puVar5);
  iVar2 = FUN_1457511aa(&DAT_14c83e158,uVar1,param_1);
  uVar4 = 0;
  if (iVar2 != -1) {
    uVar4 = (longlong)iVar2 * 0x28 + DAT_14c83e158;
  }
  lVar3 = uVar4 + 0x10;
  if (uVar4 == 0) {
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 1467b67f2 FUN_1467b67f2 body=165 status=ok
// SIG undefined FUN_1467b67f2(void)

void FUN_1467b67f2(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c83bcd8);
  iVar2 = DAT_14c83e278;
  lVar4 = (longlong)(int)DAT_14c83e278;
  DAT_14c83e278 = DAT_14c83e278 + 1;
  if (DAT_14c83e27c < DAT_14c83e278) {
    FUN_1447a1bd6(&DAT_14c83e270,iVar2);
  }
  lVar3 = DAT_14c83e270;
  lVar4 = lVar4 * 0x10;
  puVar1 = (undefined8 *)(DAT_14c83e270 + lVar4);
  *(undefined8 *)(DAT_14c83e270 + lVar4) = 0;
  iVar2 = *(int *)(param_1 + 1);
  _Src = (void *)*param_1;
  *(int *)(lVar3 + 8 + lVar4) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar2,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b6886. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c83bcd8);
  return;
}



// FUNCTION 1467b6898 FUN_1467b6898 body=181 status=ok
// SIG undefined FUN_1467b6898(void)

void FUN_1467b6898(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *_Dst;
  ulonglong uVar3;
  undefined1 auStack_368 [32];
  longlong local_348 [100];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_368;
  _Dst = local_348;
  memset(_Dst,0,800);
  uVar1 = FUN_146830e68(_Dst,100,param_3);
  uVar3 = (ulonglong)uVar1;
  if (param_2 != 0 && 0 < (int)uVar1) {
    _Dst = local_348;
    uVar2 = 0;
    do {
      if (*_Dst == param_2) {
        *(int *)(param_1 + 4) = (int)uVar2;
        uVar3 = (ulonglong)(uVar1 - (int)uVar2);
        goto LAB_1467b691b;
      }
      uVar2 = uVar2 + 1;
      _Dst = _Dst + 1;
    } while (uVar3 != uVar2);
    _Dst = local_348;
  }
LAB_1467b691b:
  (**(code **)(*param_1 + 0x10))(param_1,_Dst,uVar3);
  if ((local_28 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b695c FUN_1467b695c body=560 status=ok
// SIG undefined FUN_1467b695c(void)

void FUN_1467b695c(undefined8 param_1,longlong param_2,uint param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  uVar5 = FUN_1468313b2();
  local_58 = 0;
  uStack_50 = (ulonglong)uVar5;
  if (uVar5 != 0) {
    FUN_1467bbfe0(&local_58,0);
  }
  uVar6 = FUN_14279c1f0(local_58,uVar5);
  FUN_1467b6b8e(&local_58,uVar6);
  FUN_1467b6bd6(param_4,param_3);
  if (0 < (int)param_3) {
    uVar10 = 0;
    do {
      uVar2 = *(ulonglong *)(local_90 + uVar10 * 8);
      if ((longlong)(int)uStack_50 != 0) {
        lVar7 = 8;
        lVar9 = 0;
        do {
          uVar3 = *(ulonglong *)(local_58 + -8 + lVar7);
          if ((uVar3 <= uVar2) && (uVar2 < *(uint *)(local_58 + lVar7) + uVar3)) {
            if (local_58 - lVar9 != 0) {
              FUN_140056680(local_88,(local_58 - lVar9) + 0x50);
              FUN_1405f3246(&local_78,local_88);
              uVar8 = local_78;
              local_78 = 0;
              uVar6 = (undefined4)local_70;
              uVar4 = local_70._4_4_;
              local_70 = 0;
              iVar1 = (int)param_4[1];
              *(uint *)(param_4 + 1) = iVar1 + 1U;
              if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
                local_98 = uVar8;
                FUN_1467bc1f2(param_4,iVar1);
                uVar8 = local_98;
              }
              lVar7 = *param_4;
              lVar9 = (longlong)iVar1 * 0x20;
              *(undefined8 *)(lVar7 + lVar9) = uVar8;
              *(undefined4 *)(lVar7 + 8 + lVar9) = uVar6;
              *(undefined4 *)(lVar7 + 0xc + lVar9) = uVar4;
              *(ulonglong *)(lVar7 + 0x10 + lVar9) = uVar3;
              *(ulonglong *)(lVar7 + 0x18 + lVar9) = uVar2 - uVar3;
              if (local_88[0] != 0) {
                FUN_1400020a8();
              }
              goto LAB_1467b6a97;
            }
            break;
          }
          lVar9 = lVar9 + -0x468;
          lVar7 = lVar7 + 0x468;
        } while ((longlong)(int)uStack_50 * -0x468 - lVar9 != 0);
      }
      FUN_140056680(&local_68,L"Unknown");
      uVar8 = local_68;
      local_68 = 0;
      uVar6 = (undefined4)local_60;
      uVar4 = local_60._4_4_;
      local_60 = 0;
      iVar1 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar1 + 1U) {
        FUN_1467bc1f2(param_4,iVar1);
      }
      lVar7 = *param_4;
      lVar9 = (longlong)iVar1 * 0x20;
      *(undefined8 *)(lVar7 + lVar9) = uVar8;
      *(undefined4 *)(lVar7 + 8 + lVar9) = uVar6;
      *(undefined4 *)(lVar7 + 0xc + lVar9) = uVar4;
      *(undefined8 *)(lVar7 + 0x10 + lVar9) = 0;
      *(ulonglong *)(lVar7 + 0x18 + lVar9) = uVar2;
LAB_1467b6a97:
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_3);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1467b6b8e FUN_1467b6b8e body=71 status=ok
// SIG undefined FUN_1467b6b8e(void)

void FUN_1467b6b8e(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1467bbfe0();
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
      FUN_1467bc074();
      return;
    }
  }
  return;
}



// FUNCTION 1467b6bd6 FUN_1467b6bd6 body=61 status=ok
// SIG undefined FUN_1467b6bd6(void)

void FUN_1467b6bd6(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_1467bc14c(param_1);
    return;
  }
  FUN_1467bc120(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 1467b6c14 FUN_1467b6c14 body=83 status=ok
// SIG undefined FUN_1467b6c14(void)

void FUN_1467b6c14(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      (**(code **)(*param_1 + 0x38))
                (param_1,*(undefined4 *)(lVar1 + 0x18 + lVar3),*(undefined8 *)(lVar1 + 0x10 + lVar3)
                 ,*(undefined8 *)(lVar1 + lVar3),*(undefined4 *)(lVar1 + 8 + lVar3));
      lVar3 = lVar3 + 0x20;
    } while ((longlong)(int)lVar2 * 0x20 != lVar3);
  }
  return;
}



// FUNCTION 1467b6c6a FUN_1467b6c6a body=58 status=ok
// SIG undefined FUN_1467b6c6a(void)

void FUN_1467b6c6a(longlong *param_1)

{
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) < 0) {
    FUN_1467bc278(param_1 + 9);
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b6c97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,param_1 + 9);
  return;
}



// FUNCTION 1467b6ca4 FUN_1467b6ca4 body=137 status=ok
// SIG undefined FUN_1467b6ca4(void)

void FUN_1467b6ca4(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_1468313b2();
  if ((int)uVar1 < 1) {
    return;
  }
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  iVar4 = 0;
  if (iVar2 < 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    FUN_1467bc278(param_2);
    iVar4 = (int)param_2[1];
    iVar2 = *(int *)((longlong)param_2 + 0xc);
  }
  *(uint *)(param_2 + 1) = iVar4 + uVar1;
  if ((uint)(iVar2 - iVar4) < uVar1) {
    FUN_1467bbfe0(param_2);
  }
  memset((void *)((longlong)iVar4 * 0x468 + *param_2),0,(ulonglong)uVar1 * 0x468);
  uVar3 = FUN_14279c1f0(*param_2,uVar1);
  FUN_1467b6b8e(param_2,uVar3);
  return;
}



// FUNCTION 1467b6d2e FUN_1467b6d2e body=149 status=ok
// SIG undefined FUN_1467b6d2e(void)

void FUN_1467b6d2e(undefined8 param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  BOOL BVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_141105c00();
  BVar3 = TryEnterCriticalSection(lpCriticalSection);
  puVar6 = DAT_14c83e2c0;
  if (BVar3 == 0) {
    return;
  }
  for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
    if (*(int *)(puVar6 + 0x11) != 0) {
      uVar7 = 0;
      do {
        puVar1 = (undefined8 *)puVar6[uVar7 + 1];
        pcVar2 = (code *)*puVar1;
        plVar5 = puVar1 + 4;
        if ((longlong *)puVar1[2] != (longlong *)0x0) {
          plVar5 = (longlong *)puVar1[2];
        }
        uVar4 = (**(code **)(*plVar5 + 8))();
        (*pcVar2)(uVar4,param_1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(puVar6 + 0x11));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001467b6daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1467b6dc4 FUN_1467b6dc4 body=90 status=ok
// SIG undefined FUN_1467b6dc4(void)

void FUN_1467b6dc4(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &PTR_FUN_149e04fd0;
  local_18 = param_1;
  FUN_1467bc2a8(&DAT_14c83bcc0,&local_20);
  FUN_1467b6d2e(&local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b6e20 FUN_1467b6e20 body=105 status=ok
// SIG undefined FUN_1467b6e20(void)

void FUN_1467b6e20(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  local_28 = &local_30;
  FUN_1467b99b8(param_1 + 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b6e8a FUN_1467b6e8a body=153 status=ok
// SIG undefined FUN_1467b6e8a(void)

longlong * FUN_1467b6e8a(longlong *param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  wchar_t *local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_4 & 2) == 0) {
    lVar2 = (**(code **)(*param_1 + 0xe8))(param_1,param_3,param_4 & 0xffffff01);
    if (lVar2 != 0) {
      *param_2 = lVar2;
      uVar1 = 0;
      goto LAB_1467b6ee9;
    }
    local_20 = 
    L"[Unknown Error] Current IPlatformFile implementation does not support returning error messages"
    ;
    local_18 = 0x5e;
  }
  else {
    local_20 = 
    L"The current IPlatformFile implementation does not support the EReadFlags::AllowDelete flag";
    local_18 = 0x5a;
  }
  FUN_140da6d52(param_2,&local_20,0);
  uVar1 = 1;
LAB_1467b6ee9:
  *(undefined1 *)(param_2 + 3) = uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b6f24 FUN_1467b6f24 body=189 status=ok
// SIG undefined FUN_1467b6f24(void)

void FUN_1467b6f24(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 0x60))();
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x60))(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,&local_40,param_2);
  *param_4 = local_40;
  (**(code **)(*param_1 + 0xb0))(param_1,&local_40,param_3);
  *param_5 = local_40;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7002 FUN_1467b7002 body=102 status=ok
// SIG undefined FUN_1467b7002(void)

longlong * FUN_1467b7002(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0xb0))();
  FUN_1402160b8(&local_28);
  FUN_140212f8e(&local_30);
  *param_2 = *param_2 + (local_28 - local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b706a FUN_1467b706a body=144 status=ok
// SIG undefined FUN_1467b706a(void)

undefined8 FUN_1467b706a(longlong *param_1,wchar_t *param_2,undefined8 param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    local_30 = (int)sVar2;
  }
  FUN_140115b7a(local_48);
  cVar1 = (**(code **)(*param_1 + 8))(param_1,local_48);
  uVar3 = 1;
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b70fc FUN_1467b70fc body=79 status=ok
// SIG undefined FUN_1467b70fc(void)

void FUN_1467b70fc(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = &PTR_FUN_149e05160;
  (**(code **)(*param_1 + 0x140))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b714c FUN_1467b714c body=82 status=ok
// SIG undefined FUN_1467b714c(void)

void FUN_1467b714c(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  longlong *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &PTR_FUN_149e05180;
  local_18 = param_1;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x140))(param_1,param_2,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b71a0 FUN_1467b71a0 body=84 status=ok
// SIG undefined FUN_1467b71a0(void)

void FUN_1467b71a0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined1 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = 0;
  local_28 = &PTR_FUN_149e05140;
  (**(code **)(*param_1 + 0x1a8))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b71f6 FUN_1467b71f6 body=79 status=ok
// SIG undefined FUN_1467b71f6(void)

void FUN_1467b71f6(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  undefined **local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = &PTR_FUN_149e05160;
  (**(code **)(*param_1 + 0x1b8))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7246 FUN_1467b7246 body=345 status=ok
// SIG undefined FUN_1467b7246(void)

undefined4 FUN_1467b7246(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 local_70;
  longlong *local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined1 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_38);
  FUN_140e4328c(&local_38);
  FUN_140056680(&local_48,param_3);
  FUN_140e4328c(&local_48);
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*param_1 + 0x108))(param_1,puVar3);
  if (cVar1 == '\0') {
LAB_1467b735d:
    uVar2 = 0;
  }
  else {
    puVar3 = local_38;
    if (local_30 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    cVar1 = (**(code **)(*param_1 + 0x108))(param_1,puVar3);
    if (cVar1 == '\0') {
      puVar3 = local_38;
      if (local_30 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      cVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,puVar3);
      if (cVar1 == '\0') goto LAB_1467b735d;
    }
    local_58 = &DAT_149dfb77a;
    if (local_30 != 0) {
      local_58 = local_38;
    }
    local_60 = &DAT_149dfb77a;
    if (local_40 != 0) {
      local_60 = local_48;
    }
    local_70 = 0;
    local_78 = &PTR_FUN_149e051e0;
    local_68 = param_1;
    local_50 = param_4;
    uVar2 = (**(code **)(*param_1 + 0x1a8))(param_1);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1467b73a0 FUN_1467b73a0 body=40 status=ok
// SIG undefined FUN_1467b73a0(void)

undefined8 FUN_1467b73a0(undefined8 param_1,undefined8 param_2,undefined1 *param_3,longlong param_4)

{
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 4;
  }
  if (param_4 != 0) {
    FUN_14020fad6(param_4,L"PlatformFileJournal is not implemented on the current platform.");
  }
  return 0;
}



// FUNCTION 1467b73c8 FUN_1467b73c8 body=59 status=ok
// SIG undefined FUN_1467b73c8(void)

undefined8
FUN_1467b73c8(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  if (param_5 != 0) {
    FUN_14020fad6(param_5,L"PlatformFileJournal is not implemented on the current platform.");
  }
  *param_3 = 0xffffffffffffffff;
  *param_4 = 0xffffffffffffffff;
  return 1;
}



// FUNCTION 1467b7404 FUN_1467b7404 body=82 status=ok
// SIG undefined FUN_1467b7404(void)

void FUN_1467b7404(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_14275081e;
  local_20 = param_3;
  (**(code **)(*param_1 + 0x138))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1467b7458 FUN_1467b7458 body=128 status=ok
// SIG undefined FUN_1467b7458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1467b7458(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined8 local_30;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x120))(param_1,local_40);
  *param_2 = local_30;
  *(undefined4 *)(param_2 + 3) = DAT_14c83e2e8;
  uVar3 = uRam000000014c83e2e4;
  uVar2 = _DAT_14c83e2e0;
  uVar1 = uRam000000014c83e2dc;
  *(undefined4 *)(param_2 + 1) = _DAT_14c83e2d8;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar1;
  *(undefined4 *)(param_2 + 2) = uVar2;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar3;
  *(byte *)((longlong)param_2 + 0x1c) =
       local_20 * '\x02' & 2 | local_20 >> 2 & 1 | *(byte *)((longlong)param_2 + 0x1c) & 0xfc;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


