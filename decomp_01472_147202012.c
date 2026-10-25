// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147202012 FUN_147202012 body=163 status=ok
// SIG undefined FUN_147202012(void)

void FUN_147202012(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142d60c12();
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
  FUN_142d60cfa(param_1,param_2);
  return;
}



// FUNCTION 1472020b5 FUN_1472020b5 body=374 status=ok
// SIG undefined FUN_1472020b5(void)

void FUN_1472020b5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14720222c FUN_14720222c body=29 status=ok
// SIG undefined FUN_14720222c(void)

undefined8 FUN_14720222c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14720224a FUN_14720224a body=564 status=ok
// SIG undefined FUN_14720224a(void)

void FUN_14720224a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined4 *param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
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
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_58 = param_3;
  if ((param_4 & 4) == 0) {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3d;
    }
    *puVar1 = (ulonglong)puVar15;
    local_50 = DAT_14c9f7870;
    if (DAT_14c9f7870 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7870 + 8) = *(int *)(DAT_14c9f7870 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f7828;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a2668a0;
    uVar14 = param_5[1];
    uVar2 = param_5[2];
    uVar4 = param_5[3];
    uVar5 = param_5[4];
    uVar6 = param_5[5];
    uVar7 = param_5[6];
    uVar8 = param_5[7];
    uVar9 = param_5[8];
    uVar10 = param_5[9];
    uVar11 = param_5[10];
    uVar12 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar2;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
    *(undefined4 *)(puVar16 + 0x39) = uVar5;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
    *(undefined4 *)(puVar16 + 0x3a) = uVar7;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
    *(undefined4 *)(puVar16 + 0x3b) = uVar9;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
    *(undefined4 *)(puVar16 + 0x3c) = uVar11;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  }
  else {
    uVar14 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
      FUN_140023dd8(puVar1,0x1f8);
      puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar15 = puVar16 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar15;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    local_50 = DAT_14c9f7870;
    if (DAT_14c9f7870 != 0) {
      LOCK();
      *(int *)(DAT_14c9f7870 + 8) = *(int *)(DAT_14c9f7870 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9f7828;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a2668a0;
    uVar14 = param_5[1];
    uVar4 = param_5[2];
    uVar5 = param_5[3];
    uVar6 = param_5[4];
    uVar7 = param_5[5];
    uVar8 = param_5[6];
    uVar9 = param_5[7];
    uVar10 = param_5[8];
    uVar11 = param_5[9];
    uVar12 = param_5[10];
    uVar13 = param_5[0xb];
    *(undefined4 *)(puVar16 + 0x37) = *param_5;
    *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
    *(undefined4 *)(puVar16 + 0x38) = uVar4;
    *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar5;
    *(undefined4 *)(puVar16 + 0x39) = uVar6;
    *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar7;
    *(undefined4 *)(puVar16 + 0x3a) = uVar8;
    *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar9;
    *(undefined4 *)(puVar16 + 0x3b) = uVar10;
    *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar11;
    *(undefined4 *)(puVar16 + 0x3c) = uVar12;
    *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar13;
    *puVar16 = &PTR_FUN_14a266880;
    *(undefined4 *)(puVar16 + 0x3d) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147202480 FUN_147202480 body=38 status=ok
// SIG undefined FUN_147202480(void)

undefined8 FUN_147202480(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472024a6 FUN_1472024a6 body=219 status=ok
// SIG undefined FUN_1472024a6(void)

void FUN_1472024a6(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142d60d4c(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 147202582 FUN_147202582 body=38 status=ok
// SIG undefined FUN_147202582(void)

undefined8 FUN_147202582(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472025a8 FUN_1472025a8 body=163 status=ok
// SIG undefined FUN_1472025a8(void)

void FUN_1472025a8(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142d60f2e();
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
  FUN_142d61016(param_1,param_2);
  return;
}



// FUNCTION 14720264b FUN_14720264b body=374 status=ok
// SIG undefined FUN_14720264b(void)

void FUN_14720264b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  void *_Src;
  ulonglong uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  size_t _Size;
  longlong lVar6;
  void *_Dst;
  
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    FUN_144747744(puVar1,*param_2 + 0x10);
    uVar2 = param_1[0x13];
    lVar6 = (longlong)(int)uVar2;
    if (0 < lVar6) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar5 + 5;
        if ((undefined8 *)param_1[1] < puVar3) {
          FUN_140023dd8(param_1,0x30);
          puVar5 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar3 = puVar5 + 5;
        }
        *param_1 = (ulonglong)puVar3;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar5;
        param_1[6] = (ulonglong)(puVar5 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar4 = (void *)((longlong)_Dst + lVar6 * 4);
        _Size = lVar6 * 4;
        if ((void *)param_1[1] < pvVar4) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar4 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar4;
        memcpy(_Dst,_Src,_Size);
        puVar5[1] = 0;
        *puVar5 = &PTR_FUN_14a1fbc38;
        puVar5[2] = param_3;
        puVar5[3] = _Dst;
        *(int *)(puVar5 + 4) = (int)uVar2;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1472027c1 FUN_1472027c1 body=7 status=ok
// SIG undefined FUN_1472027c1(void)

void FUN_1472027c1(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1472027c8 FUN_1472027c8 body=132 status=ok
// SIG undefined FUN_1472027c8(void)

void FUN_1472027c8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14720284e FUN_14720284e body=48 status=ok
// SIG undefined FUN_14720284e(void)

void FUN_14720284e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x180,8);
  }
  return;
}



// FUNCTION 14720287e FUN_14720287e body=48 status=ok
// SIG undefined FUN_14720287e(void)

void FUN_14720287e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,400,0x10);
  }
  return;
}



// FUNCTION 1472028ae FUN_1472028ae body=132 status=ok
// SIG undefined FUN_1472028ae(void)

void FUN_1472028ae(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 147202932 FUN_147202932 body=241 status=ok
// SIG undefined FUN_147202932(void)

void FUN_147202932(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 147202a24 FUN_147202a24 body=630 status=ok
// SIG undefined FUN_147202a24(void)

undefined4 *
FUN_147202a24(longlong *param_1,undefined4 *param_2,uint param_3,int *param_4,undefined8 param_5,
             undefined1 *param_6)

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
  int *local_80;
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
      if (*param_4 == *(int *)(*param_1 + (longlong)*(int *)((longlong)plVar12 + lVar11 * 4) * 8)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar13 + lVar11 * 4);
        goto LAB_147202b09;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_147202ac8:
    uVar5 = FUN_147202c9c(param_1,local_80,param_5,param_3);
    FUN_147202932(param_1,uVar5,param_3);
    *param_6 = 0;
LAB_147202b09:
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
          FUN_147202932(param_1,puVar9[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147202ac8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 147202c9c FUN_147202c9c body=182 status=ok
// SIG undefined FUN_147202c9c(void)

int FUN_147202c9c(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if ((int)param_1[7] < 1) {
    iVar5 = (int)param_1[1];
    uVar1 = *param_2;
    uVar2 = *param_3;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_147202d52(param_1,iVar5);
    }
    *(ulonglong *)(*param_1 + (longlong)iVar5 * 8) = CONCAT44(uVar2,uVar1);
    iVar3 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar3);
    }
    puVar7 = (undefined4 *)((longlong)iVar3 * 4 + param_1[2]);
  }
  else {
    iVar5 = FUN_14020b4c6(param_1 + 4);
    lVar4 = *param_1;
    lVar6 = (longlong)iVar5;
    *(undefined4 *)(lVar4 + lVar6 * 8) = *param_2;
    *(undefined4 *)(lVar4 + 4 + lVar6 * 8) = *param_3;
    puVar7 = (undefined4 *)(lVar6 * 4 + param_1[2]);
  }
  *puVar7 = param_4;
  return iVar5;
}



// FUNCTION 147202d52 FUN_147202d52 body=132 status=ok
// SIG undefined FUN_147202d52(void)

void FUN_147202d52(longlong param_1,int param_2)

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



// FUNCTION 147202dd8 FUN_147202dd8 body=124 status=ok
// SIG undefined FUN_147202dd8(void)

void FUN_147202dd8(longlong param_1,int param_2)

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
    FUN_1472028ae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147202e56 FUN_147202e56 body=75 status=ok
// SIG undefined FUN_147202e56(void)

void FUN_147202e56(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 8),
              (longlong)*(int *)((longlong)param_1 + 0x10) << 3);
      FUN_1446efa72((longlong)param_1 + 8,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 147202ea2 FUN_147202ea2 body=98 status=ok
// SIG undefined FUN_147202ea2(void)

void FUN_147202ea2(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147202f04 FUN_147202f04 body=115 status=ok
// SIG undefined FUN_147202f04(void)

undefined8 * FUN_147202f04(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140038a6c(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 4);
    }
  }
  return param_1;
}



// FUNCTION 147202f78 FUN_147202f78 body=115 status=ok
// SIG undefined FUN_147202f78(void)

void FUN_147202f78(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147202feb FUN_147202feb body=52 status=ok
// SIG undefined FUN_147202feb(void)

void FUN_147202feb(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147203020(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 147203020 FUN_147203020 body=127 status=ok
// SIG undefined FUN_147203020(void)

undefined8 * FUN_147203020(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *_Src;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  puVar2 = (undefined8 *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 1;
  }
  else {
    _Src = param_2 + 2;
    if (puVar2 != (undefined8 *)0x0) {
      _Src = puVar2;
    }
    FUN_1448a9f54(param_1 + 2,iVar1,0);
    puVar2 = (undefined8 *)param_1[3];
    if ((undefined8 *)param_1[3] == (undefined8 *)0x0) {
      puVar2 = param_1 + 2;
    }
    memcpy(puVar2,_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1472030a0 FUN_1472030a0 body=31 status=ok
// SIG undefined FUN_1472030a0(void)

void FUN_1472030a0(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x48)) {
    *(undefined4 *)(param_1 + 0x4c) = 9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472030c0 FUN_1472030c0 body=8 status=ok
// SIG undefined FUN_1472030c0(void)

void FUN_1472030c0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4c) = 9;
  return;
}



// FUNCTION 1472030c8 FUN_1472030c8 body=87 status=ok
// SIG undefined FUN_1472030c8(void)

void FUN_1472030c8(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
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



// FUNCTION 147203120 FUN_147203120 body=550 status=ok
// SIG undefined FUN_147203120(void)

void FUN_147203120(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x260) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x260) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  FUN_1472033dc(param_1,param_2,param_3,param_4);
  FUN_147203a28(param_1 + 0x180,param_2,param_3,param_4);
  FUN_147203a28(param_1 + 0x1f0,param_2,param_3,param_4);
  FUN_147203d5c(param_1 + 0x270,param_2,param_3,param_4);
  FUN_147203d5c(param_1 + 0x2e8,param_2,param_3,param_4);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147203348 FUN_147203348 body=147 status=ok
// SIG undefined FUN_147203348(void)

void FUN_147203348(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1472033dc FUN_1472033dc body=1610 status=ok
// SIG undefined FUN_1472033dc(void)

void FUN_1472033dc(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      uStack_58 = param_2;
      uStack_54 = param_3;
      FUN_147203348(param_4,iVar3);
    }
    else {
      local_78 = 0;
      uStack_58 = param_2;
      uStack_54 = param_3;
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147203a28 FUN_147203a28 body=818 status=ok
// SIG undefined FUN_147203a28(void)

void FUN_147203a28(longlong *param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*param_1 != 0) {
    local_80 = *(longlong *)(*param_1 + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (param_1[1] != 0) {
    local_80 = *(longlong *)(param_1[1] + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (param_1[2] != 0) {
    local_80 = *(longlong *)(param_1[2] + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (param_1[3] != 0) {
    local_80 = *(longlong *)(param_1[3] + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(undefined8 *)(lVar4 + 8 + lVar5 * 0x48) = 0;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_60;
    puVar2[1] = local_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)local_70;
    puVar2[1] = local_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147203d5c FUN_147203d5c body=2433 status=ok
// SIG undefined FUN_147203d5c(void)

void FUN_147203d5c(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_80 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 8);
    if (local_80 != 0) {
      LOCK();
      *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
      UNLOCK();
    }
    uStack_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_78 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x28);
    local_80 = 0;
    if (local_78 != 0) {
      LOCK();
      *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      UNLOCK();
    }
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_50 = local_50 & 0xffff0000;
    uStack_48 = 0;
    uStack_40 = 0;
    iVar3 = (int)param_4[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_4 + 1) = iVar3 + 1U;
    uStack_58 = param_2;
    uStack_54 = param_3;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
      FUN_147203348(param_4,iVar3);
    }
    lVar4 = *param_4;
    *(longlong *)(lVar4 + lVar5 * 0x48) = local_80;
    local_80 = 0;
    *(longlong *)(lVar4 + 8 + lVar5 * 0x48) = local_78;
    local_78 = 0;
    *(undefined8 *)(lVar4 + 0x40 + lVar5 * 0x48) = uStack_40;
    puVar1 = (uint *)(lVar4 + 0x30 + lVar5 * 0x48);
    *puVar1 = local_50;
    puVar1[1] = uStack_4c;
    puVar1[2] = (uint)uStack_48;
    puVar1[3] = uStack_48._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x20 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_60;
    puVar2[1] = uStack_60._4_4_;
    puVar2[2] = uStack_58;
    puVar2[3] = uStack_54;
    puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar5 * 0x48);
    *puVar2 = (undefined4)uStack_70;
    puVar2[1] = uStack_70._4_4_;
    puVar2[2] = (undefined4)uStack_68;
    puVar2[3] = uStack_68._4_4_;
    FUN_1472030c8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472046de FUN_1472046de body=54 status=ok
// SIG undefined FUN_1472046de(void)

void FUN_1472046de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14720471c FUN_14720471c body=39 status=ok
// SIG undefined FUN_14720471c(void)

void FUN_14720471c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147204744 FUN_147204744 body=76 status=ok
// SIG undefined FUN_147204744(void)

void * FUN_147204744(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147204790 FUN_147204790 body=54 status=ok
// SIG undefined FUN_147204790(void)

void FUN_147204790(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472047ce FUN_1472047ce body=39 status=ok
// SIG undefined FUN_1472047ce(void)

void FUN_1472047ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472047f6 FUN_1472047f6 body=76 status=ok
// SIG undefined FUN_1472047f6(void)

void * FUN_1472047f6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147204842 FUN_147204842 body=54 status=ok
// SIG undefined FUN_147204842(void)

void FUN_147204842(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147204880 FUN_147204880 body=39 status=ok
// SIG undefined FUN_147204880(void)

void FUN_147204880(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14720980e(uVar1,param_1);
  return;
}



// FUNCTION 1472048a8 FUN_1472048a8 body=93 status=ok
// SIG undefined FUN_1472048a8(void)

void * FUN_1472048a8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x108) = 0xffff000000000000;
  return _Dst;
}



// FUNCTION 147204906 FUN_147204906 body=42 status=ok
// SIG undefined FUN_147204906(void)

void FUN_147204906(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204938 FUN_147204938 body=96 status=ok
// SIG undefined FUN_147204938(void)

undefined8 FUN_147204938(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141570d92();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fd898,1);
  return uVar3;
}



// FUNCTION 147204998 FUN_147204998 body=52 status=ok
// SIG undefined FUN_147204998(void)

void FUN_147204998(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472049cc FUN_1472049cc body=42 status=ok
// SIG undefined FUN_1472049cc(void)

void FUN_1472049cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472049fe FUN_1472049fe body=96 status=ok
// SIG undefined FUN_1472049fe(void)

undefined8 FUN_1472049fe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141584f20();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fd9a8,1);
  return uVar3;
}



// FUNCTION 147204a5e FUN_147204a5e body=52 status=ok
// SIG undefined FUN_147204a5e(void)

void FUN_147204a5e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204a92 FUN_147204a92 body=42 status=ok
// SIG undefined FUN_147204a92(void)

void FUN_147204a92(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204ac4 FUN_147204ac4 body=96 status=ok
// SIG undefined FUN_147204ac4(void)

undefined8 FUN_147204ac4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141599ac8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fda30,1);
  return uVar3;
}



// FUNCTION 147204b24 FUN_147204b24 body=52 status=ok
// SIG undefined FUN_147204b24(void)

void FUN_147204b24(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204b58 FUN_147204b58 body=42 status=ok
// SIG undefined FUN_147204b58(void)

void FUN_147204b58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204b8a FUN_147204b8a body=96 status=ok
// SIG undefined FUN_147204b8a(void)

undefined8 FUN_147204b8a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415965a6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdab8,1);
  return uVar3;
}



// FUNCTION 147204bea FUN_147204bea body=52 status=ok
// SIG undefined FUN_147204bea(void)

void FUN_147204bea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204c1e FUN_147204c1e body=42 status=ok
// SIG undefined FUN_147204c1e(void)

void FUN_147204c1e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204c50 FUN_147204c50 body=96 status=ok
// SIG undefined FUN_147204c50(void)

undefined8 FUN_147204c50(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157249c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdb40,1);
  return uVar3;
}



// FUNCTION 147204cb0 FUN_147204cb0 body=52 status=ok
// SIG undefined FUN_147204cb0(void)

void FUN_147204cb0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204ce4 FUN_147204ce4 body=42 status=ok
// SIG undefined FUN_147204ce4(void)

void FUN_147204ce4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204d16 FUN_147204d16 body=96 status=ok
// SIG undefined FUN_147204d16(void)

undefined8 FUN_147204d16(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415968b0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdbc8,1);
  return uVar3;
}



// FUNCTION 147204d76 FUN_147204d76 body=52 status=ok
// SIG undefined FUN_147204d76(void)

void FUN_147204d76(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204daa FUN_147204daa body=42 status=ok
// SIG undefined FUN_147204daa(void)

void FUN_147204daa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204ddc FUN_147204ddc body=96 status=ok
// SIG undefined FUN_147204ddc(void)

undefined8 FUN_147204ddc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141577638();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdc50,1);
  return uVar3;
}



// FUNCTION 147204e3c FUN_147204e3c body=52 status=ok
// SIG undefined FUN_147204e3c(void)

void FUN_147204e3c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204e70 FUN_147204e70 body=42 status=ok
// SIG undefined FUN_147204e70(void)

void FUN_147204e70(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204ecc FUN_147204ecc body=96 status=ok
// SIG undefined FUN_147204ecc(void)

undefined8 FUN_147204ecc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a2bf0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdcd8,1);
  return uVar3;
}



// FUNCTION 147204f2c FUN_147204f2c body=52 status=ok
// SIG undefined FUN_147204f2c(void)

void FUN_147204f2c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147204f60 FUN_147204f60 body=42 status=ok
// SIG undefined FUN_147204f60(void)

void FUN_147204f60(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147204f8e FUN_147204f8e body=289 status=ok
// SIG undefined FUN_147204f8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147204f8e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9338) {
    FUN_144b3d300(&DAT_14c9f9338);
    if (DAT_14c9f9338 == -1) {
      FUN_144a96200();
      FUN_146164724();
      FUN_140db5666(&DAT_14c9f9290,0,&DAT_14c9f9228,
                    L"FLumenDirectLightingShadowMaskFromLightAttenuationCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingShadowMask.usf",
                    L"LumenSceneDirectLightingShadowMaskFromLightAttenuationCS",5,0x40,FUN_147205110
                    ,FUN_1472050b0,&LAB_14176b42a,&LAB_142d68e6a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9fdd60);
      _DAT_14c9f9290 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e6d);
      _Init_thread_footer(&DAT_14c9f9338);
    }
  }
  return &DAT_14c9f9290;
}



// FUNCTION 1472050b0 FUN_1472050b0 body=96 status=ok
// SIG undefined FUN_1472050b0(void)

undefined8 FUN_1472050b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_144a96200();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fdd60,1);
  return uVar3;
}



// FUNCTION 147205110 FUN_147205110 body=52 status=ok
// SIG undefined FUN_147205110(void)

void FUN_147205110(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205144 FUN_147205144 body=54 status=ok
// SIG undefined FUN_147205144(void)

void FUN_147205144(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147205182 FUN_147205182 body=89 status=ok
// SIG undefined FUN_147205182(void)

undefined8 FUN_147205182(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  FUN_14720b474();
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                &DAT_14c9fdf80,0);
  return uVar1;
}



// FUNCTION 1472051dc FUN_1472051dc body=31 status=ok
// SIG undefined FUN_1472051dc(void)

void FUN_1472051dc(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 1472051fc FUN_1472051fc body=42 status=ok
// SIG undefined FUN_1472051fc(void)

void FUN_1472051fc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720522e FUN_14720522e body=96 status=ok
// SIG undefined FUN_14720522e(void)

undefined8 FUN_14720522e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed4648();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe090,1);
  return uVar3;
}



// FUNCTION 14720528e FUN_14720528e body=52 status=ok
// SIG undefined FUN_14720528e(void)

void FUN_14720528e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472052c2 FUN_1472052c2 body=42 status=ok
// SIG undefined FUN_1472052c2(void)

void FUN_1472052c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472052f0 FUN_1472052f0 body=96 status=ok
// SIG undefined FUN_1472052f0(void)

undefined8 FUN_1472052f0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1401685da();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe118,1);
  return uVar3;
}



// FUNCTION 147205350 FUN_147205350 body=52 status=ok
// SIG undefined FUN_147205350(void)

void FUN_147205350(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205384 FUN_147205384 body=860 status=ok
// SIG undefined FUN_147205384(void)

void FUN_147205384(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined4 local_208;
  uint uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  ulonglong local_1f8;
  undefined8 local_1f0;
  double local_1e8;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  double dStack_178;
  double local_170;
  undefined1 local_168 [136];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  cVar2 = (char)(*(longlong **)(param_2 + 0x28))[0x3d];
  uVar5 = 0x3f800000;
  uVar4 = 0;
  fVar3 = 1.0;
  if (cVar2 == '\x02') {
    fVar3 = (float)(**(code **)(**(longlong **)(param_2 + 0x28) + 0x20))();
    fVar3 = tanf(fVar3);
    uVar4 = 0x3f800000;
  }
  if (cVar2 != '\x01') {
    uVar5 = 0;
  }
  *(float *)(param_3 + 2) = fVar3;
  *(undefined4 *)((longlong)param_3 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_3 + 3) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar5;
  lVar1 = *(longlong *)(param_2 + 0x28);
  local_198 = 1.0 / *(double *)(lVar1 + 0x1a0);
  local_1c0 = 1.0 / *(double *)(lVar1 + 0x1a8);
  local_1e8 = 1.0 / *(double *)(lVar1 + 0x1b0);
  local_1e0 = 0.0;
  dStack_1d8 = 0.0;
  local_1d0 = 0.0;
  dStack_1c8 = 0.0;
  local_1b8 = 0.0;
  dStack_1b0 = 0.0;
  local_1a8 = 0.0;
  dStack_1a0 = 0.0;
  local_190 = 0.0;
  dStack_188 = 0.0;
  local_180 = 0.0;
  dStack_178 = 0.0;
  local_170 = 1.0;
  FUN_1447fea8d(local_168,lVar1 + 0x50);
  local_1f8 = *(ulonglong *)(param_1 + 0x1040) ^ 0x8000000000000000;
  local_208 = *(undefined4 *)(param_1 + 0x1030);
  uStack_200 = *(undefined4 *)(param_1 + 0x1038);
  uStack_204 = *(uint *)(param_1 + 0x1034) ^ 0x80000000;
  uStack_1fc = *(uint *)(param_1 + 0x103c) ^ 0x80000000;
  local_268 = 0x3ff0000000000000;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0x3ff0000000000000;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0x3ff0000000000000;
  local_210 = 0;
  local_1f0 = 0x3ff0000000000000;
  FUN_1447fea8d(&local_1e8,&local_268,local_168);
  *(float *)(param_3 + 4) = (float)local_1e8;
  *(float *)((longlong)param_3 + 0x24) = (float)local_1e0;
  *(float *)(param_3 + 5) = (float)dStack_1d8;
  *(float *)((longlong)param_3 + 0x2c) = (float)local_1d0;
  *(float *)(param_3 + 6) = (float)dStack_1c8;
  *(float *)((longlong)param_3 + 0x34) = (float)local_1c0;
  *(float *)(param_3 + 7) = (float)local_1b8;
  *(float *)((longlong)param_3 + 0x3c) = (float)dStack_1b0;
  *(float *)(param_3 + 8) = (float)local_1a8;
  *(float *)((longlong)param_3 + 0x44) = (float)dStack_1a0;
  *(float *)(param_3 + 9) = (float)local_198;
  *(float *)((longlong)param_3 + 0x4c) = (float)local_190;
  *(float *)(param_3 + 10) = (float)dStack_188;
  *(float *)((longlong)param_3 + 0x54) = (float)local_180;
  *(float *)(param_3 + 0xb) = (float)dStack_178;
  *(float *)((longlong)param_3 + 0x5c) = (float)local_170;
  param_3[0xc] = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x1b8);
  *(undefined4 *)(param_3 + 0xd) = 0;
  FUN_142cdedaa(&local_1e8,param_1 + 0x500,param_2);
  *(undefined4 *)(param_3 + 0xf) = local_1e0._0_4_;
  param_3[0xe] = local_1e8;
  lVar1 = FUN_144a8f66a();
  cVar2 = '\x02';
  if (*(char *)(lVar1 + 0x41) != '\x03') {
    cVar2 = *(char *)(lVar1 + 0x41);
  }
  *param_3 = DAT_14cb055b0;
  *(char *)(param_3 + 1) = cVar2;
  if ((local_e0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472056e2 FUN_1472056e2 body=42 status=ok
// SIG undefined FUN_1472056e2(void)

void FUN_1472056e2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205714 FUN_147205714 body=96 status=ok
// SIG undefined FUN_147205714(void)

undefined8 FUN_147205714(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4c872();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe1a0,1);
  return uVar3;
}



// FUNCTION 147205774 FUN_147205774 body=52 status=ok
// SIG undefined FUN_147205774(void)

void FUN_147205774(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472057a8 FUN_1472057a8 body=53 status=ok
// SIG undefined FUN_1472057a8(void)

bool FUN_1472057a8(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a7ebcb();
  if ((cVar1 != '\0') && (cVar1 = FUN_141767a62(param_1), cVar1 != '\0')) {
    return *(int *)(DAT_14c9fa1e8 + 4) != 0;
  }
  return false;
}



// FUNCTION 1472057de FUN_1472057de body=42 status=ok
// SIG undefined FUN_1472057de(void)

void FUN_1472057de(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205810 FUN_147205810 body=96 status=ok
// SIG undefined FUN_147205810(void)

undefined8 FUN_147205810(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f0686c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe228,1);
  return uVar3;
}



// FUNCTION 147205870 FUN_147205870 body=52 status=ok
// SIG undefined FUN_147205870(void)

void FUN_147205870(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472058a4 FUN_1472058a4 body=42 status=ok
// SIG undefined FUN_1472058a4(void)

void FUN_1472058a4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472058d6 FUN_1472058d6 body=96 status=ok
// SIG undefined FUN_1472058d6(void)

undefined8 FUN_1472058d6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e860a4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe2b0,1);
  return uVar3;
}



// FUNCTION 147205936 FUN_147205936 body=52 status=ok
// SIG undefined FUN_147205936(void)

void FUN_147205936(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720596a FUN_14720596a body=54 status=ok
// SIG undefined FUN_14720596a(void)

void FUN_14720596a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1472059a8 FUN_1472059a8 body=89 status=ok
// SIG undefined FUN_1472059a8(void)

undefined8 FUN_1472059a8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  FUN_14720ca96();
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                &DAT_14c9fe338,0);
  return uVar1;
}



// FUNCTION 147205a02 FUN_147205a02 body=31 status=ok
// SIG undefined FUN_147205a02(void)

void FUN_147205a02(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 147205a22 FUN_147205a22 body=42 status=ok
// SIG undefined FUN_147205a22(void)

void FUN_147205a22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205a54 FUN_147205a54 body=96 status=ok
// SIG undefined FUN_147205a54(void)

undefined8 FUN_147205a54(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6a7d0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe3c0,1);
  return uVar3;
}



// FUNCTION 147205ab4 FUN_147205ab4 body=52 status=ok
// SIG undefined FUN_147205ab4(void)

void FUN_147205ab4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205ae8 FUN_147205ae8 body=42 status=ok
// SIG undefined FUN_147205ae8(void)

void FUN_147205ae8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205b16 FUN_147205b16 body=96 status=ok
// SIG undefined FUN_147205b16(void)

undefined8 FUN_147205b16(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f17cc2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe448,1);
  return uVar3;
}



// FUNCTION 147205b76 FUN_147205b76 body=52 status=ok
// SIG undefined FUN_147205b76(void)

void FUN_147205b76(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205baa FUN_147205baa body=42 status=ok
// SIG undefined FUN_147205baa(void)

void FUN_147205baa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205bdc FUN_147205bdc body=96 status=ok
// SIG undefined FUN_147205bdc(void)

undefined8 FUN_147205bdc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6383c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe558,1);
  return uVar3;
}



