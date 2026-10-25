// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14696a6f4 FUN_14696a6f4 body=266 status=ok
// SIG undefined FUN_14696a6f4(void)

longlong FUN_14696a6f4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_14696a721:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_14696a721;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_1428765f2(lVar9 + 0x90);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14696a800 FUN_14696a800 body=297 status=ok
// SIG undefined FUN_14696a800(void)

void FUN_14696a800(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x8f8) == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = param_1 + 0x8e0;
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x8f0);
    }
    lVar5 = param_1 + 0x8b0;
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x8d0);
    }
    uVar6 = *(undefined8 *)
             (lVar5 + (longlong)*(int *)(lVar4 + (longlong)(*(int *)(param_1 + 0x8f8) + -1) * 4) * 8
             );
  }
  lVar4 = param_1 + 0x260;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x8a0);
  }
  lVar5 = (longlong)(*(int *)(param_1 + 0x8a8) + -1) * 0x20;
  puVar2 = (undefined8 *)(lVar4 + lVar5);
  if (((*(longlong *)(lVar4 + lVar5) == 0) || (puVar2[1] == 0)) || (*(int *)(puVar2[1] + 8) < 1)) {
    FUN_146953be8(uVar6,&local_38,puVar2[2]);
    *puVar2 = local_38;
    local_38 = 0;
    plVar3 = (longlong *)puVar2[1];
    puVar2[1] = local_30;
    local_30 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14696a92a(uVar6,puVar2,param_1 + 0x120);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696a92a FUN_14696a92a body=266 status=ok
// SIG undefined FUN_14696a92a(void)

longlong FUN_14696a92a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar8 = (longlong *)param_2[1];
  if (plVar8 == (longlong *)0x0) {
LAB_14696a957:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar8[1];
    do {
      if (iVar4 == 0) goto LAB_14696a957;
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = 0;
  if (plVar8 != (longlong *)0x0) {
    lVar9 = *param_2;
  }
  lVar5 = FUN_1428767ae(lVar9 + 0xb0);
  *(byte *)(lVar5 + 0x4a) = *(byte *)(lVar5 + 0x4a) | 1;
  local_38 = lVar9;
  FUN_1469691d8(param_1 + 0x48);
  if (((0 < (longlong)(int)param_3[1]) &&
      (lVar7 = (longlong)*(int *)(*param_3 + -4 + (longlong)(int)param_3[1] * 4), lVar7 != -1)) &&
     (lVar7 * 0x40 + param_3[2] != 0)) {
    puVar6 = (undefined8 *)FUN_146953cfc(param_1);
    FUN_14695468a(lVar9,puVar6);
    *(undefined8 *)(lVar5 + 0x30) = *puVar6;
    *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14696aa35 FUN_14696aa35 body=47 status=ok
// SIG undefined FUN_14696aa35(void)

void FUN_14696aa35(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfe;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  return;
}



// FUNCTION 14696aa64 FUN_14696aa64 body=102 status=ok
// SIG undefined FUN_14696aa64(void)

void FUN_14696aa64(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x14)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x14) = iVar4;
    FUN_14696aacc(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14696aacc FUN_14696aacc body=124 status=ok
// SIG undefined FUN_14696aacc(void)

void FUN_14696aacc(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,1);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,1);
  return;
}



// FUNCTION 14696ab48 FUN_14696ab48 body=121 status=ok
// SIG undefined FUN_14696ab48(void)

void FUN_14696ab48(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  if (uVar1 < 5) {
    uVar1 = 4;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x14);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  FUN_14696aacc(param_1,*(undefined4 *)(param_1 + 0x10),uVar1);
  return;
}



// FUNCTION 14696abc2 FUN_14696abc2 body=48 status=ok
// SIG undefined FUN_14696abc2(void)

void FUN_14696abc2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 14696abf2 FUN_14696abf2 body=96 status=ok
// SIG undefined FUN_14696abf2(void)

void FUN_14696abf2(longlong param_1,int param_2)

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



// FUNCTION 14696ac52 FUN_14696ac52 body=96 status=ok
// SIG undefined FUN_14696ac52(void)

void FUN_14696ac52(longlong param_1,int param_2)

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



// FUNCTION 14696acb2 FUN_14696acb2 body=9 status=ok
// SIG undefined FUN_14696acb2(void)

void FUN_14696acb2(longlong param_1)

{
  FUN_146954122(param_1 + 0x10);
  return;
}



// FUNCTION 14696acbc FUN_14696acbc body=29 status=ok
// SIG undefined FUN_14696acbc(void)

undefined8 FUN_14696acbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14696acda FUN_14696acda body=132 status=ok
// SIG undefined FUN_14696acda(void)

void FUN_14696acda(longlong param_1,int param_2)

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



// FUNCTION 14696ad60 FUN_14696ad60 body=294 status=ok
// SIG undefined FUN_14696ad60(void)

int * FUN_14696ad60(longlong *param_1,int *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar4 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar4) {
      FUN_141431dd2(param_1,iVar4);
    }
    lVar10 = (longlong)iVar4;
    iVar5 = FUN_144a54ea4(param_1 + 2,1);
    plVar9 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar9 = param_1 + 2;
    }
    iVar7 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
    lVar6 = *param_1;
  }
  else {
    iVar4 = FUN_144a784a6(param_1 + 2,0,*param_3);
    if (iVar4 != -1) {
      plVar9 = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        plVar9 = (longlong *)param_1[4];
      }
      iVar5 = iVar4 + 0x1f;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
    }
    *param_3 = iVar4 + 1;
    lVar6 = *param_1;
    lVar10 = (longlong)iVar4;
    lVar8 = lVar10 * 0xa0;
    uVar2 = *(uint *)(lVar6 + 4 + lVar8);
    if ((int)param_1[6] == iVar4) {
      *(uint *)(param_1 + 6) = uVar2;
    }
    uVar3 = *(uint *)(lVar6 + lVar8);
    if (-1 < (int)uVar2) {
      *(uint *)(lVar6 + (ulonglong)uVar2 * 0xa0) = uVar3;
    }
    if (-1 < (int)uVar3) {
      *(undefined4 *)(lVar6 + 4 + (ulonglong)uVar3 * 0xa0) = *(undefined4 *)(lVar8 + lVar6 + 4);
    }
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
  }
  *param_2 = iVar4;
  *(longlong *)(param_2 + 2) = lVar10 * 0xa0 + lVar6;
  return param_2;
}



// FUNCTION 14696ae86 FUN_14696ae86 body=122 status=ok
// SIG undefined FUN_14696ae86(void)

void FUN_14696ae86(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 14696af00 FUN_14696af00 body=132 status=ok
// SIG undefined FUN_14696af00(void)

void FUN_14696af00(longlong param_1,int param_2)

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



// FUNCTION 14696af86 FUN_14696af86 body=136 status=ok
// SIG undefined FUN_14696af86(void)

void FUN_14696af86(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14696b00e FUN_14696b00e body=62 status=ok
// SIG undefined FUN_14696b00e(void)

void FUN_14696b00e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14696b04c(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14696b04c FUN_14696b04c body=93 status=ok
// SIG undefined FUN_14696b04c(void)

ulonglong FUN_14696b04c(uint param_1,uint param_2)

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



// FUNCTION 14696b0aa FUN_14696b0aa body=113 status=ok
// SIG undefined FUN_14696b0aa(void)

void FUN_14696b0aa(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)(int)param_2 * 0x10 + lVar1);
  FUN_1402bc9e4(_Dst,1);
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



// FUNCTION 14696b11c FUN_14696b11c body=62 status=ok
// SIG undefined FUN_14696b11c(void)

void FUN_14696b11c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14696b15a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14696b15a FUN_14696b15a body=93 status=ok
// SIG undefined FUN_14696b15a(void)

ulonglong FUN_14696b15a(uint param_1,uint param_2)

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



// FUNCTION 14696b1b8 FUN_14696b1b8 body=67 status=ok
// SIG undefined FUN_14696b1b8(void)

void FUN_14696b1b8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14696b1fc(*(undefined4 *)(param_1 + 0x198),*(undefined4 *)(param_1 + 0x19c));
  if (iVar1 == *(int *)(param_1 + 0x19c)) {
    return;
  }
  *(int *)(param_1 + 0x19c) = iVar1;
  FUN_141075298(param_1,*(undefined4 *)(param_1 + 0x198),iVar1);
  return;
}



// FUNCTION 14696b1fc FUN_14696b1fc body=108 status=ok
// SIG undefined FUN_14696b1fc(void)

ulonglong FUN_14696b1fc(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x32;
  if (0x32 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14696b268 FUN_14696b268 body=130 status=ok
// SIG undefined FUN_14696b268(void)

void FUN_14696b268(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_14696401a(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14696b2ec FUN_14696b2ec body=112 status=ok
// SIG undefined FUN_14696b2ec(void)

void FUN_14696b2ec(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0xa0,0x10);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xa0)) {
      uVar2 = uVar1 / 0xa0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xa0,0x10);
  }
  return;
}



// FUNCTION 14696b35c FUN_14696b35c body=125 status=ok
// SIG undefined FUN_14696b35c(void)

void FUN_14696b35c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x328);
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar1);
  }
  if (uVar1 < 0x65) {
    *(undefined4 *)(param_1 + 0x32c) = 100;
    if (*(longlong *)(param_1 + 800) == 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar3 = uVar1;
    if (100 < *(uint *)(param_1 + 0x32c)) {
      uVar3 = uVar1 + (int)((ulonglong)uVar1 * 3 >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0x32c) = uVar2;
  }
  FUN_142876b6c(param_1 + 800,uVar2);
  return;
}



// FUNCTION 14696b3da FUN_14696b3da body=2099 status=ok
// SIG undefined FUN_14696b3da(void)

void FUN_14696b3da(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14480809c(&local_28,0x30);
  lVar3 = (longlong)(int)(uint)uStack_20;
  uVar1 = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < uVar1) {
    uVar2 = uStack_20 & 0xffffffff;
    uStack_20._0_4_ = uVar1;
    FUN_1447808da(&local_28,uVar2);
    uVar1 = (uint)uStack_20;
  }
  uStack_20._0_4_ = uVar1;
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 1;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 2;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 2;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 1;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 3;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 4;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 5;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 6;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 6;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 5;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 7;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 8;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 9;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 9;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xb;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xc;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xd;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xe;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xe;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xd;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xf;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x11;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x12;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x12;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x11;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x13;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x14;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x15;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x16;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x16;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x15;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x17;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x18;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x19;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1a;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1a;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x19;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1b;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1c;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1d;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1e;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1e;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1d;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1f;
  DAT_14c9751e0._0_4_ = (undefined4)local_28;
  DAT_14c9751e0._4_4_ = local_28._4_4_;
  DAT_14c9751e8 = (uint)uStack_20;
  uRam000000014c9751ec = uStack_20._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696bc0e FUN_14696bc0e body=2099 status=ok
// SIG undefined FUN_14696bc0e(void)

void FUN_14696bc0e(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_14480809c(&local_28,0x30);
  lVar3 = (longlong)(int)(uint)uStack_20;
  uVar1 = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < uVar1) {
    uVar2 = uStack_20 & 0xffffffff;
    uStack_20._0_4_ = uVar1;
    FUN_1447808da(&local_28,uVar2);
    uVar1 = (uint)uStack_20;
  }
  uStack_20._0_4_ = uVar1;
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 1;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 2;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 2;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 1;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 3;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 4;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 5;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 6;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 6;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 5;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 7;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 8;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 9;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 9;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xb;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xc;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xd;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xe;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xe;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xd;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0xf;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x10;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x11;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x12;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x12;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x11;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x13;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x14;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x15;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x16;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x16;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x15;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x17;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x18;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x19;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1a;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1a;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x19;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1b;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1c;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1d;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1e;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1e;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  uVar1 = (uint)uStack_20;
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1d;
  lVar3 = (longlong)(int)(uint)uStack_20;
  uStack_20._0_4_ = (uint)uStack_20 + 1;
  if (uStack_20._4_4_ < (uint)uStack_20) {
    FUN_1447808da(&local_28,uVar1);
  }
  *(undefined4 *)(local_28 + lVar3 * 4) = 0x1f;
  DAT_14c9751f8._0_4_ = (undefined4)local_28;
  DAT_14c9751f8._4_4_ = local_28._4_4_;
  DAT_14c975200 = (uint)uStack_20;
  uRam000000014c975204 = uStack_20._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696c442 FUN_14696c442 body=3427 status=ok
// SIG undefined FUN_14696c442(void)

void FUN_14696c442(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,float param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  wint_t _C;
  ushort uVar7;
  ushort uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  float *pfVar12;
  undefined4 uVar13;
  char cVar14;
  ushort uVar15;
  int iVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong lVar19;
  undefined2 *puVar20;
  longlong lVar21;
  byte bVar22;
  float fVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined1 local_220;
  byte local_218;
  undefined1 local_210;
  undefined2 local_208;
  longlong local_200;
  longlong local_1f8;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  ulonglong local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  ulonglong local_1c8;
  float local_1bc;
  float local_1b8;
  int local_1b4;
  uint local_1b0;
  undefined4 local_1ac;
  longlong *local_1a8;
  uint local_19c;
  longlong local_198;
  undefined8 local_190;
  int *local_188;
  undefined4 *local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130 [2];
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 local_10c;
  undefined5 uStack_104;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined4 local_f7;
  ulonglong local_f0;
  undefined1 auVar32 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  puVar9 = (undefined8 *)param_1[5];
  local_190 = FUN_144955c2e(*param_1,param_1[1] + 0x60,*(undefined4 *)param_1[2],param_2);
  uVar15 = FUN_14171dcda(local_190);
  if (uVar15 != 0) {
    local_1ac = *param_3;
    local_130[0] = 0;
    local_12c = 0;
    uStack_124 = 0;
    local_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    local_10c = 0;
    uStack_104 = 0;
    uStack_ff = 0;
    uStack_fc = 0;
    local_f7 = 2;
    uVar24 = *(uint *)param_1[3];
    local_1c8 = (ulonglong)uVar24;
    if (local_1c8 != 0) {
      fVar40 = (float)uVar15;
      local_1b4 = *param_2;
      iVar28 = uVar24 * 6;
      iVar25 = uVar24 * 4;
      uVar24 = 1;
      uVar26 = 0;
      local_1b0 = 0;
      fVar38 = 0.0;
      fVar41 = 0.0;
      fVar46 = 0.0;
      fVar45 = 0.0;
      local_1a8 = (longlong *)0x0;
      lVar19 = 0;
      local_188 = param_2;
      local_180 = param_3;
      local_178 = param_4;
      local_170 = puVar9;
      do {
        lVar10 = param_1[1];
        puVar20 = &DAT_149dfb77a;
        if (*(int *)(lVar10 + 200) != 0) {
          puVar20 = *(undefined2 **)(lVar10 + 0xc0);
        }
        _C = puVar20[uVar26];
        if (_C == 10) {
          fVar45 = fVar45 + fVar40;
          uVar24 = uVar24 + 1;
          fVar46 = 0.0;
        }
        else {
          local_1f8 = lVar19;
          local_198 = FUN_1448304f6(local_190,_C,*(undefined1 *)(lVar10 + 0xb4));
          bVar22 = *(byte *)(local_198 + 0x3c);
          if (bVar22 == 1) {
            uVar17 = (uint)*(byte *)(local_198 + 0x38);
            if ((local_1a8 == (longlong *)0x0) || (local_1b0 != uVar17)) {
              plVar11 = *(longlong **)
                         (*(longlong *)(*param_1 + 0x1e0) +
                         (ulonglong)*(byte *)(local_198 + 0x38) * 0x10);
              local_1a8 = (longlong *)(**(code **)(*plVar11 + 8))(plVar11);
              local_1b0 = uVar17;
              uVar18 = (**(code **)(*(longlong *)param_1[4] + 0x20))
                                 ((longlong *)param_1[4],uVar17,local_1a8,
                                  *(undefined8 *)(param_1[1] + 0x68));
              iVar16 = (**(code **)(*plVar11 + 0x18))(plVar11);
              local_1ac = 0xffffffff;
              if (iVar16 != 1) {
                local_1ac = *local_180;
              }
              if (iVar16 == 0) {
                local_218 = 2;
              }
              else if (iVar16 == 2) {
                local_218 = local_1b4 < 1 | *(byte *)(local_188 + 1) & 1 | 8;
              }
              else {
                local_218 = 3;
              }
              local_200 = param_1[1];
              local_210 = *(undefined1 *)param_1[6];
              local_148 = 0;
              uStack_140 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_208 = 0;
              local_220 = 2;
              local_228 = uVar18;
              lVar19 = FUN_140c7650a(local_170,*local_170,param_5,&local_168);
              FUN_140c764e2(lVar19,iVar25);
              local_1f8 = lVar19;
              if ((uint)local_1c8 < 0x1400) {
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x110) < DAT_14c975220) {
                  FUN_144b3d300(&DAT_14c975220);
                  if (DAT_14c975220 == -1) {
                    local_168 = CONCAT44(local_168._4_4_,0x1400);
                    FUN_14696d1a6();
                    atexit((_func_5014 *)&LAB_142876dbd);
                    _Init_thread_footer(&DAT_14c975220);
                  }
                }
                *(undefined8 **)(local_1f8 + 0x58) = &DAT_14c975210;
                *(undefined4 *)(local_1f8 + 0x78) = 0;
                *(undefined4 *)(local_1f8 + 0x70) = 0;
              }
              else {
                FUN_14696d336(lVar19,iVar28);
              }
              plVar11 = local_1a8;
              uVar17 = (**(code **)*local_1a8)(local_1a8);
              fVar38 = 1.0 / (float)uVar17;
              uVar17 = (**(code **)(*plVar11 + 8))(plVar11);
              fVar41 = 1.0 / (float)uVar17;
              bVar22 = *(byte *)(local_198 + 0x3c);
            }
          }
          lVar19 = local_198;
          if (((bVar22 & 1) == 0) || ((0 < local_1b4 && (*(char *)(local_198 + 0x3b) != '\x01')))) {
LAB_14696cdb9:
            fVar46 = fVar46 + 0.0;
            FUN_14696d360(local_130,lVar19);
          }
          else {
            iVar16 = iswspace(_C);
            if (iVar16 != 0) goto LAB_14696cdb9;
            iVar16 = 0;
            local_1d0 = fVar38;
            if (local_f7._3_1_ == '\x01') {
              cVar14 = FUN_14483063e(local_190,local_130,lVar19);
              iVar16 = (int)cVar14;
            }
            local_1d4 = fVar41;
            FUN_14696d360(local_130,lVar19);
            fVar41 = *(float *)(lVar19 + 0x24);
            fVar43 = ((float)(int)*(short *)(lVar19 + 0x34) + fVar40) * (1.0 / fVar41) +
                     (fVar45 - (float)(int)*(short *)(lVar19 + 0x30));
            uVar15 = *(ushort *)(lVar19 + 0x28);
            uVar7 = *(ushort *)(lVar19 + 0x2a);
            uVar8 = *(ushort *)(lVar19 + 0x2c);
            fVar38 = (float)*(ushort *)(lVar19 + 0x2e);
            local_1b8 = fVar41 * fVar38 + fVar43;
            local_1e0 = (ulonglong)*(uint *)(local_1f8 + 0x74);
            if (local_178 == 0) {
              local_1bc = 0.0;
              local_1e8 = 0.0;
              local_1e4 = 0.0;
              local_1d8 = 0.0;
            }
            else {
              local_1e8 = (float)(uVar26 & 0xffffffff) / (float)(longlong)local_1c8;
              local_1e4 = (float)((int)uVar26 + 1) / (float)(longlong)local_1c8;
              local_1bc = fVar43 / ((float)uVar24 * fVar40) + 0.0;
              local_1d8 = local_1b8 / ((float)uVar24 * fVar40) + 0.0;
            }
            auVar37._4_12_ = SUB1612(ZEXT816(0),4);
            fVar46 = fVar46 + (float)iVar16;
            fVar36 = (float)(int)*(short *)(lVar19 + 0x32) + fVar46 + param_6;
            pfVar12 = (float *)param_1[7];
            fVar3 = pfVar12[3];
            fVar4 = pfVar12[1];
            fVar29 = pfVar12[2];
            auVar31 = ZEXT416((uint)(fVar29 * fVar43));
            fVar30 = *pfVar12;
            fVar5 = pfVar12[5];
            fVar6 = pfVar12[4];
            lVar10 = *(longlong *)(local_1f8 + 0x50);
            iVar16 = *(int *)(lVar10 + 8);
            *(int *)(lVar10 + 8) = iVar16 + 1;
            fVar35 = local_1d8;
            uVar17 = (uint)uVar7;
            fVar23 = (float)(uint)uVar8;
            if (*(int *)(lVar10 + 0xc) == iVar16) {
              local_1cc = (float)(uint)uVar8;
              local_19c = (uint)uVar7;
              local_1ec = fVar38;
              auVar31._0_8_ = FUN_146964c32(lVar10,iVar16);
              auVar31._8_8_ = extraout_XMM0_Qb;
              fVar35 = local_1d8;
              fVar38 = local_1ec;
              uVar17 = local_19c;
              fVar23 = local_1cc;
            }
            uVar13 = local_1ac;
            local_1d8 = (float)uVar15 * local_1d0;
            fVar42 = (float)(int)uVar17 * local_1d4;
            fVar39 = fVar41 * (float)(int)fVar23 + fVar36;
            auVar44._0_12_ = ZEXT812(0x3f000000);
            auVar44._12_4_ = 0;
            auVar47 = blendps(ZEXT416((uint)(fVar30 * fVar36 + fVar29 * fVar43 + fVar6 + 0.5)),
                              ZEXT816(0),0xe);
            auVar31 = roundps(auVar31,auVar47,1);
            auVar47 = blendps(ZEXT416((uint)(fVar4 * fVar36 + fVar3 * fVar43 + fVar5 + 0.5)),
                              ZEXT816(0),0xe);
            auVar47 = roundps(auVar44,auVar47,1);
            lVar10 = **(longlong **)(local_1f8 + 0x50);
            lVar21 = (longlong)iVar16 * 0x2c;
            *(float *)(lVar10 + lVar21) = local_1d8;
            *(float *)(lVar10 + 4 + lVar21) = fVar42;
            *(float *)(lVar10 + 8 + lVar21) = local_1e8;
            *(float *)(lVar10 + 0xc + lVar21) = local_1bc;
            *(undefined8 *)(lVar10 + 0x10 + lVar21) = 0;
            *(int *)(lVar10 + 0x18 + lVar21) = auVar31._0_4_;
            *(int *)(lVar10 + 0x1c + lVar21) = auVar47._0_4_;
            *(undefined4 *)(lVar10 + 0x20 + lVar21) = local_1ac;
            *(undefined4 *)(lVar10 + 0x24 + lVar21) = 0;
            *(int *)(local_1f8 + 0x74) = *(int *)(local_1f8 + 0x74) + 1;
            pfVar12 = (float *)param_1[7];
            fVar41 = pfVar12[3];
            auVar47 = ZEXT416((uint)(fVar41 * fVar43));
            fVar3 = pfVar12[1];
            fVar4 = pfVar12[2];
            fVar29 = *pfVar12;
            fVar30 = pfVar12[5];
            fVar5 = pfVar12[4];
            lVar10 = *(longlong *)(local_1f8 + 0x50);
            iVar16 = *(int *)(lVar10 + 8);
            *(int *)(lVar10 + 8) = iVar16 + 1;
            if (*(int *)(lVar10 + 0xc) == iVar16) {
              local_1ec = fVar38;
              auVar47._0_8_ = FUN_146964c32(lVar10,iVar16);
              auVar47._8_8_ = extraout_XMM0_Qb_00;
              fVar38 = local_1ec;
            }
            local_1cc = (float)(int)fVar23 * local_1d0 + local_1d8;
            auVar34._0_12_ = ZEXT812(0x3f000000);
            auVar34._12_4_ = 0;
            auVar31 = blendps(ZEXT416((uint)(fVar29 * fVar39 + fVar43 * fVar4 + fVar5 + 0.5)),
                              ZEXT816(0),0xe);
            auVar31 = roundps(auVar47,auVar31,1);
            auVar47 = blendps(ZEXT416((uint)(fVar3 * fVar39 + fVar41 * fVar43 + fVar30 + 0.5)),
                              ZEXT816(0),0xe);
            auVar47 = roundps(auVar34,auVar47,1);
            lVar10 = **(longlong **)(local_1f8 + 0x50);
            lVar21 = (longlong)iVar16 * 0x2c;
            *(float *)(lVar10 + lVar21) = local_1cc;
            *(float *)(lVar10 + 4 + lVar21) = fVar42;
            *(float *)(lVar10 + 8 + lVar21) = local_1e4;
            *(float *)(lVar10 + 0xc + lVar21) = local_1bc;
            *(undefined8 *)(lVar10 + 0x10 + lVar21) = 0x3f800000;
            *(int *)(lVar10 + 0x18 + lVar21) = auVar31._0_4_;
            *(int *)(lVar10 + 0x1c + lVar21) = auVar47._0_4_;
            *(undefined4 *)(lVar10 + 0x20 + lVar21) = uVar13;
            *(undefined4 *)(lVar10 + 0x24 + lVar21) = 0;
            *(int *)(local_1f8 + 0x74) = *(int *)(local_1f8 + 0x74) + 1;
            pfVar12 = (float *)param_1[7];
            fVar29 = pfVar12[3] * local_1b8;
            fVar41 = pfVar12[1];
            fVar43 = *pfVar12;
            fVar30 = pfVar12[2] * local_1b8;
            auVar32 = ZEXT416((uint)fVar30);
            fVar3 = pfVar12[5];
            fVar4 = pfVar12[4];
            lVar10 = *(longlong *)(local_1f8 + 0x50);
            iVar16 = *(int *)(lVar10 + 8);
            *(int *)(lVar10 + 8) = iVar16 + 1;
            auVar31 = ZEXT816(0);
            if (*(int *)(lVar10 + 0xc) == iVar16) {
              local_1ec = fVar38;
              auVar32._0_8_ = FUN_146964c32(lVar10,iVar16);
              auVar32._8_8_ = extraout_XMM0_Qb_01;
              fVar38 = local_1ec;
            }
            fVar42 = fVar42 + fVar38 * local_1d4;
            auVar37._0_4_ = fVar36 * fVar43 + fVar30 + fVar4 + 0.5;
            auVar37 = blendps(auVar37,auVar31,0xe);
            auVar37 = roundps(auVar32,auVar37,1);
            auVar44 = blendps(ZEXT416((uint)(fVar41 * fVar36 + fVar29 + fVar3 + 0.5)),auVar31,0xe);
            auVar47 = roundps(auVar47,auVar44,1);
            lVar10 = **(longlong **)(local_1f8 + 0x50);
            lVar21 = (longlong)iVar16 * 0x2c;
            *(float *)(lVar10 + lVar21) = local_1d8;
            *(float *)(lVar10 + 4 + lVar21) = fVar42;
            *(float *)(lVar10 + 8 + lVar21) = local_1e8;
            *(float *)(lVar10 + 0xc + lVar21) = fVar35;
            *(undefined8 *)(lVar10 + 0x10 + lVar21) = 0x3f80000000000000;
            *(int *)(lVar10 + 0x18 + lVar21) = auVar37._0_4_;
            *(int *)(lVar10 + 0x1c + lVar21) = auVar47._0_4_;
            *(undefined4 *)(lVar10 + 0x20 + lVar21) = uVar13;
            *(undefined4 *)(lVar10 + 0x24 + lVar21) = 0;
            *(int *)(local_1f8 + 0x74) = *(int *)(local_1f8 + 0x74) + 1;
            pfVar12 = (float *)param_1[7];
            fVar29 = pfVar12[3] * local_1b8;
            auVar33 = ZEXT416((uint)fVar29);
            fVar41 = pfVar12[1];
            fVar30 = local_1b8 * pfVar12[2];
            fVar43 = *pfVar12;
            fVar3 = pfVar12[5];
            fVar4 = pfVar12[4];
            lVar10 = *(longlong *)(local_1f8 + 0x50);
            iVar16 = *(int *)(lVar10 + 8);
            *(int *)(lVar10 + 8) = iVar16 + 1;
            if (*(int *)(lVar10 + 0xc) == iVar16) {
              auVar33._0_8_ = FUN_146964c32(lVar10,iVar16);
              auVar33._8_8_ = extraout_XMM0_Qb_02;
            }
            fVar38 = local_1d0;
            auVar37 = blendps(ZEXT416((uint)(fVar39 * fVar43 + fVar30 + fVar4 + 0.5)),auVar31,0xe);
            auVar37 = roundps(auVar33,auVar37,1);
            auVar31 = blendps(ZEXT416((uint)(fVar41 * fVar39 + fVar29 + fVar3 + 0.5)),auVar31,0xe);
            auVar31 = roundps(auVar47,auVar31,1);
            lVar10 = **(longlong **)(local_1f8 + 0x50);
            lVar21 = (longlong)iVar16 * 0x2c;
            *(float *)(lVar10 + lVar21) = local_1cc;
            *(float *)(lVar10 + 4 + lVar21) = fVar42;
            *(float *)(lVar10 + 8 + lVar21) = local_1e4;
            *(float *)(lVar10 + 0xc + lVar21) = fVar35;
            *(undefined1 **)(lVar10 + 0x10 + lVar21) = &DAT_3f8000003f800000;
            *(int *)(lVar10 + 0x18 + lVar21) = auVar37._0_4_;
            *(int *)(lVar10 + 0x1c + lVar21) = auVar31._0_4_;
            *(undefined4 *)(lVar10 + 0x20 + lVar21) = uVar13;
            *(undefined4 *)(lVar10 + 0x24 + lVar21) = 0;
            *(int *)(local_1f8 + 0x74) = *(int *)(local_1f8 + 0x74) + 1;
            if ((uint)local_1c8 < 0x1400) {
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 6;
              fVar41 = local_1d4;
            }
            else {
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
              }
              fVar41 = local_1d4;
              *(int *)(*plVar11 + (longlong)iVar16 * 4) = (int)local_1e0;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
              }
              local_1e8 = (float)((int)local_1e0 + 1);
              *(float *)(*plVar11 + (longlong)iVar16 * 4) = local_1e8;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
              }
              local_1e4 = (float)((int)local_1e0 + 2);
              *(float *)(*plVar11 + (longlong)iVar16 * 4) = local_1e4;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
              }
              iVar27 = (int)local_1e0;
              *(float *)(*plVar11 + (longlong)iVar16 * 4) = local_1e8;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
                iVar27 = (int)local_1e0;
              }
              *(int *)(*plVar11 + (longlong)iVar16 * 4) = iVar27 + 3;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
              plVar11 = *(longlong **)(local_1f8 + 0x58);
              iVar16 = (int)plVar11[1];
              *(uint *)(plVar11 + 1) = iVar16 + 1U;
              if (*(uint *)((longlong)plVar11 + 0xc) < iVar16 + 1U) {
                FUN_1447808da(plVar11,iVar16);
              }
              *(float *)(*plVar11 + (longlong)iVar16 * 4) = local_1e4;
              *(int *)(local_1f8 + 0x78) = *(int *)(local_1f8 + 0x78) + 1;
            }
          }
          fVar46 = (float)(int)*(short *)(lVar19 + 0x36) + fVar46;
          lVar19 = local_1f8;
        }
        uVar26 = uVar26 + 1;
        iVar28 = iVar28 + -6;
        iVar25 = iVar25 + -4;
      } while (local_1c8 != uVar26);
      plVar11 = (longlong *)CONCAT44(uStack_114,uStack_118);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696d1a6 FUN_14696d1a6 body=397 status=ok
