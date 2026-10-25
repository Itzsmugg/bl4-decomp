// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472380fc FUN_1472380fc body=384 status=ok
// SIG undefined FUN_1472380fc(void)

void FUN_1472380fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca07488;
  if (DAT_14ca07488 != 0) {
    LOCK();
    *(int *)(DAT_14ca07488 + 8) = *(int *)(DAT_14ca07488 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca07440;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2893d0;
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



// FUNCTION 14723827e FUN_14723827e body=38 status=ok
// SIG undefined FUN_14723827e(void)

undefined8 FUN_14723827e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472382a4 FUN_1472382a4 body=163 status=ok
// SIG undefined FUN_1472382a4(void)

void FUN_1472382a4(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142dddb40();
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
  FUN_142dddc28(param_1,param_2);
  return;
}



// FUNCTION 147238347 FUN_147238347 body=374 status=ok
// SIG undefined FUN_147238347(void)

void FUN_147238347(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472384be FUN_1472384be body=29 status=ok
// SIG undefined FUN_1472384be(void)

undefined8 FUN_1472384be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472384dc FUN_1472384dc body=384 status=ok
// SIG undefined FUN_1472384dc(void)

void FUN_1472384dc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca076a8;
  if (DAT_14ca076a8 != 0) {
    LOCK();
    *(int *)(DAT_14ca076a8 + 8) = *(int *)(DAT_14ca076a8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca07660;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2893f0;
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



// FUNCTION 14723865e FUN_14723865e body=38 status=ok
// SIG undefined FUN_14723865e(void)

undefined8 FUN_14723865e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147238684 FUN_147238684 body=163 status=ok
// SIG undefined FUN_147238684(void)

void FUN_147238684(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142ddde5c();
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
  FUN_142dddf44(param_1,param_2);
  return;
}



// FUNCTION 147238727 FUN_147238727 body=374 status=ok
// SIG undefined FUN_147238727(void)

void FUN_147238727(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14723889e FUN_14723889e body=110 status=ok
// SIG undefined FUN_14723889e(void)

longlong FUN_14723889e(longlong param_1)

{
  FUN_147227eb4();
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = 0;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined8 *)(param_1 + 0x2f0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  *(undefined8 *)(param_1 + 0x304) = 0;
  *(undefined8 *)(param_1 + 0x30c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x314) = 0;
  *(undefined8 *)(param_1 + 0x31c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x32c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  return param_1;
}



// FUNCTION 14723890c FUN_14723890c body=29 status=ok
// SIG undefined FUN_14723890c(void)

undefined8 FUN_14723890c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14723892a FUN_14723892a body=384 status=ok
// SIG undefined FUN_14723892a(void)

void FUN_14723892a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca07598;
  if (DAT_14ca07598 != 0) {
    LOCK();
    *(int *)(DAT_14ca07598 + 8) = *(int *)(DAT_14ca07598 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca07550;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a289410;
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



// FUNCTION 147238aac FUN_147238aac body=38 status=ok
// SIG undefined FUN_147238aac(void)

undefined8 FUN_147238aac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147238ad2 FUN_147238ad2 body=163 status=ok
// SIG undefined FUN_147238ad2(void)

void FUN_147238ad2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142dde178();
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
  FUN_142dde260(param_1,param_2);
  return;
}



// FUNCTION 147238b75 FUN_147238b75 body=374 status=ok
// SIG undefined FUN_147238b75(void)

void FUN_147238b75(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147238cec FUN_147238cec body=29 status=ok
// SIG undefined FUN_147238cec(void)

undefined8 FUN_147238cec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147238d0a FUN_147238d0a body=384 status=ok
// SIG undefined FUN_147238d0a(void)

void FUN_147238d0a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca07620;
  if (DAT_14ca07620 != 0) {
    LOCK();
    *(int *)(DAT_14ca07620 + 8) = *(int *)(DAT_14ca07620 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca075d8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a289430;
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



// FUNCTION 147238e8c FUN_147238e8c body=38 status=ok
// SIG undefined FUN_147238e8c(void)

undefined8 FUN_147238e8c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147238eb2 FUN_147238eb2 body=163 status=ok
// SIG undefined FUN_147238eb2(void)

void FUN_147238eb2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142dde494();
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
  FUN_142dde57c(param_1,param_2);
  return;
}



// FUNCTION 147238f55 FUN_147238f55 body=374 status=ok
// SIG undefined FUN_147238f55(void)

void FUN_147238f55(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472390cb FUN_1472390cb body=36 status=ok
// SIG undefined FUN_1472390cb(void)

bool FUN_1472390cb(void)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14498f84a();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(DAT_14ca08660 + 4) != 0;
  }
  return bVar2;
}



// FUNCTION 1472390ef FUN_1472390ef body=103 status=ok
// SIG undefined FUN_1472390ef(void)

undefined8 FUN_1472390ef(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144a7ebcb();
  if (((cVar2 != '\0') && (*(int *)(DAT_14ca08678 + 4) != 0)) &&
     ((*(int *)(param_1 + 0x10) == 1 ||
      ((*(int *)(param_1 + 0x10) == 2 &&
       (cVar2 = FUN_144b2acae(**(undefined8 **)(param_1 + 8)), cVar2 != '\0')))))) {
    lVar1 = **(longlong **)(param_1 + 8);
    if (*(char *)(lVar1 + 0x3098) == '\x01') {
      uVar3 = CONCAT71((int7)((ulonglong)*(longlong **)(param_1 + 8) >> 8),1);
      if (*(char *)(lVar1 + 0x23e8) != '\x01') {
        return uVar3;
      }
      if (*(char *)(lVar1 + 0x23ea) != '\0') {
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 147239156 FUN_147239156 body=63 status=ok
// SIG undefined FUN_147239156(void)

undefined8 FUN_147239156(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_142dc9987();
  if ((((cVar1 == '\0') || (cVar1 = FUN_1472390ef(param_1), cVar1 == '\0')) ||
      (DAT_14ca84efa != '\x01')) || (uVar2 = 1, *(int *)(DAT_14ca08690 + 4) == 0)) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147239196 FUN_147239196 body=42 status=ok
// SIG undefined FUN_147239196(void)

void FUN_147239196(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472391ea FUN_1472391ea body=96 status=ok
// SIG undefined FUN_1472391ea(void)

undefined8 FUN_1472391ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e891d8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e068,1);
  return uVar3;
}



// FUNCTION 14723924a FUN_14723924a body=52 status=ok
// SIG undefined FUN_14723924a(void)

void FUN_14723924a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723927e FUN_14723927e body=42 status=ok
// SIG undefined FUN_14723927e(void)

void FUN_14723927e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472392d2 FUN_1472392d2 body=96 status=ok
// SIG undefined FUN_1472392d2(void)

undefined8 FUN_1472392d2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e89748();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e0f0,1);
  return uVar3;
}



// FUNCTION 147239332 FUN_147239332 body=52 status=ok
// SIG undefined FUN_147239332(void)

void FUN_147239332(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147239366 FUN_147239366 body=42 status=ok
// SIG undefined FUN_147239366(void)

void FUN_147239366(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472393ba FUN_1472393ba body=96 status=ok
// SIG undefined FUN_1472393ba(void)

undefined8 FUN_1472393ba(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e89cb8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e178,1);
  return uVar3;
}



// FUNCTION 14723941a FUN_14723941a body=52 status=ok
// SIG undefined FUN_14723941a(void)

void FUN_14723941a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723944e FUN_14723944e body=42 status=ok
// SIG undefined FUN_14723944e(void)

void FUN_14723944e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147239484 FUN_147239484 body=96 status=ok
// SIG undefined FUN_147239484(void)

undefined8 FUN_147239484(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145dd932e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e200,1);
  return uVar3;
}



// FUNCTION 1472394e4 FUN_1472394e4 body=52 status=ok
// SIG undefined FUN_1472394e4(void)

void FUN_1472394e4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147239518 FUN_147239518 body=42 status=ok
// SIG undefined FUN_147239518(void)

void FUN_147239518(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147239572 FUN_147239572 body=67 status=ok
// SIG undefined FUN_147239572(void)

undefined8 FUN_147239572(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1472395b6 FUN_1472395b6 body=52 status=ok
// SIG undefined FUN_1472395b6(void)

void FUN_1472395b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472395ea FUN_1472395ea body=42 status=ok
// SIG undefined FUN_1472395ea(void)

void FUN_1472395ea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147239620 FUN_147239620 body=96 status=ok
// SIG undefined FUN_147239620(void)

undefined8 FUN_147239620(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e2358a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e398,1);
  return uVar3;
}



// FUNCTION 147239680 FUN_147239680 body=52 status=ok
// SIG undefined FUN_147239680(void)

void FUN_147239680(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1472396b4 FUN_1472396b4 body=42 status=ok
// SIG undefined FUN_1472396b4(void)

void FUN_1472396b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472396f4 FUN_1472396f4 body=67 status=ok
// SIG undefined FUN_1472396f4(void)

undefined8 FUN_1472396f4(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_1471dcd4e(uVar1,param_1);
  FUN_14744193e(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147239738 FUN_147239738 body=52 status=ok
// SIG undefined FUN_147239738(void)

void FUN_147239738(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  thunk_FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723976c FUN_14723976c body=42 status=ok
// SIG undefined FUN_14723976c(void)

void FUN_14723976c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472397d6 FUN_1472397d6 body=96 status=ok
// SIG undefined FUN_1472397d6(void)

undefined8 FUN_1472397d6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb659c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e420,1);
  return uVar3;
}



// FUNCTION 147239836 FUN_147239836 body=52 status=ok
// SIG undefined FUN_147239836(void)

void FUN_147239836(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723986a FUN_14723986a body=42 status=ok
// SIG undefined FUN_14723986a(void)

void FUN_14723986a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472398ca FUN_1472398ca body=96 status=ok
// SIG undefined FUN_1472398ca(void)

undefined8 FUN_1472398ca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb6b14();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e4a8,1);
  return uVar3;
}



// FUNCTION 14723992a FUN_14723992a body=52 status=ok
// SIG undefined FUN_14723992a(void)

void FUN_14723992a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723995e FUN_14723995e body=42 status=ok
// SIG undefined FUN_14723995e(void)

void FUN_14723995e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472399be FUN_1472399be body=96 status=ok
// SIG undefined FUN_1472399be(void)

undefined8 FUN_1472399be(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f7b21c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e530,1);
  return uVar3;
}



// FUNCTION 147239a1e FUN_147239a1e body=52 status=ok
// SIG undefined FUN_147239a1e(void)

void FUN_147239a1e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147239a52 FUN_147239a52 body=42 status=ok
// SIG undefined FUN_147239a52(void)

void FUN_147239a52(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147239ab2 FUN_147239ab2 body=96 status=ok
// SIG undefined FUN_147239ab2(void)

undefined8 FUN_147239ab2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e8a228();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e5b8,1);
  return uVar3;
}



// FUNCTION 147239b12 FUN_147239b12 body=52 status=ok
// SIG undefined FUN_147239b12(void)

void FUN_147239b12(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147239b46 FUN_147239b46 body=385 status=ok
// SIG undefined FUN_147239b46(void)

void FUN_147239b46(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [2];
  undefined2 uStack_4e;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar5 = *(int *)(DAT_14ca086a8 + 4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar3 = FUN_142dc9987(uVar1);
  if ((cVar3 != '\0') && (cVar3 = FUN_1472390ef(uVar1), 0 < iVar5 && cVar3 == '\x01')) {
    uVar4 = 0;
    bVar2 = true;
    do {
      bVar6 = bVar2;
      local_50[0] = 0;
      uStack_4e = 1;
      iVar5 = 0;
      if (*(int *)(DAT_14ca04a00 + 4) == 0) {
        iVar5 = *(int *)(DAT_14ca04898 + 4);
      }
      uStack_4a = iVar5 != 0;
      uStack_4c = 0;
      uStack_4b = uVar4;
      FUN_147239cc8(*(undefined8 *)(param_1 + 0x13818),&local_60,local_50);
      lVar7 = 0;
      if (local_60 != 0) {
        lVar7 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_58 + 8) + 0x50) +
                 (longlong)*(int *)(local_60 + 0xd4) * 8);
        if (lVar7 == 0) {
          lVar7 = FUN_1400bafc2(*(longlong *)(local_58 + 8),(longlong)*(int *)(local_60 + 0xd4),1);
        }
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1471499ca(param_2,iVar5);
      }
      *(longlong *)(*param_2 + (longlong)iVar5 * 8) = lVar7;
      uVar4 = 1;
      bVar2 = false;
    } while (bVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147239cc8 FUN_147239cc8 body=159 status=ok
// SIG undefined FUN_147239cc8(void)

undefined4 * FUN_147239cc8(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
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
  bVar6 = param_3[6];
  FUN_146094ffa();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca08c90,
                (uint)bVar1 +
                ((uint)bVar3 * 2 + (((uint)bVar5 + (uint)bVar6 * 2) * 3 + (uint)bVar4) * 4 |
                (uint)bVar2) * 2);
  FUN_146094ffa();
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



// FUNCTION 147239d68 FUN_147239d68 body=535 status=ok
// SIG undefined FUN_147239d68(void)

/* WARNING: Removing unreachable block (ram,0x000147239e59) */

void FUN_147239d68(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  undefined1 local_60 [2];
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(DAT_14ca086a8 + 4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  cVar4 = FUN_142dc9987(uVar2);
  if (((cVar4 != '\0') && (cVar4 = FUN_1472390ef(uVar2), cVar4 != '\0')) &&
     (cVar4 = FUN_147239156(*(undefined8 *)(param_1 + 8)), cVar4 == '\0')) {
    uVar5 = 0;
    bVar3 = true;
    do {
      bVar7 = bVar3;
      local_60[0] = 0;
      uStack_5e = 0;
      iVar6 = *(int *)(DAT_14ca08750 + 4);
      if (1 < iVar6) {
        iVar6 = 2;
      }
      uStack_5c = (char)iVar6;
      if (iVar6 < 1) {
        uStack_5c = 0;
      }
      iVar6 = 0;
      if (*(int *)(DAT_14ca04a00 + 4) == 0) {
        iVar6 = *(int *)(DAT_14ca04898 + 4);
      }
      uStack_5a = iVar6 != 0;
      uStack_5d = 0 < iVar1;
      uStack_5b = uVar5;
      FUN_147239cc8(*(undefined8 *)(param_1 + 0x13818),&local_58,local_60);
      lVar8 = 0;
      if (local_58 != 0) {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                 (longlong)*(int *)(local_58 + 0xd4) * 8);
        if (lVar8 == 0) {
          lVar8 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
        }
      }
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_1471499ca(param_2,iVar6);
      }
      *(longlong *)(*param_2 + (longlong)iVar6 * 8) = lVar8;
      uVar5 = 1;
      bVar3 = false;
    } while (bVar7);
    iVar1 = *(int *)(DAT_14ca04a00 + 4);
    uVar2 = *(undefined8 *)(param_1 + 0x13818);
    FUN_146095268();
    FUN_1448e935e(uVar2,&local_58,&DAT_14ca08ee0,(iVar1 != 0) * '\x02');
    FUN_146095268();
    if (local_58 == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)
               (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
               (longlong)*(int *)(local_58 + 0xd4) * 8);
      if (lVar8 == 0) {
        lVar8 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
      }
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1471499ca(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar8;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147239f80 FUN_147239f80 body=706 status=ok
// SIG undefined FUN_147239f80(void)

void FUN_147239f80(longlong param_1,longlong param_2,undefined8 *param_3,void *param_4,
                  undefined4 *param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  char cVar15;
  int iVar16;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_71;
  undefined1 local_70;
  uint local_6f;
  undefined2 uStack_6b;
  undefined1 uStack_69;
  uint uStack_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar11 = *param_3;
  uVar13 = param_3[1];
  uVar9 = param_3[3];
  param_9[2] = param_3[2];
  param_9[3] = uVar9;
  *param_9 = uVar11;
  param_9[1] = uVar13;
  memcpy(param_9 + 4,param_4,0x270);
  param_9[0x52] = *(undefined8 *)((longlong)param_4 + 0x270);
  param_9[0x53] = *(undefined8 *)((longlong)param_4 + 0x278);
  param_9[0x5a] = *(undefined8 *)((longlong)param_4 + 0x2b0);
  uVar11 = *(undefined8 *)((longlong)param_4 + 0x280);
  uVar13 = *(undefined8 *)((longlong)param_4 + 0x288);
  uVar9 = *(undefined8 *)((longlong)param_4 + 0x290);
  uVar10 = *(undefined8 *)((longlong)param_4 + 0x298);
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x2a4);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x2a8);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x2ac);
  *(undefined4 *)(param_9 + 0x58) = *(undefined4 *)((longlong)param_4 + 0x2a0);
  *(undefined4 *)((longlong)param_9 + 0x2c4) = uVar2;
  *(undefined4 *)(param_9 + 0x59) = uVar3;
  *(undefined4 *)((longlong)param_9 + 0x2cc) = uVar4;
  param_9[0x56] = uVar9;
  param_9[0x57] = uVar10;
  param_9[0x54] = uVar11;
  param_9[0x55] = uVar13;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  uVar4 = param_5[3];
  uVar5 = param_5[4];
  uVar6 = param_5[5];
  uVar7 = param_5[6];
  uVar8 = param_5[7];
  *(undefined4 *)(param_9 + 0x5c) = *param_5;
  *(undefined4 *)((longlong)param_9 + 0x2e4) = uVar2;
  *(undefined4 *)(param_9 + 0x5d) = uVar3;
  *(undefined4 *)((longlong)param_9 + 0x2ec) = uVar4;
  *(undefined4 *)(param_9 + 0x5e) = uVar5;
  *(undefined4 *)((longlong)param_9 + 0x2f4) = uVar6;
  *(undefined4 *)(param_9 + 0x5f) = uVar7;
  *(undefined4 *)((longlong)param_9 + 0x2fc) = uVar8;
  local_70 = *(undefined1 *)(param_6 + 0x94);
  uVar13 = 0;
  uStack_68 = uStack_68 & 0xffffff00;
  local_6f = 0;
  uStack_6b = 0;
  local_60 = param_6;
  local_88 = &local_71;
  local_71 = 0;
  uVar11 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,param_6 + 8);
  param_9[0x60] = uVar11;
  param_9[0x61] = param_7;
  param_9[0x62] = param_8;
  *(undefined4 *)(param_9 + 99) = *(undefined4 *)(DAT_14ca086c0 + 4);
  *(undefined4 *)((longlong)param_9 + 0x31c) = *(undefined4 *)(DAT_14ca086d8 + 4);
  *(undefined4 *)(param_9 + 100) = *(undefined4 *)(DAT_14ca086f0 + 4);
  *(undefined4 *)((longlong)param_9 + 0x324) = *(undefined4 *)(DAT_14ca08708 + 4);
  uVar11 = FUN_1472daef4(param_1,0);
  param_9[0x66] = uVar11;
  iVar16 = 1;
  if (1 < *(int *)(DAT_14ca08720 + 4)) {
    iVar16 = *(int *)(DAT_14ca08720 + 4);
  }
  *(int *)(param_9 + 0x65) = iVar16;
  *(undefined4 *)((longlong)param_9 + 0x32c) = *(undefined4 *)(DAT_14ca08738 + 4);
  lVar12 = FUN_142fe369c(param_1);
  if (*(longlong *)(lVar12 + 0x13b00) != 0) {
    lVar12 = FUN_142fe369c(param_1);
    local_58 = *(longlong *)(lVar12 + 0x13b00);
    local_70 = 0;
    local_6f = local_6f & 0xffffff;
    uStack_6b = 0;
    uStack_69 = 0;
    uStack_68 = 0xffffffff;
    local_60 = 0;
    if ((*(byte *)(local_58 + 0x68) & 0x80) != 0) {
      local_70 = 0x1c;
    }
    uVar13 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_58 + 8,&local_70);
  }
  param_9[0x68] = uVar13;
  lVar12 = FUN_142fe369c(param_1);
  lVar14 = FUN_145c90888();
  cVar15 = '\x02';
  if (*(char *)(lVar14 + 0x41) != '\x03') {
    cVar15 = *(char *)(lVar14 + 0x41);
  }
  param_9[0x6a] = *(undefined8 *)(lVar12 + 0x13b08);
  *(char *)(param_9 + 0x6b) = cVar15;
  plVar1 = *(longlong **)(param_1 + 0x13af8);
  if (plVar1 == (longlong *)0x0) {
    uVar11 = 0;
  }
  else {
    uVar11 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_2 + 0x18));
  }
  param_9[0x67] = uVar11;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a243 FUN_14723a243 body=626 status=ok
// SIG undefined FUN_14723a243(void)

void FUN_14723a243(longlong param_1,longlong param_2,undefined8 *param_3,void *param_4,
                  longlong param_5,undefined8 *param_6)

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
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 local_61;
  undefined1 local_60;
  uint local_5f;
  undefined2 uStack_5b;
  undefined1 uStack_59;
  uint uStack_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar14 = *param_3;
  uVar16 = param_3[1];
  uVar13 = param_3[3];
  param_6[2] = param_3[2];
  param_6[3] = uVar13;
  *param_6 = uVar14;
  param_6[1] = uVar16;
  memcpy(param_6 + 4,param_4,0x270);
  param_6[0x52] = *(undefined8 *)((longlong)param_4 + 0x270);
  param_6[0x53] = *(undefined8 *)((longlong)param_4 + 0x278);
  param_6[0x5a] = *(undefined8 *)((longlong)param_4 + 0x2b0);
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x280);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x284);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x288);
  uVar5 = *(undefined4 *)((longlong)param_4 + 0x28c);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x290);
  uVar7 = *(undefined4 *)((longlong)param_4 + 0x294);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x298);
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x29c);
  uVar10 = *(undefined4 *)((longlong)param_4 + 0x2a4);
  uVar11 = *(undefined4 *)((longlong)param_4 + 0x2a8);
  uVar12 = *(undefined4 *)((longlong)param_4 + 0x2ac);
  *(undefined4 *)(param_6 + 0x58) = *(undefined4 *)((longlong)param_4 + 0x2a0);
  *(undefined4 *)((longlong)param_6 + 0x2c4) = uVar10;
  *(undefined4 *)(param_6 + 0x59) = uVar11;
  *(undefined4 *)((longlong)param_6 + 0x2cc) = uVar12;
  *(undefined4 *)(param_6 + 0x56) = uVar6;
  *(undefined4 *)((longlong)param_6 + 0x2b4) = uVar7;
  *(undefined4 *)(param_6 + 0x57) = uVar8;
  *(undefined4 *)((longlong)param_6 + 700) = uVar9;
  *(undefined4 *)(param_6 + 0x54) = uVar2;
  *(undefined4 *)((longlong)param_6 + 0x2a4) = uVar3;
  *(undefined4 *)(param_6 + 0x55) = uVar4;
  *(undefined4 *)((longlong)param_6 + 0x2ac) = uVar5;
  local_60 = *(undefined1 *)(param_5 + 0x94);
  uVar16 = 0;
  uStack_58 = uStack_58 & 0xffffff00;
  local_5f = 0;
  uStack_5b = 0;
  local_50 = param_5;
  local_78 = &local_61;
  local_61 = 0;
  uVar14 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,param_5 + 8);
  param_6[0x5c] = uVar14;
  *(undefined4 *)(param_6 + 0x5d) = *(undefined4 *)(DAT_14ca086c0 + 4);
  *(undefined4 *)((longlong)param_6 + 0x2ec) = *(undefined4 *)(DAT_14ca086d8 + 4);
  *(undefined4 *)(param_6 + 0x5e) = *(undefined4 *)(DAT_14ca086f0 + 4);
  uVar14 = FUN_1472daef4(param_1,0);
  param_6[0x60] = uVar14;
  iVar19 = 1;
  if (1 < *(int *)(DAT_14ca08720 + 4)) {
    iVar19 = *(int *)(DAT_14ca08720 + 4);
  }
  *(int *)((longlong)param_6 + 0x2f4) = iVar19;
  *(undefined4 *)(param_6 + 0x5f) = *(undefined4 *)(DAT_14ca08738 + 4);
  lVar15 = FUN_142fe369c(param_1);
  if (*(longlong *)(lVar15 + 0x13b00) != 0) {
    lVar15 = FUN_142fe369c(param_1);
    local_48 = *(longlong *)(lVar15 + 0x13b00);
    local_60 = 0;
    local_5f = local_5f & 0xffffff;
    uStack_5b = 0;
    uStack_59 = 0;
    uStack_58 = 0xffffffff;
    local_50 = 0;
    if ((*(byte *)(local_48 + 0x68) & 0x80) != 0) {
      local_60 = 0x1c;
    }
    uVar16 = FUN_14475683e(param_2 + 0x198,param_2 + 0x70,local_48 + 8,&local_60);
  }
  param_6[0x62] = uVar16;
  lVar15 = FUN_142fe369c(param_1);
  lVar17 = FUN_145c90888();
  cVar18 = '\x02';
  if (*(char *)(lVar17 + 0x41) != '\x03') {
    cVar18 = *(char *)(lVar17 + 0x41);
  }
  param_6[100] = *(undefined8 *)(lVar15 + 0x13b08);
  *(char *)(param_6 + 0x65) = cVar18;
  plVar1 = *(longlong **)(param_1 + 0x13af8);
  if (plVar1 == (longlong *)0x0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(*plVar1 + 8))(plVar1,*(undefined8 *)(param_2 + 0x18));
  }
  param_6[0x61] = uVar14;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a4b6 FUN_14723a4b6 body=177 status=ok
// SIG undefined FUN_14723a4b6(void)

void FUN_14723a4b6(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e891d8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca0e068,param_4);
  local_78 = &DAT_14ca0e068;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147246776(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a568 FUN_14723a568 body=108 status=ok
// SIG undefined FUN_14723a568(void)

undefined4 * FUN_14723a568(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e89a4a();
  FUN_145e89a4a();
  FUN_1448e935e(param_1,&local_30,&DAT_14ca08a40,0);
  FUN_145e89a4a();
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



// FUNCTION 14723a5d5 FUN_14723a5d5 body=177 status=ok
// SIG undefined FUN_14723a5d5(void)

void FUN_14723a5d5(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e89cb8();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca0e178,param_4);
  local_78 = &DAT_14ca0e178;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147246b2e(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a687 FUN_14723a687 body=177 status=ok
// SIG undefined FUN_14723a687(void)

void FUN_14723a687(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e89748();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca0e0f0,param_4);
  local_78 = &DAT_14ca0e0f0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147246ee6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a73a FUN_14723a73a body=243 status=ok
// SIG undefined FUN_14723a73a(void)

void FUN_14723a73a(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong *local_a0;
  undefined1 local_98 [16];
  ulonglong local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)(param_3 + 0x13818);
  bVar2 = FUN_1471dcd54(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
  local_88[0] = (ulonglong)bVar2 | param_4 & 0xffffffffffff0000;
  FUN_1472431dc(uVar1,local_98,local_88);
  local_88[0] = 0;
  local_78 = (longlong *)0x0;
  local_a8 = param_6;
  local_a0 = local_88;
  FUN_14724327c(param_1,param_2,local_98,param_5);
  if (local_88[0] != 0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723a82e FUN_14723a82e body=570 status=ok
// SIG undefined FUN_14723a82e(void)

void FUN_14723a82e(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined *local_68;
  undefined4 local_5f;
  undefined3 uStack_5b;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_4;
  FUN_147239cc8(*(undefined8 *)(param_3 + 0x13818),&local_90);
  local_58 = param_6;
  FUN_145dd932e();
  local_78 = &local_58;
  local_70 = &uStack_50;
  FUN_1448f70da(CONCAT44(uStack_8c,local_90),&DAT_14ca0e200,param_5);
  uVar4 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  uVar4 = FUN_1472e1976(uVar4,param_1);
  local_58 = CONCAT44(uStack_8c,local_90);
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  FUN_145dd932e();
  FUN_140069376(param_1);
  uVar5 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar3 = FUN_144a8b328(uVar5,2);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 0x3f;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x200);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 0x3f;
  }
  *puVar1 = (ulonglong)puVar6;
  local_78 = param_5;
  local_70 = (undefined4 *)DAT_14ca0e248;
  if (DAT_14ca0e248 != 0) {
    LOCK();
    *(int *)(DAT_14ca0e248 + 8) = *(int *)(DAT_14ca0e248 + 8) + 1;
    UNLOCK();
  }
  local_68 = &DAT_14ca0e200;
  local_98 = 2;
  FUN_140068f1a(puVar7,param_2,&local_78,uVar3);
  *puVar7 = &PTR_FUN_14a28fef0;
  puVar7[0x37] = param_5;
  puVar7[0x38] = param_3;
  puVar7[0x39] = uVar4;
  *(undefined4 *)(puVar7 + 0x3a) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar7 + 0x1d4) = local_58._4_4_;
  *(undefined4 *)(puVar7 + 0x3b) = uStack_50;
  *(undefined4 *)((longlong)puVar7 + 0x1dc) = uStack_4c;
  *(undefined1 *)(puVar7 + 0x3c) = param_7;
  *(uint *)((longlong)puVar7 + 0x1e4) = CONCAT31(uStack_5b,local_5f._3_1_);
  *(undefined4 *)((longlong)puVar7 + 0x1e1) = local_5f;
  puVar7[0x3d] = param_6;
  *(undefined4 *)(puVar7 + 0x3e) = 0x18;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar7);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723aa6a FUN_14723aa6a body=261 status=ok
// SIG undefined FUN_14723aa6a(void)

void FUN_14723aa6a(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  byte bVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar1 = *(undefined8 *)(param_3 + 0x13818);
  bVar2 = FUN_1471dcd54(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
  FUN_145e23466();
  FUN_1448e935e(uVar1,&local_88,&DAT_14ca08db8,(uint)(param_4 >> 0xf) & 0xfe | (uint)bVar2);
  FUN_145e23466();
  local_98 = (undefined4)local_88;
  uStack_94 = local_88._4_4_;
  uStack_90 = uStack_80;
  uStack_8c = uStack_7c;
  local_88 = 0;
  local_78 = (longlong *)0x0;
  local_a8 = param_6;
  local_a0 = &local_88;
  FUN_147243861(param_1,param_2,&local_98,param_5);
  if (local_88 != 0) {
    plVar3 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar3 = local_68;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723ab70 FUN_14723ab70 body=620 status=ok
// SIG undefined FUN_14723ab70(void)

void FUN_14723ab70(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  ulonglong *local_60;
  undefined *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *(undefined8 *)(param_3 + 0x13818);
  FUN_146095268();
  FUN_1448e935e(uVar5,&local_68,&DAT_14ca08ee0,param_4 & 0xff | param_4 >> 0xf & 0xfe);
  FUN_146095268();
  puVar3 = local_68;
  local_70 = local_60;
  local_50 = param_6;
  FUN_145e2358a();
  local_68 = &local_50;
  local_60 = &local_48;
  FUN_1448f70da(puVar3,&DAT_14ca0e398,param_5,&local_68);
  uVar5 = (**(code **)(**(longlong **)(*(longlong *)(param_3 + 8) + 0x178) + 8))();
  local_78 = FUN_1472e1976(uVar5,param_1);
  FUN_145e2358a();
  FUN_140069376(param_1);
  uVar5 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar4 = FUN_144a8b328(uVar5,2);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 0x3f;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x200);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 0x3f;
  }
  *puVar1 = (ulonglong)puVar6;
  local_68 = param_5;
  local_60 = (ulonglong *)DAT_14ca0e3e0;
  if (DAT_14ca0e3e0 != 0) {
    LOCK();
    *(int *)(DAT_14ca0e3e0 + 8) = *(int *)(DAT_14ca0e3e0 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca0e398;
  local_88 = 2;
  FUN_140068f1a(puVar7,param_2,&local_68,uVar4);
  *puVar7 = &PTR_FUN_14a28ff30;
  puVar7[0x37] = param_5;
  puVar7[0x38] = param_3;
  puVar7[0x39] = local_78;
  puVar7[0x3a] = puVar3;
  puVar7[0x3b] = local_70;
  *(undefined1 *)(puVar7 + 0x3c) = 1;
  uVar4 = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar7 + 0x1e1) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x1e4) = local_50._3_4_;
  puVar7[0x3d] = param_6;
  *(undefined4 *)(puVar7 + 0x3e) = 0x18;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar7);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723addd FUN_14723addd body=242 status=ok
// SIG undefined FUN_14723addd(void)

void FUN_14723addd(uint *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  if ((*param_1 & 1) != 0) {
    if ((*param_1 & 2) == 0) {
      lVar6 = (longlong)(int)param_3[1];
      if (0 < lVar6) {
        uVar7 = lVar6 + 1;
        lVar6 = lVar6 * 0x48;
        do {
          lVar6 = lVar6 + -0x48;
          uVar1 = *(uint *)(*param_3 + 0x14 + lVar6);
          if ((int)uVar1 < param_2) {
            puVar8 = *(uint **)(param_1 + 6);
            if (*(uint **)(param_1 + 6) == (uint *)0x0) {
              puVar8 = param_1 + 2;
            }
            uVar3 = uVar1 + 0x1f;
            if (-1 < (int)uVar1) {
              uVar3 = uVar1;
            }
            if ((puVar8[(int)uVar3 >> 5] >> (uVar1 & 0x1f) & 1) != 0) {
              puVar4 = (undefined8 *)(*param_4 + lVar6);
              puVar5 = (undefined8 *)(*param_3 + lVar6);
              for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + 1;
                puVar5 = puVar5 + 1;
              }
            }
          }
          uVar7 = uVar7 - 1;
        } while (1 < uVar7);
      }
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) < 0) {
        FUN_14482a268(param_4,0);
        return;
      }
    }
    else if ((param_3 != param_4) && (0 < (int)param_4[1])) {
      FUN_142df0d66(param_3,param_4);
      *(int *)(param_3 + 1) = (int)param_4[1];
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)param_4 + 0xc);
      param_4[1] = 0;
    }
  }
  return;
}