// FUNCTION 147205c3c FUN_147205c3c body=52 status=ok
// SIG undefined FUN_147205c3c(void)

void FUN_147205c3c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205c70 FUN_147205c70 body=42 status=ok
// SIG undefined FUN_147205c70(void)

void FUN_147205c70(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205ca2 FUN_147205ca2 body=96 status=ok
// SIG undefined FUN_147205ca2(void)

undefined8 FUN_147205ca2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4cd84();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe5e0,1);
  return uVar3;
}



// FUNCTION 147205d02 FUN_147205d02 body=52 status=ok
// SIG undefined FUN_147205d02(void)

void FUN_147205d02(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205d36 FUN_147205d36 body=42 status=ok
// SIG undefined FUN_147205d36(void)

void FUN_147205d36(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205d68 FUN_147205d68 body=96 status=ok
// SIG undefined FUN_147205d68(void)

undefined8 FUN_147205d68(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4d37a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe668,1);
  return uVar3;
}



// FUNCTION 147205dc8 FUN_147205dc8 body=52 status=ok
// SIG undefined FUN_147205dc8(void)

void FUN_147205dc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205dfc FUN_147205dfc body=108 status=ok
// SIG undefined FUN_147205dfc(void)

undefined4 * FUN_147205dfc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ed43da();
  FUN_145ed43da();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9f94e0,0);
  FUN_145ed43da();
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



