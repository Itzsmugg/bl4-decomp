// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14709e888 FUN_14709e888 body=454 status=ok
// SIG undefined FUN_14709e888(void)

void FUN_14709e888(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  char *_Str2;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  ulonglong uVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  
  if (0x800000000000000 < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("invalid hash bucket count");
  }
  uVar11 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar9 = -((byte)lVar14 ^ 0x3f);
  lVar14 = 1L << (bVar9 & 0x3f);
  plVar1 = *(longlong **)(param_1 + 8);
  FUN_141306e40(param_1 + 0x18,2L << (bVar9 & 0x3f),plVar1);
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  *(longlong *)(param_1 + 0x38) = lVar14;
  plVar7 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x00014709e8f7:
  do {
    while( true ) {
      while( true ) {
        if (plVar7 == plVar1) {
          return;
        }
        _Str2 = (char *)plVar7[2];
        cVar10 = *_Str2;
        if (cVar10 == '\0') {
          uVar11 = 0x1505;
        }
        else {
          uVar11 = 0x1505;
          pcVar12 = _Str2;
          do {
            pcVar12 = pcVar12 + 1;
            uVar11 = (longlong)cVar10 + uVar11 * 0x21;
            cVar10 = *pcVar12;
          } while (cVar10 != '\0');
        }
        plVar2 = (longlong *)*plVar7;
        uVar11 = uVar11 & *(ulonglong *)(param_1 + 0x30);
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar14 = uVar11 * 2 + 1;
        plVar4 = *(longlong **)(lVar3 + uVar11 * 0x10);
        if (plVar4 != plVar1) break;
        *(longlong **)(lVar3 + uVar11 * 0x10) = plVar7;
        *(longlong **)(lVar3 + lVar14 * 8) = plVar7;
        plVar7 = plVar2;
      }
      plVar13 = *(longlong **)(lVar3 + lVar14 * 8);
      iVar8 = strcmp((char *)plVar13[2],_Str2);
      if (iVar8 != 0) break;
      plVar13 = (longlong *)*plVar13;
      if (plVar13 != plVar7) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar13;
        puVar6 = (undefined8 *)plVar13[1];
        *puVar6 = plVar7;
        plVar13[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
      }
      *(longlong **)(lVar3 + lVar14 * 8) = plVar7;
      plVar7 = plVar2;
    }
    do {
      if (plVar4 == plVar13) {
        plVar4 = (longlong *)plVar7[1];
        *plVar4 = (longlong)plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar13;
        puVar6 = (undefined8 *)plVar13[1];
        *puVar6 = plVar7;
        plVar13[1] = (longlong)puVar5;
        plVar2[1] = (longlong)plVar4;
        plVar7[1] = (longlong)puVar6;
        *(longlong **)(lVar3 + uVar11 * 0x10) = plVar7;
        plVar7 = plVar2;
        goto joined_r0x00014709e8f7;
      }
      plVar13 = (longlong *)plVar13[1];
      iVar8 = strcmp((char *)plVar13[2],_Str2);
    } while (iVar8 != 0);
    lVar14 = *plVar13;
    plVar4 = (longlong *)plVar7[1];
    *plVar4 = (longlong)plVar2;
    plVar13 = (longlong *)plVar2[1];
    *plVar13 = lVar14;
    puVar5 = *(undefined8 **)(lVar14 + 8);
    *puVar5 = plVar7;
    *(longlong **)(lVar14 + 8) = plVar13;
    plVar2[1] = (longlong)plVar4;
    plVar7[1] = (longlong)puVar5;
    plVar7 = plVar2;
  } while( true );
}



// FUNCTION 14709ea50 FUN_14709ea50 body=29 status=ok
// SIG undefined FUN_14709ea50(void)

undefined8 FUN_14709ea50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709ea8c FUN_14709ea8c body=38 status=ok
// SIG undefined FUN_14709ea8c(void)