// SIG undefined FUN_14696d1a6(void)

void FUN_14696d1a6(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = *param_1;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 * 6);
  }
  if (iVar4 != 0) {
    FUN_14480809c(&local_58);
    if (0 < *param_1) {
      iVar4 = 0;
      iVar5 = 3;
      do {
        lVar3 = (longlong)(int)(uint)uStack_50;
        uVar1 = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < uVar1) {
          uVar2 = uStack_50 & 0xffffffff;
          uStack_50._0_4_ = uVar1;
          FUN_1447808da(&local_58,uVar2);
          uVar1 = (uint)uStack_50;
        }
        uStack_50._0_4_ = uVar1;
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -3;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *param_1);
    }
  }
  DAT_14c975210._0_4_ = (undefined4)local_58;
  DAT_14c975210._4_4_ = local_58._4_4_;
  DAT_14c975218 = (uint)uStack_50;
  DAT_14c97521c = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696d336 FUN_14696d336 body=40 status=ok
// SIG undefined FUN_14696d336(void)

void FUN_14696d336(longlong param_1,int param_2)

{
  param_2 = param_2 + *(int *)(*(longlong *)(param_1 + 0x58) + 8);
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x58) + 0xc) < param_2) {
    FUN_14480809c();
    return;
  }
  return;
}



// FUNCTION 14696d360 FUN_14696d360 body=109 status=ok
// SIG undefined FUN_14696d360(void)

undefined4 * FUN_14696d360(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  uVar3 = *(undefined8 *)(param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 6);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = uVar3;
  *(longlong *)(param_1 + 6) = lVar4;
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
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_2 + 10);
  uVar10 = *(undefined8 *)((longlong)param_2 + 0x35);
  *(undefined8 *)((longlong)param_1 + 0x2d) = *(undefined8 *)((longlong)param_2 + 0x2d);
  *(undefined8 *)((longlong)param_1 + 0x35) = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 10) = uVar9;
  return param_1;
}



// FUNCTION 14696d3ce FUN_14696d3ce body=3318 status=ok
// SIG undefined FUN_14696d3ce(void)

void FUN_14696d3ce(longlong *param_1,int *param_2,undefined4 *param_3,longlong param_4,
                  undefined4 param_5,float param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  wint_t _C;
  ushort uVar10;
  ushort uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  float *pfVar14;
  undefined4 uVar15;
  byte bVar16;
  char cVar17;
  ushort uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined2 *puVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined1 local_220;
  byte local_218;
  undefined1 local_210;
  undefined2 local_208;
  longlong local_200;
  longlong local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  ulonglong local_1d0;
  float local_1c4;
  longlong local_1c0;
  float local_1b4;
  ulonglong local_1b0;
  int local_1a4;
  float local_1a0;
  undefined4 local_19c;
  longlong *local_198;
  undefined8 local_190;
  int *local_188;
  undefined4 *local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined2 local_130 [2];
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined8 local_10c;
  undefined5 uStack_104;
  undefined3 uStack_ff;
  undefined5 uStack_fc;
  undefined4 local_f7;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  puVar12 = (undefined8 *)param_1[5];
  local_190 = FUN_144955c2e(*param_1,param_1[1] + 0x60,*(undefined4 *)param_1[2],param_2);
  uVar18 = FUN_14171dcda(local_190);
  if (uVar18 != 0) {
    local_19c = *param_3;
    local_130[0] = 0;
    local_12c = 0;
    uStack_124 = 0;
    local_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    local_10c = 0;
    uStack_104 = 0;
    uStack_ff = 0;
    uStack_fc = 0;
    local_f7 = 2;
    uVar24 = *(uint *)param_1[3];
    local_1b0 = (ulonglong)uVar24;
    if (local_1b0 != 0) {
      fVar37 = (float)uVar18;
      local_1a4 = *param_2;
      iVar28 = uVar24 * 6;
      iVar25 = uVar24 * 4;
      uVar24 = 1;
      uVar26 = 0;
      local_1a0 = 0.0;
      fVar41 = 0.0;
      fVar42 = 0.0;
      fVar40 = 0.0;
      fVar39 = 0.0;
      local_198 = (longlong *)0x0;
      lVar21 = 0;
      local_188 = param_2;
      local_180 = param_3;
      local_178 = param_4;
      local_170 = puVar12;
      do {
        lVar23 = param_1[1];
        puVar22 = &DAT_149dfb77a;
        if (*(int *)(lVar23 + 200) != 0) {
          puVar22 = *(undefined2 **)(lVar23 + 0xc0);
        }
        _C = puVar22[uVar26];
        if (_C == 10) {
          fVar39 = fVar39 + fVar37;
          uVar24 = uVar24 + 1;
          fVar40 = 0.0;
        }
        else {
          local_1f0 = lVar21;
          lVar21 = FUN_1448304f6(local_190,_C,*(undefined1 *)(lVar23 + 0xb4));
          bVar16 = *(byte *)(lVar21 + 0x3c);
          if (bVar16 == 1) {
            bVar9 = *(byte *)(lVar21 + 0x38);
            if ((local_198 == (longlong *)0x0) || (local_1a0 != (float)(uint)bVar9)) {
              plVar13 = *(longlong **)(*(longlong *)(*param_1 + 0x1e0) + (ulonglong)bVar9 * 0x10);
              local_1e4 = (float)(uint)bVar9;
              local_1c0 = lVar21;
              local_198 = (longlong *)(**(code **)(*plVar13 + 8))(plVar13);
              local_1f0 = (**(code **)(*(longlong *)param_1[4] + 0x20))
                                    ((longlong *)param_1[4],local_1e4,local_198,
                                     *(undefined8 *)(param_1[1] + 0x68));
              iVar19 = (**(code **)(*plVar13 + 0x18))(plVar13);
              local_19c = 0xffffffff;
              if (iVar19 != 1) {
                local_19c = *local_180;
              }
              if (iVar19 == 0) {
                local_218 = 2;
              }
              else if (iVar19 == 2) {
                local_218 = local_1a4 < 1 | *(byte *)(local_188 + 1) & 1 | 8;
              }
              else {
                local_218 = 3;
              }
              local_200 = param_1[1];
              local_210 = *(undefined1 *)param_1[6];
              local_148 = 0;
              uStack_140 = 0;
              local_158 = 0;
              uStack_150 = 0;
              local_168 = 0;
              uStack_160 = 0;
              local_228 = local_1f0;
              local_208 = 0;
              local_220 = 2;
              lVar21 = FUN_140c7650a(local_170,*local_170,param_5,&local_168);
              FUN_140c764e2(lVar21,iVar25);
              local_1f0 = lVar21;
              if ((uint)local_1b0 < 0x1400) {
                if (*(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x110) < DAT_14c975238) {
                  FUN_144b3d300(&DAT_14c975238);
                  if (DAT_14c975238 == -1) {
                    local_168 = CONCAT44(local_168._4_4_,0x1400);
                    FUN_14696e0c6();
                    atexit((_func_5014 *)&LAB_142876dce);
                    _Init_thread_footer(&DAT_14c975238);
                  }
                }
                *(undefined8 **)(local_1f0 + 0x58) = &DAT_14c975228;
                *(undefined4 *)(local_1f0 + 0x78) = 0;
                *(undefined4 *)(local_1f0 + 0x70) = 0;
              }
              else {
                FUN_14696d336(lVar21,iVar28);
              }
              plVar13 = local_198;
              uVar20 = (**(code **)*local_198)(local_198);
              fVar41 = 1.0 / (float)uVar20;
              uVar20 = (**(code **)(*plVar13 + 8))(plVar13);
              fVar42 = 1.0 / (float)uVar20;
              bVar16 = *(byte *)(local_1c0 + 0x3c);
              local_1a0 = local_1e4;
              lVar21 = local_1c0;
            }
          }
          if (((bVar16 & 1) == 0) || ((0 < local_1a4 && (*(char *)(lVar21 + 0x3b) != '\x01')))) {
LAB_14696dc83:
            fVar40 = fVar40 + 0.0;
            FUN_14696d360(local_130);
          }
          else {
            local_1c0 = lVar21;
            iVar19 = iswspace(_C);
            lVar21 = local_1c0;
            if (iVar19 != 0) goto LAB_14696dc83;
            iVar19 = 0;
            if (local_f7._3_1_ == '\x01') {
              cVar17 = FUN_14483063e(local_190,local_130,local_1c0);
              iVar19 = (int)cVar17;
            }
            lVar21 = local_1c0;
            FUN_14696d360(local_130);
            fVar3 = *(float *)(lVar21 + 0x24);
            fVar35 = ((float)(int)*(short *)(lVar21 + 0x34) + fVar37) * (1.0 / fVar3) +
                     (fVar39 - (float)(int)*(short *)(lVar21 + 0x30));
            uVar18 = *(ushort *)(lVar21 + 0x28);
            uVar10 = *(ushort *)(lVar21 + 0x2a);
            uVar11 = *(ushort *)(lVar21 + 0x2c);
            local_1e8 = (float)(uint)uVar11;
            fVar33 = (float)*(ushort *)(lVar21 + 0x2e);
            fVar38 = fVar3 * fVar33 + fVar35;
            local_1d0 = (ulonglong)*(uint *)(local_1f0 + 0x74);
            if (local_178 == 0) {
              fVar34 = 0.0;
              local_1d4 = 0.0;
              fVar31 = 0.0;
              fVar32 = 0.0;
            }
            else {
              fVar34 = (float)(uVar26 & 0xffffffff) / (float)(longlong)local_1b0;
              fVar31 = (float)((int)uVar26 + 1) / (float)(longlong)local_1b0;
              local_1d4 = fVar35 / ((float)uVar24 * fVar37) + 0.0;
              fVar32 = fVar38 / ((float)uVar24 * fVar37) + 0.0;
            }
            fVar40 = fVar40 + (float)iVar19;
            fVar43 = (float)(int)*(short *)(lVar21 + 0x32) + fVar40 + param_6;
            pfVar14 = (float *)param_1[7];
            fVar4 = pfVar14[3];
            fVar5 = pfVar14[1];
            fVar6 = pfVar14[2];
            fVar30 = *pfVar14;
            fVar7 = pfVar14[5];
            fVar8 = pfVar14[4];
            lVar21 = *(longlong *)(local_1f0 + 0x50);
            iVar19 = *(int *)(lVar21 + 8);
            *(int *)(lVar21 + 8) = iVar19 + 1;
            fVar36 = (float)(uint)uVar10;
            local_1e4 = fVar41;
            local_1c4 = fVar42;
            if (*(int *)(lVar21 + 0xc) == iVar19) {
              local_1e8 = (float)(uint)uVar11;
              local_1e0 = (float)(uint)uVar10;
              local_1dc = fVar33;
              local_1d8 = fVar31;
              local_1b4 = fVar34;
              FUN_146964c32(lVar21,iVar19);
              fVar31 = local_1d8;
              fVar33 = local_1dc;
              fVar34 = local_1b4;
              fVar36 = local_1e0;
            }
            uVar15 = local_19c;
            fVar29 = (float)(int)local_1e8;
            local_1e8 = (float)uVar18 * local_1e4;
            fVar36 = (float)(int)fVar36 * local_1c4;
            fVar44 = fVar3 * fVar29 + fVar43;
            lVar21 = **(longlong **)(local_1f0 + 0x50);
            lVar23 = (longlong)iVar19 * 0x2c;
            *(float *)(lVar21 + lVar23) = local_1e8;
            *(float *)(lVar21 + 4 + lVar23) = fVar36;
            *(float *)(lVar21 + 8 + lVar23) = fVar34;
            *(float *)(lVar21 + 0xc + lVar23) = local_1d4;
            *(undefined8 *)(lVar21 + 0x10 + lVar23) = 0;
            *(float *)(lVar21 + 0x18 + lVar23) = fVar30 * fVar43 + fVar6 * fVar35 + fVar8;
            *(float *)(lVar21 + 0x1c + lVar23) = fVar5 * fVar43 + fVar4 * fVar35 + fVar7;
            *(undefined4 *)(lVar21 + 0x20 + lVar23) = local_19c;
            *(undefined4 *)(lVar21 + 0x24 + lVar23) = 0;
            *(int *)(local_1f0 + 0x74) = *(int *)(local_1f0 + 0x74) + 1;
            pfVar14 = (float *)param_1[7];
            fVar41 = pfVar14[3];
            fVar42 = pfVar14[1];
            fVar3 = pfVar14[2];
            fVar4 = *pfVar14;
            fVar5 = pfVar14[5];
            fVar6 = pfVar14[4];
            lVar21 = *(longlong *)(local_1f0 + 0x50);
            iVar19 = *(int *)(lVar21 + 8);
            *(int *)(lVar21 + 8) = iVar19 + 1;
            if (*(int *)(lVar21 + 0xc) == iVar19) {
              local_1e0 = fVar29;
              local_1dc = fVar33;
              local_1d8 = fVar31;
              local_1b4 = fVar34;
              FUN_146964c32(lVar21,iVar19);
              fVar29 = local_1e0;
              fVar31 = local_1d8;
              fVar33 = local_1dc;
              fVar34 = local_1b4;
            }
            fVar30 = fVar29 * local_1e4 + local_1e8;
            lVar21 = **(longlong **)(local_1f0 + 0x50);
            lVar23 = (longlong)iVar19 * 0x2c;
            *(float *)(lVar21 + lVar23) = fVar30;
            *(float *)(lVar21 + 4 + lVar23) = fVar36;
            *(float *)(lVar21 + 8 + lVar23) = fVar31;
            *(float *)(lVar21 + 0xc + lVar23) = local_1d4;
            *(undefined8 *)(lVar21 + 0x10 + lVar23) = 0x3f800000;
            *(float *)(lVar21 + 0x18 + lVar23) = fVar4 * fVar44 + fVar35 * fVar3 + fVar6;
            *(float *)(lVar21 + 0x1c + lVar23) = fVar42 * fVar44 + fVar41 * fVar35 + fVar5;
            *(undefined4 *)(lVar21 + 0x20 + lVar23) = uVar15;
            *(undefined4 *)(lVar21 + 0x24 + lVar23) = 0;
            *(int *)(local_1f0 + 0x74) = *(int *)(local_1f0 + 0x74) + 1;
            pfVar14 = (float *)param_1[7];
            fVar41 = pfVar14[3];
            fVar42 = pfVar14[1];
            fVar3 = pfVar14[2];
            fVar35 = *pfVar14;
            fVar4 = pfVar14[5];
            fVar5 = pfVar14[4];
            lVar21 = *(longlong *)(local_1f0 + 0x50);
            iVar19 = *(int *)(lVar21 + 8);
            *(int *)(lVar21 + 8) = iVar19 + 1;
            if (*(int *)(lVar21 + 0xc) == iVar19) {
              local_1e0 = fVar30;
              local_1dc = fVar33;
              local_1d8 = fVar31;
              FUN_146964c32(lVar21,iVar19);
              fVar30 = local_1e0;
              fVar31 = local_1d8;
              fVar33 = local_1dc;
            }
            fVar36 = fVar36 + fVar33 * local_1c4;
            lVar21 = **(longlong **)(local_1f0 + 0x50);
            lVar23 = (longlong)iVar19 * 0x2c;
            *(float *)(lVar21 + lVar23) = local_1e8;
            *(float *)(lVar21 + 4 + lVar23) = fVar36;
            *(float *)(lVar21 + 8 + lVar23) = fVar34;
            *(float *)(lVar21 + 0xc + lVar23) = fVar32;
            *(undefined8 *)(lVar21 + 0x10 + lVar23) = 0x3f80000000000000;
            *(float *)(lVar21 + 0x18 + lVar23) = fVar43 * fVar35 + fVar3 * fVar38 + fVar5;
            *(float *)(lVar21 + 0x1c + lVar23) = fVar42 * fVar43 + fVar41 * fVar38 + fVar4;
            *(undefined4 *)(lVar21 + 0x20 + lVar23) = uVar15;
            *(undefined4 *)(lVar21 + 0x24 + lVar23) = 0;
            *(int *)(local_1f0 + 0x74) = *(int *)(local_1f0 + 0x74) + 1;
            pfVar14 = (float *)param_1[7];
            fVar3 = pfVar14[3];
            fVar33 = pfVar14[1];
            fVar35 = pfVar14[2];
            fVar34 = *pfVar14;
            fVar4 = pfVar14[5];
            fVar5 = pfVar14[4];
            lVar21 = *(longlong *)(local_1f0 + 0x50);
            iVar19 = *(int *)(lVar21 + 8);
            *(int *)(lVar21 + 8) = iVar19 + 1;
            if (*(int *)(lVar21 + 0xc) == iVar19) {
              FUN_146964c32(lVar21,iVar19);
            }
            fVar42 = local_1c4;
            fVar41 = local_1e4;
            lVar21 = **(longlong **)(local_1f0 + 0x50);
            lVar23 = (longlong)iVar19 * 0x2c;
            *(float *)(lVar21 + lVar23) = fVar30;
            *(float *)(lVar21 + 4 + lVar23) = fVar36;
            *(float *)(lVar21 + 8 + lVar23) = fVar31;
            *(float *)(lVar21 + 0xc + lVar23) = fVar32;
            *(undefined1 **)(lVar21 + 0x10 + lVar23) = &DAT_3f8000003f800000;
            *(float *)(lVar21 + 0x18 + lVar23) = fVar44 * fVar34 + fVar38 * fVar35 + fVar5;
            *(float *)(lVar21 + 0x1c + lVar23) = fVar33 * fVar44 + fVar3 * fVar38 + fVar4;
            *(undefined4 *)(lVar21 + 0x20 + lVar23) = uVar15;
            *(undefined4 *)(lVar21 + 0x24 + lVar23) = 0;
            *(int *)(local_1f0 + 0x74) = *(int *)(local_1f0 + 0x74) + 1;
            if ((uint)local_1b0 < 0x1400) {
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 6;
              lVar21 = local_1c0;
            }
            else {
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
              }
              *(int *)(*plVar13 + (longlong)iVar19 * 4) = (int)local_1d0;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
              }
              local_1e8 = (float)((int)local_1d0 + 1);
              *(float *)(*plVar13 + (longlong)iVar19 * 4) = local_1e8;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
              }
              local_1d4 = (float)((int)local_1d0 + 2);
              *(float *)(*plVar13 + (longlong)iVar19 * 4) = local_1d4;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
              }
              iVar27 = (int)local_1d0;
              *(float *)(*plVar13 + (longlong)iVar19 * 4) = local_1e8;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
                iVar27 = (int)local_1d0;
              }
              *(int *)(*plVar13 + (longlong)iVar19 * 4) = iVar27 + 3;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              plVar13 = *(longlong **)(local_1f0 + 0x58);
              iVar19 = (int)plVar13[1];
              *(uint *)(plVar13 + 1) = iVar19 + 1U;
              if (*(uint *)((longlong)plVar13 + 0xc) < iVar19 + 1U) {
                FUN_1447808da(plVar13,iVar19);
              }
              *(float *)(*plVar13 + (longlong)iVar19 * 4) = local_1d4;
              *(int *)(local_1f0 + 0x78) = *(int *)(local_1f0 + 0x78) + 1;
              lVar21 = local_1c0;
            }
          }
          fVar40 = (float)(int)*(short *)(lVar21 + 0x36) + fVar40;
          lVar21 = local_1f0;
        }
        uVar26 = uVar26 + 1;
        iVar28 = iVar28 + -6;
        iVar25 = iVar25 + -4;
      } while (local_1b0 != uVar26);
      plVar13 = (longlong *)CONCAT44(uStack_114,uStack_118);
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696e0c6 FUN_14696e0c6 body=397 status=ok
// SIG undefined FUN_14696e0c6(void)

void FUN_14696e0c6(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = *param_1;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 * 6);
  }
  if (iVar4 != 0) {
    FUN_14480809c(&local_58);
    if (0 < *param_1) {
      iVar4 = 0;
      iVar5 = 3;
      do {
        lVar3 = (longlong)(int)(uint)uStack_50;
        uVar1 = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < uVar1) {
          uVar2 = uStack_50 & 0xffffffff;
          uStack_50._0_4_ = uVar1;
          FUN_1447808da(&local_58,uVar2);
          uVar1 = (uint)uStack_50;
        }
        uStack_50._0_4_ = uVar1;
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -3;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *param_1);
    }
  }
  DAT_14c975228._0_4_ = (undefined4)local_58;
  DAT_14c975228._4_4_ = local_58._4_4_;
  DAT_14c975230 = (uint)uStack_50;
  DAT_14c975234 = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14696e256 FUN_14696e256 body=747 status=ok
// SIG undefined FUN_14696e256(void)

void FUN_14696e256(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,float param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong *plVar2;
  float *pfVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_68 [40];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[4];
  *(undefined8 *)(*param_1 + 0x10) = param_4;
  *(undefined8 *)(*param_1 + 0x18) = param_2;
  *(float *)(*param_1 + 0x40) = param_6 + 0.0;
  *(undefined4 *)(*param_1 + 0x44) = 0;
  *(undefined4 *)(*param_1 + 0x54) = param_5;
  *(undefined4 *)(*param_1 + 0x58) = *param_3;
  *(byte *)(*param_1 + 0x5e) = *(byte *)(*param_1 + 0x5e) & 0xfe;
  if (*(char *)(param_1[1] + 0x92) == '\x01') {
    bVar5 = *(char *)(param_1[1] + 0x93) * '\x02';
  }
  else {
    bVar5 = 0;
  }
  *(byte *)(*param_1 + 0x5e) = *(byte *)(*param_1 + 0x5e) & 0xfd | bVar5;
  *(undefined1 *)(*param_1 + 0x5c) = *(undefined1 *)(param_1[1] + 0x90);
  *(undefined1 *)(*param_1 + 0x5d) = *(undefined1 *)(param_1[1] + 0x91);
  *(undefined4 *)(*param_1 + 0x50) = param_7;
  if ((*(int *)(*(longlong *)param_1[2] + 8) < 0xc9) &&
     ((*(longlong *)param_1[3] == 0 || (*(char *)(*param_1 + 0x5c) == '\0')))) goto LAB_14696e46e;
  lVar8 = *(longlong *)(param_1[1] + 0x30);
  if (lVar8 == 0) {
    iVar6 = *(int *)(param_1[1] + 0x38);
    if (((-1 < (longlong)iVar6) && (plVar2 = *(longlong **)(lVar1 + 0x18), iVar6 < (int)plVar2[1]))
       && (lVar8 = (longlong)iVar6 * 0x40 + *plVar2, lVar8 != 0)) goto LAB_14696e361;
LAB_14696e467:
    lVar8 = *param_1;
  }
  else {
LAB_14696e361:
    if ((*(char *)(lVar8 + 0x34) != '\x01') || ((*(byte *)(lVar8 + 0x30) & 1) == 0))
    goto LAB_14696e467;
    pfVar3 = (float *)param_1[5];
    cVar4 = FUN_142876ddf(pfVar3);
    if (cVar4 == '\0') goto LAB_14696e467;
    FUN_146948f3a(lVar8 + 0x10,&local_40);
    fVar13 = 1.0 / (*pfVar3 * pfVar3[3] - pfVar3[1] * pfVar3[2]);
    fVar12 = -pfVar3[2] * fVar13;
    fVar13 = fVar13 * pfVar3[3];
    fVar14 = -pfVar3[4] * fVar13 - pfVar3[5] * fVar12;
    fVar15 = local_40 * fVar13 + local_3c * fVar12 + fVar14;
    fVar14 = fVar13 * local_38 + fVar12 * local_34 + fVar14;
    fVar12 = fVar14;
    if (fVar15 <= fVar14) {
      fVar12 = fVar15;
      fVar15 = fVar14;
    }
    *(float *)(*param_1 + 0x48) = fVar12;
    *(float *)(*param_1 + 0x4c) = fVar15;
    lVar8 = *param_1;
    iVar6 = (int)ROUND(*(float *)(lVar8 + 0x48) + *(float *)(lVar8 + 0x48) + -0.5);
    if (iVar6 < 2) {
      bVar9 = false;
    }
    else {
      bVar9 = *(char *)(lVar8 + 0x5c) == '\x02';
    }
    iVar7 = -((int)ROUND(-0.5 - (*(float *)(lVar8 + 0x4c) + *(float *)(lVar8 + 0x4c))) >> 1);
    if (iVar7 < *(int *)(*(longlong *)param_1[2] + 0x40)) {
      bVar10 = *(char *)(lVar8 + 0x5c) == '\x01';
    }
    else {
      bVar10 = false;
    }
    bVar11 = *(char *)(lVar8 + 0x5d) == '\x03';
    if (((1 < iVar6 && bVar11) || ((bool)(bVar9 | bVar10))) ||
       ((iVar7 < *(int *)(*(longlong *)param_1[2] + 0x40) && bVar11 ||
        (*(char *)(param_1[1] + 0x93) != '\0')))) {
      if (*(longlong *)param_1[3] == 0) {
        *(byte *)(lVar8 + 0x5e) = *(byte *)(lVar8 + 0x5e) | 1;
      }
      goto LAB_14696e46e;
    }
  }
  *(undefined1 *)(lVar8 + 0x5c) = 0;
LAB_14696e46e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    FUN_14696e542(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68,*param_1);
}



// FUNCTION 14696e542 FUN_14696e542 body=7797 status=ok
// SIG undefined FUN_14696e542(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14696e542(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  longlong *plVar2;
  bool bVar3;
  uint3 uVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined7 uVar17;
  longlong lVar15;
  int *piVar16;
  byte bVar18;
  longlong *plVar19;
  int iVar20;
  char cVar21;
  undefined8 *puVar22;
  byte bVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  int iVar27;
  ulonglong uVar28;
  longlong lVar29;
  char cVar30;
  byte bVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined1 local_280;
  undefined1 local_278;
  undefined1 local_270;
  undefined2 local_268;
  longlong local_260;
  byte local_252;
  char local_251;
  int local_250;
  float local_24c;
  int local_248;
  float local_244;
  float local_240;
  float local_23c;
  uint local_238;
  char local_231;
  undefined8 *local_230;
  float local_224;
  float local_220;
  undefined4 local_21c;
  float local_218;
  byte local_212;
  byte local_211;
  float local_210;
  float local_20c;
  ulonglong local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  int local_1ec;
  ulonglong local_1e8;
  int local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  uint local_1cc;
  float local_1c8;
  float local_1c4;
  int local_1c0;
  int local_1bc;
  ulonglong local_1b8;
  longlong *local_1b0;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  ulonglong local_198;
  float local_18c;
  undefined8 *local_188;
  longlong *local_180;
  undefined1 local_178 [16];
  longlong *local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  float local_118;
  float local_114;
  undefined2 local_fc;
  byte local_fa;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  local_1b0 = (longlong *)*param_2;
  local_230 = param_2;
  local_188 = param_1;
  (**(code **)(*(longlong *)param_1[4] + 8))((longlong *)param_1[4],&local_158);
  plVar19 = local_150;
  local_168 = local_158;
  if (local_150 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_150 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_150)(local_150);
      LOCK();
      piVar16 = (int *)((longlong)plVar19 + 0xc);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  pfVar1 = (float *)local_230[6];
  local_23c = *pfVar1;
  local_240 = pfVar1[1];
  local_1d4 = pfVar1[2];
  local_1d8 = pfVar1[3];
  local_244 = pfVar1[4];
  local_24c = pfVar1[5];
  cVar30 = *(char *)((longlong)local_230 + 0x5c);
  uVar28 = CONCAT71((int7)((ulonglong)param_4 >> 8),cVar30);
  local_251 = *(char *)((longlong)local_230 + 0x5d);
  local_178 = ZEXT416(*(uint *)(local_1b0 + 0xe));
  cVar21 = *(char *)((longlong)local_1b0 + 0x14);
  local_208 = (ulonglong)*(uint *)(local_1b0 + 1);
  local_1c0 = *(int *)local_230[3];
  bVar3 = *(float *)((longlong)local_230 + 0x4c) - *(float *)(local_230 + 9) <
          (float)(int)local_1b0[8];
  local_238 = (uint)uVar28;
  bVar23 = cVar30 != '\0' && bVar3;
  fVar38 = 0.0;
  if ((local_251 == '\x03') && (cVar30 != '\0' && bVar3)) {
    local_158 = (longlong *)0xffffffffffffffff;
    local_148 = 0;
    local_150 = (longlong *)local_230[8];
    FUN_14695e3ee(local_230,uVar28 & 0xffffffff,&local_158);
    local_1f8 = local_148._4_4_;
    fVar40 = (float)local_150;
    fVar42 = local_150._4_4_;
    fVar41 = (float)local_148;
    iVar20 = local_158._4_4_;
    iVar27 = (int)local_158;
  }
  else {
    local_1f8 = 0.0;
    fVar40 = *(float *)(local_230 + 8);
    fVar42 = *(float *)((longlong)local_230 + 0x44);
    fVar41 = 0.0;
    iVar20 = -1;
    iVar27 = -1;
  }
  iVar24 = (int)local_208;
  puVar26 = local_230;
  if (iVar24 < 1) {
    bVar18 = 0;
    iVar20 = 0;
    goto LAB_146970009;
  }
  local_178._0_8_ = local_178._0_8_ & 0x7fffffff7fffffff;
  local_178._8_4_ = local_178._8_4_ & 0x7fffffff;
  local_178._12_4_ = local_178._12_4_ & 0x7fffffff;
  local_19c = 0x3f800000;
  if (cVar21 == '\0') {
    local_19c = 0;
  }
  local_211 = local_251 == '\x03' && (bool)bVar23;
  local_1bc = iVar24 + -1;
  local_18c = (float)iVar24;
  bVar18 = 1;
  local_1dc = -1;
  local_1c4 = 0.0;
  local_1c8 = 0.0;
  lVar29 = 0;
  local_180 = (longlong *)0x0;
  uVar32 = 0xffffffff;
  local_198 = 0;
  local_1cc = 0;
  local_1a0 = 0.0;
  local_1f0 = 0.0;
  local_1a4 = 0.0;
  fVar38 = 0.0;
  local_1b8 = 0;
  local_1ec = 0;
  iVar24 = 0;
  uVar28 = local_208;
  fVar33 = local_24c;
  fVar39 = local_23c;
  fVar45 = local_240;
  fVar37 = local_244;
  local_250 = iVar27;
  local_248 = iVar20;
  local_212 = bVar23;