// FUNCTION 147205e69 FUN_147205e69 body=201 status=ok
// SIG undefined FUN_147205e69(void)

void FUN_147205e69(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145ed4648();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9fe090,param_5);
  local_88 = &DAT_14c9fe090;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14721acba(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147205f34 FUN_147205f34 body=42 status=ok
// SIG undefined FUN_147205f34(void)

void FUN_147205f34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147205f6a FUN_147205f6a body=96 status=ok
// SIG undefined FUN_147205f6a(void)

undefined8 FUN_147205f6a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dd8db8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe6f0,1);
  return uVar3;
}



// FUNCTION 147205fca FUN_147205fca body=52 status=ok
// SIG undefined FUN_147205fca(void)

void FUN_147205fca(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147205ffe FUN_147205ffe body=42 status=ok
// SIG undefined FUN_147205ffe(void)

void FUN_147205ffe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720603e FUN_14720603e body=67 status=ok
// SIG undefined FUN_14720603e(void)

undefined8 FUN_14720603e(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147206082 FUN_147206082 body=52 status=ok
// SIG undefined FUN_147206082(void)

void FUN_147206082(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472060b6 FUN_1472060b6 body=42 status=ok
// SIG undefined FUN_1472060b6(void)

void FUN_1472060b6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472060ec FUN_1472060ec body=96 status=ok
// SIG undefined FUN_1472060ec(void)

undefined8 FUN_1472060ec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dd4b84();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe778,1);
  return uVar3;
}



// FUNCTION 14720614c FUN_14720614c body=52 status=ok
// SIG undefined FUN_14720614c(void)

void FUN_14720614c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147206180 FUN_147206180 body=42 status=ok
// SIG undefined FUN_147206180(void)

void FUN_147206180(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472061c0 FUN_1472061c0 body=67 status=ok
// SIG undefined FUN_1472061c0(void)

undefined8 FUN_1472061c0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147206204 FUN_147206204 body=52 status=ok
// SIG undefined FUN_147206204(void)

void FUN_147206204(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147206238 FUN_147206238 body=42 status=ok
// SIG undefined FUN_147206238(void)

void FUN_147206238(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720626a FUN_14720626a body=96 status=ok
// SIG undefined FUN_14720626a(void)

undefined8 FUN_14720626a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e86614();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe800,1);
  return uVar3;
}



// FUNCTION 1472062ca FUN_1472062ca body=52 status=ok
// SIG undefined FUN_1472062ca(void)

void FUN_1472062ca(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472062fe FUN_1472062fe body=443 status=ok
// SIG undefined FUN_1472062fe(void)

void FUN_1472062fe(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [41];
  undefined1 local_3f [2];
  byte local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar3 = FUN_144a7ebcb();
  if (cVar3 != '\0') {
    cVar3 = FUN_141767a62(uVar2);
    if ((cVar3 != '\0') && (*(int *)(DAT_14c9fa1e8 + 4) != 0)) {
      cVar3 = FUN_141767b49(*(undefined8 *)(param_1 + 8));
      if (cVar3 == '\0') {
        local_3f[0] = 0;
        local_3d = (byte)(*(uint *)(*(longlong *)(param_1 + 8) + 0x60) >> 0x13) & 1 &
                   *(int *)(DAT_14c9f5c70 + 4) != 0;
        local_3c = *(int *)(DAT_14c9fa200 + 4) != 0;
        local_3b = *(int *)(DAT_14c9ed3f8 + 4) != 0;
        local_3a = FUN_1414c57f8();
        FUN_1472064ba(*(undefined8 *)(param_1 + 0x13818),&local_38,local_3f);
        if (local_38 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_30 + 8) + 0x50) +
                   (longlong)*(int *)(local_38 + 0xd4) * 8);
          if (lVar4 == 0) {
            lVar4 = FUN_1400bafc2(*(longlong *)(local_30 + 8),(longlong)*(int *)(local_38 + 0xd4),1)
            ;
          }
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1471499ca(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        uVar2 = *(undefined8 *)(param_1 + 0x13818);
        FUN_1460943d4();
        lVar4 = 0;
        FUN_1448e935e(uVar2,&local_38,&DAT_14c9fa3b0,0);
        FUN_1460943d4();
        if (local_38 != 0) {
          lVar4 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_30 + 8) + 0x50) +
                   (longlong)*(int *)(local_38 + 0xd4) * 8);
          if (lVar4 == 0) {
            lVar4 = FUN_1400bafc2(*(longlong *)(local_30 + 8),(longlong)*(int *)(local_38 + 0xd4),1)
            ;
          }
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1471499ca(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472064ba FUN_1472064ba body=149 status=ok
// SIG undefined FUN_1472064ba(void)

undefined4 * FUN_1472064ba(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[2];
  bVar3 = param_3[3];
  bVar4 = param_3[4];
  bVar5 = param_3[5];
  FUN_146094642();
  FUN_1448e935e(param_1,&local_38,&DAT_14c9fa600,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 | (uint)bVar5 << 4
               );
  FUN_146094642();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147206550 FUN_147206550 body=1019 status=ok
// SIG undefined FUN_147206550(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147206550(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,undefined8 *param_7,wchar_t *param_8,
                  wchar_t *param_9,wchar_t **param_10)

{
  double dVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  uint uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  wchar_t **local_d8;
  undefined *local_d0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  longlong local_a0;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_bc = param_3;
  FUN_14494b062(&local_b8,param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x348));
  local_d8 = param_10;
  FUN_1471dcd84(param_1,&local_b8,param_2,param_4);
  param_10[0x3e] = param_9;
  *(undefined4 *)(param_10 + 0x3f) = 0x14;
  if (param_5 == 0) {
    pwVar2 = (wchar_t *)0x0;
  }
  else {
    local_b8 = 0;
    iStack_b4 = 0;
    uStack_b0 = 0xffffffff;
    local_a8 = 0.0;
    local_a0 = param_5;
    if ((*(byte *)(param_5 + 0x68) & 0x80) != 0) {
      local_b8 = 0x1c;
    }
    pwVar2 = (wchar_t *)FUN_14475683e(param_1 + 0x198,param_1 + 0x70,param_5 + 8,&local_b8);
  }
  param_10[0x40] = pwVar2;
  if (param_6 == 0) {
    pwVar2 = (wchar_t *)0x0;
  }
  else {
    local_b8 = 0;
    iStack_b4 = 0;
    uStack_b0 = 0xffffffff;
    local_a8 = 0.0;
    local_a0 = param_6;
    if ((*(byte *)(param_6 + 0x68) & 0x80) != 0) {
      local_b8 = 0x1c;
    }
    pwVar2 = (wchar_t *)FUN_14475683e(param_1 + 0x198,param_1 + 0x70,param_6 + 8,&local_b8);
  }
  param_10[0x41] = pwVar2;
  pwVar2 = (wchar_t *)param_7[1];
  param_10[0x42] = (wchar_t *)*param_7;
  param_10[0x43] = pwVar2;
  *(undefined4 *)(param_10 + 0x46) = 0;
  *(undefined4 *)((longlong)param_10 + 0x234) = local_bc;
  fVar5 = *(float *)(param_2 + 0x291c) * _DAT_14c7604b4;
  if (1048576.0 <= fVar5) {
    fVar5 = 1048576.0;
  }
  if (fVar5 <= 0.01) {
    fVar5 = 0.01;
  }
  *(float *)(param_10 + 0x47) = fVar5;
  uVar6 = FUN_142d3358a();
  *(undefined4 *)((longlong)param_10 + 0x23c) = uVar6;
  FUN_1471ec94f(&local_b8);
  *(float *)(param_10 + 0x48) =
       (float)(double)CONCAT44(iStack_b4,
                               CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))))
  ;
  *(float *)((longlong)param_10 + 0x244) = (float)(double)CONCAT44(uStack_ac,uStack_b0);
  *(float *)(param_10 + 0x49) = (float)local_a8;
  fVar5 = *(float *)(DAT_14c9f88b0 + 4);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)param_10 + 0x24c) = fVar5;
  dVar1 = (double)*(float *)(DAT_14c9ed7a0 + 4);
  if (100.0 <= dVar1) {
    dVar1 = 100.0;
  }
  if (dVar1 <= 0.001) {
    dVar1 = 0.001;
  }
  *(float *)(param_10 + 0x4a) = (float)dVar1;
  fVar5 = *(float *)(DAT_14c9fa218 + 4);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *(float *)((longlong)param_10 + 0x254) = fVar5;
  param_10[0x4b] = param_8;
  if ((param_10[0x40] == (wchar_t *)0x0) || (param_10[0x41] == (wchar_t *)0x0)) {
    local_d0 = &DAT_14a26b6f0;
    local_d8 = (wchar_t **)CONCAT44(local_d8._4_4_,1);
    local_a0 = FUN_147321632(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
    local_b8 = 0;
    iStack_b4 = 0;
    uStack_b0 = 0xffffffff;
    local_a8 = 0.0;
    if ((*(byte *)(local_a0 + 0x68) & 0x80) != 0) {
      local_b8 = 0x1c;
    }
    pwVar2 = (wchar_t *)FUN_14475683e(param_1 + 0x198,param_1 + 0x70,local_a0 + 8,&local_b8);
    if (param_10[0x40] != (wchar_t *)0x0) {
      param_10[0x40] = pwVar2;
    }
    if (param_10[0x41] != (wchar_t *)0x0) {
      param_10[0x41] = pwVar2;
    }
  }
  if (param_10[0x4b] == (wchar_t *)0x0) {
    local_d8 = (wchar_t **)&local_49;
    local_49 = 0;
    local_58 = L"Lumen.SceneLighting.DummyUAV";
    uStack_b0 = 0x10109;
    uVar4 = 0x10;
    if (DAT_14ca84e48 < 0x10) {
      uVar4 = DAT_14ca84e48;
    }
    local_a8 = 0.0;
    iStack_b4 = uVar4 + (uVar4 == 0);
    local_b8 = (undefined1)iStack_b4;
    uStack_b7 = (undefined1)((uint)iStack_b4 >> 8);
    uStack_b6 = (undefined1)((uint)iStack_b4 >> 0x10);
    uStack_b5 = (undefined1)((uint)iStack_b4 >> 0x18);
    lVar3 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70,&local_58,&local_b8);
    local_b8 = 0;
    uStack_b7 = 0;
    uStack_b6 = 0;
    uStack_b0 = (undefined4)lVar3;
    uStack_ac = (undefined4)((ulonglong)lVar3 >> 0x20);
    if ((*(byte *)(lVar3 + 0x68) & 0x80) != 0) {
      local_b8 = 0x1c;
    }
    local_58 = (wchar_t *)((ulonglong)local_58 & 0xffffffffffffff00);
    local_d8 = &local_58;
    pwVar2 = (wchar_t *)FUN_144a23c98(param_1 + 0x198,param_1 + 0x70,lVar3 + 8,&local_b8);
    param_10[0x4b] = pwVar2;
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14720694c FUN_14720694c body=108 status=ok
// SIG undefined FUN_14720694c(void)

undefined4 * FUN_14720694c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e863a6();
  FUN_145e863a6();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fa728,0);
  FUN_145e863a6();
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