undefined8 FUN_14709ea8c(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709eab2 FUN_14709eab2 body=38 status=ok
// SIG undefined FUN_14709eab2(void)

undefined8 FUN_14709eab2(undefined8 param_1,int param_2)

{
  FUN_1401a53d4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709ead8 FUN_14709ead8 body=134 status=ok
// SIG undefined FUN_14709ead8(void)

void FUN_14709ead8(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  
  lVar1 = (longlong)param_1 * 0x40;
  puVar4 = &DAT_14c9a1708;
  if (DAT_14c9a1710 != (undefined *)0x0) {
    puVar4 = DAT_14c9a1710;
  }
  lVar5 = (longlong)*(int *)(DAT_14c9a16d0 + 0x3c + lVar1);
  iVar3 = *(int *)(puVar4 + lVar5 * 4);
  if (iVar3 == param_1) {
    puVar2 = (undefined4 *)(puVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(DAT_14c9a16d0 + 0x38 + lVar5 * 0x40);
    } while (iVar3 != param_1);
    puVar2 = (undefined4 *)(DAT_14c9a16d0 + lVar5 * 0x40 + 0x38);
  }
  *puVar2 = *(undefined4 *)(DAT_14c9a16d0 + lVar1 + 0x38);
  if (*(longlong *)(DAT_14c9a16d0 + 0x20 + lVar1) != 0) {
    FUN_1400020a8();
  }
  FUN_14709eb94(param_1);
  return;
}



// FUNCTION 14709eb5e FUN_14709eb5e body=53 status=ok
// SIG undefined FUN_14709eb5e(void)

ulonglong FUN_14709eb5e(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14709eb94 FUN_14709eb94 body=128 status=ok
// SIG undefined FUN_14709eb94(void)

void FUN_14709eb94(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a16d0;
  if (DAT_14c9a1704 != 0) {
    *(int *)(DAT_14c9a16d0 + (longlong)DAT_14c9a1700 * 0x40) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x40) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a1704) {
    iVar4 = DAT_14c9a1700;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x40) = iVar4;
  DAT_14c9a1704 = DAT_14c9a1704 + 1;
  puVar3 = &DAT_14c9a16e0;
  if (DAT_14c9a16f0 != (undefined *)0x0) {
    puVar3 = DAT_14c9a16f0;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a1700 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14709ec14 FUN_14709ec14 body=176 status=ok
// SIG undefined FUN_14709ec14(void)

void FUN_14709ec14(undefined8 *param_1,int param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 *_Dst;
  ulonglong uVar2;
  
  if (-1 < (longlong)param_3) {
    if (param_3 < 0x10) {
      param_1[2] = param_3;
      param_1[3] = 0xf;
      memset(param_1,param_2,param_3);
      _Dst = param_1;
    }
    else {
      param_1[3] = 0xf;
      uVar1 = param_3 | 0xf;
      uVar2 = 0x16;
      if (0x16 < uVar1) {
        uVar2 = uVar1;
      }
      if (uVar1 < 0xfff) {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2 + 1,0x10);
      }
      else {
        _Dst = (undefined8 *)FUN_140c1ca1d();
      }
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memset(_Dst,param_2,param_3);
    }
    *(undefined1 *)((longlong)_Dst + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 14709ecc6 FUN_14709ecc6 body=118 status=ok
// SIG undefined FUN_14709ecc6(void)

void FUN_14709ecc6(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (ulonglong)param_2 * 0x10);
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
  iVar5 = (int)param_1[2];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (ulonglong)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[2];
  }
  *(int *)(param_1 + 2) = iVar5 + -1;
  return;
}



// FUNCTION 14709ed3c FUN_14709ed3c body=58 status=ok
// SIG undefined FUN_14709ed3c(void)

void FUN_14709ed3c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14709ed76(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_145de930c(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,0x10);
  return;
}



// FUNCTION 14709ed76 FUN_14709ed76 body=90 status=ok
// SIG undefined FUN_14709ed76(void)

ulonglong FUN_14709ed76(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,0);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14709edd0 FUN_14709edd0 body=128 status=ok
// SIG undefined FUN_14709edd0(void)

void FUN_14709edd0(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c9a1540;
  if (DAT_14c9a1574 != 0) {
    *(int *)(DAT_14c9a1540 + (longlong)DAT_14c9a1570 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c9a1574) {
    iVar4 = DAT_14c9a1570;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14c9a1574 = DAT_14c9a1574 + 1;
  puVar3 = &DAT_14c9a1550;
  if (DAT_14c9a1560 != (undefined *)0x0) {
    puVar3 = DAT_14c9a1560;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c9a1570 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14709ee50 FUN_14709ee50 body=150 status=ok
// SIG undefined FUN_14709ee50(void)

void FUN_14709ee50(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x60 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
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
      puVar7 = puVar7 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14709eee6 FUN_14709eee6 body=98 status=ok
// SIG undefined FUN_14709eee6(void)

void FUN_14709eee6(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined3 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (code *)*param_1;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uStack_10 = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x1f) >> 8);
  local_20 = *(undefined4 *)(param_2 + 2);
  uStack_1c = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 3);
  uStack_14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  (*pcVar1)();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14709ef68 FUN_14709ef68 body=25 status=ok
// SIG undefined FUN_14709ef68(void)

void FUN_14709ef68(longlong *param_1)

{
  if (*(code **)(*param_1 + 0x18) == FUN_14709ef82) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014709ef7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14709ef82 FUN_14709ef82 body=31 status=ok
// SIG undefined FUN_14709ef82(void)

undefined8 FUN_14709ef82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709efa2 FUN_14709efa2 body=119 status=ok
// SIG undefined FUN_14709efa2(void)

void FUN_14709efa2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14709f01a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14709f01a FUN_14709f01a body=141 status=ok
// SIG undefined FUN_14709f01a(void)

void FUN_14709f01a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 14709f0a8 FUN_14709f0a8 body=150 status=ok
// SIG undefined FUN_14709f0a8(void)

void FUN_14709f0a8(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x30 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
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
      puVar7 = puVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14709f13e FUN_14709f13e body=150 status=ok
// SIG undefined FUN_14709f13e(void)

void FUN_14709f13e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x1a8,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a8)) {
      uVar5 = uVar4 / 0x1a8 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14709f1d6 FUN_14709f1d6 body=138 status=ok
// SIG undefined FUN_14709f1d6(void)

void FUN_14709f1d6(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14709f260 FUN_14709f260 body=132 status=ok
// SIG undefined FUN_14709f260(void)

void FUN_14709f260(longlong param_1,int param_2)

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



// FUNCTION 14709f2e6 FUN_14709f2e6 body=132 status=ok
// SIG undefined FUN_14709f2e6(void)

void FUN_14709f2e6(longlong param_1,int param_2)

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



// FUNCTION 14709f36c FUN_14709f36c body=38 status=ok
// SIG undefined FUN_14709f36c(void)

undefined8 FUN_14709f36c(undefined8 param_1,int param_2)

{
  FUN_1401a54fe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14709f392 FUN_14709f392 body=132 status=ok
// SIG undefined FUN_14709f392(void)

void FUN_14709f392(longlong param_1,int param_2)

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



// FUNCTION 14709f418 FUN_14709f418 body=107 status=ok
// SIG undefined FUN_14709f418(void)

/* WARNING: Removing unreachable block (ram,0x00014709f44a) */
/* WARNING: Removing unreachable block (ram,0x00014709f426) */
/* WARNING: Removing unreachable block (ram,0x00014709f43c) */
/* WARNING: Removing unreachable block (ram,0x00014709f455) */
/* WARNING: Removing unreachable block (ram,0x00014709f43e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14709f418(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c9a16a0;
  LOCK();
  UNLOCK();
  DAT_14c9a16a0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14c9a16a8 = _DAT_14c9a16a8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14c9a16a8 = _DAT_14c9a16a8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14709f484 FUN_14709f484 body=166 status=ok
// SIG undefined FUN_14709f484(void)

undefined8 * FUN_14709f484(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
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
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  return param_1;
}



// FUNCTION 14709f52a FUN_14709f52a body=147 status=ok
// SIG undefined FUN_14709f52a(void)

void FUN_14709f52a(longlong param_1,int param_2)

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



// FUNCTION 14709f5be FUN_14709f5be body=114 status=ok
// SIG undefined FUN_14709f5be(void)

void FUN_14709f5be(longlong *param_1,int param_2)

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



// FUNCTION 14709f630 FUN_14709f630 body=62 status=ok
// SIG undefined FUN_14709f630(void)

void FUN_14709f630(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14709f66e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14709f66e FUN_14709f66e body=93 status=ok
// SIG undefined FUN_14709f66e(void)

ulonglong FUN_14709f66e(uint param_1,uint param_2)

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



// FUNCTION 14709f6cc FUN_14709f6cc body=114 status=ok
// SIG undefined FUN_14709f6cc(void)

void FUN_14709f6cc(longlong *param_1,int param_2)

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



// FUNCTION 14709f73e FUN_14709f73e body=132 status=ok
// SIG undefined FUN_14709f73e(void)

void FUN_14709f73e(longlong param_1,int param_2)

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



// FUNCTION 14709f7c4 FUN_14709f7c4 body=110 status=ok
// SIG undefined FUN_14709f7c4(void)

void FUN_14709f7c4(longlong param_1,int param_2)

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
    FUN_14709f834(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14709f834 FUN_14709f834 body=132 status=ok
// SIG undefined FUN_14709f834(void)

void FUN_14709f834(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 14709f8b8 FUN_14709f8b8 body=116 status=ok
// SIG undefined FUN_14709f8b8(void)

void FUN_14709f8b8(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_14709f92e(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14709f92e FUN_14709f92e body=133 status=ok
// SIG undefined FUN_14709f92e(void)

void FUN_14709f92e(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 14709f9b4 FUN_14709f9b4 body=116 status=ok
// SIG undefined FUN_14709f9b4(void)

void FUN_14709f9b4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 14709fa28 FUN_14709fa28 body=132 status=ok
// SIG undefined FUN_14709fa28(void)

void FUN_14709fa28(longlong param_1,int param_2)

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



// FUNCTION 14709faae FUN_14709faae body=95 status=ok
// SIG undefined FUN_14709faae(void)

int FUN_14709faae(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14709fb0e FUN_14709fb0e body=390 status=ok
// SIG undefined FUN_14709fb0e(void)

undefined8 FUN_14709fb0e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_14115b8c4(param_2,0);
  }
  iVar5 = *(int *)(param_1 + 0x280) - *(int *)(param_1 + 0x2ac);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar5) {
    FUN_14115b8c4(param_2);
  }
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar6 = *(uint *)(param_1 + 0x2a0);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  uStack_74 = uStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  uVar4 = (ulonglong)uStack_54;
  local_90 = plVar1;
  if ((uStack_54 != uVar6) || (uStack_60 != lVar2)) {
    do {
      lVar3 = *local_90;
      lVar7 = (longlong)(int)uVar4 * 0x20;
      if (*(longlong *)(lVar3 + 0x10 + lVar7) != 0) {
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_14709f73e(param_2,iVar5);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar3 + lVar7 + 0x10);
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
      uVar4 = (ulonglong)uStack_74;
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || uStack_74 != uVar6));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 14709fc96 FUN_14709fc96 body=414 status=ok
// SIG undefined FUN_14709fc96(void)

void FUN_14709fc96(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined ***pppuVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68;
  undefined8 *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_88 = (undefined1 *)0x100000000;
  local_78 = (undefined ***)&DAT_ffffffff;
  uStack_70 = 0;
  local_90 = param_2;
  uStack_80 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar6 = 0;
  }
  else {
    FUN_1449c0562(&local_88);
    iVar6 = *(int *)(param_1 + 0x2a0);
  }
  uStack_98 = CONCAT44(uStack_6c,uStack_70);
  local_a0 = local_78;
  pppuVar5 = local_a0;
  local_b0 = (undefined4)local_88;
  uStack_ac = local_88._4_4_;
  uStack_a8 = (undefined4)uStack_80;
  uStack_a4 = uStack_80._4_4_;
  local_a0._4_4_ = (int)((ulonglong)local_78 >> 0x20);
  local_b8 = plVar1;
  if ((local_a0._4_4_ != iVar6) || (uStack_80 != lVar2)) {
    iVar4 = local_a0._4_4_;
    local_a0 = pppuVar5;
    do {
      lVar3 = *(longlong *)(*local_b8 + 0x10 + (longlong)iVar4 * 0x20);
      if (lVar3 != 0) {
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a178ed0;
        local_60 = &local_90;
        local_88 = &LAB_142b28904;
        FUN_14709ddbe(param_1,param_3,*(undefined8 *)(lVar3 + 0x60),&local_88);
        if (local_88 != (undefined1 *)0x0) {
          pppuVar5 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar5 = &local_68;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      local_a0 = (undefined ***)CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
      FUN_1449c0562(&local_b0);
      iVar4 = local_a0._4_4_;
      pppuVar5 = local_a0;
    } while (local_b8 != plVar1 ||
             (CONCAT44(uStack_a4,uStack_a8) != lVar2 || local_a0._4_4_ != iVar6));
  }
  local_a0 = pppuVar5;
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14709fe36 FUN_14709fe36 body=32 status=ok
// SIG undefined FUN_14709fe36(void)

undefined8 FUN_14709fe36(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 14709fe56 FUN_14709fe56 body=74 status=ok
// SIG undefined FUN_14709fe56(void)

undefined8 FUN_14709fe56(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_144837648(param_1,param_3,1);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014709fe93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x418))(param_1,param_2,lVar1,param_3);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14709fea0 FUN_14709fea0 body=35 status=ok
// SIG undefined FUN_14709fea0(void)

void FUN_14709fea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837648(param_1,param_3,0);
  FUN_14709d400(param_2,uVar1);
  return;
}



// FUNCTION 14709fef6 FUN_14709fef6 body=698 status=ok
// SIG undefined FUN_14709fef6(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_14709fef6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  bool bVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong local_158;
  int local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  longlong local_120 [2];
  longlong *plStack_110;
  longlong local_108 [6];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a0;
  int local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_108[0] = 0;
  local_108[1] = 0;
  cVar6 = (**(code **)(*param_1 + 0x418))(param_1,local_108,param_3,param_3);
  if (cVar6 != '\0') {
    local_120[1] = 0;
    plStack_110 = (longlong *)0x0;
    cVar6 = FUN_1446e9750(param_1,local_120 + 1,local_108,0);
    if (cVar6 == '\0') {
      bVar4 = true;
    }
    else {
      param_1 = &local_a0;
      FUN_14480757c(param_1,&DAT_14c9a17e0);
      puVar7 = (undefined8 *)FUN_144a06846(local_120 + 1,param_1);
      pbVar3 = (byte *)*puVar7;
      if ((pbVar3 == (byte *)0x0) || ((*pbVar3 & 3) != 1)) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(undefined8 *)(pbVar3 + 8);
      }
      FUN_1446ddc76(local_120,uVar9,1);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      bVar4 = true;
      if (local_120[0] != 0) {
        param_1 = &local_128;
        FUN_1446ddc76(param_1,"AssetRegistry",1);
        lVar8 = FUN_1447c1074(local_128);
        plVar5 = DAT_14c9485b8;
        if (DAT_14c9485b8 != (longlong *)0x0 && lVar8 != 0) {
          param_1 = &local_158;
          FUN_1400021e4(local_120,param_1);
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_a0 = local_158;
          local_98 = local_150 + -1;
          if (local_150 == 0) {
            local_98 = 0;
          }
          FUN_14475bf92(&local_148);
          local_168 = 1;
          (**(code **)(*plVar5 + 0x98))(plVar5,&local_a0,&local_148,0);
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          bVar4 = local_90 == 0 || local_a0 == 0;
          if (local_90 != 0 && local_a0 != 0) {
            local_d8 = 0;
            local_d0 = 0;
            local_108[2] = 0;
            local_108[3] = 0;
            local_cc = 0xffffffff00000080;
            local_c4 = 0;
            local_b8 = 0;
            local_b0 = 0;
            param_1 = (longlong *)FUN_14700c192(&local_a0);
            if (param_1 != (longlong *)0x0) {
              lVar8 = FUN_1446f4bba();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                  lVar8 + 0x30)) goto LAB_1470a00a1;
            }
            param_1 = (longlong *)0x0;
          }
LAB_1470a00a1:
          FUN_14128b0c2(&local_a0);
        }
      }
    }
    plVar5 = plStack_110;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_110 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_110)(plStack_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (!bVar4) goto LAB_1470a00df;
  }
  param_1 = (longlong *)0x0;
LAB_1470a00df:
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a01ee FUN_1470a01ee body=63 status=ok
// SIG undefined FUN_1470a01ee(void)

longlong FUN_1470a01ee(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1470a34e0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x60 + *param_1;
  FUN_1470a34a5(lVar2);
  return lVar2;
}



// FUNCTION 1470a022e FUN_1470a022e body=425 status=ok
// SIG undefined FUN_1470a022e(void)

void FUN_1470a022e(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
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
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar2 = param_1 + 0x80;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar7 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar7 = *(int *)(param_1 + 0x98);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar7) || (bVar8 = true, uStack_58 != lVar2)) {
    bVar8 = false;
    do {
      lVar3 = *(longlong *)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      if (lVar3 != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x150);
        if (lVar4 == 0) {
          cVar5 = '\x01';
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(lVar4 + 0x40);
          cVar5 = *(char *)(lVar4 + 0x36);
        }
        if ((iVar6 != *(int *)(lVar3 + 0x15c)) || (cVar5 != *(char *)(lVar3 + 0x158))) {
          *(int *)(lVar3 + 0x15c) = iVar6;
          *(char *)(lVar3 + 0x158) = cVar5;
          *(byte *)(lVar3 + 0x160) = *(byte *)(lVar3 + 0x160) | 2;
          bVar8 = true;
        }
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar7));
    bVar8 = !bVar8;
  }
  if (param_2 != '\0') {
    FUN_1447f69b6(param_1 + 0x28);
    if (DAT_14c83bb80 != (longlong *)0x0 && DAT_14c83bb88 != 0) {
      (**(code **)(*DAT_14c83bb80 + 0x60))();
    }
    if (!bVar8) {
      FUN_1470a0480(param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a03d8 FUN_1470a03d8 body=167 status=ok
// SIG undefined FUN_1470a03d8(void)

void FUN_1470a03d8(longlong param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [47];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x2d0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2c8);
    lVar5 = (longlong)*(int *)(param_1 + 0x2d0) * 0x60;
    do {
      lVar5 = lVar5 + -0x60;
      local_39 = '\0';
      pcVar1 = (code *)*param_2;
      plVar3 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar3 = param_2 + 4;
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,lVar4,&local_39);
    } while ((local_39 == '\0') && (lVar4 = lVar4 + 0x60, lVar5 != 0));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a0480 FUN_1470a0480 body=838 status=ok
// SIG undefined FUN_1470a0480(void)

void FUN_1470a0480(longlong param_1)

{
  longlong *plVar1;
  byte *pbVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar8 = *(int *)(param_1 + 0xd0);
  if (0 < iVar8) {
    lVar6 = 0;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 200) + lVar6 * 8);
      if (lVar9 != 0) {
        pbVar2 = (byte *)(lVar9 + 200);
        *pbVar2 = *pbVar2 & 0xfd;
        iVar8 = *(int *)(param_1 + 0xd0);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar8);
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar6 = param_1 + 0x80;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar6;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar8 = *(int *)(param_1 + 0x98);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (uStack_50 != lVar6)) {
    do {
      lVar9 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if ((lVar9 != 0) && ((*(byte *)(lVar9 + 0x160) & 3) != 0)) {
        iVar5 = *(int *)(param_1 + 0xd0);
        if (0 < iVar5) {
          lVar7 = 0;
          do {
            if (0 < *(int *)(*(longlong *)(lVar9 + 0x188) + lVar7 * 4)) {
              pbVar2 = (byte *)(*(longlong *)(*(longlong *)(param_1 + 200) + lVar7 * 8) + 200);
              *pbVar2 = *pbVar2 | 2;
              iVar5 = *(int *)(param_1 + 0xd0);
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < iVar5);
        }
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar6 || iStack_64 != iVar8));
  }
  *(undefined1 *)(param_1 + 0x1e0) = 1;
  *(undefined4 *)(param_1 + 0x1e4) = DAT_14c9a1758;
  if (0 < *(int *)(param_1 + 0xd0)) {
    lVar9 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 200) + lVar9 * 8);
      if ((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x19) & 2) != 0)) {
        cVar4 = (**(code **)(*plVar3 + 0x3d8))(plVar3,0);
        if (cVar4 != '\0') {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 200) + lVar9 * 8) + 0x3d0))();
          FUN_1406b695a(*(undefined8 *)(*(longlong *)(param_1 + 200) + lVar9 * 8));
          *(undefined1 *)(param_1 + 0x5c8) = 1;
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(int *)(param_1 + 0xd0));
  }
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar8 = 0;
    uStack_50 = lVar6;
  }
  else {
    uStack_50 = lVar6;
    FUN_1449c0562(&local_58);
    iVar8 = *(int *)(param_1 + 0x98);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar8) || (uStack_50 != lVar6)) {
    do {
      lVar9 = *(longlong *)(*local_80 + 8 + (longlong)iStack_64 * 0x18);
      if (lVar9 != 0) {
        pbVar2 = (byte *)(lVar9 + 0x160);
        *pbVar2 = *pbVar2 & 0xfc;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (local_80 != plVar1 || (CONCAT44(uStack_6c,uStack_70) != lVar6 || iStack_64 != iVar8));
  }
  if (*(char *)(param_1 + 0x1e0) == '\x01') {
    iVar8 = *(int *)(param_1 + 0xd0);
    if ((longlong)iVar8 != 0) {
      lVar6 = *(longlong *)(param_1 + 200);
      lVar9 = 0;
      do {
        lVar7 = *(longlong *)(lVar6 + lVar9);
        if (*(char *)(lVar7 + 0xc9) == '\x01') {
          FUN_14709d3fe(lVar7,*(undefined4 *)(param_1 + 0x1e4));
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)iVar8 * 8 != lVar9);
    }
    *(undefined1 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  lVar6 = DAT_14c9a1ab0;
  if ((DAT_14c9a1ab0 != 0) && (*(char *)(DAT_14c9a1ab0 + 0x5c8) == '\x01')) {
    *(undefined1 *)(DAT_14c9a1ab0 + 0x5c8) = 0;
    FUN_1447f69b6(lVar6 + 0x5b0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a07cc FUN_1470a07cc body=49 status=ok
// SIG undefined FUN_1470a07cc(void)

void FUN_1470a07cc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar2 = 0;
  }
  FUN_14482b126(lVar2,0x40000000);
  return;
}



// FUNCTION 1470a080e FUN_1470a080e body=752 status=ok
// SIG undefined FUN_1470a080e(void)

longlong FUN_1470a080e(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                      longlong param_5)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong local_190 [2];
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170 [2];
  undefined2 *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  ulonglong local_150;
  undefined2 *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_78 = 0xffffffffffffffff;
  uStack_70 = 0;
  local_68 = 0x3f80000000000001;
  FUN_1446ddc76(&uStack_70,param_3,1);
  local_170[0] = 1;
  local_168 = &DAT_14a171d50;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  local_148 = &DAT_14a171d50;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_128 = &DAT_14a171d50;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_108 = &DAT_14a171d50;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  local_e8 = &DAT_14a171d50;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_178,puVar2,1);
  if (param_5 != 0) {
    local_150 = local_150 & 0xffffffff00000000;
    local_160 = *(undefined8 *)(param_5 + 0x50);
    FUN_1406022fe(&uStack_158,param_5 + 0x58);
    (**(code **)(local_148 + 0x10))(&local_148,0);
    local_140 = *(undefined8 *)(param_5 + 0x70);
    FUN_1406022fe(&uStack_138,param_5 + 0x78);
    (**(code **)(local_128 + 0x10))(&local_128,0);
    local_120 = *(undefined8 *)(param_5 + 0x90);
    FUN_1406022fe(&uStack_118,param_5 + 0x98);
    (**(code **)(local_108 + 0x10))(&local_108,0);
    local_100 = *(undefined8 *)(param_5 + 0xb0);
    FUN_1406022fe(&uStack_f8,param_5 + 0xb8);
    (**(code **)(local_e8 + 0x10))(&local_e8,0);
    local_e0 = *(undefined8 *)(param_5 + 0xd0);
    FUN_1406022fe(&uStack_d8,param_5 + 0xd8);
    if (*(int *)(param_2 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    FUN_140056680(local_190,puVar2);
    FUN_140e89a5a(&local_180,param_5,local_190);
    local_178 = local_180;
    if (local_190[0] != 0) {
      FUN_1400020a8();
    }
  }
  local_198 = param_4;
  lVar1 = FUN_1412927d8(param_1,local_170,&local_c8,&local_178);
  if (lVar1 != 0) {
    *(byte *)(lVar1 + 0x160) = *(byte *)(lVar1 + 0x160) | 0x20;
  }
  FUN_140a6c880(local_170);
  FUN_142b145b4(&local_c8);
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a0b00 FUN_1470a0b00 body=123 status=ok
// SIG undefined FUN_1470a0b00(void)

undefined8 FUN_1470a0b00(char *param_1,char *param_2)

{
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  char extraout_AL_02;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined8 uVar1;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  if (*param_1 == *param_2) {
    FUN_147091310(param_1 + 8,param_2 + 8);
    uVar2 = extraout_var;
    if (extraout_AL == '\0') {
      FUN_147091310(param_1 + 0x28,param_2 + 0x28);
      uVar2 = extraout_var_00;
      if (extraout_AL_00 == '\0') {
        FUN_147091310(param_1 + 0x48,param_2 + 0x48);
        uVar2 = extraout_var_01;
        if (extraout_AL_01 == '\0') {
          FUN_147091310(param_1 + 0x68,param_2 + 0x68);
          uVar2 = extraout_var_02;
          if (extraout_AL_02 == '\0') {
            uVar1 = FUN_147091310(param_1 + 0x88,param_2 + 0x88);
            return uVar1;
          }
        }
      }
    }
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 1470a0b7c FUN_1470a0b7c body=239 status=ok
// SIG undefined FUN_1470a0b7c(void)

ulonglong FUN_1470a0b7c(longlong *param_1,undefined8 param_2)

{
  byte extraout_AL;
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined7 uVar5;
  undefined7 extraout_var;
  ulonglong uVar4;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  byte bVar11;
  
  iVar10 = (int)param_1[1];
  if ((longlong)iVar10 == 0) {
    uVar4 = CONCAT71((int7)(int3)((uint)iVar10 >> 8),1);
  }
  else {
    lVar8 = *param_1;
    lVar7 = (longlong)iVar10 * 0xb8 + lVar8;
    iVar10 = 0;
    bVar11 = 0;
    do {
      uVar3 = FUN_1405d595e(lVar8 + 0x50,param_2);
      if ((char)uVar3 == '\0') {
        if ((*(longlong *)(lVar8 + 0x78) != 0) && ((longlong)*(int *)(lVar8 + 0x88) != 0)) {
          lVar9 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar8 + 0x80) + lVar9) != 0) {
              cVar2 = FUN_1405d595e(lVar8 + 0x70,param_2);
              if (cVar2 == '\0') {
                bVar1 = 0;
                uVar5 = 0;
                goto LAB_1470a0c0d;
              }
              break;
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)*(int *)(lVar8 + 0x88) * 8 != lVar9);
        }
        FUN_1405d595e(lVar8 + 0x90,param_2);
        bVar1 = extraout_AL ^ 1;
        uVar5 = extraout_var;
LAB_1470a0c0d:
        bVar6 = *(byte *)(lVar8 + 0xb0) ^ 1;
        if ((bVar1 | bVar6) != 1) {
          uVar4 = 0;
          goto LAB_1470a0c55;
        }
      }
      else {
        bVar6 = *(byte *)(lVar8 + 0xb0) ^ 1;
        uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
        bVar1 = 1;
      }
      iVar10 = iVar10 + (uint)bVar6;
      bVar11 = bVar11 | bVar6 & bVar1;
      lVar8 = lVar8 + 0xb8;
    } while (lVar8 != lVar7);
    uVar4 = CONCAT71(uVar5,iVar10 == 0 | bVar11);
  }
LAB_1470a0c55:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 1470a0c6c FUN_1470a0c6c body=64 status=ok
// SIG undefined FUN_1470a0c6c(void)

undefined8 FUN_1470a0c6c(longlong param_1,longlong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_144a7891a(*(undefined8 *)(param_2 + 8));
  uVar1 = FUN_144b084d8(param_1,uVar2);
  if (((short)uVar1 < 0) || (*(int *)(param_1 + 0xd0) <= (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 200) + (ulonglong)uVar1 * 8);
  }
  return uVar3;
}



// FUNCTION 1470a0cac FUN_1470a0cac body=285 status=ok
// SIG undefined FUN_1470a0cac(void)

void FUN_1470a0cac(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_68;
  uint uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint local_58;
  int iStack_54;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140e6b4bc();
  FUN_1470a0dca(param_1 + 0x118);
  plVar1 = (longlong *)(param_1 + 200);
  lVar2 = param_1 + 0xd8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 0xf0);
  }
  uStack_50 = CONCAT44(uStack_2c,uStack_30);
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_68 = (undefined4)local_48;
  uStack_64 = local_48._4_4_;
  uStack_60 = (undefined4)uStack_40;
  uStack_5c = uStack_40._4_4_;
  local_70 = plVar1;
  if ((iStack_34 != iVar3) || (uStack_40 != lVar2)) {
    do {
      FUN_1470a0dca(*local_70 + (longlong)iStack_54 * 0x60 + 8);
      local_58 = local_58 & ~uStack_64;
      FUN_1449c0562(&local_68);
    } while (local_70 != plVar1 || (CONCAT44(uStack_5c,uStack_60) != lVar2 || iStack_54 != iVar3));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a0dca FUN_1470a0dca body=68 status=ok
// SIG undefined FUN_1470a0dca(void)

void FUN_1470a0dca(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1470a3ea6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1447a08a2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1470a0e0e FUN_1470a0e0e body=500 status=ok
// SIG undefined FUN_1470a0e0e(void)

ulonglong FUN_1470a0e0e(longlong *param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong unaff_RDI;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_8b8 [32];
  undefined1 local_898;
  longlong local_888;
  undefined8 uStack_880;
  undefined1 *local_878;
  undefined4 local_870;
  longlong local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  undefined1 *local_850;
  char local_848;
  undefined1 local_840 [2070];
  undefined1 local_2a [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8b8;
  lVar8 = *param_1;
  local_868 = lVar8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
  if (DAT_14c9a1b28 == DAT_14c9a1b54) {
    local_860 = local_840;
    local_848 = '\0';
    local_850 = local_2a;
    local_858 = local_860;
    FUN_14005eb5c(&local_868,&local_860);
    local_878 = local_860;
    local_870 = (undefined4)((ulonglong)((longlong)local_858 - (longlong)local_860) >> 1);
    bVar2 = FUN_14475c62c();
    uVar7 = 0;
    uVar9 = 0;
    if (bVar2 == 0) {
      local_888 = 0;
      uStack_880 = 0;
      local_898 = 1;
      (**(code **)(*DAT_14c9485b8 + 0x18))(DAT_14c9485b8,lVar8,&local_888,1);
      if ((longlong)(int)uStack_880 == 0) {
        uVar9 = 0;
      }
      else {
        lVar10 = (longlong)(int)uStack_880 * 0x70;
        lVar8 = local_888;
        do {
          cVar3 = FUN_1470a3fea(lVar8,0);
          if (cVar3 != '\0') goto LAB_1470a0fbe;
          lVar8 = lVar8 + 0x70;
          lVar10 = lVar10 + -0x70;
        } while (lVar10 != 0);
        lVar8 = 0;
LAB_1470a0fbe:
        uVar9 = CONCAT71((int7)((ulonglong)lVar10 >> 8),lVar8 != 0);
        uVar7 = (int)uStack_880;
      }
      FUN_140195631(local_888,uVar7);
      if (local_888 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_848 == '\x01') {
      FUN_1400020a8(local_860);
    }
    unaff_RDI = CONCAT71((int7)((ulonglong)uVar9 >> 8),(byte)uVar9 & (bVar2 ^ 1));
  }
  else {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar4 = (uint)lVar8 & 0xffff;
    puVar6 = &DAT_14c9a1b58;
    if (DAT_14c9a1b60 != (undefined *)0x0) {
      puVar6 = DAT_14c9a1b60;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14c9a1b68 - 1U &
                              (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar4) +
                              (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 == -1) {
      unaff_RDI = 0;
    }
    else {
      do {
        bVar11 = *(longlong *)(DAT_14c9a1b20 + (longlong)iVar5 * 0x10) == lVar8;
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),bVar11);
        if (bVar11) break;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + DAT_14c9a1b20 + 8);
      } while (iVar5 != -1);
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1b10);
  if ((local_28 ^ (ulonglong)auStack_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RDI & 0xffffffff;
}



// FUNCTION 1470a1004 FUN_1470a1004 body=147 status=ok
// SIG undefined FUN_1470a1004(void)

void FUN_1470a1004(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar3 = 0;
  bVar4 = false;
  do {
    lVar2 = uVar3 << 5;
    while (cVar1 = FUN_1470a0e0e(*param_1 + lVar2), cVar1 == '\0') {
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x20;
      if ((longlong)(int)param_1[1] <= (longlong)uVar3) {
        if (!bVar4) {
          return;
        }
        goto LAB_1470a1086;
      }
    }
    do {
      FUN_1470a403c(param_1,uVar3 & 0xffffffff);
      if ((longlong)(int)param_1[1] <= (longlong)uVar3) goto LAB_1470a1086;
      cVar1 = FUN_1470a0e0e(*param_1 + lVar2);
    } while (cVar1 != '\0');
    uVar3 = uVar3 + 1;
    bVar4 = true;
  } while ((longlong)uVar3 < (longlong)(int)param_1[1]);
LAB_1470a1086:
  FUN_14582f954(param_1);
  return;
}



// FUNCTION 1470a1098 FUN_1470a1098 body=625 status=ok
// SIG undefined FUN_1470a1098(void)

undefined1 FUN_1470a1098(longlong param_1,uint param_2,uint *param_3,char param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined1 auStack_c8 [36];
  uint local_a4;
  uint *local_a0;
  longlong *local_98;
  uint local_8c;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a4 = param_2;
  if (param_2 == 0x7fff) {
    plVar5 = (longlong *)(param_1 + 0x118);
  }
  else {
    plVar5 = (longlong *)(param_1 + 200);
    local_68 = 0;
    local_60 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_5c = 0x80;
    uStack_58 = 0xffffffff;
    local_54 = 0;
    local_48 = 0;
    local_40 = 0;
    if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
      lVar2 = param_1 + 0x100;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x108);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *plVar5 + (longlong)iVar4 * 0x60;
          if (*(uint *)(*plVar5 + (longlong)iVar4 * 0x60) == param_2) {
            if (lVar2 != 0) {
              plVar5 = (longlong *)(lVar2 + 8);
              goto LAB_1470a11c3;
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x58);
        } while (iVar4 != -1);
      }
    }
    local_a0 = &local_a4;
    local_98 = &local_88;
    FUN_140187044(plVar5,&local_8c);
    plVar5 = (longlong *)(*plVar5 + (longlong)(int)local_8c * 0x60 + 8);
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
LAB_1470a11c3:
    uVar1 = uStack_80 >> 0x20;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    if ((int)uVar1 != 0) {
      FUN_1447a08a2(&local_88,0);
    }
    uStack_58 = 0xffffffff;
    local_54 = 0;
    local_60 = 0;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      FUN_1446efbd8(local_78,0);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    if (param_4 != '\0') {
      local_8c = local_8c & 0xffffff00;
      local_88 = CONCAT44(local_88._4_4_,*param_3);
      FUN_14488f2ec(plVar5,&local_a0,&local_88,&local_8c);
      uVar6 = (undefined1)local_8c;
      goto LAB_1470a1294;
    }
    if ((int)plVar5[1] != *(int *)((longlong)plVar5 + 0x34)) {
      plVar3 = plVar5 + 7;
      if ((longlong *)plVar5[8] != (longlong *)0x0) {
        plVar3 = (longlong *)plVar5[8];
      }
      iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar5[9] - 1U & *param_3) * 4);
      if (iVar4 != -1) {
        do {
          uVar6 = *(uint *)(*plVar5 + (longlong)iVar4 * 0xc) == *param_3;
          if ((bool)uVar6) break;
          iVar4 = *(int *)(*plVar5 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
        goto LAB_1470a1294;
      }
    }
  }
  uVar6 = 0;
LAB_1470a1294:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1470a1314 FUN_1470a1314 body=159 status=ok
// SIG undefined FUN_1470a1314(void)

void FUN_1470a1314(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x40), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x38);
    lVar3 = 0;
    do {
      local_40 = *(longlong *)(lVar2 + lVar3);
      if (local_40 != 0) {
        FUN_145c15ca6(param_1,local_44,&local_40,0);
        FUN_1470a1314(param_1,local_40);
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a13b4 FUN_1470a13b4 body=355 status=ok
// SIG undefined FUN_1470a13b4(void)

void FUN_1470a13b4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  size_t sVar4;
  undefined2 *puVar5;
  wchar_t *_Str;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [128];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = (wchar_t *)0x0;
  uStack_e0 = 0;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 == 0) {
LAB_1470a1489:
    _Str = L"";
  }
  else {
    lVar2 = *param_1;
    lVar7 = 0;
    do {
      bVar8 = (int)uStack_e0 - 2U < 0x7fffffff;
      puVar5 = &DAT_149dfb77a;
      if (bVar8) {
        puVar5 = (undefined2 *)&DAT_149e001d8;
      }
      FUN_1400020e8(&local_e8,puVar5,bVar8);
      iVar1 = *(int *)(lVar2 + 8 + lVar7);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      FUN_1400020e8(&local_e8,*(undefined8 *)(lVar2 + lVar7),iVar6);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar7);
    if ((int)uStack_e0 == 0) goto LAB_1470a1489;
    local_58 = 0;
    _Str = local_e8;
    if (local_e8 == (wchar_t *)0x0) {
      local_50 = 0;
      local_48 = 0;
      goto LAB_1470a14c5;
    }
  }
  local_58 = 0;
  sVar4 = wcslen(_Str);
  FUN_1449b853c(local_d8,_Str,sVar4 & 0xffffffff,1);
LAB_1470a14c5:
  FUN_142b282df(local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1518 FUN_1470a1518 body=1 status=ok
// SIG undefined FUN_1470a1518(void)

void FUN_1470a1518(void)

{
  return;
}



// FUNCTION 1470a151a FUN_1470a151a body=114 status=ok
// SIG undefined FUN_1470a151a(void)

void FUN_1470a151a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_20 = &LAB_1470a2afc;
    local_28 = &LAB_1470a2b1a;
    local_38 = param_3;
    FUN_1470a28c0(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a158e FUN_1470a158e body=114 status=ok
// SIG undefined FUN_1470a158e(void)

void FUN_1470a158e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_20 = &LAB_1470a2afc;
    local_28 = &LAB_1470a2b1a;
    local_38 = param_3;
    FUN_1470a2d14(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1602 FUN_1470a1602 body=114 status=ok
// SIG undefined FUN_1470a1602(void)

void FUN_1470a1602(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_20 = &LAB_1470a2afc;
    local_28 = &LAB_1470a31e4;
    local_38 = param_3;
    FUN_1470a28c0(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1676 FUN_1470a1676 body=114 status=ok
// SIG undefined FUN_1470a1676(void)

void FUN_1470a1676(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_28;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400b3e1a();
  if (lVar1 != 0) {
    local_20 = &LAB_1470a2afc;
    local_28 = &LAB_1470a31e4;
    local_38 = param_3;
    FUN_1470a2d14(lVar1,param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a16ea FUN_1470a16ea body=53 status=ok
// SIG undefined FUN_1470a16ea(void)

undefined8 FUN_1470a16ea(longlong param_1)

{
  ushort uVar1;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc0) + 0x28);
    if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(DAT_14c9a1ab0 + 0xd0))) {
      return *(undefined8 *)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 1470a1720 FUN_1470a1720 body=104 status=ok
// SIG undefined FUN_1470a1720(void)

void FUN_1470a1720(longlong *param_1,longlong param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x19) = 0xfffffffe;
  *(uint *)(param_1 + 0x16) = *(uint *)(param_1 + 0x16) & 0xff8003bd;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = 0;
  (**(code **)(*param_1 + 0x310))(param_1,param_3);
  param_1[0x17] = *(longlong *)(param_2 + 0xb8);
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_140010366(param_1,1);
  return;
}



// FUNCTION 1470a1788 FUN_1470a1788 body=94 status=ok
// SIG undefined FUN_1470a1788(void)

char * FUN_1470a1788(undefined4 param_1)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = DAT_14c9a1ab0;
  if (DAT_14c9a1ab0 != 0) {
    uVar2 = FUN_144b084d8(DAT_14c9a1ab0,param_1);
    if (uVar2 == 0x7fff) {
      return "Asset";
    }
    if (((-1 < (short)uVar2) && ((int)(short)uVar2 < *(int *)(lVar1 + 0xd0))) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 200) + (ulonglong)uVar2 * 8), lVar1 != 0)) {
      return *(char **)(lVar1 + 0xb8);
    }
  }
  return (char *)0x0;
}



// FUNCTION 1470a17e6 FUN_1470a17e6 body=135 status=ok
// SIG undefined FUN_1470a17e6(void)

undefined4 FUN_1470a17e6(undefined8 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  lVar1 = DAT_14c9a1ab0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9a1ab0 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1446f470e(local_50,param_1,1);
    FUN_1446dcdd4(local_48,local_50);
    uVar2 = FUN_1448f0e18(lVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a186e FUN_1470a186e body=127 status=ok
// SIG undefined FUN_1470a186e(void)

ulonglong FUN_1470a186e(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  lVar1 = DAT_14c9a1ab0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c9a1ab0 == 0) {
    uVar3 = 0;
  }
  else {
    local_50 = param_1;
    FUN_1446dcdd4(local_48);
    iVar2 = FUN_1448f0e18(lVar1,local_48);
    *param_2 = iVar2;
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),iVar2 != 0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a18ee FUN_1470a18ee body=301 status=ok
// SIG undefined FUN_1470a18ee(void)

byte FUN_1470a18ee(int param_1,int *param_2)

{
  longlong lVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  lVar1 = DAT_14c9a1ab0;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 == 0x7fff) {
    *param_2 = 0x7fff;
    FUN_1446f470e(&local_38,L"Asset",1);
    *(longlong *)(param_2 + 1) = local_38;
    bVar2 = 1;
    goto LAB_1470a193c;
  }
  if (DAT_14c9a1ab0 == 0) {
    bVar2 = 0;
    goto LAB_1470a193c;
  }
  uVar3 = FUN_144b084d8(DAT_14c9a1ab0,param_1);
  if ((short)uVar3 < 0) {
    pcVar5 = (char *)0x0;
    lVar6 = 0;
LAB_1470a19b3:
    pcVar4 = (char *)0x0;
  }
  else if ((int)(uint)uVar3 < *(int *)(lVar1 + 0xd0)) {
    lVar6 = *(longlong *)(*(longlong *)(lVar1 + 200) + (ulonglong)uVar3 * 8);
    pcVar5 = (char *)(ulonglong)(lVar6 != 0);
    if (uVar3 == 0x7fff) {
      pcVar4 = "Asset";
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 200) + (ulonglong)uVar3 * 8);
      if (lVar1 == 0) goto LAB_1470a19b3;
      pcVar4 = *(char **)(lVar1 + 0xb8);
    }
  }
  else {
    pcVar5 = (char *)0x0;
    pcVar4 = "Asset";
    if (uVar3 != 0x7fff) {
      pcVar4 = pcVar5;
    }
    lVar6 = 0;
  }
  FUN_1446ddc76(&local_38,pcVar4,1);
  bVar2 = local_38 != 0 & (byte)pcVar5;
  if (bVar2 == 1) {
    *param_2 = param_1;
    *(longlong *)(param_2 + 1) = local_38;
    *(longlong *)(param_2 + 4) = lVar6;
  }
LAB_1470a193c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1a1c FUN_1470a1a1c body=64 status=ok
// SIG undefined FUN_1470a1a1c(void)

undefined8 FUN_1470a1a1c(undefined4 param_1)

{
  longlong lVar1;
  ushort uVar2;
  
  lVar1 = DAT_14c9a1ab0;
  if (((DAT_14c9a1ab0 != 0) && (uVar2 = FUN_144b084d8(DAT_14c9a1ab0,param_1), -1 < (short)uVar2)) &&
     ((int)(uint)uVar2 < *(int *)(lVar1 + 0xd0))) {
    return *(undefined8 *)(*(longlong *)(lVar1 + 200) + (ulonglong)uVar2 * 8);
  }
  return 0;
}



// FUNCTION 1470a1a5c FUN_1470a1a5c body=309 status=ok
// SIG undefined FUN_1470a1a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1470a1a5c(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1c18) {
    FUN_144b3d300(&DAT_14c9a1c18);
    if (DAT_14c9a1c18 == -1) {
      uVar1 = FUN_145b0b068();
      lVar2 = FUN_144b00ba4(uVar1);
      DAT_14c9a1c10 = *(undefined8 *)(lVar2 + 0x18);
      _Init_thread_footer(&DAT_14c9a1c18);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1c28) {
    FUN_144b3d300(&DAT_14c9a1c28);
    if (DAT_14c9a1c28 == -1) {
      lVar2 = FUN_145b0b068();
      DAT_14c9a1c20 = *(undefined8 *)(lVar2 + 0x18);
      _Init_thread_footer(&DAT_14c9a1c28);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a1c40) {
    FUN_144b3d300(&DAT_14c9a1c40);
    if (DAT_14c9a1c40 == -1) {
      _DAT_14c9a1c30 = DAT_14c9a1c10;
      _DAT_14c9a1c38 = DAT_14c9a1c20;
      _Init_thread_footer(&DAT_14c9a1c40);
    }
  }
  return &DAT_14c9a1c30;
}



// FUNCTION 1470a1b92 FUN_1470a1b92 body=154 status=ok
// SIG undefined FUN_1470a1b92(void)

undefined8 * FUN_1470a1b92(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_14041ecbc(param_2,&local_28);
    lVar2 = thunk_FUN_14041e92e();
    uVar1 = *(undefined8 *)(lVar2 + 0x18);
    uVar3 = thunk_FUN_14041e92e();
    lVar2 = FUN_144b00ba4(uVar3);
    *param_1 = *(undefined8 *)(lVar2 + 0x18);
    param_1[2] = uVar1;
    param_1[3] = local_28;
  }
  param_1[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1c2e FUN_1470a1c2e body=320 status=ok
// SIG undefined FUN_1470a1c2e(void)

undefined8 * FUN_1470a1c2e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar1 = FUN_146858cfe(param_2);
  if (cVar1 == '\0') {
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar2 = FUN_14700c192(param_2);
  if (lVar2 != 0) {
    lVar3 = FUN_145b0b068();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      lVar3 = FUN_14479d2ce(lVar2 + 0x48);
      local_a8 = 0;
      if (lVar3 != 0) {
        local_a8 = *(undefined4 *)(lVar3 + 0xb0);
      }
      FUN_1447325ac(lVar2 + 0x50,&local_b8,1);
      local_b0 = local_b8;
      local_a0 = 0;
      FUN_1470a1b92(param_1);
      goto LAB_1470a1d04;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
LAB_1470a1d04:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1470a1d70 FUN_1470a1d70 body=83 status=ok
// SIG undefined FUN_1470a1d70(void)

void FUN_1470a1d70(undefined8 param_1,undefined4 *param_2)

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
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1470a1c2e(&local_38,param_1);
  param_2[4] = local_28;
  param_2[5] = uStack_24;
  param_2[6] = uStack_20;
  param_2[7] = uStack_1c;
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a1dd5 FUN_1470a1dd5 body=1500 status=ok
// SIG undefined FUN_1470a1dd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1470a1dd5(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_128 [40];
  undefined8 *local_100;
  int local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  longlong local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 3) == 3) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9a1c60) && (FUN_144b3d300(&DAT_14c9a1c60), DAT_14c9a1c60 == -1))
      {
        _DAT_14c9a1c4c = 0;
        FUN_14052b5e0(&DAT_14c9a1c48,"InlineTokens",0);
        _DAT_14c9a1c58 = "InlineTokens";
        _Init_thread_footer(&DAT_14c9a1c60);
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9a1c80) && (FUN_144b3d300(&DAT_14c9a1c80), DAT_14c9a1c80 == -1))
      {
        _DAT_14c9a1c6c = 0;
        FUN_14052b5e0(&DAT_14c9a1c68,"ExternalTokens",0);
        _DAT_14c9a1c78 = "ExternalTokens";
        _Init_thread_footer(&DAT_14c9a1c80);
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0x800000000;
      FUN_14480757c(&local_d0,&DAT_14c9a1c48);
      puVar6 = (undefined8 *)FUN_144a06846(param_2,&local_d0);
      if ((byte *)*puVar6 == (byte *)0x0) {
        bVar11 = false;
      }
      else {
        bVar11 = (*(byte *)*puVar6 & 3) != 0;
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_14480757c(&local_d0,&DAT_14c9a1c48);
        uVar7 = FUN_144a06846(param_2,&local_d0);
        plVar8 = (longlong *)FUN_1412446d2(uVar7);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        plVar1 = plVar8 + 3;
        local_f0 = 0x100000000;
        local_e0 = 0xffffffff;
        uStack_d8 = 0;
        uStack_e8 = plVar1;
        if ((int)plVar8[6] == 0) {
          iVar9 = 0;
        }
        else {
          FUN_1449c0562(&local_f0);
          iVar9 = (int)plVar8[6];
        }
        uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
        local_b8 = local_e0;
        lVar10 = local_b8;
        local_c8 = (undefined4)local_f0;
        uStack_c4 = local_f0._4_4_;
        uStack_c0 = (undefined4)uStack_e8;
        uStack_bc = uStack_e8._4_4_;
        local_b8._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
        local_d0 = plVar8;
        iVar4 = local_b8._4_4_;
        if ((local_b8._4_4_ != iVar9) || (uStack_e8 != plVar1)) {
          do {
            local_b8 = lVar10;
            FUN_14068d188(*local_d0 + (longlong)iVar4 * 0x40 + 0x28,&local_f0,0);
            uVar3 = local_40;
            lVar10 = (longlong)(int)local_40;
            uVar5 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,uVar5);
            if (local_40._4_4_ < uVar5) {
              FUN_1470a4758(&local_a8,uVar3 & 0xffffffff);
            }
            puVar6 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              puVar6 = &local_a8;
            }
            *(undefined4 *)((longlong)puVar6 + lVar10 * 0xc + 8) = (undefined4)uStack_e8;
            *(undefined8 *)((longlong)puVar6 + lVar10 * 0xc) = local_f0;
            local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
            FUN_1449c0562(&local_c8);
            lVar10 = local_b8;
            iVar4 = local_b8._4_4_;
          } while (local_d0 != plVar8 ||
                   ((longlong *)CONCAT44(uStack_bc,uStack_c0) != plVar1 || local_b8._4_4_ != iVar9))
          ;
        }
      }
      else {
        FUN_14480757c(&local_d0,&DAT_14c9a1c68);
        puVar6 = (undefined8 *)FUN_144a06846(param_2,&local_d0);
        if ((byte *)*puVar6 == (byte *)0x0) {
          bVar11 = false;
        }
        else {
          bVar11 = (*(byte *)*puVar6 & 3) != 0;
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        lVar10 = local_b8;
        if (bVar11) {
          FUN_14480757c(&local_d0,&DAT_14c9a1c68);
          uVar7 = FUN_144a06846(param_2,&local_d0);
          plVar8 = (longlong *)FUN_1412446d2(uVar7);
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          plVar1 = plVar8 + 3;
          local_f0 = 0x100000000;
          local_e0 = 0xffffffff;
          uStack_d8 = 0;
          uStack_e8 = plVar1;
          if ((int)plVar8[6] == 0) {
            iVar9 = 0;
          }
          else {
            FUN_1449c0562(&local_f0);
            iVar9 = (int)plVar8[6];
          }
          uStack_b0 = CONCAT44(uStack_d4,uStack_d8);
          local_b8 = local_e0;
          lVar10 = local_b8;
          local_c8 = (undefined4)local_f0;
          uStack_c4 = local_f0._4_4_;
          uStack_c0 = (undefined4)uStack_e8;
          uStack_bc = uStack_e8._4_4_;
          local_b8._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
          local_d0 = plVar8;
          iVar4 = local_b8._4_4_;
          if ((local_b8._4_4_ != iVar9) || (uStack_e8 != plVar1)) {
            do {
              local_b8 = lVar10;
              FUN_14068d188(*local_d0 + (longlong)iVar4 * 0x40 + 0x28,&local_f0,0);
              uVar3 = local_40;
              lVar10 = (longlong)(int)local_40;
              uVar5 = (int)local_40 + 1;
              local_40 = CONCAT44(local_40._4_4_,uVar5);
              if (local_40._4_4_ < uVar5) {
                FUN_1470a4758(&local_a8,uVar3 & 0xffffffff);
              }
              puVar6 = local_48;
              if (local_48 == (undefined8 *)0x0) {
                puVar6 = &local_a8;
              }
              *(undefined4 *)((longlong)puVar6 + lVar10 * 0xc + 8) = (undefined4)uStack_e8;
              *(undefined8 *)((longlong)puVar6 + lVar10 * 0xc) = local_f0;
              local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
              FUN_1449c0562(&local_c8);
              lVar10 = local_b8;
              iVar4 = local_b8._4_4_;
            } while (local_d0 != plVar8 ||
                     ((longlong *)CONCAT44(uStack_bc,uStack_c0) != plVar1 || local_b8._4_4_ != iVar9
                     ));
          }
        }
      }
      local_b8 = lVar10;
      iVar9 = (int)local_40;
      if ((int)local_40 != 0) {
        local_100 = &local_a8;
        if (local_48 != (undefined8 *)0x0) {
          local_100 = local_48;
        }
        local_f8 = (int)local_40;
        FUN_140accc18(&local_d0);
        FUN_1404e49fa(param_1,&local_d0);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      uVar7 = 1;
      if (iVar9 != 0) goto LAB_1470a21d3;
    }
    else if ((*pbVar2 & 3) == 1) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      FUN_1446ddda2(&local_a8,*(undefined8 *)(pbVar2 + 8),0);
      FUN_1404e49fa(param_1,&local_a8);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      uVar7 = 1;
      goto LAB_1470a21d3;
    }
  }
  uVar7 = 0;
LAB_1470a21d3:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1470a23b2 FUN_1470a23b2 body=75 status=ok
// SIG undefined FUN_1470a23b2(void)

undefined8 FUN_1470a23b2(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x40))(param_2);
    (**(code **)(*param_2 + 0x28))(param_2);
    return 1;
  }
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  uVar2 = FUN_1470a1dd5(param_1,uVar2);
  return uVar2;
}



// FUNCTION 1470a23fd FUN_1470a23fd body=143 status=ok
// SIG undefined FUN_1470a23fd(void)

void FUN_1470a23fd(void)

{
  if (DAT_14c948598 != (undefined8 *)0x0 && DAT_14c9485a0 != 0) {
    (**(code **)*DAT_14c948598)(DAT_14c948598,0);
    FUN_1446efa72(&DAT_14c948598,0,0,0x10);
    DAT_14c9485a0 = 0;
  }
  if (DAT_14c9485a8 != (undefined8 *)0x0 && DAT_14c9485b0 != 0) {
    (**(code **)*DAT_14c9485a8)(DAT_14c9485a8,0);
    FUN_1446efa72(&DAT_14c9485a8,0,0,0x10);
    DAT_14c9485b0 = 0;
  }
  return;
}



// FUNCTION 1470a248c FUN_1470a248c body=115 status=ok
// SIG undefined FUN_1470a248c(void)

void FUN_1470a248c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((*(longlong *)(param_1 + 0x20) == 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    lVar1 = FUN_140007850(param_1 + 0x30);
    if (lVar1 != 0) {
      lVar2 = FUN_1446f4bba();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        if (*(longlong *)(param_1 + 0x20) != lVar1) {
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        uVar3 = FUN_14477b664(lVar1);
        uVar3 = FUN_14477b664(uVar3);
        *(undefined8 *)(param_1 + 0x20) = uVar3;
      }
    }
  }
  return;
}



// FUNCTION 1470a2500 FUN_1470a2500 body=113 status=ok
// SIG undefined FUN_1470a2500(void)

void FUN_1470a2500(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((DAT_14c9a1ab0 != 0) && (iVar1 = *(int *)(DAT_14c9a1ab0 + 0x2d0), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(DAT_14c9a1ab0 + 0x2c8);
    lVar4 = 0;
    do {
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x60;
    } while ((longlong)iVar1 * 0x60 != lVar4);
  }
  return;
}



// FUNCTION 1470a2572 FUN_1470a2572 body=28 status=ok
// SIG undefined FUN_1470a2572(void)

void FUN_1470a2572(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14584a6cc(param_1);
  return;
}



// FUNCTION 1470a258e FUN_1470a258e body=22 status=ok
// SIG undefined FUN_1470a258e(void)

ulonglong FUN_1470a258e(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14c9a1dc0;
  if (DAT_14c9a1dc0 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&uStack_40,param_1,*(undefined4 *)(DAT_14c9a1dc0 + 0x2c8),
                *(undefined4 *)(DAT_14c9a1dc0 + 0x2cc));
  if (iStack_38 != 0) {
    FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
  }
  plVar1 = (longlong *)(lVar2 + 0x278);
  iVar3 = FUN_144b0847a(plVar1);
  if (((iVar3 != -1) &&
      (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, plVar5 = (longlong *)(lVar4 + 0x10),
      plVar5 != (longlong *)0x0 && lVar4 != 0)) && (lVar4 = *plVar5, lVar4 != 0)) {
    lVar7 = *(longlong *)(lVar4 + 0x60);
    if (lVar7 != 0) {
      do {
        FUN_144a62e5c(&uStack_40,lVar7 + 0x18,*(undefined4 *)(lVar2 + 0x2c8),
                      *(undefined4 *)(lVar2 + 0x2cc));
        if (iStack_38 != 0) {
          FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
        }
        iVar3 = FUN_144b0847a(plVar1);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
        }
        plVar5 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        lVar4 = *plVar5;
        lVar7 = *(longlong *)(lVar4 + 0x60);
      } while (lVar7 != 0);
    }
    uStack_40 = *(ulonglong *)(lVar4 + 0x30);
    uVar6 = uStack_40;
    if (uStack_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(lVar2,&uStack_40,lVar4);
    if (uStack_40 != 0) {
      *(ulonglong *)(lVar4 + 0x30) = uStack_40;
      uVar6 = uStack_40;
      if (lVar4 != 0) {
        FUN_1407d81de(uStack_40 + 8,lVar4);
        uVar6 = uStack_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar6 = 0;
LAB_1470a2651:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a25cc FUN_1470a25cc body=386 status=ok
// SIG undefined FUN_1470a25cc(void)

ulonglong FUN_1470a25cc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&local_40,param_2,*(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc))
  ;
  if (local_38 != 0) {
    FUN_144a78877(local_40 & 0xffffffff,local_38);
  }
  plVar1 = (longlong *)(param_1 + 0x278);
  iVar2 = FUN_144b0847a(plVar1);
  if (((iVar2 != -1) &&
      (lVar3 = (longlong)iVar2 * 0x20 + *plVar1, plVar4 = (longlong *)(lVar3 + 0x10),
      plVar4 != (longlong *)0x0 && lVar3 != 0)) && (lVar3 = *plVar4, lVar3 != 0)) {
    lVar6 = *(longlong *)(lVar3 + 0x60);
    if (lVar6 != 0) {
      do {
        FUN_144a62e5c(&local_40,lVar6 + 0x18,*(undefined4 *)(param_1 + 0x2c8),
                      *(undefined4 *)(param_1 + 0x2cc));
        if (local_38 != 0) {
          FUN_144a78877(local_40 & 0xffffffff,local_38);
        }
        iVar2 = FUN_144b0847a(plVar1);
        if (iVar2 == -1) {
          lVar3 = 0;
        }
        else {
          lVar3 = (longlong)iVar2 * 0x20 + *plVar1;
        }
        plVar4 = (longlong *)(lVar3 + 0x10);
        if (lVar3 == 0) {
          plVar4 = (longlong *)0x0;
        }
        lVar3 = *plVar4;
        lVar6 = *(longlong *)(lVar3 + 0x60);
      } while (lVar6 != 0);
    }
    local_40 = *(ulonglong *)(lVar3 + 0x30);
    uVar5 = local_40;
    if (local_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(param_1,&local_40,lVar3);
    if (local_40 != 0) {
      *(ulonglong *)(lVar3 + 0x30) = local_40;
      uVar5 = local_40;
      if (lVar3 != 0) {
        FUN_1407d81de(local_40 + 8,lVar3);
        uVar5 = local_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar5 = 0;
LAB_1470a2651:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a2760 FUN_1470a2760 body=40 status=ok
// SIG undefined FUN_1470a2760(void)

undefined8 FUN_1470a2760(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145928ee8(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470a2788 FUN_1470a2788 body=76 status=ok
// SIG undefined FUN_1470a2788(void)

undefined8 FUN_1470a2788(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145928ee8(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001470a27c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1470a27d4 FUN_1470a27d4 body=54 status=ok
// SIG undefined FUN_1470a27d4(void)

longlong FUN_1470a27d4(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a280a FUN_1470a280a body=54 status=ok
// SIG undefined FUN_1470a280a(void)

undefined8 * FUN_1470a280a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR__purecall_14a178e80;
  FUN_1470a2844(param_1 + 1,1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a2844 FUN_1470a2844 body=124 status=ok
// SIG undefined FUN_1470a2844(void)

void FUN_1470a2844(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470a28c0 FUN_1470a28c0 body=534 status=ok
// SIG undefined FUN_1470a28c0(void)

void FUN_1470a28c0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_2 + 4) & 8) != 0) {
    if (((*(byte *)(param_2 + 4) & 1) == 0) || (param_2[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
      lVar5 = *param_2;
      uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar3 = (uint)lVar5 & 0xffff;
      lVar2 = param_1 + 0x240;
      if (*(longlong *)(param_1 + 0x248) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x248);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x250) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar3) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x208) + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar4 * 0x20) == lVar5) {
            if (((lVar2 + 8U & 0xfffffffffffffff7) != 0) &&
               (iVar4 = *(int *)(lVar2 + 0x10), (longlong)iVar4 != 0)) {
              local_c8 = *(longlong *)(lVar2 + 8);
              lVar5 = 0;
              local_d0 = param_2 + 5;
              local_c0 = param_1 + 0x58;
              do {
                lVar2 = FUN_147020fb8(local_c0,*(undefined4 *)(local_c8 + lVar5));
                if (lVar2 != 0) {
                  local_78 = (undefined1)param_2[4];
                  local_98 = (undefined4)*param_2;
                  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_90 = (undefined4)param_2[1];
                  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
                  local_88 = (undefined4)param_2[2];
                  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
                  uStack_80 = (undefined4)param_2[3];
                  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
                  FUN_14700700a(local_70,local_d0);
                  local_78 = 0xd;
                  FUN_147015f28(lVar2,&local_b8);
                  local_88 = local_a8;
                  uStack_84 = uStack_a4;
                  uStack_80 = uStack_a0;
                  uStack_7c = uStack_9c;
                  local_98 = local_b8;
                  uStack_94 = uStack_b4;
                  uStack_90 = uStack_b0;
                  uStack_8c = uStack_ac;
                  local_d8 = param_5;
                  FUN_1470a2b26(param_1,&local_98,param_3,param_4);
                  if (local_60 != 0) {
                    FUN_1400020a8();
                  }
                }
                lVar5 = lVar5 + 4;
              } while ((longlong)iVar4 * 4 != lVar5);
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a2b26 FUN_1470a2b26 body=349 status=ok
// SIG undefined FUN_1470a2b26(void)

void FUN_1470a2b26(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1 = param_1 + 0x58;
  puVar2 = (undefined8 *)(*(code *)*param_3)(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (longlong)*(int *)(puVar2 + 1);
    if (lVar3 != 0) {
      iVar5 = *(int *)(param_5 + 8) + *(int *)(puVar2 + 1);
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)(param_5 + 0xc) < iVar5) {
        FUN_14701d926(param_5);
        lVar3 = (longlong)*(int *)(puVar2 + 1);
        if (lVar3 == 0) goto LAB_1470a2c4d;
      }
      puVar6 = (undefined4 *)*puVar2;
      puVar7 = puVar6 + lVar3;
      do {
        puVar4 = (undefined4 *)(*(code *)*param_4)(param_1,*puVar6);
        if (puVar4 != (undefined4 *)0x0) {
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_88 = 0;
          lVar3 = FUN_147020fb8(param_1,*puVar4);
          if (lVar3 != 0) {
            FUN_147015f28(lVar3,&local_80);
            local_98 = CONCAT44(uStack_6c,local_70);
            uStack_90 = CONCAT44(uStack_64,uStack_68);
            local_a8 = CONCAT44(uStack_7c,local_80);
            uStack_a0 = CONCAT44(uStack_74,uStack_78);
            local_88 = *(undefined2 *)(puVar4 + 1);
            cVar1 = FUN_147016296(param_2,&local_a8);
            if (cVar1 != '\0') {
              FUN_1470a2c86(param_5,&local_a8);
            }
          }
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar7);
    }
  }
LAB_1470a2c4d:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a2c86 FUN_1470a2c86 body=141 status=ok
// SIG undefined FUN_1470a2c86(void)

void FUN_1470a2c86(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar6 = *param_1;
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  if (lVar8 != 0) {
    uVar7 = 0;
    do {
      if (((*(longlong *)(lVar6 + uVar7) == *param_2) &&
          (*(longlong *)(lVar6 + 0x10 + uVar7) == param_2[2])) &&
         (*(longlong *)(lVar6 + 0x18 + uVar7) == param_2[3])) {
        if ((int)(~uVar7 >> 5) != 0) {
          return;
        }
        break;
      }
      uVar7 = uVar7 + 0x20;
    } while (lVar8 << 5 != uVar7);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14701d986(param_1,iVar2);
    lVar6 = *param_1;
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar5 = param_2[3];
  plVar1 = (longlong *)(lVar6 + 0x10 + lVar8 * 0x20);
  *plVar1 = param_2[2];
  plVar1[1] = lVar5;
  plVar1 = (longlong *)(lVar6 + lVar8 * 0x20);
  *plVar1 = lVar3;
  plVar1[1] = lVar4;
  return;
}



// FUNCTION 1470a2d14 FUN_1470a2d14 body=534 status=ok
// SIG undefined FUN_1470a2d14(void)

void FUN_1470a2d14(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_2 + 4) & 8) != 0) {
    if (((*(byte *)(param_2 + 4) & 1) == 0) || (param_2[2] != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
    }
    if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
      lVar5 = *param_2;
      uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar3 = (uint)lVar5 & 0xffff;
      lVar2 = param_1 + 0x240;
      if (*(longlong *)(param_1 + 0x248) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x248);
      }
      iVar4 = *(int *)(lVar2 + (ulonglong)
                               (*(int *)(param_1 + 0x250) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar3) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          lVar2 = *(longlong *)(param_1 + 0x208) + (longlong)iVar4 * 0x20;
          if (*(longlong *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar4 * 0x20) == lVar5) {
            if (((lVar2 + 8U & 0xfffffffffffffff7) != 0) &&
               (iVar4 = *(int *)(lVar2 + 0x10), (longlong)iVar4 != 0)) {
              local_c8 = *(longlong *)(lVar2 + 8);
              lVar5 = 0;
              local_d0 = param_2 + 5;
              local_c0 = param_1 + 0x58;
              do {
                lVar2 = FUN_147020fb8(local_c0,*(undefined4 *)(local_c8 + lVar5));
                if (lVar2 != 0) {
                  local_78 = (undefined1)param_2[4];
                  local_98 = (undefined4)*param_2;
                  uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
                  uStack_90 = (undefined4)param_2[1];
                  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
                  local_88 = (undefined4)param_2[2];
                  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
                  uStack_80 = (undefined4)param_2[3];
                  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
                  FUN_14700700a(local_70,local_d0);
                  local_78 = 0xd;
                  FUN_147015f28(lVar2,&local_b8);
                  local_88 = local_a8;
                  uStack_84 = uStack_a4;
                  uStack_80 = uStack_a0;
                  uStack_7c = uStack_9c;
                  local_98 = local_b8;
                  uStack_94 = uStack_b4;
                  uStack_90 = uStack_b0;
                  uStack_8c = uStack_ac;
                  local_d8 = param_5;
                  FUN_1470a2f50(param_1,&local_98,param_3,param_4);
                  if (local_60 != 0) {
                    FUN_1400020a8();
                  }
                }
                lVar5 = lVar5 + 4;
              } while ((longlong)iVar4 * 4 != lVar5);
            }
            break;
          }
          iVar4 = *(int *)(lVar2 + 0x18);
        } while (iVar4 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a2f50 FUN_1470a2f50 body=349 status=ok
// SIG undefined FUN_1470a2f50(void)

void FUN_1470a2f50(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1 = param_1 + 0x58;
  puVar2 = (undefined8 *)(*(code *)*param_3)(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar3 = (longlong)*(int *)(puVar2 + 1);
    if (lVar3 != 0) {
      iVar5 = *(int *)(param_5 + 8) + *(int *)(puVar2 + 1);
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar5);
      }
      if (*(int *)(param_5 + 0xc) < iVar5) {
        FUN_1470a30b0(param_5);
        lVar3 = (longlong)*(int *)(puVar2 + 1);
        if (lVar3 == 0) goto LAB_1470a3077;
      }
      puVar6 = (undefined4 *)*puVar2;
      puVar7 = puVar6 + lVar3;
      do {
        puVar4 = (undefined4 *)(*(code *)*param_4)(param_1,*puVar6);
        if (puVar4 != (undefined4 *)0x0) {
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_88 = 0;
          lVar3 = FUN_147020fb8(param_1,*puVar4);
          if (lVar3 != 0) {
            FUN_147015f28(lVar3,&local_80);
            local_98 = CONCAT44(uStack_6c,local_70);
            uStack_90 = CONCAT44(uStack_64,uStack_68);
            local_a8 = CONCAT44(uStack_7c,local_80);
            uStack_a0 = CONCAT44(uStack_74,uStack_78);
            local_88 = *(undefined2 *)(puVar4 + 1);
            cVar1 = FUN_147016296(param_2,&local_a8);
            if (cVar1 != '\0') {
              FUN_1470a3122(param_5,&local_a8);
            }
          }
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar7);
    }
  }
LAB_1470a3077:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a30b0 FUN_1470a30b0 body=113 status=ok
// SIG undefined FUN_1470a30b0(void)

void FUN_1470a30b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 1470a3122 FUN_1470a3122 body=90 status=ok
// SIG undefined FUN_1470a3122(void)

void FUN_1470a3122(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = FUN_1470a317c();
  if (iVar6 == -1) {
    iVar6 = (int)param_1[1];
    lVar7 = (longlong)iVar6;
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_14701fc64(param_1,iVar6);
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x20 + lVar7 * 0x24) = *(undefined4 *)(param_2 + 4);
    uVar3 = *param_2;
    uVar4 = param_2[1];
    uVar5 = param_2[3];
    puVar1 = (undefined8 *)(lVar2 + 0x10 + lVar7 * 0x24);
    *puVar1 = param_2[2];
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)(lVar2 + lVar7 * 0x24);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 1470a317c FUN_1470a317c body=104 status=ok
// SIG undefined FUN_1470a317c(void)

int FUN_1470a317c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    uVar2 = 0;
    do {
      if ((((*(longlong *)(lVar1 + uVar2) == *param_2) &&
           (*(longlong *)(lVar1 + 0x10 + uVar2) == param_2[2])) &&
          (*(longlong *)(lVar1 + 0x18 + uVar2) == param_2[3])) &&
         ((*(char *)(lVar1 + 0x20 + uVar2) == (char)param_2[4] &&
          (*(char *)(lVar1 + 0x21 + uVar2) == *(char *)((longlong)param_2 + 0x21))))) {
        return (int)(uVar2 >> 2) * 0x38e38e39;
      }
      uVar2 = uVar2 + 0x24;
    } while ((longlong)(int)param_1[1] * 0x24 != uVar2);
  }
  return -1;
}



// FUNCTION 1470a31f0 FUN_1470a31f0 body=197 status=ok
// SIG undefined FUN_1470a31f0(void)

longlong FUN_1470a31f0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce();
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 8) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_144a797b2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1470a32b6 FUN_1470a32b6 body=96 status=ok
// SIG undefined FUN_1470a32b6(void)

void FUN_1470a32b6(longlong param_1,int param_2)

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



// FUNCTION 1470a3316 FUN_1470a3316 body=306 status=ok
// SIG undefined FUN_1470a3316(void)

void FUN_1470a3316(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_1470a344a;
  lVar4 = *param_2;
  lVar1 = param_2[1];
  local_120 = local_108;
  uVar3 = FUN_140094010();
  if (lVar4 != lVar1) {
    do {
      cVar2 = FUN_14686d4ab(uVar3,lVar4,&local_118,0);
      if (cVar2 == '\0') break;
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar1);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      puVar6 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar6 = local_108;
      }
      FUN_140093fc6(param_1,uVar5 & 0xffffffff,puVar6 + lVar4);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 0xc;
    } while ((longlong)uVar5 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  FUN_141238f06(param_1,*(undefined4 *)(param_1 + 4));
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a344a FUN_1470a344a body=91 status=ok
// SIG undefined FUN_1470a344a(void)

undefined8 FUN_1470a344a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 1470a34a5 FUN_1470a34a5 body=59 status=ok
// SIG undefined FUN_1470a34a5(void)

void FUN_1470a34a5(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x1010100ffffffff;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  return;
}



// FUNCTION 1470a34e0 FUN_1470a34e0 body=147 status=ok
// SIG undefined FUN_1470a34e0(void)

void FUN_1470a34e0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x60,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470a3574 FUN_1470a3574 body=114 status=ok
// SIG undefined FUN_1470a3574(void)

void FUN_1470a3574(longlong *param_1,int param_2)

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



// FUNCTION 1470a35e6 FUN_1470a35e6 body=138 status=ok
// SIG undefined FUN_1470a35e6(void)

void FUN_1470a35e6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470a3670 FUN_1470a3670 body=31 status=ok
// SIG undefined FUN_1470a3670(void)

undefined8 FUN_1470a3670(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a36aa FUN_1470a36aa body=93 status=ok
// SIG undefined FUN_1470a36aa(void)

void FUN_1470a36aa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a178f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a3708 FUN_1470a3708 body=93 status=ok
// SIG undefined FUN_1470a3708(void)

void FUN_1470a3708(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a178f10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a3766 FUN_1470a3766 body=126 status=ok
// SIG undefined FUN_1470a3766(void)

void FUN_1470a3766(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a178f10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a37d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a37e4 FUN_1470a37e4 body=35 status=ok
// SIG undefined FUN_1470a37e4(void)

void FUN_1470a37e4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470a3803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470a3808 FUN_1470a3808 body=31 status=ok
// SIG undefined FUN_1470a3808(void)

undefined8 FUN_1470a3808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a3842 FUN_1470a3842 body=93 status=ok
// SIG undefined FUN_1470a3842(void)

void FUN_1470a3842(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a178f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a38a0 FUN_1470a38a0 body=93 status=ok
// SIG undefined FUN_1470a38a0(void)

void FUN_1470a38a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e62de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a178f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a38fe FUN_1470a38fe body=126 status=ok
// SIG undefined FUN_1470a38fe(void)

void FUN_1470a38fe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e62de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a178f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a396d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a397c FUN_1470a397c body=48 status=ok
// SIG undefined FUN_1470a397c(void)

void FUN_1470a397c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470a39a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1470a39ac FUN_1470a39ac body=163 status=ok
// SIG undefined FUN_1470a39ac(void)

bool FUN_1470a39ac(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a3a50 FUN_1470a3a50 body=128 status=ok
// SIG undefined FUN_1470a3a50(void)

void FUN_1470a3a50(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x1c + 4) = uVar4;
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



// FUNCTION 1470a3ad0 FUN_1470a3ad0 body=114 status=ok
// SIG undefined FUN_1470a3ad0(void)

void FUN_1470a3ad0(longlong *param_1,int param_2)

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



// FUNCTION 1470a3b42 FUN_1470a3b42 body=114 status=ok
// SIG undefined FUN_1470a3b42(void)

void FUN_1470a3b42(longlong *param_1,int param_2)

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



// FUNCTION 1470a3bb4 FUN_1470a3bb4 body=114 status=ok
// SIG undefined FUN_1470a3bb4(void)

void FUN_1470a3bb4(longlong *param_1,int param_2)

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



// FUNCTION 1470a3c26 FUN_1470a3c26 body=468 status=ok
// SIG undefined FUN_1470a3c26(void)

void FUN_1470a3c26(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
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
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
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
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0xd0);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0xd0);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x33] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[0x32] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a3dfc FUN_1470a3dfc body=48 status=ok
// SIG undefined FUN_1470a3dfc(void)

void FUN_1470a3dfc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xb8,8);
  }
  return;
}



// FUNCTION 1470a3e2c FUN_1470a3e2c body=122 status=ok
// SIG undefined FUN_1470a3e2c(void)

void FUN_1470a3e2c(longlong *param_1,int param_2)

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



// FUNCTION 1470a3ea6 FUN_1470a3ea6 body=322 status=ok
// SIG undefined FUN_1470a3ea6(void)

void FUN_1470a3ea6(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 1470a3fea FUN_1470a3fea body=82 status=ok
// SIG undefined FUN_1470a3fea(void)

undefined8 FUN_1470a3fea(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_144a7757c();
  lVar2 = FUN_146858078(param_1,param_2);
  if ((lVar1 == 0 || lVar2 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
                     lVar1 + 0x30);
  }
  return uVar3;
}



// FUNCTION 1470a403c FUN_1470a403c body=106 status=ok
// SIG undefined FUN_1470a403c(void)

void FUN_1470a403c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x10 + (longlong)(int)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((longlong)(int)param_2 * 0x20 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x20 + lVar1),(longlong)iVar3 << 5);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1470a40a6 FUN_1470a40a6 body=114 status=ok
// SIG undefined FUN_1470a40a6(void)

void FUN_1470a40a6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 1470a4118 FUN_1470a4118 body=31 status=ok
// SIG undefined FUN_1470a4118(void)

undefined8 FUN_1470a4118(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a4152 FUN_1470a4152 body=26 status=ok
// SIG undefined FUN_1470a4152(void)

bool FUN_1470a4152(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1470a416c FUN_1470a416c body=93 status=ok
// SIG undefined FUN_1470a416c(void)

void FUN_1470a416c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1791a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a41ca FUN_1470a41ca body=93 status=ok
// SIG undefined FUN_1470a41ca(void)

void FUN_1470a41ca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a1791a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a4228 FUN_1470a4228 body=126 status=ok
// SIG undefined FUN_1470a4228(void)

void FUN_1470a4228(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a1791a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a4297. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a42a6 FUN_1470a42a6 body=35 status=ok
// SIG undefined FUN_1470a42a6(void)

void FUN_1470a42a6(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470a42c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470a42ca FUN_1470a42ca body=142 status=ok
// SIG undefined FUN_1470a42ca(void)

bool FUN_1470a42ca(longlong param_1)

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



// FUNCTION 1470a435a FUN_1470a435a body=138 status=ok
// SIG undefined FUN_1470a435a(void)

void FUN_1470a435a(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1470a43e4 FUN_1470a43e4 body=114 status=ok
// SIG undefined FUN_1470a43e4(void)

void FUN_1470a43e4(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x48) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x48);
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



// FUNCTION 1470a4456 FUN_1470a4456 body=132 status=ok
// SIG undefined FUN_1470a4456(void)

void FUN_1470a4456(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x48) == param_2) {
          FUN_1470a44da(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x48 + 0x40);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1470a44da FUN_1470a44da body=121 status=ok
// SIG undefined FUN_1470a44da(void)

void FUN_1470a44da(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x48;
  lVar6 = (longlong)*(int *)(lVar1 + 0x44);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x40 + lVar6 * 0x48);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x48 + 0x40);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x40);
  FUN_145c1f7d4(*param_1 + (longlong)param_2 * 0x48 + 8);
  FUN_1470a43e4(param_1,param_2);
  return;
}



// FUNCTION 1470a4554 FUN_1470a4554 body=107 status=ok
// SIG undefined FUN_1470a4554(void)

/* WARNING: Removing unreachable block (ram,0x0001470a4586) */
/* WARNING: Removing unreachable block (ram,0x0001470a4562) */
/* WARNING: Removing unreachable block (ram,0x0001470a4578) */
/* WARNING: Removing unreachable block (ram,0x0001470a4591) */
/* WARNING: Removing unreachable block (ram,0x0001470a457a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a4554(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14c9a1be8;
  LOCK();
  UNLOCK();
  DAT_14c9a1be8 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14c9a1bf0 = _DAT_14c9a1bf0 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14c9a1bf0 = _DAT_14c9a1bf0 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1470a45c0 FUN_1470a45c0 body=31 status=ok
// SIG undefined FUN_1470a45c0(void)

undefined8 FUN_1470a45c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a45fa FUN_1470a45fa body=93 status=ok
// SIG undefined FUN_1470a45fa(void)

void FUN_1470a45fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a179310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a4658 FUN_1470a4658 body=93 status=ok
// SIG undefined FUN_1470a4658(void)

void FUN_1470a4658(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a179310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a46b6 FUN_1470a46b6 body=126 status=ok
// SIG undefined FUN_1470a46b6(void)

void FUN_1470a46b6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a179310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a4725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a4734 FUN_1470a4734 body=35 status=ok
// SIG undefined FUN_1470a4734(void)

void FUN_1470a4734(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470a4753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470a4758 FUN_1470a4758 body=127 status=ok
// SIG undefined FUN_1470a4758(void)

void FUN_1470a4758(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      iVar4 = (int)(uVar3 / 0xc);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1470a47d8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1470a47d8 FUN_1470a47d8 body=140 status=ok
// SIG undefined FUN_1470a47d8(void)

void FUN_1470a47d8(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0xc);
  return;
}



// FUNCTION 1470a4864 FUN_1470a4864 body=31 status=ok
// SIG undefined FUN_1470a4864(void)

undefined8 FUN_1470a4864(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a48a2 FUN_1470a48a2 body=93 status=ok
// SIG undefined FUN_1470a48a2(void)

void FUN_1470a48a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1793f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470a4900 FUN_1470a4900 body=93 status=ok
// SIG undefined FUN_1470a4900(void)

void FUN_1470a4900(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1793f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470a495e FUN_1470a495e body=126 status=ok
// SIG undefined FUN_1470a495e(void)

void FUN_1470a495e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1793f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a179380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a49cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a49dc FUN_1470a49dc body=23 status=ok
// SIG undefined FUN_1470a49dc(void)

undefined8 FUN_1470a49dc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1470a49f6 FUN_1470a49f6 body=31 status=ok
// SIG undefined FUN_1470a49f6(void)

undefined8 FUN_1470a49f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a4a38 FUN_1470a4a38 body=93 status=ok
// SIG undefined FUN_1470a4a38(void)

void FUN_1470a4a38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1794d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470a4a96 FUN_1470a4a96 body=93 status=ok
// SIG undefined FUN_1470a4a96(void)

void FUN_1470a4a96(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1794d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a179460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1470a4af4 FUN_1470a4af4 body=126 status=ok
// SIG undefined FUN_1470a4af4(void)

void FUN_1470a4af4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1794d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a179460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a4b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a4b80 FUN_1470a4b80 body=23 status=ok
// SIG undefined FUN_1470a4b80(void)

undefined8 FUN_1470a4b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1470a4b9a FUN_1470a4b9a body=31 status=ok
// SIG undefined FUN_1470a4b9a(void)

undefined8 FUN_1470a4b9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a4bd4 FUN_1470a4bd4 body=93 status=ok
// SIG undefined FUN_1470a4bd4(void)

void FUN_1470a4bd4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a179540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a4c32 FUN_1470a4c32 body=93 status=ok
// SIG undefined FUN_1470a4c32(void)

void FUN_1470a4c32(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a179540;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1470a4c90 FUN_1470a4c90 body=126 status=ok
// SIG undefined FUN_1470a4c90(void)

void FUN_1470a4c90(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a179540;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001470a4cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470a4d0e FUN_1470a4d0e body=35 status=ok
// SIG undefined FUN_1470a4d0e(void)

void FUN_1470a4d0e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001470a4d2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 1470a4d4a FUN_1470a4d4a body=96 status=ok
// SIG undefined FUN_1470a4d4a(void)

void FUN_1470a4d4a(longlong param_1,int param_2)

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



// FUNCTION 1470a4daa FUN_1470a4daa body=132 status=ok
// SIG undefined FUN_1470a4daa(void)

void FUN_1470a4daa(longlong param_1,int param_2)

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



// FUNCTION 1470a4e30 FUN_1470a4e30 body=132 status=ok
// SIG undefined FUN_1470a4e30(void)

void FUN_1470a4e30(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x28) == param_2) {
          FUN_1470a4eb4(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1470a4eb4 FUN_1470a4eb4 body=87 status=ok
// SIG undefined FUN_1470a4eb4(void)

void FUN_1470a4eb4(longlong *param_1,int param_2)

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
  FUN_1470a4f0c();
  return;
}



// FUNCTION 1470a4f0c FUN_1470a4f0c body=52 status=ok
// SIG undefined FUN_1470a4f0c(void)

void FUN_1470a4f0c(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_1470a4f40(param_1,param_2);
  return;
}



// FUNCTION 1470a4f40 FUN_1470a4f40 body=114 status=ok
// SIG undefined FUN_1470a4f40(void)

void FUN_1470a4f40(longlong *param_1,int param_2)

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



// FUNCTION 1470a4fb2 FUN_1470a4fb2 body=28 status=ok
// SIG undefined FUN_1470a4fb2(void)

void FUN_1470a4fb2(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1457f4838(param_1);
  return;
}



// FUNCTION 1470a4fce FUN_1470a4fce body=22 status=ok
// SIG undefined FUN_1470a4fce(void)

ulonglong FUN_1470a4fce(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14c9a2000;
  if (DAT_14c9a2000 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&uStack_40,param_1,*(undefined4 *)(DAT_14c9a2000 + 0x2c8),
                *(undefined4 *)(DAT_14c9a2000 + 0x2cc));
  if (iStack_38 != 0) {
    FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
  }
  plVar1 = (longlong *)(lVar2 + 0x278);
  iVar3 = FUN_144b0847a(plVar1);
  if (((iVar3 != -1) &&
      (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, plVar5 = (longlong *)(lVar4 + 0x10),
      plVar5 != (longlong *)0x0 && lVar4 != 0)) && (lVar4 = *plVar5, lVar4 != 0)) {
    lVar7 = *(longlong *)(lVar4 + 0x60);
    if (lVar7 != 0) {
      do {
        FUN_144a62e5c(&uStack_40,lVar7 + 0x18,*(undefined4 *)(lVar2 + 0x2c8),
                      *(undefined4 *)(lVar2 + 0x2cc));
        if (iStack_38 != 0) {
          FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
        }
        iVar3 = FUN_144b0847a(plVar1);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
        }
        plVar5 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        lVar4 = *plVar5;
        lVar7 = *(longlong *)(lVar4 + 0x60);
      } while (lVar7 != 0);
    }
    uStack_40 = *(ulonglong *)(lVar4 + 0x30);
    uVar6 = uStack_40;
    if (uStack_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(lVar2,&uStack_40,lVar4);
    if (uStack_40 != 0) {
      *(ulonglong *)(lVar4 + 0x30) = uStack_40;
      uVar6 = uStack_40;
      if (lVar4 != 0) {
        FUN_1407d81de(uStack_40 + 8,lVar4);
        uVar6 = uStack_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar6 = 0;
LAB_1470a2651:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a501c FUN_1470a501c body=40 status=ok
// SIG undefined FUN_1470a501c(void)

undefined8 FUN_1470a501c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_141188a6c(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470a5044 FUN_1470a5044 body=116 status=ok
// SIG undefined FUN_1470a5044(void)

ulonglong FUN_1470a5044(void)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  
  plVar5 = (longlong *)FUN_1457d768a();
  lVar4 = plVar5[1];
  if ((longlong)(int)lVar4 == 0) {
    uVar6 = 0x1a1b9;
  }
  else {
    lVar1 = *plVar5;
    uVar6 = 0x1a1b9;
    lVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar7);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar8 = (uint)uVar2 & 0xffff;
      uVar6 = FUN_144a78877(uVar6 & 0xffffffff,
                            ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4));
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  return uVar6;
}



// FUNCTION 1470a50b8 FUN_1470a50b8 body=78 status=ok
// SIG undefined FUN_1470a50b8(void)

void FUN_1470a50b8(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = FUN_1470a5044(param_1 + 1);
  uVar1 = *param_1;
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  FUN_144a78877(((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4),uVar3);
  return;
}



// FUNCTION 1470a5106 FUN_1470a5106 body=28 status=ok
// SIG undefined FUN_1470a5106(void)

void FUN_1470a5106(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145b073e8(param_1);
  return;
}



// FUNCTION 1470a5122 FUN_1470a5122 body=22 status=ok
// SIG undefined FUN_1470a5122(void)

ulonglong FUN_1470a5122(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14c9a2130;
  if (DAT_14c9a2130 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&uStack_40,param_1,*(undefined4 *)(DAT_14c9a2130 + 0x2c8),
                *(undefined4 *)(DAT_14c9a2130 + 0x2cc));
  if (iStack_38 != 0) {
    FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
  }
  plVar1 = (longlong *)(lVar2 + 0x278);
  iVar3 = FUN_144b0847a(plVar1);
  if (((iVar3 != -1) &&
      (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, plVar5 = (longlong *)(lVar4 + 0x10),
      plVar5 != (longlong *)0x0 && lVar4 != 0)) && (lVar4 = *plVar5, lVar4 != 0)) {
    lVar7 = *(longlong *)(lVar4 + 0x60);
    if (lVar7 != 0) {
      do {
        FUN_144a62e5c(&uStack_40,lVar7 + 0x18,*(undefined4 *)(lVar2 + 0x2c8),
                      *(undefined4 *)(lVar2 + 0x2cc));
        if (iStack_38 != 0) {
          FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
        }
        iVar3 = FUN_144b0847a(plVar1);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
        }
        plVar5 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        lVar4 = *plVar5;
        lVar7 = *(longlong *)(lVar4 + 0x60);
      } while (lVar7 != 0);
    }
    uStack_40 = *(ulonglong *)(lVar4 + 0x30);
    uVar6 = uStack_40;
    if (uStack_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(lVar2,&uStack_40,lVar4);
    if (uStack_40 != 0) {
      *(ulonglong *)(lVar4 + 0x30) = uStack_40;
      uVar6 = uStack_40;
      if (lVar4 != 0) {
        FUN_1407d81de(uStack_40 + 8,lVar4);
        uVar6 = uStack_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar6 = 0;
LAB_1470a2651:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a5170 FUN_1470a5170 body=40 status=ok
// SIG undefined FUN_1470a5170(void)

undefined8 FUN_1470a5170(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145cec744(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470a5198 FUN_1470a5198 body=76 status=ok
// SIG undefined FUN_1470a5198(void)

undefined8 FUN_1470a5198(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145cec744(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001470a51d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1470a51e4 FUN_1470a51e4 body=28 status=ok
// SIG undefined FUN_1470a51e4(void)

void FUN_1470a51e4(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145a090e8(param_1);
  return;
}



// FUNCTION 1470a5200 FUN_1470a5200 body=22 status=ok
// SIG undefined FUN_1470a5200(void)

ulonglong FUN_1470a5200(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14c9a2240;
  if (DAT_14c9a2240 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&uStack_40,param_1,*(undefined4 *)(DAT_14c9a2240 + 0x2c8),
                *(undefined4 *)(DAT_14c9a2240 + 0x2cc));
  if (iStack_38 != 0) {
    FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
  }
  plVar1 = (longlong *)(lVar2 + 0x278);
  iVar3 = FUN_144b0847a(plVar1);
  if (((iVar3 != -1) &&
      (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, plVar5 = (longlong *)(lVar4 + 0x10),
      plVar5 != (longlong *)0x0 && lVar4 != 0)) && (lVar4 = *plVar5, lVar4 != 0)) {
    lVar7 = *(longlong *)(lVar4 + 0x60);
    if (lVar7 != 0) {
      do {
        FUN_144a62e5c(&uStack_40,lVar7 + 0x18,*(undefined4 *)(lVar2 + 0x2c8),
                      *(undefined4 *)(lVar2 + 0x2cc));
        if (iStack_38 != 0) {
          FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
        }
        iVar3 = FUN_144b0847a(plVar1);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
        }
        plVar5 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        lVar4 = *plVar5;
        lVar7 = *(longlong *)(lVar4 + 0x60);
      } while (lVar7 != 0);
    }
    uStack_40 = *(ulonglong *)(lVar4 + 0x30);
    uVar6 = uStack_40;
    if (uStack_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(lVar2,&uStack_40,lVar4);
    if (uStack_40 != 0) {
      *(ulonglong *)(lVar4 + 0x30) = uStack_40;
      uVar6 = uStack_40;
      if (lVar4 != 0) {
        FUN_1407d81de(uStack_40 + 8,lVar4);
        uVar6 = uStack_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar6 = 0;
LAB_1470a2651:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a524e FUN_1470a524e body=40 status=ok
// SIG undefined FUN_1470a524e(void)

undefined8 FUN_1470a524e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145915036(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470a5276 FUN_1470a5276 body=76 status=ok
// SIG undefined FUN_1470a5276(void)

undefined8 FUN_1470a5276(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145915036(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001470a52b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1470a52dc FUN_1470a52dc body=1195 status=ok
// SIG undefined FUN_1470a52dc(void)

undefined8 * FUN_1470a52dc(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446f470e(param_1,L"CallbackStruct",1);
  *(undefined4 *)(param_1 + 1) = 0;
  lVar4 = 0x18;
  puVar3 = param_1;
  do {
    FUN_1446f470e((undefined8 *)((longlong)puVar3 + 0xc),L"CallbackStruct",1);
    *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    lVar4 = lVar4 + -0xc;
    puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
  } while (lVar4 != 0);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  FUN_1446f470e(&local_68,L"Member",1);
  *param_1 = local_68;
  *(undefined4 *)(param_1 + 1) = 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_70,L"StaticArray[0]",1);
  *(undefined8 *)((longlong)param_1 + 0xc) = local_70;
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_78,L"StaticArray[1]",1);
  param_1[3] = local_78;
  *(int *)(param_1 + 4) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_80,L"DynamicArray[0]",1);
  iVar2 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
    FUN_1470aa61e(param_1 + 5,iVar2);
  }
  lVar4 = param_1[5];
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = local_80;
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_88,L"DynamicArray[1]",1);
  iVar2 = *(int *)(param_1 + 6);
  *(uint *)(param_1 + 6) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
    FUN_1470aa61e(param_1 + 5,iVar2);
  }
  local_d8 = param_1 + 0x1b;
  lVar4 = param_1[5];
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = local_88;
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_a0,L"Map[KeyA]",1);
  local_98 = local_a0;
  local_90 = iVar1 + 1;
  FUN_1446f470e(local_a8,L"KeyA",1);
  local_60 = local_a8;
  local_58 = &local_98;
  FUN_1470aa6b2(param_1 + 7,local_4c,&local_60);
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_b0,L"Map[KeyB]",1);
  local_98 = local_b0;
  local_90 = iVar1 + 1;
  FUN_1446f470e(local_a8,L"KeyB",1);
  local_60 = local_a8;
  local_58 = &local_98;
  FUN_1470aa6b2(param_1 + 7,local_4c,&local_60);
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_b8,L"Set1",1);
  local_60 = local_b8;
  local_58._0_4_ = iVar1 + 1;
  FUN_1470aabf6(param_1 + 0x11,&local_98,&local_60);
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_c0,L"Set2",1);
  local_60 = local_c0;
  local_58 = (undefined8 *)CONCAT44(local_58._4_4_,iVar1 + 1);
  FUN_1470aabf6(param_1 + 0x11,&local_98,&local_60);
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_c8,L"OuterDynamicArray[0]",1);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xe4) < iVar2 + 1U) {
    FUN_1470ab11c(local_d8,iVar2);
  }
  lVar4 = param_1[0x1b];
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = local_c8;
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1d);
  *(int *)(param_1 + 0x1d) = iVar1 + 1;
  FUN_1446f470e(&local_d0,L"OuterDynamicArray[1]",1);
  iVar2 = *(int *)(param_1 + 0x1c);
  *(uint *)(param_1 + 0x1c) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xe4) < iVar2 + 1U) {
    FUN_1470ab11c(local_d8,iVar2);
  }
  lVar4 = param_1[0x1b];
  *(undefined8 *)(lVar4 + (longlong)iVar2 * 0xc) = local_d0;
  *(int *)(lVar4 + 8 + (longlong)iVar2 * 0xc) = iVar1 + 1;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a5788 FUN_1470a5788 body=28 status=ok
// SIG undefined FUN_1470a5788(void)

void FUN_1470a5788(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145a0f6f6(param_1);
  return;
}



// FUNCTION 1470a57a4 FUN_1470a57a4 body=22 status=ok
// SIG undefined FUN_1470a57a4(void)

ulonglong FUN_1470a57a4(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  ulonglong uStack_40;
  int iStack_38;
  ulonglong uStack_30;
  
  lVar2 = DAT_14c9a2350;
  if (DAT_14c9a2350 == 0) {
    return 0;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a62e5c(&uStack_40,param_1,*(undefined4 *)(DAT_14c9a2350 + 0x2c8),
                *(undefined4 *)(DAT_14c9a2350 + 0x2cc));
  if (iStack_38 != 0) {
    FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
  }
  plVar1 = (longlong *)(lVar2 + 0x278);
  iVar3 = FUN_144b0847a(plVar1);
  if (((iVar3 != -1) &&
      (lVar4 = (longlong)iVar3 * 0x20 + *plVar1, plVar5 = (longlong *)(lVar4 + 0x10),
      plVar5 != (longlong *)0x0 && lVar4 != 0)) && (lVar4 = *plVar5, lVar4 != 0)) {
    lVar7 = *(longlong *)(lVar4 + 0x60);
    if (lVar7 != 0) {
      do {
        FUN_144a62e5c(&uStack_40,lVar7 + 0x18,*(undefined4 *)(lVar2 + 0x2c8),
                      *(undefined4 *)(lVar2 + 0x2cc));
        if (iStack_38 != 0) {
          FUN_144a78877(uStack_40 & 0xffffffff,iStack_38);
        }
        iVar3 = FUN_144b0847a(plVar1);
        if (iVar3 == -1) {
          lVar4 = 0;
        }
        else {
          lVar4 = (longlong)iVar3 * 0x20 + *plVar1;
        }
        plVar5 = (longlong *)(lVar4 + 0x10);
        if (lVar4 == 0) {
          plVar5 = (longlong *)0x0;
        }
        lVar4 = *plVar5;
        lVar7 = *(longlong *)(lVar4 + 0x60);
      } while (lVar7 != 0);
    }
    uStack_40 = *(ulonglong *)(lVar4 + 0x30);
    uVar6 = uStack_40;
    if (uStack_40 != 0) goto LAB_1470a2651;
    FUN_14152e682(lVar2,&uStack_40,lVar4);
    if (uStack_40 != 0) {
      *(ulonglong *)(lVar4 + 0x30) = uStack_40;
      uVar6 = uStack_40;
      if (lVar4 != 0) {
        FUN_1407d81de(uStack_40 + 8,lVar4);
        uVar6 = uStack_40;
      }
      goto LAB_1470a2651;
    }
  }
  uVar6 = 0;
LAB_1470a2651:
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a57f2 FUN_1470a57f2 body=40 status=ok
// SIG undefined FUN_1470a57f2(void)

undefined8 FUN_1470a57f2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14598ac22(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 1470a581a FUN_1470a581a body=76 status=ok
// SIG undefined FUN_1470a581a(void)

undefined8 FUN_1470a581a(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_14598ac22(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001470a585b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1470a5866 FUN_1470a5866 body=581 status=ok
// SIG undefined FUN_1470a5866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a5866(void)

{
  undefined1 auStack_148 [40];
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [24];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2668) {
    FUN_144b3d300(&DAT_14c9a2668);
    if (DAT_14c9a2668 == -1) {
      FUN_1456dc6dd();
      local_78 = 0;
      local_80 = (char *)FUN_14001cc68(0x20,0x10);
      local_70 = 0x15;
      local_68 = 0x1f;
      builtin_strncpy(local_80,"#;/?:@&=+$,_.!~*\'()[]",0x16);
      FUN_1401ddb30(local_c0,&local_80,3);
      local_a0[0] = 3;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1401db408(&local_98,&DAT_14c9a2990);
      FUN_1401db408(&local_98,local_c0);
      FUN_1456dc3ef();
      FUN_1456dc3ef();
      local_120 = 1;
      local_11c = 0x25;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100[0] = 6;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      FUN_1401db408(&local_f8,&local_120);
      FUN_1401db408(&local_f8,&DAT_14c9a2670);
      local_e0[0] = 6;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1401db408(&local_d8,local_100);
      FUN_1401db408(&local_d8,&DAT_14c9a2670);
      _DAT_14c9a2648 = 3;
      _DAT_14c9a2650 = 0;
      uRam000000014c9a2658 = 0;
      _DAT_14c9a2660 = 0;
      FUN_1401db408(&DAT_14c9a2650,local_a0);
      FUN_1401db408(&DAT_14c9a2650,local_e0);
      FUN_1401d9b52(&local_d8);
      FUN_1401d9b52(&local_f8);
      FUN_1401d9b52(&local_118);
      FUN_1401d9b52(&local_98);
      FUN_1401d9b52(local_b8);
      FUN_1401d9a90(&local_80);
      atexit((_func_5014 *)&LAB_142b2b0c4);
      _Init_thread_footer(&DAT_14c9a2668);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a5aac FUN_1470a5aac body=100 status=ok
// SIG undefined FUN_1470a5aac(void)

int FUN_1470a5aac(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  plVar1 = param_1 + 2;
  if (*plVar1 == 0) {
    return 0;
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  iVar3 = 0;
  lVar4 = 0;
  do {
    cVar2 = *(char *)((longlong)param_1 + lVar4);
    iVar5 = (int)cVar2;
    if ((byte)(cVar2 + 0x9fU) < 6) {
      iVar5 = iVar5 + -0x57;
    }
    else if ((byte)(cVar2 + 0xbfU) < 6) {
      iVar5 = iVar5 + -0x37;
    }
    else {
      iVar5 = iVar5 + -0x30;
      if (9 < (byte)(cVar2 - 0x30U)) {
        iVar5 = 0;
      }
    }
    iVar3 = iVar3 * 0x10 + iVar5;
    lVar4 = lVar4 + 1;
  } while (*plVar1 != lVar4);
  return iVar3;
}



// FUNCTION 1470a5b10 FUN_1470a5b10 body=767 status=ok
// SIG undefined FUN_1470a5b10(void)

/* WARNING: Type propagation algorithm not settling */

byte * FUN_1470a5b10(byte *param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined8 *******pppppppuVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  undefined1 auStack_148 [32];
  ulonglong local_128 [5];
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8 [5];
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulonglong local_a8 [5];
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 0xf;
  do {
    uVar3 = FUN_1401dc22e(param_2);
    uVar2 = local_58;
    if (local_58 < local_50) {
      pppppppuVar8 = &local_68;
      if (0xf < local_50) {
        pppppppuVar8 = local_68;
      }
      puVar1 = (undefined1 *)((longlong)pppppppuVar8 + local_58);
      local_58 = local_58 + 1;
      *puVar1 = uVar3;
      *(undefined1 *)((longlong)pppppppuVar8 + uVar2 + 1) = 0;
    }
    else {
      FUN_1401dc532(&local_68,1);
    }
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  uVar5 = FUN_1470a5aac(&local_68);
  if (uVar5 < 0x110000 && (uVar5 & 0xfffff800) != 0xd800) {
    bVar4 = (byte)uVar5;
    if (uVar5 < 0x80) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 1;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0xf;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      *param_1 = bVar4;
    }
    else {
      if (uVar5 < 0x800) {
        uStack_80 = 0;
        local_78 = 1;
        local_70 = 0xf;
        local_a8[4] = (ulonglong)bVar4 & 0xffffffffffffff3f | 0x80;
        puVar7 = local_a8;
        local_a8[1] = 0;
        local_a8[2] = 1;
        local_a8[3] = 0xf;
        local_a8[0] = (ulonglong)(byte)(uVar5 >> 6) | 0xc0;
        FUN_1470a8f72(param_1,1,puVar7,local_a8 + 4);
      }
      else {
        uVar6 = CONCAT31((uint3)(uVar5 >> 0xe),(char)(uVar5 >> 6)) & 0xffffff3f | 0x80;
        if (uVar5 < 0x10000) {
          uStack_80 = 0;
          local_78 = 1;
          local_70 = 0xf;
          local_a8[4] = (ulonglong)bVar4 & 0xffffffffffffff3f | 0x80;
          uStack_c0 = 0;
          local_b8 = 1;
          local_b0 = 0xf;
          local_e8[4] = (ulonglong)(byte)uVar6;
          puVar9 = local_e8;
          local_e8[1] = 0;
          local_e8[2] = 1;
          local_e8[3] = 0xf;
          local_e8[0] = (ulonglong)(byte)(uVar5 >> 0xc) | 0xe0;
          puVar10 = local_a8;
          FUN_1470a8f72(puVar10,uVar6,puVar9,local_e8 + 4);
          FUN_1470a8f72(param_1);
        }
        else {
          uStack_80 = 0;
          local_78 = 1;
          local_70 = 0xf;
          local_a8[4] = (ulonglong)bVar4 & 0xffffffffffffff3f | 0x80;
          uStack_c0 = 0;
          local_b8 = 1;
          local_b0 = 0xf;
          local_e8[4] = (ulonglong)(byte)uVar6;
          puVar9 = local_128 + 4;
          uStack_100 = 0;
          local_f8 = 1;
          local_f0 = 0xf;
          local_128[4] = (ulonglong)(byte)(uVar5 >> 0xc) & 0xffffffffffffff3f | 0x80;
          puVar10 = local_128;
          local_128[1] = 0;
          local_128[2] = 1;
          local_128[3] = 0xf;
          local_128[0] = (ulonglong)(byte)(uVar5 >> 0x12) | 0xf0;
          FUN_1470a8f72(local_e8,uVar6,puVar10,puVar9);
          FUN_1470a8f72(local_a8);
          FUN_1470a8f72(param_1);
          FUN_1401d9a90(local_a8);
          FUN_1401d9a90(local_e8);
        }
        puVar7 = local_e8 + 4;
        FUN_1401d9a90(puVar10);
        FUN_1401d9a90(puVar9);
      }
      FUN_1401d9a90(puVar7);
      FUN_1401d9a90(local_a8 + 4);
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0xf;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  FUN_1401d9a90(&local_68);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a5e10 FUN_1470a5e10 body=790 status=ok
// SIG undefined FUN_1470a5e10(void)

undefined8 * FUN_1470a5e10(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_1401dc22e(param_2);
  bVar2 = FUN_1401dc22e(param_2);
  if (bVar2 == 0x27 && cVar1 == '\'') {
LAB_1470a5e3b:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0x27;
    return param_1;
  }
  if (bVar2 < 0x5c) {
    if (bVar2 < 0x2f) {
      if (bVar2 < 0x22) {
        if (bVar2 == 9) goto switchD_1470a5e81_caseD_74;
        if (bVar2 == 0x20) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 1;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0x20;
          return param_1;
        }
      }
      else {
        if (bVar2 == 0x22) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 1;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0x22;
          return param_1;
        }
        if (bVar2 == 0x27) goto LAB_1470a5e3b;
      }
    }
    else {
      switch(bVar2) {
      case 0x4c:
        param_1[2] = 3;
        param_1[3] = 0xf;
        *(undefined8 *)((longlong)param_1 + 3) = 0;
        param_1[1] = 0;
        *(undefined2 *)param_1 = 0x80e2;
        *(undefined1 *)((longlong)param_1 + 2) = 0xa8;
        return param_1;
      case 0x4d:
      case 0x4f:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
        break;
      case 0x4e:
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 1;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0x85;
        return param_1;
      case 0x50:
        param_1[2] = 3;
        param_1[3] = 0xf;
        *(undefined8 *)((longlong)param_1 + 3) = 0;
        param_1[1] = 0;
        *(undefined2 *)param_1 = 0x80e2;
        *(undefined1 *)((longlong)param_1 + 2) = 0xa9;
        return param_1;
      case 0x55:
        uVar3 = 8;
        goto LAB_1470a610e;
      default:
        if (bVar2 == 0x2f) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 1;
          param_1[3] = 0xf;
          *(undefined1 *)param_1 = 0x2f;
          return param_1;
        }
        if (bVar2 == 0x30) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 1;
          goto LAB_1470a6083;
        }
      }
    }
switchD_1470a5e81_caseD_5d:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
LAB_1470a6083:
    param_1[3] = 0xf;
    return param_1;
  }
  switch(bVar2) {
  case 0x5c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0x5c;
    break;
  default:
    goto switchD_1470a5e81_caseD_5d;
  case 0x5f:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0xa0;
    break;
  case 0x61:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 7;
    break;
  case 0x62:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 8;
    break;
  case 0x65:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0x1b;
    break;
  case 0x66:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0xc;
    break;
  case 0x6e:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 10;
    break;
  case 0x72:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0xd;
    break;
  case 0x74:
switchD_1470a5e81_caseD_74:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 9;
    break;
  case 0x75:
    uVar3 = 4;
    goto LAB_1470a610e;
  case 0x76:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 1;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0xb;
    break;
  case 0x78:
    uVar3 = 2;
LAB_1470a610e:
    FUN_1470a5b10(param_1,param_2,uVar3);
  }
  return param_1;
}



// FUNCTION 1470a6126 FUN_1470a6126 body=186 status=ok
// SIG undefined FUN_1470a6126(void)

void FUN_1470a6126(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(uint *)(param_1 + 0x10) < 2) {
    FUN_1401db026(param_1);
    *(undefined4 *)(param_1 + 0x10) = 4;
  }
  else if (*(uint *)(param_1 + 0x10) == 3) {
    if (param_2[1] == 0) {
      uStack_20 = 0;
    }
    else {
      LOCK();
      piVar1 = (int *)(param_2[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      uStack_20 = param_2[1];
    }
    local_28 = *param_2;
    FUN_1470a61f2(param_1);
  }
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a61f2 FUN_1470a61f2 body=426 status=ok
// SIG undefined FUN_1470a61f2(void)

void FUN_1470a61f2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  __uint64 _Var8;
  undefined1 auStack_188 [36];
  int iStack_164;
  longlong local_160 [2];
  basic_ostream<char,std::char_traits<char>_> local_150 [8];
  undefined **local_148 [16];
  ios_base local_c8 [96];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1401db026();
  lVar6 = *(longlong *)(param_1 + 0x60);
  lVar7 = *(longlong *)(param_1 + 0x68);
  if (lVar7 != lVar6) {
    _Var8 = 0;
    do {
      FUN_1470a639e(local_160,1);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(local_150,_Var8);
      puVar5 = (undefined8 *)FUN_1401da48a(*(undefined8 *)*param_2);
      FUN_1470ab43c((basic_streambuf<char,std::char_traits<char>_> *)local_148,local_68);
      FUN_1401d7e7a(puVar5);
      puVar3 = *(undefined1 **)*puVar5;
      *puVar3 = 1;
      *(undefined4 *)(puVar3 + 0x10) = 2;
      FUN_1401d7e14(puVar3 + 0x40,local_68);
      FUN_1401d9a90(local_68);
      FUN_1401db094(param_1,puVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + _Var8 * 8));
      *(undefined ***)((longlong)local_160 + (longlong)*(int *)(local_160[0] + 4)) =
           &PTR_LAB_14a179f28;
      *(int *)((longlong)&iStack_164 + (longlong)*(int *)(local_160[0] + 4)) =
           *(int *)(local_160[0] + 4) + -0x98;
      local_148[0] = &PTR_FUN_14a179f40;
      FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)local_148);
      std::basic_streambuf<char,std::char_traits<char>_>::
      ~basic_streambuf<char,std::char_traits<char>_>
                ((basic_streambuf<char,std::char_traits<char>_> *)local_148);
      std::ios_base::~ios_base(local_c8);
      _Var8 = _Var8 + 1;
      lVar6 = *(longlong *)(param_1 + 0x60);
      lVar7 = *(longlong *)(param_1 + 0x68);
    } while (_Var8 < (ulonglong)(lVar7 - lVar6 >> 3));
  }
  if (lVar6 != lVar7) {
    *(longlong *)(param_1 + 0x68) = lVar6;
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x10) = 4;
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
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a639e FUN_1470a639e body=219 status=ok
// SIG undefined FUN_1470a639e(void)

basic_iostream<char,std::char_traits<char>_> *
FUN_1470a639e(basic_iostream<char,std::char_traits<char>_> *param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined **)param_1 = &DAT_14a179f30;
    *(undefined **)(param_1 + 0x10) = &DAT_14a179f38;
    std::ios_base::ios_base((ios_base *)(param_1 + 0x98));
    *(undefined ***)(param_1 + 0x98) = &PTR_FUN_149f63f58;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    param_1[0xf0] = (basic_iostream<char,std::char_traits<char>_>)0x0;
  }
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = &PTR_LAB_14a179f28;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (param_1,(basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18));
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = &PTR_LAB_14a179f28;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18));
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a179f40;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  return param_1;
}



// FUNCTION 1470a647a FUN_1470a647a body=192 status=ok
// SIG undefined FUN_1470a647a(void)

basic_iostream<char,std::char_traits<char>_> *
FUN_1470a647a(basic_iostream<char,std::char_traits<char>_> *param_1,undefined8 param_2)

{
  *(undefined **)param_1 = &DAT_14a179f30;
  *(undefined **)(param_1 + 0x10) = &DAT_14a179f38;
  std::ios_base::ios_base((ios_base *)(param_1 + 0x98));
  *(undefined ***)(param_1 + 0x98) = &PTR_FUN_149f63f58;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  param_1[0xf0] = (basic_iostream<char,std::char_traits<char>_>)0x0;
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = &PTR_LAB_14a179f28;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (param_1,(basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18));
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) = &PTR_LAB_14a179f28;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0x98;
  FUN_1470ab558((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x18),param_2);
  return param_1;
}



// FUNCTION 1470a653a FUN_1470a653a body=99 status=ok
// SIG undefined FUN_1470a653a(void)

void FUN_1470a653a(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1401d7ca6(param_2 + 0x18,&DAT_14a1799d0);
  if (cVar1 != '\0') {
    FUN_1470a659e(param_1,param_2);
    return;
  }
  cVar1 = FUN_1401d7ca6(param_2 + 0x18,&DAT_14a1799ae);
  if (cVar1 == '\0') {
    return;
  }
  FUN_1470a66ce(param_1,param_2);
  return;
}



// FUNCTION 1470a659e FUN_1470a659e body=303 status=ok
// SIG undefined FUN_1470a659e(void)

void FUN_1470a659e(longlong param_1,longlong param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_138 [28];
  int iStack_11c;
  longlong local_118 [3];
  undefined **local_100 [16];
  ios_base local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(longlong *)(param_2 + 0x40) - *(longlong *)(param_2 + 0x38) == 0x20) &&
     (**(char **)(param_1 + 8) == '\x01')) {
    FUN_1470a647a((basic_istream<char,std::char_traits<char>_> *)local_118);
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)local_118,
               (int *)(*(longlong *)(param_1 + 8) + 4));
    std::basic_istream<char,std::char_traits<char>_>::get
              ((basic_istream<char,std::char_traits<char>_> *)local_118);
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)local_118,
               (int *)(*(longlong *)(param_1 + 8) + 8));
    bVar1 = std::ios_base::fail((ios_base *)
                                ((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)));
    if (!bVar1) {
      iVar2 = std::basic_istream<char,std::char_traits<char>_>::peek
                        ((basic_istream<char,std::char_traits<char>_> *)local_118);
      if ((iVar2 == -1) && (*(int *)(*(undefined1 **)(param_1 + 8) + 4) < 2)) {
        **(undefined1 **)(param_1 + 8) = 0;
      }
    }
    *(undefined ***)((longlong)local_118 + (longlong)*(int *)(local_118[0] + 4)) =
         &PTR_LAB_14a179f28;
    *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118[0] + 4)) =
         *(int *)(local_118[0] + 4) + -0x98;
    local_100[0] = &PTR_FUN_14a179f40;
    FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)local_100);
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)local_100);
    std::ios_base::~ios_base(local_80);
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a66ce FUN_1470a66ce body=142 status=ok
// SIG undefined FUN_1470a66ce(void)