LAB_14696e81b:
  fVar46 = 1.0;
  if (iVar24 <= iVar20 && iVar27 <= iVar24) goto LAB_14696eabb;
  lVar13 = *(longlong *)(*local_1b0 + (longlong)iVar24 * 0xa8);
  if (lVar13 != 0) {
    fVar46 = *(float *)(lVar13 + 0x1c);
  }
  plVar19 = (longlong *)(*local_1b0 + (longlong)iVar24 * 0xa8);
  bVar23 = *(byte *)(lVar13 + 0x24);
  cVar30 = *(char *)((longlong)plVar19 + 0x24);
  bVar31 = bVar23;
  if (cVar30 == '\x01') {
    if (bVar23 == 0) {
      bVar3 = local_1c0 < 1;
      local_252 = bVar23;
      FUN_140c765f8(puVar26[5],&local_158,plVar19,puVar26[3]);
      bVar31 = local_252;
      if ((local_150._6_1_ == '\x01') && (bVar3 || ((ulonglong)local_150 & 0x10000000000) != 0)) {
        local_1e8 = CONCAT44(local_1e8._4_4_,(float)(int)(short)local_158);
        fVar33 = (float)(int)local_158._2_2_;
        local_200 = (float)local_150._2_2_;
        fVar44 = (float)(ushort)local_150;
        local_20c = (float)local_158._6_2_;
        local_220 = (float)local_158._4_2_;
        fVar45 = 0.0;
        fVar43 = 0.0;
        fVar39 = 0.0;
        cVar21 = local_150._4_1_;
        local_224 = fVar38;
        local_218 = fVar44;
        local_1fc = local_200;
        goto LAB_14696ea32;
      }
      fVar48 = 0.0;
      cVar21 = '\0';
      local_200 = 0.0;
      local_1fc = 0.0;
      local_218 = 0.0;
      fVar46 = 0.0;
      local_20c = 0.0;
      fVar35 = 0.0;
      fVar34 = 0.0;
      fVar44 = 0.0;
      fVar47 = 0.0;
      uVar14 = (ulonglong)local_238;
      puVar26 = local_230;
      uVar28 = local_208;
      fVar33 = local_24c;
      fVar39 = local_23c;
      fVar45 = local_240;
      fVar37 = local_244;
      iVar20 = local_248;
      local_21c = uVar32;
      iVar27 = local_250;
    }
    else {
      FUN_142862ae2(puVar26[5],&local_158,plVar19,puVar26[3]);
      if ((uStack_138._7_1_ != '\x01') || ((uStack_138 & 0x10000000000) == 0)) {
        fVar44 = 0.0;
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar39 = local_23c;
        fVar45 = local_240;
        fVar37 = local_244;
        fVar47 = 0.0;
        iVar20 = local_248;
        cVar21 = '\0';
        iVar27 = local_250;
        goto LAB_14696eb20;
      }
      lVar13 = *plVar19;
      if (local_1c0 < 1) {
        fVar33 = 0.0;
        local_224 = fVar38;
      }
      else {
        local_224 = fVar38;
        uVar7 = FUN_1469357d3(*(undefined4 *)(lVar13 + 0x14));
        lVar13 = *plVar19;
        auVar36 = blendps(ZEXT416((uint)((float)*(int *)local_230[3] * *(float *)(lVar13 + 0x18) +
                                        0.5)),_DAT_149931140,0xe);
        auVar36 = roundps(auVar36,auVar36,1);
        fVar33 = auVar36._0_4_ / (float)uVar7;
      }
      local_1e8 = CONCAT44(local_1e8._4_4_,(undefined4)local_140);
      local_200 = (float)uStack_138;
      local_1fc = (float)(int)(local_150._2_2_ - 1);
      local_20c = (float)local_158._6_2_ + 0.5;
      local_220 = (float)local_158._4_2_ + 0.5;
      fVar39 = (float)local_148 + local_150._4_4_;
      fVar43 = (float)(int)*(short *)(lVar13 + 0x26) * fVar39;
      fVar45 = (local_150._4_4_ - fVar33) / fVar39;
      fVar33 = local_148._4_4_;
      fVar44 = local_140._4_4_;
      cVar21 = uStack_138._4_1_;
      local_218 = (float)(int)((ushort)local_150 - 1);
LAB_14696ea32:
      bVar18 = iVar24 <= local_248 & bVar18;
      fVar47 = (float)(int)*(short *)((longlong)plVar19 + 0x1c) + fVar33 + fVar40;
      fVar33 = *(float *)((longlong)local_230 + 0x3c);
      fVar37 = *(float *)(local_230 + 7);
      fVar38 = local_224;
      uVar28 = local_208;
      if ((*(byte *)((longlong)local_230 + 0x5e) & 1) != 0) {
        puVar26 = local_230;
        if (fVar44 + fVar47 < *(float *)(local_230 + 9)) {
          fVar42 = fVar42 + (float)(int)*(short *)((longlong)plVar19 + 0x1a);
          fVar40 = fVar40 + (float)(int)(short)plVar19[3];
          fVar33 = local_24c;
          fVar39 = local_23c;
          fVar45 = local_240;
          fVar37 = local_244;
          iVar20 = local_248;
          iVar27 = local_250;
          goto LAB_14696eabb;
        }
        if (*(float *)((longlong)local_230 + 0x4c) <= fVar47 &&
            fVar47 != *(float *)((longlong)local_230 + 0x4c)) goto LAB_146970327;
      }
      fVar34 = (float)(int)*(short *)((longlong)plVar19 + 0x1e) + (fVar42 - (float)local_1e8);
      iVar20 = (int)cVar21;
      local_210 = fVar34;
      local_1f4 = fVar42;
      local_1d0 = fVar41;
      if ((((local_180 == (longlong *)0x0) || (local_1dc != iVar20)) ||
          (((bVar31 != 0 ^ (byte)local_1b8) & 1) != 0)) ||
         ((bVar31 != 0 &&
          ((((fVar39 != local_1a0 || (NAN(fVar39) || NAN(local_1a0))) ||
            ((fVar43 != local_1f0 || ((NAN(fVar43) || NAN(local_1f0) || (fVar45 != local_1a4))))))
           || (NAN(fVar45) || NAN(local_1a4))))))) {
        local_1b8 = CONCAT71(local_1b8._1_7_,bVar23 != 0);
        plVar2 = *(longlong **)(*(longlong *)(local_230[5] + 0x1e0) + (longlong)cVar21 * 0x10);
        local_252 = bVar18;
        plVar11 = (longlong *)(**(code **)(*plVar2 + 8))(plVar2);
        local_1dc = iVar20;
        uVar12 = (**(code **)(*local_168 + 0x20))(local_168,iVar20,plVar11,local_230[2]);
        uVar7 = (**(code **)*plVar11)(plVar11);
        local_180 = plVar11;
        uVar9 = (**(code **)(*plVar11 + 8))(plVar11);
        iVar20 = (**(code **)(*plVar2 + 0x18))(plVar2);
        local_21c = 0xffffffff;
        if (iVar20 != 1) {
          local_21c = *(undefined4 *)(local_230 + 0xb);
        }
        if (iVar20 == 2) {
          if ((local_1c0 < 1) || (local_278 = 8, *(char *)(local_230[3] + 4) == '\x01')) {
            local_278 = 9;
          }
        }
        else {
          local_278 = 3;
          if ((iVar20 == 0) && (local_278 = 2, bVar31 != 0)) {
            local_278 = 8;
          }
        }
        fVar38 = 1.0;
        local_1c4 = 1.0 / (float)uVar7;
        local_1c8 = 1.0 / (float)uVar9;
        if (bVar31 == 0) {
          fVar41 = 0.0;
          fVar42 = 0.0;
          fVar45 = 0.0;
          uVar32 = 0;
          fVar43 = local_1f0;
        }
        else {
          uVar32 = 0x3f800000;
          if (iVar20 != 2) {
            uVar32 = 0;
          }
          fVar42 = local_1c8 * 0.5 * fVar43;
          fVar41 = local_1c4 * 0.5 * fVar43;
          fVar38 = fVar39;
          local_1a4 = fVar45;
          local_1a0 = fVar39;
        }
        local_158 = (longlong *)CONCAT44(fVar42,fVar41);
        local_150 = (longlong *)CONCAT44(fVar38,fVar45);
        local_148 = CONCAT44(local_19c,uVar32);
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        local_12c = 0x3f800000;
        local_260 = local_230[4];
        local_270 = *(undefined1 *)(local_260 + 0x45);
        local_268 = 0;
        local_280 = 2;
        local_288 = uVar12;
        lVar29 = FUN_140c7650a(local_188,*local_188,*(undefined4 *)((longlong)local_230 + 0x54),
                               &local_158);
        uVar28 = local_208;
        iVar20 = (int)local_208;
        iVar27 = iVar20 - iVar24;
        FUN_140c764e2(lVar29,iVar27 * 4);
        fVar34 = local_210;
        fVar38 = local_224;
        if (iVar20 < 0x1400) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c975268) &&
             (FUN_144b3d300(&DAT_14c975268), uVar28 = local_208, DAT_14c975268 == -1)) {
            local_15c = 0x1400;
            FUN_1469703b8();
            atexit((_func_5014 *)&LAB_142876e92);
            _Init_thread_footer(&DAT_14c975268);
            uVar28 = local_208;
          }
          *(undefined8 **)(lVar29 + 0x58) = &DAT_14c975258;
          *(undefined4 *)(lVar29 + 0x78) = 0;
          *(undefined4 *)(lVar29 + 0x70) = 0;
        }
        else {
          FUN_14696d336(lVar29,iVar27 * 6);
          uVar28 = local_208;
          fVar38 = local_224;
          fVar34 = local_210;
        }
        local_1b8 = (ulonglong)CONCAT31((int3)(uVar7 >> 8),(byte)local_1b8);
        bVar18 = local_252;
      }
      else {
        local_1b8 = local_1b8 & 0xffffffff;
        fVar43 = local_1f0;
        local_21c = uVar32;
      }
      uVar14 = (ulonglong)local_238;
      fVar34 = (fVar33 + fVar37) * (1.0 / fVar46) + fVar34;
      fVar35 = local_220 * local_1c4;
      local_20c = local_20c * local_1c8;
      local_218 = local_218 * local_1c4;
      local_1fc = local_1fc * local_1c8;
      fVar44 = fVar44 * fVar46;
      fVar46 = fVar46 * local_200;
      cVar21 = '\x01';
      puVar26 = local_230;
      fVar33 = local_24c;
      fVar39 = local_23c;
      fVar45 = local_240;
      fVar37 = local_244;
      fVar42 = local_1f4;
      fVar48 = (float)local_1e8;
      fVar41 = local_1d0;
      iVar20 = local_248;
      local_1f0 = fVar43;
      iVar27 = local_250;
    }
  }
  else {
    fVar44 = (float)(int)(short)plVar19[3];
    fVar47 = fVar40;
    cVar21 = cVar30;
LAB_14696eb20:
    local_1fc = 0.0;
    local_200 = 0.0;
    local_20c = 0.0;
    local_218 = 0.0;
    fVar35 = 0.0;
    fVar46 = 0.0;
    fVar34 = 0.0;
    fVar48 = 0.0;
    uVar14 = (ulonglong)local_238;
    local_21c = uVar32;
  }
  uVar7 = (uint)uVar14;
  iVar10 = iVar24 + 1;
  bVar23 = iVar24 < iVar20 & local_211 & iVar27 <= iVar10;
  fVar43 = fVar44;
  if (bVar23 == 1) {
    fVar41 = (float)(int)(short)plVar19[3] + fVar40;
    local_1f8 = fVar42;
LAB_14696eb6a:
    uVar7 = (uint)uVar14;
    uVar17 = (undefined7)(uVar14 >> 8);
    if ((char)uVar14 != '\x02') {
      if ((uVar7 & 0xff) != 1) goto LAB_14696ec2d;
      uVar7 = (uint)CONCAT71(uVar17,1);
      if (local_251 == '\x03') goto LAB_14696ec34;
      iVar8 = 0;
      if (iVar24 < local_1bc) {
        iVar8 = *(int *)(puVar26[1] + 0x40);
      }
      if ((*(float *)((longlong)puVar26 + 0x4c) <= fVar43 + fVar47 + (float)iVar8) ||
         ((-1 < *(int *)(puVar26 + 10) && (*(int *)(puVar26 + 10) <= iVar24)))) {
        fVar41 = fVar40 - fVar38;
        bVar18 = 1;
        fVar33 = fVar42;
        bVar23 = local_212;
        local_1f4 = fVar42;
        iVar20 = local_1ec;
        goto LAB_146970017;
      }
      local_1ec = local_1ec + 1;
      local_1f4 = fVar42;
      goto LAB_14696ec34;
    }
    uVar7 = (uint)CONCAT71(uVar17,2);
    if (local_251 == '\x03') goto LAB_14696ec34;
    bVar6 = 1;
    fVar33 = local_24c;
    if ((*(float *)(puVar26 + 9) <= fVar47) &&
       (bVar6 = 1,
       ((int)uVar28 - *(int *)(puVar26 + 10) <= iVar24 || *(int *)(puVar26 + 10) < 0) &&
       (local_1cc & 1) == 0)) {
      if (*(char *)((longlong)plVar19 + 0x24) == '\x01') {
        local_1ec = local_1ec + 1;
        cVar21 = '\x01';
        local_1cc = 0;
        uVar7 = 0;
        goto LAB_14696ec34;
      }
      bVar6 = 0;
    }
    fVar46 = (float)(int)(short)plVar19[3];
    uVar4 = (uint3)(char)((ushort)(short)plVar19[3] >> 8);
    local_1cc = CONCAT31(uVar4,(fVar47 + fVar46) - *(float *)(puVar26 + 9) <
                               (float)*(int *)(puVar26[1] + 0x40) & bVar6);
    fVar46 = fVar46 + fVar40;
    fVar41 = fVar46 - (float)*(int *)(puVar26[1] + 0x40);
    local_238 = (uint)CONCAT71((uint7)uVar4,2);
    if (1 < *(byte *)((longlong)plVar19 + 0x21)) {
      iVar24 = iVar24 + (uint)*(byte *)((longlong)plVar19 + 0x21) + -1;
      local_238 = 2;
      local_198 = 1;
      fVar40 = fVar46;
      uVar32 = local_21c;
      local_1f8 = fVar42;
      goto LAB_14696eabb;
    }
    local_198 = 1;
    local_1f8 = fVar42;
LAB_14696fda1:
    uVar32 = local_21c;
    if (cVar30 != '\0') goto LAB_14696f2ff;
    fVar46 = (float)(int)(short)plVar19[3];
    fVar38 = fVar38 + fVar46;
    if (bVar23 != 0) {
      fVar41 = fVar41 - fVar38;
      fVar40 = fVar40 - fVar38;
      goto LAB_14696fdd3;
    }
    if (local_251 == '\x03') goto LAB_14696fde3;
  }
  else {
    if ((char)uVar14 != '\0') {
      if ((1 < *(byte *)((longlong)plVar19 + 0x22)) || (1 < *(byte *)((longlong)plVar19 + 0x21))) {
        iVar8 = iVar24;
        if (iVar10 < (int)uVar28) {
          piVar16 = (int *)(*local_1b0 + (longlong)iVar10 * 0xa8 + 0x14);
          iVar27 = iVar24;
          do {
            iVar8 = iVar27;
            if (*piVar16 != *(int *)((longlong)plVar19 + 0x14)) break;
            iVar27 = iVar27 + 1;
            piVar16 = piVar16 + 0x2a;
            iVar8 = local_1bc;
          } while (local_1bc != iVar27);
          uVar14 = (ulonglong)local_238;
        }
        local_231 = cVar30;
        iVar27 = local_250;
        if (iVar24 < iVar8) {
          local_1e8 = CONCAT44(local_1e8._4_4_,fVar48);
          local_288 = CONCAT71(local_288._1_7_,1);
          FUN_140863a48(local_1b0,&local_158,iVar24);
          if (local_158._4_1_ == '\0') {
            iVar20 = (int)fVar44;
          }
          else {
            iVar20 = (int)local_158;
          }
          uVar14 = (ulonglong)local_238;
          puVar26 = local_230;
          uVar28 = local_208;
          fVar43 = (float)iVar20;
          fVar33 = local_24c;
          fVar39 = local_23c;
          fVar45 = local_240;
          fVar37 = local_244;
          fVar48 = (float)local_1e8;
          iVar20 = local_248;
          cVar30 = local_231;
          iVar27 = local_250;
        }
      }
      goto LAB_14696eb6a;
    }
LAB_14696ec2d:
    local_1ec = local_1ec + 1;
LAB_14696ec34:
    local_238 = uVar7;
    uVar32 = local_21c;
    if ((cVar21 == '\0') || (lVar29 == 0)) goto LAB_14696fda1;
    fVar46 = fVar46 + fVar34;
    if (puVar26[2] == 0) {
      fVar43 = 0.0;
      fVar38 = 0.0;
      local_224 = 0.0;
      local_210 = 0.0;
    }
    else {
      fVar43 = (float)iVar24 / local_18c + 0.0;
      fVar38 = fVar34 / *(float *)((longlong)puVar26 + 0x3c) + 0.0;
      local_224 = (float)iVar10 / local_18c + 0.0;
      local_210 = fVar46 / *(float *)((longlong)puVar26 + 0x3c) + 0.0;
    }
    fVar44 = fVar44 + fVar47;
    uVar7 = *(uint *)(lVar29 + 0x74);
    local_1e8 = (ulonglong)uVar7;
    local_252 = bVar18;
    local_220 = fVar35;
    local_1d0 = fVar41;
    if (((float)local_178._0_4_ <= 1e-08) || (bVar31 == 0)) {
      fVar41 = fVar44;
      fVar48 = fVar47;
      if (bVar31 != 0) goto LAB_14696ed60;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      local_1f4 = fVar42;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar39 = local_23c;
        fVar45 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      fVar41 = local_1d8 * fVar34;
      fVar34 = fVar34 * local_1d4;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = local_220;
      *(float *)(lVar13 + 4 + lVar15) = local_20c;
      *(float *)(lVar13 + 8 + lVar15) = fVar43;
      *(float *)(lVar13 + 0xc + lVar15) = fVar38;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar47 * fVar39 + fVar34 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar47 * fVar45 + fVar41 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      fVar42 = fVar39;
      fVar48 = fVar45;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar42 = local_23c;
        fVar48 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      local_218 = local_218 + local_220;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = local_218;
      *(float *)(lVar13 + 4 + lVar15) = local_20c;
      *(float *)(lVar13 + 8 + lVar15) = local_224;
      *(float *)(lVar13 + 0xc + lVar15) = fVar38;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0x3f800000;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar34 + fVar44 * fVar42 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar41 + fVar44 * fVar48 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      fVar38 = fVar42;
      fVar34 = fVar48;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar38 = local_23c;
        fVar34 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      fVar41 = local_1d0;
      fVar35 = local_1fc + local_20c;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = local_220;
      *(float *)(lVar13 + 4 + lVar15) = fVar35;
      *(float *)(lVar13 + 8 + lVar15) = fVar43;
      *(float *)(lVar13 + 0xc + lVar15) = local_210;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0x3f80000000000000;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar47 * fVar39 + fVar46 * local_1d4 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar47 * fVar45 + local_1d8 * fVar46 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      fVar47 = fVar44 * fVar48 + local_1d8 * fVar46;
      fVar44 = fVar44 * fVar42 + fVar46 * local_1d4;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      fVar46 = local_224;
      fVar48 = local_210;
      fVar49 = local_218;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar38 = local_23c;
        fVar34 = local_240;
        fVar37 = local_244;
        fVar46 = local_224;
        fVar48 = local_210;
        fVar49 = local_218;
        iVar20 = local_248;
        iVar27 = local_250;
      }
    }
    else {
      fVar41 = fVar48 * *(float *)(local_1b0 + 0xe) + 0.0;
      fVar35 = (fVar48 - local_200) * *(float *)(local_1b0 + 0xe) + 0.0;
      fVar48 = fVar47 + fVar41;
      fVar41 = fVar41 + fVar44;
      fVar47 = fVar47 + fVar35;
      fVar44 = fVar35 + fVar44;
LAB_14696ed60:
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      local_200 = fVar46;
      local_1f4 = fVar42;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar39 = local_23c;
        fVar45 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      fVar35 = local_20c;
      fVar42 = local_1d8 * fVar34;
      fVar34 = fVar34 * local_1d4;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = local_220;
      *(float *)(lVar13 + 4 + lVar15) = local_20c;
      *(float *)(lVar13 + 8 + lVar15) = fVar43;
      *(float *)(lVar13 + 0xc + lVar15) = fVar38;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar48 * fVar39 + fVar34 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar48 * fVar45 + fVar42 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar39 = local_23c;
        fVar45 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      fVar5 = local_220;
      fVar46 = local_224;
      fVar49 = local_218 + local_220;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = fVar49;
      *(float *)(lVar13 + 4 + lVar15) = fVar35;
      *(float *)(lVar13 + 8 + lVar15) = local_224;
      *(float *)(lVar13 + 0xc + lVar15) = fVar38;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0x3f800000;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar41 * fVar39 + fVar34 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar41 * fVar45 + fVar42 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar39 = local_23c;
        fVar45 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      fVar41 = local_1d0;
      fVar48 = local_210;
      fVar35 = local_1fc + fVar35;
      lVar13 = **(longlong **)(lVar29 + 0x50);
      lVar15 = (longlong)iVar10 * 0x2c;
      *(float *)(lVar13 + lVar15) = fVar5;
      *(float *)(lVar13 + 4 + lVar15) = fVar35;
      *(float *)(lVar13 + 8 + lVar15) = fVar43;
      *(float *)(lVar13 + 0xc + lVar15) = local_210;
      *(undefined8 *)(lVar13 + 0x10 + lVar15) = 0x3f80000000000000;
      *(float *)(lVar13 + 0x18 + lVar15) = fVar47 * fVar39 + local_200 * local_1d4 + fVar37;
      *(float *)(lVar13 + 0x1c + lVar15) = fVar47 * fVar45 + local_1d8 * local_200 + fVar33;
      *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
      *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
      *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
      fVar47 = fVar44 * fVar45 + local_1d8 * local_200;
      fVar44 = fVar44 * fVar39 + local_200 * local_1d4;
      lVar13 = *(longlong *)(lVar29 + 0x50);
      iVar10 = *(int *)(lVar13 + 8);
      *(int *)(lVar13 + 8) = iVar10 + 1;
      fVar38 = fVar39;
      fVar34 = fVar45;
      if (*(int *)(lVar13 + 0xc) == iVar10) {
        FUN_146964c32(lVar13,iVar10);
        puVar26 = local_230;
        uVar28 = local_208;
        fVar33 = local_24c;
        fVar38 = local_23c;
        fVar34 = local_240;
        fVar37 = local_244;
        iVar20 = local_248;
        iVar27 = local_250;
      }
    }
    fVar42 = local_1f4;
    lVar13 = **(longlong **)(lVar29 + 0x50);
    lVar15 = (longlong)iVar10 * 0x2c;
    *(float *)(lVar13 + lVar15) = fVar49;
    *(float *)(lVar13 + 4 + lVar15) = fVar35;
    *(float *)(lVar13 + 8 + lVar15) = fVar46;
    *(float *)(lVar13 + 0xc + lVar15) = fVar48;
    *(undefined1 **)(lVar13 + 0x10 + lVar15) = &DAT_3f8000003f800000;
    *(float *)(lVar13 + 0x18 + lVar15) = fVar44 + fVar37;
    *(float *)(lVar13 + 0x1c + lVar15) = fVar47 + fVar33;
    *(undefined4 *)(lVar13 + 0x20 + lVar15) = uVar32;
    *(undefined4 *)(lVar13 + 0x24 + lVar15) = 0;
    *(int *)(lVar29 + 0x74) = *(int *)(lVar29 + 0x74) + 1;
    if ((int)uVar28 < 0x1400) {
      iVar10 = 6;
      fVar39 = fVar38;
      fVar45 = fVar34;
    }
    else {
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(uint *)(*plVar2 + (longlong)iVar10 * 4) = uVar7;
      *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + 1;
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(uint *)(*plVar2 + (longlong)iVar10 * 4) = uVar7 + 1;
      *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + 1;
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(uint *)(*plVar2 + (longlong)iVar10 * 4) = uVar7 + 2;
      *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + 1;
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(uint *)(*plVar2 + (longlong)iVar10 * 4) = uVar7 + 1;
      *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + 1;
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(int *)(*plVar2 + (longlong)iVar10 * 4) = (int)local_1e8 + 3;
      *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + 1;
      plVar2 = *(longlong **)(lVar29 + 0x58);
      iVar10 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
        FUN_1447808da(plVar2,iVar10);
        puVar26 = local_230;
        iVar20 = local_248;
        iVar27 = local_250;
      }
      *(uint *)(*plVar2 + (longlong)iVar10 * 4) = uVar7 + 2;
      iVar10 = 1;
      uVar28 = local_208;
      fVar33 = local_24c;
      fVar39 = local_23c;
      fVar45 = local_240;
      fVar37 = local_244;
      uVar32 = local_21c;
    }
    *(int *)(lVar29 + 0x78) = *(int *)(lVar29 + 0x78) + iVar10;
    fVar38 = 0.0;
    bVar18 = local_252;
LAB_14696f2ff:
    if (local_251 == '\x03') {
      if (bVar23 != 0) {
LAB_14696fdd3:
        fVar40 = fVar40 + (float)*(int *)(puVar26[1] + 0x40);
      }
LAB_14696fde3:
      iVar10 = 0;
      if ((iVar20 < iVar24 & bVar18) == 0) goto LAB_14696fdef;
    }
    else {
LAB_14696fdef:
      iVar10 = (int)(short)plVar19[3];
    }
    fVar46 = (float)iVar10;
  }
  fVar40 = fVar40 + fVar46;
  fVar42 = fVar42 + (float)(int)*(short *)((longlong)plVar19 + 0x1a);
LAB_14696eabb:
  iVar24 = iVar24 + 1;
  if ((int)uVar28 <= iVar24) goto LAB_146970327;
  goto LAB_14696e81b;
LAB_146970327:
  bVar18 = (byte)local_198;
  fVar33 = local_1f8;
  bVar23 = local_212;
  iVar20 = local_1ec;
  if ((local_198 & 1) == 0) {
LAB_146970009:
    fVar33 = local_1f8;
    if ((*(byte *)((longlong)puVar26 + 0x5e) & 2) == 0) goto LAB_146970017;
    fVar41 = fVar40 - fVar38;
  }
  else {
LAB_146970017:
    fVar42 = fVar33;
    if (local_251 == '\x03') {
      bVar18 = bVar23;
    }
    if ((bVar18 & 1) == 0) goto LAB_146970032;
  }
  puVar22 = puVar26;
  puVar25 = &local_158;
  for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
    *puVar25 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar25 = puVar25 + 1;
  }
  local_158 = (longlong *)puVar26[1];
  local_150 = (longlong *)0x0;
  local_fa = local_fa & 0xfc;
  local_fc = 0;
  local_118 = fVar41;
  local_114 = fVar42;
  FUN_14696e542(local_188);
LAB_146970032:
  if ((local_f0 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar20;
}



// FUNCTION 1469703b8 FUN_1469703b8 body=397 status=ok
// SIG undefined FUN_1469703b8(void)

void FUN_1469703b8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  iVar4 = *param_1;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4 * 6);
  }
  if (iVar4 != 0) {
    FUN_14480809c(&local_58);
    if (0 < *param_1) {
      iVar4 = 0;
      iVar5 = 3;
      do {
        lVar3 = (longlong)(int)(uint)uStack_50;
        uVar1 = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < uVar1) {
          uVar2 = uStack_50 & 0xffffffff;
          uStack_50._0_4_ = uVar1;
          FUN_1447808da(&local_58,uVar2);
          uVar1 = (uint)uStack_50;
        }
        uStack_50._0_4_ = uVar1;
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -3;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -2;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        uVar1 = (uint)uStack_50;
        *(int *)(local_58 + lVar3 * 4) = iVar5;
        lVar3 = (longlong)(int)(uint)uStack_50;
        uStack_50._0_4_ = (uint)uStack_50 + 1;
        if (uStack_50._4_4_ < (uint)uStack_50) {
          FUN_1447808da(&local_58,uVar1);
        }
        *(int *)(local_58 + lVar3 * 4) = iVar5 + -1;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar4 < *param_1);
    }
  }
  DAT_14c975258._0_4_ = (undefined4)local_58;
  DAT_14c975258._4_4_ = local_58._4_4_;
  uRam000000014c975260 = (uint)uStack_50;
  uRam000000014c975264 = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146970548 FUN_146970548 body=115 status=ok
// SIG undefined FUN_146970548(void)