// FUNCTION 1472069b9 FUN_1472069b9 body=201 status=ok
// SIG undefined FUN_1472069b9(void)

void FUN_1472069b9(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145e86614();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9fe800,param_5);
  local_88 = &DAT_14c9fe800;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14721b250(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147206a84 FUN_147206a84 body=305 status=ok
// SIG undefined FUN_147206a84(void)

void FUN_147206a84(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined2 param_7)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar1 = *(undefined8 *)(param_3 + 0x13818);
  uVar3 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  local_a0 = *(undefined4 *)(param_4 + 2);
  local_9c = *(undefined1 *)(param_4 + 6);
  cVar2 = FUN_144b12ca2();
  if (cVar2 == '\0') {
    uVar3 = (ushort)((uint)(&DAT_14ca814d8)[(ulonglong)uVar3 * 0xf] >> 0x19) & 1;
  }
  else {
    uVar3 = 0;
  }
  local_88._0_7_ = CONCAT16(local_9c,CONCAT42(local_a0,uVar3));
  FUN_147213308(uVar1,local_98,&local_88);
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_b0 = param_6;
  local_b8 = param_5;
  local_a8 = &local_88;
  FUN_14721339e(param_1,param_2,param_7,local_98);
  if (local_88 != 0) {
    plVar4 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar4 = local_68;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147206bb6 FUN_147206bb6 body=577 status=ok
// SIG undefined FUN_147206bb6(void)

void FUN_147206bb6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  ulonglong *local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1472064ba(*(undefined8 *)(param_3 + 0x13818),&local_78,param_4);
  local_50 = param_6;
  FUN_145dd4b84();
  local_68 = &local_50;
  local_60 = &local_48;
  FUN_1448f70da(CONCAT44(uStack_74,local_78),&DAT_14c9fe778,param_5);
  uVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar4 = FUN_1472e1976(uVar4,param_1);
  FUN_145dd4b84();
  FUN_140069376(param_1);
  uVar6 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar6 = 4;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar7 + 0x3f;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x200);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 0x3f;
  }
  *puVar1 = (ulonglong)puVar5;
  local_68 = param_5;
  local_60 = (ulonglong *)DAT_14c9fe7c0;
  if (DAT_14c9fe7c0 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe7c0 + 8) = *(int *)(DAT_14c9fe7c0 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14c9fe778;
  local_88 = 2;
  FUN_140068f1a(puVar7,param_2,&local_68,uVar6);
  *puVar7 = &PTR_FUN_14a275e70;
  puVar7[0x37] = param_5;
  puVar7[0x38] = param_3;
  puVar7[0x39] = uVar4;
  *(undefined4 *)(puVar7 + 0x3a) = local_78;
  *(undefined4 *)((longlong)puVar7 + 0x1d4) = uStack_74;
  *(undefined4 *)(puVar7 + 0x3b) = uStack_70;
  *(undefined4 *)((longlong)puVar7 + 0x1dc) = uStack_6c;
  *(undefined1 *)(puVar7 + 0x3c) = 1;
  uVar3 = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar7 + 0x1e4) = local_50._3_4_;
  *(undefined4 *)((longlong)puVar7 + 0x1e1) = uVar3;
  puVar7[0x3d] = param_6;
  *(undefined4 *)(puVar7 + 0x3e) = 0;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar7);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147206df8 FUN_147206df8 body=250 status=ok