// FUNCTION 14723aed0 FUN_14723aed0 body=12 status=ok
// SIG undefined FUN_14723aed0(void)

void FUN_14723aed0(longlong param_1)

{
  FUN_144a787a6(param_1 + 0x378);
  return;
}



// FUNCTION 14723aedc FUN_14723aedc body=42 status=ok
// SIG undefined FUN_14723aedc(void)

void FUN_14723aedc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14723af26 FUN_14723af26 body=96 status=ok
// SIG undefined FUN_14723af26(void)

undefined8 FUN_14723af26(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f4f948();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca0e640,1);
  return uVar3;
}



// FUNCTION 14723af86 FUN_14723af86 body=52 status=ok
// SIG undefined FUN_14723af86(void)

void FUN_14723af86(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14723afba FUN_14723afba body=1438 status=ok
// SIG undefined FUN_14723afba(void)

void FUN_14723afba(longlong *param_1,longlong *param_2,uint *param_3)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *_Dst;
  void *_Dst_00;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong _Size;
  longlong lVar19;
  undefined2 *puVar20;
  int iVar21;
  ulonglong uVar22;
  void *pvVar23;
  undefined4 uVar24;
  int iVar25;
  undefined2 *puVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  longlong local_80;
  void *local_78;
  longlong *local_70;
  longlong local_68;
  undefined2 *local_60;
  undefined2 *local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar6 = (ulonglong *)*param_2;
  pvVar23 = (void *)param_2[1];
  uVar22 = *puVar6;
  uVar27 = ((longlong)uVar22 >> 0x18) + (longlong)puVar6;
  if ((uVar22 & 1) == 0) {
    uVar27 = uVar22;
  }
  iVar25 = (int)puVar6[1];
  if (0 < (longlong)iVar25) {
    lVar19 = 0;
    do {
      uVar4 = *(ushort *)(uVar27 + lVar19 * 2);
      lVar18 = *(longlong *)((longlong)pvVar23 + lVar19 * 8);
      if (lVar18 != *(longlong *)(param_3 + (ulonglong)uVar4 * 2 + 2)) {
        lVar17 = *param_1;
        puVar1 = (ulonglong *)(lVar17 + 0x60);
        lVar12 = (longlong)(int)param_1[6] + 1;
        plVar16 = *(longlong **)(lVar17 + 0x60);
        if ((longlong)(int)param_1[6] == 0) {
          plVar16 = (longlong *)((longlong)plVar16 + 7U & 0xfffffffffffffff8);
          plVar14 = plVar16 + 2;
          plVar11 = plVar16;
          if (*(longlong **)(lVar17 + 0x68) < plVar14) {
            local_80 = lVar12;
            local_78 = pvVar23;
            local_70 = param_1;
            FUN_140023dd8(puVar1,0x18);
            plVar16 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
            plVar14 = plVar16 + 2;
            plVar11 = plVar16;
            param_1 = local_70;
            pvVar23 = local_78;
            lVar12 = local_80;
          }
LAB_14723b056:
          uVar24 = (undefined4)lVar12;
          *puVar1 = (ulonglong)plVar14;
        }
        else {
          plVar14 = plVar16 + 2;
          if (plVar14 <= *(longlong **)(lVar17 + 0x68)) {
            plVar11 = (longlong *)param_1[5];
            goto LAB_14723b056;
          }
          plVar11 = (longlong *)((longlong)plVar16 + 7U & 0xfffffffffffffff8);
          plVar16 = plVar11 + lVar12 * 2;
          local_80 = lVar12;
          local_78 = pvVar23;
          local_70 = param_1;
          if (*(longlong **)(lVar17 + 0x68) < plVar16) {
            local_68 = lVar12 * 0x10;
            FUN_140023dd8(puVar1,(uint)(lVar12 * 0x10) | 8);
            plVar11 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
            plVar16 = (longlong *)(local_68 + (longlong)plVar11);
          }
          *puVar1 = (ulonglong)plVar16;
          uVar24 = (undefined4)local_80;
          plVar16 = plVar11;
          param_1 = local_70;
          pvVar23 = local_78;
          if (0 < (int)local_70[6]) {
            lVar12 = 0;
            lVar17 = 0;
            do {
              puVar2 = (undefined4 *)(local_70[5] + lVar12);
              uVar7 = puVar2[1];
              uVar8 = puVar2[2];
              uVar9 = puVar2[3];
              puVar3 = (undefined4 *)((longlong)plVar11 + lVar12);
              *puVar3 = *puVar2;
              puVar3[1] = uVar7;
              puVar3[2] = uVar8;
              puVar3[3] = uVar9;
              lVar17 = lVar17 + 1;
              lVar12 = lVar12 + 0x10;
            } while (lVar17 < (int)local_70[6]);
            plVar16 = (longlong *)(lVar12 + (longlong)plVar11);
          }
        }
        *plVar16 = lVar18;
        *(ushort *)(plVar16 + 1) = uVar4;
        *(undefined1 *)((longlong)plVar16 + 10) = 4;
        param_1[5] = (longlong)plVar11;
        *(undefined4 *)(param_1 + 6) = uVar24;
        *(longlong *)(param_3 + (ulonglong)uVar4 * 2 + 2) = lVar18;
        uVar28 = (uint)uVar4;
        if ((int)(uint)uVar4 < (int)*param_3) {
          uVar28 = *param_3;
        }
        *param_3 = uVar28;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != iVar25);
    iVar25 = (int)puVar6[1];
  }
  uVar22 = puVar6[2];
  if ((uVar22 & 1) != 0) {
    uVar22 = (longlong)puVar6 + ((longlong)uVar22 >> 0x18) + 0x10;
  }
  uVar28 = (uint)puVar6[3];
  if (0 < (int)uVar28) {
    uVar27 = 0;
    do {
      local_4c = *(undefined4 *)(uVar22 + uVar27 * 4);
      FUN_14723b559(param_1,&local_4c,
                    *(undefined8 *)((longlong)pvVar23 + uVar27 * 8 + (ulonglong)(uint)(iVar25 << 3))
                   );
      uVar27 = uVar27 + 1;
    } while (uVar28 != uVar27);
    iVar25 = (int)puVar6[1];
    uVar28 = (uint)puVar6[3];
  }
  uVar5 = (uint)puVar6[5];
  uVar22 = puVar6[4];
  if ((uVar22 & 1) != 0) {
    uVar22 = (longlong)puVar6 + ((longlong)uVar22 >> 0x18) + 0x20;
  }
  if ((ulonglong)uVar5 != 0) {
    uVar27 = 0;
    do {
      local_4c = *(undefined4 *)(uVar22 + uVar27 * 4);
      if ((*(byte *)((longlong)pvVar23 +
                    (uVar27 >> 3 & 0x1fffffff) + (ulonglong)((uVar5 + iVar25 + uVar28) * 8)) >>
           ((uint)uVar27 & 7) & 1) == 0) {
        FUN_14723b659();
      }
      else {
        FUN_14723b5d9(param_1,&local_4c,
                      *(undefined8 *)
                       ((longlong)pvVar23 + uVar27 * 8 + (ulonglong)((iVar25 + uVar28) * 8)));
      }
      uVar27 = uVar27 + 1;
    } while (uVar5 != uVar27);
  }
  puVar20 = (undefined2 *)puVar6[6];
  puVar26 = (undefined2 *)((longlong)puVar6 + ((longlong)puVar20 >> 0x18) + 0x30);
  if (((ulonglong)puVar20 & 1) == 0) {
    puVar26 = puVar20;
  }
  if ((longlong)(int)puVar6[7] != 0) {
    iVar25 = (int)puVar6[5];
    iVar21 = iVar25 + 0xe;
    if (-1 < iVar25 + 7) {
      iVar21 = iVar25 + 7;
    }
    local_60 = puVar26 + (longlong)(int)puVar6[7] * 0xc;
    pvVar23 = (void *)((longlong)pvVar23 +
                      (ulonglong)
                      (uint)((iVar21 >> 3) + ((int)puVar6[3] + iVar25 + (int)puVar6[1]) * 8));
    do {
      puVar20 = *(undefined2 **)(puVar26 + 4);
      if (((ulonglong)puVar20 & 1) != 0) {
        puVar20 = (undefined2 *)((longlong)puVar26 + ((longlong)puVar20 >> 0x18) + 8);
      }
      if ((longlong)*(int *)(puVar26 + 8) != 0) {
        local_58 = puVar20 + (longlong)*(int *)(puVar26 + 8) * 2;
        do {
          local_68 = CONCAT62(local_68._2_6_,*puVar20);
          uVar4 = puVar20[1];
          local_80 = CONCAT62(local_80._2_6_,uVar4);
          _Size = (ulonglong)uVar4;
          local_82 = *puVar26;
          iVar25 = (int)param_1[2];
          iVar21 = iVar25 + (uint)uVar4;
          lVar19 = *param_1;
          puVar6 = (ulonglong *)(lVar19 + 0x10);
          _Dst_00 = *(void **)(lVar19 + 0x10);
          uVar27 = *(ulonglong *)(lVar19 + 0x18);
          uVar22 = (longlong)_Dst_00 + _Size;
          if (iVar25 == 0) {
            if (uVar27 < uVar22) {
              FUN_140023dd8(puVar6,uVar4 + 1);
              _Dst_00 = (void *)*puVar6;
              uVar22 = (longlong)_Dst_00 + _Size;
            }
            *puVar6 = uVar22;
            _Dst = _Dst_00;
          }
          else if (uVar27 < uVar22) {
            uVar22 = (longlong)_Dst_00 + (longlong)iVar21;
            _Dst = _Dst_00;
            local_78 = pvVar23;
            local_70 = param_1;
            if (uVar27 < uVar22) {
              FUN_140023dd8(puVar6,iVar21 + 1);
              _Dst = (void *)*puVar6;
              uVar22 = (longlong)iVar21 + (longlong)_Dst;
            }
            param_1 = local_70;
            *puVar6 = uVar22;
            memcpy(_Dst,(void *)local_70[1],(longlong)(int)local_70[2]);
            _Dst_00 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
            pvVar23 = local_78;
          }
          else {
            _Dst = (void *)param_1[1];
            *puVar6 = uVar22;
          }
          memcpy(_Dst_00,pvVar23,_Size);
          param_1[1] = (longlong)_Dst;
          *(int *)(param_1 + 2) = iVar21;
          lVar18 = *param_1;
          puVar6 = (ulonglong *)(lVar18 + 0x38);
          lVar19 = (longlong)(int)param_1[4] + 1;
          puVar10 = *(undefined8 **)(lVar18 + 0x38);
          if ((longlong)(int)param_1[4] == 0) {
            puVar10 = (undefined8 *)((longlong)puVar10 + 1U & 0xfffffffffffffffe);
            puVar15 = puVar10 + 1;
            puVar13 = puVar10;
            if (*(undefined8 **)(lVar18 + 0x40) < puVar15) {
              FUN_140023dd8(puVar6,10);
              puVar10 = (undefined8 *)(*puVar6 + 1 & 0xfffffffffffffffe);
              puVar15 = puVar10 + 1;
              puVar13 = puVar10;
            }
LAB_14723b260:
            *puVar6 = (ulonglong)puVar15;
          }
          else {
            puVar15 = puVar10 + 1;
            if (puVar15 <= *(undefined8 **)(lVar18 + 0x40)) {
              puVar13 = (undefined8 *)param_1[3];
              goto LAB_14723b260;
            }
            puVar13 = (undefined8 *)((longlong)puVar10 + 1U & 0xfffffffffffffffe);
            puVar10 = puVar13 + lVar19;
            if (*(undefined8 **)(lVar18 + 0x40) < puVar10) {
              FUN_140023dd8(puVar6);
              puVar13 = (undefined8 *)(*puVar6 + 1 & 0xfffffffffffffffe);
              puVar10 = puVar13 + lVar19;
            }
            *puVar6 = (ulonglong)puVar10;
            puVar10 = puVar13;
            if (0 < (int)param_1[4]) {
              lVar18 = 0;
              do {
                *puVar10 = *(undefined8 *)(param_1[3] + lVar18 * 8);
                lVar18 = lVar18 + 1;
                puVar10 = puVar10 + 1;
              } while (lVar18 < (int)param_1[4]);
            }
          }
          *(undefined2 *)puVar10 = local_82;
          *(undefined2 *)((longlong)puVar10 + 2) = (undefined2)local_68;
          *(short *)((longlong)puVar10 + 4) = (short)iVar25;
          *(undefined2 *)((longlong)puVar10 + 6) = (undefined2)local_80;
          param_1[3] = (longlong)puVar13;
          *(int *)(param_1 + 4) = (int)lVar19;
          pvVar23 = (void *)((longlong)pvVar23 + (ulonglong)(ushort)puVar20[1]);
          puVar20 = puVar20 + 2;
        } while (puVar20 != local_58);
      }
      puVar26 = puVar26 + 0xc;
    } while (puVar26 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14723b559 FUN_14723b559 body=127 status=ok
// SIG undefined FUN_14723b559(void)

void FUN_14723b559(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined2 local_12;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_12 = *param_2;
  if (*(char *)((longlong)param_2 + 3) == '\x05') {
    lVar1 = *param_1;
    param_1 = param_1 + 7;
    lVar2 = lVar1 + 0x88;
  }
  else {
    lVar1 = *param_1;
    param_1 = param_1 + 5;
    lVar2 = lVar1 + 0x60;
  }
  local_28 = &local_12;
  local_10 = param_3;
  FUN_141763902(lVar1,lVar2,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723b5d9 FUN_14723b5d9 body=127 status=ok
// SIG undefined FUN_14723b5d9(void)

void FUN_14723b5d9(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined2 local_12;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_12 = *param_2;
  if (*(char *)((longlong)param_2 + 3) == '\x06') {
    lVar1 = *param_1;
    param_1 = param_1 + 7;
    lVar2 = lVar1 + 0x88;
  }
  else {
    lVar1 = *param_1;
    param_1 = param_1 + 5;
    lVar2 = lVar1 + 0x60;
  }
  local_28 = &local_12;
  local_10 = param_3;
  FUN_144ab3490(lVar1,lVar2,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723b659 FUN_14723b659 body=127 status=ok
// SIG undefined FUN_14723b659(void)

void FUN_14723b659(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined2 local_12;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_12 = *param_2;
  if (*(char *)((longlong)param_2 + 3) == '\x06') {
    lVar1 = *param_1;
    param_1 = param_1 + 7;
    lVar2 = lVar1 + 0x88;
  }
  else {
    lVar1 = *param_1;
    param_1 = param_1 + 5;
    lVar2 = lVar1 + 0x60;
  }
  local_28 = &local_12;
  local_10 = param_3;
  FUN_14175f4e2(lVar1,lVar2,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723b6da FUN_14723b6da body=2163 status=ok
// SIG undefined FUN_14723b6da(void)

void FUN_14723b6da(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  ushort uVar5;
  uint uVar6;
  ulonglong *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  void *_Dst;
  void *pvVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong _Size;
  undefined2 *puVar22;
  int iVar23;
  void *pvVar24;
  int iVar25;
  undefined2 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auStack_b8 [32];
  uint *local_98;
  longlong *local_90;
  longlong local_88;
  void *local_80;
  longlong local_78;
  ulonglong *local_70;
  undefined2 *local_68;
  undefined2 *local_60;
  uint local_58;
  undefined2 local_52;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar7 = (ulonglong *)*param_2;
  uVar28 = *puVar7;
  if ((uVar28 & 1) != 0) {
    uVar28 = ((longlong)uVar28 >> 0x18) + (longlong)puVar7;
  }
  pvVar15 = (void *)param_2[1];
  iVar25 = (int)puVar7[1];
  if (0 < (longlong)iVar25) {
    lVar27 = 0;
    do {
      lVar20 = *(longlong *)((longlong)pvVar15 + lVar27 * 8);
      if (lVar20 != 0) {
        uVar4 = *(undefined2 *)(uVar28 + lVar27 * 2);
        lVar21 = *param_1;
        puVar1 = (ulonglong *)(lVar21 + 0x60);
        lVar14 = (longlong)(int)param_1[6] + 1;
        plVar18 = *(longlong **)(lVar21 + 0x60);
        if ((longlong)(int)param_1[6] == 0) {
          plVar18 = (longlong *)((longlong)plVar18 + 7U & 0xfffffffffffffff8);
          plVar16 = plVar18 + 2;
          plVar12 = plVar18;
          if (*(longlong **)(lVar21 + 0x68) < plVar16) {
            local_90 = param_1;
            local_80 = pvVar15;
            FUN_140023dd8(puVar1,0x18);
            plVar18 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
            plVar16 = plVar18 + 2;
            plVar12 = plVar18;
            param_1 = local_90;
            pvVar15 = local_80;
          }
LAB_14723b76b:
          *puVar1 = (ulonglong)plVar16;
        }
        else {
          plVar16 = plVar18 + 2;
          if (plVar16 <= *(longlong **)(lVar21 + 0x68)) {
            plVar12 = (longlong *)param_1[5];
            goto LAB_14723b76b;
          }
          plVar12 = (longlong *)((longlong)plVar18 + 7U & 0xfffffffffffffff8);
          plVar18 = plVar12 + lVar14 * 2;
          local_90 = param_1;
          local_80 = pvVar15;
          if (*(longlong **)(lVar21 + 0x68) < plVar18) {
            local_88 = lVar14 * 0x10;
            FUN_140023dd8(puVar1,(uint)(lVar14 * 0x10) | 8);
            plVar12 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
            plVar18 = (longlong *)(local_88 + (longlong)plVar12);
          }
          *puVar1 = (ulonglong)plVar18;
          plVar18 = plVar12;
          param_1 = local_90;
          pvVar15 = local_80;
          if (0 < (int)local_90[6]) {
            lVar21 = 0;
            lVar19 = 0;
            do {
              puVar2 = (undefined4 *)(local_90[5] + lVar21);
              uVar8 = puVar2[1];
              uVar9 = puVar2[2];
              uVar10 = puVar2[3];
              puVar3 = (undefined4 *)((longlong)plVar12 + lVar21);
              *puVar3 = *puVar2;
              puVar3[1] = uVar8;
              puVar3[2] = uVar9;
              puVar3[3] = uVar10;
              lVar19 = lVar19 + 1;
              lVar21 = lVar21 + 0x10;
            } while (lVar19 < (int)local_90[6]);
            plVar18 = (longlong *)(lVar21 + (longlong)plVar12);
          }
        }
        *plVar18 = lVar20;
        *(undefined2 *)(plVar18 + 1) = uVar4;
        *(undefined1 *)((longlong)plVar18 + 10) = 4;
        param_1[5] = (longlong)plVar12;
        *(int *)(param_1 + 6) = (int)lVar14;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != iVar25);
    iVar25 = (int)puVar7[1];
  }
  uVar28 = puVar7[2];
  if ((uVar28 & 1) != 0) {
    uVar28 = (longlong)puVar7 + ((longlong)uVar28 >> 0x18) + 0x10;
  }
  iVar23 = (int)puVar7[3];
  if (0 < (longlong)iVar23) {
    lVar27 = 0;
    local_80 = pvVar15;
    do {
      local_90 = *(longlong **)((longlong)pvVar15 + lVar27 * 8 + (ulonglong)(uint)(iVar25 << 3));
      if (local_90 != (longlong *)0x0) {
        uVar6 = *(uint *)(uVar28 + lVar27 * 4);
        local_88 = CONCAT44(local_88._4_4_,uVar6);
        if ((uVar6 & 0xff000000) == 0x5000000) {
          local_98 = &local_58;
          local_58 = CONCAT22(local_58._2_2_,(short)uVar6);
          local_50 = local_90;
          FUN_141763902(*param_1,*param_1 + 0x88,param_1 + 7);
        }
        else {
          lVar14 = *param_1;
          puVar1 = (ulonglong *)(lVar14 + 0x60);
          lVar20 = (longlong)(int)param_1[6] + 1;
          puVar11 = *(undefined8 **)(lVar14 + 0x60);
          if ((longlong)(int)param_1[6] == 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
            puVar17 = puVar11 + 2;
            puVar13 = puVar11;
            if (*(undefined8 **)(lVar14 + 0x68) < puVar17) {
              FUN_140023dd8(puVar1,0x18);
              puVar11 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar17 = puVar11 + 2;
              puVar13 = puVar11;
            }
LAB_14723bb22:
            *puVar1 = (ulonglong)puVar17;
          }
          else {
            puVar17 = puVar11 + 2;
            if (puVar17 <= *(undefined8 **)(lVar14 + 0x68)) {
              puVar13 = (undefined8 *)param_1[5];
              goto LAB_14723bb22;
            }
            puVar13 = (undefined8 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
            puVar11 = puVar13 + lVar20 * 2;
            if (*(undefined8 **)(lVar14 + 0x68) < puVar11) {
              local_78 = lVar20 * 0x10;
              FUN_140023dd8(puVar1,(uint)(lVar20 * 0x10) | 8);
              puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
              puVar11 = (undefined8 *)(local_78 + (longlong)puVar13);
            }
            *puVar1 = (ulonglong)puVar11;
            puVar11 = puVar13;
            if (0 < (int)param_1[6]) {
              lVar14 = 0;
              lVar21 = 0;
              do {
                puVar2 = (undefined4 *)(param_1[5] + lVar14);
                uVar8 = puVar2[1];
                uVar9 = puVar2[2];
                uVar10 = puVar2[3];
                puVar3 = (undefined4 *)((longlong)puVar13 + lVar14);
                *puVar3 = *puVar2;
                puVar3[1] = uVar8;
                puVar3[2] = uVar9;
                puVar3[3] = uVar10;
                lVar21 = lVar21 + 1;
                lVar14 = lVar14 + 0x10;
              } while (lVar21 < (int)param_1[6]);
              puVar11 = (undefined8 *)(lVar14 + (longlong)puVar13);
            }
          }
          *puVar11 = local_90;
          *(short *)(puVar11 + 1) = (short)local_88;
          *(undefined1 *)((longlong)puVar11 + 10) = 3;
          param_1[5] = (longlong)puVar13;
          *(int *)(param_1 + 6) = (int)lVar20;
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != iVar23);
    iVar25 = (int)puVar7[1];
    iVar23 = (int)puVar7[3];
    pvVar15 = local_80;
  }
  uVar6 = (uint)puVar7[5];
  uVar28 = puVar7[4];
  if ((uVar28 & 1) != 0) {
    uVar28 = (longlong)puVar7 + ((longlong)uVar28 >> 0x18) + 0x20;
  }
  pvVar24 = pvVar15;
  if ((ulonglong)uVar6 != 0) {
    uVar29 = 0;
    local_80 = pvVar15;
    do {
      local_58 = *(uint *)(uVar28 + uVar29 * 4);
      local_88 = CONCAT44(local_88._4_4_,local_58);
      local_90 = *(longlong **)
                  ((longlong)pvVar15 + uVar29 * 8 + (ulonglong)(uint)((iVar25 + iVar23) * 8));
      if ((*(byte *)((longlong)pvVar15 +
                    (uVar29 >> 3 & 0x1fffffff) + (ulonglong)((iVar25 + iVar23 + uVar6) * 8)) >>
           ((uint)uVar29 & 7) & 1) == 0) {
        if (local_90 != (longlong *)0x0) {
          if ((local_58 & 0xff000000) == 0x6000000) {
            local_98 = (uint *)&local_52;
            local_52 = (undefined2)local_58;
            local_50 = local_90;
            FUN_14175f4e2(*param_1,*param_1 + 0x88,param_1 + 7);
          }
          else {
            lVar27 = *param_1;
            puVar1 = (ulonglong *)(lVar27 + 0x60);
            local_78 = (longlong)(int)param_1[6] + 1;
            puVar11 = *(undefined8 **)(lVar27 + 0x60);
            if ((longlong)(int)param_1[6] == 0) {
              puVar11 = (undefined8 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
              puVar17 = puVar11 + 2;
              puVar13 = puVar11;
              if (*(undefined8 **)(lVar27 + 0x68) < puVar17) {
                local_70 = puVar1;
                FUN_140023dd8(puVar1,0x18);
                puVar11 = (undefined8 *)(*local_70 + 7 & 0xfffffffffffffff8);
                puVar17 = puVar11 + 2;
                puVar13 = puVar11;
              }
LAB_14723bc15:
              *puVar1 = (ulonglong)puVar17;
            }
            else {
              puVar17 = puVar11 + 2;
              if (puVar17 <= *(undefined8 **)(lVar27 + 0x68)) {
                puVar13 = (undefined8 *)param_1[5];
                goto LAB_14723bc15;
              }
              puVar13 = (undefined8 *)((longlong)puVar11 + 7U & 0xfffffffffffffff8);
              puVar11 = puVar13 + local_78 * 2;
              if (*(undefined8 **)(lVar27 + 0x68) < puVar11) {
                local_70 = puVar1;
                local_68 = (undefined2 *)(local_78 * 0x10);
                FUN_140023dd8(puVar1,(uint)(undefined2 *)(local_78 * 0x10) | 8);
                puVar13 = (undefined8 *)(*local_70 + 7 & 0xfffffffffffffff8);
                puVar11 = (undefined8 *)((longlong)local_68 + (longlong)puVar13);
              }
              *puVar1 = (ulonglong)puVar11;
              puVar11 = puVar13;
              if (0 < (int)param_1[6]) {
                lVar27 = 0;
                lVar20 = 0;
                do {
                  puVar2 = (undefined4 *)(param_1[5] + lVar27);
                  uVar8 = puVar2[1];
                  uVar9 = puVar2[2];
                  uVar10 = puVar2[3];
                  puVar3 = (undefined4 *)((longlong)puVar13 + lVar27);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar8;
                  puVar3[2] = uVar9;
                  puVar3[3] = uVar10;
                  lVar20 = lVar20 + 1;
                  lVar27 = lVar27 + 0x10;
                } while (lVar20 < (int)param_1[6]);
                puVar11 = (undefined8 *)(lVar27 + (longlong)puVar13);
              }
            }
            *puVar11 = local_90;
            *(short *)(puVar11 + 1) = (short)local_88;
            *(undefined1 *)((longlong)puVar11 + 10) = 0;
            param_1[5] = (longlong)puVar13;
            *(int *)(param_1 + 6) = (int)local_78;
          }
        }
      }
      else if (local_90 != (longlong *)0x0) {
        FUN_14723b5d9(param_1,&local_58,local_90);
      }
      uVar29 = uVar29 + 1;
      pvVar24 = local_80;
    } while (uVar29 != uVar6);
  }
  puVar22 = (undefined2 *)puVar7[6];
  puVar26 = (undefined2 *)((longlong)puVar7 + ((longlong)puVar22 >> 0x18) + 0x30);
  if (((ulonglong)puVar22 & 1) == 0) {
    puVar26 = puVar22;
  }
  if ((longlong)(int)puVar7[7] != 0) {
    iVar25 = (int)puVar7[5];
    iVar23 = iVar25 + 0xe;
    if (-1 < iVar25 + 7) {
      iVar23 = iVar25 + 7;
    }
    local_60 = puVar26 + (longlong)(int)puVar7[7] * 0xc;
    pvVar24 = (void *)((longlong)pvVar24 +
                      (ulonglong)
                      (uint)((iVar23 >> 3) + ((int)puVar7[3] + iVar25 + (int)puVar7[1]) * 8));
    do {
      puVar22 = *(undefined2 **)(puVar26 + 4);
      if (((ulonglong)puVar22 & 1) != 0) {
        puVar22 = (undefined2 *)((longlong)puVar26 + ((longlong)puVar22 >> 0x18) + 8);
      }
      if ((longlong)*(int *)(puVar26 + 8) != 0) {
        local_68 = puVar22 + (longlong)*(int *)(puVar26 + 8) * 2;
        do {
          local_78 = CONCAT62(local_78._2_6_,*puVar22);
          uVar5 = puVar22[1];
          local_88 = CONCAT62(local_88._2_6_,uVar5);
          _Size = (ulonglong)uVar5;
          local_70 = (ulonglong *)CONCAT62(local_70._2_6_,*puVar26);
          iVar25 = (int)param_1[2];
          iVar23 = iVar25 + (uint)uVar5;
          lVar27 = *param_1;
          puVar7 = (ulonglong *)(lVar27 + 0x10);
          pvVar15 = *(void **)(lVar27 + 0x10);
          uVar29 = *(ulonglong *)(lVar27 + 0x18);
          uVar28 = (longlong)pvVar15 + _Size;
          if (iVar25 == 0) {
            if (uVar29 < uVar28) {
              FUN_140023dd8(puVar7,uVar5 + 1);
              pvVar15 = (void *)*puVar7;
              uVar28 = (longlong)pvVar15 + _Size;
            }
            *puVar7 = uVar28;
            _Dst = pvVar15;
          }
          else if (uVar29 < uVar28) {
            uVar28 = (longlong)pvVar15 + (longlong)iVar23;
            _Dst = pvVar15;
            local_90 = param_1;
            local_80 = pvVar24;
            if (uVar29 < uVar28) {
              FUN_140023dd8(puVar7,iVar23 + 1);
              _Dst = (void *)*puVar7;
              uVar28 = (longlong)iVar23 + (longlong)_Dst;
            }
            param_1 = local_90;
            *puVar7 = uVar28;
            memcpy(_Dst,(void *)local_90[1],(longlong)(int)local_90[2]);
            pvVar15 = (void *)((longlong)(int)param_1[2] + (longlong)_Dst);
            pvVar24 = local_80;
          }
          else {
            _Dst = (void *)param_1[1];
            *puVar7 = uVar28;
          }
          memcpy(pvVar15,pvVar24,_Size);
          param_1[1] = (longlong)_Dst;
          *(int *)(param_1 + 2) = iVar23;
          lVar20 = *param_1;
          puVar7 = (ulonglong *)(lVar20 + 0x38);
          lVar27 = (longlong)(int)param_1[4] + 1;
          puVar11 = *(undefined8 **)(lVar20 + 0x38);
          if ((longlong)(int)param_1[4] == 0) {
            puVar11 = (undefined8 *)((longlong)puVar11 + 1U & 0xfffffffffffffffe);
            puVar17 = puVar11 + 1;
            puVar13 = puVar11;
            if (*(undefined8 **)(lVar20 + 0x40) < puVar17) {
              FUN_140023dd8(puVar7,10);
              puVar11 = (undefined8 *)(*puVar7 + 1 & 0xfffffffffffffffe);
              puVar17 = puVar11 + 1;
              puVar13 = puVar11;
            }
LAB_14723b954:
            *puVar7 = (ulonglong)puVar17;
          }
          else {
            puVar17 = puVar11 + 1;
            if (puVar17 <= *(undefined8 **)(lVar20 + 0x40)) {
              puVar13 = (undefined8 *)param_1[3];
              goto LAB_14723b954;
            }
            puVar13 = (undefined8 *)((longlong)puVar11 + 1U & 0xfffffffffffffffe);
            puVar11 = puVar13 + lVar27;
            if (*(undefined8 **)(lVar20 + 0x40) < puVar11) {
              FUN_140023dd8(puVar7);
              puVar13 = (undefined8 *)(*puVar7 + 1 & 0xfffffffffffffffe);
              puVar11 = puVar13 + lVar27;
            }
            *puVar7 = (ulonglong)puVar11;
            puVar11 = puVar13;
            if (0 < (int)param_1[4]) {
              lVar20 = 0;
              do {
                *puVar11 = *(undefined8 *)(param_1[3] + lVar20 * 8);
                lVar20 = lVar20 + 1;
                puVar11 = puVar11 + 1;
              } while (lVar20 < (int)param_1[4]);
            }
          }
          *(undefined2 *)puVar11 = local_70._0_2_;
          *(undefined2 *)((longlong)puVar11 + 2) = (undefined2)local_78;
          *(short *)((longlong)puVar11 + 4) = (short)iVar25;
          *(undefined2 *)((longlong)puVar11 + 6) = (undefined2)local_88;
          param_1[3] = (longlong)puVar13;
          *(int *)(param_1 + 4) = (int)lVar27;
          pvVar24 = (void *)((longlong)pvVar24 + (ulonglong)(ushort)puVar22[1]);
          puVar22 = puVar22 + 2;
        } while (puVar22 != local_68);
      }
      puVar26 = puVar26 + 0xc;
    } while (puVar26 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14723bf4e FUN_14723bf4e body=441 status=ok
// SIG undefined FUN_14723bf4e(void)

longlong FUN_14723bf4e(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  ulonglong *puVar1;
  ushort uVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  void *_Src;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  
  plVar12 = param_1 + 4;
  if (0x50 < *(ushort *)((longlong)param_1 + 0x72)) {
    plVar12 = (longlong *)*plVar12;
  }
  plVar9 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar9 = param_1;
  }
  puVar3 = (ulonglong *)*plVar9;
  uVar13 = *puVar3;
  uVar11 = ((longlong)uVar13 >> 0x18) + (longlong)puVar3;
  if ((uVar13 & 1) == 0) {
    uVar11 = uVar13;
  }
  uVar13 = puVar3[1];
  lVar17 = (longlong)(int)uVar13;
  uVar14 = 0;
  iVar8 = 0;
  if (0 < lVar17) {
    uVar18 = 0xffffffff;
    lVar7 = 0;
    do {
      uVar2 = *(ushort *)(uVar11 + lVar7 * 2);
      uVar4 = (uint)uVar2;
      if ((int)(uint)uVar2 < (int)uVar18) {
        uVar4 = uVar18;
      }
      uVar18 = uVar4;
      lVar7 = lVar7 + 1;
    } while (lVar17 != lVar7);
    iVar8 = uVar18 + 1;
  }
  puVar1 = puVar3 + 6;
  if ((int)puVar3[7] != 0) {
    uVar10 = *puVar1;
    uVar15 = ((longlong)uVar10 >> 0x18) + (longlong)puVar1;
    if ((uVar10 & 1) == 0) {
      uVar15 = uVar10;
    }
    if (0 < (longlong)*(int *)(uVar15 + 0x10)) {
      uVar10 = *(ulonglong *)(uVar15 + 8);
      uVar16 = uVar15 + 8 + ((longlong)uVar10 >> 0x18);
      if ((uVar10 & 1) == 0) {
        uVar16 = uVar10;
      }
      lVar7 = 0;
      uVar14 = 0;
      do {
        uVar18 = (uint)*(ushort *)(uVar16 + 2 + lVar7 * 4) + (uint)*(ushort *)(uVar16 + lVar7 * 4);
        if (uVar14 < uVar18) {
          uVar14 = uVar18;
        }
        lVar7 = lVar7 + 1;
      } while (*(int *)(uVar15 + 0x10) != lVar7);
    }
  }
  lVar7 = FUN_14723c108(param_2,iVar8,uVar14);
  *(undefined4 *)(lVar7 + 0xc) = param_4;
  *(undefined4 *)(lVar7 + 0x10) = param_3;
  *(undefined4 *)(lVar7 + 0x14) = param_5;
  if (0 < (int)uVar13) {
    lVar5 = 0;
    do {
      *(longlong *)(*(longlong *)(lVar7 + 0x20) + (ulonglong)*(ushort *)(uVar11 + lVar5 * 2) * 8) =
           plVar12[lVar5];
      lVar5 = lVar5 + 1;
    } while (lVar17 != lVar5);
  }
  if ((int)puVar3[7] != 0) {
    uVar13 = *puVar1;
    uVar11 = ((longlong)uVar13 >> 0x18) + (longlong)puVar1;
    if ((uVar13 & 1) == 0) {
      uVar11 = uVar13;
    }
    if (0 < *(int *)(uVar11 + 0x10)) {
      iVar8 = (int)puVar3[5];
      iVar6 = iVar8 + 0xe;
      if (-1 < iVar8 + 7) {
        iVar6 = iVar8 + 7;
      }
      _Src = (void *)((longlong)plVar12 +
                     (ulonglong)(uint)((iVar6 >> 3) + ((int)puVar3[1] + (int)puVar3[3] + iVar8) * 8)
                     );
      lVar17 = 0;
      do {
        uVar13 = *(ulonglong *)(uVar11 + 8);
        uVar10 = ((longlong)uVar13 >> 0x18) + uVar11 + 8;
        if ((uVar13 & 1) == 0) {
          uVar10 = uVar13;
        }
        uVar13 = (ulonglong)*(ushort *)(uVar10 + 2 + lVar17 * 4);
        memcpy((void *)((ulonglong)*(ushort *)(uVar10 + lVar17 * 4) + *(longlong *)(lVar7 + 0x28)),
               _Src,uVar13);
        _Src = (void *)((longlong)_Src + uVar13);
        lVar17 = lVar17 + 1;
      } while (lVar17 < *(int *)(uVar11 + 0x10));
    }
  }
  return lVar7;
}



// FUNCTION 14723c108 FUN_14723c108 body=209 status=ok
// SIG undefined FUN_14723c108(void)

longlong FUN_14723c108(longlong param_1,int param_2,uint param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong uVar4;
  
  lVar2 = FUN_1471e7936();
  if (param_2 != 0) {
    uVar3 = (ulonglong)(uint)(param_2 * 8);
    puVar1 = (ulonglong *)(param_1 + 0x10);
    _Dst = (void *)(*(longlong *)(param_1 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar4 = (longlong)_Dst + uVar3;
    if (*(ulonglong *)(param_1 + 0x18) < uVar4) {
      FUN_140023dd8(puVar1);
      _Dst = (void *)(*puVar1 + 7 & 0xfffffffffffffff8);
      uVar4 = (longlong)_Dst + uVar3;
    }
    *puVar1 = uVar4;
    *(void **)(lVar2 + 0x20) = _Dst;
    memset(_Dst,0,uVar3);
  }
  *(short *)(lVar2 + 0x18) = (short)param_2;
  if (param_3 != 0) {
    puVar1 = (ulonglong *)(param_1 + 0x10);
    uVar3 = *(longlong *)(param_1 + 0x10) + 7U & 0xfffffffffffffff8;
    uVar4 = uVar3 + param_3;
    if (*(ulonglong *)(param_1 + 0x18) < uVar4) {
      FUN_140023dd8(puVar1,param_3 + 8);
      uVar3 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar4 = param_3 + uVar3;
    }
    *puVar1 = uVar4;
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
  }
  *(short *)(lVar2 + 0x1a) = (short)param_3;
  return lVar2;
}



// FUNCTION 14723c1da FUN_14723c1da body=605 status=ok
// SIG undefined FUN_14723c1da(void)

void FUN_14723c1da(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  int *piVar1;
  ushort uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 local_b0;
  longlong local_a8 [15];
  
  local_a8[0xe] = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar4 = param_1 + 4;
  if (0x50 < *(ushort *)((longlong)param_1 + 0x72)) {
    plVar4 = (longlong *)*plVar4;
  }
  plVar8 = (longlong *)param_1[2];
  if ((longlong *)param_1[2] == (longlong *)0x0) {
    plVar8 = param_1;
  }
  puVar3 = (ulonglong *)*plVar8;
  local_b0 = 0xffffffff;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[0xc] = 0;
  local_a8[0xd] = 0;
  uVar13 = *puVar3;
  uVar6 = ((longlong)uVar13 >> 0x18) + (longlong)puVar3;
  if ((uVar13 & 1) == 0) {
    uVar6 = uVar13;
  }
  uVar13 = puVar3[1];
  if ((longlong)(int)uVar13 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0xffffffff;
    lVar11 = 0;
    do {
      uVar2 = *(ushort *)(uVar6 + lVar11 * 2);
      if (uVar2 < 0xe) {
        local_a8[(uint)uVar2] = plVar4[lVar11];
        if ((int)uVar10 <= (int)(uint)uVar2) {
          uVar10 = (uint)uVar2;
        }
      }
      lVar11 = lVar11 + 1;
    } while ((int)uVar13 != lVar11);
    uVar10 = uVar10 + 1;
  }
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar12 + 7;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x40);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 7;
  }
  *param_2 = (ulonglong)puVar5;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  *(undefined4 *)((longlong)puVar12 + 0xc) = param_4;
  *(undefined4 *)(puVar12 + 2) = param_6;
  *(short *)(puVar12 + 3) = (short)uVar10;
  if (uVar10 != 0) {
    uVar9 = (ulonglong)uVar10;
    uVar6 = *param_2 + 7 & 0xfffffffffffffff8;
    uVar13 = uVar6 + uVar9 * 8;
    if (param_2[1] < uVar13) {
      FUN_140023dd8(param_2,(int)(uVar9 * 8) + 8);
      uVar6 = *param_2 + 7 & 0xfffffffffffffff8;
      uVar13 = uVar9 * 8 + uVar6;
    }
    *param_2 = uVar13;
    puVar12[4] = uVar6;
    uVar13 = 0;
    do {
      *(longlong *)(puVar12[4] + uVar13 * 8) = local_a8[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar9 != uVar13);
  }
  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar7 + 8;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x48);
    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar7 + 8;
  }
  *param_2 = (ulonglong)puVar5;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar7;
  param_2[6] = (ulonglong)(puVar7 + 1);
  puVar7[1] = 0;
  *puVar7 = &PTR_LAB_14a203848;
  puVar7[2] = param_3;
  puVar7[3] = 0;
  puVar7[4] = param_5;
  *(undefined4 *)(puVar7 + 5) = 1;
  puVar7[6] = puVar12;
  *(undefined1 *)(puVar7 + 7) = 2;
  FUN_14494c7ac(param_2,&local_b8,1);
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  if ((local_a8[0xe] ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723c438 FUN_14723c438 body=235 status=ok
// SIG undefined FUN_14723c438(void)

void FUN_14723c438(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  void *_Dst;
  ulonglong _Size;
  
  lVar4 = *param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(uint *)(param_1 + 0x1c) != (uint)(lVar4 != 0)) {
    FUN_1447667e4(param_1);
  }
  lVar4 = *param_2;
  if (lVar4 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_14724906a(param_1,iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar3 = param_1;
    }
    *(longlong *)(lVar3 + (longlong)iVar1 * 8) = lVar4 + 0x58;
    lVar4 = *(longlong *)(param_1 + 0x10);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar4 = param_1;
    }
    uVar2 = FUN_144b11014(lVar4 + (longlong)(*(int *)(param_1 + 0x18) + -1) * 8);
    *(ushort *)(param_1 + 0x70) =
         *(ushort *)(param_1 + 0x70) | (ushort)(1 << (*(byte *)(*param_2 + 0xd0) & 0xf));
    if ((0 < (int)uVar2) && (*(ushort *)(param_1 + 0x72) = (ushort)uVar2, 0x50 < (ushort)uVar2)) {
      _Size = (ulonglong)(uVar2 & 0xffff);
      _Dst = (void *)FUN_14001cc68(_Size + (_Size == 0));
      *(void **)(param_1 + 0x20) = _Dst;
      memset(_Dst,0,_Size);
      return;
    }
  }
  return;
}



// FUNCTION 14723c523 FUN_14723c523 body=60 status=ok
// SIG undefined FUN_14723c523(void)

char FUN_14723c523(ushort param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  if ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1 && param_2 == '\0') {
    cVar1 = FUN_147cef7d7(param_1,param_3,param_4);
    cVar1 = cVar1 * '\x02' + '\x01';
  }
  else {
    cVar1 = ((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) * '\x02';
  }
  return cVar1;
}



// FUNCTION 14723c560 FUN_14723c560 body=318 status=ok
// SIG undefined FUN_14723c560(void)

void FUN_14723c560(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 *param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined1 *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_44;
  int local_40 [2];
  undefined8 local_38;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = param_11;
  local_60 = param_9;
  local_68 = param_8;
  local_70 = param_7;
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,param_6);
  FUN_1402a7402(param_1,param_2,param_3,param_5);
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(char *)(param_1 + 0x151) == '\x01') {
    plVar5 = (longlong *)(lVar2 + (ulonglong)*(byte *)(param_1 + 0x150) * 0x78 + 0x58);
    uVar3 = FUN_144937ccc(param_11);
    local_78 = &local_44;
    local_44 = 0;
    local_70 = &local_29;
    FUN_147249146(plVar5,local_40,uVar3 & 0x7fffffff,param_11);
    LOCK();
    piVar1 = (int *)(*plVar5 + 0x120 + (longlong)local_40[0] * 0x128);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int *)(param_1 + 0x13c) = local_40[0];
  }
  else {
    lVar4 = (ulonglong)*(byte *)(param_1 + 0x150) * 0x40;
    FUN_14724954c(lVar2 + lVar4 + 0x1b88,local_40,lVar2 + lVar4 + 0x1bc0);
    FUN_141770c1c(local_38,param_11);
    *(int *)(param_1 + 0x138) = local_40[0];
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723c6a0 FUN_14723c6a0 body=140 status=ok
// SIG undefined FUN_14723c6a0(void)

void FUN_14723c6a0(uint param_1,ulonglong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14165273a(local_80);
  if (*(longlong *)(&DAT_14ca119b0 + (param_2 & 0xff) * 8 + (ulonglong)param_1 * 0x1d0) != 0) {
    (&DAT_14ca11d50)[(ulonglong)param_1 * 0x3a + (param_2 & 0xff)] = param_3;
  }
  FUN_1416525c2(local_80);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723c72e FUN_14723c72e body=196 status=ok
// SIG undefined FUN_14723c72e(void)

undefined4 * FUN_14723c72e(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  lVar1 = *(longlong *)(param_2 + 0xc);
  lVar2 = *(longlong *)(param_1 + 0xc);
  if (lVar2 != lVar1) {
    *(longlong *)(param_1 + 0xc) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_140021284();
    }
  }
  lVar1 = *(longlong *)(param_2 + 0xe);
  lVar2 = *(longlong *)(param_1 + 0xe);
  if (lVar2 != lVar1) {
    *(longlong *)(param_1 + 0xe) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_140021284();
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != lVar1) {
    *(longlong *)(param_1 + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_140021284();
    }
  }
  lVar1 = *(longlong *)(param_2 + 0x12);
  lVar2 = *(longlong *)(param_1 + 0x12);
  if (lVar2 != lVar1) {
    *(longlong *)(param_1 + 0x12) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x60) = *(int *)(lVar1 + 0x60) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      FUN_140021284();
    }
  }
  uVar14 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = uVar14;
  return param_1;
}



// FUNCTION 14723c7f2 FUN_14723c7f2 body=8 status=ok
// SIG undefined FUN_14723c7f2(void)

undefined8 FUN_14723c7f2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



// FUNCTION 14723c805 FUN_14723c805 body=36 status=ok
// SIG undefined FUN_14723c805(void)

bool FUN_14723c805(void)

{
  return DAT_14ca09708 != 0 || DAT_14ca964dd != '\0' && 0 < DAT_14c760e10;
}



// FUNCTION 14723c829 FUN_14723c829 body=185 status=ok
// SIG undefined FUN_14723c829(void)

void FUN_14723c829(longlong param_1,longlong param_2,longlong *param_3,short param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  *(undefined8 *)(param_1 + 8) = DAT_14ca0dd78;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (param_2 == 0) {
    bVar3 = 0;
    if (param_5 == '\0') goto LAB_14723c8ce;
  }
  else {
    bVar3 = (~*(byte *)(param_2 + 0x6b) & 8) << 4;
    if (param_5 == '\0') {
      bVar3 = (*(byte *)(param_2 + 0x72) & 2) << 3 | bVar3;
      goto LAB_14723c8ce;
    }
  }
  bVar1 = (**(code **)(*param_3 + 0x1f8))();
  if (param_4 == 1) {
    bVar2 = 0;
  }
  else {
    bVar2 = bVar1 ^ 3;
    if ((param_4 != 2) && (bVar2 = 1, DAT_14c760e18 != '\0')) {
      bVar2 = bVar1 ^ 3;
    }
  }
  if (param_2 == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = (*(byte *)(param_2 + 0x82) & 7) << 4 ^ 0x10;
  }
  bVar3 = bVar2 * '\x02' + bVar3 + bVar1;
LAB_14723c8ce:
  *(uint *)(param_1 + 0x38) = (uint)bVar3;
  return;
}



// FUNCTION 14723c8e2 FUN_14723c8e2 body=328 status=ok
// SIG undefined FUN_14723c8e2(void)

undefined8
FUN_14723c8e2(undefined4 param_1,int param_2,longlong *param_3,undefined8 param_4,undefined8 param_5
             ,undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_32;
  byte local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_3 + 0x288))(param_3,&local_32);
  if ((local_31 & 8) == 0) {
    iVar1 = (**(code **)(*param_3 + 0x270))(param_3);
    bVar3 = 0;
    if (iVar1 != 7) goto LAB_14723c934;
  }
  iVar1 = FUN_14723e563(*(undefined2 *)
                         (&DAT_14ca85070 + (longlong)*(int *)((longlong)param_3 + 0x24) * 2));
  if (iVar1 == 2) {
    bVar3 = 3;
    if ((DAT_14ca84dfc != 1) || (DAT_14ca84dfe != '\x01')) goto LAB_14723c934;
  }
  else if ((iVar1 == 1) && (DAT_14ca84e17 == '\0')) {
    bVar3 = DAT_14ca84dfc ^ 3;
    goto LAB_14723c934;
  }
  bVar3 = 0;
LAB_14723c934:
  if (param_2 == 2) {
    local_40 = param_6;
    local_48 = param_5;
    uVar2 = FUN_14723cc15(param_1,param_3,param_4,bVar3);
  }
  else if (param_2 == 1) {
    local_40 = param_6;
    local_48 = param_5;
    uVar2 = FUN_14723cb20(param_1,param_3,param_4);
  }
  else if (param_2 == 0) {
    local_40 = param_6;
    local_48 = param_5;
    uVar2 = FUN_14723ca2b(param_1,param_3,param_4);
  }
  else {
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14723ca2b FUN_14723ca2b body=245 status=ok
// SIG undefined FUN_14723ca2b(void)

undefined8
FUN_14723ca2b(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_1472497d9(param_2,param_3,param_4,param_5,param_6);
    break;
  default:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = FUN_14724990e(param_2,param_3,param_4,param_5,param_6);
    break;
  case 7:
    uVar1 = FUN_147249a43(param_2,param_3,param_4,param_5,param_6);
    break;
  case 8:
    uVar1 = FUN_147249b78(param_2,param_3,param_4,param_5,param_6);
    break;
  case 9:
    uVar1 = FUN_147249cad(param_2,param_3,param_4,param_5,param_6);
    break;
  case 10:
    uVar1 = FUN_147249de2(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xb:
    uVar1 = FUN_147249f17(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xc:
    uVar1 = FUN_14724a04c(param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}



// FUNCTION 14723cb20 FUN_14723cb20 body=245 status=ok
// SIG undefined FUN_14723cb20(void)

undefined8
FUN_14723cb20(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_14724a181(param_2,param_3,param_4,param_5,param_6);
    break;
  default:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = FUN_14724a2b6(param_2,param_3,param_4,param_5,param_6);
    break;
  case 7:
    uVar1 = FUN_14724a3eb(param_2,param_3,param_4,param_5,param_6);
    break;
  case 8:
    uVar1 = FUN_14724a520(param_2,param_3,param_4,param_5,param_6);
    break;
  case 9:
    uVar1 = FUN_14724a655(param_2,param_3,param_4,param_5,param_6);
    break;
  case 10:
    uVar1 = FUN_14724a78a(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xb:
    uVar1 = FUN_14724a8bf(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xc:
    uVar1 = FUN_14724a9f4(param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}



// FUNCTION 14723cc15 FUN_14723cc15 body=245 status=ok
// SIG undefined FUN_14723cc15(void)

undefined8
FUN_14723cc15(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  switch(param_1) {
  case 0:
    uVar1 = FUN_14724ab29(param_2,param_3,param_4,param_5,param_6);
    break;
  default:
    uVar1 = 1;
    break;
  case 4:
    uVar1 = FUN_14724ac5e(param_2,param_3,param_4,param_5,param_6);
    break;
  case 7:
    uVar1 = FUN_14724ad93(param_2,param_3,param_4,param_5,param_6);
    break;
  case 8:
    uVar1 = FUN_14724aec8(param_2,param_3,param_4,param_5,param_6);
    break;
  case 9:
    uVar1 = FUN_14724affd(param_2,param_3,param_4,param_5,param_6);
    break;
  case 10:
    uVar1 = FUN_14724b132(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xb:
    uVar1 = FUN_14724b267(param_2,param_3,param_4,param_5,param_6);
    break;
  case 0xc:
    uVar1 = FUN_14724b39c(param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}



// FUNCTION 14723cd0a FUN_14723cd0a body=589 status=ok
// SIG undefined FUN_14723cd0a(void)

uint FUN_14723cd0a(longlong param_1,longlong param_2,longlong param_3,char param_4,byte param_5,
                  char param_6,char param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [80];
  int local_138;
  undefined1 local_128 [184];
  int local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar4 = 0;
  if (param_6 == '\0') goto LAB_14723cdea;
  if (DAT_14c760e18 == '\0') {
    uVar4 = 0;
    if (param_4 != '\x01' || param_5 != 0) goto LAB_14723cdea;
    bVar2 = FUN_140270692();
    uVar5 = 0;
    uVar4 = 0xc;
  }
  else {
    if (*(longlong *)(param_2 + 200) == 0) {
      FUN_144b13b96(local_128);
    }
    else {
      FUN_147cef4e8(*(longlong *)(param_2 + 200),local_128,1);
    }
    if (param_1 == 0 || param_3 == 0) {
      bVar2 = 0;
      bVar1 = 0;
      if (param_3 != 0) goto LAB_14723ce24;
      bVar6 = true;
    }
    else {
      bVar2 = *(byte *)(param_3 + 0x82);
      if (bVar2 != 0) {
        uVar4 = 0;
        if (bVar2 != 0) {
          for (; (bVar2 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if ((param_4 == '\x01' && *(longlong *)(param_1 + 0x36a0 + (ulonglong)uVar4 * 8) != 0) &&
           (DAT_14c760e16 == '\x01')) {
          bVar1 = FUN_1471dbc0a();
          goto LAB_14723ce24;
        }
      }
      bVar1 = 0;
LAB_14723ce24:
      bVar2 = bVar1;
      bVar1 = *(byte *)(param_3 + 0x6f);
      if ((bVar1 & 0x20) == 0 && (byte)(*(char *)(param_3 + 0x68) - 3U) < 0xfe) {
        bVar6 = true;
        if (*(char *)(param_3 + 0x69) == '\x02' && (char)bVar1 < '\0') {
LAB_14723ce55:
          bVar6 = *(char *)(param_3 + 0xa8) == '\0';
        }
      }
      else {
        bVar6 = true;
        if ((char)bVar1 < '\0') goto LAB_14723ce55;
      }
    }
    if (param_1 == 0) {
      bVar1 = 0;
LAB_14723cea6:
      bVar3 = 0;
    }
    else {
      bVar1 = FUN_144b15d32(param_1 + 0x3b38);
      if (*(int *)(param_1 + 0x3928) < 1) goto LAB_14723cea6;
      bVar3 = FUN_144b1111b(1);
    }
    if ((local_70 != 2) || (DAT_14c760e0c != '\x01')) {
      if (bVar6 || (bVar1 | bVar3) != 1) {
        uVar4 = 0xc;
        if (param_5 != 0) {
          uVar4 = 0;
        }
        if (bVar2 == 0) {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = (byte)(bVar2 ^ 1 | param_5) ^ 0xb;
      }
      goto LAB_14723cdea;
    }
    if (((*(longlong *)(param_2 + 200) != 0 && param_7 == '\0') &&
        (FUN_147cef530(*(longlong *)(param_2 + 200),local_188,1), local_138 == 2)) &&
       (DAT_14c760e0d == '\x01')) {
      uVar4 = (bVar2 & (param_5 ^ 1)) + 7;
      goto LAB_14723cdea;
    }
    uVar5 = (uint)(param_5 ^ 1) + (uint)(param_5 ^ 1) * 4 + 4;
    uVar4 = 4;
  }
  if (bVar2 != 0) {
    uVar4 = uVar5;
  }
LAB_14723cdea:
  if ((local_40 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14723cf58 FUN_14723cf58 body=85 status=ok
// SIG undefined FUN_14723cf58(void)

void FUN_14723cf58(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  char param_5,undefined1 param_6)

{
  char cVar1;
  
  if (param_5 != '\0') {
    FUN_14723c829(param_1,param_2,param_3,param_4,param_6);
  }
  cVar1 = FUN_144b25a37(param_3);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_3 + 0x218))(param_3);
    if (cVar1 != '\0') {
      *param_1 = DAT_14ca0dd90;
    }
  }
  return;
}



// FUNCTION 14723cfad FUN_14723cfad body=334 status=ok
// SIG undefined FUN_14723cfad(void)

void FUN_14723cfad(undefined8 *param_1,longlong *param_2,uint param_3)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar1 = DAT_14ca85072;
  cVar2 = (**(code **)(*param_2 + 0x238))(param_2);
  if (cVar2 != '\0') {
    FUN_147cee4d5(uVar1);
  }
  cVar2 = FUN_14473b0f0();
  if (cVar2 == '\0') {
    if (((param_3 & 0xffff) >> 0xb & 1) != 0) goto LAB_14723d070;
    uVar4 = (**(code **)(*param_2 + 0x270))(param_2);
    switch(uVar4) {
    case 2:
    case 7:
      cVar2 = (**(code **)(*param_2 + 0x80))(param_2);
      uVar5 = DAT_14ca0ddf0;
      if (cVar2 != '\0') {
        uVar5 = DAT_14ca0ddd8;
      }
      break;
    case 3:
      uVar5 = DAT_14ca0de08;
      break;
    case 4:
      uVar5 = DAT_14ca0de20;
      break;
    case 6:
      uVar5 = DAT_14ca0de38;
      break;
    default:
      if (((param_3 & 0xffff) >> 10 & 1) == 0) goto LAB_14723d07a;
    case 5:
      uVar5 = DAT_14ca0ddc0;
    }
  }
  else {
    cVar2 = (**(code **)(*param_2 + 800))(param_2,uVar1);
    if ((cVar2 == '\0') && (iVar3 = (**(code **)(*param_2 + 0x270))(param_2), iVar3 != 7)) {
      iVar3 = (**(code **)(*param_2 + 0x270))(param_2);
      uVar5 = DAT_14c9c04a8;
      if ((iVar3 != 4) &&
         (iVar3 = (**(code **)(*param_2 + 0x270))(param_2), uVar5 = DAT_14c9c0890, iVar3 == 6)) {
        uVar5 = DAT_14c9c0380;
      }
      goto LAB_14723d077;
    }
LAB_14723d070:
    uVar5 = FUN_142de6cbe(uVar1);
  }
LAB_14723d077:
  *param_1 = uVar5;
LAB_14723d07a:
  cVar2 = (**(code **)(*param_2 + 0x78))(param_2);
  if (cVar2 != '\0') {
    param_1[1] = DAT_14c9c0d98;
    *(undefined4 *)(param_1 + 7) = 0;
  }
  return;
}



// FUNCTION 14723d0fc FUN_14723d0fc body=415 status=ok
// SIG undefined FUN_14723d0fc(void)

void FUN_14723d0fc(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,longlong param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_3c;
  undefined2 local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = param_8;
  local_58 = param_7;
  local_68 = param_5;
  uStack_60 = param_6;
  FUN_14474308c();
  FUN_144b115c2(param_4,param_7 + 0x10,param_1 + 0x108,param_8);
  if (param_2 != 0) {
    if (*(short *)(param_1 + 0x110) != -1) {
      FUN_144b11088(param_8);
    }
    if (*(short *)(param_1 + 0x10e) != -1) {
      if (param_4 == 0) {
        uVar3 = 0;
      }
      else {
        bVar1 = *(byte *)(param_4 + 0x82);
        if (bVar1 == 0) {
          iVar2 = 0x20;
        }
        else {
          iVar2 = 0;
          if (bVar1 != 0) {
            for (; (bVar1 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
          }
        }
        uVar3 = 0;
        if (bVar1 != 0) {
          uVar3 = (ulonglong)(iVar2 + 1);
        }
      }
      FUN_144b11088(param_8,*(undefined8 *)(param_2 + 0x30 + uVar3 * 8));
    }
  }
  if (*(short *)(param_1 + 0x116) != 0) {
    local_34 = (uint)*(byte *)(param_7 + 0x18);
    local_3c = *(undefined4 *)(param_1 + 0x112);
    local_38 = *(undefined2 *)(param_1 + 0x116);
    FUN_144b13bec(param_8);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14723d29c FUN_14723d29c body=236 status=ok
// SIG undefined FUN_14723d29c(void)

undefined8 *
FUN_14723d29c(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  byte bVar10;
  
  uVar9 = 0xffffffff;
  if ((char)param_2 != ':') {
    uVar9 = (&DAT_14ca11f20)[param_2 & 0xff];
  }
  *(undefined4 *)(param_1 + 1) = uVar9;
  *(char *)(param_1 + 2) = (char)param_2;
  uVar8 = FUN_142de6a4f(param_2 & 0xffffffff);
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar8;
  param_1[3] = param_3;
  *(undefined4 *)(param_1 + 4) = 1;
  param_1[5] = param_4;
  param_1[6] = param_6;
  *(undefined1 *)(param_1 + 7) = 0x3a;
  *param_1 = &PTR_FUN_14a28ca80;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  uVar4 = param_5[4];
  uVar5 = param_5[5];
  uVar6 = param_5[6];
  uVar7 = param_5[7];
  param_1[8] = *param_5;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar6;
  param_1[0xf] = uVar7;
  *(int *)(param_1 + 0x10) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x84) = param_7;
  *(bool *)(param_1 + 0x11) = param_8 != 0xf;
  bVar10 = DAT_14c760e14 & DAT_14ca964f0;
  *(byte *)((longlong)param_1 + 0x89) = bVar10;
  *(bool *)((longlong)param_1 + 0x8a) = bVar10 != 0 && param_8 == 0xf;
  return param_1;
}



// FUNCTION 14723d388 FUN_14723d388 body=206 status=ok
// SIG undefined FUN_14723d388(void)

uint FUN_14723d388(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  byte bStack_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x288))(param_2,&local_22);
  uVar3 = (**(code **)(*param_2 + 0x270))(param_2);
  bVar1 = FUN_144b25ac9(uVar3);
  bVar1 = bStack_21 >> 2 & 1 | bVar1;
  if (*(char *)(param_1 + 0x88) != '\x01') {
    uVar5 = bVar1 ^ 1;
    goto LAB_14723d3fa;
  }
  if (bVar1 != 0) {
    cVar2 = (**(code **)(*param_2 + 0xe8))(param_2);
    if (cVar2 == '\0') {
      iVar4 = *(int *)(param_1 + 0x80);
      uVar5 = 1;
      if (iVar4 == 6) goto LAB_14723d3fa;
      if (iVar4 == 0) {
        cVar2 = (**(code **)(*param_2 + 0x328))(param_2);
        if (cVar2 == '\0') goto LAB_14723d3fa;
        iVar4 = *(int *)(param_1 + 0x80);
      }
      if (iVar4 == 2) {
        uVar5 = (**(code **)(*param_2 + 0x328))(param_2);
        goto LAB_14723d3fa;
      }
    }
  }
  uVar5 = 0;
LAB_14723d3fa:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723d458 FUN_14723d458 body=344 status=ok
// SIG undefined FUN_14723d458(void)

undefined8
FUN_14723d458(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,longlong *param_7)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined1 local_90;
  byte local_88;
  ushort local_80;
  undefined4 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_51;
  uint local_50;
  ushort local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_14723d388(param_1,param_7);
  uVar4 = 1;
  if (cVar1 != '\0') {
    (**(code **)(*param_7 + 0x288))(param_7,&local_4a);
    uVar5 = (*(uint *)(param_1 + 0x84) & 2) >> 1;
    uVar3 = (**(code **)(*param_7 + 0x270))(param_7);
    local_50 = (uint)local_4a;
    bVar2 = FUN_144b25ac9(uVar3);
    bVar2 = (byte)(local_4a >> 10) & 1 | bVar2;
    local_51 = FUN_144b25a37(param_7);
    local_a0 = CONCAT71(local_a0._1_7_,(local_50 & 1) == 0);
    local_a8 = CONCAT71(local_a8._1_7_,*(undefined1 *)(param_1 + 0x8a));
    local_98 = (longlong *)CONCAT71(local_98._1_7_,bVar2);
    local_78 = FUN_14723cd0a(*(undefined8 *)(param_1 + 0x18),param_2,param_4,uVar5);
    local_68 = param_2 + 200;
    local_70 = (undefined1)uVar5;
    local_80 = local_4a;
    local_90 = local_51;
    local_98 = param_7;
    local_a0 = param_6;
    local_a8 = param_4;
    local_88 = bVar2;
    uVar4 = FUN_14723d5b2(param_1,param_2,param_3,param_5);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723d5b2 FUN_14723d5b2 body=1309 status=ok
// SIG undefined FUN_14723d5b2(void)

char FUN_14723d5b2(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  longlong param_5,longlong *param_6,longlong *param_7,byte param_8,char param_9,
                  ushort param_10,undefined4 param_11,undefined1 param_12,undefined8 *param_13)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong *local_150;
  undefined4 *local_148;
  longlong *local_140;
  int local_138;
  int local_130;
  ulonglong local_128;
  undefined4 local_120;
  undefined8 *local_118;
  char local_105;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98 [11];
  
  local_98[10] = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  cVar4 = '\0';
  if ((((param_10 & 1) == 0 && (param_5 != 0 && *(longlong *)(param_1 + 0x18) != 0)) &&
      (*(char *)(param_1 + 0x8a) == '\0')) &&
     ((DAT_14ca09708 != 0 ||
      (((0 < DAT_14c760e10 && (DAT_14ca964dd != '\0')) ||
       (0 < *(int *)(*(longlong *)(param_5 + 0x218) + 0x150))))))) {
    cVar4 = (DAT_14c760e10 == 2) * '\x02';
    if (DAT_14c760e10 == 1) {
      cVar4 = '\x01';
    }
    if (DAT_14c760e10 < 1) {
      cVar4 = '\0';
    }
  }
  local_104 = param_4;
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0xb8) + 0x30))();
  local_158 = local_98;
  local_150 = local_98 + 2;
  cVar4 = FUN_14723c8e2(param_11,cVar4,param_7,uVar7);
  if (cVar4 == '\0') goto LAB_14723d9c5;
  local_105 = cVar4;
  cVar4 = (**(code **)(*param_7 + 600))(param_7);
  if ((cVar4 == '\0') && ((*(byte *)(param_2 + 0xe7) & 1) == 0)) {
    bVar5 = 0;
LAB_14723d6ce:
    uVar10 = (undefined1)*(uint *)(param_1 + 0x84);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      local_d8 = *(undefined4 *)(param_1 + 0x40);
      uStack_d4 = *(undefined4 *)(param_1 + 0x44);
      uStack_d0 = *(undefined8 *)(param_1 + 0x48);
      local_c8 = *(undefined4 *)(param_1 + 0x50);
      uStack_c4 = *(undefined4 *)(param_1 + 0x54);
      uStack_c0 = *(undefined4 *)(param_1 + 0x58);
      uStack_bc = *(undefined4 *)(param_1 + 0x5c);
      local_b8 = *(undefined4 *)(param_1 + 0x60);
      uStack_b4 = *(undefined4 *)(param_1 + 100);
      uStack_b0 = *(undefined4 *)(param_1 + 0x68);
      uStack_ac = *(undefined4 *)(param_1 + 0x6c);
      local_a8 = *(undefined4 *)(param_1 + 0x70);
      uStack_a4 = *(undefined4 *)(param_1 + 0x74);
      uStack_a0 = *(undefined4 *)(param_1 + 0x78);
      uStack_9c = *(undefined4 *)(param_1 + 0x7c);
      bVar12 = true;
    }
    else {
      bVar12 = (*(int *)(*(longlong *)(param_1 + 0x18) + 0x35e8) - 3U & 0xfffffffd) != 0;
      local_d8 = *(undefined4 *)(param_1 + 0x40);
      uStack_d4 = *(undefined4 *)(param_1 + 0x44);
      uStack_d0 = *(undefined8 *)(param_1 + 0x48);
      local_c8 = *(undefined4 *)(param_1 + 0x50);
      uStack_c4 = *(undefined4 *)(param_1 + 0x54);
      uStack_c0 = *(undefined4 *)(param_1 + 0x58);
      uStack_bc = *(undefined4 *)(param_1 + 0x5c);
      local_b8 = *(undefined4 *)(param_1 + 0x60);
      uStack_b4 = *(undefined4 *)(param_1 + 100);
      uStack_b0 = *(undefined4 *)(param_1 + 0x68);
      uStack_ac = *(undefined4 *)(param_1 + 0x6c);
      local_a8 = *(undefined4 *)(param_1 + 0x70);
      uStack_a4 = *(undefined4 *)(param_1 + 0x74);
      uStack_a0 = *(undefined4 *)(param_1 + 0x78);
      uStack_9c = *(undefined4 *)(param_1 + 0x7c);
    }
    if ((*(uint *)(param_1 + 0x84) & 4) == 0) {
LAB_14723d728:
      if (*(char *)(param_1 + 0x88) == '\x01') {
        FUN_14723cfad(&local_d8,param_7,param_10);
      }
      else if ((byte)(bVar5 | ~bVar12 & (*(byte *)(param_2 + 0xe5) & 4) >> 2) == 1) {
        uStack_d0 = DAT_14c9c07c0;
        uStack_a0 = 0;
      }
      else {
        local_150 = (longlong *)CONCAT71(local_150._1_7_,*(undefined1 *)(param_1 + 0x8a));
        local_158 = (longlong *)(CONCAT71(local_158._1_7_,uVar10) & 0xffffffffffffff01);
        FUN_14723cf58(&local_d8,param_5,param_7,param_10);
      }
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      bVar5 = FUN_140077876(*(undefined2 *)
                             (&DAT_14ca85070 +
                             (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 8) * 2));
      goto LAB_14723d6ce;
    }
    uVar10 = (undefined1)*(uint *)(param_1 + 0x84);
    local_d8 = *(undefined4 *)(param_1 + 0x40);
    uStack_d4 = *(undefined4 *)(param_1 + 0x44);
    uStack_d0 = *(undefined8 *)(param_1 + 0x48);
    local_c8 = *(undefined4 *)(param_1 + 0x50);
    uStack_c4 = *(undefined4 *)(param_1 + 0x54);
    uStack_c0 = *(undefined4 *)(param_1 + 0x58);
    uStack_bc = *(undefined4 *)(param_1 + 0x5c);
    local_b8 = *(undefined4 *)(param_1 + 0x60);
    uStack_b4 = *(undefined4 *)(param_1 + 100);
    uStack_b0 = *(undefined4 *)(param_1 + 0x68);
    uStack_ac = *(undefined4 *)(param_1 + 0x6c);
    local_a8 = *(undefined4 *)(param_1 + 0x70);
    uStack_a4 = *(undefined4 *)(param_1 + 0x74);
    uStack_a0 = *(undefined4 *)(param_1 + 0x78);
    uStack_9c = *(undefined4 *)(param_1 + 0x7c);
    if ((*(uint *)(param_1 + 0x84) & 4) == 0) {
      bVar5 = 0;
      bVar12 = true;
      goto LAB_14723d728;
    }
  }
  local_100 = param_3;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    cVar4 = (**(code **)(*param_7 + 0x238))(param_7);
    bVar5 = 1;
    if (cVar4 != '\0') {
      bVar5 = FUN_147cee4d5(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2)
                           );
      bVar5 = bVar5 ^ 1;
    }
    uVar8 = FUN_147130e3d(param_5);
    uVar9 = 0;
    if (((param_10 >> 10 & 1) == 0) && (bVar5 != 0 || param_9 != '\0')) {
      uVar3 = (ushort)(uVar8 >> 0x30);
      uVar6 = 0xfffe;
      if (uVar3 < 0xfffe) {
        uVar6 = uVar3;
      }
      uVar9 = (ulonglong)(ushort)(uVar6 + 1) << 0x30;
    }
    uVar8 = uVar8 & 0xffffffffffff;
  }
  else {
    if (param_5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (ulonglong)(*(byte *)(param_5 + 0x6e) & 0x40) << 0x2a;
    }
    if (local_98[0] == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (ulonglong)*(ushort *)(local_98[0] + 0xdc);
    }
    if (local_98[2] == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (ulonglong)*(uint *)(local_98[2] + 0xdc) << 0x10;
    }
    uVar9 = uVar9 | uVar11;
    uVar8 = uVar8 | (ulonglong)param_8 << 0x31;
  }
  uVar1 = *(uint *)(param_2 + 0xe4);
  (**(code **)(*param_7 + 0x38))(param_7);
  cVar4 = (**(code **)(*param_7 + 0x100))(param_7);
  iVar2 = 2 - (uint)((uVar1 >> 0xc & 1) != 0);
  if (cVar4 != '\0') {
    iVar2 = 1;
  }
  cVar4 = (**(code **)(*param_7 + 0x38))(param_7);
  local_130 = 2 - (uint)((uVar1 & 0x40) == 0);
  if (cVar4 != '\0') {
    local_130 = 0;
  }
  if ((char)uVar1 < '\0') {
    local_130 = 0;
  }
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = *param_13;
  local_e0 = param_12;
  local_158 = (longlong *)CONCAT44(local_158._4_4_,local_104);
  local_150 = (longlong *)((ulonglong)local_150 & 0xffffffffffffff00);
  FUN_144b17a9a(&local_f8,*(undefined8 *)(param_1 + 0x28),param_5,param_2);
  local_140 = local_98;
  local_148 = &local_d8;
  local_150 = param_7;
  local_158 = param_6;
  local_120 = 0;
  local_138 = iVar2;
  local_128 = uVar8 | uVar9;
  local_118 = &local_f8;
  FUN_142bfc9e0(param_1,param_2,local_100,param_5);
  cVar4 = local_105;
LAB_14723d9c5:
  if ((local_98[10] ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar4;
}



// FUNCTION 14723dad0 FUN_14723dad0 body=212 status=ok
// SIG undefined FUN_14723dad0(void)

void FUN_14723dad0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  
  uVar1 = *(uint *)(param_2 + 0xe4);
  if (((uVar1 >> 9 & 1) != 0) && ((*(byte *)(param_1 + 0x84) & 8) == 0)) {
    if (param_4 == 0) {
      if ((uVar1 & 4) == 0) {
        return;
      }
    }
    else {
      if ((uVar1 & 4) == 0) {
        return;
      }
      if ((*(byte *)(param_4 + 0x6e) & 8) == 0) {
        return;
      }
    }
    if (((uVar1 & 8) == 0) || (*(char *)(param_2 + 0xdf) == '\0')) {
      plVar4 = *(longlong **)(param_2 + 0xc0);
      while ((plVar4 != (longlong *)0x0 &&
             (((lVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,*(undefined4 *)(param_1 + 0x20)),
               lVar3 == 0 || (*(longlong *)(lVar3 + 0x18) == 0)) ||
              (cVar2 = FUN_14723d458(param_1,param_2,param_3,param_4,param_5,plVar4,lVar3),
              cVar2 == '\0'))))) {
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))(plVar4,*(undefined4 *)(param_1 + 0x20));
      }
    }
  }
  return;
}



// FUNCTION 14723dba4 FUN_14723dba4 body=408 status=ok
// SIG undefined FUN_14723dba4(void)

void FUN_14723dba4(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  char local_c0;
  char local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = &local_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_e8 = &local_98;
  cVar1 = FUN_14723c8e2(param_7,param_6,param_5,*param_2);
  if (cVar1 != '\0') {
    cVar1 = '\0';
    if (*(char *)(param_1 + 0x88) != '\0') {
      cVar1 = (*(byte *)(param_1 + 0x89) & 1) + 1;
    }
    if ((&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf] == 1 &&
        (*(byte *)(param_1 + 0x89) & 1) == 0) {
      cVar2 = FUN_147cef7d7((ulonglong)DAT_14ca85550,1 < *(byte *)(param_4 + 0x6a),
                            *(undefined2 *)(param_4 + 0x68));
      local_c0 = cVar2 * '\x02' + '\x01';
    }
    else {
      local_c0 = ((&DAT_14ca814b8)[(ulonglong)DAT_14ca85550 * 0xf] == 1) * '\x02';
    }
    local_a8 = *(undefined4 *)(param_1 + 8);
    local_a0 = param_11;
    local_d0 = param_10;
    local_d8 = param_9;
    local_e0 = (undefined8 *)CONCAT44(local_e0._4_4_,param_8);
    local_b0 = 1;
    local_c8 = 0;
    local_e8 = &local_98;
    local_b8 = cVar1;
    FUN_142de6d16(param_2,param_5,param_3,param_4);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723dd3e FUN_14723dd3e body=2019 status=ok
// SIG undefined FUN_14723dd3e(void)

void FUN_14723dd3e(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  ulonglong *param_5,undefined8 param_6)

{
  undefined2 uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  bool bVar13;
  undefined1 auStack_198 [32];
  longlong *local_178;
  int local_170;
  undefined4 local_168;
  int local_160;
  int local_158;
  uint local_150;
  undefined8 local_148;
  byte local_13d;
  uint local_13c;
  byte local_135;
  int local_134;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint uStack_f0;
  undefined4 uStack_ec;
  ushort local_da;
  undefined4 local_d8 [4];
  undefined4 *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca09728) && (FUN_144b3d300(&DAT_14ca09728), DAT_14ca09728 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca09720 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PSOPrecache.TranslucencyAllPass",1)
      ;
      _Init_thread_footer(&DAT_14ca09728);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca09738) && (FUN_144b3d300(&DAT_14ca09738), DAT_14ca09738 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca09730 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SeparateTranslucency",1);
      _Init_thread_footer(&DAT_14ca09738);
    }
    iVar8 = (**(code **)(*DAT_14ca09730 + 0xb0))();
    if (iVar8 == 0) {
      if (*(char *)(param_1 + 0x11) != '\x13') goto LAB_14723de0c;
    }
    else if ((*(char *)(param_1 + 0x11) == '\x13') &&
            (iVar8 = (**(code **)(*DAT_14ca09720 + 0xb0))(), iVar8 == 0)) goto LAB_14723de0c;
  }
  if (((*param_5 & 0x200) == 0) || (cVar4 = FUN_14723d388(param_1,param_3), cVar4 == '\0'))
  goto LAB_14723de0c;
  uVar1 = *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x20) * 2);
  uVar3 = *param_5;
  (**(code **)(*param_3 + 0x38))(param_3);
  local_13d = (**(code **)(*param_3 + 0x100))(param_3);
  cVar4 = (**(code **)(*param_3 + 0x38))(param_3);
  local_134 = (((uint)uVar3 >> 0x10 & 1) != 0) + 1;
  if (cVar4 != '\0') {
    local_134 = 0;
  }
  if (((uint)uVar3 & 0x20000) != 0) {
    local_134 = 0;
  }
  (**(code **)(*param_3 + 0x270))(param_3);
  (**(code **)(*param_3 + 0x288))(param_3,&local_da);
  local_13c = (uint)local_da;
  local_130 = *param_5;
  local_135 = ((uint)(local_130 >> 0x14) & 0xf) - 1 < 2;
  local_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  local_118 = *(undefined4 *)(param_1 + 0x50);
  uStack_114 = *(undefined4 *)(param_1 + 0x54);
  uStack_110 = *(undefined4 *)(param_1 + 0x58);
  uStack_10c = *(undefined4 *)(param_1 + 0x5c);
  local_108 = *(undefined4 *)(param_1 + 0x60);
  uStack_104 = *(undefined4 *)(param_1 + 100);
  uStack_100 = *(undefined4 *)(param_1 + 0x68);
  uStack_fc = *(undefined4 *)(param_1 + 0x6c);
  local_f8 = *(undefined4 *)(param_1 + 0x70);
  uStack_f4 = *(undefined4 *)(param_1 + 0x74);
  uStack_f0 = *(uint *)(param_1 + 0x78);
  uStack_ec = *(undefined4 *)(param_1 + 0x7c);
  cVar4 = FUN_140077876(uVar1);
  uVar9 = 0x22;
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar9 = 0x11;
  }
  if (cVar4 != '\0') {
    uVar9 = 0x11;
  }
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_140a1799a(param_2,&local_b8,0);
  local_60 = *(undefined8 *)(param_2 + 0x38);
  local_68 = 0xb;
  bVar13 = ((uint)local_60 >> 0xc & 1) == 0;
  uStack_58 = CONCAT44(uVar9,CONCAT13(bVar13,0x10001));
  uStack_58._0_2_ = CONCAT11((uVar9 & 3) != 0 && bVar13,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca0e6c8) && (FUN_144b3d300(&DAT_14ca0e6c8), DAT_14ca0e6c8 == -1)) {
    FUN_1448944a0(&DAT_14ca0e6c4,DAT_14ca85550);
    _Init_thread_footer(&DAT_14ca0e6c8);
  }
  local_50._0_3_ =
       CONCAT12((DAT_14ca84e1b & 1) + 1 & (char)(DAT_14ca0e6c4 << 6) >> 7,(undefined2)local_50);
  uVar5 = FUN_147323d0c(&DAT_14ca63c98);
  local_50 = CONCAT13(uVar5,(undefined3)local_50);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_14723cfad(&local_128,param_3,local_da);
    uVar9 = local_13c;
  }
  else {
    uStack_120 = DAT_14ca0dd78;
    if (*(char *)(param_1 + 0x8a) == '\x01') {
      bVar6 = (**(code **)(*param_3 + 0x1f8))(param_3);
      if (local_da == 1) {
        bVar7 = 0;
      }
      else {
        bVar7 = bVar6 ^ 3;
        if ((local_da != 2) && (bVar7 = 1, DAT_14c760e18 != '\0')) {
          bVar7 = bVar6 ^ 3;
        }
      }
      bVar7 = bVar7 * '\x02';
    }
    else {
      bVar7 = 0;
    }
    uVar9 = local_13c;
    uStack_f0 = (uint)bVar7;
    cVar4 = FUN_144b25a37(param_3);
    if ((cVar4 != '\0') && (cVar4 = (**(code **)(*param_3 + 0x218))(param_3), cVar4 != '\0')) {
      local_128 = DAT_14ca0dd90;
    }
  }
  if ((((byte)uVar9 | *(byte *)(param_1 + 0x8a)) & 1) == 0) {
    local_13c = (uint)(DAT_14c760e10 == 2) * 2;
    bVar7 = 0;
    if (DAT_14c760e10 == 1) {
      local_13c = 1;
    }
    if (DAT_14c760e10 < 1) {
      local_13c = 0;
    }
  }
  else {
    bVar7 = (uVar9 & 1) == 0 | *(byte *)(param_1 + 0x8a);
    local_13c = 0;
  }
  puVar10 = local_d8 + 1;
  uVar2 = *(uint *)(param_1 + 0x84);
  cVar4 = *(char *)(param_1 + 0x88);
  local_c8 = (undefined4 *)0x0;
  local_c0 = 0x400000000;
  if ((uVar9 & 1) == 0) {
    if (DAT_14c760e18 == '\0') {
      local_c0 = 0x400000001;
      local_d8[0] = 0;
      if ((bVar7 & 1) == 0) {
        cVar4 = FUN_140270692();
        uVar3 = local_c0;
        iVar8 = (int)local_c0;
        if (cVar4 == '\0') {
          uVar9 = (int)local_c0 + 1;
          local_c0 = CONCAT44(local_c0._4_4_,uVar9);
          uVar11 = 0xc;
          if (local_c0._4_4_ < uVar9) {
            FUN_147244566(local_d8,uVar3 & 0xffffffff);
          }
          goto LAB_14723e3e8;
        }
LAB_14723e405:
        puVar12 = local_d8;
        if (local_c8 != (undefined4 *)0x0) {
          puVar12 = local_c8;
        }
        if ((int)local_c0 == 0) goto LAB_14723e303;
        puVar10 = puVar12 + (int)local_c0;
      }
      else {
        puVar12 = local_d8;
      }
      goto LAB_14723e13e;
    }
    local_135 = local_135 | (byte)(local_130 >> 0xe) & 1;
    if (local_135 != 0) {
      puVar10 = local_d8 + 2;
      if ((((bVar7 & 1) == 0) && ((uVar2 & 2) != 0)) && ((DAT_14c760e16 & 1) != 0)) {
        local_d8[0] = 0xb;
      }
      else {
        local_d8[0] = 10;
        if ((uVar2 & 2) == 0) {
          puVar12 = local_d8;
          local_c0 = 0x400000002;
          local_d8[1] = 0;
          goto LAB_14723e13e;
        }
      }
      puVar12 = local_d8;
      local_c0 = 0x400000002;
      local_d8[1] = 0xc;
      goto LAB_14723e13e;
    }
    if (DAT_14c760e0c != '\0') {
      bVar6 = DAT_14c760e0d ^ 1;
      if (((bVar7 | ~DAT_14c760e16 | (uVar2 & 2) == 0) & 1) == 0) {
        if (cVar4 == '\0' && bVar6 == 0) {
          local_d8[0] = 8;
        }
        bVar13 = cVar4 == '\0' && bVar6 == 0;
        iVar8 = bVar13 + 1;
        local_d8[bVar13] = 9;
      }
      else {
        iVar8 = 0;
        if ((bVar6 == 0 && cVar4 == '\0') && (char)((uVar2 & 2) >> 1) == '\0') {
          local_d8[0] = 7;
          iVar8 = 1;
        }
      }
      local_c0 = CONCAT44(4,iVar8 + 1);
      uVar11 = 4;
LAB_14723e3e8:
      puVar10 = local_c8;
      if (local_c8 == (undefined4 *)0x0) {
        puVar10 = local_d8;
      }
      puVar10[iVar8] = uVar11;
      goto LAB_14723e405;
    }
  }
  else {
    puVar12 = local_d8;
    local_c0 = 0x400000001;
    local_d8[0] = 0;
LAB_14723e13e:
    uVar9 = (uint)local_13d;
    do {
      uVar11 = *puVar12;
      local_150 = (uint)*param_5 & 0x3f;
      local_148 = param_6;
      local_158 = local_134;
      local_170 = 0;
      local_178 = param_3;
      local_168 = uVar11;
      local_160 = 2 - uVar9;
      FUN_14723dba4(param_1,param_4,&local_128,&local_b8);
      if (local_13c != 0) {
        local_150 = (uint)*param_5 & 0x3f;
        local_148 = param_6;
        local_158 = local_134;
        local_170 = local_13c;
        local_178 = param_3;
        local_168 = uVar11;
        local_160 = 2 - uVar9;
        FUN_14723dba4(param_1,param_4,&local_128,&local_b8);
      }
      puVar12 = puVar12 + 1;
    } while (puVar12 != puVar10);
  }
LAB_14723e303:
  if (local_c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_14723de0c:
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14723e563 FUN_14723e563 body=82 status=ok
// SIG undefined FUN_14723e563(void)

char FUN_14723e563(ushort param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_1;
  cVar1 = '\x01';
  if (((*(byte *)((longlong)&DAT_14ca814d0 + uVar2 * 0x3c) & 8) == 0) &&
     ((*(byte *)(&DAT_14ca814d8 + uVar2 * 0xf) & 0x80) == 0)) {
    cVar1 = '\x02';
    if (((&DAT_14ca814c8)[uVar2 * 0xf] & 1) == 0 ||
        *(longlong *)(&DAT_14ca814b0 + uVar2 * 0x3c) != DAT_14ca838f8) {
      cVar1 = (((&DAT_14ca814c8)[uVar2 * 0xf] & 0x20) == 0) + '\x02';
    }
  }
  return cVar1;
}



// FUNCTION 14723e5b6 FUN_14723e5b6 body=68 status=ok
// SIG undefined FUN_14723e5b6(void)

void FUN_14723e5b6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14723e602 FUN_14723e602 body=39 status=ok
// SIG undefined FUN_14723e602(void)

void FUN_14723e602(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724b814(uVar1,param_1);
  return;
}



// FUNCTION 14723e62a FUN_14723e62a body=79 status=ok
// SIG undefined FUN_14723e62a(void)

longlong FUN_14723e62a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14723e67a FUN_14723e67a body=68 status=ok
// SIG undefined FUN_14723e67a(void)

void FUN_14723e67a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723e6c6 FUN_14723e6c6 body=39 status=ok
// SIG undefined FUN_14723e6c6(void)

void FUN_14723e6c6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723e6ee FUN_14723e6ee body=99 status=ok
// SIG undefined FUN_14723e6ee(void)

longlong FUN_14723e6ee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723e752 FUN_14723e752 body=68 status=ok
// SIG undefined FUN_14723e752(void)

void FUN_14723e752(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723e79e FUN_14723e79e body=39 status=ok
// SIG undefined FUN_14723e79e(void)

void FUN_14723e79e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723e7c6 FUN_14723e7c6 body=99 status=ok
// SIG undefined FUN_14723e7c6(void)

longlong FUN_14723e7c6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723e82a FUN_14723e82a body=68 status=ok
// SIG undefined FUN_14723e82a(void)

void FUN_14723e82a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723e876 FUN_14723e876 body=39 status=ok
// SIG undefined FUN_14723e876(void)

void FUN_14723e876(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723e89e FUN_14723e89e body=99 status=ok
// SIG undefined FUN_14723e89e(void)

longlong FUN_14723e89e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723e902 FUN_14723e902 body=68 status=ok
// SIG undefined FUN_14723e902(void)

void FUN_14723e902(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723e94e FUN_14723e94e body=39 status=ok
// SIG undefined FUN_14723e94e(void)

void FUN_14723e94e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723e976 FUN_14723e976 body=99 status=ok
// SIG undefined FUN_14723e976(void)

longlong FUN_14723e976(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723e9da FUN_14723e9da body=68 status=ok
// SIG undefined FUN_14723e9da(void)

void FUN_14723e9da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ea26 FUN_14723ea26 body=39 status=ok
// SIG undefined FUN_14723ea26(void)

void FUN_14723ea26(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723ea4e FUN_14723ea4e body=99 status=ok
// SIG undefined FUN_14723ea4e(void)

longlong FUN_14723ea4e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723eab2 FUN_14723eab2 body=68 status=ok
// SIG undefined FUN_14723eab2(void)

void FUN_14723eab2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723eafe FUN_14723eafe body=39 status=ok
// SIG undefined FUN_14723eafe(void)

void FUN_14723eafe(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724b954(uVar1,param_1);
  return;
}



// FUNCTION 14723eb26 FUN_14723eb26 body=99 status=ok
// SIG undefined FUN_14723eb26(void)

longlong FUN_14723eb26(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723eb8a FUN_14723eb8a body=68 status=ok
// SIG undefined FUN_14723eb8a(void)

void FUN_14723eb8a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14723ebd6 FUN_14723ebd6 body=39 status=ok
// SIG undefined FUN_14723ebd6(void)

void FUN_14723ebd6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724bb0c(uVar1,param_1);
  return;
}



// FUNCTION 14723ebfe FUN_14723ebfe body=79 status=ok
// SIG undefined FUN_14723ebfe(void)

longlong FUN_14723ebfe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14723ec4e FUN_14723ec4e body=68 status=ok
// SIG undefined FUN_14723ec4e(void)

void FUN_14723ec4e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ec9a FUN_14723ec9a body=39 status=ok
// SIG undefined FUN_14723ec9a(void)

void FUN_14723ec9a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723ecc2 FUN_14723ecc2 body=99 status=ok
// SIG undefined FUN_14723ecc2(void)

longlong FUN_14723ecc2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723ed26 FUN_14723ed26 body=68 status=ok
// SIG undefined FUN_14723ed26(void)

void FUN_14723ed26(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ed72 FUN_14723ed72 body=39 status=ok
// SIG undefined FUN_14723ed72(void)

void FUN_14723ed72(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723ed9a FUN_14723ed9a body=99 status=ok
// SIG undefined FUN_14723ed9a(void)

longlong FUN_14723ed9a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723edfe FUN_14723edfe body=68 status=ok
// SIG undefined FUN_14723edfe(void)

void FUN_14723edfe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ee4a FUN_14723ee4a body=39 status=ok
// SIG undefined FUN_14723ee4a(void)

void FUN_14723ee4a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723ee72 FUN_14723ee72 body=99 status=ok
// SIG undefined FUN_14723ee72(void)

longlong FUN_14723ee72(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723eed6 FUN_14723eed6 body=68 status=ok
// SIG undefined FUN_14723eed6(void)

void FUN_14723eed6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ef22 FUN_14723ef22 body=39 status=ok
// SIG undefined FUN_14723ef22(void)

void FUN_14723ef22(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723ef4a FUN_14723ef4a body=99 status=ok
// SIG undefined FUN_14723ef4a(void)

longlong FUN_14723ef4a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723efae FUN_14723efae body=68 status=ok
// SIG undefined FUN_14723efae(void)

void FUN_14723efae(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723effa FUN_14723effa body=39 status=ok
// SIG undefined FUN_14723effa(void)

void FUN_14723effa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723f022 FUN_14723f022 body=99 status=ok
// SIG undefined FUN_14723f022(void)

longlong FUN_14723f022(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f086 FUN_14723f086 body=68 status=ok
// SIG undefined FUN_14723f086(void)

void FUN_14723f086(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f0d2 FUN_14723f0d2 body=39 status=ok
// SIG undefined FUN_14723f0d2(void)

void FUN_14723f0d2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bc4c(uVar1,param_1);
  return;
}



// FUNCTION 14723f0fa FUN_14723f0fa body=99 status=ok
// SIG undefined FUN_14723f0fa(void)

longlong FUN_14723f0fa(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f15e FUN_14723f15e body=68 status=ok
// SIG undefined FUN_14723f15e(void)

void FUN_14723f15e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14723f1aa FUN_14723f1aa body=39 status=ok
// SIG undefined FUN_14723f1aa(void)

void FUN_14723f1aa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724be04(uVar1,param_1);
  return;
}



// FUNCTION 14723f1d2 FUN_14723f1d2 body=79 status=ok
// SIG undefined FUN_14723f1d2(void)

longlong FUN_14723f1d2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14723f222 FUN_14723f222 body=68 status=ok
// SIG undefined FUN_14723f222(void)

void FUN_14723f222(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f26e FUN_14723f26e body=39 status=ok
// SIG undefined FUN_14723f26e(void)

void FUN_14723f26e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f296 FUN_14723f296 body=99 status=ok
// SIG undefined FUN_14723f296(void)

longlong FUN_14723f296(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f2fa FUN_14723f2fa body=68 status=ok
// SIG undefined FUN_14723f2fa(void)

void FUN_14723f2fa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f346 FUN_14723f346 body=39 status=ok
// SIG undefined FUN_14723f346(void)

void FUN_14723f346(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f36e FUN_14723f36e body=99 status=ok
// SIG undefined FUN_14723f36e(void)

longlong FUN_14723f36e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f3d2 FUN_14723f3d2 body=68 status=ok
// SIG undefined FUN_14723f3d2(void)

void FUN_14723f3d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f41e FUN_14723f41e body=39 status=ok
// SIG undefined FUN_14723f41e(void)

void FUN_14723f41e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f446 FUN_14723f446 body=99 status=ok
// SIG undefined FUN_14723f446(void)

longlong FUN_14723f446(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f4aa FUN_14723f4aa body=68 status=ok
// SIG undefined FUN_14723f4aa(void)

void FUN_14723f4aa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f4f6 FUN_14723f4f6 body=39 status=ok
// SIG undefined FUN_14723f4f6(void)

void FUN_14723f4f6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f51e FUN_14723f51e body=99 status=ok
// SIG undefined FUN_14723f51e(void)

longlong FUN_14723f51e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f582 FUN_14723f582 body=68 status=ok
// SIG undefined FUN_14723f582(void)

void FUN_14723f582(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f5ce FUN_14723f5ce body=39 status=ok
// SIG undefined FUN_14723f5ce(void)

void FUN_14723f5ce(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f5f6 FUN_14723f5f6 body=99 status=ok
// SIG undefined FUN_14723f5f6(void)

longlong FUN_14723f5f6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f65a FUN_14723f65a body=68 status=ok
// SIG undefined FUN_14723f65a(void)

void FUN_14723f65a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f6a6 FUN_14723f6a6 body=39 status=ok
// SIG undefined FUN_14723f6a6(void)

void FUN_14723f6a6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724bf44(uVar1,param_1);
  return;
}



// FUNCTION 14723f6ce FUN_14723f6ce body=99 status=ok
// SIG undefined FUN_14723f6ce(void)

longlong FUN_14723f6ce(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f732 FUN_14723f732 body=68 status=ok
// SIG undefined FUN_14723f732(void)

void FUN_14723f732(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14723f77e FUN_14723f77e body=39 status=ok
// SIG undefined FUN_14723f77e(void)

void FUN_14723f77e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724c0fc(uVar1,param_1);
  return;
}



// FUNCTION 14723f7a6 FUN_14723f7a6 body=79 status=ok
// SIG undefined FUN_14723f7a6(void)

longlong FUN_14723f7a6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14723f7f6 FUN_14723f7f6 body=68 status=ok
// SIG undefined FUN_14723f7f6(void)

void FUN_14723f7f6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f842 FUN_14723f842 body=39 status=ok
// SIG undefined FUN_14723f842(void)

void FUN_14723f842(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723f86a FUN_14723f86a body=99 status=ok
// SIG undefined FUN_14723f86a(void)

longlong FUN_14723f86a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f8ce FUN_14723f8ce body=68 status=ok
// SIG undefined FUN_14723f8ce(void)

void FUN_14723f8ce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f91a FUN_14723f91a body=39 status=ok
// SIG undefined FUN_14723f91a(void)

void FUN_14723f91a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723f942 FUN_14723f942 body=99 status=ok
// SIG undefined FUN_14723f942(void)

longlong FUN_14723f942(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723f9a6 FUN_14723f9a6 body=68 status=ok
// SIG undefined FUN_14723f9a6(void)

void FUN_14723f9a6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723f9f2 FUN_14723f9f2 body=39 status=ok
// SIG undefined FUN_14723f9f2(void)

void FUN_14723f9f2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723fa1a FUN_14723fa1a body=99 status=ok
// SIG undefined FUN_14723fa1a(void)

longlong FUN_14723fa1a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723fa7e FUN_14723fa7e body=68 status=ok
// SIG undefined FUN_14723fa7e(void)

void FUN_14723fa7e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723faca FUN_14723faca body=39 status=ok
// SIG undefined FUN_14723faca(void)

void FUN_14723faca(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723faf2 FUN_14723faf2 body=99 status=ok
// SIG undefined FUN_14723faf2(void)

longlong FUN_14723faf2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723fb56 FUN_14723fb56 body=68 status=ok
// SIG undefined FUN_14723fb56(void)

void FUN_14723fb56(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723fba2 FUN_14723fba2 body=39 status=ok
// SIG undefined FUN_14723fba2(void)

void FUN_14723fba2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723fbca FUN_14723fbca body=99 status=ok
// SIG undefined FUN_14723fbca(void)

longlong FUN_14723fbca(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723fc2e FUN_14723fc2e body=68 status=ok
// SIG undefined FUN_14723fc2e(void)

void FUN_14723fc2e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723fc7a FUN_14723fc7a body=39 status=ok
// SIG undefined FUN_14723fc7a(void)

void FUN_14723fc7a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c23c(uVar1,param_1);
  return;
}



// FUNCTION 14723fca2 FUN_14723fca2 body=99 status=ok
// SIG undefined FUN_14723fca2(void)

longlong FUN_14723fca2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723fd06 FUN_14723fd06 body=68 status=ok
// SIG undefined FUN_14723fd06(void)

void FUN_14723fd06(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 14723fd52 FUN_14723fd52 body=39 status=ok
// SIG undefined FUN_14723fd52(void)

void FUN_14723fd52(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724c3f4(uVar1,param_1);
  return;
}



// FUNCTION 14723fd7a FUN_14723fd7a body=79 status=ok
// SIG undefined FUN_14723fd7a(void)

longlong FUN_14723fd7a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14723fdca FUN_14723fdca body=68 status=ok
// SIG undefined FUN_14723fdca(void)

void FUN_14723fdca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723fe16 FUN_14723fe16 body=39 status=ok
// SIG undefined FUN_14723fe16(void)

void FUN_14723fe16(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 14723fe3e FUN_14723fe3e body=99 status=ok
// SIG undefined FUN_14723fe3e(void)

longlong FUN_14723fe3e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723fea2 FUN_14723fea2 body=68 status=ok
// SIG undefined FUN_14723fea2(void)

void FUN_14723fea2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723feee FUN_14723feee body=39 status=ok
// SIG undefined FUN_14723feee(void)

void FUN_14723feee(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 14723ff16 FUN_14723ff16 body=99 status=ok
// SIG undefined FUN_14723ff16(void)

longlong FUN_14723ff16(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14723ff7a FUN_14723ff7a body=68 status=ok
// SIG undefined FUN_14723ff7a(void)

void FUN_14723ff7a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14723ffc6 FUN_14723ffc6 body=39 status=ok
// SIG undefined FUN_14723ffc6(void)

void FUN_14723ffc6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 14723ffee FUN_14723ffee body=99 status=ok
// SIG undefined FUN_14723ffee(void)

longlong FUN_14723ffee(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240052 FUN_147240052 body=68 status=ok
// SIG undefined FUN_147240052(void)

void FUN_147240052(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724009e FUN_14724009e body=39 status=ok
// SIG undefined FUN_14724009e(void)

void FUN_14724009e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 1472400c6 FUN_1472400c6 body=99 status=ok
// SIG undefined FUN_1472400c6(void)

longlong FUN_1472400c6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14724012a FUN_14724012a body=68 status=ok
// SIG undefined FUN_14724012a(void)

void FUN_14724012a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240176 FUN_147240176 body=39 status=ok
// SIG undefined FUN_147240176(void)

void FUN_147240176(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 14724019e FUN_14724019e body=99 status=ok
// SIG undefined FUN_14724019e(void)

longlong FUN_14724019e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240202 FUN_147240202 body=68 status=ok
// SIG undefined FUN_147240202(void)

void FUN_147240202(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724024e FUN_14724024e body=39 status=ok
// SIG undefined FUN_14724024e(void)

void FUN_14724024e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c534(uVar1,param_1);
  return;
}



// FUNCTION 147240276 FUN_147240276 body=99 status=ok
// SIG undefined FUN_147240276(void)

longlong FUN_147240276(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 1472402da FUN_1472402da body=68 status=ok
// SIG undefined FUN_1472402da(void)

void FUN_1472402da(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147240326 FUN_147240326 body=39 status=ok
// SIG undefined FUN_147240326(void)

void FUN_147240326(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724c6ec(uVar1,param_1);
  return;
}



// FUNCTION 14724034e FUN_14724034e body=79 status=ok
// SIG undefined FUN_14724034e(void)

longlong FUN_14724034e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 14724039e FUN_14724039e body=68 status=ok
// SIG undefined FUN_14724039e(void)

void FUN_14724039e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472403ea FUN_1472403ea body=39 status=ok
// SIG undefined FUN_1472403ea(void)

void FUN_1472403ea(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 147240412 FUN_147240412 body=99 status=ok
// SIG undefined FUN_147240412(void)

longlong FUN_147240412(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240476 FUN_147240476 body=68 status=ok
// SIG undefined FUN_147240476(void)

void FUN_147240476(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472404c2 FUN_1472404c2 body=39 status=ok
// SIG undefined FUN_1472404c2(void)

void FUN_1472404c2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 1472404ea FUN_1472404ea body=99 status=ok
// SIG undefined FUN_1472404ea(void)

longlong FUN_1472404ea(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 14724054e FUN_14724054e body=68 status=ok
// SIG undefined FUN_14724054e(void)

void FUN_14724054e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724059a FUN_14724059a body=39 status=ok
// SIG undefined FUN_14724059a(void)

void FUN_14724059a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 1472405c2 FUN_1472405c2 body=99 status=ok
// SIG undefined FUN_1472405c2(void)

longlong FUN_1472405c2(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240626 FUN_147240626 body=68 status=ok
// SIG undefined FUN_147240626(void)

void FUN_147240626(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240672 FUN_147240672 body=39 status=ok
// SIG undefined FUN_147240672(void)

void FUN_147240672(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 14724069a FUN_14724069a body=99 status=ok
// SIG undefined FUN_14724069a(void)

longlong FUN_14724069a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 1472406fe FUN_1472406fe body=68 status=ok
// SIG undefined FUN_1472406fe(void)

void FUN_1472406fe(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 14724074a FUN_14724074a body=39 status=ok
// SIG undefined FUN_14724074a(void)

void FUN_14724074a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 147240772 FUN_147240772 body=99 status=ok
// SIG undefined FUN_147240772(void)

longlong FUN_147240772(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 1472407d6 FUN_1472407d6 body=68 status=ok
// SIG undefined FUN_1472407d6(void)

void FUN_1472407d6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240822 FUN_147240822 body=39 status=ok
// SIG undefined FUN_147240822(void)

void FUN_147240822(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724c82c(uVar1,param_1);
  return;
}



// FUNCTION 14724084a FUN_14724084a body=99 status=ok
// SIG undefined FUN_14724084a(void)

longlong FUN_14724084a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 1472408ae FUN_1472408ae body=68 status=ok
// SIG undefined FUN_1472408ae(void)

void FUN_1472408ae(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1472408fa FUN_1472408fa body=39 status=ok
// SIG undefined FUN_1472408fa(void)

void FUN_1472408fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_14724c9e4(uVar1,param_1);
  return;
}



// FUNCTION 147240922 FUN_147240922 body=79 status=ok
// SIG undefined FUN_147240922(void)

longlong FUN_147240922(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
  *(undefined2 *)(lVar1 + 0x10c) = 0xffff;
  return lVar1;
}



// FUNCTION 147240972 FUN_147240972 body=68 status=ok
// SIG undefined FUN_147240972(void)

void FUN_147240972(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 1472409be FUN_1472409be body=39 status=ok
// SIG undefined FUN_1472409be(void)

void FUN_1472409be(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724cb24(uVar1,param_1);
  return;
}



// FUNCTION 1472409e6 FUN_1472409e6 body=99 status=ok
// SIG undefined FUN_1472409e6(void)

longlong FUN_1472409e6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240a4a FUN_147240a4a body=68 status=ok
// SIG undefined FUN_147240a4a(void)

void FUN_147240a4a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240a96 FUN_147240a96 body=39 status=ok
// SIG undefined FUN_147240a96(void)

void FUN_147240a96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724cb24(uVar1,param_1);
  return;
}



// FUNCTION 147240abe FUN_147240abe body=99 status=ok
// SIG undefined FUN_147240abe(void)

longlong FUN_147240abe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240b22 FUN_147240b22 body=68 status=ok
// SIG undefined FUN_147240b22(void)

void FUN_147240b22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240b6e FUN_147240b6e body=39 status=ok
// SIG undefined FUN_147240b6e(void)

void FUN_147240b6e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724cb24(uVar1,param_1);
  return;
}



// FUNCTION 147240b96 FUN_147240b96 body=99 status=ok
// SIG undefined FUN_147240b96(void)

longlong FUN_147240b96(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240bfa FUN_147240bfa body=68 status=ok
// SIG undefined FUN_147240bfa(void)

void FUN_147240bfa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240c46 FUN_147240c46 body=39 status=ok
// SIG undefined FUN_147240c46(void)

void FUN_147240c46(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724cb24(uVar1,param_1);
  return;
}



// FUNCTION 147240c6e FUN_147240c6e body=99 status=ok
// SIG undefined FUN_147240c6e(void)

longlong FUN_147240c6e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}



// FUNCTION 147240cd2 FUN_147240cd2 body=68 status=ok
// SIG undefined FUN_147240cd2(void)

void FUN_147240cd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    if (*(ulonglong *)((longlong)param_1 + 0xe0) != 0 &&
        (*(ulonglong *)((longlong)param_1 + 0xe0) & 1) == 0) {
      FUN_1400020a8();
    }
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x118);
  return;
}



// FUNCTION 147240d1e FUN_147240d1e body=39 status=ok
// SIG undefined FUN_147240d1e(void)

void FUN_147240d1e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x118,0x10);
  FUN_14724cb24(uVar1,param_1);
  return;
}



// FUNCTION 147240d46 FUN_147240d46 body=99 status=ok
// SIG undefined FUN_147240d46(void)

longlong FUN_147240d46(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x118,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  *(undefined2 *)(lVar1 + 0x110) = 0xffff;
  *(undefined8 *)(lVar1 + 0x108) = 0xffffffffffffffff;
  *(undefined4 *)(lVar1 + 0x112) = 0;
  *(undefined2 *)(lVar1 + 0x116) = 0;
  return lVar1;
}


