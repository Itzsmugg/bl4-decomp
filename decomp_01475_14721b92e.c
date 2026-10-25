// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14721b92e FUN_14721b92e body=384 status=ok
// SIG undefined FUN_14721b92e(void)

void FUN_14721b92e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9fe8d0;
  if (DAT_14c9fe8d0 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe8d0 + 8) = *(int *)(DAT_14c9fe8d0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9fe888;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a277f20;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721bab0 FUN_14721bab0 body=38 status=ok
// SIG undefined FUN_14721bab0(void)

undefined8 FUN_14721bab0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721bad6 FUN_14721bad6 body=163 status=ok
// SIG undefined FUN_14721bad6(void)

void FUN_14721bad6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142d9fe16();
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
  FUN_142d9fefe(param_1,param_2);
  return;
}



// FUNCTION 14721bb79 FUN_14721bb79 body=374 status=ok
// SIG undefined FUN_14721bb79(void)

void FUN_14721bb79(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721bcf0 FUN_14721bcf0 body=29 status=ok
// SIG undefined FUN_14721bcf0(void)

undefined8 FUN_14721bcf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721bd0e FUN_14721bd0e body=384 status=ok
// SIG undefined FUN_14721bd0e(void)

void FUN_14721bd0e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9fe9e0;
  if (DAT_14c9fe9e0 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe9e0 + 8) = *(int *)(DAT_14c9fe9e0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9fe998;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a277f40;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721be90 FUN_14721be90 body=38 status=ok
// SIG undefined FUN_14721be90(void)

undefined8 FUN_14721be90(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721beb6 FUN_14721beb6 body=163 status=ok
// SIG undefined FUN_14721beb6(void)

void FUN_14721beb6(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142da0132();
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
  FUN_142da021a(param_1,param_2);
  return;
}



// FUNCTION 14721bf59 FUN_14721bf59 body=374 status=ok
// SIG undefined FUN_14721bf59(void)

void FUN_14721bf59(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721c0d0 FUN_14721c0d0 body=29 status=ok
// SIG undefined FUN_14721c0d0(void)

undefined8 FUN_14721c0d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c0ee FUN_14721c0ee body=384 status=ok
// SIG undefined FUN_14721c0ee(void)

void FUN_14721c0ee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9fe958;
  if (DAT_14c9fe958 != 0) {
    LOCK();
    *(int *)(DAT_14c9fe958 + 8) = *(int *)(DAT_14c9fe958 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9fe910;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a277f60;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721c270 FUN_14721c270 body=38 status=ok
// SIG undefined FUN_14721c270(void)

undefined8 FUN_14721c270(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c296 FUN_14721c296 body=163 status=ok
// SIG undefined FUN_14721c296(void)

void FUN_14721c296(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142da044e();
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
  FUN_142da0536(param_1,param_2);
  return;
}



// FUNCTION 14721c339 FUN_14721c339 body=374 status=ok
// SIG undefined FUN_14721c339(void)

void FUN_14721c339(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721c4b0 FUN_14721c4b0 body=88 status=ok
// SIG undefined FUN_14721c4b0(void)

undefined8 * FUN_14721c4b0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a277fa0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c508 FUN_14721c508 body=38 status=ok
// SIG undefined FUN_14721c508(void)

undefined8 FUN_14721c508(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c52e FUN_14721c52e body=38 status=ok
// SIG undefined FUN_14721c52e(void)

undefined8 FUN_14721c52e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c554 FUN_14721c554 body=38 status=ok
// SIG undefined FUN_14721c554(void)

undefined8 FUN_14721c554(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c57a FUN_14721c57a body=38 status=ok
// SIG undefined FUN_14721c57a(void)

undefined8 FUN_14721c57a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c5a0 FUN_14721c5a0 body=38 status=ok
// SIG undefined FUN_14721c5a0(void)

undefined8 FUN_14721c5a0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c5c6 FUN_14721c5c6 body=29 status=ok
// SIG undefined FUN_14721c5c6(void)

undefined8 FUN_14721c5c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c5e4 FUN_14721c5e4 body=564 status=ok
// SIG undefined FUN_14721c5e4(void)

void FUN_14721c5e4(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    local_50 = DAT_14c9feea8;
    if (DAT_14c9feea8 != 0) {
      LOCK();
      *(int *)(DAT_14c9feea8 + 8) = *(int *)(DAT_14c9feea8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9fee60;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a278120;
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
    local_50 = DAT_14c9feea8;
    if (DAT_14c9feea8 != 0) {
      LOCK();
      *(int *)(DAT_14c9feea8 + 8) = *(int *)(DAT_14c9feea8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9fee60;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a278120;
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
    *puVar16 = &PTR_FUN_14a278100;
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



// FUNCTION 14721c81a FUN_14721c81a body=38 status=ok
// SIG undefined FUN_14721c81a(void)

undefined8 FUN_14721c81a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c840 FUN_14721c840 body=219 status=ok
// SIG undefined FUN_14721c840(void)

void FUN_14721c840(longlong param_1,ulonglong *param_2)

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
  FUN_142da0648(param_1,param_2);
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



// FUNCTION 14721c91c FUN_14721c91c body=38 status=ok
// SIG undefined FUN_14721c91c(void)

undefined8 FUN_14721c91c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721c942 FUN_14721c942 body=163 status=ok
// SIG undefined FUN_14721c942(void)

void FUN_14721c942(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142da082a();
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
  FUN_142da0912(param_1,param_2);
  return;
}



// FUNCTION 14721c9e5 FUN_14721c9e5 body=374 status=ok
// SIG undefined FUN_14721c9e5(void)

void FUN_14721c9e5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721cb5c FUN_14721cb5c body=49 status=ok
// SIG undefined FUN_14721cb5c(void)

void FUN_14721cb5c(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_140064110(param_1,0,param_2,4);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14721cb8e FUN_14721cb8e body=37 status=ok
// SIG undefined FUN_14721cb8e(void)

void FUN_14721cb8e(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_14005934c(param_1);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 14721cbb4 FUN_14721cbb4 body=85 status=ok
// SIG undefined FUN_14721cbb4(void)

void FUN_14721cbb4(longlong param_1,int param_2)

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
  FUN_14053bcb0();
  return;
}



// FUNCTION 14721cc0a FUN_14721cc0a body=85 status=ok
// SIG undefined FUN_14721cc0a(void)

void FUN_14721cc0a(longlong param_1,int param_2)

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
  FUN_1403c10c2();
  return;
}



// FUNCTION 14721cc60 FUN_14721cc60 body=85 status=ok
// SIG undefined FUN_14721cc60(void)

void FUN_14721cc60(longlong param_1,int param_2)

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
  FUN_1403d533a();
  return;
}



// FUNCTION 14721ccb6 FUN_14721ccb6 body=85 status=ok
// SIG undefined FUN_14721ccb6(void)

void FUN_14721ccb6(longlong param_1,int param_2)

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
  FUN_1403c0bfa();
  return;
}



// FUNCTION 14721cd0c FUN_14721cd0c body=85 status=ok
// SIG undefined FUN_14721cd0c(void)

void FUN_14721cd0c(longlong param_1,int param_2)

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
  FUN_1402d5bb4();
  return;
}



// FUNCTION 14721cd62 FUN_14721cd62 body=85 status=ok
// SIG undefined FUN_14721cd62(void)

void FUN_14721cd62(longlong param_1,int param_2)

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
  FUN_140426b2e();
  return;
}



// FUNCTION 14721cdb8 FUN_14721cdb8 body=321 status=ok
// SIG undefined FUN_14721cdb8(void)

undefined4 * FUN_14721cdb8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14721cefa(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = FUN_144a78877(uVar4,uVar4 >> 0x20);
  local_58 = 0;
  cVar2 = FUN_14721cfe0(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
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
      FUN_14721d0fe(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721cefa FUN_14721cefa body=230 status=ok
// SIG undefined FUN_14721cefa(void)

int * FUN_14721cefa(longlong *param_1,int *param_2)

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



// FUNCTION 14721cfe0 FUN_14721cfe0 body=148 status=ok
// SIG undefined FUN_14721cfe0(void)

void FUN_14721cfe0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_14721d074((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_14721d04a;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_14721d04a:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14721d074 FUN_14721d074 body=138 status=ok
// SIG undefined FUN_14721d074(void)

void FUN_14721d074(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14721d0fe FUN_14721d0fe body=448 status=ok
// SIG undefined FUN_14721d0fe(void)

void FUN_14721d0fe(longlong *param_1)

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
        uVar7 = *(ulonglong *)(lVar3 + lVar10 * 0x18);
        iVar6 = FUN_144a78877(uVar7,uVar7 >> 0x20);
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



// FUNCTION 14721d2c0 FUN_14721d2c0 body=38 status=ok
// SIG undefined FUN_14721d2c0(void)

undefined8 FUN_14721d2c0(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d2e6 FUN_14721d2e6 body=38 status=ok
// SIG undefined FUN_14721d2e6(void)

undefined8 FUN_14721d2e6(undefined8 param_1,int param_2)

{
  FUN_1462e1868();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d340 FUN_14721d340 body=138 status=ok
// SIG undefined FUN_14721d340(void)

code * FUN_14721d340(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InvTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c377a4;
}



// FUNCTION 14721d3ca FUN_14721d3ca body=132 status=ok
// SIG undefined FUN_14721d3ca(void)

undefined1 * FUN_14721d3ca(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RectCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14721d44e;
}



// FUNCTION 14721d452 FUN_14721d452 body=49 status=ok
// SIG undefined FUN_14721d452(void)

void FUN_14721d452(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_14008d210(param_1,0,param_2,4);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14721d484 FUN_14721d484 body=37 status=ok
// SIG undefined FUN_14721d484(void)

void FUN_14721d484(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x160)) {
    *(undefined4 *)(param_1 + 0x164) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14721d4aa FUN_14721d4aa body=20 status=ok
// SIG undefined FUN_14721d4aa(void)

void FUN_14721d4aa(longlong param_1)

{
  if (*(int *)(param_1 + 0x164) != 2) {
    *(undefined4 *)(param_1 + 0x164) = 2;
  }
  return;
}



// FUNCTION 14721d4be FUN_14721d4be body=88 status=ok
// SIG undefined FUN_14721d4be(void)

undefined8 * FUN_14721d4be(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278390;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d516 FUN_14721d516 body=88 status=ok
// SIG undefined FUN_14721d516(void)

undefined8 * FUN_14721d516(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2783d0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d56e FUN_14721d56e body=157 status=ok
// SIG undefined FUN_14721d56e(void)

undefined8 * FUN_14721d56e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
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
  memset(param_1 + 0x20,0,0x98);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 1;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 4;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f80000000000000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3f80000000000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  return param_1;
}



// FUNCTION 14721d60c FUN_14721d60c body=29 status=ok
// SIG undefined FUN_14721d60c(void)

undefined8 FUN_14721d60c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d62a FUN_14721d62a body=347 status=ok
// SIG undefined FUN_14721d62a(void)

void FUN_14721d62a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  if ((param_4 & 4) == 0) {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x46;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x240);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x46;
    }
    *puVar1 = (ulonglong)puVar5;
    FUN_14721d786(puVar6,param_2,param_3,uVar4,param_5);
  }
  else {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x48;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x250);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x48;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    FUN_14721d786(puVar6,param_2,param_3,uVar4,param_5);
    *puVar6 = &PTR_FUN_14a2783f0;
    *(undefined4 *)(puVar6 + 0x46) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  return;
}



// FUNCTION 14721d786 FUN_14721d786 body=229 status=ok
// SIG undefined FUN_14721d786(void)

undefined8 *
FUN_14721d786(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff0c8;
  if (DAT_14c9ff0c8 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff0c8 + 8) = *(int *)(DAT_14c9ff0c8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff080;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278410;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721d86c FUN_14721d86c body=88 status=ok
// SIG undefined FUN_14721d86c(void)

undefined8 * FUN_14721d86c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278410;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d8c4 FUN_14721d8c4 body=219 status=ok
// SIG undefined FUN_14721d8c4(void)

void FUN_14721d8c4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_142da8280(param_1,param_2);
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



// FUNCTION 14721d9a0 FUN_14721d9a0 body=88 status=ok
// SIG undefined FUN_14721d9a0(void)

undefined8 * FUN_14721d9a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278410;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721d9f8 FUN_14721d9f8 body=90 status=ok
// SIG undefined FUN_14721d9f8(void)

void FUN_14721d9f8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_14721da52(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 14721da52 FUN_14721da52 body=161 status=ok
// SIG undefined FUN_14721da52(void)

void FUN_14721da52(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f6adca();
  FUN_142da8494(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142da8443(param_1,param_2);
  return;
}



// FUNCTION 14721daf3 FUN_14721daf3 body=374 status=ok
// SIG undefined FUN_14721daf3(void)

void FUN_14721daf3(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721dc6a FUN_14721dc6a body=88 status=ok
// SIG undefined FUN_14721dc6a(void)

undefined8 * FUN_14721dc6a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278450;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721dcc2 FUN_14721dcc2 body=29 status=ok
// SIG undefined FUN_14721dcc2(void)

undefined8 FUN_14721dcc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721dcdf FUN_14721dcdf body=309 status=ok
// SIG undefined FUN_14721dcdf(void)

void FUN_14721dcdf(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,longlong *param_6)

{
  longlong *plVar1;
  undefined1 auStack_e8 [32];
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_5;
  FUN_145f4e478();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14c9ff190,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0x30;
  local_98 = *param_6;
  local_88 = (longlong *)param_6[2];
  param_6[2] = 0;
  local_78 = (undefined4)param_6[4];
  uStack_74 = *(undefined4 *)((longlong)param_6 + 0x24);
  uStack_70 = (undefined4)param_6[5];
  uStack_6c = *(undefined4 *)((longlong)param_6 + 0x2c);
  local_68 = (undefined4)param_6[6];
  uStack_64 = *(undefined4 *)((longlong)param_6 + 0x34);
  uStack_60 = (undefined4)param_6[7];
  uStack_5c = *(undefined4 *)((longlong)param_6 + 0x3c);
  if (local_98 != 0) {
    *param_6 = 0;
  }
  local_c8 = param_4;
  FUN_145f4e478();
  FUN_14721de16(param_1,param_2,param_4,&local_c8);
  if (local_98 != 0) {
    plVar1 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar1 = (longlong *)&local_78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721de16 FUN_14721de16 body=258 status=ok
// SIG undefined FUN_14721de16(void)

void FUN_14721de16(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined6 uVar4;
  
  FUN_140069376();
  uVar4 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar3 = (undefined4)CONCAT62(uVar4,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar3 = (undefined4)CONCAT62(uVar4,4);
  }
  uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar5 + 0x230;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x240);
    uVar5 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar5 + 0x230;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_14721df18(uVar5,param_2,param_3,uVar3,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar5;
  *(int *)(uVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar5);
  return;
}



// FUNCTION 14721df18 FUN_14721df18 body=229 status=ok
// SIG undefined FUN_14721df18(void)

undefined8 *
FUN_14721df18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff1d8;
  if (DAT_14c9ff1d8 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff1d8 + 8) = *(int *)(DAT_14c9ff1d8 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff190;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278470;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721dffe FUN_14721dffe body=88 status=ok
// SIG undefined FUN_14721dffe(void)

undefined8 * FUN_14721dffe(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278470;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e056 FUN_14721e056 body=90 status=ok
// SIG undefined FUN_14721e056(void)

void FUN_14721e056(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_14721e0b0(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 14721e0b0 FUN_14721e0b0 body=161 status=ok
// SIG undefined FUN_14721e0b0(void)

void FUN_14721e0b0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f4e478();
  FUN_142da87ae(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142da875d(param_1,param_2);
  return;
}



// FUNCTION 14721e151 FUN_14721e151 body=374 status=ok
// SIG undefined FUN_14721e151(void)

void FUN_14721e151(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721e2c8 FUN_14721e2c8 body=88 status=ok
// SIG undefined FUN_14721e2c8(void)

undefined8 * FUN_14721e2c8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2784b0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e320 FUN_14721e320 body=88 status=ok
// SIG undefined FUN_14721e320(void)

undefined8 * FUN_14721e320(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2784f0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e378 FUN_14721e378 body=29 status=ok
// SIG undefined FUN_14721e378(void)

undefined8 FUN_14721e378(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e396 FUN_14721e396 body=564 status=ok
// SIG undefined FUN_14721e396(void)

void FUN_14721e396(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    local_50 = DAT_14c9ff3f8;
    if (DAT_14c9ff3f8 != 0) {
      LOCK();
      *(int *)(DAT_14c9ff3f8 + 8) = *(int *)(DAT_14c9ff3f8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9ff3b0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a278530;
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
    local_50 = DAT_14c9ff3f8;
    if (DAT_14c9ff3f8 != 0) {
      LOCK();
      *(int *)(DAT_14c9ff3f8 + 8) = *(int *)(DAT_14c9ff3f8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14c9ff3b0;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a278530;
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
    *puVar16 = &PTR_FUN_14a278510;
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



// FUNCTION 14721e5cc FUN_14721e5cc body=38 status=ok
// SIG undefined FUN_14721e5cc(void)

undefined8 FUN_14721e5cc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e5f2 FUN_14721e5f2 body=219 status=ok
// SIG undefined FUN_14721e5f2(void)

void FUN_14721e5f2(longlong param_1,ulonglong *param_2)

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
  FUN_142da88d4(param_1,param_2);
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



// FUNCTION 14721e6ce FUN_14721e6ce body=38 status=ok
// SIG undefined FUN_14721e6ce(void)

undefined8 FUN_14721e6ce(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e6f4 FUN_14721e6f4 body=163 status=ok
// SIG undefined FUN_14721e6f4(void)

void FUN_14721e6f4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142da8ab6();
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
  FUN_142da8b9e(param_1,param_2);
  return;
}



// FUNCTION 14721e797 FUN_14721e797 body=374 status=ok
// SIG undefined FUN_14721e797(void)

void FUN_14721e797(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721e90e FUN_14721e90e body=29 status=ok
// SIG undefined FUN_14721e90e(void)

undefined8 FUN_14721e90e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721e92c FUN_14721e92c body=384 status=ok
// SIG undefined FUN_14721e92c(void)

void FUN_14721e92c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
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
  undefined8 *puVar13;
  undefined4 uVar14;
  undefined8 unaff_RBP;
  undefined8 *puVar16;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar15;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar15 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar14 = (undefined4)CONCAT62(uVar15,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar13;
  local_50 = DAT_14c9ffa58;
  if (DAT_14c9ffa58 != 0) {
    LOCK();
    *(int *)(DAT_14c9ffa58 + 8) = *(int *)(DAT_14c9ffa58 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14c9ffa10;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a278550;
  uVar14 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  uVar9 = param_4[8];
  uVar10 = param_4[9];
  uVar11 = param_4[10];
  uVar12 = param_4[0xb];
  *(undefined4 *)(puVar16 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar14;
  *(undefined4 *)(puVar16 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar16 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar16 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar16 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar16 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar16 + 0x1d4) = uVar8;
  *(undefined4 *)(puVar16 + 0x3b) = uVar9;
  *(undefined4 *)((longlong)puVar16 + 0x1dc) = uVar10;
  *(undefined4 *)(puVar16 + 0x3c) = uVar11;
  *(undefined4 *)((longlong)puVar16 + 0x1e4) = uVar12;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar16;
  *(int *)((longlong)puVar16 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar16);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721eaae FUN_14721eaae body=38 status=ok
// SIG undefined FUN_14721eaae(void)

undefined8 FUN_14721eaae(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721ead4 FUN_14721ead4 body=163 status=ok
// SIG undefined FUN_14721ead4(void)

void FUN_14721ead4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142da8dd2();
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
  FUN_142da8eba(param_1,param_2);
  return;
}



// FUNCTION 14721eb77 FUN_14721eb77 body=374 status=ok
// SIG undefined FUN_14721eb77(void)

void FUN_14721eb77(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721ecee FUN_14721ecee body=38 status=ok
// SIG undefined FUN_14721ecee(void)

undefined8 FUN_14721ecee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721ed14 FUN_14721ed14 body=38 status=ok
// SIG undefined FUN_14721ed14(void)

undefined8 FUN_14721ed14(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721ed3a FUN_14721ed3a body=38 status=ok
// SIG undefined FUN_14721ed3a(void)

undefined8 FUN_14721ed3a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721ed60 FUN_14721ed60 body=88 status=ok
// SIG undefined FUN_14721ed60(void)

undefined8 * FUN_14721ed60(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278730;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721edb8 FUN_14721edb8 body=108 status=ok
// SIG undefined FUN_14721edb8(void)

undefined4 * FUN_14721edb8(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e4969a();
  FUN_145e4969a();
  FUN_1448e935e(param_1,&local_30,&DAT_14c9fd088,0);
  FUN_145e4969a();
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



// FUNCTION 14721ee25 FUN_14721ee25 body=325 status=ok
// SIG undefined FUN_14721ee25(void)

void FUN_14721ee25(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 *param_4,
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
  FUN_145e49908();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_4,&DAT_14c9ff658,param_5,&local_c8);
  local_c8 = param_5;
  local_c0 = (ulonglong *)*param_4;
  uStack_b8 = param_4[1];
  local_b0 = param_6;
  local_a8 = 0;
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
  FUN_145e49908();
  local_d8 = &local_c8;
  FUN_14721ef8a(param_1,param_2,param_5,local_ca);
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



// FUNCTION 14721ef6c FUN_14721ef6c body=29 status=ok
// SIG undefined FUN_14721ef6c(void)

undefined8 FUN_14721ef6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721ef8a FUN_14721ef8a body=347 status=ok
// SIG undefined FUN_14721ef8a(void)

void FUN_14721ef8a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  if ((param_4 & 4) == 0) {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x46;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x240);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x46;
    }
    *puVar1 = (ulonglong)puVar5;
    FUN_14721f0e6(puVar6,param_2,param_3,uVar4,param_5);
  }
  else {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x48;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x250);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x48;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    FUN_14721f0e6(puVar6,param_2,param_3,uVar4,param_5);
    *puVar6 = &PTR_FUN_14a2787c0;
    *(undefined4 *)(puVar6 + 0x46) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  return;
}



// FUNCTION 14721f0e6 FUN_14721f0e6 body=229 status=ok
// SIG undefined FUN_14721f0e6(void)

undefined8 *
FUN_14721f0e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff6a0;
  if (DAT_14c9ff6a0 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff6a0 + 8) = *(int *)(DAT_14c9ff6a0 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff658;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2787e0;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721f1cc FUN_14721f1cc body=88 status=ok
// SIG undefined FUN_14721f1cc(void)

undefined8 * FUN_14721f1cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2787e0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721f224 FUN_14721f224 body=219 status=ok
// SIG undefined FUN_14721f224(void)

void FUN_14721f224(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_142da9bfc(param_1,param_2);
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



// FUNCTION 14721f300 FUN_14721f300 body=88 status=ok
// SIG undefined FUN_14721f300(void)

undefined8 * FUN_14721f300(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2787e0;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721f358 FUN_14721f358 body=90 status=ok
// SIG undefined FUN_14721f358(void)

void FUN_14721f358(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_14721f3b2(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 14721f3b2 FUN_14721f3b2 body=161 status=ok
// SIG undefined FUN_14721f3b2(void)

void FUN_14721f3b2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145e49908();
  FUN_142da9e10(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142da9dbf(param_1,param_2);
  return;
}



// FUNCTION 14721f453 FUN_14721f453 body=374 status=ok
// SIG undefined FUN_14721f453(void)

void FUN_14721f453(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721f5ca FUN_14721f5ca body=29 status=ok
// SIG undefined FUN_14721f5ca(void)

undefined8 FUN_14721f5ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721f5e8 FUN_14721f5e8 body=347 status=ok
// SIG undefined FUN_14721f5e8(void)

void FUN_14721f5e8(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  if ((param_4 & 4) == 0) {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x46;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x240);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x46;
    }
    *puVar1 = (ulonglong)puVar5;
    FUN_14721f744(puVar6,param_2,param_3,uVar4,param_5);
  }
  else {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_4);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar5 = puVar6 + 0x48;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x250);
      puVar6 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar5 = puVar6 + 0x48;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    uVar2 = *(undefined4 *)(param_1 + 0x660);
    FUN_14721f744(puVar6,param_2,param_3,uVar4,param_5);
    *puVar6 = &PTR_FUN_14a278870;
    *(undefined4 *)(puVar6 + 0x46) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  return;
}



// FUNCTION 14721f744 FUN_14721f744 body=229 status=ok
// SIG undefined FUN_14721f744(void)

undefined8 *
FUN_14721f744(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = DAT_14c9ff728;
  if (DAT_14c9ff728 != 0) {
    LOCK();
    *(int *)(DAT_14c9ff728 + 8) = *(int *)(DAT_14c9ff728 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14c9ff6e0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a278890;
  uVar8 = param_5[1];
  uVar9 = param_5[2];
  uVar10 = param_5[3];
  param_1[0x38] = *param_5;
  param_1[0x39] = uVar8;
  param_1[0x3a] = uVar9;
  param_1[0x3b] = uVar10;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_5 + 4);
  param_1[0x3e] = param_5[6];
  param_1[0x40] = param_5[8];
  param_5[8] = 0;
  uVar1 = *(undefined4 *)(param_5 + 10);
  uVar2 = *(undefined4 *)((longlong)param_5 + 0x54);
  uVar3 = *(undefined4 *)(param_5 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_5 + 0x5c);
  uVar5 = *(undefined4 *)((longlong)param_5 + 100);
  uVar6 = *(undefined4 *)(param_5 + 0xd);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0x6c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar5;
  *(undefined4 *)(param_1 + 0x45) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar7;
  *(undefined4 *)(param_1 + 0x42) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x214) = uVar2;
  *(undefined4 *)(param_1 + 0x43) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar4;
  if (param_1[0x3e] != 0) {
    param_5[6] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14721f82a FUN_14721f82a body=88 status=ok
// SIG undefined FUN_14721f82a(void)

undefined8 * FUN_14721f82a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278890;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721f882 FUN_14721f882 body=219 status=ok
// SIG undefined FUN_14721f882(void)

void FUN_14721f882(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_142daa0ce(param_1,param_2);
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



// FUNCTION 14721f95e FUN_14721f95e body=88 status=ok
// SIG undefined FUN_14721f95e(void)

undefined8 * FUN_14721f95e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a278890;
  if (param_1[0x3e] != 0) {
    plVar1 = param_1 + 0x42;
    if ((longlong *)param_1[0x40] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x40];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14721f9b6 FUN_14721f9b6 body=90 status=ok
// SIG undefined FUN_14721f9b6(void)

void FUN_14721f9b6(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = (code *)param_1[6];
  if (pcVar1 != (code *)0x0) {
    plVar3 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = (**(code **)(*plVar3 + 8))();
    (*pcVar1)(uVar2);
  }
  FUN_14721fa10(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 14721fa10 FUN_14721fa10 body=161 status=ok
// SIG undefined FUN_14721fa10(void)

void FUN_14721fa10(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f2fa2e();
  FUN_142daa2e2(param_1,param_2,param_3);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a1e7fd0;
  puVar1[2] = param_4;
  *(undefined4 *)(puVar1 + 3) = param_5;
  FUN_142daa291(param_1,param_2);
  return;
}



// FUNCTION 14721fab1 FUN_14721fab1 body=374 status=ok
// SIG undefined FUN_14721fab1(void)

void FUN_14721fab1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14721fc27 FUN_14721fc27 body=40 status=ok
// SIG undefined FUN_14721fc27(void)

bool FUN_14721fc27(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
    iVar1 = FUN_142d11e9a();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}



// FUNCTION 14721fc50 FUN_14721fc50 body=42 status=ok
// SIG undefined FUN_14721fc50(void)

void FUN_14721fc50(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14721fc86 FUN_14721fc86 body=96 status=ok
// SIG undefined FUN_14721fc86(void)

undefined8 FUN_14721fc86(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145d87590();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05818,1);
  return uVar3;
}



// FUNCTION 14721fce6 FUN_14721fce6 body=52 status=ok
// SIG undefined FUN_14721fce6(void)

void FUN_14721fce6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14721fd1a FUN_14721fd1a body=42 status=ok
// SIG undefined FUN_14721fd1a(void)

void FUN_14721fd1a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14721fdb0 FUN_14721fdb0 body=67 status=ok
// SIG undefined FUN_14721fdb0(void)

undefined8 FUN_14721fdb0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14721fdf4 FUN_14721fdf4 body=52 status=ok
// SIG undefined FUN_14721fdf4(void)

void FUN_14721fdf4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14721fe28 FUN_14721fe28 body=42 status=ok
// SIG undefined FUN_14721fe28(void)

void FUN_14721fe28(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14721fe5a FUN_14721fe5a body=96 status=ok
// SIG undefined FUN_14721fe5a(void)

undefined8 FUN_14721fe5a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e57f46();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05928,1);
  return uVar3;
}



// FUNCTION 14721feba FUN_14721feba body=52 status=ok
// SIG undefined FUN_14721feba(void)

void FUN_14721feba(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14721feee FUN_14721feee body=437 status=ok
// SIG undefined FUN_14721feee(void)

void FUN_14721feee(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38;
  char local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144b13553(*(undefined8 *)(param_2 + 8));
  if (cVar1 != '\0') {
    if ((longlong)*(int *)(param_1 + 0x410) < 1) {
      lVar4 = -1;
    }
    else {
      lVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x408) + lVar4 * 8) == param_2)
        goto LAB_14721ff45;
        lVar4 = lVar4 + 1;
      } while (*(int *)(param_1 + 0x410) != lVar4);
      lVar4 = -1;
LAB_14721ff45:
      lVar4 = (longlong)(int)lVar4;
    }
    if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
      lVar5 = param_1 + 0xe38;
      if (*(longlong *)(param_1 + 0xe58) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xe58);
      }
      iVar2 = FUN_142d11e9a(param_2,*(undefined4 *)(lVar5 + lVar4 * 0x20));
      if (iVar2 == 1) {
        local_38 = 0;
        local_30 = 2;
        cVar1 = FUN_1471dcc8e();
        local_2c = DAT_14c76072c != 0 && DAT_14ca007b0 == 0;
        if ((((DAT_14ca007b0 != 0) || (uVar3 = FUN_142d8c86e(), DAT_14c760760 == 0)) ||
            (0x10 < uVar3)) || (local_2b = 1, (0x10110U >> (uVar3 & 0x1f) & 1) == 0)) {
          local_2b = 0;
        }
        local_34 = '\x01';
        if (cVar1 != '\x02') {
          local_34 = cVar1;
        }
        local_2a = 0;
        FUN_1472200a4(*(undefined8 *)(param_2 + 0x13818),&local_48);
        if (local_48 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_40 + 8) + 0x50) +
                   (longlong)*(int *)(local_48 + 0xd4) * 8);
          if (lVar4 == 0) {
            lVar4 = FUN_1400bafc2(*(longlong *)(local_40 + 8),(longlong)*(int *)(local_48 + 0xd4),1)
            ;
          }
        }
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1471499ca(param_3,iVar2);
        }
        *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar4;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472200a4 FUN_1472200a4 body=154 status=ok
// SIG undefined FUN_1472200a4(void)

undefined4 * FUN_1472200a4(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[0xc];
  bVar3 = param_3[0xd];
  bVar4 = param_3[0xe];
  iVar6 = *(int *)(param_3 + 8);
  bVar5 = param_3[4];
  FUN_1460948b0();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca00ab0,
                (uint)bVar1 +
                ((((uint)bVar2 + (uint)bVar3 * 2 + (uint)bVar4 * 4) * 3 + iVar6) * 3 + (uint)bVar5)
                * 2);
  FUN_1460948b0();
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



// FUNCTION 147220140 FUN_147220140 body=607 status=ok
// SIG undefined FUN_147220140(void)

void FUN_147220140(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined1 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_144b13553(*(undefined8 *)(param_1 + 8));
  if ((cVar2 != '\0') && (cVar2 = FUN_141767b49(*(undefined8 *)(param_1 + 8)), cVar2 == '\0')) {
    bVar5 = DAT_14ca007b0 == 0;
    bVar6 = DAT_14c76072c != 0;
    bVar7 = false;
    if ((*(int *)(DAT_14c9f5c70 + 4) != 0) &&
       (bVar7 = false, (*(uint *)(*(longlong *)(param_1 + 8) + 0x60) & 0x80000) != 0)) {
      bVar7 = *(int *)(DAT_14ca00918 + 4) != 0;
    }
    local_40 = 0;
    local_38 = 0;
    local_3c = FUN_1471dcc8e();
    if ((((DAT_14ca007b0 != 0) || (uVar3 = FUN_142d8c86e(), DAT_14c760760 == 0)) || (0x10 < uVar3))
       || (local_33 = 1, (0x10110U >> (uVar3 & 0x1f) & 1) == 0)) {
      local_33 = 0;
    }
    local_32 = *(int *)(DAT_14c9ed3f8 + 4) != 0;
    local_34 = bVar5 && bVar6;
    FUN_1472200a4(*(undefined8 *)(param_1 + 0x13818),&local_50);
    if (local_50 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)(local_48 + 8) + 0x50) +
               (longlong)*(int *)(local_50 + 0xd4) * 8);
      if (lVar4 == 0) {
        lVar4 = FUN_1400bafc2(*(longlong *)(local_48 + 8),(longlong)*(int *)(local_50 + 0xd4),1);
      }
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1471499ca(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
    if (bVar7) {
      local_40 = 0;
      local_38 = 1;
      FUN_1471dcc8e();
      if (((DAT_14ca007b0 != 0) || (uVar3 = FUN_142d8c86e(), DAT_14c760760 == 0)) ||
         ((0x10 < uVar3 || (local_33 = 1, (0x10110U >> (uVar3 & 0x1f) & 1) == 0)))) {
        local_33 = 0;
      }
      lVar4 = 0;
      local_3c = 0;
      local_34 = 0;
      local_32 = 0;
      FUN_1472200a4(*(undefined8 *)(param_1 + 0x13818),&local_50);
      if (local_50 != 0) {
        lVar4 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_48 + 8) + 0x50) +
                 (longlong)*(int *)(local_50 + 0xd4) * 8);
        if (lVar4 == 0) {
          lVar4 = FUN_1400bafc2(*(longlong *)(local_48 + 8),(longlong)*(int *)(local_50 + 0xd4),1);
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472203a0 FUN_1472203a0 body=108 status=ok
// SIG undefined FUN_1472203a0(void)

undefined4 * FUN_1472203a0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e57cd8();
  FUN_145e57cd8();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca00bd8,0);
  FUN_145e57cd8();
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



// FUNCTION 14722040d FUN_14722040d body=201 status=ok
// SIG undefined FUN_14722040d(void)

void FUN_14722040d(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
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
  FUN_145e57f46();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca05928,param_5);
  local_88 = &DAT_14ca05928;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_147230ec0(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472204d8 FUN_1472204d8 body=291 status=ok
// SIG undefined FUN_1472204d8(void)

void FUN_1472204d8(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined2 param_7)

{
  ushort uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  ushort *local_a8;
  undefined1 local_98 [16];
  ushort local_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar2 = *(undefined8 *)(param_3 + 0x13818);
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  uStack_86 = (undefined6)*(undefined8 *)(param_4 + 2);
  uStack_80 = (undefined2)*(undefined8 *)(param_4 + 8);
  uStack_7e = (undefined6)((ulonglong)*(undefined8 *)(param_4 + 8) >> 0x10);
  cVar3 = FUN_144b12ca2();
  if (cVar3 == '\0') {
    local_88 = (ushort)((uint)(&DAT_14ca814d8)[(ulonglong)uVar1 * 0xf] >> 0x19) & 1;
  }
  else {
    local_88 = 0;
  }
  FUN_147228d0a(uVar2,local_98,&local_88);
  local_88 = 0;
  uStack_86 = 0;
  local_78 = (longlong *)0x0;
  local_b0 = param_6;
  local_b8 = param_5;
  local_a8 = &local_88;
  FUN_147228da5(param_1,param_2,param_7,local_98);
  if (CONCAT62(uStack_86,local_88) != 0) {
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



// FUNCTION 1472205fc FUN_1472205fc body=576 status=ok
// SIG undefined FUN_1472205fc(void)

void FUN_1472205fc(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined1 param_7)

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
  FUN_1472200a4(*(undefined8 *)(param_3 + 0x13818),&local_78,param_4);
  local_50 = param_6;
  FUN_145d87590();
  local_68 = &local_50;
  local_60 = &local_48;
  FUN_1448f70da(CONCAT44(uStack_74,local_78),&DAT_14ca05818,param_5);
  uVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar4 = FUN_1472e1976(uVar4,param_1);
  FUN_145d87590();
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
  local_60 = (ulonglong *)DAT_14ca05860;
  if (DAT_14ca05860 != 0) {
    LOCK();
    *(int *)(DAT_14ca05860 + 8) = *(int *)(DAT_14ca05860 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca05818;
  local_88 = 2;
  FUN_140068f1a(puVar7,param_2,&local_68,uVar6);
  *puVar7 = &PTR_FUN_14a2866e0;
  puVar7[0x37] = param_5;
  puVar7[0x38] = param_3;
  puVar7[0x39] = uVar4;
  *(undefined4 *)(puVar7 + 0x3a) = local_78;
  *(undefined4 *)((longlong)puVar7 + 0x1d4) = uStack_74;
  *(undefined4 *)(puVar7 + 0x3b) = uStack_70;
  *(undefined4 *)((longlong)puVar7 + 0x1dc) = uStack_6c;
  *(undefined1 *)(puVar7 + 0x3c) = param_7;
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



// FUNCTION 14722083d FUN_14722083d body=794 status=ok
// SIG undefined FUN_14722083d(void)

void FUN_14722083d(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5,ulonglong param_6,undefined8 param_7,undefined2 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  ulonglong local_d0;
  undefined1 *local_c8;
  undefined1 local_c0;
  undefined2 local_b8;
  undefined1 local_a9;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [4];
  char local_84;
  int local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_9c = 0;
  if ((*(int *)(DAT_14c9f5c70 + 4) != 0) &&
     ((*(uint *)(*(longlong *)(param_4 + 8) + 0x60) & 0x80000) != 0)) {
    local_9c = (uint)(*(int *)(DAT_14ca00918 + 4) != 0);
  }
  local_90 = param_2;
  local_a9 = FUN_141767b49();
  bVar8 = DAT_14ca007b0 == 0;
  bVar9 = DAT_14c76072c != 0;
  uVar7 = 0;
  if (DAT_14ca007b0 == 0) {
    uVar6 = FUN_142d8c86e(param_4);
    if (((DAT_14c760760 == 0) || (0x10 < uVar6)) ||
       (uVar7 = 1, (0x10110U >> (uVar6 & 0x1f) & 1) == 0)) {
      uVar7 = 0;
    }
  }
  local_a8 = CONCAT71(local_a8._1_7_,bVar8 && bVar9);
  local_80 = 0;
  if ((DAT_14ca84ef5 == '\x01') && (local_80 = 0, (DAT_14ca84ef7 & 1) != 0)) {
    iVar5 = FUN_142d11e9a(param_4,2);
    local_80 = (uint)(iVar5 == 1) * 2;
  }
  local_c8 = (undefined1 *)CONCAT62(local_c8._2_6_,param_8);
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,*(undefined4 *)(param_6 + 0x18));
  local_e8 = local_e8 & 0xffffffffffffff00;
  local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
  FUN_142dad278(local_78,param_1,param_4,param_3);
  local_88[0] = 0;
  cVar4 = FUN_1471dcc8e();
  uVar3 = local_90;
  local_84 = '\x01';
  if (cVar4 != '\x02') {
    local_84 = cVar4;
  }
  if (local_80 == 0) {
    local_84 = cVar4;
  }
  local_7a = local_80 == 0 && *(int *)(DAT_14c9ed3f8 + 4) != 0;
  local_7c = (undefined1)local_a8;
  local_b8 = param_8;
  local_c0 = local_a9;
  local_d0 = param_7;
  local_e0 = param_6;
  local_e8 = param_5;
  local_d8 = local_78;
  local_c8 = local_88;
  local_a8 = param_3;
  local_98 = param_1;
  local_7b = uVar7;
  FUN_142dacaf9(param_1,local_90,param_4,param_3);
  uVar2 = local_98;
  uVar1 = local_a8;
  if ((char)local_9c != '\0') {
    local_c8 = (undefined1 *)CONCAT62(local_c8._2_6_,param_8);
    local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,*(undefined4 *)(DAT_14c9f5c88 + 4));
    local_e8 = local_e8 & 0xffffffffffffff00;
    local_d0 = CONCAT71(local_d0._1_7_,1);
    local_e0 = local_e0 & 0xffffffff00000000;
    FUN_142dad278(local_78,local_98,param_4,local_a8);
    local_88[0] = 0;
    FUN_1471dcc8e();
    local_84 = '\0';
    local_80 = 1;
    local_7c = 0;
    local_7a = 0;
    local_b8 = param_8;
    local_c0 = local_a9;
    local_d0 = param_7;
    local_d8 = local_78;
    local_e0 = param_6;
    local_e8 = param_5;
    local_c8 = local_88;
    local_7b = uVar7;
    FUN_142dacaf9(uVar2,uVar3,param_4,uVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147220b58 FUN_147220b58 body=42 status=ok
// SIG undefined FUN_147220b58(void)

void FUN_147220b58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220b8a FUN_147220b8a body=96 status=ok
// SIG undefined FUN_147220b8a(void)

undefined8 FUN_147220b8a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157b7b8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca059b0,1);
  return uVar3;
}



// FUNCTION 147220bea FUN_147220bea body=52 status=ok
// SIG undefined FUN_147220bea(void)

void FUN_147220bea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220c1e FUN_147220c1e body=42 status=ok
// SIG undefined FUN_147220c1e(void)

void FUN_147220c1e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220c4c FUN_147220c4c body=96 status=ok
// SIG undefined FUN_147220c4c(void)

undefined8 FUN_147220c4c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159d3ac();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05a38,1);
  return uVar3;
}



// FUNCTION 147220cac FUN_147220cac body=52 status=ok
// SIG undefined FUN_147220cac(void)

void FUN_147220cac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220ce0 FUN_147220ce0 body=42 status=ok
// SIG undefined FUN_147220ce0(void)

void FUN_147220ce0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220d12 FUN_147220d12 body=96 status=ok
// SIG undefined FUN_147220d12(void)

undefined8 FUN_147220d12(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141591c84();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05ac0,1);
  return uVar3;
}



// FUNCTION 147220d72 FUN_147220d72 body=52 status=ok
// SIG undefined FUN_147220d72(void)

void FUN_147220d72(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220da6 FUN_147220da6 body=42 status=ok
// SIG undefined FUN_147220da6(void)

void FUN_147220da6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220dd8 FUN_147220dd8 body=96 status=ok
// SIG undefined FUN_147220dd8(void)

undefined8 FUN_147220dd8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a5dc0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05b48,1);
  return uVar3;
}



// FUNCTION 147220e38 FUN_147220e38 body=52 status=ok
// SIG undefined FUN_147220e38(void)

void FUN_147220e38(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220e6c FUN_147220e6c body=42 status=ok
// SIG undefined FUN_147220e6c(void)

void FUN_147220e6c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220e9e FUN_147220e9e body=96 status=ok
// SIG undefined FUN_147220e9e(void)

undefined8 FUN_147220e9e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f91c04();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05bd0,1);
  return uVar3;
}



// FUNCTION 147220efe FUN_147220efe body=52 status=ok
// SIG undefined FUN_147220efe(void)

void FUN_147220efe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220f32 FUN_147220f32 body=42 status=ok
// SIG undefined FUN_147220f32(void)

void FUN_147220f32(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147220f60 FUN_147220f60 body=96 status=ok
// SIG undefined FUN_147220f60(void)

undefined8 FUN_147220f60(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141577fb4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05c58,1);
  return uVar3;
}



// FUNCTION 147220fc0 FUN_147220fc0 body=52 status=ok
// SIG undefined FUN_147220fc0(void)

void FUN_147220fc0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147220ff4 FUN_147220ff4 body=42 status=ok
// SIG undefined FUN_147220ff4(void)

void FUN_147220ff4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221026 FUN_147221026 body=96 status=ok
// SIG undefined FUN_147221026(void)

undefined8 FUN_147221026(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141573e46();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05ce0,1);
  return uVar3;
}



// FUNCTION 147221086 FUN_147221086 body=52 status=ok
// SIG undefined FUN_147221086(void)

void FUN_147221086(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472210ba FUN_1472210ba body=42 status=ok
// SIG undefined FUN_1472210ba(void)

void FUN_1472210ba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472210ec FUN_1472210ec body=96 status=ok
// SIG undefined FUN_1472210ec(void)

undefined8 FUN_1472210ec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415728e8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05d68,1);
  return uVar3;
}



// FUNCTION 14722114c FUN_14722114c body=52 status=ok
// SIG undefined FUN_14722114c(void)

void FUN_14722114c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221180 FUN_147221180 body=42 status=ok
// SIG undefined FUN_147221180(void)

void FUN_147221180(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472211ae FUN_1472211ae body=96 status=ok
// SIG undefined FUN_1472211ae(void)

undefined8 FUN_1472211ae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157f55c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05df0,1);
  return uVar3;
}



// FUNCTION 14722120e FUN_14722120e body=52 status=ok
// SIG undefined FUN_14722120e(void)

void FUN_14722120e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221242 FUN_147221242 body=42 status=ok
// SIG undefined FUN_147221242(void)

void FUN_147221242(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221270 FUN_147221270 body=96 status=ok
// SIG undefined FUN_147221270(void)

undefined8 FUN_147221270(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141580138();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05e78,1);
  return uVar3;
}



// FUNCTION 1472212d0 FUN_1472212d0 body=52 status=ok
// SIG undefined FUN_1472212d0(void)

void FUN_1472212d0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221304 FUN_147221304 body=42 status=ok
// SIG undefined FUN_147221304(void)

void FUN_147221304(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221336 FUN_147221336 body=96 status=ok
// SIG undefined FUN_147221336(void)

undefined8 FUN_147221336(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb9b12();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05f00,1);
  return uVar3;
}



// FUNCTION 147221396 FUN_147221396 body=52 status=ok
// SIG undefined FUN_147221396(void)

void FUN_147221396(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472213ca FUN_1472213ca body=201 status=ok
// SIG undefined FUN_1472213ca(void)

void FUN_1472213ca(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
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
  FUN_145eb9b12();
  local_60 = *(undefined4 *)(param_6 + 1);
  local_68 = *param_6;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca05f00,param_5);
  local_88 = &DAT_14ca05f00;
  local_80 = param_5;
  local_78 = *(undefined4 *)param_4;
  uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_70 = *(undefined4 *)(param_4 + 1);
  uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = &local_88;
  FUN_14723164e(param_1,param_2,param_5,param_3);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147221494 FUN_147221494 body=325 status=ok
// SIG undefined FUN_147221494(void)

void FUN_147221494(undefined8 param_1,undefined8 param_2,undefined2 param_3,undefined8 *param_4,
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
  FUN_145f91c04();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_4,&DAT_14ca05bd0,param_5,&local_c8);
  local_c8 = param_5;
  local_c0 = (ulonglong *)*param_4;
  uStack_b8 = param_4[1];
  local_b0 = param_6;
  local_a8 = 0x48;
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
  FUN_145f91c04();
  local_d8 = &local_c8;
  FUN_147231cba(param_1,param_2,param_5,local_ca);
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



// FUNCTION 1472215da FUN_1472215da body=42 status=ok
// SIG undefined FUN_1472215da(void)

void FUN_1472215da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221608 FUN_147221608 body=96 status=ok
// SIG undefined FUN_147221608(void)

undefined8 FUN_147221608(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141591eaa();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca05f88,1);
  return uVar3;
}



// FUNCTION 147221668 FUN_147221668 body=52 status=ok
// SIG undefined FUN_147221668(void)

void FUN_147221668(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14722169c FUN_14722169c body=42 status=ok
// SIG undefined FUN_14722169c(void)

void FUN_14722169c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472216f4 FUN_1472216f4 body=67 status=ok
// SIG undefined FUN_1472216f4(void)

undefined8 FUN_1472216f4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147221738 FUN_147221738 body=52 status=ok
// SIG undefined FUN_147221738(void)

void FUN_147221738(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14722176c FUN_14722176c body=255 status=ok
// SIG undefined FUN_14722176c(void)

void FUN_14722176c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = FUN_140304d80(*(undefined8 *)(param_1 + 8));
  if (cVar4 != '\0') {
    uVar6 = 1;
    bVar3 = true;
    do {
      bVar7 = bVar3;
      uVar2 = *(undefined8 *)(param_1 + 0x13818);
      FUN_145ead0b4();
      FUN_1448e935e(uVar2,&local_58,&DAT_14ca01ce0,uVar6);
      FUN_145ead0b4();
      if (local_58 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                 (longlong)*(int *)(local_58 + 0xd4) * 8);
        if (lVar5 == 0) {
          lVar5 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
        }
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1471499ca(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
      uVar6 = 0;
      bVar3 = false;
    } while (bVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14722186c FUN_14722186c body=42 status=ok
// SIG undefined FUN_14722186c(void)

void FUN_14722186c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14722189e FUN_14722189e body=96 status=ok
// SIG undefined FUN_14722189e(void)

undefined8 FUN_14722189e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a3140();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06098,1);
  return uVar3;
}



// FUNCTION 1472218fe FUN_1472218fe body=52 status=ok
// SIG undefined FUN_1472218fe(void)

void FUN_1472218fe(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221932 FUN_147221932 body=42 status=ok
// SIG undefined FUN_147221932(void)

void FUN_147221932(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221964 FUN_147221964 body=96 status=ok
// SIG undefined FUN_147221964(void)

undefined8 FUN_147221964(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145bfdfd2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06120,1);
  return uVar3;
}



// FUNCTION 1472219c4 FUN_1472219c4 body=52 status=ok
// SIG undefined FUN_1472219c4(void)

void FUN_1472219c4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472219f8 FUN_1472219f8 body=42 status=ok
// SIG undefined FUN_1472219f8(void)

void FUN_1472219f8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221a2a FUN_147221a2a body=96 status=ok
// SIG undefined FUN_147221a2a(void)

undefined8 FUN_147221a2a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1406be702();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca061a8,1);
  return uVar3;
}



// FUNCTION 147221a8a FUN_147221a8a body=52 status=ok
// SIG undefined FUN_147221a8a(void)

void FUN_147221a8a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221abe FUN_147221abe body=42 status=ok
// SIG undefined FUN_147221abe(void)

void FUN_147221abe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221af0 FUN_147221af0 body=96 status=ok
// SIG undefined FUN_147221af0(void)

undefined8 FUN_147221af0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1406be37a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06230,1);
  return uVar3;
}



// FUNCTION 147221b50 FUN_147221b50 body=52 status=ok
// SIG undefined FUN_147221b50(void)

void FUN_147221b50(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221b84 FUN_147221b84 body=42 status=ok
// SIG undefined FUN_147221b84(void)

void FUN_147221b84(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147221bb6 FUN_147221bb6 body=96 status=ok
// SIG undefined FUN_147221bb6(void)

undefined8 FUN_147221bb6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1406be806();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca062b8,1);
  return uVar3;
}



// FUNCTION 147221c16 FUN_147221c16 body=52 status=ok
// SIG undefined FUN_147221c16(void)

void FUN_147221c16(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147221c4a FUN_147221c4a body=54 status=ok
// SIG undefined FUN_147221c4a(void)

void FUN_147221c4a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147221c84 FUN_147221c84 body=284 status=ok
// SIG undefined FUN_147221c84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147221c84(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca026a8) {
    FUN_144b3d300(&DAT_14ca026a8);
    if (DAT_14ca026a8 == -1) {
      FUN_14614024e();
      FUN_140db5666(&DAT_14ca02600,2,&DAT_14ca02598,L"FLumenTranslucencyRadianceCacheMarkVS",
                    L"/Engine/Private/Lumen/LumenTranslucencyRadianceCacheMarkShaders.usf",L"MainVS"
                    ,0,1,FUN_147221dcc,FUN_147221da4,FUN_14176e0d0,&LAB_147221da0,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14ca02600 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142db99a6);
      _Init_thread_footer(&DAT_14ca026a8);
    }
  }
  return &DAT_14ca02600;
}



// FUNCTION 147221da4 FUN_147221da4 body=39 status=ok
// SIG undefined FUN_147221da4(void)

void FUN_147221da4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147221dcc FUN_147221dcc body=76 status=ok
// SIG undefined FUN_147221dcc(void)

void * FUN_147221dcc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147221e18 FUN_147221e18 body=54 status=ok
// SIG undefined FUN_147221e18(void)

void FUN_147221e18(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147221e52 FUN_147221e52 body=284 status=ok
// SIG undefined FUN_147221e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147221e52(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca027d0) {
    FUN_144b3d300(&DAT_14ca027d0);
    if (DAT_14ca027d0 == -1) {
      FUN_146140398();
      FUN_140db5666(&DAT_14ca02728,2,&DAT_14ca026c0,L"FLumenTranslucencyRadianceCacheMarkPS",
                    L"/Engine/Private/Lumen/LumenTranslucencyRadianceCacheMarkShaders.usf",L"MainPS"
                    ,3,1,FUN_147221f9a,FUN_147221f72,FUN_14176e104,&LAB_147221f6e,&LAB_14712ac0c,
                    &LAB_14712ac08,0x108,0);
      _DAT_14ca02728 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142db99b2);
      _Init_thread_footer(&DAT_14ca027d0);
    }
  }
  return &DAT_14ca02728;
}



// FUNCTION 147221f72 FUN_147221f72 body=39 status=ok
// SIG undefined FUN_147221f72(void)

void FUN_147221f72(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147221f9a FUN_147221f9a body=76 status=ok
// SIG undefined FUN_147221f9a(void)

void * FUN_147221f9a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147221fe6 FUN_147221fe6 body=53 status=ok
// SIG undefined FUN_147221fe6(void)

bool FUN_147221fe6(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a7ebcb();
  if ((cVar1 != '\0') && (cVar1 = FUN_141767a62(param_1), cVar1 != '\0')) {
    return *(int *)(DAT_14ca02808 + 4) != 0;
  }
  return false;
}



// FUNCTION 14722201c FUN_14722201c body=42 status=ok
// SIG undefined FUN_14722201c(void)

void FUN_14722201c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222074 FUN_147222074 body=67 status=ok
// SIG undefined FUN_147222074(void)

undefined8 FUN_147222074(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472220b8 FUN_1472220b8 body=52 status=ok
// SIG undefined FUN_1472220b8(void)

void FUN_1472220b8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472220ec FUN_1472220ec body=42 status=ok
// SIG undefined FUN_1472220ec(void)

void FUN_1472220ec(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222122 FUN_147222122 body=96 status=ok
// SIG undefined FUN_147222122(void)

undefined8 FUN_147222122(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ddd34a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06340,1);
  return uVar3;
}



// FUNCTION 147222182 FUN_147222182 body=52 status=ok
// SIG undefined FUN_147222182(void)

void FUN_147222182(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472221b6 FUN_1472221b6 body=315 status=ok
// SIG undefined FUN_1472221b6(void)

void FUN_1472221b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar4 = FUN_144a7ebcb();
  if ((((cVar4 != '\0') && (cVar4 = FUN_141767a62(uVar2), cVar4 != '\0')) &&
      (*(int *)(DAT_14ca02808 + 4) != 0)) &&
     (cVar4 = FUN_141767b49(*(undefined8 *)(param_1 + 8)), cVar4 == '\0')) {
    cVar4 = '\0';
    bVar3 = true;
    do {
      bVar6 = bVar3;
      iVar1 = *(int *)(DAT_14c9ed3f8 + 4);
      uVar2 = *(undefined8 *)(param_1 + 0x13818);
      FUN_145ddd226();
      FUN_1448e935e(uVar2,&local_58,&DAT_14ca02878,cVar4 + (iVar1 != 0) * '\x04');
      FUN_145ddd226();
      if (local_58 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                 (longlong)*(int *)(local_58 + 0xd4) * 8);
        if (lVar5 == 0) {
          lVar5 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
        }
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1471499ca(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
      cVar4 = '\x02';
      bVar3 = false;
    } while (bVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472222f2 FUN_1472222f2 body=126 status=ok
// SIG undefined FUN_1472222f2(void)

undefined4 * FUN_1472222f2(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[8];
  iVar3 = *(int *)(param_3 + 4);
  FUN_145ddd226();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca02878,(uint)bVar1 + ((uint)bVar2 * 2 + iVar3) * 2);
  FUN_145ddd226();
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



// FUNCTION 147222372 FUN_147222372 body=268 status=ok
// SIG undefined FUN_147222372(void)

void FUN_147222372(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 *param_6,undefined2 param_7)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
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
  uVar4 = *(undefined8 *)(param_3 + 0x13818);
  uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2);
  iVar3 = *(int *)(param_4 + 4);
  bVar1 = *(byte *)(param_4 + 8);
  uVar6 = 0;
  cVar5 = FUN_144b12ca2();
  if (cVar5 == '\0') {
    uVar6 = (uint)(&DAT_14ca814d8)[(ulonglong)uVar2 * 0xf] >> 0x19 & 1;
  }
  FUN_146094b1e();
  FUN_1448e935e(uVar4,&local_58,&DAT_14ca029a0,uVar6 + (iVar3 + (uint)bVar1 * 2) * 2);
  FUN_146094b1e();
  local_68 = local_58;
  uStack_64 = uStack_54;
  uStack_60 = uStack_50;
  uStack_5c = uStack_4c;
  local_78 = *param_6;
  local_80 = &local_78;
  local_70 = *(undefined4 *)(param_6 + 1);
  local_88 = param_5;
  FUN_14722b908(param_1,param_2,param_7);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147222480 FUN_147222480 body=537 status=ok
// SIG undefined FUN_147222480(void)

void FUN_147222480(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong lStack_60;
  undefined *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1472222f2(*(undefined8 *)(param_3 + 0x13818),&local_78,param_4);
  FUN_145ddd34a();
  local_68 = 0;
  lStack_60 = 0;
  FUN_1448f70da(CONCAT44(uStack_74,local_78),&DAT_14ca06340,param_5);
  uVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar3 = FUN_1472e1976(uVar3,param_1);
  FUN_145ddd34a();
  FUN_140069376(param_1);
  uVar5 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar5 = 4;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar6 + 0x3e;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x1f8);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar6 + 0x3e;
  }
  *puVar1 = (ulonglong)puVar4;
  local_68 = param_5;
  lStack_60 = DAT_14ca06388;
  if (DAT_14ca06388 != 0) {
    LOCK();
    *(int *)(DAT_14ca06388 + 8) = *(int *)(DAT_14ca06388 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca06340;
  local_88 = 2;
  FUN_140068f1a(puVar6,param_2,&local_68,uVar5);
  *puVar6 = &PTR_FUN_14a287380;
  puVar6[0x37] = param_5;
  puVar6[0x38] = param_3;
  puVar6[0x39] = uVar3;
  *(undefined4 *)(puVar6 + 0x3a) = local_78;
  *(undefined4 *)((longlong)puVar6 + 0x1d4) = uStack_74;
  *(undefined4 *)(puVar6 + 0x3b) = uStack_70;
  *(undefined4 *)((longlong)puVar6 + 0x1dc) = uStack_6c;
  *(undefined1 *)(puVar6 + 0x3c) = 1;
  *(undefined1 *)((longlong)puVar6 + 0x1e3) = local_49;
  *(undefined2 *)((longlong)puVar6 + 0x1e1) = local_4b;
  *(undefined8 *)((longlong)puVar6 + 0x1e4) = param_6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14722269a FUN_14722269a body=42 status=ok
// SIG undefined FUN_14722269a(void)

void FUN_14722269a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472226cc FUN_1472226cc body=96 status=ok
// SIG undefined FUN_1472226cc(void)

undefined8 FUN_1472226cc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157d55a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca064d8,1);
  return uVar3;
}



// FUNCTION 14722272c FUN_14722272c body=52 status=ok
// SIG undefined FUN_14722272c(void)

void FUN_14722272c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222760 FUN_147222760 body=42 status=ok
// SIG undefined FUN_147222760(void)

void FUN_147222760(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14722278e FUN_14722278e body=96 status=ok
// SIG undefined FUN_14722278e(void)

undefined8 FUN_14722278e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a2e16();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06560,1);
  return uVar3;
}



// FUNCTION 1472227ee FUN_1472227ee body=52 status=ok
// SIG undefined FUN_1472227ee(void)

void FUN_1472227ee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222822 FUN_147222822 body=42 status=ok
// SIG undefined FUN_147222822(void)

void FUN_147222822(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222854 FUN_147222854 body=96 status=ok
// SIG undefined FUN_147222854(void)

undefined8 FUN_147222854(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415921b4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca065e8,1);
  return uVar3;
}



// FUNCTION 1472228b4 FUN_1472228b4 body=52 status=ok
// SIG undefined FUN_1472228b4(void)

void FUN_1472228b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472228e8 FUN_1472228e8 body=42 status=ok
// SIG undefined FUN_1472228e8(void)

void FUN_1472228e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14722291a FUN_14722291a body=96 status=ok
// SIG undefined FUN_14722291a(void)

undefined8 FUN_14722291a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415a303c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06670,1);
  return uVar3;
}



// FUNCTION 14722297a FUN_14722297a body=52 status=ok
// SIG undefined FUN_14722297a(void)

void FUN_14722297a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472229ae FUN_1472229ae body=42 status=ok
// SIG undefined FUN_1472229ae(void)

void FUN_1472229ae(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472229dc FUN_1472229dc body=96 status=ok
// SIG undefined FUN_1472229dc(void)

undefined8 FUN_1472229dc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ead898();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca066f8,1);
  return uVar3;
}



// FUNCTION 147222a3c FUN_147222a3c body=52 status=ok
// SIG undefined FUN_147222a3c(void)

void FUN_147222a3c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222a70 FUN_147222a70 body=42 status=ok
// SIG undefined FUN_147222a70(void)

void FUN_147222a70(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222aa2 FUN_147222aa2 body=96 status=ok
// SIG undefined FUN_147222aa2(void)

undefined8 FUN_147222aa2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f84592();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06918,1);
  return uVar3;
}



// FUNCTION 147222b02 FUN_147222b02 body=52 status=ok
// SIG undefined FUN_147222b02(void)

void FUN_147222b02(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222b36 FUN_147222b36 body=42 status=ok
// SIG undefined FUN_147222b36(void)

void FUN_147222b36(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222b68 FUN_147222b68 body=96 status=ok
// SIG undefined FUN_147222b68(void)

undefined8 FUN_147222b68(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145edbc78();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca069a0,1);
  return uVar3;
}



// FUNCTION 147222bc8 FUN_147222bc8 body=52 status=ok
// SIG undefined FUN_147222bc8(void)

void FUN_147222bc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222bfc FUN_147222bfc body=42 status=ok
// SIG undefined FUN_147222bfc(void)

void FUN_147222bfc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222c2e FUN_147222c2e body=96 status=ok
// SIG undefined FUN_147222c2e(void)

undefined8 FUN_147222c2e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_146046866();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06a28,1);
  return uVar3;
}



// FUNCTION 147222c8e FUN_147222c8e body=52 status=ok
// SIG undefined FUN_147222c8e(void)

void FUN_147222c8e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222cc2 FUN_147222cc2 body=42 status=ok
// SIG undefined FUN_147222cc2(void)

void FUN_147222cc2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147222cf4 FUN_147222cf4 body=96 status=ok
// SIG undefined FUN_147222cf4(void)

undefined8 FUN_147222cf4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7f8a0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06ab0,1);
  return uVar3;
}



// FUNCTION 147222d54 FUN_147222d54 body=52 status=ok
// SIG undefined FUN_147222d54(void)

void FUN_147222d54(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147222d88 FUN_147222d88 body=200 status=ok
// SIG undefined FUN_147222d88(void)

uint * FUN_147222d88(uint *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [4];
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = (uint)(param_3 != 0 && param_4 != 0);
  *(longlong *)(param_1 + 4) = param_3;
  *(undefined8 *)(param_1 + 6) = DAT_14c9c0de0;
  local_40[0] = 0;
  local_3c = 0xffffffff00000000;
  local_30 = 0;
  if ((*(byte *)(param_4 + 0x68) & 0x80) != 0) {
    local_40[0] = 0x1c;
  }
  local_28 = param_4;
  uVar1 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,param_4 + 8,local_40);
  *(undefined8 *)(param_1 + 2) = uVar1;
  if (param_3 == 0) {
    lVar2 = FUN_144a8d736(param_2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar2 + 0x58);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147222e52 FUN_147222e52 body=108 status=ok
// SIG undefined FUN_147222e52(void)

undefined4 * FUN_147222e52(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f7f632();
  FUN_145f7f632();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca03918,0);
  FUN_145f7f632();
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



// FUNCTION 147222ebf FUN_147222ebf body=177 status=ok
// SIG undefined FUN_147222ebf(void)

void FUN_147222ebf(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f7f8a0();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca06ab0,param_4);
  local_78 = &DAT_14ca06ab0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147232716(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147222f72 FUN_147222f72 body=108 status=ok
// SIG undefined FUN_147222f72(void)

undefined4 * FUN_147222f72(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145edba0a();
  FUN_145edba0a();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca036c8,0);
  FUN_145edba0a();
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



// FUNCTION 147222fe0 FUN_147222fe0 body=108 status=ok
// SIG undefined FUN_147222fe0(void)

undefined4 * FUN_147222fe0(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1460465f8();
  FUN_1460465f8();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca037f0,0);
  FUN_1460465f8();
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



// FUNCTION 14722304d FUN_14722304d body=147 status=ok
// SIG undefined FUN_14722304d(void)

void FUN_14722304d(int *param_1,int param_2,int *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    *(undefined8 *)param_3 = *(undefined8 *)param_1;
    *param_4 = CONCAT44(param_1[3] - param_1[1],param_1[2] - *param_1);
  }
  else {
    iVar2 = (param_1[2] - *param_1) + -0x10;
    iVar1 = iVar2 >> 0x1f;
    iVar2 = iVar2 / 3 + iVar1;
    *param_4 = CONCAT44(((param_1[3] - param_1[1]) + -0x10) / 3,iVar2 - iVar1);
    *param_3 = ((iVar2 - iVar1) + 4) * param_2 + *param_1 + 4;
    param_3[1] = param_1[1] + 4;
  }
  return;
}



// FUNCTION 1472230e0 FUN_1472230e0 body=851 status=ok
// SIG undefined FUN_1472230e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472230e0(undefined8 param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined4 param_7,undefined4 *param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar7 = (float)(~-(uint)(0.0 <= DAT_14c7607cc) & 0x7f7fffff |
                 (uint)DAT_14c7607cc & -(uint)(0.0 <= DAT_14c7607cc));
  local_a8 = param_1;
  local_a0 = param_4;
  if (1.0 < *(double *)(param_2 + 0x8a8) || *(double *)(param_2 + 0x8a8) == 1.0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar4 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Lumen.Ortho.OverrideMeshDFTraceDistances",1);
    if (((plVar4 != (longlong *)0x0) && (lVar5 = (**(code **)(*plVar4 + 0x68))(plVar4), lVar5 != 0))
       && (0 < *(int *)(lVar5 + 4))) {
      fVar8 = DAT_14c84635c._4_4_;
      fVar7 = (float)DAT_14c84635c;
      if (1.0 < *(double *)(param_2 + 0x8a8) || *(double *)(param_2 + 0x8a8) == 1.0) {
        fVar8 = (float)*(double *)(param_2 + 0x958) + (float)*(double *)(param_2 + 0x958);
        fVar7 = (float)*(double *)(param_2 + 0x930) + (float)*(double *)(param_2 + 0x930);
      }
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
    }
  }
  fVar8 = DAT_14c7607d8;
  cVar1 = FUN_14017603f();
  fVar6 = DAT_14c9f1f1c;
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(0 < *(int *)(param_2 + 0x2944) || 0 < *(int *)(DAT_14c9f4690 + 4));
  }
  uVar2 = 1;
  if (param_6 == 4) {
    fVar8 = *(float *)(param_2 + 0x291c) * _DAT_14c7604b4;
    if (1048576.0 <= fVar8) {
      fVar8 = 1048576.0;
    }
    if (fVar8 <= 0.01) {
      fVar8 = 0.01;
    }
    uVar2 = FUN_1471ee3cd(param_2);
    uVar3 = FUN_1471edf55(param_2);
    fVar7 = fVar6;
  }
  FUN_147222d88(&local_98,local_a8,local_a0,param_5);
  param_8[4] = local_88;
  param_8[5] = uStack_84;
  param_8[6] = uStack_80;
  param_8[7] = uStack_7c;
  *param_8 = local_98;
  param_8[1] = uStack_94;
  param_8[2] = uStack_90;
  param_8[3] = uStack_8c;
  param_8[0x10] = (uint)(DAT_14c7607d0 != 0);
  param_8[0x11] = param_6;
  param_8[0x12] = *(undefined4 *)(DAT_14ca03210 + 4);
  param_8[0x1c] = uVar2;
  param_8[0x1d] = uVar3;
  FUN_142d3fd2b(param_2,param_8 + 0x14);
  *(undefined8 *)(param_8 + 0x18) = *(undefined8 *)(DAT_14ca63b68 + 8);
  *(undefined8 *)(param_8 + 0x1a) = DAT_14c9c0de0;
  *(undefined8 *)(param_8 + 10) = *(undefined8 *)param_3;
  *(undefined8 *)(param_8 + 0xe) = *(undefined8 *)param_3;
  *(ulonglong *)(param_8 + 8) = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
  *(ulonglong *)(param_8 + 0xc) = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
  FUN_14722304d(param_3,param_7,param_8 + 0xe,param_8 + 0xc);
  if (DAT_14c7607c8 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    if ((*(byte *)(*(longlong *)(param_2 + 8) + 0x62) & 2) != 0) {
      fVar6 = fVar7;
    }
  }
  fVar7 = DAT_14c7607d4;
  if (10.0 <= DAT_14c7607d4) {
    fVar7 = 10.0;
  }
  if (fVar7 <= 0.1) {
    fVar7 = 0.1;
  }
  param_8[0x20] = fVar7;
  fVar7 = DAT_14ca032b8;
  if (1000.0 <= DAT_14ca032b8) {
    fVar7 = 1000.0;
  }
  if (fVar7 <= 0.01) {
    fVar7 = 0.01;
  }
  param_8[0x21] = fVar7;
  if (1048576.0 <= fVar8) {
    fVar8 = 1048576.0;
  }
  if (fVar8 <= 0.01) {
    fVar8 = 0.01;
  }
  param_8[0x22] = fVar8;
  param_8[0x25] = DAT_14c7607f4;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  if (fVar6 <= fVar7) {
    fVar6 = fVar7;
  }
  param_8[0x23] = fVar6;
  param_8[0x24] = fVar6;
  uVar2 = FUN_142d06840();
  param_8[0x26] = uVar2;
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147223434 FUN_147223434 body=67 status=ok
// SIG undefined FUN_147223434(void)

ulonglong FUN_147223434(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = FUN_144a7ebcb();
  if (cVar1 != '\0') {
    cVar1 = FUN_141767a62(param_1);
    if ((cVar1 != '\0') && (*(int *)(DAT_14ca03a00 + 4) != 0)) {
      uVar2 = CONCAT71((int7)((ulonglong)DAT_14ca03a00 >> 8),
                       0 < DAT_14ca031e8 | *(byte *)(param_1 + 0x4c));
      goto LAB_14722346f;
    }
  }
  uVar2 = 0;
LAB_14722346f:
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 147223478 FUN_147223478 body=149 status=ok
// SIG undefined FUN_147223478(void)

undefined4 * FUN_147223478(undefined8 param_1,undefined4 *param_2,byte *param_3)

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
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  bVar5 = param_3[4];
  FUN_145ead62a();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca03478,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8 | (uint)bVar5 << 4
               );
  FUN_145ead62a();
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



// FUNCTION 14722350e FUN_14722350e body=177 status=ok
// SIG undefined FUN_14722350e(void)

void FUN_14722350e(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145ead898();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca066f8,param_4);
  local_78 = &DAT_14ca066f8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147232fc4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472235c0 FUN_1472235c0 body=177 status=ok
// SIG undefined FUN_1472235c0(void)

void FUN_1472235c0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f84592();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca06918,param_4);
  local_78 = &DAT_14ca06918;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14723344e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147223672 FUN_147223672 body=722 status=ok
// SIG undefined FUN_147223672(void)

void FUN_147223672(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined1 local_160;
  longlong *local_150;
  longlong *local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined1 local_d8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar5 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  if ((longlong)(int)param_1[2] != 0) {
    local_150 = plVar5 + (int)param_1[2];
    do {
      lVar1 = *plVar5;
      lVar2 = *(longlong *)(lVar1 + 8);
      local_148 = plVar5;
      lVar3 = FUN_14499c118(lVar1);
      if (lVar3 == 0) {
        lVar1 = *(longlong *)(lVar1 + 8);
        local_e0 = *(double *)(lVar1 + 0x1c8) + *(double *)(lVar1 + 0x1e0);
        local_e8 = *(double *)(lVar1 + 0x1c0) + *(double *)(lVar1 + 0x1d8);
        local_f0 = *(double *)(lVar1 + 0x1b8) + *(double *)(lVar1 + 0x1d0);
        local_f8 = *(double *)(lVar1 + 0x1c8) - *(double *)(lVar1 + 0x1e0);
        local_100 = *(double *)(lVar1 + 0x1c0) - *(double *)(lVar1 + 0x1d8);
        local_108 = *(double *)(lVar1 + 0x1b8) - *(double *)(lVar1 + 0x1d0);
        local_d8 = 1;
        local_160 = 0;
        local_168 = 0;
        local_170 = 0;
        local_178 = 0;
        FUN_147cb76de(param_3,lVar2 + 0x100,&local_108,param_2);
      }
      else {
        piVar4 = (int *)(lVar3 + 0xd8);
        if ((*(byte *)(lVar3 + 0x11a) & 1) != 0) {
          piVar4 = (int *)(lVar3 + 0x110);
        }
        if (0 < *piVar4) {
          iVar6 = 0;
          do {
            FUN_144b2410c(lVar3,&local_108,iVar6,0);
            local_118 = (double)local_f8._4_4_;
            local_120 = (double)(float)local_f8;
            local_128 = (double)local_100._4_4_;
            local_130 = (double)(float)local_100;
            local_138 = (double)local_108._4_4_;
            local_140 = (double)(float)local_108;
            local_110 = 1;
            FUN_144b2447c(lVar3,&local_108,iVar6,0);
            local_160 = 0;
            local_168 = 0;
            local_170 = 0;
            local_178 = 0;
            FUN_147cb76de(param_3,&local_108,&local_140);
            iVar6 = iVar6 + 1;
            piVar4 = (int *)(lVar3 + 0xd8);
            if ((*(byte *)(lVar3 + 0x11a) & 1) != 0) {
              piVar4 = (int *)(lVar3 + 0x110);
            }
          } while (iVar6 < *piVar4);
        }
      }
      plVar5 = local_148 + 1;
    } while (plVar5 != local_150);
  }
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147223945 FUN_147223945 body=2832 status=ok
// SIG undefined FUN_147223945(void)

void FUN_147223945(undefined8 param_1,longlong *param_2,double *param_3,char param_4,
                  undefined8 param_5,longlong *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double *pdVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  undefined8 *local_300;
  undefined4 *local_2f8;
  uint local_2f0;
  char local_2d9;
  float local_2d8;
  int local_2d4;
  longlong *local_2d0;
  double *local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  float *local_290;
  undefined8 local_288;
  ulonglong local_280;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 local_238 [8];
  float fStack_230;
  double local_228;
  undefined8 local_21c;
  undefined8 local_214;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  double local_1b0;
  undefined1 local_1a8;
  undefined1 local_1a0 [40];
  undefined1 local_178 [8];
  float fStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2d9 = param_4;
  uVar13 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x518) + 0x2f0))();
  uVar14 = FUN_142dda456(param_1);
  FUN_1401a700c(local_178,0x3e);
  local_2b8 = uVar14;
  FUN_14089e406(uVar14,uVar13,param_5,local_178._0_4_);
  local_300 = (undefined8 *)0x0;
  local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
  FUN_140d3493e(local_1a0,*(undefined4 *)(param_6[1] + 0x3090),1,0);
  local_1b0 = DAT_14c8464f0;
  local_1c0 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1b8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_1d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_1c8 = DAT_14c8464f0;
  local_2c8 = param_3;
  FUN_14494412e(param_3,local_178);
  iVar16 = (int)param_2[1];
  if (iVar16 < 1) {
    fVar34 = 0.0;
    fVar31 = 0.0;
    fVar30 = 0.0;
  }
  else {
    uStack_240 = (undefined4)local_158;
    uStack_23c = (undefined4)((ulonglong)local_158 >> 0x20);
    local_248 = local_178._0_4_;
    uStack_244 = local_178._4_4_;
    local_298 = local_138;
    uStack_250 = (undefined4)local_150;
    uStack_24c = (undefined4)((ulonglong)local_150 >> 0x20);
    local_258 = fStack_170;
    uStack_254 = uStack_16c;
    local_2a0 = local_130;
    uStack_260 = (undefined4)local_148;
    uStack_25c = (undefined4)((ulonglong)local_148 >> 0x20);
    local_268 = (undefined4)local_168;
    uStack_264 = local_168._4_4_;
    local_2a8 = local_128;
    local_2b0 = local_120 * 0.0;
    local_278._8_4_ = SUB84(local_140 * 0.0,0);
    local_278._0_8_ = dStack_160 * 0.0;
    local_278._12_4_ = (int)((ulonglong)(local_140 * 0.0) >> 0x20);
    fVar30 = 0.0;
    uVar13 = 0;
    fVar31 = 0.0;
    fVar34 = 0.0;
    lVar17 = 0;
    iVar18 = 0;
    uVar15 = 0;
    local_2d0 = param_2;
    do {
      auVar12 = _local_178;
      if (DAT_14c7607e4 <= iVar18 && -1 < DAT_14c7607e4) break;
      if (*(char *)(*param_2 + 0x24 + lVar17 * 0x28) == local_2d9) {
        local_290 = (float *)(*param_2 + lVar17 * 0x28);
        dVar28 = (double)local_290[5];
        dVar23 = (double)local_290[4];
        dVar3 = (double)local_290[3];
        dVar21 = dVar28 * (double)CONCAT44(uStack_264,local_268) +
                 dVar23 * (double)CONCAT44(uStack_254,local_258) +
                 dVar3 * (double)CONCAT44(uStack_244,local_248) + (double)local_278._0_8_;
        dVar25 = dVar28 * (double)CONCAT44(uStack_25c,uStack_260) +
                 dVar23 * (double)CONCAT44(uStack_24c,uStack_250) +
                 dVar3 * (double)CONCAT44(uStack_23c,uStack_240) + (double)local_278._8_8_;
        dVar3 = dVar3 * local_298 + dVar23 * local_2a0 + dVar28 * local_2a8 + local_2b0;
        dVar24 = dVar3 * dVar3 + dVar21 * dVar21 + dVar25 * dVar25;
        dVar23 = 0.0;
        dVar26 = 0.0;
        dVar28 = 0.0;
        if (9.99999993922529e-09 < dVar24) {
          dVar23 = 1.0 / SQRT(dVar24);
          dVar28 = dVar3 * dVar23;
          dVar26 = dVar25 * dVar23;
          dVar23 = dVar23 * dVar21;
        }
        dVar4 = (double)local_290[2];
        dVar22 = (double)local_290[1];
        dVar27 = (double)*local_290;
        dVar5 = *local_2c8;
        dVar6 = local_2c8[1];
        dVar7 = local_2c8[4];
        dVar8 = local_2c8[5];
        dVar9 = local_2c8[8];
        dVar10 = local_2c8[9];
        dVar1 = local_2c8[0xc];
        dVar2 = local_2c8[0xd];
        dVar3 = local_2c8[10];
        dVar24 = local_2c8[6];
        dVar21 = local_2c8[2];
        dVar25 = local_2c8[0xe];
        local_178._4_4_ = (float)dVar26;
        local_178._0_4_ = (float)dVar23;
        uStack_16c = auVar12._12_4_;
        fStack_170 = (float)dVar28;
        local_2d8 = fVar31;
        local_2d4 = iVar18;
        local_2c0 = lVar17;
        local_288 = uVar13;
        local_280 = uVar15;
        FUN_14041c796(local_178,local_238,&local_1e4);
        iVar16 = 0;
        do {
          fVar20 = cosf((float)iVar16 * 1.0471976);
          fVar33 = fStack_230 * fVar20;
          fVar29 = (float)local_238._4_4_ * fVar20;
          fVar20 = fVar20 * (float)local_238._0_4_;
          fVar31 = sinf((float)iVar16 * 1.0471976);
          fVar33 = local_1dc * fVar31 + fVar33;
          fVar29 = local_1e0 * fVar31 + fVar29;
          fVar20 = fVar31 * local_1e4 + fVar20;
          local_1e8 = (fVar33 + fVar33) * DAT_14c7607dc +
                      (float)dVar28 * 0.5 +
                      (float)(dVar27 * dVar21 + dVar22 * dVar24 + dVar4 * dVar3 + dVar25);
          local_1ec = (fVar29 + fVar29) * DAT_14c7607dc +
                      (float)dVar26 * 0.5 +
                      (float)(dVar4 * dVar10 + dVar22 * dVar8 + dVar27 * dVar6 + dVar2);
          local_1f0 = (fVar20 + fVar20) * DAT_14c7607dc +
                      (float)dVar23 * 0.5 +
                      (float)(dVar4 * dVar9 + dVar22 * dVar7 + dVar27 * dVar5 + dVar1);
          local_1fc = 0;
          local_1f4 = 0x3f800000;
          local_208 = 0x3f80000000000000;
          local_200 = 0;
          local_214 = 0x3f800000;
          local_20c = 0;
          local_21c = 0;
          local_2f8 = &DAT_149e1e2cc;
          local_300 = &local_1fc;
          local_308 = &local_208;
          FUN_140d34aec(local_1a0,&local_1f0,&local_21c);
          uVar15 = local_280;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 6);
        iVar16 = (int)local_280;
        iVar18 = 0;
        do {
          iVar19 = iVar18 + 1;
          FUN_140d3489c(local_1a0,uVar15 & 0xffffffff,iVar16 + iVar18,iVar18 + iVar16 + 1);
          iVar18 = iVar19;
        } while (iVar19 != 5);
        fVar34 = fVar34 + (float)local_178._0_4_;
        fVar31 = local_2d8 + (float)local_178._4_4_;
        fVar30 = fVar30 + fStack_170;
        dVar3 = (double)local_290[2];
        dVar28 = (double)local_290[1];
        dVar23 = (double)*local_290;
        dVar24 = dVar3;
        dVar26 = dVar23;
        dVar21 = dVar28;
        dVar25 = dVar3;
        if ((char)local_288 != '\0') {
          if (dVar23 <= local_1d8) {
            local_1d8 = dVar23;
          }
          if (dVar28 <= uStack_1d0) {
            uStack_1d0 = dVar28;
          }
          if (dVar3 <= local_1c8) {
            local_1c8 = dVar3;
          }
          if (local_1c0 <= dVar23) {
            local_1c0 = dVar23;
          }
          if (uStack_1b8 <= dVar28) {
            uStack_1b8 = dVar28;
          }
          dVar23 = local_1d8;
          dVar28 = uStack_1d0;
          dVar24 = local_1c8;
          dVar26 = local_1c0;
          dVar21 = uStack_1b8;
          dVar25 = local_1b0;
          if (local_1b0 <= dVar3) {
            dVar25 = dVar3;
          }
        }
        local_1b0 = dVar25;
        uStack_1b8 = dVar21;
        local_1c0 = dVar26;
        local_1c8 = dVar24;
        uStack_1d0 = dVar28;
        local_1d8 = dVar23;
        uVar15 = (ulonglong)(iVar16 + 6);
        iVar18 = local_2d4 + 1;
        iVar16 = (int)local_2d0[1];
        uVar13 = CONCAT71((int7)((ulonglong)local_1a0 >> 8),1);
        lVar17 = local_2c0;
        param_2 = local_2d0;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar16);
  }
  local_300 = (undefined8 *)((ulonglong)local_300 & 0xffffffffffffff00);
  local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
  local_2f0 = 0xffffffff;
  local_2f8 = (undefined4 *)CONCAT71(local_2f8._1_7_,1);
  FUN_1434d8d42(local_1a0,param_6,&DAT_14c846400,local_2b8);
  pdVar11 = local_2c8;
  if ((local_2d9 == '\x03') && (-1 < DAT_14c7607e4)) {
    local_1b0 = local_1b0 + 1.0;
    uStack_1b8 = uStack_1b8 + 1.0;
    local_1c0 = local_1c0 + 1.0;
    local_1c8 = local_1c8 + -1.0;
    uStack_1d0 = uStack_1d0 + -1.0;
    local_1d8 = local_1d8 + -1.0;
    local_1a8 = 1;
    local_2f0 = local_2f0 & 0xffffff00;
    local_300._0_4_ = DAT_14c7607e0;
    local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
    local_2f8 = (undefined4 *)((ulonglong)local_2f8 & 0xffffffff00000000);
    FUN_147cb76de(param_6,local_2c8,&local_1d8,param_5);
    dVar28 = (local_1c8 + local_1b0) * 0.5;
    dVar24 = (uStack_1d0 + uStack_1b8) * 0.5;
    dVar3 = (local_1d8 + local_1c0) * 0.5;
    dVar23 = dVar28 * pdVar11[9] + dVar24 * pdVar11[5] + dVar3 * pdVar11[1] + pdVar11[0xd];
    fStack_170 = (float)SUB84(dVar23,0);
    local_178 = (undefined1  [8])
                (dVar28 * pdVar11[8] + dVar24 * pdVar11[4] + dVar3 * *pdVar11 + pdVar11[0xc]);
    uStack_16c = (int)((ulonglong)dVar23 >> 0x20);
    local_168 = dVar3 * pdVar11[2] + dVar24 * pdVar11[6] + dVar28 * pdVar11[10] + pdVar11[0xe];
    fVar20 = fVar30 * fVar30 + fVar34 * fVar34 + fVar31 * fVar31;
    if (((fVar20 != 1.0) || (fVar33 = fVar30, fVar29 = fVar34, fVar32 = fVar31, NAN(fVar20))) &&
       (fVar33 = DAT_14c846338, fVar29 = (float)DAT_14c846330, fVar32 = DAT_14c846330._4_4_,
       1e-08 <= fVar20)) {
      fVar20 = 1.0 / SQRT(fVar20);
      fVar33 = fVar30 * fVar20;
      fVar29 = fVar34 * fVar20;
      fVar32 = fVar31 * fVar20;
    }
    dVar28 = dVar28 + (double)fVar33 * 100.0;
    dVar24 = dVar24 + (double)fVar32 * 100.0;
    dVar3 = dVar3 + (double)fVar29 * 100.0;
    dVar23 = pdVar11[0xd] + pdVar11[9] * dVar28 + pdVar11[5] * dVar24 + pdVar11[1] * dVar3;
    fStack_230 = (float)SUB84(dVar23,0);
    local_238 = pdVar11[0xc] + pdVar11[8] * dVar28 + pdVar11[4] * dVar24 + *pdVar11 * dVar3;
    unique0x10000690 = (int)((ulonglong)dVar23 >> 0x20);
    local_228 = pdVar11[0xe] + pdVar11[2] * dVar3 + pdVar11[6] * dVar24 + pdVar11[10] * dVar28;
    local_2f0 = local_2f0 & 0xffffff00;
    local_308 = (undefined8 *)((ulonglong)local_308 & 0xffffffffffffff00);
    local_2f8 = (undefined4 *)((ulonglong)local_2f8 & 0xffffffff00000000);
    local_300 = (undefined8 *)CONCAT44(local_300._4_4_,0x3e4ccccd);
    local_2d8 = fVar31;
    (**(code **)(*param_6 + 0x30))(param_6,local_178,local_238,&DAT_149e1dd34);
  }
  FUN_1434d8cf8(local_1a0);
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147224456 FUN_147224456 body=1072 status=ok
// SIG undefined FUN_147224456(void)

void FUN_147224456(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_358 [40];
  undefined8 local_330;
  double local_328;
  undefined4 local_320;
  undefined4 local_31c;
  double local_318;
  double local_310;
  double local_308;
  double local_300;
  undefined8 local_2f8;
  double local_2f0;
  undefined1 local_2e8 [192];
  longlong local_228;
  undefined8 local_218;
  longlong local_108;
  undefined8 local_f8;
  ulonglong local_e0;
  ulonglong uVar6;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (DAT_14ca03398 != 0) {
    uVar6 = 0;
    local_228 = 0;
    local_218 = 0x600000000;
    local_108 = 0;
    local_f8 = 0x800000000;
    local_330 = param_3;
    FUN_144920f26(local_2e8,param_1 + 0xab0,1);
    uVar1 = *(uint *)(param_2 + 400);
    if ((int)uVar1 < 1) {
LAB_147224564:
      if ((uint)uVar6 != uVar1) {
        do {
          iVar8 = (int)uVar6;
          lVar4 = (longlong)(iVar8 % 0x9249) * 0x38 +
                  *(longlong *)(*(longlong *)(param_2 + 0x198) + (longlong)(iVar8 / 0x9249) * 8);
          if (((DAT_14ca03398 != 2) || (cVar2 = FUN_142d5071e(lVar4), cVar2 == '\0')) &&
             (*(int *)(lVar4 + 0x2c) != -1)) {
            lVar3 = FUN_1471dd69a(param_2,lVar4,0);
            fVar10 = (*(float *)(lVar3 + 0x1c) + *(float *)(lVar3 + 0x10)) * 0.5;
            fVar11 = (*(float *)(lVar3 + 0x18) + *(float *)(lVar3 + 0xc)) * 0.5;
            fVar14 = (*(float *)(lVar3 + 0x14) + *(float *)(lVar3 + 8)) * 0.5;
            fVar12 = (*(float *)(lVar3 + 0x1c) - *(float *)(lVar3 + 0x10)) * 0.5;
            fVar15 = (*(float *)(lVar3 + 0x18) - *(float *)(lVar3 + 0xc)) * 0.5;
            fVar17 = (*(float *)(lVar3 + 0x14) - *(float *)(lVar3 + 8)) * 0.5;
            fVar13 = ABS((float)*(double *)(param_1 + 0x1058) - fVar10) - fVar12;
            fVar18 = ABS((float)*(double *)(param_1 + 0x1050) - fVar11) - fVar15;
            fVar16 = ABS((float)*(double *)(param_1 + 0x1048) - fVar14) - fVar17;
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            if (fVar16 <= 0.0) {
              fVar16 = 0.0;
            }
            if (fVar13 * fVar13 + fVar16 * fVar16 + fVar18 * fVar18 < DAT_14c7607e8 * DAT_14c7607e8)
            {
              local_2f0 = (double)fVar12;
              local_2f8 = (double)fVar15;
              local_300 = (double)fVar17;
              local_308 = (double)fVar10;
              local_310 = (double)fVar11;
              local_318 = (double)fVar14;
              cVar2 = FUN_144b22be2(local_2e8,&local_318,&local_300);
              if (cVar2 != '\0') {
                FUN_1467ed8fe(&local_300,*(undefined1 *)(lVar4 + 0x2c),0xff,0xff);
                local_2f8 = (double)CONCAT44(0x3f800000,(undefined4)local_2f8);
                local_328 = local_300;
                local_320 = (undefined4)local_2f8;
                local_31c = 0x3f800000;
                FUN_147223672(lVar4,&local_328,local_330);
              }
            }
          }
          lVar4 = *(longlong *)(param_2 + 0x1b8);
          if (*(longlong *)(param_2 + 0x1b8) == 0) {
            lVar4 = param_2 + 0x1a8;
          }
          uVar7 = iVar8 + 1U;
          if ((int)(iVar8 + 1U) < (int)*(uint *)(param_2 + 400)) {
            uVar7 = *(uint *)(param_2 + 400);
          }
          do {
            iVar8 = (int)uVar6;
            uVar5 = uVar7;
            if (uVar7 - 1 == iVar8) break;
            uVar5 = iVar8 + 1;
            uVar9 = iVar8 + 0x20;
            if (-1 < (int)uVar5) {
              uVar9 = uVar5;
            }
            uVar6 = (ulonglong)uVar5;
          } while ((*(uint *)(lVar4 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0);
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != uVar1);
      }
    }
    else {
      lVar4 = param_2 + 0x1a8;
      if (*(longlong *)(param_2 + 0x1b8) != 0) {
        lVar4 = *(longlong *)(param_2 + 0x1b8);
      }
      uVar6 = 0;
      do {
        if ((*(uint *)(lVar4 + (uVar6 >> 5) * 4) >> ((uint)uVar6 & 0x1f) & 1) != 0)
        goto LAB_147224564;
        uVar7 = (uint)uVar6 + 1;
        uVar6 = (ulonglong)uVar7;
      } while (uVar1 != uVar7);
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_228 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147224887 FUN_147224887 body=2572 status=ok
// SIG undefined FUN_147224887(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147224887(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  double *pdVar7;
  int iVar8;
  longlong lVar9;
  double *pdVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_4c8 [32];
  undefined8 *local_4a8;
  undefined8 *local_4a0;
  undefined4 *local_498;
  uint local_490;
  longlong local_480;
  uint local_474;
  longlong local_470;
  longlong local_468;
  longlong local_460;
  undefined8 local_458;
  undefined8 local_450;
  longlong local_448;
  longlong local_440;
  float local_438;
  float local_434;
  float local_430;
  undefined8 local_42c;
  undefined8 local_424;
  undefined4 local_41c;
  undefined8 local_418;
  undefined4 local_410;
  undefined8 local_40c;
  undefined4 local_404;
  undefined8 local_400 [5];
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  double local_3b0;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  double local_398;
  undefined1 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  double local_378;
  double local_370;
  double dStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 local_2f8 [192];
  longlong local_238;
  undefined8 local_228;
  longlong local_118;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  local_450 = param_1;
  if (DAT_14ca03340 != 0) {
    uVar17 = 0;
    local_238 = 0;
    local_228 = 0x600000000;
    local_118 = 0;
    local_108 = 0x800000000;
    local_448 = param_2;
    FUN_144920f26(local_2f8,param_2 + 0xab0,1);
    uVar12 = *(uint *)(param_3 + 400);
    if ((int)uVar12 < 1) {
LAB_1472249ae:
      if ((uint)uVar17 != uVar12) {
        local_440 = param_3 + 0x1a8;
        local_474 = uVar12;
        local_470 = param_4;
        local_468 = param_3;
        do {
          iVar14 = (int)uVar17;
          lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x198) + (longlong)(iVar14 / 0x9249) * 8);
          lVar6 = (longlong)(iVar14 % 0x9249) * 0x38;
          lVar4 = lVar9 + lVar6;
          iVar15 = *(int *)(lVar9 + 0x1c + lVar6);
          switch(DAT_14ca03368) {
          case 1:
            if ((-1 < iVar15) && (cVar1 = FUN_142d5071e(lVar4), cVar1 == '\0')) {
LAB_147224ae6:
              local_480 = lVar4;
              lVar4 = FUN_1471dd69a(param_3,lVar4,0);
              fVar18 = (*(float *)(lVar4 + 0x1c) + *(float *)(lVar4 + 0x10)) * 0.5;
              fVar19 = (*(float *)(lVar4 + 0x18) + *(float *)(lVar4 + 0xc)) * 0.5;
              fVar22 = (*(float *)(lVar4 + 0x14) + *(float *)(lVar4 + 8)) * 0.5;
              fVar20 = (*(float *)(lVar4 + 0x1c) - *(float *)(lVar4 + 0x10)) * 0.5;
              fVar23 = (*(float *)(lVar4 + 0x18) - *(float *)(lVar4 + 0xc)) * 0.5;
              fVar25 = (*(float *)(lVar4 + 0x14) - *(float *)(lVar4 + 8)) * 0.5;
              fVar21 = ABS((float)*(double *)(local_448 + 0x1058) - fVar18) - fVar20;
              fVar26 = ABS((float)*(double *)(local_448 + 0x1050) - fVar19) - fVar23;
              fVar24 = ABS((float)*(double *)(local_448 + 0x1048) - fVar22) - fVar25;
              if (fVar21 <= 0.0) {
                fVar21 = 0.0;
              }
              if (fVar26 <= 0.0) {
                fVar26 = 0.0;
              }
              if (fVar24 <= 0.0) {
                fVar24 = 0.0;
              }
              if (fVar21 * fVar21 + fVar24 * fVar24 + fVar26 * fVar26 <
                  DAT_14c7607e8 * DAT_14c7607e8) {
                dStack_368 = (double)fVar20;
                local_370 = (double)fVar23;
                local_378 = (double)fVar25;
                local_3b0 = (double)fVar18;
                uStack_3b8 = (double)fVar19;
                local_3c0 = (double)fVar22;
                cVar1 = FUN_144b22be2(local_2f8,&local_3c0,&local_378);
                if (cVar1 != '\0') {
                  lVar4 = *(longlong *)(param_3 + 0x298);
                  lVar9 = (longlong)*(int *)(local_480 + 0x1c) * 400;
                  uVar13 = *(uint *)(lVar4 + 0x150 + lVar9);
                  iVar15 = *(int *)(lVar4 + 0x154 + lVar9);
                  if (uVar13 < iVar15 + uVar13) {
                    local_460 = lVar4 + lVar9;
                    iVar8 = DAT_14c7607ec;
                    uVar11 = uVar13;
                    do {
                      lVar4 = *(longlong *)(param_3 + 8);
                      lVar9 = (longlong)(int)uVar11 * 0x180;
                      if ((*(int *)(lVar4 + 0x16c + lVar9) == iVar8 || iVar8 < 0) &&
                         (*(char *)(lVar4 + 0xf4 + lVar9) != '\0')) {
                        lVar4 = lVar4 + lVar9;
                        uVar2 = FUN_1448eb174(lVar4 + 0x30,0xc,0);
                        uVar3 = FUN_1448eb174(lVar4,0xc,0);
                        uVar2 = FUN_144a78877(uVar3,uVar2);
                        uVar3 = FUN_1448eb174(lVar4 + 0x24,0xc,0);
                        uVar2 = FUN_144a78877(uVar2,uVar3);
                        uVar2 = FUN_144a78877(uVar2,uVar11);
                        FUN_1467ed8fe(&local_388,uVar2,0xff,0xff);
                        lVar9 = local_470;
                        uStack_37c = 0x3f800000;
                        local_378 = 1.0;
                        local_360 = 0;
                        uStack_358 = 0;
                        local_370 = 0.0;
                        dStack_368 = 0.0;
                        local_350 = 0x3ff0000000000000;
                        local_338 = 0;
                        uStack_330 = 0;
                        local_348 = 0;
                        uStack_340 = 0;
                        local_328 = 0x3ff0000000000000;
                        local_310 = 0;
                        uStack_308 = 0;
                        local_320 = 0;
                        uStack_318 = 0;
                        local_300 = 0x3ff0000000000000;
                        if (lVar4 != -0x58) {
                          local_378 = *(double *)(lVar4 + 0x58);
                          local_370 = *(double *)(lVar4 + 0x60);
                          dStack_368 = *(double *)(lVar4 + 0x68);
                        }
                        if (lVar4 != -0x70) {
                          uStack_358 = *(undefined8 *)(lVar4 + 0x70);
                          local_350 = *(undefined8 *)(lVar4 + 0x78);
                          local_348 = *(undefined8 *)(lVar4 + 0x80);
                        }
                        if (lVar4 != -0x88) {
                          local_338 = *(undefined8 *)(lVar4 + 0x88);
                          uStack_330 = *(undefined8 *)(lVar4 + 0x90);
                          local_328 = *(undefined8 *)(lVar4 + 0x98);
                        }
                        if (lVar4 != -0x40) {
                          uStack_318 = *(undefined8 *)(lVar4 + 0x40);
                          local_310 = *(undefined8 *)(lVar4 + 0x48);
                          uStack_308 = *(undefined8 *)(lVar4 + 0x50);
                        }
                        local_3c0 = (double)CONCAT44(*(uint *)(lVar4 + 0xa4) ^ DAT_149931e80._4_4_,
                                                     *(uint *)(lVar4 + 0xa0) ^ (uint)DAT_149931e80);
                        uStack_3b8 = (double)CONCAT44(*(uint *)(lVar4 + 0xac) ^ DAT_149931e80._12_4_
                                                      ,*(uint *)(lVar4 + 0xa8) ^ DAT_149931e80._8_4_
                                                     );
                        local_3b0 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar4 + 0xb0)
                                                           >> 0x20) ^ DAT_149931e80._4_4_,
                                                     (uint)*(undefined8 *)(lVar4 + 0xb0) ^
                                                     (uint)DAT_149931e80);
                        local_398 = *(double *)(lVar4 + 0xb0);
                        local_3a8 = *(undefined4 *)(lVar4 + 0xa0);
                        uStack_3a4 = *(undefined4 *)(lVar4 + 0xa4);
                        uStack_3a0 = *(undefined4 *)(lVar4 + 0xa8);
                        uStack_39c = *(undefined4 *)(lVar4 + 0xac);
                        local_390 = 1;
                        local_490 = local_490 & 0xffffff00;
                        local_498 = (undefined4 *)((ulonglong)local_498 & 0xffffffff00000000);
                        local_4a0 = (undefined8 *)((ulonglong)local_4a0 & 0xffffffff00000000);
                        local_4a8 = (undefined8 *)((ulonglong)local_4a8 & 0xffffffffffffff00);
                        FUN_147cb76de(local_470,&local_378,&local_3c0,&local_388);
                        if ((DAT_14ca03380 != 0) &&
                           (cVar1 = FUN_142d5071e(local_480), cVar1 != '\0')) {
                          local_3d8 = local_388;
                          uStack_3d4 = uStack_384;
                          uStack_3d0 = uStack_380;
                          uStack_3cc = uStack_37c;
                          FUN_147223672(local_480,&local_3d8,lVar9);
                        }
                        uStack_37c = 0x3e800000;
                        local_400[0] = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x4d8) + 0x2f0))
                                                 ();
                        local_458 = FUN_147225294(local_450,local_400,&local_388,&DAT_14a289db8);
                        local_4a0 = (undefined8 *)0x0;
                        local_4a8 = (undefined8 *)((ulonglong)local_4a8 & 0xffffffffffffff00);
                        uVar12 = 0;
                        FUN_140d3493e(local_400,*(undefined4 *)(*(longlong *)(lVar9 + 8) + 0x3090),1
                                      ,0);
                        do {
                          pdVar5 = (double *)&local_3a8;
                          if ((uVar12 & 1) == 0) {
                            pdVar5 = (double *)&local_3c0;
                          }
                          pdVar7 = (double *)&uStack_3a0;
                          if ((uVar12 & 2) == 0) {
                            pdVar7 = (double *)&uStack_3b8;
                          }
                          pdVar10 = &local_398;
                          if (uVar12 < 4) {
                            pdVar10 = &local_3b0;
                          }
                          local_430 = (float)*pdVar10;
                          local_434 = (float)*pdVar7;
                          local_438 = (float)*pdVar5;
                          local_40c = 0;
                          local_404 = 0x3f800000;
                          local_418 = 0x3f80000000000000;
                          local_410 = 0;
                          local_424 = 0x3f800000;
                          local_41c = 0;
                          local_42c = 0;
                          local_498 = &DAT_149e1e2cc;
                          local_4a0 = &local_40c;
                          local_4a8 = &local_418;
                          FUN_140d34aec(local_400,&local_438,&local_42c,&local_424);
                          uVar12 = uVar12 + 1;
                        } while (uVar12 != 8);
                        FUN_140d3489c(local_400,4,7,5);
                        FUN_140d3489c(local_400,4,6,7);
                        local_4a0 = (undefined8 *)((ulonglong)local_4a0 & 0xffffffffffffff00);
                        local_4a8 = (undefined8 *)((ulonglong)local_4a8 & 0xffffffffffffff00);
                        local_490 = 0xffffffff;
                        local_498 = (undefined4 *)CONCAT71(local_498._1_7_,1);
                        FUN_1434d8d42(local_400,local_470,&local_378,local_458);
                        FUN_1434d8cf8(local_400);
                        uVar13 = *(uint *)(local_460 + 0x150);
                        iVar15 = *(int *)(local_460 + 0x154);
                        param_3 = local_468;
                        uVar12 = local_474;
                        iVar8 = DAT_14c7607ec;
                      }
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < uVar13 + iVar15);
                  }
                }
              }
            }
            break;
          case 2:
            if ((-1 < iVar15) &&
               ((cVar1 = FUN_142d5071e(lVar4), cVar1 != '\0' && (*(int *)(lVar4 + 0x2c) == -1))))
            goto LAB_147224ae6;
            break;
          case 3:
            if ((-1 < iVar15) &&
               ((cVar1 = FUN_142d5071e(lVar4), cVar1 != '\0' && (*(int *)(lVar4 + 0x2c) != -1))))
            goto LAB_147224ae6;
            break;
          case 4:
            if ((-1 < iVar15) && ((*(byte *)(lVar4 + 0x34) & 2) != 0)) goto LAB_147224ae6;
            break;
          default:
            if (-1 < iVar15) goto LAB_147224ae6;
          }
          lVar4 = *(longlong *)(param_3 + 0x1b8);
          if (*(longlong *)(param_3 + 0x1b8) == 0) {
            lVar4 = local_440;
          }
          uVar13 = iVar14 + 1U;
          if ((int)(iVar14 + 1U) < (int)*(uint *)(param_3 + 400)) {
            uVar13 = *(uint *)(param_3 + 400);
          }
          do {
            iVar15 = (int)uVar17;
            uVar11 = uVar13;
            if (uVar13 - 1 == iVar15) break;
            uVar11 = iVar15 + 1;
            uVar16 = iVar15 + 0x20;
            if (-1 < (int)uVar11) {
              uVar16 = uVar11;
            }
            uVar17 = (ulonglong)uVar11;
          } while ((*(uint *)(lVar4 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar11 & 0x1f) & 1) == 0
                  );
          uVar17 = (ulonglong)uVar11;
        } while (uVar11 != uVar12);
      }
    }
    else {
      lVar4 = param_3 + 0x1a8;
      if (*(longlong *)(param_3 + 0x1b8) != 0) {
        lVar4 = *(longlong *)(param_3 + 0x1b8);
      }
      uVar17 = 0;
      do {
        if ((*(uint *)(lVar4 + (uVar17 >> 5) * 4) >> ((uint)uVar17 & 0x1f) & 1) != 0)
        goto LAB_1472249ae;
        uVar13 = (uint)uVar17 + 1;
        uVar17 = (ulonglong)uVar13;
      } while (uVar12 != uVar13);
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147225294 FUN_147225294 body=118 status=ok
// SIG undefined FUN_147225294(void)

undefined8 FUN_147225294(undefined8 param_1,undefined8 *param_2,undefined8 param_3,int *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_142dda456();
  if (*param_4 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1401a700c(&local_2c);
  }
  FUN_14089e406(uVar1,*param_2,param_3,local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14722530b FUN_14722530b body=2881 status=ok
// SIG undefined FUN_14722530b(void)

void FUN_14722530b(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  double *pdVar19;
  double *pdVar20;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_4b8 [32];
  undefined8 *local_498;
  longlong *local_490;
  undefined4 local_488;
  undefined1 local_480;
  longlong local_478;
  longlong *local_470;
  uint local_464;
  undefined8 local_460;
  longlong *local_458;
  longlong local_450;
  longlong local_448;
  longlong local_440;
  longlong local_438;
  longlong local_430;
  longlong local_428;
  longlong *local_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined1 local_3d0 [16];
  double local_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_390 [16];
  double local_380;
  double local_378 [4];
  double local_358;
  double dStack_350;
  double local_348;
  double local_338;
  double dStack_330;
  double local_328;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_2f8 [192];
  longlong local_238;
  undefined8 local_228;
  longlong local_118;
  undefined8 local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_460 = param_1;
  if ((DAT_14ca03318 != 0 || DAT_14ca032e0 != 0) && (*(int *)(param_3 + 0xa08) < 1)) {
    uVar18 = 0;
    local_238 = 0;
    local_228 = 0x600000000;
    local_118 = 0;
    local_108 = 0x800000000;
    local_470 = param_4;
    FUN_144920f26(local_2f8,param_2 + 0xab0,1);
    uVar8 = *(uint *)(param_3 + 400);
    if ((int)uVar8 < 1) {
LAB_14722543c:
      if ((uint)uVar18 != uVar8) {
        local_428 = param_3 + 0x1a8;
        local_464 = uVar8;
        local_450 = param_3;
        local_448 = param_2;
        do {
          iVar16 = (int)uVar18;
          local_458 = (longlong *)
                      ((longlong)(iVar16 % 0x9249) * 0x38 +
                      *(longlong *)
                       (*(longlong *)(param_3 + 0x198) + (longlong)(iVar16 / 0x9249) * 8));
          lVar11 = FUN_1471dd69a(param_3,local_458,0);
          fVar25 = (*(float *)(lVar11 + 0x1c) + *(float *)(lVar11 + 0x10)) * 0.5;
          fVar26 = (*(float *)(lVar11 + 0x18) + *(float *)(lVar11 + 0xc)) * 0.5;
          fVar29 = (*(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 8)) * 0.5;
          fVar27 = (*(float *)(lVar11 + 0x1c) - *(float *)(lVar11 + 0x10)) * 0.5;
          fVar30 = (*(float *)(lVar11 + 0x18) - *(float *)(lVar11 + 0xc)) * 0.5;
          fVar33 = (*(float *)(lVar11 + 0x14) - *(float *)(lVar11 + 8)) * 0.5;
          fVar28 = ABS((float)*(double *)(param_2 + 0x1058) - fVar25) - fVar27;
          fVar34 = ABS((float)*(double *)(param_2 + 0x1050) - fVar26) - fVar30;
          fVar32 = ABS((float)*(double *)(param_2 + 0x1048) - fVar29) - fVar33;
          if (fVar28 <= 0.0) {
            fVar28 = 0.0;
          }
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (fVar28 * fVar28 + fVar32 * fVar32 + fVar34 * fVar34 < DAT_14c7607e8 * DAT_14c7607e8) {
            local_378[2] = (double)fVar27;
            local_378[1] = (double)fVar30;
            local_378[0] = (double)fVar33;
            local_380 = (double)fVar25;
            local_390._8_8_ = (double)fVar26;
            local_390._0_8_ = (double)fVar29;
            cVar7 = FUN_144b22be2(local_2f8,local_390,local_378);
            if (cVar7 != '\0') {
              plVar24 = (longlong *)local_458[1];
              if ((longlong *)local_458[1] == (longlong *)0x0) {
                plVar24 = local_458;
              }
              if ((longlong)(int)local_458[2] != 0) {
                plVar21 = plVar24 + (int)local_458[2];
                local_420 = plVar21;
                do {
                  lVar11 = *plVar24;
                  if (((lVar11 != 0) && (*(longlong **)(lVar11 + 8) != (longlong *)0x0)) &&
                     (lVar12 = (**(code **)(**(longlong **)(lVar11 + 8) + 0xa8))(),
                     uVar6 = local_460, plVar5 = local_470, lVar12 != 0)) {
                    pdVar19 = (double *)(*(longlong *)(lVar11 + 8) + 0x100);
                    pdVar20 = local_378;
                    for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
                      *pdVar20 = *pdVar19;
                      pdVar19 = pdVar19 + 1;
                      pdVar20 = pdVar20 + 1;
                    }
                    if (DAT_14ca032e0 != 0) {
                      local_3a8 = 0;
                      uStack_3a4 = 0x3f800000;
                      uStack_3a0 = 0;
                      uStack_39c = 0x3f800000;
                      local_490 = local_470;
                      local_498 = (undefined8 *)&local_3a8;
                      FUN_147223945(local_460,lVar12 + 0x58,local_378,0);
                      local_3b8 = 0x3f800000;
                      uStack_3b4 = 0;
                      uStack_3b0 = 0;
                      uStack_3ac = 0x3f800000;
                      local_490 = plVar5;
                      local_498 = (undefined8 *)&local_3b8;
                      FUN_147223945(uVar6,lVar12 + 0x58,local_378);
                      iVar13 = *(int *)(lVar12 + 0x70);
                      if ((longlong)iVar13 != 0) {
                        lVar11 = *(longlong *)(lVar12 + 0x68);
                        lVar14 = 0;
                        do {
                          dVar2 = (double)*(float *)(lVar11 + 8 + lVar14);
                          dVar31 = (double)*(float *)(lVar11 + 4 + lVar14);
                          dVar3 = (double)*(float *)(lVar11 + lVar14);
                          dVar4 = dVar2 * dStack_330 + dVar31 * dStack_350 + dVar3 * local_378[1] +
                                  dStack_310;
                          local_390._8_4_ = SUB84(dVar4,0);
                          local_390._0_8_ =
                               dVar2 * local_338 + dVar31 * local_358 + dVar3 * local_378[0] +
                               local_318;
                          local_390._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
                          local_380 = dVar2 * local_328 + dVar3 * local_378[2] + dVar31 * local_348
                                      + local_308;
                          dVar3 = (double)*(float *)(lVar11 + 0x14 + lVar14);
                          dVar4 = (double)*(float *)(lVar11 + 0x10 + lVar14);
                          dVar31 = (double)*(float *)(lVar11 + 0xc + lVar14);
                          dVar2 = dVar3 * dStack_330 + dVar4 * dStack_350 + dVar31 * local_378[1] +
                                  dStack_310;
                          local_3d0._8_4_ = SUB84(dVar2,0);
                          local_3d0._0_8_ =
                               dVar3 * local_338 + dVar4 * local_358 + dVar31 * local_378[0] +
                               local_318;
                          local_3d0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
                          local_3c0 = local_328 * dVar3 + local_348 * dVar4 + local_378[2] * dVar31
                                      + local_308;
                          local_480 = 0;
                          local_498 = (undefined8 *)((ulonglong)local_498 & 0xffffffffffffff00);
                          local_488 = 0;
                          local_490 = (longlong *)CONCAT44(local_490._4_4_,0x3e4ccccd);
                          (**(code **)(*local_470 + 0x30))(local_470,local_390,local_3d0);
                          lVar14 = lVar14 + 0x1c;
                        } while ((longlong)iVar13 * 0x1c != lVar14);
                      }
                    }
                    plVar21 = local_420;
                    if (((DAT_14ca032e0 == 0) && (DAT_14ca03318 != 0)) &&
                       (-1 < (longlong)*(int *)((longlong)local_458 + 0x1c))) {
                      lVar11 = *(longlong *)(param_3 + 0x298);
                      lVar14 = (longlong)*(int *)((longlong)local_458 + 0x1c) * 400;
                      uVar8 = *(uint *)(lVar11 + 0x150 + lVar14);
                      iVar13 = *(int *)(lVar11 + 0x154 + lVar14);
                      if (uVar8 < iVar13 + uVar8) {
                        lVar11 = lVar11 + lVar14;
                        uVar15 = uVar8;
                        do {
                          if (((*(char *)(*(longlong *)(param_3 + 8) + 0xf4 +
                                         (longlong)(int)uVar15 * 0x180) == '\x01') &&
                              (lVar14 = *(longlong *)(param_3 + 8) + (longlong)(int)uVar15 * 0x180,
                              *(int *)(lVar14 + 0x16c) == DAT_14c7607ec || DAT_14c7607ec < 0)) &&
                             ((DAT_14c7607f0 == *(byte *)(lVar14 + 0x171) || (int)DAT_14c7607f0 < 0
                              && ((int)(uint)*(byte *)(lVar14 + 0x170) < *(int *)(lVar12 + 0x80)))))
                          {
                            local_478 = *(longlong *)(lVar12 + 0x78);
                            lVar23 = (ulonglong)*(byte *)(lVar14 + 0x170) * 0x20;
                            lVar1 = local_478 + lVar23;
                            local_440 = lVar12;
                            local_438 = lVar11;
                            uVar9 = FUN_1448eb174(lVar14 + 0x30,0xc,0);
                            uVar10 = FUN_1448eb174(lVar14,0xc,0);
                            uVar9 = FUN_144a78877(uVar10,uVar9);
                            uVar9 = FUN_144a78877(uVar9,*(undefined1 *)(lVar14 + 0x170));
                            FUN_1467ed8fe(&local_3e0,uVar9,0xff,0xff);
                            uVar6 = local_460;
                            plVar21 = local_470;
                            local_3d4 = 0x3f800000;
                            local_3f8 = local_3e0;
                            local_3f0 = local_3d8;
                            local_3ec = 0x3f800000;
                            local_490 = local_470;
                            local_498 = &local_3f8;
                            FUN_147223945(local_460,lVar1,local_378,3);
                            local_408 = 0x3f000000;
                            uStack_404 = 0x3f000000;
                            uStack_400 = 0x3f000000;
                            uStack_3fc = 0x3f800000;
                            local_490 = plVar21;
                            local_498 = (undefined8 *)&local_408;
                            FUN_147223945(uVar6,lVar1,local_378,4);
                            lVar11 = local_478;
                            local_418 = 0;
                            uStack_414 = 0;
                            uStack_410 = 0x3f800000;
                            uStack_40c = 0x3f800000;
                            local_490 = plVar21;
                            local_498 = (undefined8 *)&local_418;
                            FUN_147223945(uVar6,lVar1,local_378,2);
                            lVar12 = (longlong)*(int *)(lVar11 + 0x18 + lVar23);
                            if (lVar12 != 0) {
                              local_430 = *(longlong *)(lVar11 + 0x10 + lVar23);
                              local_478 = lVar12 * 0x1c;
                              lVar11 = 0;
                              do {
                                dVar2 = (double)*(float *)(local_430 + 8 + lVar11);
                                dVar31 = (double)*(float *)(local_430 + 4 + lVar11);
                                dVar4 = (double)*(float *)(local_430 + lVar11);
                                dVar3 = dVar2 * dStack_330 +
                                        dVar31 * dStack_350 + dVar4 * local_378[1] + dStack_310;
                                local_390._8_4_ = SUB84(dVar3,0);
                                local_390._0_8_ =
                                     dVar2 * local_338 + dVar31 * local_358 + dVar4 * local_378[0] +
                                     local_318;
                                local_390._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
                                local_380 = dVar2 * local_328 +
                                            dVar4 * local_378[2] + dVar31 * local_348 + local_308;
                                dVar2 = (double)*(float *)(local_430 + 0x14 + lVar11);
                                dVar3 = (double)*(float *)(local_430 + 0x10 + lVar11);
                                dVar4 = (double)*(float *)(local_430 + 0xc + lVar11);
                                dVar31 = dVar2 * dStack_330 +
                                         dVar3 * dStack_350 + dVar4 * local_378[1] + dStack_310;
                                local_3d0._8_4_ = SUB84(dVar31,0);
                                local_3d0._0_8_ =
                                     dVar2 * local_338 + dVar3 * local_358 + dVar4 * local_378[0] +
                                     local_318;
                                local_3d0._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
                                local_3c0 = local_328 * dVar2 +
                                            local_348 * dVar3 + local_378[2] * dVar4 + local_308;
                                puVar22 = &DAT_149e1e2f8;
                                if (*(char *)(local_430 + 0x18 + lVar11) != '\0') {
                                  puVar22 = (undefined8 *)&DAT_149e1dd34;
                                }
                                local_480 = 0;
                                local_498 = (undefined8 *)
                                            ((ulonglong)local_498 & 0xffffffffffffff00);
                                local_488 = 0;
                                local_490 = (longlong *)CONCAT44(local_490._4_4_,0x3e4ccccd);
                                (**(code **)(*plVar21 + 0x30))(plVar21,local_390,local_3d0,puVar22);
                                lVar11 = lVar11 + 0x1c;
                              } while (local_478 != lVar11);
                            }
                            uVar8 = *(uint *)(local_438 + 0x150);
                            iVar13 = *(int *)(local_438 + 0x154);
                            param_2 = local_448;
                            lVar11 = local_438;
                            lVar12 = local_440;
                            param_3 = local_450;
                          }
                          uVar15 = uVar15 + 1;
                          plVar21 = local_420;
                        } while (uVar15 < uVar8 + iVar13);
                      }
                    }
                  }
                  plVar24 = plVar24 + 1;
                } while (plVar24 != plVar21);
              }
            }
          }
          lVar11 = *(longlong *)(param_3 + 0x1b8);
          if (*(longlong *)(param_3 + 0x1b8) == 0) {
            lVar11 = local_428;
          }
          uVar8 = iVar16 + 1U;
          if ((int)(iVar16 + 1U) < (int)*(uint *)(param_3 + 400)) {
            uVar8 = *(uint *)(param_3 + 400);
          }
          do {
            iVar16 = (int)uVar18;
            uVar15 = uVar8;
            if (uVar8 - 1 == iVar16) break;
            uVar15 = iVar16 + 1;
            uVar17 = iVar16 + 0x20;
            if (-1 < (int)uVar15) {
              uVar17 = uVar15;
            }
            uVar18 = (ulonglong)uVar15;
          } while ((*(uint *)(lVar11 + (longlong)((int)uVar17 >> 5) * 4) >> (uVar15 & 0x1f) & 1) ==
                   0);
          uVar18 = (ulonglong)uVar15;
        } while (uVar15 != local_464);
      }
    }
    else {
      lVar11 = param_3 + 0x1a8;
      if (*(longlong *)(param_3 + 0x1b8) != 0) {
        lVar11 = *(longlong *)(param_3 + 0x1b8);
      }
      uVar18 = 0;
      do {
        if ((*(uint *)(lVar11 + (uVar18 >> 5) * 4) >> ((uint)uVar18 & 0x1f) & 1) != 0)
        goto LAB_14722543c;
        uVar15 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar15;
      } while (uVar8 != uVar15);
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    if (local_238 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_4b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147225e4d FUN_147225e4d body=53 status=ok
// SIG undefined FUN_147225e4d(void)

bool FUN_147225e4d(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_144a7ebcb();
  if ((cVar1 != '\0') && (cVar1 = FUN_141767a62(param_1), cVar1 != '\0')) {
    return *(int *)(DAT_14ca03a00 + 4) != 0;
  }
  return false;
}



// FUNCTION 147225e82 FUN_147225e82 body=56 status=ok
// SIG undefined FUN_147225e82(void)

bool FUN_147225e82(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_14ca84ef5 == '\x01') && ((DAT_14ca84ef7 & 1) != 0)) {
    iVar1 = FUN_142d11e9a();
    bVar2 = true;
    if (iVar1 == 0) {
      bVar2 = *(int *)(DAT_14ca03a78 + 4) != 0;
    }
  }
  return bVar2;
}



// FUNCTION 147225eba FUN_147225eba body=42 status=ok
// SIG undefined FUN_147225eba(void)

void FUN_147225eba(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147225eec FUN_147225eec body=96 status=ok
// SIG undefined FUN_147225eec(void)

undefined8 FUN_147225eec(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4dc7c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca06b38,1);
  return uVar3;
}



// FUNCTION 147225f4c FUN_147225f4c body=52 status=ok
// SIG undefined FUN_147225f4c(void)

void FUN_147225f4c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147225f80 FUN_147225f80 body=42 status=ok
// SIG undefined FUN_147225f80(void)

void FUN_147225f80(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}