// SIG undefined FUN_147206df8(void)

void FUN_147206df8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined2 param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_3 + 0x13818);
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  uVar4 = 0;
  cVar3 = FUN_144b12ca2();
  if (cVar3 == '\0') {
    uVar4 = (uint)(&DAT_14ca814d8)[(ulonglong)uVar1 * 0xf] >> 0x19 & 1;
  }
  FUN_145dd8c94();
  FUN_1448e935e(uVar2,&local_58,&DAT_14c9fa288,uVar4);
  FUN_145dd8c94();
  local_68 = local_58;
  uStack_64 = uStack_54;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  local_78 = *param_5;
  local_80 = &local_78;
  local_70 = *(undefined4 *)(param_5 + 1);
  local_88 = param_4;
  FUN_147213b47(param_1,param_2,param_6);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147206ef4 FUN_147206ef4 body=592 status=ok
// SIG undefined FUN_147206ef4(void)

void FUN_147206ef4(longlong param_1,undefined8 param_2,longlong param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  uVar2 = *param_4;
  local_70 = param_2;
  FUN_1460943d4();
  FUN_1448e935e(uVar4,&local_68,&DAT_14c9fa3b0,uVar2);
  FUN_1460943d4();
  lVar5 = lStack_60;
  uVar4 = local_68;
  FUN_145dd8db8();
  local_68 = 0;
  lStack_60 = 0;
  FUN_1448f70da(uVar4,&DAT_14c9fe6f0,param_5,&local_68);
  uVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar6 = FUN_1472e1976(uVar6,param_1);
  FUN_145dd8db8();
  FUN_140069376(param_1);
  uVar9 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar9 = 4;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar8 + 0x3e;
  local_78 = uVar6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(puVar1,0x1f8);
    puVar8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar8 + 0x3e;
  }
  *puVar1 = (ulonglong)puVar7;
  local_68 = param_5;
  lStack_60 = DAT_14c9fe738;
  if (DAT_14c9fe738 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe738 + 8) = *(int *)(DAT_14c9fe738 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14c9fe6f0;
  local_88 = 2;
  FUN_140068f1a(puVar8,local_70,&local_68,uVar9);
  *puVar8 = &PTR_FUN_14a275ed0;
  puVar8[0x37] = param_5;
  puVar8[0x38] = param_3;
  puVar8[0x39] = local_78;
  puVar8[0x3a] = uVar4;
  puVar8[0x3b] = lVar5;
  *(undefined1 *)(puVar8 + 0x3c) = 1;
  *(undefined2 *)((longlong)puVar8 + 0x1e1) = local_4b;
  *(undefined1 *)((longlong)puVar8 + 0x1e3) = local_49;
  *(undefined1 **)((longlong)puVar8 + 0x1e4) = &DAT_100000001;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar8);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147207146 FUN_147207146 body=326 status=ok