void FUN_1470a66ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x40) - lVar1 == 0x40) {
    lVar2 = FUN_1456dbba0(*(longlong *)(param_1 + 8) + 0x10,lVar1);
    if (lVar2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) {
      FUN_1470ab9a6(*(longlong *)(param_1 + 8) + 0x10,local_30,lVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6770 FUN_1470a6770 body=240 status=ok
// SIG undefined FUN_1470a6770(void)

void FUN_1470a6770(longlong param_1)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401dd0a6();
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined2 *)(param_1 + 0x9a) = 0;
  local_80 = *(undefined4 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = 3;
  do {
    FUN_1401dc22e(param_1 + 0x18);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_78 = 0x100000000;
  local_70 = local_88;
  local_68 = local_80;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_78);
  FUN_1401d7744(&local_40);
  FUN_1401d9a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6862 FUN_1470a6862 body=240 status=ok
// SIG undefined FUN_1470a6862(void)

void FUN_1470a6862(longlong param_1)

{
  int iVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1401dd0a6();
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined2 *)(param_1 + 0x9a) = 0;
  local_80 = *(undefined4 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = 3;
  do {
    FUN_1401dc22e(param_1 + 0x18);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  local_78 = 0x200000000;
  local_70 = local_88;
  local_68 = local_80;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_78);
  FUN_1401d7744(&local_40);
  FUN_1401d9a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6954 FUN_1470a6954 body=233 status=ok
// SIG undefined FUN_1470a6954(void)

void FUN_1470a6954(longlong param_1)

{
  char cVar1;
  undefined1 auStack_b8 [44];
  uint local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  uint local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1401da236();
  *(undefined2 *)(param_1 + 0x9a) = 1;
  local_80 = *(undefined4 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  cVar1 = FUN_1401dc22e(param_1 + 0x18);
  local_8c = (uint)(cVar1 == '[');
  FUN_1470abd9c(param_1 + 0x108);
  local_74 = cVar1 == '[' ^ 9;
  local_78 = 0;
  local_70 = local_88;
  local_68 = local_80;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_78);
  FUN_1401d7744(&local_40);
  FUN_1401d9a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6a3e FUN_1470a6a3e body=631 status=ok
// SIG undefined FUN_1470a6a3e(void)

void FUN_1470a6a3e(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  ulonglong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    local_80 = *(undefined4 *)(param_1 + 0x28);
    puVar7 = &local_88;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = (*(longlong *)(param_1 + 0x128) + *(longlong *)(param_1 + 0x120)) - 1;
    lVar5 = *(longlong *)(param_1 + 0x110);
    uVar6 = *(longlong *)(param_1 + 0x118) - 1U & uVar3 >> 2;
    uVar2 = (uint)uVar3 & 3;
    if (*(int *)(*(longlong *)(lVar5 + uVar6 * 8) + (ulonglong)uVar2 * 4) == 0) {
      cVar1 = FUN_1401da0e8(param_1);
      if (cVar1 == '\0') {
        lVar5 = *(longlong *)(param_1 + 0x110);
        uVar3 = (*(longlong *)(param_1 + 0x120) + *(longlong *)(param_1 + 0x128)) - 1;
        uVar6 = uVar3 >> 2 & *(longlong *)(param_1 + 0x118) - 1U;
        uVar2 = (uint)uVar3 & 3;
        goto LAB_1470a6aaa;
      }
      local_68 = *(undefined4 *)(param_1 + 0x28);
      local_70 = *(undefined8 *)(param_1 + 0x20);
      local_78 = 0xf00000000;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xf;
      local_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_1401d9bce(param_1 + 0x70,&local_78);
      FUN_1401d7744(&local_40);
      FUN_1401d9a90(&local_60);
    }
    else {
LAB_1470a6aaa:
      if (*(int *)(*(longlong *)(lVar5 + uVar6 * 8) + (ulonglong)uVar2 * 4) == 1) {
        FUN_1401da1b2(param_1);
      }
    }
    *(undefined2 *)(param_1 + 0x9a) = 0x100;
    local_90 = *(undefined4 *)(param_1 + 0x28);
    local_98 = *(undefined8 *)(param_1 + 0x20);
    cVar1 = FUN_1401dc22e(param_1 + 0x18);
    lVar5 = *(longlong *)(param_1 + 0x128) + -1;
    uVar3 = *(longlong *)(param_1 + 0x120) + lVar5;
    if (*(uint *)(*(longlong *)
                   (*(longlong *)(param_1 + 0x110) +
                   (*(longlong *)(param_1 + 0x118) - 1U & uVar3 >> 2) * 8) +
                 (ulonglong)((uint)uVar3 & 3) * 4) == (uint)(cVar1 == ']')) {
      *(longlong *)(param_1 + 0x128) = lVar5;
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x120) = 0;
      }
      local_78 = (ulonglong)(cVar1 == ']') << 0x20 ^ 0xb00000000;
      local_70 = local_98;
      local_68 = local_90;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      local_48 = 0xf;
      local_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_1401d9bce(param_1 + 0x70,&local_78);
      FUN_1401d7744(&local_40);
      FUN_1401d9a90(&local_60);
      goto LAB_1470a6bac;
    }
    local_a0 = local_90;
    puVar7 = &local_a8;
    uVar4 = local_98;
  }
  *puVar7 = uVar4;
  FUN_1470a7678(param_1,puVar7,"illegal flow end");
LAB_1470a6bac:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6cb6 FUN_1470a6cb6 body=463 status=ok
// SIG undefined FUN_1470a6cb6(void)

void FUN_1470a6cb6(longlong param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    uVar3 = (*(longlong *)(param_1 + 0x128) + *(longlong *)(param_1 + 0x120)) - 1;
    lVar4 = *(longlong *)(param_1 + 0x110);
    uVar5 = *(longlong *)(param_1 + 0x118) - 1U & uVar3 >> 2;
    uVar2 = (uint)uVar3 & 3;
    if (*(int *)(*(longlong *)(lVar4 + uVar5 * 8) + (ulonglong)uVar2 * 4) == 0) {
      cVar1 = FUN_1401da0e8(param_1);
      if (cVar1 != '\0') {
        local_68 = *(undefined4 *)(param_1 + 0x28);
        local_70 = *(undefined8 *)(param_1 + 0x20);
        local_78 = 0xf00000000;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 0xf;
        local_40 = 0;
        uStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        FUN_1401d9bce(param_1 + 0x70,&local_78);
        FUN_1401d7744(&local_40);
        FUN_1401d9a90(&local_60);
        goto LAB_1470a6d30;
      }
      lVar4 = *(longlong *)(param_1 + 0x110);
      uVar3 = (*(longlong *)(param_1 + 0x120) + *(longlong *)(param_1 + 0x128)) - 1;
      uVar5 = uVar3 >> 2 & *(longlong *)(param_1 + 0x118) - 1U;
      uVar2 = (uint)uVar3 & 3;
    }
    if (*(int *)(*(longlong *)(lVar4 + uVar5 * 8) + (ulonglong)uVar2 * 4) == 1) {
      FUN_1401da1b2(param_1);
    }
  }
LAB_1470a6d30:
  *(undefined2 *)(param_1 + 0x9a) = 1;
  local_80 = *(undefined4 *)(param_1 + 0x28);
  local_88 = *(undefined8 *)(param_1 + 0x20);
  FUN_1401dc22e(param_1 + 0x18);
  local_78 = 0xd00000000;
  local_70 = local_88;
  local_68 = local_80;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_78);
  FUN_1401d7744(&local_40);
  FUN_1401d9a90(&local_60);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6e86 FUN_1470a6e86 body=236 status=ok
// SIG undefined FUN_1470a6e86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a6e86(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2780) {
    FUN_144b3d300(&DAT_14c9a2780);
    if (DAT_14c9a2780 == -1) {
      FUN_1456db528();
      local_38 = 1;
      local_34 = 0x3f;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      _DAT_14c9a2760 = 6;
      _DAT_14c9a2768 = 0;
      uRam000000014c9a2770 = 0;
      _DAT_14c9a2778 = 0;
      FUN_1401db408(&DAT_14c9a2768,&local_38);
      FUN_1401db408(&DAT_14c9a2768,&DAT_14c9a2a08);
      FUN_1401d9b52(&local_30);
      atexit((_func_5014 *)&LAB_142b2b118);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a6f82 FUN_1470a6f82 body=272 status=ok
// SIG undefined FUN_1470a6f82(void)

void FUN_1470a6f82(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x128) == 0) {
    if (*(char *)(param_1 + 0x9a) == '\0') {
      local_80 = *(undefined4 *)(param_1 + 0x28);
      local_88 = *(undefined8 *)(param_1 + 0x20);
      FUN_1470a7678(param_1,&local_88,"illegal map key");
      goto LAB_1470a7024;
    }
    FUN_1401da89e(param_1,*(undefined4 *)(param_1 + 0x28),0);
    bVar1 = *(longlong *)(param_1 + 0x128) == 0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x9a) = bVar1;
  local_68 = *(undefined4 *)(param_1 + 0x28);
  local_70 = *(undefined8 *)(param_1 + 0x20);
  FUN_1401dc22e(param_1 + 0x18);
  local_78 = 0xe00000000;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_1401d9bce(param_1 + 0x70,&local_78);
  FUN_1401d7744(&local_40);
  FUN_1401d9a90(&local_60);
LAB_1470a7024:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7094 FUN_1470a7094 body=925 status=ok
// SIG undefined FUN_1470a7094(void)

void FUN_1470a7094(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined1 auStack_148 [40];
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  int local_e4;
  ushort local_e0;
  undefined1 local_de;
  uint local_dc;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  ulonglong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  ulonglong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar9 = 0;
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_50 = 0xf;
  local_f0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_de = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_c8 = 0;
  lVar1 = param_1 + 0x18;
  local_f8 = *(undefined4 *)(param_1 + 0x28);
  local_100 = *(undefined8 *)(param_1 + 0x20);
  cVar2 = FUN_1401dc22e(lVar1);
  local_dc = (uint)(cVar2 == '>');
  FUN_1470a7dcc();
  iVar4 = FUN_1456dbef2(&DAT_14c9a2aa8,lVar1);
  if (iVar4 < 1) {
    iVar11 = 1;
    uVar10 = 1;
  }
  else {
    uVar10 = 1;
    iVar11 = 1;
    uVar9 = 0;
    do {
      uVar5 = FUN_1401dc22e(lVar1);
      cVar2 = (char)uVar5;
      if (cVar2 == '+') {
        uVar9 = 1;
      }
      else if ((uVar5 & 0xff) == 0x2d) {
        uVar9 = 0xffffffff;
      }
      else {
        FUN_1456dc584();
        cVar3 = FUN_1470a7fe2(uVar5);
        if (cVar3 != '\0') {
          if (cVar2 == '0') {
            local_108 = *(undefined4 *)(param_1 + 0x28);
            puVar7 = &local_110;
            local_110 = *(undefined8 *)(param_1 + 0x20);
            pcVar8 = "cannot set zero indentation for a block scalar";
            goto LAB_1470a740d;
          }
          iVar11 = cVar2 + -0x30;
          uVar10 = 0;
        }
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_e0 = CONCAT11(local_e0._1_1_,uVar10);
  local_e4 = iVar11;
  local_d4 = uVar9;
  FUN_1456dc292();
  iVar4 = FUN_1456dbef2(&DAT_14c9a2940,lVar1);
  while (-1 < iVar4) {
    FUN_1401dc22e(lVar1);
    FUN_1456dc292();
    iVar4 = FUN_1456dbef2(&DAT_14c9a2940,lVar1);
  }
  FUN_1456dc608(&local_c0);
  iVar4 = FUN_1456dbef2(&local_c0,lVar1);
  FUN_1401d9b52(&uStack_b8);
  if (-1 < iVar4) {
    cVar2 = FUN_1401dc1d0(lVar1);
    while (cVar2 != '\0') {
      FUN_1401dc3e8();
      iVar4 = FUN_1456dbef2(&DAT_14c9a2828,lVar1);
      if (-1 < iVar4) break;
      FUN_1401dc22e(lVar1);
      cVar2 = FUN_1401dc1d0(lVar1);
    }
  }
  cVar2 = FUN_1401dc1d0(lVar1);
  if (cVar2 != '\0') {
    FUN_1401dc3e8();
    iVar4 = FUN_1456dbef2(&DAT_14c9a2828,lVar1);
    if (iVar4 < 0) {
      local_118 = *(undefined4 *)(param_1 + 0x28);
      puVar7 = &local_120;
      local_120 = *(undefined8 *)(param_1 + 0x20);
      pcVar8 = "unexpected character in block scalar";
LAB_1470a740d:
      FUN_1470a7678(param_1,puVar7,pcVar8);
      goto LAB_1470a73b9;
    }
  }
  if (*(longlong *)(param_1 + 0xe8) == 0) {
    iVar4 = 0;
LAB_1470a72d4:
    local_e4 = iVar4 + iVar11;
  }
  else {
    uVar6 = (*(longlong *)(param_1 + 0xe8) + *(longlong *)(param_1 + 0xe0)) - 1;
    iVar4 = **(int **)(*(longlong *)
                        (*(longlong *)(param_1 + 0xd0) +
                        (*(longlong *)(param_1 + 0xd8) - 1U & uVar6 >> 1) * 8) +
                      (ulonglong)((uint)uVar6 & 1) * 8);
    if (-1 < iVar4) goto LAB_1470a72d4;
  }
  local_e0 = local_e0 & 0xff;
  local_d8 = 0;
  local_d0 = CONCAT44(2,(undefined4)local_d0);
  FUN_1401db600(&local_c0,lVar1);
  FUN_1401d9a90(&local_68);
  local_58 = local_b0;
  uStack_50 = uStack_a8;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = local_c0 & 0xffffffffffffff00;
  FUN_1401d9a90(&local_c0);
  *(undefined2 *)(param_1 + 0x9a) = 1;
  local_c0 = 0x1200000000;
  uStack_b8 = local_100;
  local_b0 = CONCAT44(local_b0._4_4_,local_f8);
  uStack_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0xf;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  FUN_1401d7e14(&uStack_a8,&local_68);
  FUN_1401d9e78(param_1 + 0x70,&local_c0);
  FUN_1401d7744(&local_88);
  FUN_1401d9a90(&uStack_a8);
LAB_1470a73b9:
  FUN_1401d9a90(&local_68);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7432 FUN_1470a7432 body=580 status=ok
// SIG undefined FUN_1470a7432(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a7432(void)

{
  undefined1 auStack_158 [32];
  undefined1 local_138 [8];
  undefined1 local_130 [24];
  undefined4 local_118 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 local_f8 [8];
  undefined1 local_f0 [24];
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a27d0) {
    FUN_144b3d300(&DAT_14c9a27d0);
    if (DAT_14c9a27d0 == -1) {
      FUN_1456db528();
      local_68 = 0;
      local_70 = (char *)FUN_14001cc68(0x20,0x10);
      local_60 = 0x11;
      local_58 = 0x1f;
      builtin_strncpy(local_70,"?,[]{}#&*!|>\'\"%@`",0x12);
      FUN_1401ddb30(local_f8,&local_70,3);
      local_d8[0] = 3;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      FUN_1401db408(&local_d0,&DAT_14c9a2a08);
      FUN_1401db408(&local_d0,local_f8);
      FUN_1456dc292();
      uStack_90 = 0;
      local_88 = 2;
      local_80 = 0xf;
      local_98 = 0x3a2d;
      FUN_1401ddb30(local_138,&local_98,3);
      local_118[0] = 6;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = 0;
      FUN_1401db408(&local_110,local_138);
      FUN_1401db408(&local_110,&DAT_14c9a2940);
      local_b8[0] = 3;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      FUN_1401db408(&local_b0,local_d8);
      FUN_1401db408(&local_b0,local_118);
      _DAT_14c9a27b0 = 5;
      _DAT_14c9a27b8 = 0;
      uRam000000014c9a27c0 = 0;
      _DAT_14c9a27c8 = 0;
      FUN_1401db408(&DAT_14c9a27b8,local_b8);
      FUN_1401d9b52(&local_b0);
      FUN_1401d9b52(&local_110);
      FUN_1401d9b52(local_130);
      FUN_1401d9a90(&local_98);
      FUN_1401d9b52(&local_d0);
      FUN_1401d9b52(local_f0);
      FUN_1401d9a90(&local_70);
      atexit((_func_5014 *)&LAB_142b2b130);
      _Init_thread_footer(&DAT_14c9a27d0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7678 FUN_1470a7678 body=84 status=ok
// SIG undefined FUN_1470a7678(void)

void FUN_1470a7678(undefined1 *param_1,undefined8 *param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 4) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *param_1 = 1;
  if (0 < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_1401dd0a6(param_1);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(undefined2 *)(param_1 + 0x99) = 1;
  return;
}



// FUNCTION 1470a76cc FUN_1470a76cc body=129 status=ok
// SIG undefined FUN_1470a76cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a76cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2898) {
    FUN_144b3d300(&DAT_14c9a2898);
    if (DAT_14c9a2898 == -1) {
      _DAT_14c9a2878 = 1;
      DAT_14c9a287c = 0x3a;
      _DAT_14c9a2880 = 0;
      uRam000000014c9a2888 = 0;
      _DAT_14c9a2890 = 0;
      atexit((_func_5014 *)&LAB_142b2b16c);
      _Init_thread_footer(&DAT_14c9a2898);
      return;
    }
  }
  return;
}



// FUNCTION 1470a774d FUN_1470a774d body=391 status=ok
// SIG undefined FUN_1470a774d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a774d(void)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8 [8];
  undefined1 local_a0 [24];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a28c0) {
    FUN_144b3d300(&DAT_14c9a28c0);
    if (DAT_14c9a28c0 == -1) {
      FUN_1456db528();
      uStack_60 = 0;
      local_58 = 2;
      local_50 = 0xf;
      local_68 = 0x7d2c;
      FUN_1401ddb30(local_a8,&local_68,3);
      local_88[0] = 3;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      FUN_1401db408(&local_80,&DAT_14c9a2a08);
      FUN_1401db408(&local_80,local_a8);
      local_c8 = 1;
      local_c4 = 0x3a;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      _DAT_14c9a28a0 = 6;
      _DAT_14c9a28a8 = 0;
      uRam000000014c9a28b0 = 0;
      _DAT_14c9a28b8 = 0;
      FUN_1401db408(&DAT_14c9a28a8,&local_c8);
      FUN_1401db408(&DAT_14c9a28a8,local_88);
      FUN_1401d9b52(&local_c0);
      FUN_1401d9b52(&local_80);
      FUN_1401d9b52(local_a0);
      FUN_1401d9a90(&local_68);
      atexit((_func_5014 *)&LAB_142b2b178);
      _Init_thread_footer(&DAT_14c9a28c0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a78d5 FUN_1470a78d5 body=122 status=ok
// SIG undefined FUN_1470a78d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a78d5(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a28e8) {
    FUN_144b3d300(&DAT_14c9a28e8);
    if (DAT_14c9a28e8 == -1) {
      _DAT_14c9a28c8 = 0;
      _DAT_14c9a28d0 = 0;
      uRam000000014c9a28d8 = 0;
      _DAT_14c9a28e0 = 0;
      atexit((_func_5014 *)&LAB_142b2b184);
      _Init_thread_footer(&DAT_14c9a28e8);
      return;
    }
  }
  return;
}



// FUNCTION 1470a794f FUN_1470a794f body=172 status=ok
// SIG undefined FUN_1470a794f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a794f(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2910) {
    FUN_144b3d300(&DAT_14c9a2910);
    if (DAT_14c9a2910 == -1) {
      FUN_1401dcbbb();
      FUN_1401dcd4c();
      _DAT_14c9a28f0 = 3;
      _DAT_14c9a28f8 = 0;
      uRam000000014c9a2900 = 0;
      _DAT_14c9a2908 = 0;
      FUN_1401db408(&DAT_14c9a28f8,&DAT_14c9a26c0);
      FUN_1401db408(&DAT_14c9a28f8,&DAT_14c9a26e8);
      atexit((_func_5014 *)&LAB_142b2b190);
      _Init_thread_footer(&DAT_14c9a2910);
      return;
    }
  }
  return;
}



// FUNCTION 1470a79fb FUN_1470a79fb body=236 status=ok
// SIG undefined FUN_1470a79fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a79fb(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2938) {
    FUN_144b3d300(&DAT_14c9a2938);
    if (DAT_14c9a2938 == -1) {
      FUN_1401dc3e8();
      local_38 = 1;
      local_34 = 0x5c;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      _DAT_14c9a2918 = 6;
      _DAT_14c9a2920 = 0;
      uRam000000014c9a2928 = 0;
      _DAT_14c9a2930 = 0;
      FUN_1401db408(&DAT_14c9a2920,&local_38);
      FUN_1401db408(&DAT_14c9a2920,&DAT_14c9a2828);
      FUN_1401d9b52(&local_30);
      atexit((_func_5014 *)&LAB_142b2b19c);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7af6 FUN_1470a7af6 body=202 status=ok
// SIG undefined FUN_1470a7af6(void)

undefined8 * FUN_1470a7af6(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  FUN_1401dc22e(param_2);
  cVar1 = FUN_1401dc1d0(param_2);
  if (cVar1 != '\0') {
    do {
      FUN_1470a5866();
      iVar2 = FUN_1456dbef2(&DAT_14c9a2648,param_2);
      if (iVar2 < 1) break;
      FUN_1401dda9c(param_2,local_48,iVar2);
      pppuVar3 = local_48;
      if (0xf < local_30) {
        pppuVar3 = (undefined8 ***)local_48[0];
      }
      FUN_144a6594a(param_1,pppuVar3,local_38);
      FUN_1401d9a90(local_48);
      cVar1 = FUN_1401dc1d0(param_2);
    } while (cVar1 != '\0');
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7bc1 FUN_1470a7bc1 body=194 status=ok
// SIG undefined FUN_1470a7bc1(void)

undefined8 * FUN_1470a7bc1(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [2];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  cVar1 = FUN_1401dc1d0(param_2);
  if (cVar1 != '\0') {
    do {
      FUN_1456dbf5f();
      iVar2 = FUN_1456dbef2(&DAT_14c9a2698,param_2);
      if (iVar2 < 1) break;
      FUN_1401dda9c(param_2,local_48,iVar2);
      pppuVar3 = local_48;
      if (0xf < local_30) {
        pppuVar3 = (undefined8 ***)local_48[0];
      }
      FUN_144a6594a(param_1,pppuVar3,local_38);
      FUN_1401d9a90(local_48);
      cVar1 = FUN_1401dc1d0(param_2);
    } while (cVar1 != '\0');
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7c84 FUN_1470a7c84 body=304 status=ok
// SIG undefined FUN_1470a7c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a7c84(void)

{
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined1 local_68 [24];
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2a50) {
    FUN_144b3d300(&DAT_14c9a2a50);
    if (DAT_14c9a2a50 == -1) {
      FUN_1470a8c53();
      FUN_1456dc608(local_70);
      FUN_1456db528();
      local_50[0] = 6;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      FUN_1401db408(&local_48,&DAT_14c9a2a08);
      FUN_1401db408(&local_48,local_70);
      _DAT_14c9a2a30 = 3;
      _DAT_14c9a2a38 = 0;
      uRam000000014c9a2a40 = 0;
      _DAT_14c9a2a48 = 0;
      FUN_1401db408(&DAT_14c9a2a38,&DAT_14c9a25f8);
      FUN_1401db408(&DAT_14c9a2a38,local_50);
      FUN_1401d9b52(&local_48);
      FUN_1401d9b52(local_68);
      atexit((_func_5014 *)&LAB_142b2b1f0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7dcc FUN_1470a7dcc body=497 status=ok
// SIG undefined FUN_1470a7dcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a7dcc(void)

{
  undefined1 auStack_108 [40];
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2ac8) {
    FUN_144b3d300(&DAT_14c9a2ac8);
    if (DAT_14c9a2ac8 == -1) {
      FUN_1456dc584();
      FUN_1470a9e3e();
      local_c0[0] = 6;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_1401db408(&local_b8,&DAT_14c9a2ad0);
      FUN_1401db408(&local_b8,&DAT_14c9a2af8);
      FUN_1470a9e3e();
      FUN_1456dc584();
      local_e0[0] = 6;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1401db408(&local_d8,&DAT_14c9a2af8);
      FUN_1401db408(&local_d8,&DAT_14c9a2ad0);
      local_a0[0] = 3;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      FUN_1401db408(&local_98,local_c0);
      FUN_1401db408(&local_98,local_e0);
      FUN_1470a9e3e();
      local_80[0] = 3;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_1401db408(&local_78,local_a0);
      FUN_1401db408(&local_78,&DAT_14c9a2ad0);
      FUN_1456dc584();
      _DAT_14c9a2aa8 = 3;
      _DAT_14c9a2ab0 = 0;
      uRam000000014c9a2ab8 = 0;
      _DAT_14c9a2ac0 = 0;
      FUN_1401db408(&DAT_14c9a2ab0,local_80);
      FUN_1401db408(&DAT_14c9a2ab0,&DAT_14c9a2af8);
      FUN_1401d9b52(&local_78);
      FUN_1401d9b52(&local_98);
      FUN_1401d9b52(&local_d8);
      FUN_1401d9b52(&local_b8);
      atexit((_func_5014 *)&LAB_142b2b214);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a7fe2 FUN_1470a7fe2 body=102 status=ok
// SIG undefined FUN_1470a7fe2(void)

ulonglong FUN_1470a7fe2(byte param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_58 [32];
  ulonglong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[1] = 0;
  local_38[3] = 0xf;
  local_38[2] = 1;
  local_38[0] = (ulonglong)param_1;
  iVar1 = FUN_1470a8ef6(local_38);
  FUN_1401d9a90(local_38);
  if ((local_38[4] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),-1 < iVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a86a0 FUN_1470a86a0 body=366 status=ok
// SIG undefined FUN_1470a86a0(void)

void FUN_1470a86a0(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_78 [46];
  byte local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  local_4a[0] = FUN_1401dc2b2();
  local_4a[1] = FUN_1401dc2b2(param_1);
  bVar3 = std::ios_base::good((ios_base *)((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1)
                             );
  if (bVar3) {
    bVar3 = iVar2 != 2;
    if ((local_4a[bVar3] & 0xfc) == 0xdc) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
    }
    if ((local_4a[bVar3] & 0xfc) == 0xd8) {
      while( true ) {
        local_4a[0] = FUN_1401dc2b2(param_1);
        local_4a[1] = FUN_1401dc2b2(param_1);
        bVar4 = std::ios_base::good((ios_base *)
                                    ((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1));
        if (!bVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
        bVar1 = local_4a[bVar3];
        if (0xfb < (byte)(bVar1 + 0x20)) break;
        FUN_1470a891b(param_1 + 3,0xfffd);
        if ((byte)(bVar1 + 0x20) < 0xf8) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a884a FUN_1470a884a body=191 status=ok
// SIG undefined FUN_1470a884a(void)

void FUN_1470a884a(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = FUN_1401dc2b2();
  local_23 = FUN_1401dc2b2(param_1);
  local_22 = FUN_1401dc2b2(param_1);
  local_21 = FUN_1401dc2b2(param_1);
  bVar1 = std::ios_base::good((ios_base *)((longlong)*(int *)(*(longlong *)*param_1 + 4) + *param_1)
                             );
  if (bVar1) {
    lVar2 = 0;
    do {
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a891b FUN_1470a891b body=229 status=ok
// SIG undefined FUN_1470a891b(void)

void FUN_1470a891b(undefined8 param_1,uint param_2)

{
  uint uVar1;
  undefined1 auStack_48 [39];
  byte local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = 0xfffd;
  if (param_2 != 4) {
    uVar1 = param_2;
  }
  local_21 = (byte)uVar1;
  if (0x7f < uVar1) {
    if (uVar1 < 0x800) {
      local_21 = (byte)(uVar1 >> 6) | 0xc0;
    }
    else {
      if (uVar1 < 0x10000) {
        local_21 = (byte)(uVar1 >> 0xc) | 0xe0;
      }
      else {
        local_21 = (byte)(uVar1 >> 0x12) & 7 | 0xf0;
        FUN_1401dc340(param_1,&local_21);
        local_21 = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
      }
      FUN_1401dc340(param_1,&local_21);
      local_21 = (byte)(uVar1 >> 6) & 0x3f | 0x80;
    }
    FUN_1401dc340(param_1,&local_21);
    local_21 = (byte)uVar1 & 0x3f | 0x80;
  }
  FUN_1401dc340(param_1,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1470a8a01 FUN_1470a8a01 body=104 status=ok
// SIG undefined FUN_1470a8a01(void)

undefined8 FUN_1470a8a01(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 *puVar2;
  
  sVar1 = strlen(param_2);
  if (sVar1 <= (param_3[2] ^ 0x7fffffffffffffff)) {
    puVar2 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    FUN_1456dbc04(param_1,puVar2,param_3,param_2,sVar1,puVar2,param_3[2]);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 1470a8a6a FUN_1470a8a6a body=38 status=ok
// SIG undefined FUN_1470a8a6a(void)

undefined8 FUN_1470a8a6a(undefined8 param_1,int param_2)

{
  FUN_14584fa20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a8aa0 FUN_1470a8aa0 body=113 status=ok
// SIG undefined FUN_1470a8aa0(void)

ios_base * FUN_1470a8aa0(ios_base *param_1,int param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0) =
       &PTR_LAB_14a179e80;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb4) =
       *(int *)(*(longlong *)(param_1 + -0xb0) + 4) + -0xb0;
  FUN_146eb22be(param_1 + -0xa0);
  std::ios_base::~ios_base(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0xb0);
  }
  return param_1 + -0xb0;
}



// FUNCTION 1470a8b12 FUN_1470a8b12 body=16 status=ok
// SIG undefined FUN_1470a8b12(void)

void FUN_1470a8b12(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1470a8b24 FUN_1470a8b24 body=199 status=ok
// SIG undefined FUN_1470a8b24(void)

void FUN_1470a8b24(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  void *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  
  if (-1 < (longlong)param_2) {
    lVar1 = *param_1;
    lVar4 = param_1[1];
    uVar2 = param_1[2] - lVar1;
    uVar3 = (uVar2 >> 1) + uVar2;
    if (uVar3 <= param_2) {
      uVar3 = param_2;
    }
    if ((uVar2 >> 1 ^ 0x7fffffffffffffff) < uVar2) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < 0x1000) {
      if (uVar3 == 0) {
        _Dst = (void *)0x0;
      }
      else {
        _Dst = (void *)FUN_14001cc68(uVar3);
      }
    }
    else {
      _Dst = (void *)FUN_140c1ca1d(uVar3);
    }
    lVar4 = lVar4 - lVar1;
    memset((void *)((longlong)_Dst + lVar4),0,param_2 - lVar4);
    memmove(_Dst,(void *)*param_1,param_1[1] - *param_1);
    FUN_1470a8bec(param_1,_Dst,param_2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1470a8b12();
}



// FUNCTION 1470a8bec FUN_1470a8bec body=102 status=ok
// SIG undefined FUN_1470a8bec(void)

void FUN_1470a8bec(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

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
  param_1[1] = param_3 + param_2;
  param_1[2] = param_4 + param_2;
  return;
}



// FUNCTION 1470a8c53 FUN_1470a8c53 body=674 status=ok
// SIG undefined FUN_1470a8c53(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1470a8c53(void)

{
  undefined1 auStack_1a8 [40];
  undefined1 local_180 [8];
  undefined1 local_178 [24];
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140 [8];
  undefined1 local_138 [24];
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_9a;
  undefined2 local_92;
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined1 local_7e;
  undefined5 local_7d;
  undefined3 uStack_78;
  undefined5 uStack_75;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a2618) {
    FUN_144b3d300(&DAT_14c9a2618);
    if (DAT_14c9a2618 == -1) {
      FUN_1456db528();
      local_120[0] = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      local_100[0] = 3;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = 0;
      FUN_1401db408(&local_f8,&DAT_14c9a2a08);
      FUN_1401db408(&local_f8,local_120);
      local_70 = 3;
      local_68 = 0xf;
      local_7d = 0;
      uStack_78 = 0;
      uStack_75 = 0;
      local_80 = 0x5d2c;
      local_7e = 0x7d;
      FUN_1401ddb30(local_140,&local_80,3);
      local_e0[0] = 3;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      FUN_1401db408(&local_d8,local_100);
      FUN_1401db408(&local_d8,local_140);
      local_160 = 1;
      local_15c = 0x3a;
      local_158 = 0;
      uStack_150 = 0;
      local_148 = 0;
      local_c0[0] = 6;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      FUN_1401db408(&local_b8,&local_160);
      FUN_1401db408(&local_b8,local_e0);
      local_90 = 6;
      local_88 = 0xf;
      local_9a = 0;
      local_92 = 0;
      local_a0 = 0x5d5b3f2c;
      local_9c = 0x7d7b;
      FUN_1401ddb30(local_180,&local_a0,3);
      _DAT_14c9a25f8 = 3;
      _DAT_14c9a2600 = 0;
      uRam000000014c9a2608 = 0;
      _DAT_14c9a2610 = 0;
      FUN_1401db408(&DAT_14c9a2600,local_c0);
      FUN_1401db408(&DAT_14c9a2600,local_180);
      FUN_1401d9b52(local_178);
      FUN_1401d9a90(&local_a0);
      FUN_1401d9b52(&local_b8);
      FUN_1401d9b52(&local_158);
      FUN_1401d9b52(&local_d8);
      FUN_1401d9b52(local_138);
      FUN_1401d9a90(&local_80);
      FUN_1401d9b52(&local_f8);
      FUN_1401d9b52(&local_118);
      atexit((_func_5014 *)&LAB_142b2b0ac);
      _Init_thread_footer(&DAT_14c9a2618);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a8ef6 FUN_1470a8ef6 body=122 status=ok
// SIG undefined FUN_1470a8ef6(void)

undefined8 FUN_1470a8ef6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  local_10 = 0;
  local_20 = param_1;
  if ((DAT_14c9a2af8 - 3U < 0xfffffffe) || (uVar1 = 0xffffffff, local_18 != 0)) {
    uVar1 = FUN_1470ab698(&DAT_14c9a2af8,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470a8f72 FUN_1470a8f72 body=448 status=ok
// SIG undefined FUN_1470a8f72(void)

undefined8 *
FUN_1470a8f72(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong _Size;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  _Size = param_3[2];
  uVar3 = param_4[2];
  uVar2 = uVar3 + _Size;
  if ((ulonglong)param_3[3] < (ulonglong)param_4[3] || param_3[3] - _Size < uVar3) {
    if (param_4[3] - uVar3 < _Size) {
      if (uVar3 <= 0x7fffffffffffffff - _Size) {
        uVar9 = 0x16;
        if (0x16 < (uVar2 | 0xf)) {
          uVar9 = uVar2 | 0xf;
        }
        if ((longlong)uVar2 < 0) {
          uVar9 = 0x7fffffffffffffff;
        }
        uVar1 = uVar9 + 1;
        if (uVar1 < 0x1000) {
          if (uVar1 == 0) {
            pvVar7 = (void *)0x0;
          }
          else {
            pvVar7 = (void *)FUN_14001cc68(uVar1,0x10);
          }
        }
        else {
          pvVar7 = (void *)FUN_140c1ca1d();
        }
        *param_1 = pvVar7;
        param_1[2] = uVar2;
        param_1[3] = uVar9;
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        memcpy(pvVar7,param_3,_Size);
        if (0xf < (ulonglong)param_4[3]) {
          param_4 = (undefined8 *)*param_4;
        }
        memcpy((void *)((longlong)pvVar7 + _Size),param_4,uVar3 + 1);
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_146eb22ad();
    }
    uVar4 = *param_4;
    uVar5 = param_4[1];
    uVar6 = param_4[3];
    param_1[2] = param_4[2];
    param_1[3] = uVar6;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_4[2] = 0;
    param_4[3] = 0xf;
    *(undefined1 *)param_4 = 0;
    pvVar7 = (void *)*param_1;
    memmove((void *)((longlong)pvVar7 + _Size),pvVar7,uVar3 + 1);
    if (0xf < (ulonglong)param_3[3]) {
      param_3 = (undefined8 *)*param_3;
    }
  }
  else {
    uVar4 = *param_3;
    uVar5 = param_3[1];
    uVar6 = param_3[3];
    param_1[2] = param_3[2];
    param_1[3] = uVar6;
    *param_1 = uVar4;
    param_1[1] = uVar5;
    param_3[2] = 0;
    param_3[3] = 0xf;
    *(undefined1 *)param_3 = 0;
    puVar8 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar8 = (undefined8 *)*param_1;
    }
    param_3 = param_4;
    if (0xf < (ulonglong)param_4[3]) {
      param_3 = (undefined8 *)*param_4;
    }
    pvVar7 = (void *)((longlong)puVar8 + _Size);
    _Size = uVar3 + 1;
  }
  memcpy(pvVar7,param_3,_Size);
  param_1[2] = uVar2;
  return param_1;
}



// FUNCTION 1470a9134 FUN_1470a9134 body=265 status=ok
// SIG undefined FUN_1470a9134(void)

undefined8 * FUN_1470a9134(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar1[1];
  uVar7 = 0;
  plVar6 = plVar1;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    uVar2 = *param_3;
    plVar4 = plVar8;
    do {
      plVar8 = plVar4;
      uVar3 = plVar8[4];
      if (uVar3 >= uVar2) {
        plVar6 = plVar8;
      }
      plVar4 = (longlong *)plVar8[(ulonglong)(uVar3 < uVar2) * 2];
    } while (*(char *)(plVar8[(ulonglong)(uVar3 < uVar2) * 2] + 0x19) == '\0');
    uVar7 = (uint)(uVar2 <= uVar3);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') && ((ulonglong)plVar6[4] <= *param_3)) {
    uVar5 = 0;
  }
  else {
    if (param_1[1] == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
      FUN_1470a938d();
    }
    plVar6 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar6[4] = *param_3;
    *plVar6 = (longlong)plVar1;
    plVar6[1] = (longlong)plVar1;
    plVar6[2] = (longlong)plVar1;
    *(undefined2 *)(plVar6 + 3) = 0;
    local_50 = plVar8;
    local_48 = uVar7;
    FUN_1470a9240(param_1,&local_50,plVar6);
    uVar5 = 1;
  }
  *param_2 = plVar6;
  *(undefined1 *)(param_2 + 1) = uVar5;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470a9240 FUN_1470a9240 body=333 status=ok
// SIG undefined FUN_1470a9240(void)

longlong * FUN_1470a9240(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  param_1[1] = param_1[1] + 1;
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)*param_2;
  param_3[1] = (longlong)plVar4;
  if (plVar4 == plVar3) {
    *plVar3 = (longlong)param_3;
    plVar3[1] = (longlong)param_3;
    plVar3[2] = (longlong)param_3;
    plVar3 = param_3;
    goto LAB_1470a92b0;
  }
  plVar1 = param_3 + 1;
  if ((int)param_2[1] == 0) {
    plVar4[2] = (longlong)param_3;
    if (*param_2 == plVar3[2]) {
      plVar4 = plVar3 + 2;
      goto LAB_1470a92a0;
    }
  }
  else {
    *plVar4 = (longlong)param_3;
    plVar4 = plVar3;
    if (*param_2 == *plVar3) {
LAB_1470a92a0:
      *plVar4 = (longlong)param_3;
    }
  }
  plVar4 = (longlong *)*plVar1;
  cVar2 = (char)plVar4[3];
  plVar6 = param_3;
  while (cVar2 == '\0') {
    plVar5 = *(longlong **)plVar4[1];
    if (plVar4 == plVar5) {
      plVar5 = (longlong *)((longlong *)plVar4[1])[2];
      if ((char)plVar5[3] == '\0') goto LAB_1470a92e0;
      if (plVar6 == (longlong *)plVar4[2]) {
        FUN_1470a939e(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_1470a93e4(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    else if ((char)plVar5[3] == '\0') {
LAB_1470a92e0:
      *(undefined1 *)(plVar4 + 3) = 1;
      *(undefined1 *)(plVar5 + 3) = 1;
      *(undefined1 *)(*(longlong *)(*plVar1 + 8) + 0x18) = 0;
      plVar6 = *(longlong **)(*plVar1 + 8);
    }
    else {
      if (plVar6 == (longlong *)*plVar4) {
        FUN_1470a93e4(param_1,plVar4);
        plVar6 = plVar4;
      }
      *(undefined1 *)(plVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(longlong *)(plVar6[1] + 8) + 0x18) = 0;
      FUN_1470a939e(param_1,*(undefined8 *)(plVar6[1] + 8));
    }
    plVar1 = plVar6 + 1;
    plVar4 = (longlong *)plVar6[1];
    cVar2 = (char)plVar4[3];
  }
  plVar3 = (longlong *)plVar3[1];
LAB_1470a92b0:
  *(undefined1 *)(plVar3 + 3) = 1;
  return param_3;
}



// FUNCTION 1470a938d FUN_1470a938d body=16 status=ok
// SIG undefined FUN_1470a938d(void)

void FUN_1470a938d(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("map/set too long");
}



// FUNCTION 1470a939e FUN_1470a939e body=70 status=ok
// SIG undefined FUN_1470a939e(void)

void FUN_1470a939e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x10);
  lVar2 = *plVar1;
  *(longlong *)(param_2 + 0x10) = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong *)(lVar2 + 8) = param_2;
  }
  plVar3 = *(longlong **)(param_2 + 8);
  plVar1[1] = (longlong)plVar3;
  if (*(longlong *)(*param_1 + 8) == param_2) {
    plVar3 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar3 = plVar3 + (ulonglong)(*plVar3 != param_2) * 2;
  }
  *plVar3 = (longlong)plVar1;
  *plVar1 = param_2;
  *(longlong **)(param_2 + 8) = plVar1;
  return;
}



// FUNCTION 1470a93e4 FUN_1470a93e4 body=68 status=ok
// SIG undefined FUN_1470a93e4(void)

void FUN_1470a93e4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar1 = *param_2;
  lVar2 = *(longlong *)(lVar1 + 0x10);
  *param_2 = lVar2;
  if (*(char *)(lVar2 + 0x19) == '\0') {
    *(longlong **)(lVar2 + 8) = param_2;
  }
  plVar3 = (longlong *)param_2[1];
  *(longlong **)(lVar1 + 8) = plVar3;
  if (*(longlong **)(*param_1 + 8) == param_2) {
    plVar4 = (longlong *)(*param_1 + 8);
  }
  else {
    plVar4 = plVar3 + 2;
    if ((longlong *)plVar3[2] != param_2) {
      plVar4 = plVar3;
    }
  }
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 0x10) = param_2;
  param_2[1] = lVar1;
  return;
}



// FUNCTION 1470a9428 FUN_1470a9428 body=110 status=ok
// SIG undefined FUN_1470a9428(void)

void FUN_1470a9428(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_1 + 8) != 0x7ffffffffffffff) {
    plVar2 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar2[2] = *param_3;
    plVar2[3] = *param_4;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    plVar1 = *(longlong **)(param_2 + 8);
    *plVar2 = param_2;
    plVar2[1] = (longlong)plVar1;
    *(longlong **)(param_2 + 8) = plVar2;
    *plVar1 = (longlong)plVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list too long");
}



// FUNCTION 1470a94a8 FUN_1470a94a8 body=137 status=ok
// SIG undefined FUN_1470a94a8(void)

ios_base * FUN_1470a94a8(ios_base *param_1,int param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98) =
       &PTR_LAB_14a179f28;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x9c) =
       *(int *)(*(longlong *)(param_1 + -0x98) + 4) + -0x98;
  *(undefined ***)(param_1 + -0x80) = &PTR_FUN_14a179f40;
  FUN_1470a9532((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x80));
  std::ios_base::~ios_base(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x98);
  }
  return param_1 + -0x98;
}



// FUNCTION 1470a9532 FUN_1470a9532 body=159 status=ok
// SIG undefined FUN_1470a9532(void)

void FUN_1470a9532(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    lVar2 = **(longlong **)(param_1 + 0x40);
    lVar3 = 0x58;
    if (lVar2 == 0) {
      lVar2 = **(longlong **)(param_1 + 0x38);
      lVar3 = 0x50;
    }
    lVar1 = **(longlong **)(param_1 + 0x18);
    if ((0xfff < (ulonglong)((**(int **)(param_1 + lVar3) + lVar2) - lVar1)) &&
       (0x1f < (ulonglong)((lVar1 + -8) - *(longlong *)(lVar1 + -8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_1400020a8();
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xfe;
  return;
}



// FUNCTION 1470a95d2 FUN_1470a95d2 body=57 status=ok
// SIG undefined FUN_1470a95d2(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_1470a95d2(basic_streambuf<char,std::char_traits<char>_> *param_1,int param_2)

{
  *(undefined ***)param_1 = &PTR_FUN_14a179f40;
  FUN_1470a9532();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a96b6 FUN_1470a96b6 body=417 status=ok
// SIG undefined FUN_1470a96b6(void)

void FUN_1470a96b6(longlong param_1,ulonglong *param_2,longlong param_3,int param_4,byte param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  byte bVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if ((param_5 & 1) == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (*(byte *)(param_1 + 0x70) & 4) >> 2;
  }
  if ((param_5 & 2) == 0) {
    bVar7 = 0;
  }
  else {
    bVar7 = (*(byte *)(param_1 + 0x70) & 2) >> 1;
  }
  uVar8 = 0xffffffffffffffff;
  if (bVar9 != 0 || bVar7 != 0) goto LAB_1470a9702;
  uVar3 = **(ulonglong **)(param_1 + 0x38);
  if (((*(byte *)(param_1 + 0x70) & 2) == 0) &&
     (uVar10 = **(ulonglong **)(param_1 + 0x40), uVar10 != 0)) {
    bVar6 = true;
    if (*(ulonglong *)(param_1 + 0x68) < uVar10) {
      *(ulonglong *)(param_1 + 0x68) = uVar10;
    }
  }
  else {
    bVar6 = false;
    uVar10 = 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x68);
  lVar5 = **(longlong **)(param_1 + 0x18);
  uVar11 = lVar4 - lVar5;
  if (param_4 == 0) {
    uVar10 = 0;
  }
  else if (param_4 == 1) {
    if ((~param_5 & 3) == 0) goto LAB_1470a9702;
    if ((param_5 & 1) == 0) {
      if (((param_5 & 2) == 0) || (uVar10 == 0 && lVar5 != 0)) goto LAB_1470a9702;
    }
    else {
      uVar10 = uVar3;
      if (uVar3 == 0 && lVar5 != 0) goto LAB_1470a9702;
    }
    uVar10 = uVar10 - lVar5;
  }
  else {
    uVar10 = uVar11;
    if (param_4 != 2) goto LAB_1470a9702;
  }
  uVar10 = uVar10 + param_3;
  if ((uVar10 <= uVar11) &&
     ((uVar10 == 0 || (((param_5 & uVar3 == 0) == 0 && ((param_5 & 2) == 0 || bVar6)))))) {
    uVar11 = lVar5 + uVar10;
    if (uVar3 != 0 && (param_5 & 1) != 0) {
      **(ulonglong **)(param_1 + 0x38) = uVar11;
      **(int **)(param_1 + 0x50) = (int)lVar4 - (int)uVar11;
    }
    uVar8 = uVar10;
    if (bVar6 && (param_5 & 2) != 0) {
      iVar1 = **(int **)(param_1 + 0x40);
      iVar2 = **(int **)(param_1 + 0x58);
      **(longlong **)(param_1 + 0x20) = lVar5;
      **(ulonglong **)(param_1 + 0x40) = uVar11;
      **(int **)(param_1 + 0x58) = (iVar1 + iVar2) - (int)uVar11;
    }
  }
LAB_1470a9702:
  *param_2 = uVar8;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1470a9858 FUN_1470a9858 body=284 status=ok
// SIG undefined FUN_1470a9858(void)

void FUN_1470a9858(longlong param_1,ulonglong *param_2,longlong *param_3,byte param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  byte bVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  
  if ((param_4 & 1) == 0) {
    bVar9 = 0;
  }
  else {
    bVar9 = (*(byte *)(param_1 + 0x70) & 4) >> 2;
  }
  if ((param_4 & 2) == 0) {
    bVar11 = 0;
  }
  else {
    bVar11 = (*(byte *)(param_1 + 0x70) & 2) >> 1;
  }
  uVar12 = 0xffffffffffffffff;
  if (bVar9 == 0 && bVar11 == 0) {
    lVar4 = **(longlong **)(param_1 + 0x38);
    uVar10 = param_3[1] + *param_3;
    if (((*(byte *)(param_1 + 0x70) & 2) == 0) &&
       (uVar5 = **(ulonglong **)(param_1 + 0x40), uVar5 != 0)) {
      bVar8 = true;
      if (*(ulonglong *)(param_1 + 0x68) < uVar5) {
        *(ulonglong *)(param_1 + 0x68) = uVar5;
      }
    }
    else {
      bVar8 = false;
    }
    lVar6 = *(longlong *)(param_1 + 0x68);
    lVar7 = **(longlong **)(param_1 + 0x18);
    if ((uVar10 <= (ulonglong)(lVar6 - lVar7)) &&
       ((uVar10 == 0 || (((param_4 & lVar4 == 0) == 0 && ((param_4 & 2) == 0 || bVar8)))))) {
      lVar1 = lVar7 + uVar10;
      if (lVar4 != 0 && (param_4 & 1) != 0) {
        **(longlong **)(param_1 + 0x38) = lVar1;
        **(int **)(param_1 + 0x50) = (int)lVar6 - (int)lVar1;
      }
      uVar12 = uVar10;
      if (bVar8 && (param_4 & 2) != 0) {
        iVar2 = **(int **)(param_1 + 0x40);
        iVar3 = **(int **)(param_1 + 0x58);
        **(longlong **)(param_1 + 0x20) = lVar7;
        **(longlong **)(param_1 + 0x40) = lVar1;
        **(int **)(param_1 + 0x58) = (iVar2 + iVar3) - (int)lVar1;
      }
    }
  }
  *param_2 = uVar12;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1470a9984 FUN_1470a9984 body=96 status=ok
// SIG undefined FUN_1470a9984(void)

ios_base * FUN_1470a9984(ios_base *param_1,int param_2)

{
  *(undefined ***)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x80) + 4) + -0x80) =
       &PTR_LAB_14a179fc0;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)(param_1 + -0x80) + 4) + -0x84) =
       *(int *)(*(longlong *)(param_1 + -0x80) + 4) + -0x80;
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(param_1 + -0x70));
  std::ios_base::~ios_base(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -0x80);
  }
  return param_1 + -0x80;
}



// FUNCTION 1470a99e4 FUN_1470a99e4 body=59 status=ok
// SIG undefined FUN_1470a99e4(void)

longlong FUN_1470a99e4(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + -*(int *)(param_1 + -4) + -0x18;
  std::ios_base::~ios_base((ios_base *)(param_1 + -*(int *)(param_1 + -4)));
  if (param_2 != 0) {
    FUN_1400020a8(lVar1);
  }
  return lVar1;
}



// FUNCTION 1470a9a20 FUN_1470a9a20 body=39 status=ok
// SIG undefined FUN_1470a9a20(void)

basic_streambuf<char,std::char_traits<char>_> *
FUN_1470a9a20(basic_streambuf<char,std::char_traits<char>_> *param_1,int param_2)

{
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470a9a48 FUN_1470a9a48 body=16 status=ok
// SIG undefined FUN_1470a9a48(void)

void FUN_1470a9a48(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}



// FUNCTION 1470a9a59 FUN_1470a9a59 body=129 status=ok
// SIG undefined FUN_1470a9a59(void)

void FUN_1470a9a59(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (param_1 != param_2) {
    lVar4 = 0;
    do {
      puVar1 = (undefined4 *)(param_1 + lVar4);
      puVar3 = (undefined8 *)(param_3 + 8 + lVar4);
      *(undefined2 *)((longlong)puVar3 + -4) = *(undefined2 *)(puVar1 + 1);
      *(undefined4 *)(puVar3 + -1) = *puVar1;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      FUN_1401d9af0(puVar3,*(longlong *)(puVar1 + 4) - *(longlong *)(param_1 + lVar4 + 8) >> 5);
      lVar2 = param_1 + lVar4;
      lVar4 = lVar4 + 0x20;
    } while (lVar2 + 0x20 != param_2);
  }
  return;
}



// FUNCTION 1470a9ada FUN_1470a9ada body=83 status=ok
// SIG undefined FUN_1470a9ada(void)

void FUN_1470a9ada(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 8) +
           (*(longlong *)(param_1 + 0x10) - 1U &
           (*(longlong *)(param_1 + 0x18) + *(longlong *)(param_1 + 0x20)) - 1U) * 8);
  FUN_1401d7744(lVar2 + 0x38);
  FUN_1401d9a90(lVar2 + 0x18);
  plVar1 = (longlong *)(param_1 + 0x20);
  *plVar1 = *plVar1 + -1;
  if (*plVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1470a9b2e FUN_1470a9b2e body=90 status=ok
// SIG undefined FUN_1470a9b2e(void)

void FUN_1470a9b2e(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != *(undefined8 **)(param_1 + 0x10)) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_1401d9f72(puVar2,param_2,*puVar1);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 0x20;
    return;
  }
  FUN_1470a9b88(param_1,puVar2,param_2);
  return;
}



// FUNCTION 1470a9b88 FUN_1470a9b88 body=454 status=ok
// SIG undefined FUN_1470a9b88(void)

undefined1 * FUN_1470a9b88(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  
  lVar9 = *param_1;
  uVar12 = (param_1[1] - lVar9 >> 5) + 1;
  uVar8 = param_1[2] - lVar9 >> 5;
  uVar13 = (uVar8 >> 1) + uVar8;
  if (uVar13 <= uVar12) {
    uVar13 = uVar12;
  }
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar13 = 0x7ffffffffffffff;
  }
  lVar7 = FUN_1470a9df8(param_1,uVar13);
  puVar1 = (undefined1 *)((longlong)param_2 + (lVar7 - lVar9));
  puVar2 = (undefined8 *)((longlong)param_2 + (lVar7 - lVar9));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)((longlong)param_2 + ((lVar7 + 0x10) - lVar9));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  FUN_1401d9f72(puVar1,param_3,*puVar2);
  puVar2 = (undefined8 *)*param_1;
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 == param_2) {
    if (puVar2 != param_2) {
      lVar9 = 0;
      do {
        puVar11 = (undefined8 *)(lVar7 + 0x10 + lVar9);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined8 *)(lVar7 + lVar9) = 0;
        ((undefined8 *)(lVar7 + lVar9))[1] = 0;
        puVar11 = (undefined8 *)((longlong)puVar2 + lVar9);
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        uVar6 = puVar11[3];
        puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar9);
        *puVar3 = puVar11[2];
        puVar3[1] = uVar6;
        *(undefined8 *)(lVar7 + lVar9) = uVar4;
        ((undefined8 *)(lVar7 + lVar9))[1] = uVar5;
        puVar11[2] = 0;
        puVar11[3] = 0xf;
        *(undefined1 *)puVar11 = 0;
        lVar9 = lVar9 + 0x20;
      } while (puVar11 + 4 != param_2);
    }
  }
  else {
    if (puVar2 != param_2) {
      lVar10 = 0;
      do {
        puVar11 = (undefined8 *)(lVar7 + 0x10 + lVar10);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined8 *)(lVar7 + lVar10) = 0;
        ((undefined8 *)(lVar7 + lVar10))[1] = 0;
        puVar11 = (undefined8 *)((longlong)puVar2 + lVar10);
        uVar4 = *puVar11;
        uVar5 = puVar11[1];
        uVar6 = puVar11[3];
        puVar3 = (undefined8 *)(lVar7 + 0x10 + lVar10);
        *puVar3 = puVar11[2];
        puVar3[1] = uVar6;
        *(undefined8 *)(lVar7 + lVar10) = uVar4;
        ((undefined8 *)(lVar7 + lVar10))[1] = uVar5;
        puVar11[2] = 0;
        puVar11[3] = 0xf;
        *(undefined1 *)puVar11 = 0;
        lVar10 = lVar10 + 0x20;
      } while (puVar11 + 4 != param_2);
      puVar11 = (undefined8 *)param_1[1];
    }
    if (puVar11 != param_2) {
      lVar9 = lVar7 - lVar9;
      lVar10 = 0;
      do {
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x30);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)((longlong)param_2 + lVar10);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[3];
        puVar3 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x30);
        *puVar3 = puVar2[2];
        puVar3[1] = uVar6;
        puVar3 = (undefined8 *)((longlong)param_2 + lVar10 + lVar9 + 0x20);
        *puVar3 = uVar4;
        puVar3[1] = uVar5;
        puVar2[2] = 0;
        puVar2[3] = 0xf;
        *(undefined1 *)puVar2 = 0;
        lVar10 = lVar10 + 0x20;
      } while (puVar2 + 4 != puVar11);
    }
  }
  FUN_1470a9d60(param_1,lVar7,uVar12,uVar13);
  return puVar1;
}



// FUNCTION 1470a9d4e FUN_1470a9d4e body=16 status=ok
// SIG undefined FUN_1470a9d4e(void)

void FUN_1470a9d4e(void)

{
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("vector too long");
}


