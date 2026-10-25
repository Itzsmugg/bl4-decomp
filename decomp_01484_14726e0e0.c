// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14726e0e0 FUN_14726e0e0 body=38 status=ok
// SIG undefined FUN_14726e0e0(void)

undefined8 FUN_14726e0e0(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e106 FUN_14726e106 body=163 status=ok
// SIG undefined FUN_14726e106(void)

void FUN_14726e106(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e689be();
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
  FUN_142e68aa6(param_1,param_2);
  return;
}



// FUNCTION 14726e1a9 FUN_14726e1a9 body=374 status=ok
// SIG undefined FUN_14726e1a9(void)

void FUN_14726e1a9(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14726e320 FUN_14726e320 body=85 status=ok
// SIG undefined FUN_14726e320(void)

undefined8 * FUN_14726e320(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR__purecall_14a222c38;
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e376 FUN_14726e376 body=29 status=ok
// SIG undefined FUN_14726e376(void)

undefined8 FUN_14726e376(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e394 FUN_14726e394 body=384 status=ok
// SIG undefined FUN_14726e394(void)

void FUN_14726e394(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca1b968;
  if (DAT_14ca1b968 != 0) {
    LOCK();
    *(int *)(DAT_14ca1b968 + 8) = *(int *)(DAT_14ca1b968 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca1b920;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2a12f0;
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



// FUNCTION 14726e516 FUN_14726e516 body=38 status=ok
// SIG undefined FUN_14726e516(void)

undefined8 FUN_14726e516(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e53c FUN_14726e53c body=163 status=ok
// SIG undefined FUN_14726e53c(void)

void FUN_14726e53c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e68f0a();
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
  FUN_142e68ff2(param_1,param_2);
  return;
}



// FUNCTION 14726e5df FUN_14726e5df body=374 status=ok
// SIG undefined FUN_14726e5df(void)

void FUN_14726e5df(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14726e756 FUN_14726e756 body=29 status=ok
// SIG undefined FUN_14726e756(void)

undefined8 FUN_14726e756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e774 FUN_14726e774 body=384 status=ok
// SIG undefined FUN_14726e774(void)

void FUN_14726e774(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca1b9f0;
  if (DAT_14ca1b9f0 != 0) {
    LOCK();
    *(int *)(DAT_14ca1b9f0 + 8) = *(int *)(DAT_14ca1b9f0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca1b9a8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2a1310;
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



// FUNCTION 14726e8f6 FUN_14726e8f6 body=38 status=ok
// SIG undefined FUN_14726e8f6(void)

undefined8 FUN_14726e8f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726e91c FUN_14726e91c body=163 status=ok
// SIG undefined FUN_14726e91c(void)

void FUN_14726e91c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e69226();
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
  FUN_142e6930e(param_1,param_2);
  return;
}



// FUNCTION 14726e9bf FUN_14726e9bf body=374 status=ok
// SIG undefined FUN_14726e9bf(void)

void FUN_14726e9bf(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14726eb36 FUN_14726eb36 body=29 status=ok
// SIG undefined FUN_14726eb36(void)

undefined8 FUN_14726eb36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726eb53 FUN_14726eb53 body=309 status=ok
// SIG undefined FUN_14726eb53(void)

void FUN_14726eb53(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
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
  FUN_145e8bc74();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14ca1ba30,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = 0;
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
  FUN_145e8bc74();
  FUN_14726ec8a(param_1,param_2,param_4,&local_c8);
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



// FUNCTION 14726ec8a FUN_14726ec8a body=258 status=ok
// SIG undefined FUN_14726ec8a(void)

void FUN_14726ec8a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_14726ed8c(uVar5,param_2,param_3,uVar3,param_4);
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



// FUNCTION 14726ed8c FUN_14726ed8c body=229 status=ok
// SIG undefined FUN_14726ed8c(void)

undefined8 *
FUN_14726ed8c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  local_28 = DAT_14ca1ba78;
  if (DAT_14ca1ba78 != 0) {
    LOCK();
    *(int *)(DAT_14ca1ba78 + 8) = *(int *)(DAT_14ca1ba78 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca1ba30;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2a1330;
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



// FUNCTION 14726ee72 FUN_14726ee72 body=88 status=ok
// SIG undefined FUN_14726ee72(void)

undefined8 * FUN_14726ee72(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2a1330;
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



// FUNCTION 14726eeca FUN_14726eeca body=90 status=ok
// SIG undefined FUN_14726eeca(void)

void FUN_14726eeca(undefined8 *param_1,undefined8 param_2)

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
  FUN_14726ef24(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 14726ef24 FUN_14726ef24 body=161 status=ok
// SIG undefined FUN_14726ef24(void)

void FUN_14726ef24(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145e8bc74();
  FUN_142e69574(param_1,param_2,param_3);
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
  FUN_142e69523(param_1,param_2);
  return;
}



// FUNCTION 14726efc5 FUN_14726efc5 body=374 status=ok
// SIG undefined FUN_14726efc5(void)

void FUN_14726efc5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14726f13b FUN_14726f13b body=179 status=ok
// SIG undefined FUN_14726f13b(void)

void FUN_14726f13b(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[1] != 0) {
    plVar2 = (longlong *)*param_1;
    plVar1 = plVar2 + (int)param_1[1];
    do {
      if (*plVar2 != 0) {
        local_58 = (undefined4)*param_2;
        uStack_54 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_50 = (undefined4)param_2[1];
        uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
        FUN_14002f804(*plVar2,&local_58,0);
      }
      if (param_2[1] != -1) {
        if (param_2[1] == 0) break;
        QueryPerformanceCounter(&local_48);
        if ((ulonglong)(param_2[1] + *param_2) < (ulonglong)local_48) break;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14726f1f0 FUN_14726f1f0 body=212 status=ok
// SIG undefined FUN_14726f1f0(void)

undefined8 * FUN_14726f1f0(void)

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
    goto LAB_14726f213;
  }
  puVar5 = (undefined8 *)*puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    uVar2 = FUN_14470efbc(&DAT_14c896180);
    if (uVar2 == 0) {
      puVar3[1] = 0;
LAB_14726f297:
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
      goto LAB_14726f236;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar2 >> 0xe) * 8) + 8 +
              (ulonglong)(uVar2 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar2);
    puVar3[1] = puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_14726f297;
  }
  else {
    puVar3[1] = puVar5;
    puVar4 = puVar3;
LAB_14726f236:
    *puVar4 = 0;
  }
  *(undefined4 *)(puVar3 + 2) = 0x100;
  iVar1 = 0xff;
LAB_14726f213:
  puVar3[1] = *puVar5;
  *(int *)(puVar3 + 2) = iVar1;
  return puVar5;
}



// FUNCTION 14726f2c4 FUN_14726f2c4 body=40 status=ok
// SIG undefined FUN_14726f2c4(void)

undefined8 FUN_14726f2c4(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_14726f35e(param_1);
  }
  return param_1;
}



// FUNCTION 14726f2ec FUN_14726f2ec body=75 status=ok
// SIG undefined FUN_14726f2ec(void)

void FUN_14726f2ec(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))();
  plVar3 = *(longlong **)(param_1 + 0xb0);
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
                    /* WARNING: Could not recover jumptable at 0x00014726f32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14726f338 FUN_14726f338 body=38 status=ok
// SIG undefined FUN_14726f338(void)

undefined8 FUN_14726f338(undefined8 param_1,int param_2)

{
  FUN_144afd1ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726f35e FUN_14726f35e body=145 status=ok
// SIG undefined FUN_14726f35e(void)

void FUN_14726f35e(longlong *param_1)

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



// FUNCTION 14726f3f0 FUN_14726f3f0 body=198 status=ok
// SIG undefined FUN_14726f3f0(void)

void FUN_14726f3f0(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_2[1];
  UNLOCK();
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 == 0) {
    iVar9 = 0;
  }
  else {
    lVar3 = *param_2;
    lVar8 = 0;
    lVar1 = param_1 + 0x28;
    iVar9 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if ((lVar4 == 0) || (cVar6 = FUN_1456bb142(lVar4 + 0x88,param_1), cVar6 == '\0')) {
        iVar9 = iVar9 + 1;
      }
      else {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
        if (param_3 == '\0') {
          iVar2 = *(int *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
            FUN_144724bd8(lVar1,iVar2);
          }
          lVar7 = *(longlong *)(param_1 + 0x30);
          if (*(longlong *)(param_1 + 0x30) == 0) {
            lVar7 = lVar1;
          }
          *(longlong *)(lVar7 + (longlong)iVar2 * 8) = lVar4;
        }
        else {
          FUN_1456bb1d4(lVar1,lVar4);
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
  }
  LOCK();
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar9;
  UNLOCK();
  return;
}



// FUNCTION 14726f4b6 FUN_14726f4b6 body=26 status=ok
// SIG undefined FUN_14726f4b6(void)

void FUN_14726f4b6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_142e6965a(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
  return;
}



// FUNCTION 14726f4d0 FUN_14726f4d0 body=165 status=ok
// SIG undefined FUN_14726f4d0(void)

void FUN_14726f4d0(undefined8 *param_1)

{
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined2 *)((longlong)param_1 + 0x14c) = 0;
  return;
}



// FUNCTION 14726f576 FUN_14726f576 body=42 status=ok
// SIG undefined FUN_14726f576(void)

longlong FUN_14726f576(longlong param_1,int param_2)

{
  FUN_14726f5a0(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14726f5a0 FUN_14726f5a0 body=156 status=ok
// SIG undefined FUN_14726f5a0(void)

void FUN_14726f5a0(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_14726f63c(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  FUN_1400462c0(param_1 + 0x11);
  FUN_1448eb03c(param_1 + 7);
  FUN_1400200e4(param_1 + 0xb);
  FUN_14004657c(param_1 + 7);
  FUN_142e69932(param_1 + 5);
  FUN_142e69932(param_1 + 3);
  FUN_144b0f6c2(param_1[1],(int)param_1[2]);
  FUN_142e69996(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014726f631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 14726f63c FUN_14726f63c body=102 status=ok
// SIG undefined FUN_14726f63c(void)

void FUN_14726f63c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_1400462c0(param_1 + 0x90);
  FUN_1448eb03c(param_1 + 0x40);
  FUN_1400200e4(param_1 + 0x60);
  FUN_14004657c(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14726f6a2 FUN_14726f6a2 body=49 status=ok
// SIG undefined FUN_14726f6a2(void)

void FUN_14726f6a2(longlong param_1,int param_2,int param_3)

{
  if (param_3 < param_2) {
    FUN_142e699fa(param_1,0,param_2,0x200);
    param_3 = param_2;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14726f6d3 FUN_14726f6d3 body=60 status=ok
// SIG undefined FUN_14726f6d3(void)

void FUN_14726f6d3(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_144aab0c2(param_1,param_2);
    param_1 = param_1 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return;
}



// FUNCTION 14726f710 FUN_14726f710 body=214 status=ok
// SIG undefined FUN_14726f710(void)

void FUN_14726f710(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_144a79e9a(param_2,1,*(undefined4 *)(param_2 + 0x18));
  iVar2 = FUN_144a79e9a(param_2 + 0x20,1,*(undefined4 *)(param_2 + 0x38));
  *(int *)(param_1 + 0x154) = iVar2 + iVar1 + 2;
  iVar1 = FUN_144a79e9a(param_3 + 0x20,1,*(undefined4 *)(param_3 + 0x38));
  *(int *)(param_1 + 0x158) = iVar1 + 1;
  iVar1 = FUN_144a79e9a(param_2,1,*(undefined4 *)(param_2 + 0x18));
  *(int *)(param_1 + 0x150) = iVar1 + 1;
  FUN_14726f7e6(param_1 + 0x18);
  if (*(int *)(param_1 + 0x154) != 0) {
    uVar3 = 0;
    do {
      LOCK();
      *(undefined1 *)(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar3) = 0;
      UNLOCK();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x154));
  }
  FUN_14726f7e6(param_1 + 0x28);
  if (*(int *)(param_1 + 0x158) != 0) {
    uVar3 = 0;
    do {
      LOCK();
      *(undefined1 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar3) = 0;
      UNLOCK();
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x158));
  }
  return;
}



// FUNCTION 14726f7e6 FUN_14726f7e6 body=71 status=ok
// SIG undefined FUN_14726f7e6(void)

void FUN_14726f7e6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14726f82e();
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
      FUN_14726f884();
      return;
    }
  }
  return;
}



// FUNCTION 14726f82e FUN_14726f82e body=85 status=ok
// SIG undefined FUN_14726f82e(void)

void FUN_14726f82e(longlong param_1,int param_2)

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
  FUN_142e6ac4c();
  return;
}



// FUNCTION 14726f884 FUN_14726f884 body=66 status=ok
// SIG undefined FUN_14726f884(void)

void FUN_14726f884(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((0x3fff < (uint)(iVar2 - iVar1)) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_142e6ac4c();
      return;
    }
  }
  return;
}



// FUNCTION 14726f8c6 FUN_14726f8c6 body=78 status=ok
// SIG undefined FUN_14726f8c6(void)

longlong FUN_14726f8c6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    FUN_14726f954(param_1);
    if (*(longlong *)(param_2 + 0x50) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 0x48);
      uVar3 = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = uVar1;
      *(undefined4 *)(param_1 + 0x48) = uVar2;
      *(undefined4 *)(param_1 + 0x4c) = uVar3;
    }
    FUN_142e6aef0(param_1 + 0x50,param_2 + 0x50);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)(param_2 + 0x58) = 0;
  }
  return param_1;
}



// FUNCTION 14726f914 FUN_14726f914 body=63 status=ok
// SIG undefined FUN_14726f914(void)

void FUN_14726f914(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x58)) {
    FUN_1448eb03c(param_1);
    *(undefined4 *)(param_1 + 0x58) = 1;
    FUN_1402bb5a0(param_1);
    return;
  }
  FUN_14726fa06(param_1);
  FUN_1448eb03c(param_1);
  return;
}



// FUNCTION 14726f954 FUN_14726f954 body=124 status=ok
// SIG undefined FUN_14726f954(void)

longlong FUN_14726f954(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    FUN_142e6ae0c(param_1);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_2 + 0x20) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 0x18);
      uVar3 = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    FUN_142e6ae7e(param_1 + 0x20,param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x30) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 14726f9d0 FUN_14726f9d0 body=31 status=ok
// SIG undefined FUN_14726f9d0(void)

void FUN_14726f9d0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_142e699fa(param_1,*(undefined4 *)(param_1 + 8),0,0x200);
    return;
  }
  return;
}



// FUNCTION 14726f9f0 FUN_14726f9f0 body=21 status=ok
// SIG undefined FUN_14726f9f0(void)

void FUN_14726f9f0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_142e6ac4c(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14726fa06 FUN_14726fa06 body=333 status=ok
// SIG undefined FUN_14726fa06(void)

void FUN_14726fa06(longlong *param_1)

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
  plVar5 = param_1 + 8;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[10];
  }
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 7;
  }
  iVar6 = (int)param_1[0xb];
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
      FUN_144b14e04(&local_50);
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
        FUN_144b14e04(&local_70);
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
    } while (lVar3 < (int)param_1[0xb]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14726fb54 FUN_14726fb54 body=119 status=ok
// SIG undefined FUN_14726fb54(void)

void FUN_14726fb54(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_145c2d1ee(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14726fbcc FUN_14726fbcc body=93 status=ok
// SIG undefined FUN_14726fbcc(void)

void FUN_14726fbcc(longlong param_1,int param_2)

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
  FUN_142e6965a();
  return;
}



// FUNCTION 14726fc2a FUN_14726fc2a body=634 status=ok
// SIG undefined FUN_14726fc2a(void)

undefined4 *
FUN_14726fc2a(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
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
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar12 + lVar11 * 4) * 0x48)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar13 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar13 + lVar11 * 4);
        goto LAB_14726fd13;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5) <
      (ulonglong)(uVar1 * 3)) {
LAB_14726fcd2:
    uVar5 = FUN_14726ff98(param_1,local_80,param_5,param_3);
    FUN_14726fea6(param_1,uVar5,param_3);
    *param_6 = 0;
LAB_14726fd13:
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
          FUN_14726fea6(param_1,puVar9[(int)uVar4]);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar1);
      if (plVar2 != (longlong *)0x0) {
        FUN_1400020a8(plVar2);
      }
      if (local_88 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14726fcd2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 14726fea6 FUN_14726fea6 body=241 status=ok
// SIG undefined FUN_14726fea6(void)

void FUN_14726fea6(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 14726ff98 FUN_14726ff98 body=438 status=ok
// SIG undefined FUN_14726ff98(void)

/* WARNING: Removing unreachable block (ram,0x0001472700db) */
/* WARNING: Removing unreachable block (ram,0x0001472700ea) */

int FUN_14726ff98(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined2 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_1[7] < 1) {
    iVar4 = (int)param_1[1];
    local_80 = *param_2;
    FUN_147270150();
    lVar3 = param_1[1];
    uVar5 = (int)lVar3 + 1;
    *(uint *)(param_1 + 1) = uVar5;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar5) {
      FUN_1472701dc(param_1);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)lVar3 * 0x48);
    *puVar1 = local_80;
    puVar1[1] = local_78;
    puVar1[3] = 0;
    if (local_68 == 0) {
      *(undefined4 *)(puVar1 + 2) = local_70;
    }
    puVar1[3] = local_68;
    *(undefined4 *)(puVar1 + 4) = (undefined4)local_60;
    *(undefined4 *)((longlong)puVar1 + 0x24) = local_60._4_4_;
    puVar1[6] = 0;
    if (local_50 == 0) {
      *(undefined2 *)(puVar1 + 5) = local_58;
    }
    puVar1[6] = local_50;
    *(undefined4 *)(puVar1 + 7) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar1 + 0x3c) = local_48._4_4_;
    *(undefined1 *)(puVar1 + 8) = local_40;
    local_48 = 0x100000000;
    local_50 = 0;
    local_60 = 0x100000000;
    local_68 = 0;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_1447602e0(param_1 + 2,iVar2);
    }
    puVar6 = (undefined4 *)((longlong)iVar2 * 4 + param_1[2]);
  }
  else {
    iVar4 = FUN_14020b4c6(param_1 + 4);
    puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x48);
    *puVar1 = *param_2;
    FUN_147270150(puVar1 + 1,param_3);
    puVar6 = (undefined4 *)((longlong)iVar4 * 4 + param_1[2]);
  }
  *puVar6 = param_4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147270150 FUN_147270150 body=139 status=ok
// SIG undefined FUN_147270150(void)

void FUN_147270150(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[2] = 0;
  lVar1 = param_2[2];
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    lVar1 = param_2[2];
  }
  param_1[2] = lVar1;
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0x100000000;
  param_1[5] = 0;
  lVar1 = param_2[5];
  if (lVar1 == 0) {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
    lVar1 = param_2[5];
  }
  param_1[5] = lVar1;
  param_2[5] = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_2[6] = 0x100000000;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return;
}



// FUNCTION 1472701dc FUN_1472701dc body=147 status=ok
// SIG undefined FUN_1472701dc(void)

void FUN_1472701dc(longlong param_1,int param_2)

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



// FUNCTION 147270270 FUN_147270270 body=87 status=ok
// SIG undefined FUN_147270270(void)

void FUN_147270270(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1447f872e(param_1 + 4);
  *(undefined4 *)(param_1[2] + (longlong)param_2 * 4) = 0x80000000;
  lVar1 = *param_1 + (longlong)param_2 * 0x48;
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472702c8 FUN_1472702c8 body=94 status=ok
// SIG undefined FUN_1472702c8(void)

void FUN_1472702c8(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x30c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
    if (*(void **)((longlong)param_1 + 0x300) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x300),
              (longlong)*(int *)((longlong)param_1 + 0x308) * 0x18);
      FUN_1446efa72((longlong)param_1 + 0x300,0,0,0x18);
      return;
    }
  }
  return;
}



// FUNCTION 147270326 FUN_147270326 body=149 status=ok
// SIG undefined FUN_147270326(void)

void FUN_147270326(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x300);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x300,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x300),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x300,param_2,param_3,0x18);
  return;
}



// FUNCTION 1472703bc FUN_1472703bc body=136 status=ok
// SIG undefined FUN_1472703bc(void)

void FUN_1472703bc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x308);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x30c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x30c) = iVar5;
    FUN_147270326(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147270446 FUN_147270446 body=29 status=ok
// SIG undefined FUN_147270446(void)

undefined8 FUN_147270446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147270464 FUN_147270464 body=384 status=ok
// SIG undefined FUN_147270464(void)

void FUN_147270464(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  uVar14 = (undefined4)CONCAT62(uVar15,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x14);
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
  local_50 = DAT_14ca1bc10;
  if (DAT_14ca1bc10 != 0) {
    LOCK();
    *(int *)(DAT_14ca1bc10 + 8) = *(int *)(DAT_14ca1bc10 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca1bbc8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2a13a0;
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



// FUNCTION 1472705e6 FUN_1472705e6 body=38 status=ok
// SIG undefined FUN_1472705e6(void)

undefined8 FUN_1472705e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14727060c FUN_14727060c body=163 status=ok
// SIG undefined FUN_14727060c(void)

void FUN_14727060c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e6b144();
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
  FUN_142e6b22c(param_1,param_2);
  return;
}



// FUNCTION 1472706af FUN_1472706af body=374 status=ok
// SIG undefined FUN_1472706af(void)

void FUN_1472706af(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147270826 FUN_147270826 body=29 status=ok
// SIG undefined FUN_147270826(void)

undefined8 FUN_147270826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147270844 FUN_147270844 body=384 status=ok
// SIG undefined FUN_147270844(void)

void FUN_147270844(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  uVar14 = (undefined4)CONCAT62(uVar15,0x12);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar14 = (undefined4)CONCAT62(uVar15,0x14);
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
  local_50 = DAT_14ca1bb00;
  if (DAT_14ca1bb00 != 0) {
    LOCK();
    *(int *)(DAT_14ca1bb00 + 8) = *(int *)(DAT_14ca1bb00 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca1bab8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2a13c0;
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



// FUNCTION 1472709c6 FUN_1472709c6 body=38 status=ok
// SIG undefined FUN_1472709c6(void)

undefined8 FUN_1472709c6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472709ec FUN_1472709ec body=163 status=ok
// SIG undefined FUN_1472709ec(void)

void FUN_1472709ec(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142e6b460();
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
  FUN_142e6b548(param_1,param_2);
  return;
}



// FUNCTION 147270a8f FUN_147270a8f body=374 status=ok
// SIG undefined FUN_147270a8f(void)

void FUN_147270a8f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147270c06 FUN_147270c06 body=44 status=ok
// SIG undefined FUN_147270c06(void)

void FUN_147270c06(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147270c70 FUN_147270c70 body=96 status=ok
// SIG undefined FUN_147270c70(void)

undefined8 FUN_147270c70(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f52814();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca214d0,1);
  return uVar3;
}



// FUNCTION 147270cd0 FUN_147270cd0 body=138 status=ok
// SIG undefined FUN_147270cd0(void)

void * FUN_147270cd0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147270d5a FUN_147270d5a body=44 status=ok
// SIG undefined FUN_147270d5a(void)

void FUN_147270d5a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147270da8 FUN_147270da8 body=96 status=ok
// SIG undefined FUN_147270da8(void)

undefined8 FUN_147270da8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8c754();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21558,1);
  return uVar3;
}



// FUNCTION 147270e08 FUN_147270e08 body=138 status=ok
// SIG undefined FUN_147270e08(void)

void * FUN_147270e08(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147270e92 FUN_147270e92 body=118 status=ok
// SIG undefined FUN_147270e92(void)

void FUN_147270e92(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147282c60(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147282ce6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147270f0a FUN_147270f0a body=44 status=ok
// SIG undefined FUN_147270f0a(void)

void FUN_147270f0a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147270f4a FUN_147270f4a body=96 status=ok
// SIG undefined FUN_147270f4a(void)

undefined8 FUN_147270f4a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159789e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca215e0,1);
  return uVar3;
}



// FUNCTION 147270faa FUN_147270faa body=138 status=ok
// SIG undefined FUN_147270faa(void)

void * FUN_147270faa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271034 FUN_147271034 body=44 status=ok
// SIG undefined FUN_147271034(void)

void FUN_147271034(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14727106c FUN_14727106c body=96 status=ok
// SIG undefined FUN_14727106c(void)

undefined8 FUN_14727106c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158536c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21668,1);
  return uVar3;
}



// FUNCTION 1472710cc FUN_1472710cc body=138 status=ok
// SIG undefined FUN_1472710cc(void)

void * FUN_1472710cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271156 FUN_147271156 body=44 status=ok
// SIG undefined FUN_147271156(void)

void FUN_147271156(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14727118e FUN_14727118e body=96 status=ok
// SIG undefined FUN_14727118e(void)

undefined8 FUN_14727118e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141592600();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca216f0,1);
  return uVar3;
}



// FUNCTION 1472711ee FUN_1472711ee body=138 status=ok
// SIG undefined FUN_1472711ee(void)

void * FUN_1472711ee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271278 FUN_147271278 body=44 status=ok
// SIG undefined FUN_147271278(void)

void FUN_147271278(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472712fc FUN_1472712fc body=96 status=ok
// SIG undefined FUN_1472712fc(void)

undefined8 FUN_1472712fc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8ccc4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21778,1);
  return uVar3;
}



// FUNCTION 14727135c FUN_14727135c body=138 status=ok
// SIG undefined FUN_14727135c(void)

void * FUN_14727135c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472713e6 FUN_1472713e6 body=1839 status=ok
// SIG undefined FUN_1472713e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1472713e6(void)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  void *_Src;
  uint uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined1 local_4c [8];
  undefined4 local_44;
  undefined1 *local_40;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca1d380) && (FUN_144b3d300(&DAT_14ca1d380), DAT_14ca1d380 == -1)) {
    _DAT_14ca1d350 = 0;
    _DAT_14ca1d358 = 0;
    DAT_14ca1d330 = 0;
    _DAT_14ca1d338 = 0;
    _DAT_14ca1d35c = 0xffffffff00000080;
    DAT_14ca1d364 = 0;
    DAT_14ca1d370 = (undefined *)0x0;
    DAT_14ca1d378 = 0;
    atexit(FUN_142e709d1);
    _Init_thread_footer(&DAT_14ca1d380);
  }
  if (DAT_14ca1d338 == DAT_14ca1d364) {
    local_44 = 0;
    FUN_1446f470e(local_4c,L"Radiance",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 1;
    FUN_1446f470e(local_4c,L"WorldNormal",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 2;
    FUN_1446f470e(local_4c,L"WorldSmoothNormal",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 3;
    FUN_1446f470e(local_4c,L"WorldGeoNormal",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 4;
    FUN_1446f470e(local_4c,L"BaseColor",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 5;
    FUN_1446f470e(local_4c,L"DiffuseColor",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 6;
    FUN_1446f470e(local_4c,L"SpecularColor",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 7;
    FUN_1446f470e(local_4c,L"Opacity",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 8;
    FUN_1446f470e(local_4c,L"Metallic",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 9;
    FUN_1446f470e(local_4c,L"Specular",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 10;
    FUN_1446f470e(local_4c,L"Roughness",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0xb;
    FUN_1446f470e(local_4c,&DAT_14a2a7780,1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0xc;
    FUN_1446f470e(local_4c,L"ShadingModel",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0xd;
    FUN_1446f470e(local_4c,L"LightingChannelMask",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0xe;
    FUN_1446f470e(local_4c,L"CustomData0",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0xf;
    FUN_1446f470e(local_4c,L"CustomData1",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x10;
    FUN_1446f470e(local_4c,L"WorldPosition",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x11;
    FUN_1446f470e(local_4c,L"PrimaryRays",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x12;
    FUN_1446f470e(local_4c,L"WorldTangent",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x13;
    FUN_1446f470e(local_4c,L"Anisotropy",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x14;
    FUN_1446f470e(local_4c,L"LightGridCount",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
    local_44 = 0x15;
    FUN_1446f470e(local_4c,L"DecalGridCount",1);
    local_40 = local_4c;
    local_38 = &local_44;
    FUN_147282d82(&DAT_14ca1d330,local_2c,&local_40,0);
  }
  local_40 = (undefined1 *)0x0;
  uVar2 = *(uint *)(DAT_14ca1cdd8 + 0x18);
  _Src = *(void **)(DAT_14ca1cdd8 + 0x10);
  local_38 = (undefined4 *)CONCAT44(local_38._4_4_,uVar2);
  if ((longlong)(int)uVar2 == 0) {
    local_38 = (undefined4 *)(ulonglong)uVar2;
    uVar6 = 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_40,uVar2,0);
    memcpy(local_40,_Src,(longlong)(int)uVar2 * 2);
    uVar6 = 0xffffffff;
    if (1 < (int)local_38) {
      FUN_1446f470e(&local_58,local_40,0);
      if (DAT_14ca1d338 != DAT_14ca1d364) {
        uVar2 = (uint)((ulonglong)local_58 >> 0x10);
        uVar4 = (uint)local_58 & 0xffff;
        puVar5 = &DAT_14ca1d368;
        if (DAT_14ca1d370 != (undefined *)0x0) {
          puVar5 = DAT_14ca1d370;
        }
        iVar3 = *(int *)(puVar5 + (ulonglong)
                                  (DAT_14ca1d378 - 1U &
                                  (int)((ulonglong)local_58 >> 0x20) +
                                  ((uint)local_58 << 0x10 | uVar4) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
        while (iVar3 != -1) {
          plVar1 = (longlong *)(DAT_14ca1d330 + (longlong)iVar3 * 0x14);
          if (*plVar1 == local_58) {
            if (plVar1 != (longlong *)0x0) {
              uVar6 = (undefined4)plVar1[1];
            }
            break;
          }
          iVar3 = *(int *)((longlong)plVar1 + 0xc);
        }
      }
    }
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147271b16 FUN_147271b16 body=44 status=ok
// SIG undefined FUN_147271b16(void)

void FUN_147271b16(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147271b4a FUN_147271b4a body=96 status=ok
// SIG undefined FUN_147271b4a(void)

undefined8 FUN_147271b4a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f52e0a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21810,1);
  return uVar3;
}



// FUNCTION 147271baa FUN_147271baa body=138 status=ok
// SIG undefined FUN_147271baa(void)

void * FUN_147271baa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271c34 FUN_147271c34 body=44 status=ok
// SIG undefined FUN_147271c34(void)

void FUN_147271c34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147271c68 FUN_147271c68 body=96 status=ok
// SIG undefined FUN_147271c68(void)

undefined8 FUN_147271c68(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8d234();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21898,1);
  return uVar3;
}



// FUNCTION 147271cc8 FUN_147271cc8 body=138 status=ok
// SIG undefined FUN_147271cc8(void)

void * FUN_147271cc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271d52 FUN_147271d52 body=44 status=ok
// SIG undefined FUN_147271d52(void)

void FUN_147271d52(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147271d86 FUN_147271d86 body=96 status=ok
// SIG undefined FUN_147271d86(void)

undefined8 FUN_147271d86(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dd101a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21920,1);
  return uVar3;
}



// FUNCTION 147271de6 FUN_147271de6 body=138 status=ok
// SIG undefined FUN_147271de6(void)

void * FUN_147271de6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271e70 FUN_147271e70 body=44 status=ok
// SIG undefined FUN_147271e70(void)

void FUN_147271e70(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147271eaa FUN_147271eaa body=67 status=ok
// SIG undefined FUN_147271eaa(void)

undefined8 FUN_147271eaa(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147271eee FUN_147271eee body=138 status=ok
// SIG undefined FUN_147271eee(void)

void * FUN_147271eee(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147271f78 FUN_147271f78 body=44 status=ok
// SIG undefined FUN_147271f78(void)

void FUN_147271f78(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147271fb2 FUN_147271fb2 body=67 status=ok
// SIG undefined FUN_147271fb2(void)

undefined8 FUN_147271fb2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147271ff6 FUN_147271ff6 body=138 status=ok
// SIG undefined FUN_147271ff6(void)

void * FUN_147271ff6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147272080 FUN_147272080 body=44 status=ok
// SIG undefined FUN_147272080(void)

void FUN_147272080(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472720b4 FUN_1472720b4 body=96 status=ok
// SIG undefined FUN_1472720b4(void)

undefined8 FUN_1472720b4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8d7a4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21cd8,1);
  return uVar3;
}



// FUNCTION 147272114 FUN_147272114 body=138 status=ok
// SIG undefined FUN_147272114(void)

void * FUN_147272114(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727219e FUN_14727219e body=44 status=ok
// SIG undefined FUN_14727219e(void)

void FUN_14727219e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472721d8 FUN_1472721d8 body=67 status=ok
// SIG undefined FUN_1472721d8(void)

undefined8 FUN_1472721d8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14727221c FUN_14727221c body=138 status=ok
// SIG undefined FUN_14727221c(void)

void * FUN_14727221c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472722a6 FUN_1472722a6 body=44 status=ok
// SIG undefined FUN_1472722a6(void)

void FUN_1472722a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472722da FUN_1472722da body=96 status=ok
// SIG undefined FUN_1472722da(void)

undefined8 FUN_1472722da(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e4a4f8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21de8,1);
  return uVar3;
}



// FUNCTION 14727233a FUN_14727233a body=138 status=ok
// SIG undefined FUN_14727233a(void)

void * FUN_14727233a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472723c4 FUN_1472723c4 body=44 status=ok
// SIG undefined FUN_1472723c4(void)

void FUN_1472723c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472723f8 FUN_1472723f8 body=96 status=ok
// SIG undefined FUN_1472723f8(void)

undefined8 FUN_1472723f8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f53912();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21e70,1);
  return uVar3;
}



// FUNCTION 147272458 FUN_147272458 body=138 status=ok
// SIG undefined FUN_147272458(void)

void * FUN_147272458(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472724e2 FUN_1472724e2 body=853 status=ok
// SIG undefined FUN_1472724e2(void)

float * FUN_1472724e2(float *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  
  plVar8 = (longlong *)(**(code **)(*param_2 + 0x2c0))(param_2);
  plVar9 = (longlong *)(**(code **)(*param_2 + 0x338))(param_2);
  lVar1 = *plVar9;
  if (plVar8 == (longlong *)0x0) {
    fVar10 = *(float *)(lVar1 + 0x20);
    dVar15 = (double)-fVar10;
    dVar12 = 0.0;
    dVar16 = 0.0;
  }
  else {
    lVar2 = *plVar8;
    fVar10 = *(float *)(lVar2 + 0x28);
    dVar12 = *(double *)(lVar2 + 0x10);
    dVar16 = *(double *)(lVar2 + 0x18);
    dVar15 = *(double *)(lVar2 + 0x20);
  }
  dVar17 = *(double *)(param_3 + 0x1058) - dVar15 * 100000.0;
  dVar3 = *(double *)(param_3 + 0x1048) - dVar12 * 100000.0;
  dVar4 = *(double *)(param_3 + 0x1050) - dVar16 * 100000.0;
  dVar5 = dVar4 * dVar4;
  dVar6 = dVar17 * dVar17 + dVar3 * dVar3 + dVar5;
  dVar13 = SQRT(dVar6);
  if (9.99999993922529e-09 < dVar6) {
    dVar5 = 1.0 / dVar13;
    dVar3 = dVar3 * dVar5;
    dVar4 = dVar4 * dVar5;
    dVar17 = dVar17 * dVar5;
    dVar5 = dVar4 * dVar4;
  }
  auVar19._0_8_ = ~-(ulonglong)(0.0 <= dVar17) & 0xbff0000000000000;
  auVar19._8_8_ = 0;
  auVar19 = auVar19 | ZEXT416((uint)(-(ulonglong)(0.0 <= dVar17) >> 0x20) & 0x3ff00000) << 0x20;
  dVar18 = auVar19._0_8_;
  dVar6 = -1.0 / (dVar17 + dVar18);
  dVar7 = dVar3 * dVar4 * dVar6;
  *param_1 = (float)(dVar3 * dVar3 * dVar18 * dVar6 + 1.0);
  param_1[1] = (float)(dVar18 * dVar7);
  param_1[2] = (float)((double)((ulonglong)(auVar19._4_4_ ^ 0x80000000) << 0x20) * dVar3);
  param_1[4] = (float)dVar7;
  param_1[5] = (float)(dVar6 * dVar5 + dVar18);
  param_1[6] = -(float)dVar4;
  param_1[8] = (float)dVar3;
  param_1[9] = (float)dVar4;
  param_1[10] = (float)dVar17;
  param_1[0xc] = (float)dVar12;
  param_1[0xd] = (float)dVar16;
  param_1[0xe] = (float)dVar15;
  fVar10 = fVar10 + *(float *)(lVar1 + 8);
  param_1[0xf] = fVar10;
  fVar10 = fVar10 + *(float *)(lVar1 + 0xc);
  param_1[0x10] = fVar10;
  if (*(char *)(lVar1 + 0x18) == '\0') {
    fVar14 = *(float *)(lVar1 + 0x1c);
    fVar11 = *(float *)(lVar1 + 0x10);
    if (fVar10 <= *(float *)(lVar1 + 0x10)) {
      fVar11 = fVar10;
    }
  }
  else {
    fVar11 = *(float *)(lVar1 + 0x10);
    if (*(float *)(lVar1 + 0x1c) <= *(float *)(lVar1 + 0x10)) {
      fVar11 = *(float *)(lVar1 + 0x1c);
    }
    if (fVar10 <= fVar11) {
      fVar11 = fVar10;
    }
    fVar14 = fVar11 + fVar11;
  }
  param_1[0x11] = fVar11;
  param_1[0x13] = fVar14 * 100000.0;
  param_1[0x12] = (float)(dVar13 * 9.999999747378752e-06);
  param_1[0x15] = -NAN;
  if (param_4 != 0) {
    param_1[0x14] = *(float *)(param_4 + 0xb0);
    fVar10 = *(float *)(param_4 + 0xb4);
    fVar11 = *(float *)(param_4 + 0xb8);
    param_1[0x18] = fVar10;
    param_1[0x19] = fVar10;
    param_1[0x1a] = fVar11;
  }
  return param_1;
}



// FUNCTION 147272838 FUN_147272838 body=56 status=ok
// SIG undefined FUN_147272838(void)

void FUN_147272838(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147272878 FUN_147272878 body=96 status=ok
// SIG undefined FUN_147272878(void)

undefined8 FUN_147272878(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14727d262();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21ef8,0);
  return uVar3;
}



// FUNCTION 1472728d8 FUN_1472728d8 body=76 status=ok
// SIG undefined FUN_1472728d8(void)

void * FUN_1472728d8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147272924 FUN_147272924 body=56 status=ok
// SIG undefined FUN_147272924(void)

void FUN_147272924(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147272964 FUN_147272964 body=96 status=ok
// SIG undefined FUN_147272964(void)

undefined8 FUN_147272964(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14727d896();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca21f80,0);
  return uVar3;
}



// FUNCTION 1472729c4 FUN_1472729c4 body=76 status=ok
// SIG undefined FUN_1472729c4(void)

void * FUN_1472729c4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147272a10 FUN_147272a10 body=56 status=ok
// SIG undefined FUN_147272a10(void)

void FUN_147272a10(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147272a56 FUN_147272a56 body=83 status=ok
// SIG undefined FUN_147272a56(void)

longlong FUN_147272a56(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472ea2b4(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  FUN_147440b96(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"PathTracingCloudParameters",0);
  return lVar1;
}



// FUNCTION 147272aaa FUN_147272aaa body=65 status=ok
// SIG undefined FUN_147272aaa(void)

void * FUN_147272aaa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x100);
  memset(_Dst,0,0x100);
  FUN_1472ea222(_Dst);
  *(undefined2 *)((longlong)_Dst + 0xf8) = 0xffff;
  return _Dst;
}



// FUNCTION 147272aeb FUN_147272aeb body=1148 status=ok
// SIG undefined FUN_147272aeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147272aeb(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar19;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148 [14];
  longlong local_d8 [15];
  ulonglong local_60;
  
  auVar3 = _DAT_149931e80;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if ((longlong)(int)param_2[1] != 0) {
    uVar6 = (longlong)(int)param_2[1] * 0x13c10 - 0x13c10;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar6;
    uVar17 = SUB164(auVar20 * ZEXT816(0x19eb3e9edacacb9b),8);
    uVar19 = (undefined4)(uVar6 / 0x9e0800000);
    auVar21._0_8_ = CONCAT44(uVar19,uVar17);
    auVar21._8_4_ = uVar17;
    auVar21._12_4_ = uVar19;
    auVar18._0_8_ = auVar21._0_8_ >> 0xd;
    auVar18._8_8_ = auVar21._8_8_ >> 0xd;
    puVar12 = (undefined4 *)(*param_2 + 0x4efac);
    uVar7 = 0;
    auVar20 = pmovsxbq(in_XMM1,0x302);
    auVar21 = pmovsxbq(in_XMM2,0x100);
    auVar18 = auVar18 | _DAT_149931e80;
    do {
      lVar16 = auVar18._0_8_;
      lVar9 = auVar18._8_8_;
      if ((bool)(~(lVar16 < (longlong)(uVar7 ^ auVar3._0_8_)) & 1)) {
        puVar12[-0xed0c] = 0xffffffff;
      }
      auVar22._8_4_ = (int)uVar7;
      auVar22._0_8_ = uVar7;
      auVar22._12_4_ = (int)(uVar7 >> 0x20);
      if ((longlong)((auVar22._8_8_ | auVar21._8_8_) ^ auVar3._8_8_) <= lVar9) {
        puVar12[-0x9e08] = 0xffffffff;
      }
      auVar22 = (auVar22 | auVar20) ^ auVar3;
      if (auVar22._0_8_ <= lVar16) {
        puVar12[-0x4f04] = 0xffffffff;
      }
      if (auVar22._8_8_ <= lVar9) {
        *puVar12 = 0xffffffff;
      }
      uVar7 = uVar7 + 4;
      puVar12 = puVar12 + 0x13c10;
    } while ((uVar6 / 0x13c10 + 4 & 0xfffffffffffffffc) != uVar7);
  }
  if (((((*(int *)(DAT_14ca1cff8 + 4) != 0) && (*(char *)(DAT_14ca1cdc0 + 1) == '\x01')) &&
       (*(char *)(DAT_14ca1d0a0 + 1) == '\0')) &&
      (((~(&DAT_14ca814c8)
          [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1[1] * 2) * 0xf] & 0xc00000)
        == 0 && (cVar4 = FUN_14019108b(), cVar4 != '\0')))) &&
     ((plVar8 = (longlong *)(**(code **)(*param_1 + 0x340))(param_1), plVar8 != (longlong *)0x0 &&
      ((*(longlong **)(*plVar8 + 0x58) != (longlong *)0x0 &&
       (local_150 = (**(code **)(**(longlong **)(*plVar8 + 0x58) + 0x2f0))(), local_150 != 0)))))) {
    plVar8 = (longlong *)FUN_1449cbe5c(local_150,(int)param_1[1],&local_150);
    iVar5 = (**(code **)(*plVar8 + 0x30))(plVar8);
    if (iVar5 == 3) {
      lVar16 = plVar8[3];
      FUN_14612ef64();
      lVar9 = FUN_144b1d0c2(*(undefined8 *)(lVar16 + 0x28),&DAT_14ca1e168,0);
      if (lVar9 == 0) {
        local_160 = 0;
      }
      else {
        local_160 = lVar16;
        (**(code **)(*param_1 + 0x340))(param_1);
        if ((longlong)(int)param_2[1] != 0) {
          lVar16 = *param_2;
          local_168 = param_1 + 0x855;
          local_178 = param_1 + 0x857;
          lVar13 = (longlong)(int)param_2[1] * 0x13c10;
          local_170 = lVar9;
          do {
            lVar11 = param_1[0x854];
            lVar10 = FUN_147272f68(local_168);
            local_d8[1] = local_160;
            local_d8[0] = lVar9;
            FUN_1472b403c(lVar10,local_d8);
            *(int *)(lVar10 + 0x84) = (int)lVar11;
            *(int *)(lVar16 + 0x13b7c) = (int)lVar11;
            FUN_1472724e2(local_148,param_1,lVar16,0);
            plVar14 = local_148;
            plVar15 = local_d8;
            for (lVar9 = 0xe; lVar9 != 0; lVar9 = lVar9 + -1) {
              *plVar15 = *plVar14;
              plVar14 = plVar14 + 1;
              plVar15 = plVar15 + 1;
            }
            FUN_142ea3b4e(&local_158,local_d8);
            iVar5 = (int)param_1[0x858];
            *(uint *)(param_1 + 0x858) = iVar5 + 1U;
            if (*(uint *)((longlong)param_1 + 0x42c4) < iVar5 + 1U) {
              FUN_144ab4262(local_178,iVar5);
            }
            lVar9 = local_170;
            *(longlong *)(*local_178 + (longlong)iVar5 * 8) = local_158;
            if (local_158 != 0) {
              LOCK();
              *(int *)(local_158 + 8) = *(int *)(local_158 + 8) + 1;
              UNLOCK();
            }
            uVar6 = (ulonglong)(*(ushort *)(lVar10 + 0x70) & 0x3ff) -
                    (ulonglong)(*(ushort *)(lVar10 + 0x70) >> 1 & 0x155);
            uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
            uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar6 == 0) {
              local_148[0] = 0x58;
              local_148[1] = 0;
            }
            else {
              lVar11 = *(longlong *)(lVar10 + 0x10);
              if (*(longlong *)(lVar10 + 0x10) == 0) {
                lVar11 = lVar10;
              }
              FUN_144b11014(lVar11 + uVar6 * 8 + -8);
              if (*(ushort *)(lVar10 + 0x72) < 0x51) {
                local_148[1] = lVar10 + 0x20;
              }
              else {
                local_148[1] = *(longlong *)(lVar10 + 0x20);
              }
              if (*(longlong *)(lVar10 + 0x10) != 0) {
                lVar10 = *(longlong *)(lVar10 + 0x10);
              }
              local_148[0] = *(longlong *)(lVar10 + -8 + uVar6 * 8);
            }
            local_180 = local_148;
            local_188 = &local_158;
            local_198 = plVar8;
            local_190 = lVar16;
            FUN_147272fac(lVar9,param_1,(int)param_1[1]);
            *(int *)(param_1 + 0x854) = (int)param_1[0x854] + 1;
            if (local_158 != 0) {
              LOCK();
              puVar1 = (uint *)(local_158 + 8);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar2 & 0x3fffffff) == 1) {
                FUN_144a54812();
              }
            }
            lVar16 = lVar16 + 0x13c10;
            lVar13 = lVar13 + -0x13c10;
          } while (lVar13 != 0);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147272f68 FUN_147272f68 body=68 status=ok
// SIG undefined FUN_147272f68(void)

longlong FUN_147272f68(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_147282f36(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x90 + *param_1;
  FUN_147282edd(lVar2,1);
  return lVar2;
}



// FUNCTION 147272fac FUN_147272fac body=664 status=ok
// SIG undefined FUN_147272fac(void)

void FUN_147272fac(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  undefined8 in_stack_00000028;
  longlong in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = in_stack_00000040;
  local_48 = in_stack_00000028;
  FUN_140056988(param_1);
  lVar2 = FUN_1447e4f80();
  FUN_144aff0d6(local_30,lVar2 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar2 * 4) == local_38) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar1;
        }
        psVar4 = (short *)(uVar3 + lVar2);
        goto LAB_14727307e;
      }
      lVar2 = lVar2 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar2);
  }
  psVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_14727307e:
  if (*psVar4 != -1) {
    FUN_144b11088(in_stack_00000040,*(undefined8 *)(in_stack_00000030 + 0x18));
  }
  lVar2 = FUN_144a8f66a();
  FUN_144aff0d6(local_30,lVar2 + 0x28);
  FUN_144aff0d6(&local_38,local_30);
  uVar1 = *(ulonglong *)(param_1 + 0xa0);
  uVar3 = param_1 + 0xa0 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (0 < (longlong)*(int *)(param_1 + 0xa8)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(uVar3 + lVar2 * 4) == local_38) {
        uVar1 = *(ulonglong *)(param_1 + 0xb0);
        uVar3 = param_1 + 0xb0 + ((longlong)uVar1 >> 0x18);
        if ((uVar1 & 1) == 0) {
          uVar3 = uVar1;
        }
        psVar4 = (short *)(uVar3 + lVar2);
        goto LAB_147273135;
      }
      lVar2 = lVar2 + 2;
    } while ((longlong)*(int *)(param_1 + 0xa8) * 2 != lVar2);
  }
  psVar4 = &DAT_14c9c45cc;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c45d0) {
    FUN_144b3d300(&DAT_14c9c45d0);
    if (DAT_14c9c45d0 == -1) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
  }
LAB_147273135:
  if (*psVar4 != -1) {
    FUN_144b11088(in_stack_00000040,DAT_14cb055b0);
  }
  if (*(short *)(param_1 + 0xf8) != -1) {
    FUN_144b11088(in_stack_00000040,*in_stack_00000038);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147273246 FUN_147273246 body=44 status=ok
// SIG undefined FUN_147273246(void)

void FUN_147273246(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14727327a FUN_14727327a body=96 status=ok
// SIG undefined FUN_14727327a(void)

undefined8 FUN_14727327a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8e284();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22038,1);
  return uVar3;
}



// FUNCTION 1472732da FUN_1472732da body=138 status=ok
// SIG undefined FUN_1472732da(void)

void * FUN_1472732da(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147273364 FUN_147273364 body=44 status=ok
// SIG undefined FUN_147273364(void)

void FUN_147273364(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147273398 FUN_147273398 body=96 status=ok
// SIG undefined FUN_147273398(void)

undefined8 FUN_147273398(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f53f08();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca220c0,1);
  return uVar3;
}



// FUNCTION 1472733f8 FUN_1472733f8 body=138 status=ok
// SIG undefined FUN_1472733f8(void)

void * FUN_1472733f8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147273482 FUN_147273482 body=44 status=ok
// SIG undefined FUN_147273482(void)

void FUN_147273482(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472734bc FUN_1472734bc body=39 status=ok
// SIG undefined FUN_1472734bc(void)

void FUN_1472734bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472734e4 FUN_1472734e4 body=138 status=ok
// SIG undefined FUN_1472734e4(void)

void * FUN_1472734e4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727356e FUN_14727356e body=44 status=ok
// SIG undefined FUN_14727356e(void)

void FUN_14727356e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472735ac FUN_1472735ac body=39 status=ok
// SIG undefined FUN_1472735ac(void)

void FUN_1472735ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1472735d4 FUN_1472735d4 body=138 status=ok
// SIG undefined FUN_1472735d4(void)

void * FUN_1472735d4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727365e FUN_14727365e body=110 status=ok
// SIG undefined FUN_14727365e(void)

longlong FUN_14727365e(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1472736ce(param_1,&local_20);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_18 + 8) + 0x50) +
             (longlong)*(int *)(local_20 + 0xd4) * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(local_18 + 8),(longlong)*(int *)(local_20 + 0xd4),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472736ce FUN_1472736ce body=108 status=ok
// SIG undefined FUN_1472736ce(void)

undefined4 * FUN_1472736ce(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14607f200();
  FUN_14607f200();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1e4b8,0);
  FUN_14607f200();
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



// FUNCTION 14727373c FUN_14727373c body=349 status=ok
// SIG undefined FUN_14727373c(void)

void FUN_14727373c(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14727365e(*(undefined8 *)(param_3 + 0x13818));
  uVar3 = FUN_1474050e2(*(undefined8 *)(param_3 + 0x13ae0),uVar4,1);
  uVar4 = *(undefined8 *)(param_3 + 0x13ae0);
  uVar2 = *(undefined8 *)(param_3 + 0x13ae8);
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 7;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x40);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 7;
  }
  *param_2 = (ulonglong)puVar5;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 2) = uVar3;
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 8;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x48);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 8;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a203848;
  puVar6[2] = uVar2;
  puVar6[3] = 0;
  puVar6[4] = uVar4;
  *(undefined4 *)(puVar6 + 5) = 1;
  puVar6[6] = puVar7;
  *(undefined1 *)(puVar6 + 7) = 2;
  FUN_14494c7ac(param_2,&local_38,1);
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14727389a FUN_14727389a body=56 status=ok
// SIG undefined FUN_14727389a(void)

void FUN_14727389a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 1472738e0 FUN_1472738e0 body=83 status=ok
// SIG undefined FUN_1472738e0(void)

longlong FUN_1472738e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472ea2b4(lVar1,param_1);
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  FUN_147440b96(lVar1 + 0xf8,*(undefined8 *)(param_1 + 0x28),L"PathTracingLightFunctionParameters",0
               );
  return lVar1;
}



// FUNCTION 147273934 FUN_147273934 body=49 status=ok
// SIG undefined FUN_147273934(void)

longlong FUN_147273934(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_1472ea222(lVar1);
  *(undefined2 *)(lVar1 + 0xf8) = 0xffff;
  return lVar1;
}



// FUNCTION 147273965 FUN_147273965 body=2020 status=ok
// SIG undefined FUN_147273965(void)

void FUN_147273965(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  double dVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_358 [32];
  longlong local_338;
  longlong local_330;
  longlong *local_328;
  double *local_320;
  int local_310;
  undefined4 local_30c;
  longlong *local_308;
  undefined8 local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  longlong local_2d8;
  undefined8 local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  undefined4 local_2b8;
  uint uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  ulonglong uStack_2a0;
  longlong local_298 [12];
  undefined4 local_238;
  uint uStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  ulonglong local_228;
  undefined8 local_220;
  double local_218;
  undefined8 ***local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  ulonglong uStack_180;
  undefined8 ***local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
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
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  undefined4 local_b0;
  uint local_ac;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_2e8 = param_2;
  puVar12 = local_2a8;
  if (param_3 != (longlong *)0x0) {
    plVar1 = param_3 + 2;
    local_198 = 0x100000000;
    local_188 = (undefined8 *)&DAT_ffffffff;
    uStack_180 = uStack_180 & 0xffffffff00000000;
    uStack_190 = plVar1;
    if ((int)param_3[5] == 0) {
      iVar15 = 0;
    }
    else {
      FUN_1449c0562(&local_198);
      iVar15 = (int)param_3[5];
    }
    local_2a8 = local_188;
    puVar12 = local_2a8;
    uStack_2a0 = uStack_180;
    local_2b8 = (undefined4)local_198;
    uStack_2b4 = local_198._4_4_;
    uStack_2b0 = (undefined4)uStack_190;
    uStack_2ac = uStack_190._4_4_;
    local_2a8._4_4_ = (int)((ulonglong)local_188 >> 0x20);
    local_2c0 = param_3;
    if ((local_2a8._4_4_ != iVar15) || (uStack_190 != plVar1)) {
      local_2d8 = param_4 + 0x500;
      iVar10 = local_2a8._4_4_;
      local_310 = iVar15;
      local_308 = plVar1;
      local_300 = param_1;
      local_2e0 = param_3;
      local_2a8 = puVar12;
      do {
        lVar5 = *local_2c0;
        lVar13 = *(longlong *)(lVar5 + (longlong)iVar10 * 0x18);
        lVar6 = *(longlong *)(*(longlong *)(lVar13 + 0x28) + 0x1c0);
        local_2c8 = 0;
        local_2f0 = FUN_1449cbe5c(lVar6,*(undefined4 *)(local_2e8 + 8),&local_2c8);
        local_2f8 = local_2c8;
        if (local_2c8 == 0) {
          local_2f8 = lVar6;
        }
        local_d8 = 0;
        uStack_d0 = 0x3f80000000000000;
        lVar6 = *(longlong *)(lVar13 + 0x28);
        local_1c8 = 1.0 / *(double *)(lVar6 + 0x1a0);
        local_1f0 = 1.0 / *(double *)(lVar6 + 0x1a8);
        local_218 = 1.0 / *(double *)(lVar6 + 0x1b0);
        local_200 = 0.0;
        dStack_1f8 = 0.0;
        local_210 = (undefined8 ***)0x0;
        dStack_208 = 0.0;
        local_1d8 = 0.0;
        dStack_1d0 = 0.0;
        local_1e8 = 0.0;
        dStack_1e0 = 0.0;
        local_1b0 = 0.0;
        dStack_1a8 = 0.0;
        local_1c0 = 0.0;
        dStack_1b8 = 0.0;
        local_1a0 = 1.0;
        FUN_1447fea8d(&local_198,lVar6 + 0x50,&local_218);
        local_238 = *(undefined4 *)(param_4 + 0x1030);
        uStack_230 = *(undefined4 *)(param_4 + 0x1038);
        uStack_234 = *(uint *)(param_4 + 0x1034) ^ 0x80000000;
        uStack_22c = *(uint *)(param_4 + 0x103c) ^ 0x80000000;
        local_298[0] = 0x3ff0000000000000;
        local_298[3] = 0;
        local_298[4] = 0;
        local_298[1] = 0;
        local_298[2] = 0;
        local_298[5] = 0x3ff0000000000000;
        local_298[8] = 0;
        local_298[9] = 0;
        local_298[6] = 0;
        local_298[7] = 0;
        local_298[10] = 0x3ff0000000000000;
        local_298[0xb] = 0;
        local_228 = *(ulonglong *)(param_4 + 0x1040) ^ 0x8000000000000000;
        local_220 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_218,local_298,&local_198);
        local_118 = (float)local_218;
        local_114 = (float)(double)local_210;
        local_110 = (float)dStack_208;
        local_10c = (float)local_200;
        local_108 = (float)dStack_1f8;
        local_104 = (float)local_1f0;
        local_100 = (float)local_1e8;
        local_fc = (float)dStack_1e0;
        local_f8 = (float)local_1d8;
        local_f4 = (float)dStack_1d0;
        local_f0 = (float)local_1c8;
        local_ec = (float)local_1c0;
        local_e8 = (float)dStack_1b8;
        local_e4 = (float)local_1b0;
        local_e0 = (float)dStack_1a8;
        local_dc = (float)local_1a0;
        cVar4 = (char)(*(longlong **)(lVar13 + 0x28))[0x3d];
        uVar17 = 0;
        fVar16 = 1.0;
        if (cVar4 == '\x02') {
          fVar16 = (float)(**(code **)(**(longlong **)(lVar13 + 0x28) + 0x20))();
          fVar16 = tanf(fVar16);
          uVar17 = 0x3f800000;
        }
        uVar18 = 0x3f800000;
        if (cVar4 != '\x01') {
          uVar18 = 0;
        }
        local_d8 = CONCAT44(0x3f800000,fVar16);
        uStack_d0 = CONCAT44(uVar18,uVar17);
        local_c8 = *(undefined8 *)(*(longlong *)(lVar13 + 0x28) + 0x1b8);
        local_c0 = 0;
        FUN_142cdedaa(&local_218,local_2d8,lVar13);
        local_b0 = local_210._0_4_;
        local_b8 = local_218;
        local_ac = (uint)*(byte *)(DAT_14ca1d220 + 1);
        FUN_142e95cfe(local_298,&local_118);
        local_30c = *(undefined4 *)(lVar5 + (longlong)iVar10 * 0x18 + 8);
        uVar7 = *(undefined8 *)(param_4 + 0x13ae0);
        local_2d0 = *(undefined8 *)(param_4 + 0x13ae8);
        lVar5 = *(longlong *)(local_2f0 + 0x18);
        FUN_14612f23a();
        dVar11 = (double)FUN_144b1d0c2(*(undefined8 *)(lVar5 + 0x28),&DAT_14ca1e7c8,0);
        local_188 = (undefined8 *)0x0;
        uStack_180 = 0x200000000;
        local_210 = (undefined8 ***)lVar5;
        if (dVar11 == 0.0) {
          local_210 = (undefined8 ***)0x0;
        }
        local_128 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = (undefined8 ****)0x0;
        uStack_170 = 0;
        local_218 = dVar11;
        FUN_14723c438(&local_198,&local_218);
        uVar14 = (ulonglong)(byte)local_128 - (ulonglong)(local_128 >> 1 & 0x55);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar14 == 0) {
          local_218 = 4.34777768340297e-322;
          local_210 = (undefined8 ****)0x0;
        }
        else {
          puVar12 = local_188;
          if (local_188 == (undefined8 *)0x0) {
            puVar12 = &local_198;
          }
          FUN_144b11014(puVar12 + (uVar14 - 1));
          local_210 = &local_178;
          if (0x50 < local_128._2_2_) {
            local_210 = local_178;
          }
          puVar12 = local_188;
          if (local_188 == (undefined8 *)0x0) {
            puVar12 = &local_198;
          }
          local_218 = (double)puVar12[uVar14 - 1];
        }
        local_320 = &local_218;
        local_328 = local_298;
        local_338 = local_2f0;
        local_330 = param_4;
        FUN_14727e17e(dVar11,local_2e8,*(undefined4 *)(local_2e8 + 8),local_2f8);
        uVar8 = local_300;
        plVar1 = local_308;
        iVar15 = local_310;
        if (dVar11 == 0.0) {
          lVar13 = 0;
        }
        else {
          lVar13 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar5 + 8) + 0x50) +
                    (longlong)*(int *)((longlong)dVar11 + 0xd4) * 8);
          if (lVar13 == 0) {
            lVar13 = FUN_1400bafc2(*(longlong *)(lVar5 + 8),*(int *)((longlong)dVar11 + 0xd4),1);
          }
        }
        uVar17 = FUN_1474050e2(*(undefined8 *)(param_4 + 0x13ae0),lVar13,1);
        local_330 = CONCAT44(local_330._4_4_,uVar17);
        local_338 = uVar7;
        FUN_14723c1da(&local_198,uVar8,local_2d0,local_30c);
        FUN_144ab2e4c(&local_198);
        plVar9 = local_2e0;
        if (local_298[0] != 0) {
          LOCK();
          puVar2 = (uint *)(local_298[0] + 8);
          uVar3 = *puVar2;
          *puVar2 = *puVar2 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
        local_2a8 = (undefined8 *)CONCAT44(local_2a8._4_4_,(uint)local_2a8 & ~uStack_2b4);
        FUN_1449c0562(&local_2b8);
        iVar10 = local_2a8._4_4_;
        puVar12 = local_2a8;
      } while (local_2c0 != plVar9 ||
               ((longlong *)CONCAT44(uStack_2ac,uStack_2b0) != plVar1 || local_2a8._4_4_ != iVar15))
      ;
    }
  }
  local_2a8 = puVar12;
  if ((local_a0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14727414a FUN_14727414a body=591 status=ok
// SIG undefined FUN_14727414a(void)

undefined8 * FUN_14727414a(undefined8 *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  int local_ac [3];
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  int *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong *local_70;
  int *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_1[4] = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  plVar1 = (longlong *)(param_2 + 0x3550);
  piVar2 = (int *)(param_2 + 0x3560);
  local_70 = (longlong *)&DAT_100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  local_b8 = param_3;
  local_68 = piVar2;
  if (*(int *)(param_2 + 0x3578) != 0) {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)(param_2 + 0x3578);
  }
  local_90 = local_70;
  local_88 = local_68;
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_98 = plVar1;
  if ((iStack_5c != iVar7) || (local_68 != piVar2)) {
    do {
      local_a0 = *(longlong *)(*local_98 + 0x30 + (longlong)iStack_7c * 0x40);
      lVar3 = *(longlong *)(*(longlong *)(local_a0 + 0x28) + 0x1c0);
      if (lVar3 != 0) {
        local_ac[1] = 0;
        local_ac[2] = 0;
        plVar6 = (longlong *)FUN_1449cbe5c(lVar3,param_4);
        cVar4 = (**(code **)(*plVar6 + 0xd8))(plVar6);
        if (cVar4 != '\0') {
          lVar3 = plVar6[3];
          FUN_14612f23a();
          lVar5 = FUN_144b1d0c2(*(undefined8 *)(lVar3 + 0x28),&DAT_14ca1e7c8,0);
          if (lVar5 != 0) {
            lVar3 = *(longlong *)(lVar3 + 8);
            if (*(longlong *)(*(longlong *)(lVar3 + 0x50) + (longlong)*(int *)(lVar5 + 0xd4) * 8) ==
                0) {
              FUN_1400bafc2(lVar3,(longlong)*(int *)(lVar5 + 0xd4),1);
            }
          }
          local_ac[0] = *(int *)(param_2 + 0x429c);
          local_68 = local_ac;
          *(int *)(param_2 + 0x429c) = local_ac[0] + 1;
          local_70 = &local_a0;
          FUN_147282fca(param_1,local_4c,&local_70,0);
        }
      }
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (local_88 != piVar2 || iStack_7c != iVar7));
  }
  if (*(longlong *)(local_b8 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14727439a FUN_14727439a body=56 status=ok
// SIG undefined FUN_14727439a(void)

void FUN_14727439a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472743e0 FUN_1472743e0 body=39 status=ok
// SIG undefined FUN_1472743e0(void)

void FUN_1472743e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147274408 FUN_147274408 body=76 status=ok
// SIG undefined FUN_147274408(void)

void * FUN_147274408(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147274454 FUN_147274454 body=56 status=ok
// SIG undefined FUN_147274454(void)

void FUN_147274454(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14727449a FUN_14727449a body=39 status=ok
// SIG undefined FUN_14727449a(void)

void FUN_14727449a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472744c2 FUN_1472744c2 body=76 status=ok
// SIG undefined FUN_1472744c2(void)

void * FUN_1472744c2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14727450e FUN_14727450e body=56 status=ok
// SIG undefined FUN_14727450e(void)

void FUN_14727450e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147274554 FUN_147274554 body=39 status=ok
// SIG undefined FUN_147274554(void)

void FUN_147274554(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14727457c FUN_14727457c body=76 status=ok
// SIG undefined FUN_14727457c(void)

void * FUN_14727457c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 1472745c8 FUN_1472745c8 body=56 status=ok
// SIG undefined FUN_1472745c8(void)

void FUN_1472745c8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14727460e FUN_14727460e body=39 status=ok
// SIG undefined FUN_14727460e(void)

void FUN_14727460e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147274636 FUN_147274636 body=76 status=ok
// SIG undefined FUN_147274636(void)

void * FUN_147274636(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147274682 FUN_147274682 body=56 status=ok
// SIG undefined FUN_147274682(void)

void FUN_147274682(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472746c8 FUN_1472746c8 body=39 status=ok
// SIG undefined FUN_1472746c8(void)

void FUN_1472746c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472746f0 FUN_1472746f0 body=76 status=ok
// SIG undefined FUN_1472746f0(void)

void * FUN_1472746f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14727473c FUN_14727473c body=56 status=ok
// SIG undefined FUN_14727473c(void)

void FUN_14727473c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147274782 FUN_147274782 body=39 status=ok
// SIG undefined FUN_147274782(void)

void FUN_147274782(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472747aa FUN_1472747aa body=76 status=ok
// SIG undefined FUN_1472747aa(void)

void * FUN_1472747aa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 1472747f6 FUN_1472747f6 body=56 status=ok
// SIG undefined FUN_1472747f6(void)

void FUN_1472747f6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 14727483c FUN_14727483c body=39 status=ok
// SIG undefined FUN_14727483c(void)

void FUN_14727483c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147274864 FUN_147274864 body=76 status=ok
// SIG undefined FUN_147274864(void)

void * FUN_147274864(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 1472748b0 FUN_1472748b0 body=56 status=ok
// SIG undefined FUN_1472748b0(void)

void FUN_1472748b0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472748f6 FUN_1472748f6 body=39 status=ok
// SIG undefined FUN_1472748f6(void)

void FUN_1472748f6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 14727491e FUN_14727491e body=76 status=ok
// SIG undefined FUN_14727491e(void)

void * FUN_14727491e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 14727496a FUN_14727496a body=56 status=ok
// SIG undefined FUN_14727496a(void)

void FUN_14727496a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 1472749b0 FUN_1472749b0 body=39 status=ok
// SIG undefined FUN_1472749b0(void)

void FUN_1472749b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 1472749d8 FUN_1472749d8 body=76 status=ok
// SIG undefined FUN_1472749d8(void)

void * FUN_1472749d8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147274a24 FUN_147274a24 body=56 status=ok
// SIG undefined FUN_147274a24(void)

void FUN_147274a24(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147274a6a FUN_147274a6a body=39 status=ok
// SIG undefined FUN_147274a6a(void)

void FUN_147274a6a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147274a92 FUN_147274a92 body=76 status=ok
// SIG undefined FUN_147274a92(void)

void * FUN_147274a92(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  return _Dst;
}



// FUNCTION 147274ade FUN_147274ade body=44 status=ok
// SIG undefined FUN_147274ade(void)

void FUN_147274ade(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147274b18 FUN_147274b18 body=67 status=ok
// SIG undefined FUN_147274b18(void)

undefined8 FUN_147274b18(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147274b5c FUN_147274b5c body=138 status=ok
// SIG undefined FUN_147274b5c(void)

void * FUN_147274b5c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147274be6 FUN_147274be6 body=44 status=ok
// SIG undefined FUN_147274be6(void)

void FUN_147274be6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147274c24 FUN_147274c24 body=67 status=ok
// SIG undefined FUN_147274c24(void)

undefined8 FUN_147274c24(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147274c68 FUN_147274c68 body=138 status=ok
// SIG undefined FUN_147274c68(void)

void * FUN_147274c68(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147274cf2 FUN_147274cf2 body=44 status=ok
// SIG undefined FUN_147274cf2(void)

void FUN_147274cf2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147274d2c FUN_147274d2c body=67 status=ok
// SIG undefined FUN_147274d2c(void)

undefined8 FUN_147274d2c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147274d70 FUN_147274d70 body=138 status=ok
// SIG undefined FUN_147274d70(void)

void * FUN_147274d70(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147274dfa FUN_147274dfa body=44 status=ok
// SIG undefined FUN_147274dfa(void)

void FUN_147274dfa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147274e38 FUN_147274e38 body=67 status=ok
// SIG undefined FUN_147274e38(void)

undefined8 FUN_147274e38(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147274e7c FUN_147274e7c body=138 status=ok
// SIG undefined FUN_147274e7c(void)

void * FUN_147274e7c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147274f06 FUN_147274f06 body=110 status=ok
// SIG undefined FUN_147274f06(void)

longlong FUN_147274f06(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147274f76(param_1,&local_20);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_18 + 8) + 0x50) +
             (longlong)*(int *)(local_20 + 0xd4) * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(local_18 + 8),(longlong)*(int *)(local_20 + 0xd4),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147274f76 FUN_147274f76 body=108 status=ok
// SIG undefined FUN_147274f76(void)

undefined4 * FUN_147274f76(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146090574();
  FUN_146090574();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1f458,0);
  FUN_146090574();
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



// FUNCTION 147274fe3 FUN_147274fe3 body=110 status=ok
// SIG undefined FUN_147274fe3(void)

longlong FUN_147274fe3(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147275052(param_1,&local_20);
  if (local_20 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_18 + 8) + 0x50) +
             (longlong)*(int *)(local_20 + 0xd4) * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(local_18 + 8),(longlong)*(int *)(local_20 + 0xd4),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147275052 FUN_147275052 body=108 status=ok
// SIG undefined FUN_147275052(void)

undefined4 * FUN_147275052(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146090a4c();
  FUN_146090a4c();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1f6a8,0);
  FUN_146090a4c();
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



// FUNCTION 14727542c FUN_14727542c body=1178 status=ok
// SIG undefined FUN_14727542c(void)

void FUN_14727542c(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 param_5,ulonglong param_6,longlong *param_7,undefined8 param_8)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  ulonglong local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  longlong *local_188;
  undefined8 *local_178;
  undefined8 local_170;
  ulonglong local_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 ***local_150;
  longlong local_148;
  longlong local_140;
  longlong local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 ***local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined2 local_57;
  undefined4 local_55;
  undefined2 local_51;
  undefined4 local_4e;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_170 = *(undefined8 *)(param_2 + 0xb8);
  local_d0 = (undefined1 *)0x0;
  local_c8 = 0x200000000;
  local_68 = 0;
  local_c0 = (undefined8 ****)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_60 = 0xffffffffffffffff;
  local_58 = 0xff;
  local_57 = 0x101;
  local_55 = 0;
  local_51 = 0;
  local_4e = 0xffffffff;
  local_4a = 0xffff;
  local_1c8 = CONCAT71(local_1c8._1_7_,1);
  local_178 = param_4;
  FUN_1472b5da7(local_e0,param_2,param_4,param_6);
  if (DAT_14ca84ef5 == '\x01') {
    local_148 = *param_7;
    local_140 = param_7[1];
    FUN_1472baee4(local_e0);
  }
  local_f0 = 0;
  local_e8 = 0x700000000;
  FUN_144765fea(local_170,*(undefined4 *)(param_1 + 0x20),0);
  lVar7 = *param_7;
  if (lVar7 != 0) {
    uVar5 = (ulonglong)(local_70 & 0x1ff) - (ulonglong)(local_70 >> 1 & 0x55);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    if (uVar5 < 0x100000000000000) {
      local_158 = 0x58;
      local_150 = (undefined8 ****)0x0;
    }
    else {
      uVar5 = uVar5 >> 0x38;
      puVar2 = local_d0;
      if (local_d0 == (undefined1 *)0x0) {
        puVar2 = local_e0;
      }
      FUN_144b11014(puVar2 + uVar5 * 8 + -8);
      local_150 = local_c0;
      if (local_70._2_2_ < 0x51) {
        local_150 = &local_c0;
      }
      puVar2 = local_e0;
      if (local_d0 != (undefined1 *)0x0) {
        puVar2 = local_d0;
      }
      local_158 = *(undefined8 *)(puVar2 + uVar5 * 8 + -8);
      lVar7 = *param_7;
    }
    local_1b0 = &local_158;
    local_1b8 = param_8;
    local_1c0 = param_6;
    local_1c8 = param_5;
    FUN_14474308c(lVar7,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x20),local_178);
  }
  local_160 = (ulonglong)*(int *)(param_2 + 0xb0);
  if (0 < (longlong)local_160) {
    lVar7 = 0;
    uVar5 = 0;
    local_168 = param_3;
    do {
      if ((param_3 >> (uVar5 & 0x3f) & 1) != 0) {
        lVar8 = *(longlong *)(param_2 + 0xa8);
        if (*(longlong *)(param_2 + 0xa8) == 0) {
          lVar8 = param_2;
        }
        lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                          (*(longlong **)(param_1 + 8),local_e0);
        lVar4 = *param_7;
        if (lVar4 != 0) {
          uVar6 = (ulonglong)(*(ushort *)(lVar3 + 0x70) & 0x1ff) -
                  (ulonglong)(*(ushort *)(lVar3 + 0x70) >> 1 & 0x55);
          uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
          uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
          if (uVar6 < 0x100000000000000) {
            local_158 = 0x58;
            local_150 = (undefined8 ****)0x0;
          }
          else {
            uVar6 = uVar6 >> 0x38;
            lVar4 = *(longlong *)(lVar3 + 0x10);
            if (*(longlong *)(lVar3 + 0x10) == 0) {
              lVar4 = lVar3;
            }
            FUN_144b11014(lVar4 + uVar6 * 8 + -8);
            if (*(ushort *)(lVar3 + 0x72) < 0x51) {
              local_150 = (undefined8 ***)(lVar3 + 0x20);
            }
            else {
              local_150 = *(undefined8 ****)(lVar3 + 0x20);
            }
            lVar4 = lVar3;
            if (*(longlong *)(lVar3 + 0x10) != 0) {
              lVar4 = *(longlong *)(lVar3 + 0x10);
            }
            local_158 = *(undefined8 *)(lVar4 + -8 + uVar6 * 8);
            lVar4 = *param_7;
          }
          local_1a0 = lVar8 + lVar7;
          local_188 = &local_148;
          local_190 = &local_158;
          local_198 = param_8;
          local_1b0 = local_178;
          local_1b8 = CONCAT44(local_1b8._4_4_,*(undefined4 *)(param_1 + 0x20));
          local_1c8 = local_170;
          local_1c0 = local_1c0 & 0xffffffffffffff00;
          local_1a8 = param_2;
          FUN_1456bf974(lVar4,*(undefined8 *)(param_7[1] + 0x18),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
          param_3 = local_168;
        }
        *(int *)(lVar3 + 0x84) = *(int *)(param_2 + 0xd8) + (int)uVar5;
        uVar1 = FUN_145be8c2c(param_2,*(undefined4 *)(param_6 + 0x24));
        *(undefined1 *)(lVar3 + 0x8e) = uVar1;
        (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(*(longlong **)(param_1 + 8),lVar3);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (local_160 != uVar5);
  }
  if (local_f0 != 0) {
    FUN_1400020a8();
  }
  FUN_144ab2e4c(local_e0);
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472758c7 FUN_1472758c7 body=177 status=ok
// SIG undefined FUN_1472758c7(void)

void FUN_1472758c7(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f52e0a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca21810,param_4);
  local_78 = &DAT_14ca21810;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472834cc(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147275979 FUN_147275979 body=177 status=ok
// SIG undefined FUN_147275979(void)

void FUN_147275979(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e8d234();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca21898,param_4);
  local_78 = &DAT_14ca21898;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472838ac(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147275a2c FUN_147275a2c body=216 status=ok
// SIG undefined FUN_147275a2c(void)

undefined8 * FUN_147275a2c(undefined8 *param_1)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  iVar4 = FUN_147283c6e();
  if (*(int *)(param_1 + 2) <= iVar4) {
    FUN_140051998(param_1 + 1,iVar4 + 1,1);
  }
  puVar2 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  puVar6 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
  puVar5 = puVar6 + 8;
  if ((undefined8 *)puVar2[1] < puVar5) {
    FUN_140023dd8(puVar2,0x50);
    puVar6 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar6 + 8;
  }
  *puVar2 = (ulonglong)puVar5;
  *puVar6 = &PTR_FUN_14a2b20d0;
  puVar6[2] = &PTR_FUN_14a2b20d8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  iVar1 = (int)puVar2[6];
  *(uint *)(puVar2 + 6) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar2 + 0x34) < iVar1 + 1U) {
    FUN_1448cfae8(puVar2 + 5,iVar1);
  }
  *(undefined8 **)(puVar2[5] + (longlong)iVar1 * 8) = puVar6;
  *(undefined8 **)(lVar3 + (longlong)iVar4 * 8) = puVar6 + 2;
  return puVar6 + 4;
}



// FUNCTION 147275b04 FUN_147275b04 body=177 status=ok
// SIG undefined FUN_147275b04(void)

void FUN_147275b04(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145dd101a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca21920,param_4);
  local_78 = &DAT_14ca21920;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147283d48(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147275bb6 FUN_147275bb6 body=44 status=ok
// SIG undefined FUN_147275bb6(void)

void FUN_147275bb6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147275bea FUN_147275bea body=96 status=ok
// SIG undefined FUN_147275bea(void)

undefined8 FUN_147275bea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f31de6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22178,1);
  return uVar3;
}



// FUNCTION 147275c4a FUN_147275c4a body=138 status=ok
// SIG undefined FUN_147275c4a(void)

void * FUN_147275c4a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147275cd4 FUN_147275cd4 body=502 status=ok
// SIG undefined FUN_147275cd4(void)

void FUN_147275cd4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  undefined1 auStack_78 [35];
  undefined1 local_55 [5];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x60) & 2) != 0) {
    piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      piVar4 = &DAT_14c760db4;
    }
    cVar1 = FUN_1406ef37d(*(undefined2 *)(&DAT_14ca85070 + (longlong)*piVar4 * 2));
    if (cVar1 != '\0') {
      iVar2 = FUN_1472713e6();
      if (iVar2 < 0) {
        FUN_142e73e50(local_55,param_2);
        piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          piVar4 = &DAT_14c760db4;
        }
        FUN_147275f3a(*(undefined8 *)
                       (&DAT_14ca8c1f0 +
                       (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar4 * 2) * 8),&local_50
                      ,local_55);
        if (local_50 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)(local_48 + 8) + 0x50) +
                   (longlong)*(int *)(local_50 + 0xd4) * 8);
          if (lVar3 == 0) {
            lVar3 = FUN_1400bafc2(*(longlong *)(local_48 + 8),(longlong)*(int *)(local_50 + 0xd4),1)
            ;
          }
        }
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1471499ca(param_3,iVar2);
        }
        *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar3;
        piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          piVar4 = &DAT_14c760db4;
        }
        FUN_147275fc4(*(undefined8 *)
                       (&DAT_14ca8c1f0 +
                       (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar4 * 2) * 8),&local_50
                     );
      }
      else {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x40) + 8);
        if (*(longlong *)(param_1 + 0x40) == 0) {
          piVar4 = &DAT_14c760db4;
        }
        FUN_147275ecc(*(undefined8 *)
                       (&DAT_14ca8c1f0 +
                       (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*piVar4 * 2) * 8),&local_50
                     );
      }
      if (local_50 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_48 + 8) + 0x50) +
                 (longlong)*(int *)(local_50 + 0xd4) * 8);
        if (lVar3 == 0) {
          lVar3 = FUN_1400bafc2(*(longlong *)(local_48 + 8),(longlong)*(int *)(local_50 + 0xd4),1);
        }
      }
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_1471499ca(param_3,iVar2);
      }
      *(longlong *)(*param_3 + (longlong)iVar2 * 8) = lVar3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147275ecc FUN_147275ecc body=108 status=ok
// SIG undefined FUN_147275ecc(void)

undefined4 * FUN_147275ecc(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f6bb26();
  FUN_145f6bb26();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1d928,0);
  FUN_145f6bb26();
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



// FUNCTION 147275f3a FUN_147275f3a body=137 status=ok
// SIG undefined FUN_147275f3a(void)

undefined4 * FUN_147275f3a(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
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
  FUN_145f53192();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca1d800,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  FUN_145f53192();
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



// FUNCTION 147275fc4 FUN_147275fc4 body=108 status=ok
// SIG undefined FUN_147275fc4(void)

undefined4 * FUN_147275fc4(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e8daa6();
  FUN_145e8daa6();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca1db78,0);
  FUN_145e8daa6();
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



// FUNCTION 14727605c FUN_14727605c body=602 status=ok
// SIG undefined FUN_14727605c(void)

bool FUN_14727605c(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((((((((*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
           (!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)))) &&
          (*(float *)(param_1 + 8) == *(float *)(param_2 + 8))) &&
         (((!NAN(*(float *)(param_1 + 8)) && !NAN(*(float *)(param_2 + 8)) &&
           (*(float *)(param_1 + 0xc) == *(float *)(param_2 + 0xc))) &&
          ((!NAN(*(float *)(param_1 + 0xc)) && !NAN(*(float *)(param_2 + 0xc)) &&
           ((*(float *)(param_1 + 0x10) == *(float *)(param_2 + 0x10) &&
            (!NAN(*(float *)(param_1 + 0x10)) && !NAN(*(float *)(param_2 + 0x10)))))))))) &&
        ((*(float *)(param_1 + 0x14) == *(float *)(param_2 + 0x14) &&
         (((((!NAN(*(float *)(param_1 + 0x14)) && !NAN(*(float *)(param_2 + 0x14)) &&
             (*(float *)(param_1 + 0x18) == *(float *)(param_2 + 0x18))) &&
            (!NAN(*(float *)(param_1 + 0x18)) && !NAN(*(float *)(param_2 + 0x18)))) &&
           ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
            (!NAN(*(float *)(param_1 + 0x1c)) && !NAN(*(float *)(param_2 + 0x1c)))))) &&
          (*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20))))))) &&
       (((!NAN(*(float *)(param_1 + 0x20)) && !NAN(*(float *)(param_2 + 0x20)) &&
         (*(float *)(param_1 + 0x24) == *(float *)(param_2 + 0x24))) &&
        (((!NAN(*(float *)(param_1 + 0x24)) && !NAN(*(float *)(param_2 + 0x24)) &&
          (((*(float *)(param_1 + 0x28) == *(float *)(param_2 + 0x28) &&
            (!NAN(*(float *)(param_1 + 0x28)) && !NAN(*(float *)(param_2 + 0x28)))) &&
           (*(float *)(param_1 + 0x2c) == *(float *)(param_2 + 0x2c))))) &&
         (((!NAN(*(float *)(param_1 + 0x2c)) && !NAN(*(float *)(param_2 + 0x2c)) &&
           (*(float *)(param_1 + 0x30) == *(float *)(param_2 + 0x30))) &&
          (!NAN(*(float *)(param_1 + 0x30)) && !NAN(*(float *)(param_2 + 0x30)))))))))) &&
      ((((*(float *)(param_1 + 0x40) == *(float *)(param_2 + 0x40) &&
         (!NAN(*(float *)(param_1 + 0x40)) && !NAN(*(float *)(param_2 + 0x40)))) &&
        (((*(float *)(param_1 + 0x44) == *(float *)(param_2 + 0x44) &&
          (((!NAN(*(float *)(param_1 + 0x44)) && !NAN(*(float *)(param_2 + 0x44)) &&
            (*(float *)(param_1 + 0x48) == *(float *)(param_2 + 0x48))) &&
           (!NAN(*(float *)(param_1 + 0x48)) && !NAN(*(float *)(param_2 + 0x48)))))) &&
         (((*(float *)(param_1 + 0x4c) == *(float *)(param_2 + 0x4c) &&
           (!NAN(*(float *)(param_1 + 0x4c)) && !NAN(*(float *)(param_2 + 0x4c)))) &&
          (*(float *)(param_1 + 0x60) == *(float *)(param_2 + 0x60))))))) &&
       (((((!NAN(*(float *)(param_1 + 0x60)) && !NAN(*(float *)(param_2 + 0x60)) &&
           (*(float *)(param_1 + 100) == *(float *)(param_2 + 100))) &&
          ((!NAN(*(float *)(param_1 + 100)) && !NAN(*(float *)(param_2 + 100)) &&
           ((((*(float *)(param_1 + 0x68) == *(float *)(param_2 + 0x68) &&
              (!NAN(*(float *)(param_1 + 0x68)) && !NAN(*(float *)(param_2 + 0x68)))) &&
             (*(float *)(param_1 + 0x6c) == *(float *)(param_2 + 0x6c))) &&
            ((!NAN(*(float *)(param_1 + 0x6c)) && !NAN(*(float *)(param_2 + 0x6c)) &&
             (*(float *)(param_1 + 0x70) == *(float *)(param_2 + 0x70))))))))) &&
         (!NAN(*(float *)(param_1 + 0x70)) && !NAN(*(float *)(param_2 + 0x70)))) &&
        ((*(float *)(param_1 + 0x74) == *(float *)(param_2 + 0x74) &&
         (!NAN(*(float *)(param_1 + 0x74)) && !NAN(*(float *)(param_2 + 0x74)))))))))) &&
     ((((((*(float *)(param_1 + 0x78) == *(float *)(param_2 + 0x78) &&
          (((!NAN(*(float *)(param_1 + 0x78)) && !NAN(*(float *)(param_2 + 0x78)) &&
            (*(float *)(param_1 + 0x7c) == *(float *)(param_2 + 0x7c))) &&
           (!NAN(*(float *)(param_1 + 0x7c)) && !NAN(*(float *)(param_2 + 0x7c)))))) &&
         (((*(float *)(param_1 + 0x80) == *(float *)(param_2 + 0x80) &&
           (!NAN(*(float *)(param_1 + 0x80)) && !NAN(*(float *)(param_2 + 0x80)))) &&
          (*(float *)(param_1 + 0x90) == *(float *)(param_2 + 0x90))))) &&
        ((!NAN(*(float *)(param_1 + 0x90)) && !NAN(*(float *)(param_2 + 0x90)) &&
         (*(float *)(param_1 + 0x94) == *(float *)(param_2 + 0x94))))) &&
       ((!NAN(*(float *)(param_1 + 0x94)) && !NAN(*(float *)(param_2 + 0x94)) &&
        (((*(float *)(param_1 + 0x98) == *(float *)(param_2 + 0x98) &&
          (!NAN(*(float *)(param_1 + 0x98)) && !NAN(*(float *)(param_2 + 0x98)))) &&
         (*(float *)(param_1 + 0x9c) == *(float *)(param_2 + 0x9c))))))) &&
      ((!NAN(*(float *)(param_1 + 0x9c)) && !NAN(*(float *)(param_2 + 0x9c)) &&
       (*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0))))))) {
    bVar1 = *(int *)(param_1 + 0xb4) != *(int *)(param_2 + 0xb4);
  }
  return bVar1;
}



// FUNCTION 1472762b6 FUN_1472762b6 body=177 status=ok
// SIG undefined FUN_1472762b6(void)

void FUN_1472762b6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f53912();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca21e70,param_4);
  local_78 = &DAT_14ca21e70;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472847a4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147276368 FUN_147276368 body=662 status=ok
// SIG undefined FUN_147276368(void)

bool FUN_147276368(longlong param_1,longlong param_2)

{
  bool bVar1;
  
  bVar1 = true;
  if ((*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) &&
     (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
    if (((((((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c)) &&
            ((((!NAN(*(float *)(param_1 + 0x1c)) && !NAN(*(float *)(param_2 + 0x1c)) &&
               (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
              (*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20))) &&
             ((!NAN(*(float *)(param_1 + 0x20)) && !NAN(*(float *)(param_2 + 0x20)) &&
              (*(int *)(param_1 + 0x24) == *(int *)(param_2 + 0x24))))))) &&
           (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28))) &&
          (((*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34) &&
            (*(int *)(param_1 + 0x2c) == *(int *)(param_2 + 0x2c))) &&
           ((*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30) &&
            (((*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38) &&
              (*(float *)(param_1 + 0x50) == *(float *)(param_2 + 0x50))) &&
             (!NAN(*(float *)(param_1 + 0x50)) && !NAN(*(float *)(param_2 + 0x50)))))))))) &&
         (((*(float *)(param_1 + 0x58) == *(float *)(param_2 + 0x58) &&
           (!NAN(*(float *)(param_1 + 0x58)) && !NAN(*(float *)(param_2 + 0x58)))) &&
          ((*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c) &&
           (((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
             (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
            ((*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44) &&
             (((*(float *)(param_1 + 0x5c) == *(float *)(param_2 + 0x5c) &&
               (!NAN(*(float *)(param_1 + 0x5c)) && !NAN(*(float *)(param_2 + 0x5c)))) &&
              (*(float *)(param_1 + 0x60) == *(float *)(param_2 + 0x60))))))))))))) &&
        (((!NAN(*(float *)(param_1 + 0x60)) && !NAN(*(float *)(param_2 + 0x60)) &&
          (*(float *)(param_1 + 100) == *(float *)(param_2 + 100))) &&
         ((!NAN(*(float *)(param_1 + 100)) && !NAN(*(float *)(param_2 + 100)) &&
          (((((*(float *)(param_1 + 0x68) == *(float *)(param_2 + 0x68) &&
              (!NAN(*(float *)(param_1 + 0x68)) && !NAN(*(float *)(param_2 + 0x68)))) &&
             ((*(int *)(param_1 + 0x4c) == *(int *)(param_2 + 0x4c) &&
              (((((*(int *)(param_1 + 0x80) == *(int *)(param_2 + 0x80) &&
                  (*(int *)(param_1 + 0x84) == *(int *)(param_2 + 0x84))) &&
                 (*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88))) &&
                ((*(int *)(param_1 + 0x8c) == *(int *)(param_2 + 0x8c) &&
                 (*(int *)(param_1 + 0x90) == *(int *)(param_2 + 0x90))))) &&
               (*(int *)(param_1 + 0x94) == *(int *)(param_2 + 0x94))))))) &&
            ((*(int *)(param_1 + 0x98) == *(int *)(param_2 + 0x98) &&
             (*(char *)(param_1 + 0x9c) == *(char *)(param_2 + 0x9c))))) &&
           (*(char *)(param_1 + 0x9d) == *(char *)(param_2 + 0x9d))))))))) &&
       (((((*(char *)(param_1 + 0x9e) == *(char *)(param_2 + 0x9e) &&
           (*(char *)(param_1 + 0x9f) == *(char *)(param_2 + 0x9f))) &&
          (*(char *)(param_1 + 0xa0) == *(char *)(param_2 + 0xa0))) &&
         (((*(float *)(param_1 + 0xa8) == *(float *)(param_2 + 0xa8) &&
           (!NAN(*(float *)(param_1 + 0xa8)) && !NAN(*(float *)(param_2 + 0xa8)))) &&
          ((*(int *)(param_1 + 0xac) == *(int *)(param_2 + 0xac) &&
           ((*(int *)(param_1 + 0xb0) == *(int *)(param_2 + 0xb0) &&
            (*(int *)(param_1 + 0xb4) == *(int *)(param_2 + 0xb4))))))))) &&
        (*(int *)(param_1 + 0xb8) == *(int *)(param_2 + 0xb8))))) {
      bVar1 = *(char *)(param_1 + 0xa1) != *(char *)(param_2 + 0xa1);
    }
  }
  return bVar1;
}



// FUNCTION 1472765fe FUN_1472765fe body=137 status=ok
// SIG undefined FUN_1472765fe(void)

undefined4 * FUN_1472765fe(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
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
  FUN_145f53192();
  FUN_1448e935e(param_2,&local_38,&DAT_14ca1d800,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  FUN_145f53192();
  *param_1 = local_38;
  param_1[1] = uStack_34;
  param_1[2] = uStack_30;
  param_1[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147276688 FUN_147276688 body=177 status=ok
// SIG undefined FUN_147276688(void)

void FUN_147276688(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f53f08();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca220c0,param_4);
  local_78 = &DAT_14ca220c0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14728541c(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14727673a FUN_14727673a body=81 status=ok
// SIG undefined FUN_14727673a(void)

bool FUN_14727673a(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0x2bf4) >> 3 & 1;
  if (-1 < (int)*(uint *)(DAT_14ca1f9c8 + 4)) {
    uVar1 = *(uint *)(DAT_14ca1f9c8 + 4);
  }
  if (uVar1 == 0) {
    bVar2 = false;
  }
  else {
    FUN_1472768f0();
    bVar2 = DAT_14ca22284 < DAT_14ca22258 || DAT_14ca22234 < DAT_14ca22208;
  }
  return bVar2;
}



// FUNCTION 14727678b FUN_14727678b body=177 status=ok
// SIG undefined FUN_14727678b(void)

void FUN_14727678b(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e4a4f8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca21de8,param_4);
  local_78 = &DAT_14ca21de8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147285dfa(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14727683d FUN_14727683d body=177 status=ok
// SIG undefined FUN_14727683d(void)

void FUN_14727683d(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e8e284();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca22038,param_4);
  local_78 = &DAT_14ca22038;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1472861da(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472768f0 FUN_1472768f0 body=205 status=ok
// SIG undefined FUN_1472768f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1472768f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca222a8) {
    FUN_144b3d300(&DAT_14ca222a8);
    if (DAT_14ca222a8 == -1) {
      DAT_14ca22220 = 0;
      DAT_14ca22228 = 0;
      DAT_14ca22200 = 0;
      _DAT_14ca22208 = 0;
      _DAT_14ca2222c = 0xffffffff00000080;
      DAT_14ca22234 = 0;
      DAT_14ca22240 = 0;
      DAT_14ca22248 = 0;
      DAT_14ca22270 = 0;
      DAT_14ca22278 = 0;
      DAT_14ca22250 = 0;
      _DAT_14ca22258 = 0;
      _DAT_14ca2227c = 0xffffffff00000080;
      DAT_14ca22284 = 0;
      DAT_14ca22290 = 0;
      DAT_14ca22298 = 0;
      DAT_14ca222a0 = 0;
      atexit((_func_5014 *)&LAB_142e95dfe);
      _Init_thread_footer(&DAT_14ca222a8);
      return;
    }
  }
  return;
}



// FUNCTION 1472769bd FUN_1472769bd body=165 status=ok
// SIG undefined FUN_1472769bd(void)

longlong * FUN_1472769bd(longlong *param_1)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1472768f0();
  if (DAT_14ca22284 < DAT_14ca22258) {
    *(undefined4 *)(param_1 + 1) = 1;
    FUN_14728689a(param_1,0);
    *(undefined4 *)*param_1 = 1;
  }
  FUN_1472768f0();
  if (DAT_14ca22234 < DAT_14ca22208) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14728689a(param_1,iVar1);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = 0;
  }
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    if (*(int *)((longlong)param_1 + 0xc) == 0) {
      FUN_14728689a(param_1,0);
    }
    *(undefined4 *)*param_1 = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 147276a62 FUN_147276a62 body=136 status=ok
// SIG undefined FUN_147276a62(void)

undefined4 FUN_147276a62(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [40];
  undefined4 *local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(DAT_14ca1fa88 + 4);
  FUN_1472768f0();
  if (iVar1 < 1) {
    uVar2 = 0;
    if (DAT_14ca22234 < DAT_14ca22208) goto LAB_147276aae;
  }
  else {
    uVar2 = 1;
    if (DAT_14ca22284 < DAT_14ca22258) goto LAB_147276aae;
  }
  FUN_1472769bd(local_20);
  uVar2 = *local_20[0];
  if (local_20[0] != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_147276aae:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147276aeb FUN_147276aeb body=247 status=ok
// SIG undefined FUN_147276aeb(void)

undefined8 FUN_147276aeb(undefined4 param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  local_30 = *(int *)(DAT_14ca1fa58 + 0x18);
  lVar3 = (longlong)local_30;
  pvVar1 = *(void **)(DAT_14ca1fa58 + 0x10);
  if (lVar3 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar3 * 2);
  }
  FUN_1472768f0();
  pvVar1 = local_38;
  local_48 = (void *)0x0;
  lVar3 = (longlong)local_30;
  local_40 = local_30;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_30,0);
    memcpy(local_48,pvVar1,lVar3 * 2);
  }
  uVar2 = FUN_147276be4(&local_48,param_1);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147276be4 FUN_147276be4 body=315 status=ok
// SIG undefined FUN_147276be4(void)

undefined8 FUN_147276be4(longlong *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  iVar3 = FUN_14727ec04(uVar2,param_1);
  if (iVar3 == -1) {
    if (DAT_14ca22208 <= DAT_14ca22234 || param_2 != '\0') {
      uVar7 = 0;
      goto LAB_147276ca6;
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca22210;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca22228 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_40);
      lVar4 = (longlong)local_30._4_4_;
    }
    uVar5 = DAT_14ca22200 + lVar4 * 0x20;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    uVar5 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    uVar2 = FUN_144a49b4a(uVar5,puVar6);
    iVar3 = FUN_14727ec04(uVar2,param_1);
    uVar5 = 0;
    if (iVar3 != -1) {
      uVar5 = (longlong)iVar3 * 0x20 + DAT_14ca22200;
    }
  }
  uVar7 = *(undefined8 *)(uVar5 + 0x10);
LAB_147276ca6:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147276d20 FUN_147276d20 body=241 status=ok
// SIG undefined FUN_147276d20(void)

undefined8 FUN_147276d20(void)

{
  void *pvVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (void *)0x0;
  local_28 = *(int *)(DAT_14ca1fa70 + 0x18);
  lVar3 = (longlong)local_28;
  pvVar1 = *(void **)(DAT_14ca1fa70 + 0x10);
  if (lVar3 == 0) {
    local_24 = 0;
  }
  else {
    FUN_1446dd670(&local_30,local_28,0);
    memcpy(local_30,pvVar1,lVar3 * 2);
  }
  FUN_1472768f0();
  pvVar1 = local_30;
  local_40 = (void *)0x0;
  lVar3 = (longlong)local_28;
  local_38 = local_28;
  if (lVar3 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_28,0);
    memcpy(local_40,pvVar1,lVar3 * 2);
  }
  uVar2 = FUN_147276e12(&local_40,0);
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147276e12 FUN_147276e12 body=315 status=ok
// SIG undefined FUN_147276e12(void)

undefined8 FUN_147276e12(longlong *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = (int)param_1[1];
  if (iVar3 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_1;
  }
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  iVar3 = FUN_14727eca0(uVar2,param_1);
  if (iVar3 == -1) {
    if (DAT_14ca22258 <= DAT_14ca22284 || param_2 != '\0') {
      uVar7 = 0;
      goto LAB_147276ed4;
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca22260;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca22278 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_40);
      lVar4 = (longlong)local_30._4_4_;
    }
    uVar5 = DAT_14ca22250 + lVar4 * 0x20;
  }
  else {
    iVar3 = (int)param_1[1];
    if (iVar3 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_1;
    }
    uVar5 = (ulonglong)(iVar3 - 1);
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    uVar2 = FUN_144a49b4a(uVar5,puVar6);
    iVar3 = FUN_14727eca0(uVar2,param_1);
    uVar5 = 0;
    if (iVar3 != -1) {
      uVar5 = (longlong)iVar3 * 0x20 + DAT_14ca22250;
    }
  }
  uVar7 = *(undefined8 *)(uVar5 + 0x10);
LAB_147276ed4:
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 147276f4e FUN_147276f4e body=44 status=ok
// SIG undefined FUN_147276f4e(void)

void FUN_147276f4e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147276f82 FUN_147276f82 body=96 status=ok
// SIG undefined FUN_147276f82(void)

undefined8 FUN_147276f82(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145cef10a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca222b0,1);
  return uVar3;
}



// FUNCTION 147276fe2 FUN_147276fe2 body=138 status=ok
// SIG undefined FUN_147276fe2(void)

void * FUN_147276fe2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727706c FUN_14727706c body=44 status=ok
// SIG undefined FUN_14727706c(void)

void FUN_14727706c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472770a0 FUN_1472770a0 body=96 status=ok
// SIG undefined FUN_1472770a0(void)

undefined8 FUN_1472770a0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea0a8e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca223d0,1);
  return uVar3;
}



// FUNCTION 147277100 FUN_147277100 body=138 status=ok
// SIG undefined FUN_147277100(void)

void * FUN_147277100(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727718a FUN_14727718a body=44 status=ok
// SIG undefined FUN_14727718a(void)

void FUN_14727718a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472771be FUN_1472771be body=96 status=ok
// SIG undefined FUN_1472771be(void)

undefined8 FUN_1472771be(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8e7f4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22458,1);
  return uVar3;
}



// FUNCTION 14727721e FUN_14727721e body=138 status=ok
// SIG undefined FUN_14727721e(void)

void * FUN_14727721e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472772a8 FUN_1472772a8 body=44 status=ok
// SIG undefined FUN_1472772a8(void)

void FUN_1472772a8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472772dc FUN_1472772dc body=96 status=ok
// SIG undefined FUN_1472772dc(void)

undefined8 FUN_1472772dc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea1000();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca224e0,1);
  return uVar3;
}



// FUNCTION 14727733c FUN_14727733c body=138 status=ok
// SIG undefined FUN_14727733c(void)

void * FUN_14727733c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472773c6 FUN_1472773c6 body=44 status=ok
// SIG undefined FUN_1472773c6(void)

void FUN_1472773c6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472773fa FUN_1472773fa body=96 status=ok
// SIG undefined FUN_1472773fa(void)

undefined8 FUN_1472773fa(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8ed64();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22568,1);
  return uVar3;
}



// FUNCTION 14727745a FUN_14727745a body=138 status=ok
// SIG undefined FUN_14727745a(void)

void * FUN_14727745a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1472774e4 FUN_1472774e4 body=44 status=ok
// SIG undefined FUN_1472774e4(void)

void FUN_1472774e4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147277518 FUN_147277518 body=96 status=ok
// SIG undefined FUN_147277518(void)

undefined8 FUN_147277518(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f323da();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca225f0,1);
  return uVar3;
}



// FUNCTION 147277578 FUN_147277578 body=138 status=ok
// SIG undefined FUN_147277578(void)

void * FUN_147277578(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147277602 FUN_147277602 body=44 status=ok
// SIG undefined FUN_147277602(void)

void FUN_147277602(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147277636 FUN_147277636 body=96 status=ok
// SIG undefined FUN_147277636(void)

undefined8 FUN_147277636(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e72cfc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22678,1);
  return uVar3;
}



// FUNCTION 147277696 FUN_147277696 body=138 status=ok
// SIG undefined FUN_147277696(void)

void * FUN_147277696(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 147277720 FUN_147277720 body=44 status=ok
// SIG undefined FUN_147277720(void)

void FUN_147277720(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147277754 FUN_147277754 body=96 status=ok
// SIG undefined FUN_147277754(void)

undefined8 FUN_147277754(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8f2d4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22700,1);
  return uVar3;
}



// FUNCTION 1472777b4 FUN_1472777b4 body=138 status=ok
// SIG undefined FUN_1472777b4(void)

void * FUN_1472777b4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727783e FUN_14727783e body=44 status=ok
// SIG undefined FUN_14727783e(void)

void FUN_14727783e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147277872 FUN_147277872 body=96 status=ok
// SIG undefined FUN_147277872(void)

undefined8 FUN_147277872(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8f844();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22788,1);
  return uVar3;
}



// FUNCTION 1472778d2 FUN_1472778d2 body=138 status=ok
// SIG undefined FUN_1472778d2(void)

void * FUN_1472778d2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 14727795c FUN_14727795c body=44 status=ok
// SIG undefined FUN_14727795c(void)

void FUN_14727795c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147277990 FUN_147277990 body=96 status=ok
// SIG undefined FUN_147277990(void)

undefined8 FUN_147277990(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7326a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca22810,1);
  return uVar3;
}



// FUNCTION 1472779f0 FUN_1472779f0 body=138 status=ok
// SIG undefined FUN_1472779f0(void)

void * FUN_1472779f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}