// SIG undefined FUN_147207146(void)

undefined8 * FUN_147207146(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) {
    local_49 = 0;
    local_58 = L"Lumen.SceneAddOps";
    uVar2 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar2 = DAT_14ca84e48;
    }
    local_70 = uVar2 + (uVar2 == 0);
    local_68 = 0x10129;
    uVar2 = DAT_14ca84e48;
    if (*(uint *)(param_1 + 0x10) < DAT_14ca84e48) {
      uVar2 = *(uint *)(param_1 + 0x10);
    }
    local_60 = 0;
    local_6c = uVar2 + (uVar2 == 0);
    local_78 = &local_49;
    uVar1 = FUN_144738de6(param_3 + 0x188,param_3 + 0x70,&local_58,&local_70);
    *param_2 = uVar1;
    local_49 = 0;
    local_58 = L"Lumen.SceneRemoveOps";
    local_68 = 0x10129;
    uVar2 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar2 = DAT_14ca84e48;
    }
    local_60 = 0;
    local_70 = uVar2 + (uVar2 == 0);
    uVar2 = DAT_14ca84e48;
    if (*(uint *)(param_1 + 0x14) < DAT_14ca84e48) {
      uVar2 = *(uint *)(param_1 + 0x14);
    }
    local_6c = uVar2 + (uVar2 == 0);
    local_78 = &local_49;
    uVar1 = FUN_144738de6(param_3 + 0x188,param_3 + 0x70,&local_58,&local_70);
    param_2[1] = uVar1;
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14720728e FUN_14720728e body=166 status=ok
// SIG undefined FUN_14720728e(void)

undefined8 * FUN_14720728e(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = *(int *)(param_1 + 0x20);
  if (0 < iVar10) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    do {
      lVar11 = (longlong)
               (((*(int *)(param_1 + 0x1c) - iVar10) + *(int *)(param_1 + 0x18)) %
               *(int *)(param_1 + 0x18)) * 0x10;
      lVar3 = *(longlong *)(*(longlong *)(lVar9 + lVar11) + 8);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x10) != 0) {
          return param_2;
        }
        cVar8 = (**(code **)(**(longlong **)(*(longlong *)(lVar9 + lVar11) + 8) + 0x18))();
        if (cVar8 == '\0') {
          return param_2;
        }
        lVar9 = *(longlong *)(param_1 + 0x28);
      }
      lVar3 = *(longlong *)(lVar9 + 8 + lVar11);
      lVar4 = *(longlong *)(lVar3 + 8);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x10) != 0) {
          return param_2;
        }
        cVar8 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))();
        if (cVar8 == '\0') {
          return param_2;
        }
        lVar9 = *(longlong *)(param_1 + 0x28);
      }
      iVar2 = *(int *)(param_1 + 0x20);
      iVar10 = iVar2 + -1;
      *(int *)(param_1 + 0x20) = iVar10;
      puVar1 = (undefined4 *)(lVar9 + lVar11);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *(undefined4 *)param_2 = *puVar1;
      *(undefined4 *)((longlong)param_2 + 4) = uVar5;
      *(undefined4 *)(param_2 + 1) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar7;
    } while (1 < iVar2);
  }
  return param_2;
}



// FUNCTION 147207334 FUN_147207334 body=42 status=ok
// SIG undefined FUN_147207334(void)

void FUN_147207334(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207366 FUN_147207366 body=96 status=ok
// SIG undefined FUN_147207366(void)

undefined8 FUN_147207366(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4d88c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe888,1);
  return uVar3;
}



// FUNCTION 1472073c6 FUN_1472073c6 body=52 status=ok
// SIG undefined FUN_1472073c6(void)

void FUN_1472073c6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472073fa FUN_1472073fa body=42 status=ok
// SIG undefined FUN_1472073fa(void)

void FUN_1472073fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720742c FUN_14720742c body=96 status=ok
// SIG undefined FUN_14720742c(void)

undefined8 FUN_14720742c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eaca5a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe910,1);
  return uVar3;
}



// FUNCTION 14720748c FUN_14720748c body=52 status=ok
// SIG undefined FUN_14720748c(void)

void FUN_14720748c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472074c0 FUN_1472074c0 body=42 status=ok
// SIG undefined FUN_1472074c0(void)

void FUN_1472074c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472074f2 FUN_1472074f2 body=96 status=ok
// SIG undefined FUN_1472074f2(void)

undefined8 FUN_1472074f2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ebded8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fe998,1);
  return uVar3;
}



// FUNCTION 147207552 FUN_147207552 body=52 status=ok
// SIG undefined FUN_147207552(void)

void FUN_147207552(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207586 FUN_147207586 body=108 status=ok
// SIG undefined FUN_147207586(void)

undefined4 * FUN_147207586(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f4d61e();
  FUN_145f4d61e();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fa918,0);
  FUN_145f4d61e();
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



// FUNCTION 1472075f3 FUN_1472075f3 body=177 status=ok
// SIG undefined FUN_1472075f3(void)

void FUN_1472075f3(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f4d88c();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9fe888,param_4);
  local_78 = &DAT_14c9fe888;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14721b92e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472076a6 FUN_1472076a6 body=108 status=ok
// SIG undefined FUN_1472076a6(void)

undefined4 * FUN_1472076a6(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ebdc6a();
  FUN_145ebdc6a();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fab68,0);
  FUN_145ebdc6a();
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



// FUNCTION 147207713 FUN_147207713 body=177 status=ok
// SIG undefined FUN_147207713(void)

void FUN_147207713(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145ebded8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9fe998,param_4);
  local_78 = &DAT_14c9fe998;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14721bd0e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472077c6 FUN_1472077c6 body=108 status=ok
// SIG undefined FUN_1472077c6(void)

undefined4 * FUN_1472077c6(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145eac7ec();
  FUN_145eac7ec();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9faa40,0);
  FUN_145eac7ec();
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



// FUNCTION 147207833 FUN_147207833 body=177 status=ok
// SIG undefined FUN_147207833(void)

void FUN_147207833(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145eaca5a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14c9fe910,param_4);
  local_78 = &DAT_14c9fe910;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14721c0ee(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472078e6 FUN_1472078e6 body=42 status=ok
// SIG undefined FUN_1472078e6(void)

void FUN_1472078e6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207918 FUN_147207918 body=96 status=ok
// SIG undefined FUN_147207918(void)

undefined8 FUN_147207918(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145edb792();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fea20,1);
  return uVar3;
}



// FUNCTION 147207978 FUN_147207978 body=52 status=ok
// SIG undefined FUN_147207978(void)

void FUN_147207978(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472079ac FUN_1472079ac body=42 status=ok
// SIG undefined FUN_1472079ac(void)

void FUN_1472079ac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472079de FUN_1472079de body=89 status=ok
// SIG undefined FUN_1472079de(void)

undefined8 FUN_1472079de(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_14156ae1e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147207a38 FUN_147207a38 body=52 status=ok
// SIG undefined FUN_147207a38(void)

void FUN_147207a38(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207a6c FUN_147207a6c body=42 status=ok
// SIG undefined FUN_147207a6c(void)

void FUN_147207a6c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207a9e FUN_147207a9e body=96 status=ok
// SIG undefined FUN_147207a9e(void)

undefined8 FUN_147207a9e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4de82();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9feaa8,1);
  return uVar3;
}



// FUNCTION 147207afe FUN_147207afe body=52 status=ok
// SIG undefined FUN_147207afe(void)

void FUN_147207afe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207b32 FUN_147207b32 body=42 status=ok
// SIG undefined FUN_147207b32(void)

void FUN_147207b32(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207b64 FUN_147207b64 body=96 status=ok
// SIG undefined FUN_147207b64(void)

undefined8 FUN_147207b64(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158f54e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9feb30,1);
  return uVar3;
}



// FUNCTION 147207bc4 FUN_147207bc4 body=52 status=ok
// SIG undefined FUN_147207bc4(void)

void FUN_147207bc4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207bf8 FUN_147207bf8 body=42 status=ok
// SIG undefined FUN_147207bf8(void)

void FUN_147207bf8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207c2a FUN_147207c2a body=96 status=ok
// SIG undefined FUN_147207c2a(void)

undefined8 FUN_147207c2a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141596ad6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9febb8,1);
  return uVar3;
}