void FUN_146970548(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1469705bc FUN_1469705bc body=147 status=ok
// SIG undefined FUN_1469705bc(void)

void FUN_1469705bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146970650 FUN_146970650 body=725 status=ok
// SIG undefined FUN_146970650(void)

void FUN_146970650(longlong param_1,longlong *param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  longlong lVar4;
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
  float fVar15;
  float fVar16;
  
  fVar1 = *(float *)(param_1 + 0x20);
  pfVar3 = (float *)*param_2;
  fVar12 = pfVar3[2];
  fVar14 = pfVar3[3];
  fVar7 = fVar14 - pfVar3[1];
  fVar8 = fVar12 - *pfVar3;
  fVar10 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
  fVar9 = DAT_14c84635c._4_4_;
  fVar11 = (float)DAT_14c84635c;
  if (1e-08 < fVar10) {
    *param_3 = *param_3 + 4;
    *param_4 = *param_4 + 6;
    fVar9 = fVar7 * (1.0 / fVar10);
    fVar11 = fVar8 * (1.0 / fVar10);
  }
  lVar4 = param_2[1];
  if (2 < (int)lVar4) {
    lVar6 = 0;
    fVar7 = fVar10;
    do {
      fVar8 = *(float *)(*param_2 + 0x10 + lVar6 * 8);
      fVar2 = *(float *)(*param_2 + 0x14 + lVar6 * 8);
      fVar14 = fVar2 - fVar14;
      fVar12 = fVar8 - fVar12;
      fVar10 = SQRT(fVar12 * fVar12 + fVar14 * fVar14);
      fVar13 = (float)DAT_14c84635c;
      fVar15 = DAT_14c84635c._4_4_;
      if (1e-08 < fVar10) {
        fVar13 = fVar12 * (1.0 / fVar10);
        fVar15 = fVar14 * (1.0 / fVar10);
      }
      fVar14 = fVar9 + fVar15;
      fVar12 = fVar11 + fVar13;
      fVar16 = fVar12 * fVar12 + fVar14 * fVar14;
      if (fVar16 <= 1e-08) {
        fVar12 = -fVar9;
      }
      else {
        fVar9 = 1.0 / SQRT(fVar16);
        fVar11 = fVar14 * fVar9;
        fVar12 = fVar12 * fVar9;
      }
      fVar14 = fVar7;
      if (fVar10 <= fVar7) {
        fVar14 = fVar10;
      }
      if (((fVar14 <= 1e-08) ||
          (fVar9 = fVar13 * fVar12 + fVar15 * fVar11, fVar9 < *(float *)(param_1 + 0x1c))) ||
         (iVar5 = (-(uint)(fVar1 != -10.0) & 1) * 2 + 2,
         fVar14 * 0.5 * fVar9 <
         ABS(-fVar15 * *(float *)(param_1 + 0x10) * fVar12 +
             fVar13 * *(float *)(param_1 + 0x10) * fVar11))) {
        if (1e-08 < fVar10) {
          *param_3 = *param_3 + 4;
          *param_4 = *param_4 + 0xc;
        }
        iVar5 = 4;
        if (1e-08 < fVar7) goto LAB_1469708a6;
      }
      else {
LAB_1469708a6:
        *param_3 = *param_3 + iVar5;
        *param_4 = *param_4 + 6;
      }
      lVar6 = lVar6 + 1;
      fVar12 = fVar8;
      fVar14 = fVar2;
      fVar9 = fVar15;
      fVar11 = fVar13;
      fVar7 = fVar10;
    } while ((ulonglong)((int)lVar4 - 1) - 1 != lVar6);
  }
  if (1e-08 < fVar10) {
    *param_3 = *param_3 + 4;
    *param_4 = *param_4 + 0xc;
  }
  return;
}



// FUNCTION 146970926 FUN_146970926 body=2667 status=ok
// SIG undefined FUN_146970926(void)

void FUN_146970926(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
                  char param_5)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined4 *local_180;
  char local_178;
  float local_16c;
  longlong local_168;
  float local_15c;
  float local_158;
  float local_154;
  undefined4 *local_150;
  float local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong *local_138;
  uint local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  longlong *local_120;
  ulonglong local_118;
  longlong local_110;
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar8 = param_4;
  if ((int)param_3[1] != 0) {
    puVar8 = (undefined4 *)*param_3;
  }
  local_128 = *(float *)(param_1 + 4);
  local_f4 = *puVar8;
  pfVar3 = (float *)*param_2;
  uVar5 = *(undefined8 *)pfVar3;
  fVar33 = pfVar3[2];
  fVar21 = pfVar3[3];
  fVar20 = fVar21 - pfVar3[1];
  fVar37 = fVar33 - *pfVar3;
  fVar18 = SQRT(fVar37 * fVar37 + fVar20 * fVar20);
  fVar17 = DAT_14c84635c._4_4_;
  fVar32 = (float)DAT_14c84635c;
  if (1e-08 < fVar18) {
    fVar17 = fVar20 * (1.0 / fVar18);
    fVar32 = fVar37 * (1.0 / fVar18);
  }
  uVar16 = CONCAT44(fVar17,fVar32);
  fVar20 = fVar32 * *(float *)(param_1 + 2);
  fVar37 = -fVar17 * *(float *)(param_1 + 2);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((longlong)param_1 + 0x24);
  uVar12 = CONCAT44(fVar20,fVar37);
  local_178 = param_5;
  local_180 = &local_f4;
  local_188 = uVar12;
  local_138 = param_2;
  FUN_1469713f2(param_1,uVar5,uVar16,fVar18);
  fVar30 = *(float *)(param_1 + 5) + fVar18;
  *(float *)(param_1 + 5) = fVar30;
  uVar9 = (int)local_138[1] - 1;
  if (2 < (int)local_138[1]) {
    local_110 = (ulonglong)uVar9 * 4 + -4;
    lVar13 = 0;
    fVar19 = fVar18;
    fVar24 = fVar21;
    local_150 = param_4;
    local_130 = uVar9;
    local_120 = param_3;
    do {
      puVar8 = (undefined4 *)(*param_3 + 4 + lVar13);
      if ((int)param_3[1] == 0) {
        puVar8 = param_4;
      }
      uVar15 = *puVar8;
      local_158 = *(float *)(*local_138 + 0x10 + lVar13 * 2);
      local_154 = *(float *)(*local_138 + 0x14 + lVar13 * 2);
      local_168 = CONCAT44(local_168._4_4_,fVar24);
      fVar21 = local_154 - fVar24;
      fVar38 = local_158 - fVar33;
      fVar18 = SQRT(fVar38 * fVar38 + fVar21 * fVar21);
      fVar22 = DAT_14c84635c._4_4_;
      fVar39 = (float)DAT_14c84635c;
      if (1e-08 < fVar18) {
        fVar22 = fVar21 * (1.0 / fVar18);
        fVar39 = fVar38 * (1.0 / fVar18);
      }
      fVar31 = fVar17 + fVar22;
      fVar21 = fVar32 + fVar39;
      fVar38 = fVar21 * fVar21 + fVar31 * fVar31;
      if (fVar38 <= 1e-08) {
        fVar21 = -fVar17;
        fVar38 = fVar32;
      }
      else {
        fVar38 = 1.0 / SQRT(fVar38);
        fVar21 = fVar21 * fVar38;
        fVar38 = fVar31 * fVar38;
      }
      uVar16 = CONCAT44(fVar22,fVar39);
      fVar31 = fVar39 * *(float *)(param_1 + 2);
      fVar23 = -fVar22 * *(float *)(param_1 + 2);
      local_118 = (ulonglong)(uint)fVar31;
      if (fVar18 <= fVar19) {
        fVar19 = fVar18;
      }
      local_15c = fVar23;
      local_148 = fVar37;
      local_f4 = uVar15;
      if (((fVar19 <= 1e-08) ||
          (fVar25 = fVar39 * fVar21 + fVar22 * fVar38, fVar25 < *(float *)((longlong)param_1 + 0x1c)
          )) || (fVar21 = fVar21 * fVar23 + fVar38 * fVar31, fVar19 * 0.5 * fVar25 < ABS(fVar21))) {
        local_188 = CONCAT44(fVar20,fVar37);
        local_180 = &local_f4;
        local_178 = param_5;
        FUN_146971930(param_1,CONCAT44(fVar24,fVar33),CONCAT44(fVar17,fVar32));
        local_188 = (ulonglong)(uint)local_15c | local_118 << 0x20;
        local_180 = &local_f4;
        local_178 = param_5;
        FUN_1469713f2(param_1,CONCAT44(fVar24,fVar33),uVar16,fVar18);
        fVar21 = local_154;
        fVar33 = local_158;
      }
      else {
        fVar21 = fVar21 / fVar25;
        local_16c = fVar31 - fVar22 * fVar21;
        fVar17 = fVar23 - fVar21 * fVar39;
        pfVar3 = (float *)param_1[1];
        local_124 = fVar24 + local_16c;
        local_108 = fVar33 + fVar17;
        uStack_104 = 0;
        uStack_100 = 0;
        uStack_fc = 0;
        fVar32 = pfVar3[1] * local_108 + pfVar3[3] * local_124 + pfVar3[5];
        fVar20 = *pfVar3 * local_108 + pfVar3[2] * local_124 + pfVar3[4];
        if (param_5 == '\x01') {
          auVar34._0_12_ = ZEXT812(0);
          auVar34._12_4_ = 0;
          auVar36 = blendps(ZEXT416((uint)(fVar20 + 0.5)),auVar34,0xe);
          auVar36 = roundps(auVar36,auVar36,1);
          fVar20 = auVar36._0_4_;
          auVar34 = blendps(ZEXT416((uint)(fVar32 + 0.5)),auVar34,0xe);
          auVar34 = roundps(auVar34,auVar34,1);
          fVar32 = auVar34._0_4_;
        }
        lVar14 = *param_1;
        lVar7 = param_1[4];
        plVar4 = *(longlong **)(lVar14 + 0x50);
        iVar2 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar2 + 1U;
        uVar27 = 0;
        uVar28 = 0;
        uVar29 = 0;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
          uStack_144 = 0;
          uStack_140 = 0;
          uStack_13c = 0;
          local_148 = fVar33;
          FUN_146964c32(plVar4,iVar2);
          fVar33 = local_148;
          uVar27 = uStack_144;
          uVar28 = uStack_140;
          uVar29 = uStack_13c;
        }
        param_4 = local_150;
        fVar21 = local_154;
        fVar37 = fVar39 * fVar17 + fVar22 * local_16c;
        lVar11 = *plVar4;
        lVar10 = (longlong)iVar2 * 0x2c;
        *(undefined8 *)(lVar11 + lVar10) = 0x3f800000;
        *(float *)(lVar11 + 8 + lVar10) = fVar30 - fVar37;
        *(int *)(lVar11 + 0xc + lVar10) = (int)lVar7;
        *(float *)(lVar11 + 0x18 + lVar10) = fVar20;
        *(float *)(lVar11 + 0x1c + lVar10) = fVar32;
        *(undefined4 *)(lVar11 + 0x20 + lVar10) = uVar15;
        *(undefined4 *)(lVar11 + 0x24 + lVar10) = 0;
        piVar1 = (int *)(lVar14 + 0x74);
        *piVar1 = *piVar1 + 1;
        lVar14 = *param_1;
        pfVar3 = (float *)param_1[1];
        lVar7 = param_1[4];
        fVar32 = *(float *)(param_1 + 5);
        fVar24 = fVar24 - local_16c;
        fVar17 = fVar33 - fVar17;
        local_168 = CONCAT44(local_168._4_4_,fVar24);
        fVar33 = pfVar3[1] * fVar17 + pfVar3[3] * fVar24 + pfVar3[5];
        fVar20 = *pfVar3 * fVar17 + pfVar3[2] * fVar24 + pfVar3[4];
        if (param_5 == '\x01') {
          auVar34 = blendps(ZEXT416((uint)(fVar20 + 0.5)),ZEXT816(0),0xe);
          auVar34 = roundps(auVar34,auVar34,1);
          fVar20 = auVar34._0_4_;
          auVar34 = blendps(ZEXT416((uint)(fVar33 + 0.5)),ZEXT816(0),0xe);
          auVar34 = roundps(auVar34,auVar34,1);
          fVar33 = auVar34._0_4_;
        }
        plVar4 = *(longlong **)(lVar14 + 0x50);
        iVar2 = (int)plVar4[1];
        *(uint *)(plVar4 + 1) = iVar2 + 1U;
        local_16c = fVar37;
        if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
          local_12c = uVar15;
          FUN_146964c32(plVar4,iVar2);
          uVar15 = local_12c;
        }
        lVar11 = *plVar4;
        lVar10 = (longlong)iVar2 * 0x2c;
        *(undefined8 *)(lVar11 + lVar10) = 0xbf800000;
        *(float *)(lVar11 + 8 + lVar10) = fVar32 + fVar37;
        *(int *)(lVar11 + 0xc + lVar10) = (int)lVar7;
        *(float *)(lVar11 + 0x18 + lVar10) = fVar20;
        *(float *)(lVar11 + 0x1c + lVar10) = fVar33;
        *(undefined4 *)(lVar11 + 0x20 + lVar10) = uVar15;
        *(undefined4 *)(lVar11 + 0x24 + lVar10) = 0;
        piVar1 = (int *)(lVar14 + 0x74);
        *piVar1 = *piVar1 + 1;
        iVar2 = *(int *)(*param_1 + 0x74);
        local_188 = CONCAT44(local_188._4_4_,iVar2 + -4);
        FUN_146971e84(*param_1,iVar2 + -3,iVar2 + -1,iVar2 + -2);
        fVar33 = local_158;
        if ((local_128 != -10.0) || (param_3 = local_120, NAN(local_128))) {
          pfVar3 = (float *)param_1[1];
          auVar36._4_4_ = uStack_104;
          auVar36._0_4_ = local_108;
          auVar36._8_4_ = uStack_100;
          auVar36._12_4_ = uStack_fc;
          auVar35._4_12_ = auVar36._4_12_;
          fVar32 = pfVar3[1] * local_108 + pfVar3[3] * local_124 + pfVar3[5];
          fVar20 = local_108 * *pfVar3 + local_124 * pfVar3[2] + pfVar3[4];
          if (param_5 == '\x01') {
            auVar35._0_4_ = fVar20 + 0.5;
            auVar34 = blendps(auVar35,ZEXT816(0),0xe);
            auVar34 = roundps(auVar34,auVar34,1);
            fVar20 = auVar34._0_4_;
            auVar34 = blendps(ZEXT416((uint)(fVar32 + 0.5)),ZEXT816(0),0xe);
            auVar34 = roundps(auVar34,auVar34,1);
            fVar32 = auVar34._0_4_;
          }
          lVar14 = *param_1;
          lVar7 = param_1[4];
          fVar37 = *(float *)(param_1 + 5) + local_16c;
          plVar4 = *(longlong **)(lVar14 + 0x50);
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          local_148 = fVar17;
          uStack_144 = uVar27;
          uStack_140 = uVar28;
          uStack_13c = uVar29;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            FUN_146964c32(plVar4,iVar2);
          }
          param_4 = local_150;
          lVar11 = *plVar4;
          lVar10 = (longlong)iVar2 * 0x2c;
          *(undefined8 *)(lVar11 + lVar10) = 0x3f800000;
          *(float *)(lVar11 + 8 + lVar10) = fVar37;
          *(int *)(lVar11 + 0xc + lVar10) = (int)lVar7;
          *(float *)(lVar11 + 0x18 + lVar10) = fVar20;
          *(float *)(lVar11 + 0x1c + lVar10) = fVar32;
          *(undefined4 *)(lVar11 + 0x20 + lVar10) = uVar15;
          *(undefined4 *)(lVar11 + 0x24 + lVar10) = 0;
          piVar1 = (int *)(lVar14 + 0x74);
          *piVar1 = *piVar1 + 1;
          lVar14 = *param_1;
          pfVar3 = (float *)param_1[1];
          fVar32 = *(float *)(param_1 + 4);
          fVar17 = *(float *)(param_1 + 5);
          auVar6._4_4_ = uStack_144;
          auVar6._0_4_ = local_148;
          auVar6._8_4_ = uStack_140;
          auVar6._12_4_ = uStack_13c;
          auVar26._4_12_ = auVar6._4_12_;
          fVar37 = pfVar3[1] * local_148 + pfVar3[3] * (float)local_168 + pfVar3[5];
          fVar20 = local_148 * *pfVar3 + (float)local_168 * pfVar3[2] + pfVar3[4];
          if (param_5 == '\x01') {
            auVar26._0_4_ = fVar20 + 0.5;
            auVar34 = blendps(auVar26,ZEXT816(0),0xe);
            auVar34 = roundps(auVar34,auVar34,1);
            fVar20 = auVar34._0_4_;
            auVar34 = blendps(ZEXT416((uint)(fVar37 + 0.5)),ZEXT816(0),0xe);
            auVar34 = roundps(auVar34,auVar34,1);
            fVar37 = auVar34._0_4_;
          }
          plVar4 = *(longlong **)(lVar14 + 0x50);
          iVar2 = (int)plVar4[1];
          *(uint *)(plVar4 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
            local_168 = lVar14;
            local_148 = fVar32;
            FUN_146964c32(plVar4,iVar2);
            lVar14 = local_168;
            fVar32 = local_148;
          }
          lVar7 = *plVar4;
          lVar11 = (longlong)iVar2 * 0x2c;
          *(undefined8 *)(lVar7 + lVar11) = 0xbf800000;
          *(float *)(lVar7 + 8 + lVar11) = fVar17 - local_16c;
          *(float *)(lVar7 + 0xc + lVar11) = fVar32;
          *(float *)(lVar7 + 0x18 + lVar11) = fVar20;
          *(float *)(lVar7 + 0x1c + lVar11) = fVar37;
          *(undefined4 *)(lVar7 + 0x20 + lVar11) = uVar15;
          *(undefined4 *)(lVar7 + 0x24 + lVar11) = 0;
          *(int *)(lVar14 + 0x74) = *(int *)(lVar14 + 0x74) + 1;
          param_3 = local_120;
        }
      }
      fVar30 = *(float *)(param_1 + 5) + fVar18;
      *(float *)(param_1 + 5) = fVar30;
      lVar13 = lVar13 + 4;
      fVar19 = fVar18;
      fVar20 = fVar31;
      fVar17 = fVar22;
      fVar37 = fVar23;
      fVar24 = fVar21;
      fVar32 = fVar39;
    } while (local_110 != lVar13);
    uVar12 = (ulonglong)(uint)local_15c | local_118 << 0x20;
    uVar9 = local_130;
  }
  puVar8 = (undefined4 *)((longlong)(int)uVar9 * 4 + *param_3);
  if ((int)param_3[1] == 0) {
    puVar8 = param_4;
  }
  local_f4 = *puVar8;
  local_180 = &local_f4;
  local_188 = uVar12;
  local_178 = param_5;
  FUN_146971930(param_1,CONCAT44(fVar21,fVar33),uVar16,fVar18);
  if ((local_f0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146971392 FUN_146971392 body=96 status=ok
// SIG undefined FUN_146971392(void)

void FUN_146971392(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 2,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,4,4);
  }
  return;
}



// FUNCTION 1469713f2 FUN_1469713f2 body=1342 status=ok
// SIG undefined FUN_1469713f2(void)

void FUN_1469713f2(longlong *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,undefined4 *param_6,char param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  
  if (1e-08 < param_4) {
    fVar13 = (float)((ulonglong)param_2 >> 0x20);
    fVar11 = (float)((ulonglong)param_3 >> 0x20);
    fVar14 = *(float *)((longlong)param_1 + 0x14);
    if (param_4 * 0.5 <= *(float *)((longlong)param_1 + 0x14)) {
      fVar14 = param_4 * 0.5;
    }
    fVar12 = fVar14 - *(float *)(param_1 + 3);
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar19 = fVar12 * fVar11 + fVar13;
    fVar16 = fVar12 * (float)param_3 + (float)param_2;
    fVar10 = fVar19 + param_5._4_4_;
    fVar17 = fVar16 + (float)param_5;
    fVar15 = pfVar5[1] * fVar17 + pfVar5[3] * fVar10 + pfVar5[5];
    fVar10 = fVar17 * *pfVar5 + fVar10 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar10 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar10 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar15 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar15 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar17 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0xbf8000003f800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar17 + fVar12;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar10;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar15;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar19 = fVar19 - param_5._4_4_;
    fVar16 = fVar16 - (float)param_5;
    fVar15 = pfVar5[1] * fVar16 + pfVar5[3] * fVar19 + pfVar5[5];
    fVar10 = fVar16 * *pfVar5 + fVar19 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar10 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar10 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar15 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar15 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar16 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0xbf800000bf800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar12 + fVar16;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar10;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar15;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar13 = fVar11 * fVar14 + fVar13;
    fVar12 = (float)param_3 * fVar14 + (float)param_2;
    fVar11 = fVar13 + param_5._4_4_;
    fVar10 = fVar12 + (float)param_5;
    fVar15 = pfVar5[1] * fVar10 + pfVar5[3] * fVar11 + pfVar5[5];
    fVar11 = fVar10 * *pfVar5 + fVar11 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar11 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar11 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar15 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar15 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar10 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0x3f800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar10 + fVar14;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar11;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar15;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar13 = fVar13 - param_5._4_4_;
    fVar12 = fVar12 - (float)param_5;
    fVar11 = pfVar5[1] * fVar12 + pfVar5[3] * fVar13 + pfVar5[5];
    fVar13 = fVar12 * *pfVar5 + fVar13 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar13 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar13 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar11 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar11 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar10 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0xbf800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar14 + fVar10;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar13;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar11;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    iVar3 = *(int *)(*param_1 + 0x74);
    FUN_146971e84(*param_1,iVar3 + -3,iVar3 + -1,iVar3 + -2,iVar3 + -4);
  }
  return;
}



// FUNCTION 146971930 FUN_146971930 body=1363 status=ok
// SIG undefined FUN_146971930(void)

void FUN_146971930(longlong *param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  undefined8 param_5,undefined4 *param_6,char param_7)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float fVar19;
  
  if (1e-08 < param_4) {
    fVar13 = (float)((ulonglong)param_2 >> 0x20);
    fVar12 = (float)((ulonglong)param_3 >> 0x20);
    fVar11 = *(float *)((longlong)param_1 + 0x14);
    if (param_4 * 0.5 <= *(float *)((longlong)param_1 + 0x14)) {
      fVar11 = param_4 * 0.5;
    }
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar14 = *(float *)(param_1 + 5);
    fVar19 = fVar13 - fVar11 * fVar12;
    fVar16 = (float)param_2 - fVar11 * (float)param_3;
    fVar10 = fVar19 + param_5._4_4_;
    fVar17 = fVar16 + (float)param_5;
    fVar15 = pfVar5[1] * fVar17 + pfVar5[3] * fVar10 + pfVar5[5];
    fVar10 = fVar17 * *pfVar5 + fVar10 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar10 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar10 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar15 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar15 = auVar18._0_4_;
    }
    fVar17 = fVar11 - *(float *)(param_1 + 3);
    uVar2 = *param_6;
    lVar8 = param_1[4];
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0x3f800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar14 - fVar11;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar10;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar15;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar14 = *(float *)(param_1 + 5);
    fVar19 = fVar19 - param_5._4_4_;
    fVar16 = fVar16 - (float)param_5;
    fVar15 = pfVar5[1] * fVar16 + pfVar5[3] * fVar19 + pfVar5[5];
    fVar10 = fVar16 * *pfVar5 + fVar19 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar10 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar10 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar15 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar15 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0xbf800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar14 - fVar11;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar10;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar15;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    iVar3 = *(int *)(*param_1 + 0x74);
    FUN_146971e84(*param_1,iVar3 + -3,iVar3 + -1,iVar3 + -2,iVar3 + -4);
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar13 = fVar12 * fVar17 + fVar13;
    fVar12 = (float)param_3 * fVar17 + (float)param_2;
    fVar11 = fVar13 + param_5._4_4_;
    fVar14 = fVar12 + (float)param_5;
    fVar10 = pfVar5[1] * fVar14 + pfVar5[3] * fVar11 + pfVar5[5];
    fVar11 = fVar14 * *pfVar5 + fVar11 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar11 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar11 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar10 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar10 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar14 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined1 **)(lVar7 + lVar9) = &DAT_3f8000003f800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar14 + fVar17;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar11;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar10;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    lVar4 = *param_1;
    pfVar5 = (float *)param_1[1];
    fVar13 = fVar13 - param_5._4_4_;
    fVar12 = fVar12 - (float)param_5;
    fVar14 = pfVar5[1] * fVar12 + pfVar5[3] * fVar13 + pfVar5[5];
    fVar11 = fVar12 * *pfVar5 + fVar13 * pfVar5[2] + pfVar5[4];
    if (param_7 == '\x01') {
      auVar18 = blendps(ZEXT416((uint)(fVar11 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar11 = auVar18._0_4_;
      auVar18 = blendps(ZEXT416((uint)(fVar14 + 0.5)),ZEXT816(0),0xe);
      auVar18 = roundps(auVar18,auVar18,1);
      fVar14 = auVar18._0_4_;
    }
    uVar2 = *param_6;
    lVar8 = param_1[4];
    fVar12 = *(float *)(param_1 + 5);
    plVar6 = *(longlong **)(lVar4 + 0x50);
    iVar3 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar3 + 1U) {
      FUN_146964c32(plVar6,iVar3);
    }
    lVar7 = *plVar6;
    lVar9 = (longlong)iVar3 * 0x2c;
    *(undefined8 *)(lVar7 + lVar9) = 0x3f800000bf800000;
    *(float *)(lVar7 + 8 + lVar9) = fVar17 + fVar12;
    *(int *)(lVar7 + 0xc + lVar9) = (int)lVar8;
    *(float *)(lVar7 + 0x18 + lVar9) = fVar11;
    *(float *)(lVar7 + 0x1c + lVar9) = fVar14;
    *(undefined4 *)(lVar7 + 0x20 + lVar9) = uVar2;
    *(undefined4 *)(lVar7 + 0x24 + lVar9) = 0;
    piVar1 = (int *)(lVar4 + 0x74);
    *piVar1 = *piVar1 + 1;
    iVar3 = *(int *)(*param_1 + 0x74);
    FUN_146971e84(*param_1,iVar3 + -3,iVar3 + -1,iVar3 + -2,iVar3 + -4);
  }
  return;
}



// FUNCTION 146971e84 FUN_146971e84 body=297 status=ok
// SIG undefined FUN_146971e84(void)

void FUN_146971e84(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_3;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_4;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_4;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_5;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  plVar2 = *(longlong **)(param_1 + 0x58);
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(plVar2,iVar1);
  }
  *(undefined4 *)(*plVar2 + (longlong)iVar1 * 4) = param_2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}



// FUNCTION 146971fae FUN_146971fae body=31 status=ok
// SIG undefined FUN_146971fae(void)

undefined8 FUN_146971fae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146971fe6 FUN_146971fe6 body=93 status=ok
// SIG undefined FUN_146971fe6(void)

void FUN_146971fe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ee99c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146972044 FUN_146972044 body=93 status=ok
// SIG undefined FUN_146972044(void)

void FUN_146972044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ee99c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469720a2 FUN_1469720a2 body=126 status=ok
// SIG undefined FUN_1469720a2(void)

void FUN_1469720a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ee9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ee99c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146972111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146972130 FUN_146972130 body=31 status=ok
// SIG undefined FUN_146972130(void)

undefined8 FUN_146972130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146972168 FUN_146972168 body=93 status=ok
// SIG undefined FUN_146972168(void)

void FUN_146972168(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ee9a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1469721c6 FUN_1469721c6 body=93 status=ok
// SIG undefined FUN_1469721c6(void)

void FUN_1469721c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ee9c60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149ee9a30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146972224 FUN_146972224 body=126 status=ok
// SIG undefined FUN_146972224(void)

void FUN_146972224(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149ee9c60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149ee9a30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146972293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1469722b0 FUN_1469722b0 body=101 status=ok
// SIG undefined FUN_1469722b0(void)

int FUN_1469722b0(longlong *param_1,uint param_2,longlong *param_3)

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
        lVar5 = (longlong)iVar2;
        if (((*(longlong *)(lVar3 + lVar5 * 0x28) == *param_3) &&
            (lVar1 = lVar3 + lVar5 * 0x28, *(int *)(lVar1 + 8) == (int)param_3[1])) &&
           (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_3 + 0xc))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x20 + lVar5 * 0x28);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 146972316 FUN_146972316 body=147 status=ok
// SIG undefined FUN_146972316(void)

void FUN_146972316(longlong param_1,int param_2)

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



// FUNCTION 1469723aa FUN_1469723aa body=90 status=ok
// SIG undefined FUN_1469723aa(void)

void FUN_1469723aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1 != 0) {
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0x20) = 0;
    }
    plVar3 = *(longlong **)(param_1 + 0x28);
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
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 146972404 FUN_146972404 body=305 status=ok
// SIG undefined FUN_146972404(void)