// FUNCTION 147207c8a FUN_147207c8a body=52 status=ok
// SIG undefined FUN_147207c8a(void)

void FUN_147207c8a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207cbe FUN_147207cbe body=42 status=ok
// SIG undefined FUN_147207cbe(void)

void FUN_147207cbe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207cf0 FUN_147207cf0 body=96 status=ok
// SIG undefined FUN_147207cf0(void)

undefined8 FUN_147207cf0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141596cfc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fec40,1);
  return uVar3;
}



// FUNCTION 147207d50 FUN_147207d50 body=52 status=ok
// SIG undefined FUN_147207d50(void)

void FUN_147207d50(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207d84 FUN_147207d84 body=42 status=ok
// SIG undefined FUN_147207d84(void)

void FUN_147207d84(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207db6 FUN_147207db6 body=96 status=ok
// SIG undefined FUN_147207db6(void)

undefined8 FUN_147207db6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141596f22();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fecc8,1);
  return uVar3;
}



// FUNCTION 147207e16 FUN_147207e16 body=52 status=ok
// SIG undefined FUN_147207e16(void)

void FUN_147207e16(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207e4a FUN_147207e4a body=42 status=ok
// SIG undefined FUN_147207e4a(void)

void FUN_147207e4a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207e7c FUN_147207e7c body=96 status=ok
// SIG undefined FUN_147207e7c(void)

undefined8 FUN_147207e7c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157785e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fed50,1);
  return uVar3;
}



// FUNCTION 147207edc FUN_147207edc body=52 status=ok
// SIG undefined FUN_147207edc(void)

void FUN_147207edc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207f10 FUN_147207f10 body=42 status=ok
// SIG undefined FUN_147207f10(void)

void FUN_147207f10(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147207f42 FUN_147207f42 body=96 status=ok
// SIG undefined FUN_147207f42(void)

undefined8 FUN_147207f42(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141570fb8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fedd8,1);
  return uVar3;
}



// FUNCTION 147207fa2 FUN_147207fa2 body=52 status=ok
// SIG undefined FUN_147207fa2(void)

void FUN_147207fa2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147207fd6 FUN_147207fd6 body=42 status=ok
// SIG undefined FUN_147207fd6(void)

void FUN_147207fd6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208008 FUN_147208008 body=96 status=ok
// SIG undefined FUN_147208008(void)

undefined8 FUN_147208008(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2f43a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fee60,1);
  return uVar3;
}



// FUNCTION 147208068 FUN_147208068 body=52 status=ok
// SIG undefined FUN_147208068(void)

void FUN_147208068(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720809c FUN_14720809c body=108 status=ok
// SIG undefined FUN_14720809c(void)

undefined4 * FUN_14720809c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f2f1cc();
  FUN_145f2f1cc();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fb770,0);
  FUN_145f2f1cc();
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



// FUNCTION 147208109 FUN_147208109 body=201 status=ok
// SIG undefined FUN_147208109(void)

void FUN_147208109(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145f2f43a();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9fee60,param_5);
  local_88 = &DAT_14c9fee60;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14721c5e4(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472081d3 FUN_1472081d3 body=256 status=ok
// SIG undefined FUN_1472081d3(void)

void FUN_1472081d3(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 != (uint *)0x0) {
    iVar1 = *(int *)(DAT_14c9fb900 + 4);
    uVar3 = *(int *)(param_1 + 0x884) - 1;
    if ((int)*param_2 < (int)uVar3) {
      uVar3 = *param_2;
    }
    iVar8 = 0;
    iVar7 = iVar1;
    if (iVar1 < 1) {
      iVar7 = 0;
    }
    if (0 < iVar1 && 0 < (int)uVar3) {
      uVar9 = 1;
      do {
        uVar2 = param_2[uVar9];
        if ((int)uVar2 < *(int *)(param_1 + 400)) {
          lVar4 = *(longlong *)(param_1 + 0x1b8);
          if (*(longlong *)(param_1 + 0x1b8) == 0) {
            lVar4 = param_1 + 0x1a8;
          }
          uVar5 = uVar2 + 0x1f;
          if (-1 < (int)uVar2) {
            uVar5 = uVar2;
          }
          if ((*(uint *)(lVar4 + (longlong)((int)uVar5 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
            lVar4 = *(longlong *)
                     (*(longlong *)(param_1 + 0x198) + (longlong)((int)uVar2 / 0x9249) * 8);
            lVar6 = (longlong)((int)uVar2 % 0x9249) * 0x38;
            if (((*(byte *)(lVar4 + 0x34 + lVar6) & 1) != 0) &&
               (-1 < *(int *)(lVar4 + 0x1c + lVar6))) {
              FUN_1447f515a(param_1,uVar2,
                            CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x198) >> 8),1));
              iVar8 = iVar8 + 1;
            }
          }
        }
      } while ((uVar9 < uVar3) && (uVar9 = uVar9 + 1, iVar8 < iVar7));
    }
  }
  return;
}



// FUNCTION 1472082d4 FUN_1472082d4 body=42 status=ok
// SIG undefined FUN_1472082d4(void)

void FUN_1472082d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208306 FUN_147208306 body=96 status=ok
// SIG undefined FUN_147208306(void)

undefined8 FUN_147208306(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159f794();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9feee8,1);
  return uVar3;
}



// FUNCTION 147208366 FUN_147208366 body=52 status=ok
// SIG undefined FUN_147208366(void)

void FUN_147208366(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720839a FUN_14720839a body=42 status=ok
// SIG undefined FUN_14720839a(void)

void FUN_14720839a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472083cc FUN_1472083cc body=96 status=ok
// SIG undefined FUN_1472083cc(void)

undefined8 FUN_1472083cc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a4e00();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9fef70,1);
  return uVar3;
}



// FUNCTION 14720842c FUN_14720842c body=52 status=ok
// SIG undefined FUN_14720842c(void)

void FUN_14720842c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208460 FUN_147208460 body=42 status=ok
// SIG undefined FUN_147208460(void)

void FUN_147208460(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208492 FUN_147208492 body=96 status=ok
// SIG undefined FUN_147208492(void)

undefined8 FUN_147208492(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157b592();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9feff8,1);
  return uVar3;
}



// FUNCTION 1472084f2 FUN_1472084f2 body=52 status=ok
// SIG undefined FUN_1472084f2(void)

void FUN_1472084f2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208526 FUN_147208526 body=42 status=ok
// SIG undefined FUN_147208526(void)

void FUN_147208526(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208558 FUN_147208558 body=96 status=ok
// SIG undefined FUN_147208558(void)

undefined8 FUN_147208558(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f6adca();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff080,1);
  return uVar3;
}



// FUNCTION 1472085b8 FUN_1472085b8 body=52 status=ok
// SIG undefined FUN_1472085b8(void)

void FUN_1472085b8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472085ec FUN_1472085ec body=42 status=ok
// SIG undefined FUN_1472085ec(void)

void FUN_1472085ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720861e FUN_14720861e body=96 status=ok
// SIG undefined FUN_14720861e(void)

undefined8 FUN_14720861e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a9dc6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff108,1);
  return uVar3;
}



// FUNCTION 14720867e FUN_14720867e body=52 status=ok
// SIG undefined FUN_14720867e(void)

void FUN_14720867e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472086b2 FUN_1472086b2 body=42 status=ok
// SIG undefined FUN_1472086b2(void)

void FUN_1472086b2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472086e4 FUN_1472086e4 body=96 status=ok
// SIG undefined FUN_1472086e4(void)

undefined8 FUN_1472086e4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4e478();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff190,1);
  return uVar3;
}



// FUNCTION 147208744 FUN_147208744 body=52 status=ok
// SIG undefined FUN_147208744(void)

void FUN_147208744(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208778 FUN_147208778 body=42 status=ok
// SIG undefined FUN_147208778(void)

void FUN_147208778(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472087a6 FUN_1472087a6 body=96 status=ok
// SIG undefined FUN_1472087a6(void)

undefined8 FUN_1472087a6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141577b68();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff218,1);
  return uVar3;
}



// FUNCTION 147208806 FUN_147208806 body=52 status=ok
// SIG undefined FUN_147208806(void)

void FUN_147208806(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720883a FUN_14720883a body=42 status=ok
// SIG undefined FUN_14720883a(void)

void FUN_14720883a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720886c FUN_14720886c body=96 status=ok
// SIG undefined FUN_14720886c(void)

undefined8 FUN_14720886c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141591a5e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff2a0,1);
  return uVar3;
}



// FUNCTION 1472088cc FUN_1472088cc body=52 status=ok
// SIG undefined FUN_1472088cc(void)

void FUN_1472088cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208900 FUN_147208900 body=42 status=ok
// SIG undefined FUN_147208900(void)

void FUN_147208900(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208932 FUN_147208932 body=96 status=ok
// SIG undefined FUN_147208932(void)

undefined8 FUN_147208932(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415726c2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff328,1);
  return uVar3;
}



// FUNCTION 147208992 FUN_147208992 body=52 status=ok
// SIG undefined FUN_147208992(void)

void FUN_147208992(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472089c6 FUN_1472089c6 body=42 status=ok
// SIG undefined FUN_1472089c6(void)

void FUN_1472089c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472089f8 FUN_1472089f8 body=96 status=ok
// SIG undefined FUN_1472089f8(void)

undefined8 FUN_1472089f8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7384e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff3b0,1);
  return uVar3;
}



// FUNCTION 147208a58 FUN_147208a58 body=52 status=ok
// SIG undefined FUN_147208a58(void)

void FUN_147208a58(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208a8c FUN_147208a8c body=103 status=ok
// SIG undefined FUN_147208a8c(void)

undefined4 * FUN_147208a8c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f6ab5c();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fc028,0);
  FUN_145f6ab5c();
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



// FUNCTION 147208af4 FUN_147208af4 body=325 status=ok
// SIG undefined FUN_147208af4(void)

void FUN_147208af4(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  undefined2 local_ca;
  undefined8 *local_c8;
  ulonglong *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_98;
  longlong *local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_50 = param_6;
  local_ca = param_3;
  FUN_145f6adca();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_4,&DAT_14c9ff080,param_5,&local_c8);
  local_c8 = param_5;
  local_c0 = (ulonglong *)*param_4;
  uStack_b8 = param_4[1];
  local_b0 = param_6;
  local_a8 = 0x30;
  local_98 = *param_7;
  local_88 = (longlong *)param_7[2];
  param_7[2] = 0;
  local_78 = (undefined4)param_7[4];
  uStack_74 = *(undefined4 *)((longlong)param_7 + 0x24);
  uStack_70 = (undefined4)param_7[5];
  uStack_6c = *(undefined4 *)((longlong)param_7 + 0x2c);
  local_68 = (undefined4)param_7[6];
  uStack_64 = *(undefined4 *)((longlong)param_7 + 0x34);
  uStack_60 = (undefined4)param_7[7];
  uStack_5c = *(undefined4 *)((longlong)param_7 + 0x3c);
  if (local_98 != 0) {
    *param_7 = 0;
  }
  FUN_145f6adca();
  local_d8 = &local_c8;
  FUN_14721d62a(param_1,param_2,param_5,local_ca);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147208c3a FUN_147208c3a body=108 status=ok
// SIG undefined FUN_147208c3a(void)

undefined4 * FUN_147208c3a(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f735e0();
  FUN_145f735e0();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fc718,0);
  FUN_145f735e0();
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



// FUNCTION 147208ca7 FUN_147208ca7 body=201 status=ok
// SIG undefined FUN_147208ca7(void)

void FUN_147208ca7(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_145f7384e();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14c9ff3b0,param_5);
  local_88 = &DAT_14c9ff3b0;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14721e396(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147208d72 FUN_147208d72 body=42 status=ok
// SIG undefined FUN_147208d72(void)

void FUN_147208d72(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208da4 FUN_147208da4 body=96 status=ok
// SIG undefined FUN_147208da4(void)

undefined8 FUN_147208da4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158f774();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff438,1);
  return uVar3;
}



// FUNCTION 147208e04 FUN_147208e04 body=52 status=ok
// SIG undefined FUN_147208e04(void)

void FUN_147208e04(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208e38 FUN_147208e38 body=42 status=ok
// SIG undefined FUN_147208e38(void)

void FUN_147208e38(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208e6a FUN_147208e6a body=96 status=ok
// SIG undefined FUN_147208e6a(void)

undefined8 FUN_147208e6a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157d334();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff4c0,1);
  return uVar3;
}



// FUNCTION 147208eca FUN_147208eca body=52 status=ok
// SIG undefined FUN_147208eca(void)

void FUN_147208eca(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208efe FUN_147208efe body=42 status=ok
// SIG undefined FUN_147208efe(void)

void FUN_147208efe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208f30 FUN_147208f30 body=96 status=ok
// SIG undefined FUN_147208f30(void)

undefined8 FUN_147208f30(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141585146();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff548,1);
  return uVar3;
}



// FUNCTION 147208f90 FUN_147208f90 body=52 status=ok
// SIG undefined FUN_147208f90(void)

void FUN_147208f90(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147208fc4 FUN_147208fc4 body=42 status=ok
// SIG undefined FUN_147208fc4(void)

void FUN_147208fc4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147208ff6 FUN_147208ff6 body=96 status=ok
// SIG undefined FUN_147208ff6(void)

undefined8 FUN_147208ff6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a1830();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff5d0,1);
  return uVar3;
}



// FUNCTION 147209056 FUN_147209056 body=52 status=ok
// SIG undefined FUN_147209056(void)

void FUN_147209056(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720908a FUN_14720908a body=42 status=ok
// SIG undefined FUN_14720908a(void)

void FUN_14720908a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472090bc FUN_1472090bc body=96 status=ok
// SIG undefined FUN_1472090bc(void)

undefined8 FUN_1472090bc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e49908();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff658,1);
  return uVar3;
}



// FUNCTION 14720911c FUN_14720911c body=52 status=ok
// SIG undefined FUN_14720911c(void)

void FUN_14720911c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147209150 FUN_147209150 body=42 status=ok
// SIG undefined FUN_147209150(void)

void FUN_147209150(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147209182 FUN_147209182 body=96 status=ok
// SIG undefined FUN_147209182(void)

undefined8 FUN_147209182(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f2fa2e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff6e0,1);
  return uVar3;
}



// FUNCTION 1472091e2 FUN_1472091e2 body=52 status=ok
// SIG undefined FUN_1472091e2(void)

void FUN_1472091e2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147209216 FUN_147209216 body=42 status=ok
// SIG undefined FUN_147209216(void)

void FUN_147209216(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147209248 FUN_147209248 body=96 status=ok
// SIG undefined FUN_147209248(void)

undefined8 FUN_147209248(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a0732();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff768,1);
  return uVar3;
}



// FUNCTION 1472092a8 FUN_1472092a8 body=52 status=ok
// SIG undefined FUN_1472092a8(void)

void FUN_1472092a8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472092dc FUN_1472092dc body=42 status=ok
// SIG undefined FUN_1472092dc(void)

void FUN_1472092dc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720930e FUN_14720930e body=96 status=ok
// SIG undefined FUN_14720930e(void)

undefined8 FUN_14720930e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141577d8e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff7f0,1);
  return uVar3;
}



// FUNCTION 14720936e FUN_14720936e body=52 status=ok
// SIG undefined FUN_14720936e(void)

void FUN_14720936e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472093a2 FUN_1472093a2 body=42 status=ok
// SIG undefined FUN_1472093a2(void)

void FUN_1472093a2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472093d0 FUN_1472093d0 body=96 status=ok
// SIG undefined FUN_1472093d0(void)

undefined8 FUN_1472093d0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1401b5b24();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff878,1);
  return uVar3;
}



// FUNCTION 147209430 FUN_147209430 body=52 status=ok
// SIG undefined FUN_147209430(void)

void FUN_147209430(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147209464 FUN_147209464 body=42 status=ok
// SIG undefined FUN_147209464(void)

void FUN_147209464(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147209496 FUN_147209496 body=96 status=ok
// SIG undefined FUN_147209496(void)

undefined8 FUN_147209496(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141597148();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ff988,1);
  return uVar3;
}



// FUNCTION 1472094f6 FUN_1472094f6 body=52 status=ok
// SIG undefined FUN_1472094f6(void)

void FUN_1472094f6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14720952a FUN_14720952a body=42 status=ok
// SIG undefined FUN_14720952a(void)

void FUN_14720952a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14720955c FUN_14720955c body=96 status=ok
// SIG undefined FUN_14720955c(void)

undefined8 FUN_14720955c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e86ed0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14c9ffa10,1);
  return uVar3;
}