undefined4 * FUN_146972404(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146972536(param_1,local_48);
  puVar1 = (undefined4 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[4] = puVar1[4];
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *local_40 = *puVar1;
  local_40[1] = uVar3;
  local_40[2] = uVar4;
  local_40[3] = uVar5;
  *(undefined8 *)(local_40 + 6) = *puVar2;
  *puVar2 = 0;
  local_40[8] = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = local_40[4];
  cVar6 = FUN_14697261c(param_1,uVar8,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar7) {
      uVar9 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar11 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      local_40[9] = uVar8;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      local_40[8] = *(undefined4 *)
                     (lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
      ;
      lVar11 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar11 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar11 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1469726fe(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146972536 FUN_146972536 body=230 status=ok
// SIG undefined FUN_146972536(void)

int * FUN_146972536(longlong *param_1,int *param_2)

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



// FUNCTION 14697261c FUN_14697261c body=112 status=ok
// SIG undefined FUN_14697261c(void)

undefined8 FUN_14697261c(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

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
  int iVar10;
  longlong lVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar10 = FUN_1469722b0(), iVar10 != -1)) {
    lVar2 = *param_1;
    lVar11 = (longlong)iVar10;
    FUN_1469723aa(*(undefined8 *)(lVar2 + 0x18 + lVar11 * 0x28));
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar11 * 0x28);
    *puVar1 = param_3[4];
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    puVar1 = (undefined4 *)(lVar2 + lVar11 * 0x28);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_14697268c(param_1,*param_4);
    *param_4 = iVar10;
    return 1;
  }
  return 0;
}



// FUNCTION 14697268c FUN_14697268c body=114 status=ok
// SIG undefined FUN_14697268c(void)

void FUN_14697268c(longlong *param_1,int param_2)

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



// FUNCTION 1469726fe FUN_1469726fe body=420 status=ok
// SIG undefined FUN_1469726fe(void)

void FUN_1469726fe(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + 0x10 + lVar6 * 0x28);
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



// FUNCTION 1469728a4 FUN_1469728a4 body=132 status=ok
// SIG undefined FUN_1469728a4(void)

void FUN_1469728a4(longlong param_1,int param_2)

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



// FUNCTION 14697292a FUN_14697292a body=132 status=ok
// SIG undefined FUN_14697292a(void)

void FUN_14697292a(longlong param_1,int param_2)

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



// FUNCTION 1469729b0 FUN_1469729b0 body=48 status=ok
// SIG undefined FUN_1469729b0(void)

void FUN_1469729b0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 1469729e0 FUN_1469729e0 body=48 status=ok
// SIG undefined FUN_1469729e0(void)

void FUN_1469729e0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146972a10 FUN_146972a10 body=48 status=ok
// SIG undefined FUN_146972a10(void)

void FUN_146972a10(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 146972a40 FUN_146972a40 body=63 status=ok
// SIG undefined FUN_146972a40(void)

void FUN_146972a40(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145cec5a0(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_1469726fe(param_1);
    return;
  }
  FUN_146972a80(param_1);
  FUN_145cec5a0(param_1);
  return;
}



// FUNCTION 146972a80 FUN_146972a80 body=322 status=ok
// SIG undefined FUN_146972a80(void)

void FUN_146972a80(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 146972bc4 FUN_146972bc4 body=31 status=ok
// SIG undefined FUN_146972bc4(void)

undefined8 FUN_146972bc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146972c00 FUN_146972c00 body=93 status=ok
// SIG undefined FUN_146972c00(void)

void FUN_146972c00(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_149ee9aa0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146972c5e FUN_146972c5e body=126 status=ok
// SIG undefined FUN_146972c5e(void)

void FUN_146972c5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_149ee9aa0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146972ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146972cdc FUN_146972cdc body=21 status=ok
// SIG undefined FUN_146972cdc(void)

undefined8 FUN_146972cdc(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 146972cf2 FUN_146972cf2 body=138 status=ok
// SIG undefined FUN_146972cf2(void)

void FUN_146972cf2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 146972d94 FUN_146972d94 body=29 status=ok
// SIG undefined FUN_146972d94(void)

undefined8 FUN_146972d94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146972db2 FUN_146972db2 body=96 status=ok
// SIG undefined FUN_146972db2(void)

void FUN_146972db2(longlong param_1,int param_2)

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



// FUNCTION 146972e12 FUN_146972e12 body=352 status=ok
// SIG undefined FUN_146972e12(void)

undefined4 * FUN_146972e12(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  FUN_146972f74(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = *puVar1;
  local_40[2] = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_14697305a(param_1,uVar9,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0x1c) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_146973174(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146972f74 FUN_146972f74 body=229 status=ok
// SIG undefined FUN_146972f74(void)

int * FUN_146972f74(longlong *param_1,int *param_2)

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



// FUNCTION 14697305a FUN_14697305a body=168 status=ok
// SIG undefined FUN_14697305a(void)

undefined8 FUN_14697305a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
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
        puVar2 = (undefined4 *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          plVar7 = *(longlong **)(puVar2 + 4);
          if (plVar7 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))();
            }
          }
          lVar5 = *param_3;
          uVar3 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar2 + 4) = param_3[2];
          *puVar2 = (int)lVar5;
          puVar2[1] = uVar3;
          puVar2[2] = (int)lVar6;
          puVar2[3] = uVar4;
          FUN_146973102(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = puVar2[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 146973102 FUN_146973102 body=114 status=ok
// SIG undefined FUN_146973102(void)

void FUN_146973102(longlong *param_1,int param_2)

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



// FUNCTION 146973174 FUN_146973174 body=476 status=ok
// SIG undefined FUN_146973174(void)

void FUN_146973174(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x20;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
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



// FUNCTION 146973352 FUN_146973352 body=236 status=ok
// SIG undefined FUN_146973352(void)

bool FUN_146973352(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[3] == 0) || ((longlong *)param_1[2] == (longlong *)0x0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*(longlong *)param_1[2] + 0x30))();
  }
  if ((longlong *)param_2[2] == (longlong *)0x0 || (int)param_2[3] == 0) {
    if (cVar2 == '\0') {
LAB_1469733f2:
      if ((char)param_1[1] == (char)param_2[1]) {
        bVar4 = *param_1 == *param_2;
        goto LAB_1469733b3;
      }
    }
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_2[2] + 0x30))();
    if (cVar2 == cVar3) {
      if (cVar2 != '\0') {
        if (((int)param_1[3] == 0) || (plVar1 = (longlong *)param_1[2], plVar1 == (longlong *)0x0))
        {
          local_28 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        }
        plVar1 = (longlong *)param_2[2];
        if (plVar1 == (longlong *)0x0 || (int)param_2[3] == 0) {
          local_30 = 0;
        }
        else {
          (**(code **)(*plVar1 + 0x38))(plVar1,&local_30);
        }
        bVar4 = local_28 == local_30;
        goto LAB_1469733b3;
      }
      goto LAB_1469733f2;
    }
  }
  bVar4 = false;
LAB_1469733b3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146973440 FUN_146973440 body=138 status=ok
// SIG undefined FUN_146973440(void)

void FUN_146973440(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1469734ca FUN_1469734ca body=80 status=ok
// SIG undefined FUN_1469734ca(void)

void FUN_1469734ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149eeb4b0;
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_149ed05f0;
  plVar3 = *(longlong **)(param_1 + 0xc0);
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
                    /* WARNING: Could not recover jumptable at 0x000146973516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146973526 FUN_146973526 body=108 status=ok
// SIG undefined FUN_146973526(void)

undefined * FUN_146973526(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c97d4a0) {
    FUN_144b3d300(&DAT_14c97d4a0);
    if (DAT_14c97d4a0 == -1) {
      FUN_145a4ed82(&DAT_14c979e40);
      atexit((_func_5014 *)&LAB_142877c5c);
      _Init_thread_footer(&DAT_14c97d4a0);
    }
  }
  return &DAT_14c979e40;
}



// FUNCTION 1469739dc FUN_1469739dc body=5 status=ok
// SIG undefined FUN_1469739dc(void)

void FUN_1469739dc(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 1469739e2 FUN_1469739e2 body=51 status=ok
// SIG undefined FUN_1469739e2(void)

void FUN_1469739e2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x31) & 1) != 0) &&
     (lVar1 = **(longlong **)(param_1 + 0x1b0), lVar1 != 0)) {
    lVar2 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x88);
    }
    FUN_146979ce2(lVar2,*(undefined4 *)(lVar1 + 0x90));
    return;
  }
  return;
}



// FUNCTION 146973a16 FUN_146973a16 body=136 status=ok
// SIG undefined FUN_146973a16(void)

undefined8 FUN_146973a16(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (((*(byte *)(param_2 + 0x31) & 1) != 0) &&
     (lVar1 = **(longlong **)(param_2 + 0x1b0), lVar1 != 0)) {
    lVar2 = lVar1 + 8;
    if (*(longlong *)(lVar1 + 0x88) != 0) {
      lVar2 = *(longlong *)(lVar1 + 0x88);
    }
    if ((longlong)*(int *)(lVar1 + 0x90) != 0) {
      uVar4 = 0;
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + uVar4) == param_1) {
          if ((int)(~uVar4 >> 5) != 0) {
            return *(undefined8 *)(lVar2 + 8 + (lVar3 >> 0x20) * 0x20);
          }
          return 0;
        }
        lVar3 = lVar3 + 0x100000000;
        uVar4 = uVar4 + 0x20;
      } while ((longlong)*(int *)(lVar1 + 0x90) * 0x20 != uVar4);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 146973a9e FUN_146973a9e body=44 status=ok
// SIG undefined FUN_146973a9e(void)

undefined8 FUN_146973a9e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)*param_3)(param_3);
  FUN_140c8fe9c(param_2,uVar1,param_1);
  return param_2;
}



// FUNCTION 146973aca FUN_146973aca body=17 status=ok
// SIG undefined FUN_146973aca(void)

void FUN_146973aca(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146973adc(param_2,param_1,param_4);
  return;
}



// FUNCTION 146973adc FUN_146973adc body=573 status=ok
// SIG undefined FUN_146973adc(void)

void FUN_146973adc(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  
  lVar5 = (**(code **)*param_1)();
  if (((*(byte *)(lVar5 + 0x31) & 1) == 0) || (lVar3 = **(longlong **)(lVar5 + 0x1b0), lVar3 == 0))
  {
    plVar7 = (longlong *)FUN_14001cc68(0xb0);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_149eefff0;
    memset(plVar7 + 3,0,0x98);
    plVar7[2] = (longlong)&PTR_FUN_149ef0008;
    *(undefined4 *)((longlong)plVar7 + 0xa4) = 4;
    FUN_146973d1a(plVar7 + 2,param_1,lVar5,param_2,param_3);
    if ((int)plVar7[0x14] != 0) {
      *(byte *)(lVar5 + 0x31) = *(byte *)(lVar5 + 0x31) | 1;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      puVar10 = (undefined8 *)(lVar5 + 0x1b0);
      uVar2 = *(uint *)(lVar5 + 0x1b8);
      *(uint *)(lVar5 + 0x1b8) = uVar2 + 1;
      if (*(uint *)(lVar5 + 0x1bc) < uVar2 + 1) {
        FUN_140eeec1c(puVar10,(ulonglong)uVar2);
      }
      memmove((void *)((longlong)*puVar10 + 0x10),(void *)*puVar10,(ulonglong)uVar2 << 4);
      plVar4 = (longlong *)*puVar10;
      *plVar4 = (longlong)(plVar7 + 2);
      plVar4[1] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        LOCK();
        plVar4 = plVar7 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if ((~*(byte *)(lVar5 + 0x31) & 6) == 0) {
        FUN_140163244(lVar5,0x40);
      }
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
          return;
        }
      }
    }
  }
  else {
    lVar6 = lVar3 + 8;
    if (*(longlong *)(lVar3 + 0x88) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0x88);
    }
    if ((longlong)*(int *)(lVar3 + 0x90) != 0) {
      uVar9 = 0;
      lVar8 = 0;
      do {
        if (*(longlong *)(lVar6 + uVar9) == param_2) {
          if ((int)(~uVar9 >> 5) != 0) {
            plVar7 = (longlong *)(lVar6 + (lVar8 >> 0x20) * 0x20 + 8);
            if (plVar7 == param_3) {
              return;
            }
            plVar4 = (longlong *)*plVar7;
            *plVar7 = *param_3;
            *param_3 = 0;
            if (plVar4 == (longlong *)0x0) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x000146973bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar4 + 0x20))(plVar4,1);
            return;
          }
          break;
        }
        lVar8 = lVar8 + 0x100000000;
        uVar9 = uVar9 + 0x20;
      } while ((longlong)*(int *)(lVar3 + 0x90) * 0x20 != uVar9);
    }
    FUN_146973d1a(lVar3,param_1,lVar5,param_2,param_3);
  }
  return;
}



// FUNCTION 146973d1a FUN_146973d1a body=394 status=ok
// SIG undefined FUN_146973d1a(void)

void FUN_146973d1a(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined4 local_50;
  int local_4c;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)(**(code **)(*param_3 + 8))(param_3);
  (**(code **)(*param_2 + 8))(param_2,&local_48);
  if ((longlong)(int)plVar4[1] != 0) {
    iVar5 = (int)param_4 - (int)param_2;
    lVar6 = *plVar4;
    lVar7 = (longlong)(int)plVar4[1] * 0x58;
    do {
      if (((*(int *)(lVar6 + 8) == iVar5) && (*(char *)(lVar6 + 0x50) == '\x02')) &&
         (*(longlong *)(lVar6 + 0x14) == local_48)) {
        if (lVar6 != 0) {
          plVar8 = plVar4 + 2;
          if ((longlong *)plVar4[4] != (longlong *)0x0) {
            plVar8 = (longlong *)plVar4[4];
          }
          if ((longlong)(int)plVar4[5] != 0) {
            lVar7 = (longlong)(int)plVar4[5] << 4;
            goto LAB_146973de1;
          }
        }
        break;
      }
      lVar6 = lVar6 + 0x58;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  goto LAB_146973d97;
  while( true ) {
    plVar8 = plVar8 + 2;
    lVar7 = lVar7 + -0x10;
    if (lVar7 == 0) break;
LAB_146973de1:
    if (*plVar8 == local_48) {
      if (plVar8 != (longlong *)0x0) {
        local_50 = *(undefined4 *)(lVar6 + 0x1c);
        local_60 = (longlong *)*param_5;
        *param_5 = 0;
        lVar7 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar7 = param_1 + 8;
        }
        iVar9 = 0;
        local_68 = param_4;
        local_58 = lVar6;
        local_4c = iVar5;
        if (0 < (int)*(uint *)(param_1 + 0x90)) {
          iVar9 = 0;
          uVar10 = *(uint *)(param_1 + 0x90);
          do {
            uVar1 = (uVar10 >> 1) + iVar9;
            cVar3 = FUN_146979a3a((ulonglong)uVar1 * 0x20 + lVar7,&local_68);
            if (cVar3 != '\0') {
              iVar9 = uVar1 + (uVar10 & 1);
            }
            bVar2 = 1 < uVar10;
            uVar10 = uVar10 >> 1;
          } while (bVar2);
        }
        FUN_146973ea6(param_1 + 8,&local_68,iVar9);
        if (local_60 != (longlong *)0x0) {
          (**(code **)(*local_60 + 0x20))(local_60,1);
        }
      }
      break;
    }
  }
LAB_146973d97:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146973ea6 FUN_146973ea6 body=170 status=ok
// SIG undefined FUN_146973ea6(void)

int FUN_146973ea6(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
    FUN_146979934(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar4 = param_1;
  }
  lVar5 = (longlong)param_3 * 0x20;
  memmove((void *)(lVar4 + lVar5 + 0x20),(void *)(lVar4 + lVar5),
          (ulonglong)(uint)(iVar2 - param_3) << 5);
  lVar4 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar4 = param_1;
  }
  *(undefined8 *)(lVar4 + lVar5) = *param_2;
  *(undefined8 *)(lVar4 + 8 + lVar5) = param_2[1];
  param_2[1] = 0;
  uVar3 = param_2[3];
  puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
  *puVar1 = param_2[2];
  puVar1[1] = uVar3;
  return param_3;
}



// FUNCTION 146973f50 FUN_146973f50 body=36 status=ok
// SIG undefined FUN_146973f50(void)

void FUN_146973f50(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  
  if ((((*(byte *)((longlong)param_1 + 0x31) & 1) == 0) || (*(longlong *)param_1[0x36] == 0)) ||
     (bVar3 = *(byte *)(*(longlong *)param_1[0x36] + 0x98), bVar3 == 0)) {
    return;
  }
  if ((bVar3 != 0) && ((*(byte *)((longlong)param_1 + 0x31) & 4) != 0)) {
    bVar10 = bVar3 | 6;
    if ((bVar3 & 4) == 0) {
      bVar10 = bVar3;
    }
    if ((char)bVar10 < '\0') {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x80;
      bVar10 = bVar10 | 1;
    }
    if (((*(byte *)((longlong)param_1 + 0x31) & 0x40) == 0) || ((bVar10 & 8) != 0)) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 0x80;
      bVar10 = bVar10 | 0x81;
    }
    if ((bVar10 & 4) == 0) {
      cVar6 = FUN_1400d1184(param_1 + 3,param_1);
      if (cVar6 != '\0') {
LAB_140163323:
        FUN_14693554a(param_1 + 3,bVar10);
        return;
      }
    }
    else {
      bVar3 = *(byte *)(param_1 + 6);
      bVar9 = 0x20;
      bVar7 = bVar3;
      if ((bVar3 & 0x10) == 0) {
        cVar6 = (**(code **)(*param_1 + 0x220))(param_1);
        bVar9 = cVar6 << 5;
        bVar7 = *(byte *)(param_1 + 6);
      }
      *(byte *)(param_1 + 6) = bVar7 & 0xdf | bVar9;
      cVar6 = FUN_1400d1184(param_1 + 3,param_1);
      if (cVar6 != '\0') {
        if ((bool)((bVar3 & 0x20) >> 5) != (bVar9 != 0)) {
          plVar4 = (longlong *)param_1[0x39];
          if (plVar4 == (longlong *)0x0) {
LAB_140163319:
            FUN_14287b63c(param_1,0);
          }
          else {
            iVar8 = (int)plVar4[1];
            do {
              if (iVar8 == 0) goto LAB_140163319;
              LOCK();
              iVar5 = (int)plVar4[1];
              bVar11 = iVar8 == iVar5;
              if (bVar11) {
                *(int *)(plVar4 + 1) = iVar8 + 1;
                iVar5 = iVar8;
              }
              iVar8 = iVar5;
              UNLOCK();
            } while (!bVar11);
            if (param_1[0x38] == 0) {
              bVar7 = 0;
            }
            else {
              bVar3 = *(byte *)(param_1[0x38] + 0x30);
              bVar7 = 1;
              if ((bVar3 & 0x20) == 0) {
                bVar7 = (bVar3 & 0x40) >> 6;
              }
            }
            FUN_14287b63c(param_1,bVar7);
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
        goto LAB_140163323;
      }
    }
  }
  return;
}



// FUNCTION 146973f74 FUN_146973f74 body=403 status=ok
// SIG undefined FUN_146973f74(void)

undefined8 FUN_146973f74(float *param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  float local_50;
  float fStack_4c;
  double local_48;
  undefined4 local_3c;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3c = *(undefined4 *)(param_2 + 8);
  local_38 = param_3;
  FUN_1401a700c(&local_50,0x5b);
  cVar3 = FUN_1468ec2ac(&local_3c,local_50);
  if (cVar3 == '\0') {
    local_3c = *(undefined4 *)(param_2 + 8);
    FUN_1401a700c(&local_50,0x5a);
    cVar3 = FUN_1468ec2ac(&local_3c,local_50);
    if (cVar3 == '\0') {
      local_3c = *(undefined4 *)(param_2 + 8);
      FUN_1401a700c(&local_50,0x36);
      cVar3 = FUN_1468ec2ac(&local_3c,local_50);
      if (cVar3 == '\0') {
        uVar4 = 0;
        goto LAB_146974029;
      }
      lVar5 = FUN_144aff0e0(&local_38);
      puVar2 = local_38;
      if (0x3eb < *(int *)(lVar5 + 0x44)) {
        FUN_146974108(local_38,&local_50);
        dVar1 = (double)CONCAT44(fStack_4c,local_50);
        goto LAB_1469740dd;
      }
      FUN_144aa025c(*local_38,&local_50);
      FUN_144aa025c(*puVar2,&fStack_4c);
      *param_1 = local_50;
    }
    else {
      FUN_144aa025c(*param_3,&local_50);
      FUN_144aa025c(*param_3,&fStack_4c);
      *param_1 = local_50;
    }
    param_1[1] = fStack_4c;
  }
  else {
    FUN_146974108(param_3,&local_50);
    dVar1 = (double)CONCAT44(fStack_4c,local_50);
LAB_1469740dd:
    *param_1 = (float)dVar1;
    param_1[1] = (float)local_48;
  }
  uVar4 = 1;
LAB_146974029:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146974108 FUN_146974108 body=157 status=ok
// SIG undefined FUN_146974108(void)

void FUN_146974108(undefined8 *param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_1;
  lVar1 = FUN_144aff0e0();
  if (*(int *)(lVar1 + 0x44) < 0x3ec) {
    FUN_144aa025c(*param_1,&local_2c);
    FUN_144aa025c(*param_1,&local_30);
    *param_2 = (double)local_2c;
    param_2[1] = (double)local_30;
  }
  else {
    FUN_144aa029c(*param_1,param_2);
    FUN_144aa029c(*param_1,param_2 + 1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469741a6 FUN_1469741a6 body=198 status=ok
// SIG undefined FUN_1469741a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1469741a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98d990) {
    FUN_144b3d300(&DAT_14c98d990);
    if (DAT_14c98d990 == -1) {
      DAT_14c98d910 = 0;
      DAT_14c98d918 = 0;
      DAT_14c98d8f0 = 0;
      _DAT_14c98d8f8 = 0;
      _DAT_14c98d91c = 0xffffffff00000080;
      DAT_14c98d924 = 0;
      DAT_14c98d930 = 0;
      DAT_14c98d938 = 0;
      DAT_14c98d960 = 0;
      DAT_14c98d968 = 0;
      DAT_14c98d940 = 0;
      _DAT_14c98d948 = 0;
      _DAT_14c98d96c = 0xffffffff00000080;
      DAT_14c98d974 = 0;
      DAT_14c98d980 = 0;
      DAT_14c98d988 = 0;
      atexit((_func_5014 *)&LAB_142879939);
      _Init_thread_footer(&DAT_14c98d990);
      return;
    }
  }
  return;
}



// FUNCTION 14697426c FUN_14697426c body=229 status=ok
// SIG undefined FUN_14697426c(void)

undefined8 * FUN_14697426c(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_149eee520;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1469741a6();
  iVar3 = (**(code **)(*DAT_14c98d8e0 + 0xb0))();
  if ((param_3 != 0 && param_2 != 0) && iVar3 == 1) {
    param_1[1] = param_2;
    iVar3 = *(int *)(param_1 + 3);
    *(uint *)(param_1 + 3) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
      FUN_1446f84a2(param_1 + 2,iVar3);
    }
    *(longlong *)(param_1[2] + (longlong)iVar3 * 8) = param_3;
    FUN_1469741a6();
    lVar1 = param_1[1];
    iVar3 = (**(code **)(*DAT_14c98d8e0 + 0xb0))();
    if (((lVar1 != 0) && (iVar3 == 1)) && (iVar3 = *(int *)(param_1 + 3), (longlong)iVar3 != 0)) {
      lVar2 = param_1[2];
      lVar4 = 0;
      do {
        FUN_146977374(lVar1,*(undefined8 *)(lVar2 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar3 * 8 != lVar4);
    }
  }
  return param_1;
}



// FUNCTION 146974352 FUN_146974352 body=86 status=ok
// SIG undefined FUN_146974352(void)

void FUN_146974352(undefined8 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_149eee520;
  FUN_1469741a6();
  iVar1 = (**(code **)(*DAT_14c98d8e0 + 0xb0))();
  if (iVar1 == 1) {
    FUN_1469741a6();
    FUN_1469743a8(param_1[1]);
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1469743a8 FUN_1469743a8 body=575 status=ok
// SIG undefined FUN_1469743a8(void)

void FUN_1469743a8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_1;
  iVar5 = (**(code **)(*DAT_14c98d8e0 + 0xb0))();
  if ((param_1 != 0) && (iVar5 == 1)) {
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    FUN_1469774e2(&local_68);
    if ((longlong)(int)uStack_60 != 0) {
      plVar1 = local_68 + (int)uStack_60;
      plVar8 = local_68;
      do {
        if (DAT_14c98d8f8 != DAT_14c98d924) {
          lVar4 = *plVar8;
          uVar9 = (uint)((ulonglong)lVar4 >> 0x10);
          uVar7 = (uint)lVar4 & 0xffff;
          puVar6 = DAT_14c98d930;
          if (DAT_14c98d930 == (undefined *)0x0) {
            puVar6 = &DAT_14c98d928;
          }
          iVar5 = *(int *)(puVar6 + (ulonglong)
                                    (DAT_14c98d938 - 1U &
                                    (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7)
                                    + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4)) * 4);
          while (iVar5 != -1) {
            lVar2 = DAT_14c98d8f0 + (longlong)iVar5 * 0x20;
            if (*(longlong *)(DAT_14c98d8f0 + (longlong)iVar5 * 0x20) == lVar4) {
              if (lVar2 + 8 != 0 && lVar2 != 0) {
                local_48 = &local_50;
                FUN_14697c0da(lVar2 + 8,&local_48);
                if (*(int *)(lVar2 + 0x10) == 0) {
                  FUN_14697c1a4(*plVar8);
                }
                if (DAT_14c98d948 != DAT_14c98d974) {
                  lVar4 = *plVar8;
                  uVar9 = (uint)((ulonglong)lVar4 >> 0x10);
                  uVar7 = (uint)lVar4 & 0xffff;
                  uVar9 = (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar7) +
                          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4);
                  puVar6 = DAT_14c98d980;
                  if (DAT_14c98d980 == (undefined *)0x0) {
                    puVar6 = &DAT_14c98d978;
                  }
                  iVar5 = *(int *)(puVar6 + (ulonglong)(DAT_14c98d988 - 1U & uVar9) * 4);
                  goto joined_r0x00014697459f;
                }
              }
              break;
            }
            iVar5 = *(int *)(lVar2 + 0x18);
          }
        }
LAB_14697445e:
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
    }
    FUN_14287a62e(&local_68);
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
joined_r0x00014697459f:
  if (iVar5 == -1) goto LAB_14697445e;
  plVar3 = (longlong *)(DAT_14c98d940 + (longlong)iVar5 * 0x28);
  if (*plVar3 == lVar4) {
    if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
      FUN_14697bfb4(plVar3 + 1,local_50,plVar8,CONCAT71((uint7)(uint3)(uVar9 >> 8),1));
    }
    goto LAB_14697445e;
  }
  iVar5 = (int)plVar3[4];
  goto joined_r0x00014697459f;
}



// FUNCTION 1469745f0 FUN_1469745f0 body=19 status=ok
// SIG undefined FUN_1469745f0(void)

void FUN_1469745f0(void)

{
  FUN_14697a686();
  FUN_14697aa30();
  return;
}



// FUNCTION 146974604 FUN_146974604 body=334 status=ok
// SIG undefined FUN_146974604(void)

longlong * FUN_146974604(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 9) == '\x01') {
    (**(code **)(*DAT_14c968098 + 0x40))(DAT_14c968098,&local_40);
    FUN_14054cb04(&local_30,&local_40,param_3);
    FUN_1401b439d(local_40,local_38);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_50 = local_30;
    local_48 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    FUN_146974758(&local_40,&local_50);
    *param_2 = local_40;
    lVar3 = CONCAT44(uStack_34,local_38);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
      plVar4 = (longlong *)CONCAT44(uStack_34,local_38);
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
    plVar4 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_28 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)local_28 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_28 + 0x10))(local_28);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146974758 FUN_146974758 body=244 status=ok
// SIG undefined FUN_146974758(void)

undefined8 * FUN_146974758(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != 0) {
    cVar4 = FUN_14697fb6e();
    if (cVar4 != '\0') {
      local_38 = *param_2;
      local_30 = (longlong *)param_2[1];
      if (local_30 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
      }
      FUN_146974fce(&local_28,&local_38);
      *param_1 = local_28;
      param_1[1] = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        if (local_20 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_20 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_20)(local_20);
            LOCK();
            piVar2 = (int *)((longlong)local_20 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_20 + 0x10))(local_20);
            }
          }
        }
      }
      plVar1 = local_30;
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
      if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14697484e FUN_14697484e body=131 status=ok
// SIG undefined FUN_14697484e(void)

undefined4 FUN_14697484e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,&local_28,param_2);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 8))();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469748d2 FUN_1469748d2 body=147 status=ok
// SIG undefined FUN_1469748d2(void)

undefined8 * FUN_1469748d2(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146974968(&local_28,param_3);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146974968 FUN_146974968 body=139 status=ok
// SIG undefined FUN_146974968(void)

void FUN_146974968(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  
  if (DAT_14c98d888 != DAT_14c98d8b4) {
    puVar3 = &DAT_14c98d8b8;
    if (DAT_14c98d8c0 != (undefined *)0x0) {
      puVar3 = DAT_14c98d8c0;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(DAT_14c98d8c8 - 1U & param_2) * 4);
    while (iVar2 != -1) {
      lVar1 = DAT_14c98d880 + (longlong)iVar2 * 0x20;
      if (*(uint *)(DAT_14c98d880 + (longlong)iVar2 * 0x20) == param_2) {
        if ((lVar1 + 8U & 0xfffffffffffffff7) != 0) {
          *param_1 = *(undefined8 *)(lVar1 + 8);
          lVar1 = *(longlong *)(lVar1 + 0x10);
          param_1[1] = lVar1;
          if (lVar1 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      iVar2 = *(int *)(lVar1 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1469749f4 FUN_1469749f4 body=139 status=ok
// SIG undefined FUN_1469749f4(void)

longlong * FUN_1469749f4(longlong *param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  
  lVar2 = *param_1;
  lVar11 = (longlong)(int)param_1[1] * 0x50;
  lVar3 = *(longlong *)(lVar2 + -0x50 + lVar11);
  *param_2 = lVar3;
  param_2[2] = *(longlong *)(lVar2 + -0x40 + lVar11);
  *(undefined8 *)(lVar2 + -0x40 + lVar11) = 0;
  puVar1 = (undefined4 *)(lVar2 + -0x30 + lVar11);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (undefined4 *)(lVar2 + -0x20 + lVar11);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  *(undefined4 *)(param_2 + 6) = *puVar1;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar8;
  *(undefined4 *)(param_2 + 7) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar10;
  *(undefined4 *)(param_2 + 4) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
  *(undefined4 *)(param_2 + 5) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar7;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar2 + lVar11 + -0x50) = 0;
  }
  param_2[8] = *(longlong *)(lVar2 + lVar11 + -0x10);
  FUN_14697a336(param_1,(int)param_1[1] + -1);
  if (param_3 == '\x01') {
    FUN_14697a3a0(param_1);
  }
  return param_2;
}



// FUNCTION 146974a80 FUN_146974a80 body=292 status=ok
// SIG undefined FUN_146974a80(void)

longlong * FUN_146974a80(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (DAT_14c98d838 != DAT_14c98d864) {
    uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    puVar8 = &DAT_14c98d868;
    if (DAT_14c98d870 != (undefined *)0x0) {
      puVar8 = DAT_14c98d870;
    }
    iVar4 = *(int *)(puVar8 + (ulonglong)(DAT_14c98d878 - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    while (iVar4 != -1) {
      lVar3 = DAT_14c98d830 + (longlong)iVar4 * 0x20;
      if (*(ulonglong *)(DAT_14c98d830 + (longlong)iVar4 * 0x20) == param_2) {
        if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
          lVar5 = *(longlong *)(lVar3 + 8);
          plVar6 = *(longlong **)(lVar3 + 0x10);
          if (plVar6 == (longlong *)0x0) {
            FUN_14697ada6(param_2);
            FUN_14697af5c(*(undefined4 *)(lVar5 + 100));
            *param_1 = lVar5;
            param_1[1] = 0;
            return param_1;
          }
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          FUN_14697ada6(param_2);
          FUN_14697af5c(*(undefined4 *)(lVar5 + 100));
          *param_1 = lVar5;
          param_1[1] = (longlong)plVar6;
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar6 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_1;
          }
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_1;
          }
          (**(code **)(*plVar6 + 0x10))(plVar6);
          return param_1;
        }
        break;
      }
      iVar4 = *(int *)(lVar3 + 0x18);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 146974ba4 FUN_146974ba4 body=313 status=ok
// SIG undefined FUN_146974ba4(void)

undefined8 *
FUN_146974ba4(undefined8 *param_1,undefined8 *param_2,undefined1 param_3,undefined4 *param_4,
             undefined4 *param_5,undefined4 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined4 *)(param_1 + 3) = *param_4;
  param_1[4] = 0;
  iVar3 = param_4[4];
  pvVar5 = *(void **)(param_4 + 2);
  *(int *)(param_1 + 5) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 4,iVar3,0);
    memcpy((void *)param_1[4],pvVar5,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 6) = *param_5;
  param_1[7] = 0;
  iVar3 = param_5[4];
  pvVar5 = *(void **)(param_5 + 2);
  *(int *)(param_1 + 8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 7,iVar3,0);
    memcpy((void *)param_1[7],pvVar5,(longlong)iVar3);
  }
  *(undefined4 *)(param_1 + 9) = param_6;
  plVar6 = (longlong *)param_2[1];
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
  if (*(longlong *)(param_4 + 2) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_5 + 2) != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 146974cde FUN_146974cde body=87 status=ok
// SIG undefined FUN_146974cde(void)

void FUN_146974cde(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000146974d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146974d36 FUN_146974d36 body=572 status=ok
// SIG undefined FUN_146974d36(void)

void FUN_146974d36(longlong param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  longlong local_90;
  longlong *local_88;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_3 == '\0') {
    cVar6 = (**(code **)(*(longlong *)*param_2 + 0x98))();
    if (cVar6 == '\0') {
      FUN_14171d2aa(local_a8,0);
      FUN_14171d2aa(local_c0,1);
      local_d0 = *param_2;
      local_c8 = param_2[1];
      if (local_c8 != 0) {
        LOCK();
        *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
        UNLOCK();
      }
      local_e8 = local_a8;
      local_e0 = param_4;
      FUN_146974ba4(&local_90,&local_d0,0,local_c0);
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_90);
      }
      FUN_146974cde(&local_90);
    }
  }
  else {
    FUN_146913240(*(undefined8 *)(param_1 + 0x20),&local_90,param_4);
    cVar6 = (**(code **)(*(longlong *)*param_2 + 0x98))();
    if ((((cVar6 == '\0') && (cVar6 = (**(code **)(*(longlong *)*param_2 + 0xa0))(), cVar6 != '\0'))
        && (*(longlong *)(local_90 + 0x10) != 0)) &&
       ((plVar3 = *(longlong **)(local_90 + 0x18), plVar3 != (longlong *)0x0 && (0 < (int)plVar3[1])
        ))) {
      iVar7 = (int)plVar3[1];
      do {
        if (iVar7 == 0) goto LAB_146974df9;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar7 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar9);
      lVar4 = *(longlong *)(local_90 + 0x10);
      if ((lVar4 != 0) && (lVar4 != *param_2)) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_40 = lVar4;
        local_38 = plVar3;
        FUN_146974d36(param_1,&local_40,0,param_4);
        plVar8 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_38 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
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
LAB_146974df9:
    *(longlong *)(local_90 + 0x10) = *param_2;
    plVar3 = (longlong *)param_2[1];
    plVar8 = *(longlong **)(local_90 + 0x18);
    if (plVar8 != plVar3) {
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar8 = *(longlong **)(local_90 + 0x18);
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
      *(longlong **)(local_90 + 0x18) = plVar3;
    }
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_88 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146974f74 FUN_146974f74 body=90 status=ok
// SIG undefined FUN_146974f74(void)

undefined8 * FUN_146974f74(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) || (lVar2 = *(longlong *)(param_1 + 0x18), lVar2 == 0))
     || (*(int *)(lVar2 + 8) < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = lVar2;
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x10);
    }
  }
  return param_2;
}



// FUNCTION 146974fce FUN_146974fce body=410 status=ok
// SIG undefined FUN_146974fce(void)

longlong * FUN_146974fce(longlong *param_1,ulonglong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  int local_3c;
  ulonglong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)*param_2;
  if (DAT_14c98d838 != DAT_14c98d864) {
    uVar5 = ((uint)((ulonglong)plVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar4 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar6 = &DAT_14c98d868;
    if (DAT_14c98d870 != (undefined *)0x0) {
      puVar6 = DAT_14c98d870;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)(DAT_14c98d878 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    while (iVar3 != -1) {
      lVar2 = DAT_14c98d830 + (longlong)iVar3 * 0x20;
      if (*(longlong **)(DAT_14c98d830 + (longlong)iVar3 * 0x20) == plVar4) {
        if ((lVar2 != 0) && (lVar2 != -8)) {
          *param_1 = *(longlong *)(lVar2 + 8);
          lVar2 = *(longlong *)(lVar2 + 0x10);
          param_1[1] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          goto LAB_146975145;
        }
        break;
      }
      iVar3 = *(int *)(lVar2 + 0x18);
    }
  }
  (**(code **)(*plVar4 + 0x150))(plVar4,local_50);
  local_58 = *param_2;
  local_38 = &local_58;
  local_30 = (longlong *)local_50;
  FUN_14697b0ea(&local_3c);
  lVar2 = DAT_14c98d830;
  *param_1 = *(longlong *)(DAT_14c98d830 + 8 + (longlong)local_3c * 0x20);
  lVar2 = *(longlong *)(lVar2 + 0x10 + (longlong)local_3c * 0x20);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(*param_1 + 100));
  local_38 = &local_58;
  local_30 = param_1;
  FUN_14697b426(local_50);
LAB_146975145:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697516a FUN_14697516a body=95 status=ok
// SIG undefined FUN_14697516a(void)

void FUN_14697516a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1413f6722(param_1,iVar2);
    }
    FUN_1401b4712((longlong)iVar2 * 0x10 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1469751ca FUN_1469751ca body=169 status=ok
// SIG undefined FUN_1469751ca(void)

undefined8 * FUN_1469751ca(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *_Dst;
  int iVar5;
  
  lVar2 = *param_1;
  lVar4 = (longlong)(int)param_1[1] * 0x20;
  *param_2 = *(undefined8 *)(lVar2 + -0x20 + lVar4);
  param_2[1] = *(undefined8 *)(lVar2 + -0x18 + lVar4);
  puVar1 = (undefined8 *)(lVar2 + -0x20 + lVar4);
  *puVar1 = 0;
  puVar1[1] = 0;
  param_2[2] = *(undefined8 *)(lVar2 + -0x10 + lVar4);
  lVar2 = *(longlong *)(lVar2 + -8 + lVar4);
  param_2[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar5 = (int)param_1[1];
  lVar2 = *param_1;
  _Dst = (void *)(lVar2 + (longlong)iVar5 * 0x20 + -0x20);
  FUN_1469755c0(_Dst);
  iVar3 = (int)param_1[1] - iVar5;
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar2 + (longlong)iVar5 * 0x20),(longlong)iVar3 << 5);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return param_2;
}



// FUNCTION 146975274 FUN_146975274 body=843 status=ok
// SIG undefined FUN_146975274(void)

void FUN_146975274(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  longlong local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [80];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
LAB_1469752de:
    lVar8 = *param_2;
    lVar10 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469752de;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar5 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar7 = iVar5;
      }
      iVar5 = iVar7;
      UNLOCK();
    } while (!bVar11);
    lVar10 = *(longlong *)(param_1 + 0x30);
    lVar8 = *param_2;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if (lVar10 == lVar8) goto LAB_1469752e9;
  lVar10 = *(longlong *)(DAT_14c968098 + 200);
  plVar3 = *(longlong **)(DAT_14c968098 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  plVar9 = (longlong *)*param_2;
  uVar6 = 0xffffffff;
  if (plVar9 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar9 + 8))(plVar9,0xffffffff);
  }
  FUN_146918b6a(local_a8,uVar6);
  local_e8 = local_a8;
  if (((*(longlong *)(param_1 + 0x30) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x38), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1))
  {
    FUN_146918b6a(local_c0,0xffffffff);
    local_c8 = *(longlong *)(param_1 + 0x10);
    if (local_c8 == 0) {
      local_c8 = 0;
      local_d0 = 0;
    }
    else {
      iVar5 = *(int *)(local_c8 + 8);
      local_d0 = 0;
      do {
        if (iVar5 == 0) {
          local_c8 = 0;
          goto LAB_1469753de;
        }
        LOCK();
        iVar7 = *(int *)(local_c8 + 8);
        bVar11 = iVar5 == iVar7;
        if (bVar11) {
          *(int *)(local_c8 + 8) = iVar5 + 1;
          iVar7 = iVar5;
        }
        iVar5 = iVar7;
        UNLOCK();
      } while (!bVar11);
      local_d0 = *(undefined8 *)(param_1 + 8);
    }
LAB_1469753de:
    local_e0 = 0;
    FUN_146974ba4(local_90,&local_d0,CONCAT71((int7)((ulonglong)local_d0 >> 8),3),local_c0);
    if ((*(int *)(lVar10 + 0x18) != 0) &&
       (plVar9 = *(longlong **)(lVar10 + 0x10), plVar9 != (longlong *)0x0)) {
      (**(code **)(*plVar9 + 0x60))(plVar9,local_90);
    }
    FUN_146974cde(local_90);
  }
  else {
    lVar8 = 0;
    iVar5 = (int)plVar9[1];
    do {
      iVar7 = iVar5;
      if (iVar7 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1469754f8;
      }
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar11 = iVar7 == iVar5;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar8 = *(longlong *)(param_1 + 0x30);
LAB_1469754f8:
    FUN_146918b6a(local_c0,*(undefined4 *)(lVar8 + 100));
    local_c8 = *(longlong *)(param_1 + 0x10);
    if (local_c8 == 0) {
      local_c8 = 0;
      local_d0 = 0;
    }
    else {
      iVar5 = *(int *)(local_c8 + 8);
      local_d0 = 0;
      do {
        if (iVar5 == 0) {
          local_c8 = 0;
          goto LAB_146975517;
        }
        LOCK();
        iVar2 = *(int *)(local_c8 + 8);
        bVar11 = iVar5 == iVar2;
        if (bVar11) {
          *(int *)(local_c8 + 8) = iVar5 + 1;
          iVar2 = iVar5;
        }
        iVar5 = iVar2;
        UNLOCK();
      } while (!bVar11);
      local_d0 = *(undefined8 *)(param_1 + 8);
    }
LAB_146975517:
    local_e0 = 0;
    FUN_146974ba4(local_90,&local_d0,CONCAT71((int7)((ulonglong)local_d0 >> 8),3),local_c0);
    if ((*(int *)(lVar10 + 0x18) != 0) &&
       (plVar4 = *(longlong **)(lVar10 + 0x10), plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x60))(plVar4,local_90);
    }
    FUN_146974cde(local_90);
    if (iVar7 != 0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar10 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0x30) = lVar10;
    plVar9 = *(longlong **)(param_1 + 0x38);
    if (plVar9 == (longlong *)0x0) goto LAB_1469752e9;
LAB_146975477:
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
    *(longlong **)(param_1 + 0x38) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_1469752e9;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0x30) = lVar10;
    if (*(longlong **)(param_1 + 0x38) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar9 = *(longlong **)(param_1 + 0x38);
      if (plVar9 != (longlong *)0x0) goto LAB_146975477;
      *(longlong **)(param_1 + 0x38) = plVar3;
    }
  }
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_1469752e9:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1469755c0 FUN_1469755c0 body=83 status=ok
// SIG undefined FUN_1469755c0(void)

void FUN_1469755c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146975607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 146975614 FUN_146975614 body=169 status=ok
// SIG undefined FUN_146975614(void)

undefined8 * FUN_146975614(undefined8 *param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0x100000000;
  local_28 = &DAT_14c98d840;
  local_20 = 0xffffffff;
  local_18 = 0;
  if (DAT_14c98d858 != 0) {
    FUN_1449c0562(&local_30);
  }
  param_1[3] = local_20;
  *(undefined4 *)(param_1 + 4) = local_18;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_14;
  param_1[1] = local_30;
  param_1[2] = local_28;
  *param_1 = &DAT_14c98d830;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469756be FUN_1469756be body=80 status=ok
// SIG undefined FUN_1469756be(void)

longlong * FUN_1469756be(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_14697a64f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 14697570e FUN_14697570e body=583 status=ok
// SIG undefined FUN_14697570e(void)

void FUN_14697570e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *_Src;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  undefined4 local_110;
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [24];
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  longlong local_88;
  longlong *local_80;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 9) == '\x01') {
    (**(code **)(*DAT_14c968098 + 0x30))(DAT_14c968098,&local_88);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_80 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar1 = (int *)((longlong)local_80 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
          }
        }
      }
    }
    if (local_88 != 0) {
      local_b0 = (void *)0x0;
      local_a8 = *(int *)(param_2 + 1);
      lVar4 = (longlong)local_a8;
      _Src = (void *)*param_2;
      if (lVar4 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_a8,0);
        memcpy(local_b0,_Src,lVar4 * 2);
      }
      FUN_146918c70(local_a0,&local_b0);
      local_d8 = 0;
      uStack_d0 = 0;
      FUN_146918c70(local_c8);
      local_108 = local_88;
      local_100 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      FUN_146974fce(&local_f8,&local_108);
      local_e8 = local_f8;
      local_e0 = local_f0;
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
        UNLOCK();
      }
      local_110 = 0;
      local_118 = local_a0;
      FUN_146974ba4(&local_88,&local_e8,2,local_c8);
      if ((*(int *)(param_1 + 0x18) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,&local_88);
      }
      FUN_146974cde(&local_88);
      if (local_f0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_f0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)local_f0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_f0 + 0x10))(local_f0);
          }
        }
      }
      plVar3 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_100 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_80 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697595a FUN_14697595a body=141 status=ok
// SIG undefined FUN_14697595a(void)

undefined8 * FUN_14697595a(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149eee6b0;
  param_1[3] = *param_2;
  lVar2 = param_2[1];
  param_1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  if (DAT_14c98d8d0 == -1) {
    DAT_14c98d8d0 = 0;
  }
  else if (DAT_14c98d8d0 == 0x7fffffff) {
    DAT_14c98d8d0 = -0x80000000;
  }
  iVar4 = DAT_14c98d8d0 + 1;
  *(int *)((longlong)param_1 + 100) = DAT_14c98d8d0;
  DAT_14c98d8d0 = iVar4;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 146975a04 FUN_146975a04 body=328 status=ok
// SIG undefined FUN_146975a04(void)

undefined8 * FUN_146975a04(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_146975b25;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    plVar8 = *(longlong **)(param_1 + 0x18);
    while (plVar4 = plVar3, plVar8 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar8 + 0x200))(plVar8);
      if (cVar6 != '\0') {
        *param_2 = plVar8;
        param_2[1] = plVar4;
        if (plVar4 == (longlong *)0x0) {
          return param_2;
        }
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        bVar10 = false;
        goto LAB_146975b04;
      }
      plVar9 = (longlong *)plVar8[0x39];
      if (plVar9 == (longlong *)0x0) {
LAB_146975a90:
        plVar9 = (longlong *)0x0;
        plVar8 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_146975a90;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar7 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar8 = (longlong *)plVar8[0x38];
      }
      if (plVar9 == plVar4) {
        if (plVar4 == (longlong *)0x0) {
          plVar3 = (longlong *)0x0;
        }
        else {
          LOCK();
          plVar2 = plVar9 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          plVar3 = plVar4;
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            plVar4 = plVar9;
            goto joined_r0x000146975ad7;
          }
        }
      }
      else {
        plVar3 = plVar9;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar4 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
joined_r0x000146975ad7:
            if (iVar7 == 0) {
              (**(code **)(*plVar4 + 0x10))();
            }
          }
        }
      }
    }
    bVar10 = true;
    if (plVar4 != (longlong *)0x0) {
LAB_146975b04:
      LOCK();
      plVar3 = plVar4 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (!bVar10) {
        return param_2;
      }
    }
  }
LAB_146975b25:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146975b4c FUN_146975b4c body=266 status=ok
// SIG undefined FUN_146975b4c(void)

undefined8 * FUN_146975b4c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_146975a04(param_1,&local_48);
  local_38 = local_48;
  local_30 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  FUN_146974758(&local_28,&local_38);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar2 = (int *)((longlong)local_20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_20 + 0x10))(local_20);
        }
      }
    }
  }
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146975c5a FUN_146975c5a body=312 status=ok
// SIG undefined FUN_146975c5a(void)

double * FUN_146975c5a(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x20), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1))
  {
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[4] = 0.0;
  }
  else {
    iVar11 = (int)plVar9[1];
    do {
      if (iVar11 == 0) {
        pfVar12 = (float *)FUN_144b013e4(0);
        goto LAB_146975cf1;
      }
      LOCK();
      iVar10 = (int)plVar9[1];
      bVar13 = iVar11 == iVar10;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar11 + 1;
        iVar10 = iVar11;
      }
      iVar11 = iVar10;
      UNLOCK();
    } while (!bVar13);
    pfVar12 = (float *)FUN_144b013e4(*(undefined8 *)(param_1 + 0x18));
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
LAB_146975cf1:
    fVar3 = pfVar12[8];
    fVar4 = pfVar12[10];
    fVar5 = pfVar12[7];
    fVar6 = pfVar12[9];
    fVar15 = (float)DAT_14c84635c * fVar3 + DAT_14c84635c._4_4_ * fVar4 + pfVar12[0xc];
    fVar14 = (float)DAT_14c84635c * fVar5 + DAT_14c84635c._4_4_ * fVar6 + pfVar12[0xb];
    fVar7 = *pfVar12;
    fVar8 = pfVar12[1];
    *param_2 = (double)fVar14;
    param_2[1] = (double)fVar15;
    param_2[2] = (double)(fVar7 * fVar5 + fVar6 * fVar8 + fVar14);
    param_2[3] = (double)(fVar3 * fVar7 + fVar4 * fVar8 + fVar15);
    *(undefined1 *)(param_2 + 4) = 1;
  }
  return param_2;
}



// FUNCTION 146975d92 FUN_146975d92 body=119 status=ok
// SIG undefined FUN_146975d92(void)

undefined8 * FUN_146975d92(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_14697e77c(0,param_2);
        return param_2;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_14697e77c(*(undefined8 *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 146975e0a FUN_146975e0a body=415 status=ok
// SIG undefined FUN_146975e0a(void)

undefined8 * FUN_146975e0a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Src;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar7 = *(longlong **)(param_1 + 0x20), plVar7 == (longlong *)0x0)) || ((int)plVar7[1] < 1))
  {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  uVar8 = 0;
  iVar5 = (int)plVar7[1];
  do {
    iVar4 = iVar5;
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      goto LAB_146975e86;
    }
    LOCK();
    iVar5 = (int)plVar7[1];
    bVar9 = iVar4 == iVar5;
    if (bVar9) {
      *(int *)(plVar7 + 1) = iVar4 + 1;
      iVar5 = iVar4;
    }
    UNLOCK();
  } while (!bVar9);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
LAB_146975e86:
  FUN_14697f6be(uVar8,local_48,0);
  cVar3 = FUN_144a7c5f6(local_48);
  if (cVar3 == '\0') {
    puVar6 = (undefined8 *)FUN_1447a1f4a(local_48);
    *param_2 = 0;
    iVar5 = *(int *)(puVar6 + 1);
    _Src = (void *)*puVar6;
    *(int *)(param_2 + 1) = iVar5;
    if ((longlong)iVar5 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar5,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar5 * 2);
    }
  }
  else {
    FUN_146975faa(uVar8,&local_58);
    if (local_58 == 0) {
      FUN_146975d92(param_1,param_2);
    }
    else {
      FUN_1400021e4(local_58 + 8,param_2);
    }
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_50 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar2 = (int *)((longlong)local_50 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_50 + 0x10))(local_50);
        }
      }
    }
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (iVar4 != 0) {
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146975faa FUN_146975faa body=169 status=ok
// SIG undefined FUN_146975faa(void)

undefined8 * FUN_146975faa(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      uVar7 = FUN_14697b738();
      cVar6 = (**(code **)(*plVar5 + 8))(plVar5,uVar7);
      if (cVar6 != '\0') {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar7;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar7;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146976054 FUN_146976054 body=482 status=ok
// SIG undefined FUN_146976054(void)

undefined8 * FUN_146976054(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58 [2];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (plVar6 = *(longlong **)(param_1 + 0x20), plVar6 != (longlong *)0x0)) && (0 < (int)plVar6[1]))
  {
    plVar5 = (longlong *)0x0;
    iVar3 = (int)plVar6[1];
    do {
      iVar2 = iVar3;
      if (iVar2 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_1469760a9;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar7 = iVar2 == iVar3;
      if (bVar7) {
        *(int *)(plVar6 + 1) = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
    } while (!bVar7);
    plVar5 = *(longlong **)(param_1 + 0x18);
LAB_1469760a9:
    bVar7 = true;
    if (*(char *)((longlong)plVar5 + 0x33) != '\x04') {
      (**(code **)(*plVar5 + 0x1b0))(plVar5,&local_48);
      if (local_48 == (longlong *)0x0) {
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
      else {
        (**(code **)(*local_48 + 8))(local_48,&local_68);
        FUN_14697f6be(local_68,local_58,0);
        puVar4 = (undefined8 *)FUN_1447a1f4a(local_58);
        *param_2 = 0;
        iVar3 = *(int *)(puVar4 + 1);
        _Src = (void *)*puVar4;
        *(int *)(param_2 + 1) = iVar3;
        if ((longlong)iVar3 == 0) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(param_2,iVar3,0);
          memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
        }
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_60 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_40 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
        bVar7 = false;
      }
    }
    if (iVar2 != 0) {
      LOCK();
      plVar5 = plVar6 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (!bVar7) goto LAB_1469760de;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_1469760de:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146976238 FUN_146976238 body=105 status=ok
// SIG undefined FUN_146976238(void)

ulonglong FUN_146976238(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
      if (iVar5 == 0) {
        uVar6 = CONCAT71(uVar7,DAT_0000003a);
        goto LAB_14697628e;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = CONCAT71(uVar7,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x3a));
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
LAB_14697628e:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1469762a2 FUN_1469762a2 body=109 status=ok
// SIG undefined FUN_1469762a2(void)

ulonglong FUN_1469762a2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  bool bVar8;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if (((*(longlong *)(param_1 + 0x18) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1]))
  {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        uVar6 = CONCAT71(uVar7,(DAT_00000039 & 0x19) == 0);
        goto LAB_146976306;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = CONCAT71(uVar7,(*(byte *)(*(longlong *)(param_1 + 0x18) + 0x39) & 0x19) == 0);
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
LAB_146976306:
  return uVar6 & 0xffffffff;
}



// FUNCTION 146976310 FUN_146976310 body=125 status=ok
// SIG undefined FUN_146976310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146976310(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146976386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 400))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 400))();
    uVar7 = (ulonglong)uVar6;
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
  return uVar7;
}



// FUNCTION 146976392 FUN_146976392 body=37 status=ok
// SIG undefined FUN_146976392(void)

ulonglong FUN_146976392(undefined8 param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_146976238();
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1469762a2(param_1);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}



// FUNCTION 1469763b8 FUN_1469763b8 body=407 status=ok
// SIG undefined FUN_1469763b8(void)

ulonglong FUN_1469763b8(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(DAT_14c968098 + 200);
  plVar9 = *(longlong **)(DAT_14c968098 + 0xd0);
  if (plVar9 == (longlong *)0x0) {
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    uVar8 = *(undefined8 *)(lVar7 + 0x20);
    LOCK();
    plVar3 = plVar9 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  FUN_146913240(uVar8,&local_40,param_2);
  if (local_40 == 0) {
    uVar10 = 0;
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x10);
    bVar4 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      lVar7 = 0;
    }
    else {
      iVar6 = (int)plVar9[1];
      lVar7 = 0;
      do {
        if (iVar6 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_1469764b3;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar11);
      lVar7 = *(longlong *)(param_1 + 8);
      bVar4 = false;
    }
LAB_1469764b3:
    if (((*(longlong *)(local_40 + 0x10) == 0) ||
        (plVar3 = *(longlong **)(local_40 + 0x18), plVar3 == (longlong *)0x0)) ||
       ((int)plVar3[1] < 1)) {
LAB_146976514:
      uVar10 = 0;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_146976514;
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar11 = iVar6 == iVar5;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar11);
      uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),
                        *(longlong *)(local_40 + 0x10) == lVar7 &&
                        *(longlong *)(local_40 + 0x10) != 0);
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (!bVar4) {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_38 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 146976550 FUN_146976550 body=97 status=ok
// SIG undefined FUN_146976550(void)

undefined8 * FUN_146976550(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x38);
  if (plVar3 == (longlong *)0x0) {
LAB_1469765a1:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1469765a1;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 0x30);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1469765b2 FUN_1469765b2 body=256 status=ok
// SIG undefined FUN_1469765b2(void)

undefined8 * FUN_1469765b2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (plVar9 = *(longlong **)(param_1 + 0x38), plVar9 != (longlong *)0x0)) && (0 < (int)plVar9[1]))
  {
    lVar8 = 0;
    iVar6 = (int)plVar9[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146976602;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar10 = iVar5 == iVar6;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x30);
LAB_146976602:
    iVar6 = *(int *)(param_1 + 0x60);
    bVar10 = true;
    if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar8 + 0x48) + -1)) {
      lVar8 = *(longlong *)(lVar8 + 0x40);
      lVar7 = (longlong)iVar6 * 0x10;
      plVar3 = *(longlong **)(lVar8 + 0x18 + lVar7);
      if (plVar3 == (longlong *)0x0) {
LAB_146976670:
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_146976670;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        *param_2 = *(undefined8 *)(lVar8 + lVar7 + 0x10);
        param_2[1] = plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
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
      bVar10 = false;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (!bVar10) {
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1469766b2 FUN_1469766b2 body=252 status=ok
// SIG undefined FUN_1469766b2(void)

undefined8 * FUN_1469766b2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + 0x30) != 0) &&
      (plVar9 = *(longlong **)(param_1 + 0x38), plVar9 != (longlong *)0x0)) && (0 < (int)plVar9[1]))
  {
    lVar8 = 0;
    iVar6 = (int)plVar9[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_146976702;
      }
      LOCK();
      iVar6 = (int)plVar9[1];
      bVar10 = iVar5 == iVar6;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar10);
    lVar8 = *(longlong *)(param_1 + 0x30);
LAB_146976702:
    iVar6 = *(int *)(param_1 + 0x60);
    bVar10 = true;
    if ((0 < (longlong)iVar6) && (iVar6 < *(int *)(lVar8 + 0x48))) {
      lVar8 = *(longlong *)(lVar8 + 0x40);
      lVar7 = (longlong)iVar6 * 0x10;
      plVar3 = *(longlong **)(lVar8 + -8 + lVar7);
      if (plVar3 == (longlong *)0x0) {
LAB_14697676c:
        *param_2 = 0;
        param_2[1] = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_14697676c;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar10 = iVar6 == iVar4;
          if (bVar10) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar10);
        *param_2 = *(undefined8 *)(lVar8 + lVar7 + -0x10);
        param_2[1] = plVar3;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
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
      bVar10 = false;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar9 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (!bVar10) {
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1469767ae FUN_1469767ae body=634 status=ok
// SIG undefined FUN_1469767ae(void)

longlong ** FUN_1469767ae(longlong param_1,longlong **param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
      (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) && (0 < *(int *)(param_1 + 0x48))) {
    FUN_146976a48(param_1,param_2,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  FUN_1469765b2(param_1,&local_40);
  if (local_40 == (longlong *)0x0) {
    FUN_146976550(param_1,&local_50);
    bVar4 = true;
    if (local_50 != (longlong *)0x0) {
      *param_2 = (longlong *)0x0;
      param_2[1] = (longlong *)0x0;
      do {
        (**(code **)(*local_50 + 0x30))(local_50,&local_60);
        plVar3 = local_58;
        if (&local_60 == param_2) {
LAB_1469768dc:
          plVar3 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        else {
          *param_2 = local_60;
          local_60 = (longlong *)0x0;
          plVar2 = param_2[1];
          if (local_58 == plVar2) goto LAB_1469768dc;
          local_58 = (longlong *)0x0;
          param_2[1] = plVar3;
          if (plVar2 != (longlong *)0x0) {
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
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_1469768dc;
          }
        }
        if (*param_2 != (longlong *)0x0) {
          bVar4 = false;
          goto LAB_1469769c9;
        }
        (**(code **)(*local_50 + 0x28))(local_50,&local_60);
        plVar2 = local_48;
        plVar3 = local_58;
        local_50 = local_60;
        local_60 = (longlong *)0x0;
        if (local_58 == local_48) {
LAB_14697696f:
          plVar3 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_58 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
        }
        else {
          local_58 = (longlong *)0x0;
          local_48 = plVar3;
          if (plVar2 != (longlong *)0x0) {
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
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
            goto LAB_14697696f;
          }
        }
      } while (local_50 != (longlong *)0x0);
      plVar3 = param_2[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
    }
LAB_1469769c9:
    plVar3 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_38 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if (bVar4) {
      *param_2 = (longlong *)0x0;
      param_2[1] = (longlong *)0x0;
    }
  }
  else {
    *param_2 = local_40;
    param_2[1] = local_38;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146976a48 FUN_146976a48 body=133 status=ok
// SIG undefined FUN_146976a48(void)

undefined8 * FUN_146976a48(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    plVar4 = *(longlong **)(lVar3 + 8 + (longlong)param_3 * 0x10);
    if (plVar4 != (longlong *)0x0) {
      iVar6 = (int)plVar4[1];
      while (iVar6 != 0) {
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar7 = iVar6 == iVar5;
        if (bVar7) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
        if (bVar7) {
          *param_2 = *(undefined8 *)(lVar3 + (longlong)param_3 * 0x10);
          param_2[1] = plVar4;
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar4 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 != 0) {
            return param_2;
          }
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 != 0) {
            return param_2;
          }
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return param_2;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 146976ace FUN_146976ace body=400 status=ok
// SIG undefined FUN_146976ace(void)

longlong * FUN_146976ace(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1469766b2(param_1,&local_38);
  if (local_38 == (longlong *)0x0) {
    FUN_146976550(param_1,param_2);
LAB_146976c08:
    bVar4 = false;
    goto LAB_146976c0a;
  }
  *param_2 = (longlong)local_38;
  param_2[1] = (longlong)local_30;
  if (local_30 == (longlong *)0x0) {
LAB_146976b26:
    do {
      iVar5 = (**(code **)(*local_38 + 0x58))();
      if (iVar5 < 1) goto LAB_146976c08;
      (**(code **)(*(longlong *)*param_2 + 0x50))((longlong *)*param_2,&local_48,iVar5 + -1);
      plVar3 = local_40;
      if (&local_48 == param_2) {
LAB_146976ba5:
        plVar3 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_40 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
      }
      else {
        *param_2 = local_48;
        local_48 = 0;
        plVar2 = (longlong *)param_2[1];
        if (local_40 == plVar2) goto LAB_146976ba5;
        local_40 = (longlong *)0x0;
        param_2[1] = (longlong)plVar3;
        if (plVar2 != (longlong *)0x0) {
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
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
          goto LAB_146976ba5;
        }
      }
      local_38 = (longlong *)*param_2;
    } while (local_38 != (longlong *)0x0);
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    local_38 = (longlong *)*param_2;
    if (local_38 != (longlong *)0x0) goto LAB_146976b26;
  }
  plVar3 = (longlong *)param_2[1];
  bVar4 = true;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_146976c0a:
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if (bVar4) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146976c60 FUN_146976c60 body=152 status=ok
// SIG undefined FUN_146976c60(void)

undefined8 * FUN_146976c60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        FUN_14151e938(0,param_2);
        return param_2;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_14151e938(uVar4,param_2);
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
  return param_2;
}



// FUNCTION 146976cf8 FUN_146976cf8 body=210 status=ok
// SIG undefined FUN_146976cf8(void)

undefined8 * FUN_146976cf8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = *(longlong *)(DAT_14c968098 + 200);
  plVar4 = *(longlong **)(DAT_14c968098 + 0xd0);
  if (plVar4 == (longlong *)0x0) {
    FUN_146913240(*(undefined8 *)(lVar3 + 0x20),&local_28);
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    FUN_146913240(*(undefined8 *)(lVar3 + 0x20),&local_28);
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
  if (local_28 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_146974f74(local_28,param_2);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146976dcc FUN_146976dcc body=357 status=ok
// SIG undefined FUN_146976dcc(void)

undefined8 * FUN_146976dcc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar7 = *(longlong **)(param_1 + 0x20), plVar7 == (longlong *)0x0)) || ((int)plVar7[1] < 1))
  {
    FUN_146975e0a(param_1,param_2);
    if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar6 = 0;
  iVar3 = (int)plVar7[1];
  do {
    iVar2 = iVar3;
    if (iVar2 == 0) {
      plVar7 = (longlong *)0x0;
      goto LAB_146976e30;
    }
    LOCK();
    iVar3 = (int)plVar7[1];
    bVar8 = iVar2 == iVar3;
    if (bVar8) {
      *(int *)(plVar7 + 1) = iVar2 + 1;
      iVar3 = iVar2;
    }
    UNLOCK();
  } while (!bVar8);
  lVar6 = *(longlong *)(param_1 + 0x18);
  LOCK();
  *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
  UNLOCK();
LAB_146976e30:
  plVar4 = (longlong *)FUN_14142e2d2(lVar6 + 0x308);
  local_40 = (longlong *)*plVar4;
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 8))();
  }
  local_38 = (undefined4)plVar4[1];
  puVar5 = (undefined8 *)FUN_1447a1f4a();
  *param_2 = 0;
  iVar3 = *(int *)(puVar5 + 1);
  _Src = (void *)*puVar5;
  *(int *)(param_2 + 1) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar3,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar3 * 2);
  }
  if (local_40 != (longlong *)0x0) {
    (**(code **)(*local_40 + 0x10))();
  }
  if (iVar2 != 0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 146976f32 FUN_146976f32 body=140 status=ok
// SIG undefined FUN_146976f32(void)

void FUN_146976f32(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        FUN_14698158e(0);
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_14698158e(uVar4);
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
                    /* WARNING: Could not recover jumptable at 0x000146976fa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146976fbe FUN_146976fbe body=216 status=ok
// SIG undefined FUN_146976fbe(void)

ulonglong FUN_146976fbe(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RDI;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
LAB_146977010:
    uVar8 = 0;
  }
  else {
    if (param_2 == 0) {
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_146977012;
    }
    if (param_2 == 2) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          uVar8 = FUN_14154d6f6(0);
          return uVar8;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      uVar4 = *(undefined8 *)(param_1 + -0x50);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      uVar7 = FUN_14154d6f6(uVar4);
    }
    else {
      if (param_2 != 1) goto LAB_146977010;
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          uVar8 = FUN_14154d6ea(0);
          return uVar8;
        }
        LOCK();
        iVar5 = (int)plVar3[1];
        bVar9 = iVar6 == iVar5;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar9);
      uVar4 = *(undefined8 *)(param_1 + -0x50);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      uVar7 = FUN_14154d6ea(uVar4);
    }
    uVar8 = (ulonglong)uVar7;
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
LAB_146977012:
  return uVar8 & 0xffffffff;
}



// FUNCTION 146977096 FUN_146977096 body=176 status=ok
// SIG undefined FUN_146977096(void)

undefined1 FUN_146977096(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  
  uVar4 = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    uVar7 = 0;
    iVar6 = (int)plVar8[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1469770fe;
      }
      LOCK();
      iVar6 = (int)plVar8[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    uVar7 = *(undefined8 *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_1469770fe:
    cVar3 = FUN_1469819c8(uVar7);
    uVar4 = 2;
    if (cVar3 == '\0') {
      uVar4 = FUN_14287c1e0(uVar7);
    }
    if (iVar5 != 0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 146977146 FUN_146977146 body=316 status=ok
// SIG undefined FUN_146977146(void)

void FUN_146977146(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if ((((param_1[-10] != 0) && (param_1[-9] != 0)) && (0 < *(int *)(param_1[-9] + 8))) &&
     (iVar5 = (**(code **)(*param_1 + 0x28))(param_1), iVar5 != param_2)) {
    if (param_2 == 2) {
      plVar6 = (longlong *)param_1[-9];
      if (plVar6 == (longlong *)0x0) {
LAB_146977268:
        FUN_146981c1e(0);
        return;
      }
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_146977268;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
      lVar3 = param_1[-10];
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_146981c1e(lVar3);
    }
    else if (param_2 == 1) {
      plVar6 = (longlong *)param_1[-9];
      if (plVar6 == (longlong *)0x0) {
LAB_14697725b:
        FUN_146981c46(0);
        return;
      }
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_14697725b;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
      lVar3 = param_1[-10];
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_146981c46(lVar3);
    }
    else {
      if (param_2 != 0) {
        return;
      }
      plVar6 = (longlong *)param_1[-9];
      if (plVar6 == (longlong *)0x0) {
LAB_146977275:
        FUN_146981c32(0);
        return;
      }
      iVar5 = (int)plVar6[1];
      do {
        if (iVar5 == 0) goto LAB_146977275;
        LOCK();
        iVar4 = (int)plVar6[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar6 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
      lVar3 = param_1[-10];
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      FUN_146981c32(lVar3);
    }
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
                    /* WARNING: Could not recover jumptable at 0x000146977257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146977282 FUN_146977282 body=157 status=ok
// SIG undefined FUN_146977282(void)

ulonglong FUN_146977282(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  undefined7 uVar8;
  ulonglong uVar7;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      uVar8 = (undefined7)((ulonglong)unaff_RSI >> 8);
      if (iVar6 == 0) {
        uVar7 = CONCAT71(uVar8,DAT_00000369) & 0xffffffffffffff40;
        uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 6);
        goto LAB_146977304;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar7 = CONCAT71(uVar8,*(undefined1 *)(lVar4 + 0x369)) & 0xffffffffffffff40;
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
    uVar7 = CONCAT71((int7)(uVar7 >> 8),(byte)uVar7 >> 6);
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
LAB_146977304:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14697732a FUN_14697732a body=73 status=ok
// SIG undefined FUN_14697732a(void)

void FUN_14697732a(void)

{
  DAT_14c98d988 = 0;
  if (DAT_14c98d980 != 0) {
    FUN_1400020a8();
  }
  FUN_1469788f0();
  DAT_14c98d938 = 0;
  if (DAT_14c98d930 != 0) {
    FUN_1400020a8();
  }
  FUN_146978a92();
  return;
}



// FUNCTION 146977374 FUN_146977374 body=365 status=ok
// SIG undefined FUN_146977374(void)

void FUN_146977374(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined *puVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  iVar2 = (**(code **)(*DAT_14c98d8e0 + 0xb0))();
  if (iVar2 == 1) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = (longlong *)
             FUN_14697b902(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4),&local_28);
    iVar2 = (int)plVar3[1];
    *(uint *)(plVar3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
      FUN_14697bf2e(plVar3,iVar2);
    }
    *(undefined8 *)(*plVar3 + (longlong)iVar2 * 8) = param_1;
    if (DAT_14c98d948 != DAT_14c98d974) {
      uVar1 = (uint)((ulonglong)local_28 >> 0x10);
      uVar4 = (uint)local_28 & 0xffff;
      puVar5 = &DAT_14c98d978;
      if (DAT_14c98d980 != (undefined *)0x0) {
        puVar5 = DAT_14c98d980;
      }
      iVar2 = *(int *)(puVar5 + (ulonglong)
                                (DAT_14c98d988 - 1U &
                                (int)((ulonglong)local_28 >> 0x20) +
                                ((uint)local_28 << 0x10 | uVar4) + (uVar1 << 0x13 | uVar1 & 0xffff)
                                + (uVar4 >> 4)) * 4);
      while (iVar2 != -1) {
        plVar3 = (longlong *)(DAT_14c98d940 + (longlong)iVar2 * 0x28);
        if (*plVar3 == local_28) {
          if (plVar3 + 1 != (longlong *)0x0 && plVar3 != (longlong *)0x0) {
            FUN_14697bfb4(plVar3 + 1,param_1,&local_28,0);
          }
          break;
        }
        iVar2 = (int)plVar3[4];
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469774e2 FUN_1469774e2 body=340 status=ok
// SIG undefined FUN_1469774e2(void)

void FUN_1469774e2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  undefined *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar2 = DAT_14c98d8f8 - DAT_14c98d924;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != iVar2) {
    FUN_14697c076(param_1);
  }
  local_48 = 0x100000000;
  local_40 = &DAT_14c98d900;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (DAT_14c98d918 != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = &DAT_14c98d8f0;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_14697c084(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x20 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146977638 FUN_146977638 body=43 status=ok
// SIG undefined FUN_146977638(void)

void FUN_146977638(longlong param_1,longlong param_2)

{
  FUN_140a5c8a2(param_1 + 0x1e8,param_1,param_2);
  FUN_1449db362(param_2 + 0x18);
  return;
}



// FUNCTION 146977664 FUN_146977664 body=81 status=ok
// SIG undefined FUN_146977664(void)

void FUN_146977664(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = 0;
  FUN_140a5ca1e(param_1 + 0x1e8,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469776b6 thunk_FUN_140163244 body=7 status=ok
// SIG undefined thunk_FUN_140163244(void)

void thunk_FUN_140163244(undefined8 param_1)

{
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 1469776d4 FUN_1469776d4 body=461 status=ok
// SIG undefined FUN_1469776d4(void)

longlong * FUN_1469776d4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x68,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_146977712:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_146977712;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_1469778a4(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_14697784e;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_14697784e;
LAB_1469777b1:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_14697784e;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_1469777b1;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_14697784e:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1469778a4 FUN_1469778a4 body=132 status=ok
// SIG undefined FUN_1469778a4(void)

undefined8 * FUN_1469778a4(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,5);
  *param_1 = &PTR_FUN_149eefd00;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14697792a FUN_14697792a body=121 status=ok
// SIG undefined FUN_14697792a(void)

void FUN_14697792a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_2 + 0x1b8);
  if (-1 < iVar1) {
    if (*(int *)(param_1 + 0x204) < iVar1) {
      FUN_140a5356c(param_1 + 0x1f8);
      iVar1 = *(int *)(param_2 + 0x1b8);
    }
    if (iVar1 != 0) {
      lVar3 = *(longlong *)(param_2 + 0x1b0);
      lVar2 = (longlong)iVar1 * 0xc0;
      do {
        FUN_140a50fb6(param_1 + 0x1e0,lVar3);
        lVar3 = lVar3 + 0xc0;
        lVar2 = lVar2 + -0xc0;
      } while (lVar2 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 1469779a4 FUN_1469779a4 body=15 status=ok
// SIG undefined FUN_1469779a4(void)

undefined8 FUN_1469779a4(longlong param_1,int param_2)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x1f8) + (longlong)param_2 * 8);
}



// FUNCTION 1469779b4 FUN_1469779b4 body=76 status=ok
// SIG undefined FUN_1469779b4(void)

ulonglong FUN_1469779b4(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (0 < (longlong)*(int *)(param_1 + 0x200)) {
    uVar1 = 0;
    do {
      if (*param_2 ==
          *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar1 * 8) + 0x10)) {
        FUN_14697d166(param_1 + 0x1f8,uVar1 & 0xffffffff);
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while ((longlong)*(int *)(param_1 + 0x200) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 146977a00 FUN_146977a00 body=12 status=ok
// SIG undefined FUN_146977a00(void)

void FUN_146977a00(longlong param_1)

{
  FUN_146977a0c(param_1 + 0x1e0);
  return;
}



// FUNCTION 146977a0c FUN_146977a0c body=170 status=ok
// SIG undefined FUN_146977a0c(void)

void FUN_146977a0c(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  local_20 = *(undefined4 *)(param_1 + 0x20);
  local_1c = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_140d33455(0,0);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_140a5356c(param_1 + 0x18,0);
  }
  FUN_14697d260(&local_28);
  FUN_14697d296(param_1 + 0x18,&local_28);
  FUN_140d33455(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146977ab8 FUN_146977ab8 body=22 status=ok
// SIG undefined FUN_146977ab8(void)

void FUN_146977ab8(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x208) = param_2;
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 146977ace FUN_146977ace body=148 status=ok
// SIG undefined FUN_146977ace(void)

undefined8 * FUN_146977ace(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a560dc();
  *param_1 = &PTR_FUN_149ef0850;
  FUN_1446f470e(&local_20,L"Children",1);
  param_1[0x3d] = param_1;
  param_1[0x3e] = local_20;
  param_1[0x3c] = &PTR_LAB_149eefe00;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146977b6e FUN_146977b6e body=69 status=ok
// SIG undefined FUN_146977b6e(void)

bool FUN_146977b6e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x200);
  if ((longlong)uVar2 < 1) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
    if (*(int *)(**(longlong **)(param_1 + 0x1f8) + 0x40) != param_2) {
      uVar1 = 1;
      do {
        uVar3 = uVar1;
        if (uVar2 == uVar3) break;
        uVar1 = uVar3 + 1;
      } while (*(int *)((*(longlong **)(param_1 + 0x1f8))[uVar3] + 0x40) != param_2);
      bVar4 = uVar3 < uVar2;
    }
  }
  return bVar4;
}



// FUNCTION 146977bb4 FUN_146977bb4 body=81 status=ok
// SIG undefined FUN_146977bb4(void)

void FUN_146977bb4(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x200);
  if (param_2 == -1) {
    if (0 < (int)uVar1) {
      FUN_146977c06(param_1 + 0x1e0,uVar1 - 1);
      return;
    }
  }
  else if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x1f8) + uVar2 * 8) + 0x40) == param_2) {
        FUN_146977c06(param_1 + 0x1e0,uVar2 & 0xffffffff);
        return;
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 146977c06 FUN_146977c06 body=67 status=ok
// SIG undefined FUN_146977c06(void)

void FUN_146977c06(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)param_2 * 8) = 0;
  FUN_145901b04(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146977c3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146977c4a FUN_146977c4a body=346 status=ok
// SIG undefined FUN_146977c4a(void)

int FUN_146977c4a(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,undefined8 param_8,char param_9)

{
  char cVar1;
  int iVar2;
  undefined8 in_RAX;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_68 = *(undefined8 *)(param_2 + 4);
  local_58 = *(undefined8 *)(param_2 + 8);
  uStack_50 = *(undefined8 *)(param_2 + 10);
  if (param_9 == '\0') {
    local_84 = 0;
  }
  else {
    local_84 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x3a));
  }
  iVar3 = param_7;
  lStack_60 = param_1;
  if (0 < *(int *)(param_3 + 0x130)) {
    local_80 = param_3 + 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(param_3 + 0x128);
      if (*(longlong *)(param_3 + 0x128) == 0) {
        lVar4 = local_80;
      }
      cVar1 = FUN_14022ea56(param_1,param_5,lVar5 + lVar4);
      if (cVar1 == '\0') {
        local_90 = (undefined1)local_84;
        local_98 = param_8;
        local_a0 = param_7;
        local_a8 = param_6;
        iVar2 = FUN_14016eaf2(*(undefined8 *)(lVar4 + 0x38 + lVar5),&local_78,lVar5 + lVar4,param_5)
        ;
        if (iVar3 < iVar2) {
          iVar3 = iVar2;
        }
      }
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x48;
    } while (lVar6 < *(int *)(param_3 + 0x130));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 146977da6 FUN_146977da6 body=38 status=ok
// SIG undefined FUN_146977da6(void)

undefined8 FUN_146977da6(undefined8 param_1,int param_2)

{
  FUN_140ffd4ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146977dde FUN_146977dde body=38 status=ok
// SIG undefined FUN_146977dde(void)

undefined8 FUN_146977dde(undefined8 param_1,int param_2)

{
  FUN_146974352();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146977e04 FUN_146977e04 body=32 status=ok
// SIG undefined FUN_146977e04(void)

bool FUN_146977e04(undefined8 param_1,longlong *param_2)

{
  FUN_14697d3c2();
  return DAT_14c98da78 == *param_2;
}



// FUNCTION 146977e24 FUN_146977e24 body=38 status=ok
// SIG undefined FUN_146977e24(void)

undefined8 FUN_146977e24(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146977e4e FUN_146977e4e body=263 status=ok
// SIG undefined FUN_146977e4e(void)

undefined8 FUN_146977e4e(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_298 [40];
  undefined2 *local_270;
  int local_268;
  undefined2 *local_260;
  int local_258;
  undefined2 *local_250;
  undefined2 *local_248;
  ulonglong *local_240;
  undefined1 local_238;
  undefined2 local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_298;
  local_250 = local_230;
  local_238 = 0;
  local_240 = &local_30;
  local_248 = local_250;
  (**(code **)(*param_1 + 0x68))(param_1,&local_260);
  puVar1 = &DAT_149dfb77a;
  if (local_258 != 0) {
    puVar1 = local_260;
  }
  (**(code **)(*param_1 + 0x70))(param_1,&local_270);
  puVar2 = &DAT_149dfb77a;
  if (local_268 != 0) {
    puVar2 = local_270;
  }
  FUN_140212e80(&local_250,L"Label: %s. Role: %s.",puVar2,puVar1);
  if (local_270 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_260 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *local_248 = 0;
  FUN_140056680(param_2,local_250);
  FUN_144724f3c(&local_250);
  if ((local_30 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146977f6e FUN_146977f6e body=67 status=ok
// SIG undefined FUN_146977f6e(void)

undefined8 * FUN_146977f6e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eee890;
  if (*(char *)(param_1 + 0x42) == '\x01') {
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146977fcc FUN_146977fcc body=38 status=ok
// SIG undefined FUN_146977fcc(void)

undefined8 FUN_146977fcc(undefined8 param_1,int param_2)

{
  FUN_14287ac1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146977ff8 FUN_146977ff8 body=63 status=ok
// SIG undefined FUN_146977ff8(void)

undefined8 * FUN_146977ff8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146978038 FUN_146978038 body=38 status=ok
// SIG undefined FUN_146978038(void)

undefined8 FUN_146978038(undefined8 param_1,int param_2)

{
  FUN_140a58a56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146978060 FUN_146978060 body=63 status=ok
// SIG undefined FUN_146978060(void)

void FUN_146978060(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  memset(param_2,0,0x7a0);
  do {
    FUN_144a5dc74((longlong)param_2 + lVar1 + 0x3d0);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x3d0);
  return;
}



// FUNCTION 1469780a0 FUN_1469780a0 body=63 status=ok
// SIG undefined FUN_1469780a0(void)

void FUN_1469780a0(undefined8 param_1,void *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  memset(param_2,0,0x3d0);
  do {
    FUN_144a5dc74((longlong)param_2 + lVar1 + 0x3d0);
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x3d0);
  return;
}



// FUNCTION 1469780e0 FUN_1469780e0 body=49 status=ok
// SIG undefined FUN_1469780e0(void)

void FUN_1469780e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0x790;
  do {
    if (*(longlong **)(param_2 + lVar1) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + lVar1) + 0x10))();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x3c0);
  return;
}



// FUNCTION 146978128 FUN_146978128 body=63 status=ok
// SIG undefined FUN_146978128(void)

undefined1 FUN_146978128(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14697826c(param_2,param_3);
    param_3 = param_3 + 0x7a0;
    param_2 = param_2 + 0x7a0;
  }
  return 1;
}



// FUNCTION 146978190 FUN_146978190 body=59 status=ok
// SIG undefined FUN_146978190(void)

undefined8 FUN_146978190(longlong *param_1)

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



// FUNCTION 1469781dc FUN_1469781dc body=65 status=ok
// SIG undefined FUN_1469781dc(void)

void FUN_1469781dc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x7a0) == '\x01') {
    lVar1 = 0x790;
    do {
      if (*(longlong **)(param_2 + lVar1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + lVar1) + 0x10))();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0x3c0);
    *(undefined1 *)(param_2 + 0x7a0) = 0;
  }
  return;
}



// FUNCTION 14697826c FUN_14697826c body=110 status=ok
// SIG undefined FUN_14697826c(void)

void * FUN_14697826c(void *param_1,void *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = 0x3d0;
  memcpy(param_1,param_2,0x3d0);
  do {
    plVar1 = *(longlong **)((longlong)param_2 + lVar3);
    plVar2 = *(longlong **)((longlong)param_1 + lVar3);
    if (plVar2 != plVar1) {
      *(longlong **)((longlong)param_1 + lVar3) = plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + lVar3 + 8) = *(undefined4 *)((longlong)param_2 + lVar3 + 8);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x7a0);
  return param_1;
}



// FUNCTION 1469782dc FUN_1469782dc body=59 status=ok
// SIG undefined FUN_1469782dc(void)

void FUN_1469782dc(undefined8 param_1,undefined8 *param_2)

{
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 146978318 FUN_146978318 body=47 status=ok
// SIG undefined FUN_146978318(void)

void FUN_146978318(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a5dc74(param_2 + 2);
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  return;
}



// FUNCTION 146978366 FUN_146978366 body=54 status=ok
// SIG undefined FUN_146978366(void)

undefined1 FUN_146978366(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1469784ba(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1469783c4 FUN_1469783c4 body=59 status=ok
// SIG undefined FUN_1469783c4(void)

undefined8 FUN_1469783c4(longlong *param_1)

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



// FUNCTION 14697840a FUN_14697840a body=34 status=ok
// SIG undefined FUN_14697840a(void)

void FUN_14697840a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_14697847a(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 14697847a FUN_14697847a body=64 status=ok
// SIG undefined FUN_14697847a(void)

void FUN_14697847a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001469784af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1469784ba FUN_1469784ba body=107 status=ok
// SIG undefined FUN_1469784ba(void)

undefined4 * FUN_1469784ba(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  plVar1 = *(longlong **)(param_2 + 4);
  plVar2 = *(longlong **)(param_1 + 4);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 4) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  param_1[6] = param_2[6];
  FUN_144a787a6(param_1 + 8,param_2 + 8);
  FUN_14479f9aa(param_1 + 0xc,param_2 + 0xc);
  return param_1;
}



// FUNCTION 14697855a FUN_14697855a body=63 status=ok
// SIG undefined FUN_14697855a(void)

undefined1 FUN_14697855a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_146978682(param_2,param_3);
    param_3 = param_3 + 0x3660;
    param_2 = param_2 + 0x3660;
  }
  return 1;
}



// FUNCTION 1469785c2 FUN_1469785c2 body=59 status=ok
// SIG undefined FUN_1469785c2(void)

undefined8 FUN_1469785c2(longlong *param_1)

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



// FUNCTION 14697860e FUN_14697860e body=38 status=ok
// SIG undefined FUN_14697860e(void)

void FUN_14697860e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3660) == '\x01') {
    FUN_140ffd4ee(param_2);
    *(undefined1 *)(param_2 + 0x3660) = 0;
  }
  return;
}



// FUNCTION 146978682 FUN_146978682 body=507 status=ok
// SIG undefined FUN_146978682(void)

longlong FUN_146978682(longlong param_1,longlong param_2)

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
  undefined1 uVar12;
  
  FUN_140f13d9e(param_1 + 0x10,param_2 + 0x10);
  FUN_140f13d9e(param_1 + 0xc0,param_2 + 0xc0);
  FUN_140f13d9e(param_1 + 0x170,param_2 + 0x170);
  FUN_140a5e6b8(param_1 + 0x220,param_2 + 0x220);
  FUN_1458a2fee(param_1 + 0x500,param_2 + 0x500);
  FUN_1414c3ed0(param_1 + 0x1180,param_2 + 0x1180);
  FUN_141254448(param_1 + 0x1ae0,param_2 + 0x1ae0);
  FUN_140f13d9e(param_1 + 0x1e50,param_2 + 0x1e50);
  uVar1 = *(undefined4 *)(param_2 + 0x1f04);
  uVar2 = *(undefined4 *)(param_2 + 0x1f08);
  uVar3 = *(undefined4 *)(param_2 + 0x1f0c);
  *(undefined4 *)(param_1 + 0x1f00) = *(undefined4 *)(param_2 + 0x1f00);
  *(undefined4 *)(param_1 + 0x1f04) = uVar1;
  *(undefined4 *)(param_1 + 0x1f08) = uVar2;
  *(undefined4 *)(param_1 + 0x1f0c) = uVar3;
  *(undefined8 *)(param_1 + 0x1f10) = *(undefined8 *)(param_2 + 0x1f10);
  FUN_140f13d9e(param_1 + 0x1f20,param_2 + 0x1f20);
  uVar1 = *(undefined4 *)(param_2 + 0x1fd4);
  uVar2 = *(undefined4 *)(param_2 + 0x1fd8);
  uVar3 = *(undefined4 *)(param_2 + 0x1fdc);
  uVar4 = *(undefined4 *)(param_2 + 0x1fe0);
  uVar5 = *(undefined4 *)(param_2 + 0x1fe4);
  uVar6 = *(undefined4 *)(param_2 + 0x1fe8);
  uVar7 = *(undefined4 *)(param_2 + 0x1fec);
  uVar8 = *(undefined4 *)(param_2 + 0x1ff0);
  uVar9 = *(undefined4 *)(param_2 + 0x1ff4);
  uVar10 = *(undefined4 *)(param_2 + 0x1ff8);
  uVar11 = *(undefined4 *)(param_2 + 0x1ffc);
  *(undefined4 *)(param_1 + 0x1fd0) = *(undefined4 *)(param_2 + 0x1fd0);
  *(undefined4 *)(param_1 + 0x1fd4) = uVar1;
  *(undefined4 *)(param_1 + 0x1fd8) = uVar2;
  *(undefined4 *)(param_1 + 0x1fdc) = uVar3;
  *(undefined4 *)(param_1 + 0x1fe0) = uVar4;
  *(undefined4 *)(param_1 + 0x1fe4) = uVar5;
  *(undefined4 *)(param_1 + 0x1fe8) = uVar6;
  *(undefined4 *)(param_1 + 0x1fec) = uVar7;
  *(undefined4 *)(param_1 + 0x1ff0) = uVar8;
  *(undefined4 *)(param_1 + 0x1ff4) = uVar9;
  *(undefined4 *)(param_1 + 0x1ff8) = uVar10;
  *(undefined4 *)(param_1 + 0x1ffc) = uVar11;
  *(undefined1 *)(param_1 + 0x2000) = *(undefined1 *)(param_2 + 0x2000);
  FUN_141254448(param_1 + 0x2010,param_2 + 0x2010);
  FUN_141254448(param_1 + 0x2390,param_2 + 0x2390);
  FUN_140f13d9e(param_1 + 0x2700,param_2 + 0x2700);
  uVar1 = *(undefined4 *)(param_2 + 0x27b4);
  uVar2 = *(undefined4 *)(param_2 + 0x27b8);
  uVar3 = *(undefined4 *)(param_2 + 0x27bc);
  *(undefined4 *)(param_1 + 0x27b0) = *(undefined4 *)(param_2 + 0x27b0);
  *(undefined4 *)(param_1 + 0x27b4) = uVar1;
  *(undefined4 *)(param_1 + 0x27b8) = uVar2;
  *(undefined4 *)(param_1 + 0x27bc) = uVar3;
  *(undefined8 *)(param_1 + 0x27c0) = *(undefined8 *)(param_2 + 0x27c0);
  FUN_140f13d9e(param_1 + 0x27d0,param_2 + 0x27d0);
  uVar1 = *(undefined4 *)(param_2 + 0x2884);
  uVar2 = *(undefined4 *)(param_2 + 0x2888);
  uVar3 = *(undefined4 *)(&DAT_0000288c + param_2);
  uVar4 = *(undefined4 *)(param_2 + 0x2890);
  uVar5 = *(undefined4 *)(&DAT_00002894 + param_2);
  uVar6 = *(undefined4 *)(param_2 + 0x2898);
  uVar7 = *(undefined4 *)(param_2 + 0x289c);
  uVar8 = *(undefined4 *)(param_2 + 0x28a0);
  uVar9 = *(undefined4 *)(param_2 + 0x28a4);
  uVar10 = *(undefined4 *)(param_2 + 0x28a8);
  uVar11 = *(undefined4 *)(param_2 + 0x28ac);
  *(undefined4 *)(param_1 + 0x2880) = *(undefined4 *)(param_2 + 0x2880);
  *(undefined4 *)(param_1 + 0x2884) = uVar1;
  *(undefined4 *)(param_1 + 0x2888) = uVar2;
  *(undefined4 *)(&DAT_0000288c + param_1) = uVar3;
  *(undefined4 *)(param_1 + 0x2890) = uVar4;
  *(undefined4 *)(&DAT_00002894 + param_1) = uVar5;
  *(undefined4 *)(param_1 + 0x2898) = uVar6;
  *(undefined4 *)(param_1 + 0x289c) = uVar7;
  *(undefined4 *)(param_1 + 0x28a0) = uVar8;
  *(undefined4 *)(param_1 + 0x28a4) = uVar9;
  *(undefined4 *)(param_1 + 0x28a8) = uVar10;
  *(undefined4 *)(param_1 + 0x28ac) = uVar11;
  *(undefined1 *)(param_1 + 0x28b0) = *(undefined1 *)(param_2 + 0x28b0);
  FUN_1414c3ed0(param_1 + 0x28c0,param_2 + 0x28c0);
  FUN_141254448(param_1 + 0x3210,param_2 + 0x3210);
  memcpy((void *)(param_1 + 0x3580),(void *)(param_2 + 0x3580),0xd4);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x3655) == '\x01') {
      *(undefined1 *)(param_1 + 0x3654) = *(undefined1 *)(param_2 + 0x3654);
      uVar12 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x3655) != '\x01') {
        return param_1;
      }
      uVar12 = 0;
    }
    *(undefined1 *)(param_1 + 0x3655) = uVar12;
  }
  return param_1;
}



// FUNCTION 14697887e FUN_14697887e body=114 status=ok
// SIG undefined FUN_14697887e(void)

void FUN_14697887e(longlong *param_1,int param_2)

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



// FUNCTION 1469788f0 FUN_1469788f0 body=53 status=ok
// SIG undefined FUN_1469788f0(void)

void FUN_1469788f0(void)

{
  FUN_146978926();
  if (DAT_14c98d960 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c98d940 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146978926 FUN_146978926 body=363 status=ok
// SIG undefined FUN_146978926(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146978926(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = 0x100000000;
  local_38 = &DAT_14c98d950;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  if (DAT_14c98d968 != 0) {
    FUN_1449c0562(&local_40);
  }
  local_68 = &DAT_14c98d940;
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  if (iStack_2c < *(int *)(local_38 + 0x18)) {
    do {
      lVar1 = *local_68;
      lVar2 = (longlong)iStack_4c;
      FUN_144760e21(*(undefined8 *)(lVar1 + 8 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 8 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < *(int *)(local_58 + 0x18));
  }
  DAT_14c98d948 = 0;
  if (DAT_14c98d94c != 0) {
    FUN_140549ad6(&DAT_14c98d940,0);
  }
  _DAT_14c98d970 = 0xffffffff;
  DAT_14c98d968 = 0;
  if (0x80 < DAT_14c98d96c) {
    DAT_14c98d96c = 0x80;
    FUN_1446efbd8(&DAT_14c98d950,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146978a92 FUN_146978a92 body=53 status=ok
// SIG undefined FUN_146978a92(void)

void FUN_146978a92(void)

{
  FUN_146978ac8();
  if (DAT_14c98d910 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c98d8f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146978ac8 FUN_146978ac8 body=345 status=ok
// SIG undefined FUN_146978ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146978ac8(void)

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
  local_28 = &DAT_14c98d900;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14c98d918 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14c98d8f0;
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
  DAT_14c98d8f8 = 0;
  if (DAT_14c98d8fc != 0) {
    FUN_1446f4a44(&DAT_14c98d8f0,0);
  }
  _DAT_14c98d920 = 0xffffffff;
  DAT_14c98d918 = 0;
  if (0x80 < DAT_14c98d91c) {
    DAT_14c98d91c = 0x80;
    FUN_1446efbd8(&DAT_14c98d900,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146978c22 FUN_146978c22 body=299 status=ok
// SIG undefined FUN_146978c22(void)

undefined8 *
FUN_146978c22(undefined8 *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5,
             float *param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  float *local_48;
  undefined8 local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = 0x3f800000;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14c84635c;
  local_24 = param_2[1] * param_5[1];
  local_28 = *param_2 * *param_5;
  local_2c = -param_2[1] * param_5[1];
  local_30 = -*param_2 * *param_5;
  local_40 = param_7;
  local_48 = param_3;
  FUN_146978d4e((longlong)param_1 + 0x1c,&local_30,param_4);
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 1;
  fVar1 = *param_6;
  fVar2 = *param_3;
  *(ulonglong *)((longlong)param_1 + 0xc) =
       CONCAT44(param_3[2] * fVar1 + param_6[2],param_3[1] * fVar1 + param_6[1]);
  *(float *)(param_1 + 1) = fVar1 * fVar2;
  *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)(param_3 + 1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146978d4e FUN_146978d4e body=367 status=ok
// SIG undefined FUN_146978d4e(void)

float * FUN_146978d4e(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_stack_00000028;
  float *in_stack_00000030;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = in_stack_00000028;
  FUN_146978ebe(&local_98);
  fVar1 = *in_stack_00000030;
  fVar2 = in_stack_00000030[1];
  fVar3 = in_stack_00000030[3];
  fVar4 = in_stack_00000030[2];
  fVar5 = in_stack_00000030[5];
  fVar6 = in_stack_00000030[4];
  *param_1 = local_98 * fVar1 + fVar4 * local_94;
  param_1[1] = fVar2 * local_98 + fVar3 * local_94;
  param_1[2] = local_90 * fVar1 + local_8c * fVar4;
  param_1[3] = local_90 * fVar2 + fVar3 * local_8c;
  param_1[4] = local_88 * fVar1 + local_84 * fVar4 + fVar6;
  param_1[5] = local_88 * fVar2 + local_84 * fVar3 + fVar5;
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146978ebe FUN_146978ebe body=298 status=ok
// SIG undefined FUN_146978ebe(void)

float * FUN_146978ebe(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[3];
  fVar4 = param_3[2];
  fVar9 = *param_2 * fVar2 + param_2[1] * fVar3 + param_3[5] + param_4[1];
  fVar8 = *param_2 * fVar1 + param_2[1] * fVar4 + param_3[4] + *param_4;
  fVar5 = *param_5;
  fVar6 = param_5[2];
  fVar7 = param_5[1];
  *param_1 = fVar1 * fVar5 + fVar2 * 0.0;
  param_1[1] = fVar1 * 0.0 + fVar2 * fVar5;
  param_1[2] = fVar4 * fVar5 + fVar3 * 0.0;
  param_1[3] = fVar4 * 0.0 + fVar3 * fVar5;
  param_1[4] = fVar8 * fVar5 + fVar9 * 0.0 + fVar7;
  param_1[5] = fVar8 * 0.0 + fVar9 * fVar5 + fVar6;
  return param_1;
}



// FUNCTION 146978fe8 FUN_146978fe8 body=38 status=ok
// SIG undefined FUN_146978fe8(void)

undefined8 FUN_146978fe8(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697900e FUN_14697900e body=146 status=ok
// SIG undefined FUN_14697900e(void)

void FUN_14697900e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149eee6b0;
  FUN_14697a64f(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_14697a64f(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[7];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000146979095. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14697917a FUN_14697917a body=42 status=ok
// SIG undefined FUN_14697917a(void)

longlong FUN_14697917a(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469791a4 FUN_1469791a4 body=42 status=ok
// SIG undefined FUN_1469791a4(void)

longlong FUN_1469791a4(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1469791ce FUN_1469791ce body=42 status=ok
// SIG undefined FUN_1469791ce(void)

longlong FUN_1469791ce(longlong param_1,int param_2)

{
  FUN_140cc7538(param_1 + 0x18);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146979240 FUN_146979240 body=158 status=ok
// SIG undefined FUN_146979240(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_146979240(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c98da50) {
    FUN_144b3d300(&DAT_14c98da50);
    if (DAT_14c98da50 == -1) {
      _DAT_14c98da30 = &PTR_FUN_149edb640;
      _DAT_14c98da38 = 0;
      _DAT_14c98da40 = DAT_14c98dec8;
      _DAT_14c98da48 = DAT_14c98ded0;
      if (DAT_14c98ded0 != 0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
        UNLOCK();
      }
      atexit((_func_5014 *)&LAB_142879f19);
      _Init_thread_footer(&DAT_14c98da50);
    }
  }
  return &DAT_14c98da30;
}



// FUNCTION 14697930a FUN_14697930a body=29 status=ok
// SIG undefined FUN_14697930a(void)

undefined8 FUN_14697930a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14697937e FUN_14697937e body=130 status=ok
// SIG undefined FUN_14697937e(void)

void FUN_14697937e(longlong *param_1,longlong *param_2)

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



// FUNCTION 146979402 FUN_146979402 body=130 status=ok
// SIG undefined FUN_146979402(void)

void FUN_146979402(longlong *param_1,longlong *param_2)

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



// FUNCTION 146979486 FUN_146979486 body=156 status=ok
// SIG undefined FUN_146979486(void)

bool FUN_146979486(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140c8fe9c(&local_38,param_2,param_1);
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    local_40 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_40);
  }
  if (local_38 != local_40) {
    FUN_146979524(param_1,param_2,param_3);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return local_38 != local_40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146979524 FUN_146979524 body=161 status=ok
// SIG undefined FUN_146979524(void)

void FUN_146979524(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (longlong *)FUN_14001cc68(0x20,0x10);
  *local_28 = (longlong)&PTR_FUN_149ef0790;
  local_28[1] = *param_3;
  *param_3 = 0;
  *(int *)(local_28 + 2) = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28[3] = param_1;
  FUN_140eee99e(param_2,param_1,0,&local_28);
  if (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x20))(local_28,1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469795c6 FUN_1469795c6 body=233 status=ok
// SIG undefined FUN_1469795c6(void)

undefined2 * FUN_1469795c6(longlong param_1,undefined2 *param_2)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [36];
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(param_1 + 0x10) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,&local_34);
      pfVar1 = *(float **)(param_1 + 0x18);
      if ((*pfVar1 == local_34) && (!NAN(*pfVar1) && !NAN(local_34))) {
        if ((pfVar1[1] == fStack_30) &&
           (((!NAN(pfVar1[1]) && !NAN(fStack_30) && (pfVar1[2] == fStack_2c)) &&
            (!NAN(pfVar1[2]) && !NAN(fStack_2c))))) {
          if ((((pfVar1[3] == fStack_28) && (!NAN(pfVar1[3]) && !NAN(fStack_28))) &&
              (*(char *)(pfVar1 + 4) == (char)local_24)) &&
             ((*(char *)(pfVar1 + 4) != '\x01' ||
              (*(char *)((longlong)pfVar1 + 0x11) == local_24._1_1_)))) goto LAB_1469796a9;
        }
      }
      pfVar1[4] = local_24;
      *pfVar1 = local_34;
      pfVar1[1] = fStack_30;
      pfVar1[2] = fStack_2c;
      pfVar1[3] = fStack_28;
      *param_2 = 0x100;
      goto LAB_146979650;
    }
  }
LAB_1469796a9:
  *param_2 = 0;
LAB_146979650:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1469796bc FUN_1469796bc body=50 status=ok
// SIG undefined FUN_1469796bc(void)

undefined8 * FUN_1469796bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 8), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1469796ee thunk_FUN_1449db362 body=5 status=ok
// SIG undefined thunk_FUN_1449db362(void)

void thunk_FUN_1449db362(void)

{
  FUN_1449db362();
  return;
}



// FUNCTION 1469796f4 FUN_1469796f4 body=96 status=ok
// SIG undefined FUN_1469796f4(void)

void FUN_1469796f4(longlong param_1,int param_2)

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



// FUNCTION 146979754 FUN_146979754 body=62 status=ok
// SIG undefined FUN_146979754(void)

void FUN_146979754(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146979792(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 146979792 FUN_146979792 body=93 status=ok
// SIG undefined FUN_146979792(void)

ulonglong FUN_146979792(uint param_1,uint param_2)

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



// FUNCTION 1469797f0 FUN_1469797f0 body=132 status=ok
// SIG undefined FUN_1469797f0(void)

void FUN_1469797f0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 146979874 FUN_146979874 body=124 status=ok
// SIG undefined FUN_146979874(void)

void FUN_146979874(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1469797f0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146979900 FUN_146979900 body=52 status=ok
// SIG undefined FUN_146979900(void)

undefined8 * FUN_146979900(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ef0008;
  FUN_140a503b4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146979934 FUN_146979934 body=119 status=ok
// SIG undefined FUN_146979934(void)

void FUN_146979934(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1469799ac(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1469799ac FUN_1469799ac body=141 status=ok
// SIG undefined FUN_1469799ac(void)

void FUN_1469799ac(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,0x20);
  return;
}



// FUNCTION 146979a3a FUN_146979a3a body=91 status=ok
// SIG undefined FUN_146979a3a(void)

bool FUN_146979a3a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(int *)((longlong)param_2 + 0x1c) != 0 && (longlong)*(int *)((longlong)param_1 + 0x1c) != 0)
  {
    plVar3 = (longlong *)(*param_1 - (longlong)*(int *)((longlong)param_1 + 0x1c));
    plVar4 = (longlong *)(*param_2 - (longlong)*(int *)((longlong)param_2 + 0x1c));
    if (plVar4 != plVar3) {
      uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
      return uVar1 < uVar2;
    }
  }
  return *(uint *)(param_1 + 3) < *(uint *)(param_2 + 3);
}



// FUNCTION 146979a96 FUN_146979a96 body=136 status=ok
// SIG undefined FUN_146979a96(void)

void FUN_146979a96(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  iVar7 = ~param_2 + iVar5;
  if (iVar7 != 0) {
    iVar6 = 1;
    if (iVar7 < 1) {
      iVar6 = iVar7;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar3),
            (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar3),(longlong)iVar6 << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 146979b1e FUN_146979b1e body=63 status=ok
// SIG undefined FUN_146979b1e(void)

void FUN_146979b1e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146979b5e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146979b5e FUN_146979b5e body=97 status=ok
// SIG undefined FUN_146979b5e(void)

ulonglong FUN_146979b5e(undefined8 param_1,uint param_2,uint param_3)

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



// FUNCTION 146979bc0 FUN_146979bc0 body=114 status=ok
// SIG undefined FUN_146979bc0(void)

void FUN_146979bc0(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Dst;
  
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = param_1;
  }
  plVar1 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x20);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,1);
  }
  iVar2 = *(int *)(param_1 + 0x88);
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x20);
    memmove(_Dst,(void *)((longlong)_Dst + 0x20),(longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = *(int *)(param_1 + 0x88);
  }
  *(int *)(param_1 + 0x88) = iVar2 + -1;
  return;
}



// FUNCTION 146979c32 FUN_146979c32 body=67 status=ok
// SIG undefined FUN_146979c32(void)

void FUN_146979c32(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146979c76(*(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c));
  if (iVar1 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = iVar1;
  FUN_1469799ac(param_1,*(undefined4 *)(param_1 + 0x88),iVar1);
  return;
}



// FUNCTION 146979c76 FUN_146979c76 body=108 status=ok
// SIG undefined FUN_146979c76(void)

ulonglong FUN_146979c76(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (4 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x7fffffffffffe00U) == 0) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,0);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 146979ce2 FUN_146979ce2 body=869 status=ok
// SIG undefined FUN_146979ce2(void)

void FUN_146979ce2(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  undefined1 auStack_398 [32];
  longlong *local_378;
  int local_36c;
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar20 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar20 + fVar20);
    plVar11 = &local_368;
    do {
      puVar14 = (undefined8 *)*plVar11;
      puVar13 = (undefined8 *)plVar11[1];
      local_36c = (int)plVar11[2];
      iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar14) >> 5);
      puVar16 = puVar13;
      puVar19 = puVar14;
      local_378 = plVar11;
      if (local_36c != 0) {
LAB_146979dae:
        plVar11 = local_378;
        if (8 < (int)(iVar8 + 1U)) {
          uVar9 = (ulonglong)(iVar8 + 1U >> 1);
          uVar1 = puVar14[uVar9 * 4];
          uVar2 = (puVar14 + uVar9 * 4)[1];
          local_58 = puVar14[uVar9 * 4 + 2];
          uStack_50 = (puVar14 + uVar9 * 4 + 2)[1];
          uVar3 = *puVar14;
          uVar4 = puVar14[1];
          uVar5 = puVar14[3];
          puVar14[uVar9 * 4 + 2] = puVar14[2];
          (puVar14 + uVar9 * 4 + 2)[1] = uVar5;
          puVar14[uVar9 * 4] = uVar3;
          (puVar14 + uVar9 * 4)[1] = uVar4;
          local_68._0_4_ = (undefined4)uVar1;
          local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar2;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          puVar14[2] = local_58;
          puVar14[3] = uStack_50;
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          puVar12 = puVar16 + 4;
          puVar15 = puVar14;
          local_68 = uVar1;
          uStack_60 = uVar2;
          do {
            puVar6 = puVar15 + 4;
            puVar17 = puVar15 + 4;
            do {
              puVar15 = puVar17;
              puVar18 = puVar6;
              if (puVar16 < puVar15) break;
              cVar7 = FUN_146979a3a(puVar14,puVar15);
              puVar6 = puVar18 + 4;
              puVar17 = puVar15 + 4;
            } while (cVar7 == '\0');
            puVar6 = puVar12 + -8;
            do {
              puVar17 = puVar12;
              puVar10 = puVar6;
              puVar12 = puVar17 + -4;
              if (puVar12 <= puVar14) break;
              cVar7 = FUN_146979a3a(puVar12,puVar14);
              puVar6 = puVar10 + -4;
            } while (cVar7 == '\0');
            if (puVar12 < puVar15) goto LAB_146979ea4;
            uVar1 = *puVar15;
            uVar2 = puVar15[1];
            local_58 = puVar15[2];
            uStack_50 = puVar15[3];
            uVar3 = *puVar12;
            uVar4 = puVar17[-3];
            uVar5 = puVar17[-1];
            puVar15[2] = puVar17[-2];
            puVar15[3] = uVar5;
            *puVar15 = uVar3;
            puVar15[1] = uVar4;
            local_68._0_4_ = (undefined4)uVar1;
            local_68._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar2;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            puVar17[-2] = local_58;
            puVar17[-1] = uStack_50;
            *(undefined4 *)puVar12 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar17 + -0x1c) = local_68._4_4_;
            *(undefined4 *)(puVar17 + -3) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar17 + -0x14) = uStack_60._4_4_;
            local_68 = uVar1;
            uStack_60 = uVar2;
          } while( true );
        }
        for (; local_378 = plVar11, puVar19 = puVar14, puVar13 = puVar14, puVar14 < puVar16;
            puVar16 = puVar16 + -4) {
          while (puVar12 = puVar19, puVar13 = puVar13 + 4, puVar13 <= puVar16) {
            cVar7 = FUN_146979a3a(puVar12,puVar13);
            puVar19 = puVar13;
            if (cVar7 == '\0') {
              puVar19 = puVar12;
            }
          }
          local_68 = *puVar12;
          uStack_60 = puVar12[1];
          local_58 = puVar12[2];
          uStack_50 = puVar12[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar12[2] = puVar16[2];
          puVar12[3] = uVar3;
          *puVar12 = uVar1;
          puVar12[1] = uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          plVar11 = local_378;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_14697a01e;
      }
LAB_14697a038:
      FUN_14697a048(puVar14);
      plVar11 = local_378;
LAB_14697a01e:
      plVar11 = plVar11 + -3;
    } while (&local_368 <= plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146979ea4:
  local_68 = *puVar14;
  uStack_60 = puVar14[1];
  local_58 = puVar14[2];
  uStack_50 = puVar14[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  uVar1 = *puVar12;
  uVar2 = puVar17[-3];
  uVar3 = puVar17[-1];
  puVar14[2] = puVar17[-2];
  puVar14[3] = uVar3;
  *puVar14 = uVar1;
  puVar14[1] = uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-2] = local_58;
  puVar17[-1] = uStack_50;
  *(undefined4 *)puVar12 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x14) = uStack_60._4_4_;
  local_36c = local_36c + -1;
  puVar17 = puVar17 + -8;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar10 - (longlong)puVar19 < (longlong)puVar13 - (longlong)puVar18) {
    plVar11 = local_378;
    if (puVar15 < puVar16) {
      *local_378 = (longlong)puVar15;
      local_378[1] = (longlong)puVar16;
      *(int *)(local_378 + 2) = local_36c;
      plVar11 = local_378 + 3;
    }
    puVar13 = puVar10;
    puVar18 = puVar14;
    if (puVar12 <= puVar14 + 4) goto LAB_14697a01e;
  }
  else {
    if (puVar14 + 4 < puVar12) {
      *local_378 = (longlong)puVar14;
      local_378[1] = (longlong)puVar17;
      *(int *)(local_378 + 2) = local_36c;
      local_378 = local_378 + 3;
    }
    plVar11 = local_378;
    puVar14 = puVar15;
    puVar17 = puVar16;
    puVar13 = puVar16;
    if (puVar16 <= puVar15) goto LAB_14697a01e;
  }
  local_378 = plVar11;
  iVar8 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar18) >> 5);
  puVar16 = puVar17;
  puVar19 = puVar18;
  if (local_36c == 0) goto LAB_14697a038;
  goto LAB_146979dae;
}



// FUNCTION 14697a048 FUN_14697a048 body=600 status=ok
// SIG undefined FUN_14697a048(void)

void FUN_14697a048(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    iVar16 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar13 = iVar16;
joined_r0x00014697a08d:
    do {
      iVar10 = iVar16 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar12 = iVar16 * 2 + 2;
        if ((iVar12 < (int)param_2) &&
           (cVar9 = FUN_146979a3a(param_1 + (longlong)iVar12 * 4,param_1 + (longlong)iVar10 * 4),
           cVar9 == '\0')) {
          iVar10 = iVar12;
        }
        puVar11 = param_1 + (longlong)iVar16 * 4;
        puVar14 = param_1 + (longlong)iVar10 * 4;
        cVar9 = FUN_146979a3a(puVar11,puVar14);
        if (cVar9 != '\0') {
          uVar2 = *puVar11;
          uVar3 = puVar11[1];
          local_58 = puVar11[2];
          uStack_50 = puVar11[3];
          uVar4 = *puVar14;
          uVar5 = puVar14[1];
          uVar6 = puVar14[3];
          puVar11[2] = puVar14[2];
          puVar11[3] = uVar6;
          *puVar11 = uVar4;
          puVar11[1] = uVar5;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          puVar14[2] = local_58;
          puVar14[3] = uStack_50;
          *(undefined4 *)puVar14 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar14 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar14 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar14 + 0xc) = uStack_60._4_4_;
          iVar16 = iVar10;
          local_68 = uVar2;
          uStack_60 = uVar3;
          goto joined_r0x00014697a08d;
        }
      }
      bVar17 = iVar13 != 0;
      iVar16 = iVar13 + -1;
      iVar13 = iVar16;
    } while (bVar17);
    if (1 < (int)param_2) {
      uVar15 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar15 * 4];
      uVar7 = (param_1 + uVar15 * 4)[1];
      uVar8 = (param_1 + uVar15 * 4 + 2)[1];
      param_1[2] = param_1[uVar15 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_68._0_4_ = (undefined4)uVar2;
      local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar3;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_58._0_4_ = (undefined4)uVar4;
      local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar5;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar15 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
      puVar11 = param_1 + uVar15 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar11 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_60._4_4_;
      local_68 = uVar2;
      uStack_60 = uVar3;
      local_58 = uVar4;
      uStack_50 = uVar5;
      if (param_2 != 2) {
        do {
          iVar16 = 0;
          iVar10 = 1;
          iVar13 = 0;
          do {
            iVar16 = iVar16 + 2;
            iVar12 = iVar10;
            if (((longlong)iVar16 < (longlong)uVar15) &&
               (cVar9 = FUN_146979a3a(param_1 + (longlong)iVar16 * 4,param_1 + (longlong)iVar10 * 4)
               , cVar9 == '\0')) {
              iVar12 = iVar16;
            }
            puVar14 = param_1 + (longlong)iVar13 * 4;
            puVar11 = param_1 + (longlong)iVar12 * 4;
            cVar9 = FUN_146979a3a(puVar14,puVar11);
            if (cVar9 == '\0') break;
            uVar2 = *puVar14;
            uVar3 = puVar14[1];
            uVar4 = puVar14[2];
            uVar5 = puVar14[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar14[2] = puVar11[2];
            puVar14[3] = uVar8;
            *puVar14 = uVar6;
            puVar14[1] = uVar7;
            local_68._0_4_ = (undefined4)uVar2;
            local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar3;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
            local_58._0_4_ = (undefined4)uVar4;
            local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar5;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)(puVar11 + 2) = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar11 + 0x14) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_50._4_4_;
            *(undefined4 *)puVar11 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar11 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_60._4_4_;
            iVar16 = iVar12 * 2;
            iVar10 = iVar12 * 2 + 1;
            local_68 = uVar2;
            uStack_60 = uVar3;
            local_58 = uVar4;
            uStack_50 = uVar5;
            iVar13 = iVar12;
          } while ((longlong)iVar10 < (longlong)uVar15);
          uVar1 = uVar15 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_68._0_4_ = (undefined4)uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar3;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_58._0_4_ = (undefined4)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar11 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar11 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_60._4_4_;
          bVar17 = 2 < uVar15;
          uVar15 = uVar1;
          local_68 = uVar2;
          uStack_60 = uVar3;
          local_58 = uVar4;
          uStack_50 = uVar5;
        } while (bVar17);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697a2a2 FUN_14697a2a2 body=147 status=ok
// SIG undefined FUN_14697a2a2(void)

void FUN_14697a2a2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14697a336 FUN_14697a336 body=106 status=ok
// SIG undefined FUN_14697a336(void)

void FUN_14697a336(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0x50);
  if (*(longlong *)(*param_1 + (longlong)(int)param_2 * 0x50) != 0) {
    plVar2 = (longlong *)((longlong)_Dst + 0x20);
    if (*(longlong **)((longlong)_Dst + 0x10) != (longlong *)0x0) {
      plVar2 = *(longlong **)((longlong)_Dst + 0x10);
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x50),(longlong)(int)(~param_2 + iVar1) * 0x50);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 14697a3a0 FUN_14697a3a0 body=62 status=ok
// SIG undefined FUN_14697a3a0(void)

void FUN_14697a3a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14697a3de(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,0x10);
  }
  return;
}



// FUNCTION 14697a3de FUN_14697a3de body=112 status=ok
// SIG undefined FUN_14697a3de(void)

ulonglong FUN_14697a3de(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x50) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14697a418;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x50,0x10);
      param_2 = param_2 / 0x50;
    }
  }
LAB_14697a418:
  return param_2 & 0xffffffff;
}



// FUNCTION 14697a44e FUN_14697a44e body=118 status=ok
// SIG undefined FUN_14697a44e(void)

void FUN_14697a44e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14697a4c4 FUN_14697a4c4 body=128 status=ok
// SIG undefined FUN_14697a4c4(void)

undefined8 * FUN_14697a4c4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = *param_2;
  lVar3 = param_2[1];
  param_1[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[2] = *param_3;
  lVar3 = param_3[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_3[1];
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14697a544 FUN_14697a544 body=132 status=ok
// SIG undefined FUN_14697a544(void)

void FUN_14697a544(longlong param_1,int param_2)

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



// FUNCTION 14697a5ca FUN_14697a5ca body=132 status=ok
// SIG undefined FUN_14697a5ca(void)

void FUN_14697a5ca(longlong param_1,int param_2)

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



// FUNCTION 14697a64f FUN_14697a64f body=54 status=ok
// SIG undefined FUN_14697a64f(void)

void FUN_14697a64f(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14697a686 FUN_14697a686 body=52 status=ok
// SIG undefined FUN_14697a686(void)

void FUN_14697a686(void)

{
  if (1 < DAT_14c98d878) {
    FUN_146199c1e();
    DAT_14c98d878 = 1;
    FUN_14697a828();
    return;
  }
  FUN_14697a6ba();
  FUN_146199c1e();
  return;
}



// FUNCTION 14697a6ba FUN_14697a6ba body=364 status=ok
// SIG undefined FUN_14697a6ba(void)

void FUN_14697a6ba(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c98d868;
  if (DAT_14c98d870 != (undefined *)0x0) {
    puVar5 = DAT_14c98d870;
  }
  iVar4 = DAT_14c98d878 + 3;
  if (-1 < DAT_14c98d878) {
    iVar4 = DAT_14c98d878;
  }
  if (DAT_14c98d838 - DAT_14c98d864 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c98d840;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c98d858 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c98d858;
    }
    local_78 = &DAT_14c98d830;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c98d840)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar2 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c98d830 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c98d840 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c98d878) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14c98d878);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697a828 FUN_14697a828 body=518 status=ok
// SIG undefined FUN_14697a828(void)

void FUN_14697a828(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98d870 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c98d870,0,0,4);
  }
  uVar7 = DAT_14c98d878;
  uVar2 = local_50;
  if (DAT_14c98d878 != 0) {
    uVar6 = 0;
    FUN_144a1cbf0(&DAT_14c98d868,0,DAT_14c98d878,4);
    if (0 < (int)uVar7) {
      do {
        puVar4 = DAT_14c98d870;
        if (DAT_14c98d870 == (undefined *)0x0) {
          puVar4 = &DAT_14c98d868;
        }
        *(undefined4 *)(puVar4 + (ulonglong)(DAT_14c98d878 + 0x7fffffff & uVar6) * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c98d840;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c98d858 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c98d830;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar2 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar3 = local_50._4_4_;
      local_50 = uVar2;
      do {
        lVar1 = *local_68;
        lVar5 = (longlong)iVar3 * 0x20;
        uVar7 = ((uint)(*(ulonglong *)(lVar1 + lVar5) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar1 + lVar5) >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)DAT_14c98d878 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar5) = iVar8;
        puVar4 = DAT_14c98d870;
        if (DAT_14c98d870 == (undefined *)0x0) {
          puVar4 = &DAT_14c98d868;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar5) =
             *(undefined4 *)(puVar4 + ((longlong)(int)DAT_14c98d878 - 1U & uVar9) * 4);
        puVar4 = DAT_14c98d870;
        if (DAT_14c98d870 == (undefined *)0x0) {
          puVar4 = &DAT_14c98d868;
        }
        *(int *)(puVar4 + ((longlong)iVar8 & (longlong)(int)DAT_14c98d878 - 1U) * 4) = iVar3;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar3 = local_50._4_4_;
        uVar2 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697aa30 FUN_14697aa30 body=52 status=ok
// SIG undefined FUN_14697aa30(void)

void FUN_14697aa30(void)

{
  if (1 < DAT_14c98d8c8) {
    FUN_146199dec();
    DAT_14c98d8c8 = 1;
    FUN_14697abd2();
    return;
  }
  FUN_14697aa64();
  FUN_146199dec();
  return;
}



// FUNCTION 14697aa64 FUN_14697aa64 body=364 status=ok
// SIG undefined FUN_14697aa64(void)

void FUN_14697aa64(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14c98d8b8;
  if (DAT_14c98d8c0 != (undefined *)0x0) {
    puVar5 = DAT_14c98d8c0;
  }
  iVar4 = DAT_14c98d8c8 + 3;
  if (-1 < DAT_14c98d8c8) {
    iVar4 = DAT_14c98d8c8;
  }
  if (DAT_14c98d888 - DAT_14c98d8b4 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14c98d890;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14c98d8a8 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14c98d8a8;
    }
    local_78 = &DAT_14c98d880;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14c98d890)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar2 * 0x20) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14c98d880 ||
               ((undefined *)CONCAT44(uStack_64,uStack_68) != &DAT_14c98d890 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14c98d8c8) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14c98d8c8);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697abd2 FUN_14697abd2 body=467 status=ok
// SIG undefined FUN_14697abd2(void)

void FUN_14697abd2(void)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98d8c0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c98d8c0,0,0,4);
  }
  uVar2 = DAT_14c98d8c8;
  uVar3 = local_50;
  if (DAT_14c98d8c8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14c98d8b8,0,DAT_14c98d8c8,4);
    if (0 < (int)uVar2) {
      do {
        puVar5 = DAT_14c98d8c0;
        if (DAT_14c98d8c0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d8b8;
        }
        *(undefined4 *)(puVar5 + (ulonglong)(DAT_14c98d8c8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14c98d890;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14c98d8a8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14c98d880;
    local_60 = local_40;
    local_58 = local_38;
    local_50 = local_30;
    uVar3 = local_50;
    local_48 = local_28;
    local_44 = local_24;
    local_50._4_4_ = (int)((ulonglong)local_30 >> 0x20);
    if (local_50._4_4_ < *(int *)(local_38 + 0x18)) {
      iVar4 = local_50._4_4_;
      local_50 = uVar3;
      do {
        lVar1 = *local_68;
        lVar6 = (longlong)iVar4 * 0x20;
        uVar9 = (longlong)(int)DAT_14c98d8c8 - 1U & (longlong)*(int *)(lVar1 + lVar6);
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x1c + lVar6) = iVar8;
        puVar5 = DAT_14c98d8c0;
        if (DAT_14c98d8c0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d8b8;
        }
        *(undefined4 *)(lVar1 + 0x18 + lVar6) =
             *(undefined4 *)(puVar5 + ((longlong)(int)DAT_14c98d8c8 - 1U & uVar9) * 4);
        puVar5 = DAT_14c98d8c0;
        if (DAT_14c98d8c0 == (undefined *)0x0) {
          puVar5 = &DAT_14c98d8b8;
        }
        *(int *)(puVar5 + ((longlong)iVar8 & (longlong)(int)DAT_14c98d8c8 - 1U) * 4) = iVar4;
        local_50 = CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
        FUN_1449c0562(&local_60);
        iVar4 = local_50._4_4_;
        uVar3 = local_50;
      } while (local_50._4_4_ < *(int *)(local_58 + 0x18));
    }
  }
  local_50 = uVar3;
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14697ada6 FUN_14697ada6 body=236 status=ok
// SIG undefined FUN_14697ada6(void)

void FUN_14697ada6(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  longlong lVar6;
  
  if (DAT_14c98d838 != DAT_14c98d864) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14c98d868;
    if (DAT_14c98d870 != (undefined *)0x0) {
      puVar5 = DAT_14c98d870;
    }
    for (iVar1 = *(int *)(puVar5 + ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) &
                                   (longlong)DAT_14c98d878 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14c98d830 + 0x18)) {
      if (*(ulonglong *)(DAT_14c98d830 + (longlong)iVar1 * 0x20) == param_1) {
        puVar5 = &DAT_14c98d868;
        if (DAT_14c98d870 != (undefined *)0x0) {
          puVar5 = DAT_14c98d870;
        }
        lVar6 = (longlong)*(int *)(DAT_14c98d830 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar5 + lVar6 * 4);
        if (iVar4 == iVar1) {
          puVar3 = (undefined4 *)(puVar5 + lVar6 * 4);
        }
        else {
          do {
            lVar6 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14c98d830 + 0x18 + lVar6 * 0x20);
          } while (iVar4 != iVar1);
          puVar3 = (undefined4 *)(DAT_14c98d830 + lVar6 * 0x20 + 0x18);
        }
        *puVar3 = *(undefined4 *)(DAT_14c98d830 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_14697ae92();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14697ae92 FUN_14697ae92 body=74 status=ok
// SIG undefined FUN_14697ae92(void)

void FUN_14697ae92(int param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(DAT_14c98d830 + 0x10 + (longlong)param_1 * 0x20);
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
  FUN_14697aedc(param_1);
  return;
}



// FUNCTION 14697aedc FUN_14697aedc body=128 status=ok
// SIG undefined FUN_14697aedc(void)

void FUN_14697aedc(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c98d830;
  if (DAT_14c98d864 != 0) {
    *(int *)(DAT_14c98d830 + (longlong)DAT_14c98d860 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c98d864) {
    iVar4 = DAT_14c98d860;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c98d864 = DAT_14c98d864 + 1;
  puVar3 = &DAT_14c98d840;
  if (DAT_14c98d850 != (undefined *)0x0) {
    puVar3 = DAT_14c98d850;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c98d860 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}


