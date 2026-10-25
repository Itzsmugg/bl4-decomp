// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1472a461e FUN_1472a461e body=136 status=ok
// SIG undefined FUN_1472a461e(void)

code * FUN_1472a461e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWHistogramBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000070a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a46a6;
}



// FUNCTION 1472a46a6 FUN_1472a46a6 body=136 status=ok
// SIG undefined FUN_1472a46a6(void)

code * FUN_1472a46a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<half>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000709;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a472e;
}



// FUNCTION 1472a472e FUN_1472a472e body=136 status=ok
// SIG undefined FUN_1472a472e(void)

code * FUN_1472a472e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000708;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a47b6;
}



// FUNCTION 1472a47b6 FUN_1472a47b6 body=142 status=ok
// SIG undefined FUN_1472a47b6(void)

code * FUN_1472a47b6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000707;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472a4844;
}



// FUNCTION 1472a4844 FUN_1472a4844 body=136 status=ok
// SIG undefined FUN_1472a4844(void)

code * FUN_1472a4844(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SourceSizeAndInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000706;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a48cc;
}



// FUNCTION 1472a48cc FUN_1472a48cc body=136 status=ok
// SIG undefined FUN_1472a48cc(void)

undefined1 * FUN_1472a48cc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x705;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a4954;
}



// FUNCTION 1472a4958 FUN_1472a4958 body=29 status=ok
// SIG undefined FUN_1472a4958(void)

undefined8 FUN_1472a4958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a4976 FUN_1472a4976 body=384 status=ok
// SIG undefined FUN_1472a4976(void)

void FUN_1472a4976(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca32fc8;
  if (DAT_14ca32fc8 != 0) {
    LOCK();
    *(int *)(DAT_14ca32fc8 + 8) = *(int *)(DAT_14ca32fc8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca32f80;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4680;
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



// FUNCTION 1472a4af8 FUN_1472a4af8 body=38 status=ok
// SIG undefined FUN_1472a4af8(void)

undefined8 FUN_1472a4af8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a4b1e FUN_1472a4b1e body=163 status=ok
// SIG undefined FUN_1472a4b1e(void)

void FUN_1472a4b1e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1d080();
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
  FUN_142f1d168(param_1,param_2);
  return;
}



// FUNCTION 1472a4bc1 FUN_1472a4bc1 body=374 status=ok
// SIG undefined FUN_1472a4bc1(void)

void FUN_1472a4bc1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a4d38 FUN_1472a4d38 body=29 status=ok
// SIG undefined FUN_1472a4d38(void)

undefined8 FUN_1472a4d38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a4d56 FUN_1472a4d56 body=384 status=ok
// SIG undefined FUN_1472a4d56(void)

void FUN_1472a4d56(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca34830;
  if (DAT_14ca34830 != 0) {
    LOCK();
    *(int *)(DAT_14ca34830 + 8) = *(int *)(DAT_14ca34830 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca347e8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c46a0;
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



// FUNCTION 1472a4ed8 FUN_1472a4ed8 body=38 status=ok
// SIG undefined FUN_1472a4ed8(void)

undefined8 FUN_1472a4ed8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a4efe FUN_1472a4efe body=163 status=ok
// SIG undefined FUN_1472a4efe(void)

void FUN_1472a4efe(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1d39c();
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
  FUN_142f1d484(param_1,param_2);
  return;
}



// FUNCTION 1472a4fa1 FUN_1472a4fa1 body=374 status=ok
// SIG undefined FUN_1472a4fa1(void)

void FUN_1472a4fa1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a5118 FUN_1472a5118 body=384 status=ok
// SIG undefined FUN_1472a5118(void)

void FUN_1472a5118(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca34830;
  if (DAT_14ca34830 != 0) {
    LOCK();
    *(int *)(DAT_14ca34830 + 8) = *(int *)(DAT_14ca34830 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca347e8;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c46c0;
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



// FUNCTION 1472a529a FUN_1472a529a body=38 status=ok
// SIG undefined FUN_1472a529a(void)

undefined8 FUN_1472a529a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a52c0 FUN_1472a52c0 body=163 status=ok
// SIG undefined FUN_1472a52c0(void)

void FUN_1472a52c0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1d6b8();
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
  FUN_142f1d7a0(param_1,param_2);
  return;
}



// FUNCTION 1472a5363 FUN_1472a5363 body=374 status=ok
// SIG undefined FUN_1472a5363(void)

void FUN_1472a5363(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a54da FUN_1472a54da body=29 status=ok
// SIG undefined FUN_1472a54da(void)

undefined8 FUN_1472a54da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a54f8 FUN_1472a54f8 body=384 status=ok
// SIG undefined FUN_1472a54f8(void)

void FUN_1472a54f8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca33050;
  if (DAT_14ca33050 != 0) {
    LOCK();
    *(int *)(DAT_14ca33050 + 8) = *(int *)(DAT_14ca33050 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca33008;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c46e0;
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



// FUNCTION 1472a567a FUN_1472a567a body=38 status=ok
// SIG undefined FUN_1472a567a(void)

undefined8 FUN_1472a567a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a56a0 FUN_1472a56a0 body=163 status=ok
// SIG undefined FUN_1472a56a0(void)

void FUN_1472a56a0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1d9d4();
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
  FUN_142f1dabc(param_1,param_2);
  return;
}



// FUNCTION 1472a5743 FUN_1472a5743 body=374 status=ok
// SIG undefined FUN_1472a5743(void)

void FUN_1472a5743(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a58ba FUN_1472a58ba body=29 status=ok
// SIG undefined FUN_1472a58ba(void)

undefined8 FUN_1472a58ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a58d8 FUN_1472a58d8 body=384 status=ok
// SIG undefined FUN_1472a58d8(void)

void FUN_1472a58d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca330d8;
  if (DAT_14ca330d8 != 0) {
    LOCK();
    *(int *)(DAT_14ca330d8 + 8) = *(int *)(DAT_14ca330d8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca33090;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4700;
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



// FUNCTION 1472a5a5a FUN_1472a5a5a body=38 status=ok
// SIG undefined FUN_1472a5a5a(void)

undefined8 FUN_1472a5a5a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a5a80 FUN_1472a5a80 body=163 status=ok
// SIG undefined FUN_1472a5a80(void)

void FUN_1472a5a80(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1dcf0();
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
  FUN_142f1ddd8(param_1,param_2);
  return;
}



// FUNCTION 1472a5b23 FUN_1472a5b23 body=374 status=ok
// SIG undefined FUN_1472a5b23(void)

void FUN_1472a5b23(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a5c9a FUN_1472a5c9a body=56 status=ok
// SIG undefined FUN_1472a5c9a(void)

undefined8 * FUN_1472a5c9a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2c4720;
  FUN_144725486();
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a5cd2 FUN_1472a5cd2 body=686 status=ok
// SIG undefined FUN_1472a5cd2(void)

void FUN_1472a5cd2(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  longlong local_90;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined1 local_50;
  undefined4 local_4c;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 1;
  local_64 = 0;
  uStack_5c = 0;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_50 = 0;
  local_4c = 0;
  local_48 = L"FSpriteIndexBuffer";
  local_40 = 0;
  uStack_38 = 0;
  local_84 = 0x200000060;
  local_7c = 0x8001;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
    FUN_1446f970a(param_2,0);
  }
  else {
    local_a0 = &local_78;
    local_a8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_90,param_2,&local_84);
    *(undefined4 *)(local_90 + 0x18) = 8;
  }
  plVar6 = (longlong *)(param_1 + 0x10);
  if (plVar6 != &local_90) {
    lVar4 = *plVar6;
    *plVar6 = local_90;
    local_90 = 0;
    if (lVar4 == 0) goto LAB_1472a5dca;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_90 != 0) {
    LOCK();
    puVar1 = (uint *)(local_90 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1472a5dca:
  lVar4 = *plVar6;
  cVar3 = *(char *)(param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,1);
  }
  local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,1);
  local_a8 = 0x60;
  puVar5 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar4,0);
  if (cVar3 == '\0') {
    FUN_1446f970a(param_2,0);
  }
  *(undefined8 *)(puVar5 + 0x14) = 0x1f001c001b0019;
  *(undefined8 *)(puVar5 + 0x16) = 0x1f001d001c001e;
  *(undefined8 *)(puVar5 + 0x10) = 0x17001500140016;
  *(undefined8 *)(puVar5 + 0x12) = 0x18001a001b0018;
  *(undefined8 *)(puVar5 + 0xc) = 0x10001200130010;
  *(undefined8 *)(puVar5 + 0xe) = 0x17001400130011;
  *(undefined8 *)(puVar5 + 8) = 0xf000c000b0009;
  *(undefined8 *)(puVar5 + 10) = 0xf000d000c000e;
  *(undefined8 *)(puVar5 + 4) = 0x7000500040006;
  *(undefined8 *)(puVar5 + 6) = 0x8000a000b0008;
  *puVar5 = 0x30000;
  puVar5[1] = 2;
  puVar5[2] = 0x30001;
  puVar5[3] = 0x70004;
  lVar4 = *plVar6;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_1446f970a(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
    FUN_1446f970a(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar4);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a5f82 FUN_1472a5f82 body=29 status=ok
// SIG undefined FUN_1472a5f82(void)

undefined8 FUN_1472a5f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a5fa0 FUN_1472a5fa0 body=384 status=ok
// SIG undefined FUN_1472a5fa0(void)

void FUN_1472a5fa0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca33170;
  if (DAT_14ca33170 != 0) {
    LOCK();
    *(int *)(DAT_14ca33170 + 8) = *(int *)(DAT_14ca33170 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca33128;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4760;
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



// FUNCTION 1472a6122 FUN_1472a6122 body=38 status=ok
// SIG undefined FUN_1472a6122(void)

undefined8 FUN_1472a6122(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a6148 FUN_1472a6148 body=163 status=ok
// SIG undefined FUN_1472a6148(void)

void FUN_1472a6148(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1e00c();
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
  FUN_142f1e0f4(param_1,param_2);
  return;
}



// FUNCTION 1472a61eb FUN_1472a61eb body=374 status=ok
// SIG undefined FUN_1472a61eb(void)

void FUN_1472a61eb(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a6362 FUN_1472a6362 body=29 status=ok
// SIG undefined FUN_1472a6362(void)

undefined8 FUN_1472a6362(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a6380 FUN_1472a6380 body=38 status=ok
// SIG undefined FUN_1472a6380(void)

undefined8 FUN_1472a6380(undefined8 param_1,int param_2)

{
  FUN_1462fb4d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a63ac FUN_1472a63ac body=38 status=ok
// SIG undefined FUN_1472a63ac(void)

undefined8 FUN_1472a63ac(undefined8 param_1,int param_2)

{
  FUN_1462fb520();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a63d8 FUN_1472a63d8 body=29 status=ok
// SIG undefined FUN_1472a63d8(void)

undefined8 FUN_1472a63d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a63f6 FUN_1472a63f6 body=384 status=ok
// SIG undefined FUN_1472a63f6(void)

void FUN_1472a63f6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca331f8;
  if (DAT_14ca331f8 != 0) {
    LOCK();
    *(int *)(DAT_14ca331f8 + 8) = *(int *)(DAT_14ca331f8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca331b0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4800;
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



// FUNCTION 1472a6578 FUN_1472a6578 body=38 status=ok
// SIG undefined FUN_1472a6578(void)

undefined8 FUN_1472a6578(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a659e FUN_1472a659e body=163 status=ok
// SIG undefined FUN_1472a659e(void)

void FUN_1472a659e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1ea5a();
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
  FUN_142f1eb42(param_1,param_2);
  return;
}



// FUNCTION 1472a6641 FUN_1472a6641 body=374 status=ok
// SIG undefined FUN_1472a6641(void)

void FUN_1472a6641(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a67b8 FUN_1472a67b8 body=29 status=ok
// SIG undefined FUN_1472a67b8(void)

undefined8 FUN_1472a67b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a67d6 FUN_1472a67d6 body=384 status=ok
// SIG undefined FUN_1472a67d6(void)

void FUN_1472a67d6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca33418;
  if (DAT_14ca33418 != 0) {
    LOCK();
    *(int *)(DAT_14ca33418 + 8) = *(int *)(DAT_14ca33418 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca333d0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4820;
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



// FUNCTION 1472a6958 FUN_1472a6958 body=38 status=ok
// SIG undefined FUN_1472a6958(void)

undefined8 FUN_1472a6958(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a697e FUN_1472a697e body=163 status=ok
// SIG undefined FUN_1472a697e(void)

void FUN_1472a697e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1ed76();
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
  FUN_142f1ee5e(param_1,param_2);
  return;
}



// FUNCTION 1472a6a21 FUN_1472a6a21 body=374 status=ok
// SIG undefined FUN_1472a6a21(void)

void FUN_1472a6a21(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a6b98 FUN_1472a6b98 body=29 status=ok
// SIG undefined FUN_1472a6b98(void)

undefined8 FUN_1472a6b98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a6bb6 FUN_1472a6bb6 body=384 status=ok
// SIG undefined FUN_1472a6bb6(void)

void FUN_1472a6bb6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca334a0;
  if (DAT_14ca334a0 != 0) {
    LOCK();
    *(int *)(DAT_14ca334a0 + 8) = *(int *)(DAT_14ca334a0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca33458;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4840;
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



// FUNCTION 1472a6d38 FUN_1472a6d38 body=38 status=ok
// SIG undefined FUN_1472a6d38(void)

undefined8 FUN_1472a6d38(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a6d5e FUN_1472a6d5e body=163 status=ok
// SIG undefined FUN_1472a6d5e(void)

void FUN_1472a6d5e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1f092();
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
  FUN_142f1f17a(param_1,param_2);
  return;
}



// FUNCTION 1472a6e01 FUN_1472a6e01 body=374 status=ok
// SIG undefined FUN_1472a6e01(void)

void FUN_1472a6e01(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a6f78 FUN_1472a6f78 body=29 status=ok
// SIG undefined FUN_1472a6f78(void)

undefined8 FUN_1472a6f78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a6f95 FUN_1472a6f95 body=312 status=ok
// SIG undefined FUN_1472a6f95(void)

void FUN_1472a6f95(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,longlong *param_7)

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
  FUN_145f567de();
  local_c8 = &local_50;
  local_c0 = &local_48;
  FUN_1448f70da(*param_3,&DAT_14ca334e0,param_4,&local_c8);
  local_c0 = (ulonglong *)*param_3;
  uStack_b8 = param_3[1];
  local_b0 = param_5;
  local_a8 = param_6;
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
  local_c8 = param_4;
  FUN_145f567de();
  FUN_1472a70ce(param_1,param_2,param_4,&local_c8);
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



// FUNCTION 1472a70ce FUN_1472a70ce body=258 status=ok
// SIG undefined FUN_1472a70ce(void)

void FUN_1472a70ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1472a71d0(uVar5,param_2,param_3,uVar3,param_4);
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



// FUNCTION 1472a71d0 FUN_1472a71d0 body=229 status=ok
// SIG undefined FUN_1472a71d0(void)

undefined8 *
FUN_1472a71d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  local_28 = DAT_14ca33528;
  if (DAT_14ca33528 != 0) {
    LOCK();
    *(int *)(DAT_14ca33528 + 8) = *(int *)(DAT_14ca33528 + 8) + 1;
    UNLOCK();
  }
  local_20 = &DAT_14ca334e0;
  local_38 = 2;
  local_30 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2c4860;
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



// FUNCTION 1472a72b6 FUN_1472a72b6 body=88 status=ok
// SIG undefined FUN_1472a72b6(void)

undefined8 * FUN_1472a72b6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a2c4860;
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



// FUNCTION 1472a730e FUN_1472a730e body=90 status=ok
// SIG undefined FUN_1472a730e(void)

void FUN_1472a730e(undefined8 *param_1,undefined8 param_2)

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
  FUN_1472a7368(param_2,param_1 + 1,*param_1,*(undefined8 *)(param_1[3] + 0x10),
                *(undefined4 *)(param_1 + 4));
  return;
}



// FUNCTION 1472a7368 FUN_1472a7368 body=161 status=ok
// SIG undefined FUN_1472a7368(void)

void FUN_1472a7368(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_145f567de();
  FUN_142f1f3e0(param_1,param_2,param_3);
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
  FUN_142f1f38f(param_1,param_2);
  return;
}



// FUNCTION 1472a7409 FUN_1472a7409 body=374 status=ok
// SIG undefined FUN_1472a7409(void)

void FUN_1472a7409(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a7580 FUN_1472a7580 body=132 status=ok
// SIG undefined FUN_1472a7580(void)

void FUN_1472a7580(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xe0) = (undefined1  [16])0x0;
  lVar1 = 0x120;
  do {
    *(undefined1 (*) [16])(param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1e0);
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1e0) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined2 *)(param_1 + 0x20c) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  return;
}



// FUNCTION 1472a7604 FUN_1472a7604 body=29 status=ok
// SIG undefined FUN_1472a7604(void)

undefined8 FUN_1472a7604(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7622 FUN_1472a7622 body=354 status=ok
// SIG undefined FUN_1472a7622(void)

void FUN_1472a7622(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar13 = puVar14 + 0x41;
  if (*(undefined8 **)(param_1 + 0x78) < puVar13) {
    FUN_140023dd8(puVar1,0x210);
    puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar14 + 0x41;
  }
  *puVar1 = (ulonglong)puVar13;
  local_48 = DAT_14ca335b0;
  if (DAT_14ca335b0 != 0) {
    LOCK();
    *(int *)(DAT_14ca335b0 + 8) = *(int *)(DAT_14ca335b0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca33568;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a2c4880;
  uVar10 = param_4[1];
  uVar11 = param_4[2];
  uVar12 = param_4[3];
  puVar14[0x37] = *param_4;
  puVar14[0x38] = uVar10;
  puVar14[0x39] = uVar11;
  puVar14[0x3a] = uVar12;
  puVar14[0x3b] = param_4[4];
  puVar14[0x3c] = param_4[5];
  uVar3 = *(undefined4 *)(param_4 + 6);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar5 = *(undefined4 *)(param_4 + 7);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x3c);
  uVar7 = *(undefined4 *)(param_4 + 8);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x44);
  uVar9 = *(undefined4 *)(param_4 + 9);
  *(undefined4 *)((longlong)puVar14 + 500) = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(puVar14 + 0x3f) = uVar7;
  *(undefined4 *)((longlong)puVar14 + 0x1fc) = uVar8;
  *(undefined4 *)(puVar14 + 0x40) = uVar9;
  *(undefined4 *)(puVar14 + 0x3d) = uVar3;
  *(undefined4 *)((longlong)puVar14 + 0x1ec) = uVar4;
  *(undefined4 *)(puVar14 + 0x3e) = uVar5;
  *(undefined4 *)((longlong)puVar14 + 500) = uVar6;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar14;
  *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140069100(param_1,puVar14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a7786 FUN_1472a7786 body=38 status=ok
// SIG undefined FUN_1472a7786(void)

undefined8 FUN_1472a7786(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a77ac FUN_1472a77ac body=56 status=ok
// SIG undefined FUN_1472a77ac(void)

undefined8 * FUN_1472a77ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a2c49d0;
  FUN_144725486();
  FUN_1462ff9c6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7812 FUN_1472a7812 body=38 status=ok
// SIG undefined FUN_1472a7812(void)

undefined8 FUN_1472a7812(undefined8 param_1,int param_2)

{
  FUN_1462ff9c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7838 FUN_1472a7838 body=29 status=ok
// SIG undefined FUN_1472a7838(void)

undefined8 FUN_1472a7838(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7856 FUN_1472a7856 body=384 status=ok
// SIG undefined FUN_1472a7856(void)

void FUN_1472a7856(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca33638;
  if (DAT_14ca33638 != 0) {
    LOCK();
    *(int *)(DAT_14ca33638 + 8) = *(int *)(DAT_14ca33638 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca335f0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4a40;
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



// FUNCTION 1472a79d8 FUN_1472a79d8 body=38 status=ok
// SIG undefined FUN_1472a79d8(void)

undefined8 FUN_1472a79d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a79fe FUN_1472a79fe body=163 status=ok
// SIG undefined FUN_1472a79fe(void)

void FUN_1472a79fe(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f1fc34();
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
  FUN_142f1fd1c(param_1,param_2);
  return;
}



// FUNCTION 1472a7aa1 FUN_1472a7aa1 body=374 status=ok
// SIG undefined FUN_1472a7aa1(void)

void FUN_1472a7aa1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a7c18 FUN_1472a7c18 body=29 status=ok
// SIG undefined FUN_1472a7c18(void)

undefined8 FUN_1472a7c18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7c36 FUN_1472a7c36 body=156 status=ok
// SIG undefined FUN_1472a7c36(void)

void FUN_1472a7c36(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x2c) = (undefined1  [16])0x0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
  lVar1 = 0x82;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x142);
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2c] = 0;
  return;
}



// FUNCTION 1472a7cd2 FUN_1472a7cd2 body=29 status=ok
// SIG undefined FUN_1472a7cd2(void)

undefined8 FUN_1472a7cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7cf0 FUN_1472a7cf0 body=38 status=ok
// SIG undefined FUN_1472a7cf0(void)

undefined8 FUN_1472a7cf0(undefined8 param_1,int param_2)

{
  FUN_1462fb568();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7d4a FUN_1472a7d4a body=38 status=ok
// SIG undefined FUN_1472a7d4a(void)

undefined8 FUN_1472a7d4a(undefined8 param_1,int param_2)

{
  FUN_1462fb5b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7da4 FUN_1472a7da4 body=198 status=ok
// SIG undefined FUN_1472a7da4(void)

void FUN_1472a7da4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472a7e6a(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472a7e6a FUN_1472a7e6a body=244 status=ok
// SIG undefined FUN_1472a7e6a(void)

undefined8 *
FUN_1472a7e6a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca33da8;
  if (DAT_14ca33da8 != 0) {
    LOCK();
    *(int *)(DAT_14ca33da8 + 8) = *(int *)(DAT_14ca33da8 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca33d60;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2c4b90;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a7f60 FUN_1472a7f60 body=38 status=ok
// SIG undefined FUN_1472a7f60(void)

undefined8 FUN_1472a7f60(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a7f86 FUN_1472a7f86 body=253 status=ok
// SIG undefined FUN_1472a7f86(void)

void FUN_1472a7f86(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f22966(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472a8084 FUN_1472a8084 body=198 status=ok
// SIG undefined FUN_1472a8084(void)

void FUN_1472a8084(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472a814a(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472a814a FUN_1472a814a body=244 status=ok
// SIG undefined FUN_1472a814a(void)

undefined8 *
FUN_1472a814a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca33e30;
  if (DAT_14ca33e30 != 0) {
    LOCK();
    *(int *)(DAT_14ca33e30 + 8) = *(int *)(DAT_14ca33e30 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca33de8;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2c4bd0;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a8240 FUN_1472a8240 body=38 status=ok
// SIG undefined FUN_1472a8240(void)

undefined8 FUN_1472a8240(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a8266 FUN_1472a8266 body=253 status=ok
// SIG undefined FUN_1472a8266(void)

void FUN_1472a8266(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f2320e(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472a8364 FUN_1472a8364 body=154 status=ok
// SIG undefined FUN_1472a8364(void)

void FUN_1472a8364(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0x3f80000000000000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[0x16] = 0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  lVar1 = 0xd0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 400);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x32) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = 0;
  return;
}



// FUNCTION 1472a83fe FUN_1472a83fe body=29 status=ok
// SIG undefined FUN_1472a83fe(void)

undefined8 FUN_1472a83fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a841c FUN_1472a841c body=198 status=ok
// SIG undefined FUN_1472a841c(void)

void FUN_1472a841c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472a84e2(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472a84e2 FUN_1472a84e2 body=244 status=ok
// SIG undefined FUN_1472a84e2(void)

undefined8 *
FUN_1472a84e2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca33858;
  if (DAT_14ca33858 != 0) {
    LOCK();
    *(int *)(DAT_14ca33858 + 8) = *(int *)(DAT_14ca33858 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca33810;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2c4c10;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a85d8 FUN_1472a85d8 body=38 status=ok
// SIG undefined FUN_1472a85d8(void)

undefined8 FUN_1472a85d8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a85fe FUN_1472a85fe body=253 status=ok
// SIG undefined FUN_1472a85fe(void)

void FUN_1472a85fe(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f23a96(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472a86fc FUN_1472a86fc body=38 status=ok
// SIG undefined FUN_1472a86fc(void)

undefined8 FUN_1472a86fc(undefined8 param_1,int param_2)

{
  FUN_1462fb5f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a8756 FUN_1472a8756 body=29 status=ok
// SIG undefined FUN_1472a8756(void)

undefined8 FUN_1472a8756(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a8774 FUN_1472a8774 body=384 status=ok
// SIG undefined FUN_1472a8774(void)

void FUN_1472a8774(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca341e8;
  if (DAT_14ca341e8 != 0) {
    LOCK();
    *(int *)(DAT_14ca341e8 + 8) = *(int *)(DAT_14ca341e8 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca341a0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a2c4d80;
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



// FUNCTION 1472a88f6 FUN_1472a88f6 body=38 status=ok
// SIG undefined FUN_1472a88f6(void)

undefined8 FUN_1472a88f6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a891c FUN_1472a891c body=163 status=ok
// SIG undefined FUN_1472a891c(void)

void FUN_1472a891c(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_142f23f2e();
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
  FUN_142f24016(param_1,param_2);
  return;
}



// FUNCTION 1472a89bf FUN_1472a89bf body=374 status=ok
// SIG undefined FUN_1472a89bf(void)

void FUN_1472a89bf(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1472a8b36 FUN_1472a8b36 body=130 status=ok
// SIG undefined FUN_1472a8b36(void)

void FUN_1472a8b36(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((longlong)param_1 + 0x2c) = (undefined1  [16])0x0;
  lVar1 = 0x52;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x112);
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x23) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x25) = 0;
  *(undefined2 *)((longlong)param_1 + 300) = 0;
  param_1[0x26] = 0;
  return;
}



// FUNCTION 1472a8bb8 FUN_1472a8bb8 body=29 status=ok
// SIG undefined FUN_1472a8bb8(void)

undefined8 FUN_1472a8bb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a8bd6 FUN_1472a8bd6 body=258 status=ok
// SIG undefined FUN_1472a8bd6(void)

void FUN_1472a8bd6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca34f10) {
    FUN_144b3d300(&DAT_14ca34f10);
    if (DAT_14ca34f10 == -1) {
      FUN_1472a8cda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FMobileCustomResolveParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x47e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34e90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f2475c);
      _Init_thread_footer(&DAT_14ca34f10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a8cda FUN_1472a8cda body=226 status=ok
// SIG undefined FUN_1472a8cda(void)

longlong * FUN_1472a8cda(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1472a8dbe;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a8dbe FUN_1472a8dbe body=136 status=ok
// SIG undefined FUN_1472a8dbe(void)

code * FUN_1472a8dbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000482;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a8e46;
}



// FUNCTION 1472a8e46 FUN_1472a8e46 body=136 status=ok
// SIG undefined FUN_1472a8e46(void)

code * FUN_1472a8e46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorGradingLUT";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000481;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a8ece;
}



// FUNCTION 1472a8ece FUN_1472a8ece body=136 status=ok
// SIG undefined FUN_1472a8ece(void)

code * FUN_1472a8ece(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000480;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a8f56;
}



// FUNCTION 1472a8f56 FUN_1472a8f56 body=136 status=ok
// SIG undefined FUN_1472a8f56(void)

undefined1 * FUN_1472a8f56(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x47f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a8fde;
}



// FUNCTION 1472a8fe2 FUN_1472a8fe2 body=124 status=ok
// SIG undefined FUN_1472a8fe2(void)

void FUN_1472a8fe2(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  lVar1 = 0x42;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x102);
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined2 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x24] = 0;
  return;
}



// FUNCTION 1472a905e FUN_1472a905e body=29 status=ok
// SIG undefined FUN_1472a905e(void)

undefined8 FUN_1472a905e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472a907c FUN_1472a907c body=258 status=ok
// SIG undefined FUN_1472a907c(void)

void FUN_1472a907c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca34fc8) {
    FUN_144b3d300(&DAT_14ca34fc8);
    if (DAT_14ca34fc8 == -1) {
      FUN_1472a9180(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FAlphaInvertParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x4d7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca34f48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f24e45);
      _Init_thread_footer(&DAT_14ca34fc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a9180 FUN_1472a9180 body=226 status=ok
// SIG undefined FUN_1472a9180(void)

longlong * FUN_1472a9180(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1472a9264;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a9264 FUN_1472a9264 body=136 status=ok
// SIG undefined FUN_1472a9264(void)

code * FUN_1472a9264(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000004da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a92ec;
}



// FUNCTION 1472a92ec FUN_1472a92ec body=136 status=ok
// SIG undefined FUN_1472a92ec(void)

code * FUN_1472a92ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000004d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472a9374;
}



// FUNCTION 1472a9374 FUN_1472a9374 body=136 status=ok
// SIG undefined FUN_1472a9374(void)

undefined1 * FUN_1472a9374(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x4d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472a93fc;
}



// FUNCTION 1472a9400 FUN_1472a9400 body=44 status=ok
// SIG undefined FUN_1472a9400(void)

void FUN_1472a9400(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a948a FUN_1472a948a body=96 status=ok
// SIG undefined FUN_1472a948a(void)

undefined8 FUN_1472a948a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f57e5c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca362b0,1);
  return uVar3;
}



// FUNCTION 1472a94ea FUN_1472a94ea body=138 status=ok
// SIG undefined FUN_1472a94ea(void)

void * FUN_1472a94ea(void)

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



// FUNCTION 1472a9574 FUN_1472a9574 body=44 status=ok
// SIG undefined FUN_1472a9574(void)

void FUN_1472a9574(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a95ac FUN_1472a95ac body=96 status=ok
// SIG undefined FUN_1472a95ac(void)

undefined8 FUN_1472a95ac(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f57e5c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca362b0,0);
  return uVar3;
}



// FUNCTION 1472a960c FUN_1472a960c body=138 status=ok
// SIG undefined FUN_1472a960c(void)

void * FUN_1472a960c(void)

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



// FUNCTION 1472a9696 FUN_1472a9696 body=44 status=ok
// SIG undefined FUN_1472a9696(void)

void FUN_1472a9696(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a96ce FUN_1472a96ce body=96 status=ok
// SIG undefined FUN_1472a96ce(void)

undefined8 FUN_1472a96ce(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e92ea4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca36338,1);
  return uVar3;
}



// FUNCTION 1472a972e FUN_1472a972e body=138 status=ok
// SIG undefined FUN_1472a972e(void)

void * FUN_1472a972e(void)

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



// FUNCTION 1472a97b8 FUN_1472a97b8 body=188 status=ok
// SIG undefined FUN_1472a97b8(void)

uint FUN_1472a97b8(uint param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35568) {
    FUN_144b3d300(&DAT_14ca35568);
    if (DAT_14ca35568 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar1 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PostProcessingColorFormat",1);
      if (plVar1 == (longlong *)0x0) {
        DAT_14ca35560 = 0;
      }
      else {
        DAT_14ca35560 = (**(code **)(*plVar1 + 0x68))(plVar1);
      }
      _Init_thread_footer(&DAT_14ca35568);
    }
  }
  uVar2 = param_1;
  if ((DAT_14ca35560 != 0) && (*(int *)(DAT_14ca35560 + 4) == 1)) {
    uVar2 = 1;
    if ((char)param_1 != '\n') {
      uVar2 = param_1 & 0xff;
    }
  }
  return uVar2;
}



// FUNCTION 1472a9874 FUN_1472a9874 body=77 status=ok
// SIG undefined FUN_1472a9874(void)

undefined8 FUN_1472a9874(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x60);
  if (((uVar1 & 0x20) != 0) && (*(longlong *)(param_1 + 0x1e24) != 0)) {
    return *(undefined8 *)(param_1 + 0x2f40);
  }
  if (((uVar1 & 0x40) != 0) && (*(longlong *)(param_1 + 0x1e2c) != 0)) {
    return *(undefined8 *)(param_1 + 0x2f48);
  }
  uVar2 = 0;
  if (((char)uVar1 < '\0') && (*(longlong *)(param_1 + 0x1e34) != 0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x2f50);
  }
  return uVar2;
}



// FUNCTION 1472a98c2 FUN_1472a98c2 body=44 status=ok
// SIG undefined FUN_1472a98c2(void)

void FUN_1472a98c2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a9906 FUN_1472a9906 body=96 status=ok
// SIG undefined FUN_1472a9906(void)

undefined8 FUN_1472a9906(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f58452();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca363c0,1);
  return uVar3;
}



// FUNCTION 1472a9966 FUN_1472a9966 body=138 status=ok
// SIG undefined FUN_1472a9966(void)

void * FUN_1472a9966(void)

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



// FUNCTION 1472a99f0 FUN_1472a99f0 body=44 status=ok
// SIG undefined FUN_1472a99f0(void)

void FUN_1472a99f0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a9a3c FUN_1472a9a3c body=96 status=ok
// SIG undefined FUN_1472a9a3c(void)

undefined8 FUN_1472a9a3c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f58a48();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca36448,1);
  return uVar3;
}



// FUNCTION 1472a9a9c FUN_1472a9a9c body=138 status=ok
// SIG undefined FUN_1472a9a9c(void)

void * FUN_1472a9a9c(void)

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



// FUNCTION 1472a9b26 FUN_1472a9b26 body=44 status=ok
// SIG undefined FUN_1472a9b26(void)

void FUN_1472a9b26(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a9b72 FUN_1472a9b72 body=96 status=ok
// SIG undefined FUN_1472a9b72(void)

undefined8 FUN_1472a9b72(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f58f5a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca364d0,1);
  return uVar3;
}



// FUNCTION 1472a9bd2 FUN_1472a9bd2 body=138 status=ok
// SIG undefined FUN_1472a9bd2(void)

void * FUN_1472a9bd2(void)

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



// FUNCTION 1472a9c5c FUN_1472a9c5c body=44 status=ok
// SIG undefined FUN_1472a9c5c(void)

void FUN_1472a9c5c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a9c94 FUN_1472a9c94 body=96 status=ok
// SIG undefined FUN_1472a9c94(void)

undefined8 FUN_1472a9c94(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e93414();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca36558,1);
  return uVar3;
}



// FUNCTION 1472a9cf4 FUN_1472a9cf4 body=138 status=ok
// SIG undefined FUN_1472a9cf4(void)

void * FUN_1472a9cf4(void)

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



// FUNCTION 1472a9d7e FUN_1472a9d7e body=275 status=ok
// SIG undefined FUN_1472a9d7e(void)

undefined * FUN_1472a9d7e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca35b50) {
    FUN_144b3d300(&DAT_14ca35b50);
    if (DAT_14ca35b50 == -1) {
      FUN_1461b6a1a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"DrawRectangleParameters";
      local_78 = L"FDrawRectangleParameters";
      local_50 = 0x30;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca35ad0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f2cbff);
      _Init_thread_footer(&DAT_14ca35b50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca35ad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472a9e92 FUN_1472a9e92 body=182 status=ok
// SIG undefined FUN_1472a9e92(void)

void FUN_1472a9e92(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(char *)(param_3 + 0x23d9) == '\x01') {
    FUN_140094833();
  }
  return;
}



// FUNCTION 1472a9f48 FUN_1472a9f48 body=100 status=ok
// SIG undefined FUN_1472a9f48(void)

float FUN_1472a9f48(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  
  uVar1 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
  if ((((*(byte *)(&DAT_14ca814c8 + uVar1 * 0xf) & 4) != 0) ||
      (((&DAT_14ca814cc)[uVar1 * 0x3c] & 0x40) != 0)) && (2 < (int)(&DAT_14ca814b8)[uVar1 * 0xf])) {
    fVar2 = *(float *)(DAT_14ca35c08 + 4) / 100.0;
    if (2.0 <= fVar2) {
      fVar2 = 2.0;
    }
    if (fVar2 <= 1.0) {
      fVar2 = 1.0;
    }
    return fVar2;
  }
  return 1.0;
}



// FUNCTION 1472a9fac FUN_1472a9fac body=44 status=ok
// SIG undefined FUN_1472a9fac(void)

void FUN_1472a9fac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472a9fe4 FUN_1472a9fe4 body=96 status=ok
// SIG undefined FUN_1472a9fe4(void)

undefined8 FUN_1472a9fe4(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f809c2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca38160,1);
  return uVar3;
}



// FUNCTION 1472aa044 FUN_1472aa044 body=138 status=ok
// SIG undefined FUN_1472aa044(void)

void * FUN_1472aa044(void)

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



// FUNCTION 1472aa0ce FUN_1472aa0ce body=230 status=ok
// SIG undefined FUN_1472aa0ce(void)

void FUN_1472aa0ce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_145f809c2();
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca38160,param_5,&local_a8);
  local_a8 = param_5;
  local_98 = *(undefined4 *)param_4;
  uStack_94 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_90 = *(undefined4 *)(param_4 + 1);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_88 = *param_6;
  local_80 = param_6[1];
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_a0 = param_2;
  FUN_145f809c2();
  FUN_1472ae714(param_1,param_3,param_5,&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aa1b6 FUN_1472aa1b6 body=44 status=ok
// SIG undefined FUN_1472aa1b6(void)

void FUN_1472aa1b6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1472aa202 FUN_1472aa202 body=96 status=ok
// SIG undefined FUN_1472aa202(void)

undefined8 FUN_1472aa202(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ea6e46();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca381e8,1);
  return uVar3;
}



// FUNCTION 1472aa262 FUN_1472aa262 body=138 status=ok
// SIG undefined FUN_1472aa262(void)

void * FUN_1472aa262(void)

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



// FUNCTION 1472aa2ec FUN_1472aa2ec body=115 status=ok
// SIG undefined FUN_1472aa2ec(void)

void FUN_1472aa2ec(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0x10) {
    *(undefined4 *)(param_1 + 1) = 0x10;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 0x10U - iVar1) {
      FUN_1472ad7ce(param_1,iVar1);
    }
    FUN_1472aec19((longlong)iVar1 * 0x30 + *param_1,0x10U - iVar1);
    return;
  }
  if (iVar1 == 0x10) {
    return;
  }
  FUN_1472aec30(param_1,iVar1 + -0x10);
  FUN_1472aec88(param_1);
  return;
}



// FUNCTION 1472aa360 FUN_1472aa360 body=152 status=ok
// SIG undefined FUN_1472aa360(void)

undefined8 FUN_1472aa360(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  local_20 = *(undefined8 *)(param_2 + 8);
  local_30 = *(undefined8 **)(param_2 + 0x10);
  local_60 = *local_30;
  local_58 = *(undefined4 *)(local_30 + 3);
  local_54 = *(undefined4 *)(param_2 + 0x1c);
  local_50 = *(undefined4 *)(param_2 + 0x18);
  local_4c = *(undefined4 *)(param_2 + 0x24);
  local_18 = param_2;
  FUN_14019ef5a(param_1,&local_60);
  FUN_14477c0e3(0,0);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aa3fa FUN_1472aa3fa body=290 status=ok
// SIG undefined FUN_1472aa3fa(void)

void FUN_1472aa3fa(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x188);
  if (0 < iVar2) {
    iVar5 = 0;
    lVar9 = 0x20;
    lVar8 = 0;
    lVar6 = 0;
    do {
      if (iVar5 >> 0x18 < *(int *)(param_1 + 0x228)) {
        lVar7 = *(longlong *)(param_1 + 400);
        if (lVar7 == 0) {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x220) + (lVar8 >> 0x35));
          if (lVar1 == 0) goto LAB_1472aa4d9;
          lVar7 = *(longlong *)(lVar1 + 0x90);
          piVar4 = (int *)(lVar1 + 0x60);
        }
        else {
LAB_1472aa496:
          piVar4 = (int *)(*(longlong *)(param_1 + 0x180) + lVar9);
        }
        if ((lVar7 != 0) && (*piVar4 != 0)) {
          lVar1 = *(longlong *)(param_1 + 0x180) + lVar9;
          local_58 = *(undefined4 *)(lVar1 + -0x20);
          uStack_54 = *(undefined4 *)(lVar1 + -0x1c);
          uStack_50 = *(undefined4 *)(lVar1 + -0x18);
          uStack_4c = *(undefined4 *)(lVar1 + -0x14);
          uVar3 = FUN_1472c3c12(*(longlong *)(param_1 + 0x148) + 0x43f8,*piVar4,lVar7,&local_58);
          *(undefined8 *)(lVar1 + 8) = uVar3;
          iVar2 = *(int *)(param_1 + 0x188);
        }
      }
      else {
        lVar7 = *(longlong *)(param_1 + 400);
        if (lVar7 != 0) goto LAB_1472aa496;
      }
LAB_1472aa4d9:
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x100000000000000;
      iVar5 = iVar5 + 0x1000000;
      lVar9 = lVar9 + 0x30;
    } while (lVar6 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aa51e FUN_1472aa51e body=177 status=ok
// SIG undefined FUN_1472aa51e(void)

undefined8 FUN_1472aa51e(longlong param_1,byte *param_2)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = (uint)(char)*param_2;
  if ((int)uVar4 < *(int *)(param_1 + 0x228)) {
    do {
      cVar2 = FUN_147428482(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x220) + (longlong)(char)uVar4 * 8));
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x220) + (longlong)(char)*param_2 * 8);
      if (cVar2 == '\0') {
        cVar2 = FUN_1474283cc(uVar1);
        if ((cVar2 != '\0') &&
           (cVar2 = FUN_1474283d8(*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x220) + (longlong)(char)*param_2 * 8)),
           cVar2 == '\0')) {
          return *(undefined8 *)(*(longlong *)(param_1 + 0x220) + (longlong)(char)*param_2 * 8);
        }
      }
      else {
        FUN_1474284c0(uVar1,0x3c23d70a);
      }
      bVar3 = *param_2 + 1;
      uVar4 = (uint)bVar3;
      *param_2 = bVar3;
    } while ((int)(char)bVar3 < *(int *)(param_1 + 0x228));
  }
  return 0;
}



// FUNCTION 1472aa5d0 FUN_1472aa5d0 body=366 status=ok
// SIG undefined FUN_1472aa5d0(void)

void FUN_1472aa5d0(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar7 = 0x14;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x20);
      lVar6 = (longlong)*(int *)(lVar3 + -8 + lVar7);
      if (lVar6 == -1) {
        lVar6 = (longlong)*(int *)(lVar3 + -0xc + lVar7);
        if (-1 < lVar6) {
          lVar4 = *(longlong *)(param_1 + 0x148) +
                  (ulonglong)((*(byte *)(lVar3 + lVar7) & 0x7f) << 6);
          uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x1b88) + 0xe8 + lVar6 * 0x120);
          FUN_1472aa73e((longlong *)(lVar4 + 0x1b88),lVar6,1);
          FUN_1400df2ce(uVar2);
          iVar5 = *(int *)(lVar3 + -0xc + lVar7);
          if (*(int *)(lVar4 + 0x1bc0) < iVar5) {
            iVar5 = *(int *)(lVar4 + 0x1bc0);
          }
          *(int *)(lVar4 + 0x1bc0) = iVar5;
        }
      }
      else {
        lVar8 = (ulonglong)(*(byte *)(lVar3 + lVar7) & 0x7f) * 0x78;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x58 + lVar8);
        lVar6 = lVar6 * 0x128;
        LOCK();
        piVar1 = (int *)(lVar4 + 0x120 + lVar6);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*(int *)(lVar4 + 0x120 + lVar6) == 0) {
          FUN_1400df7da(lVar8 + *(longlong *)(param_1 + 0x148) + 0x58,
                        *(undefined4 *)(lVar3 + -8 + lVar7));
        }
        FUN_1400df2ce();
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar9 < *(int *)(param_1 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar7) = 0;
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x18;
    } while (lVar9 < *(int *)(param_1 + 0x38));
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_1400dfed2((longlong *)(param_1 + 0x20),0);
    return;
  }
  return;
}



// FUNCTION 1472aa73e FUN_1472aa73e body=98 status=ok
// SIG undefined FUN_1472aa73e(void)

void FUN_1472aa73e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = (longlong)param_2 * 0x120 + *param_1;
    iVar1 = param_3;
    do {
      if (*(longlong *)(lVar2 + 0xd0) != 0) {
        FUN_1400020a8();
      }
      FUN_144ab2e4c(lVar2);
      lVar2 = lVar2 + 0x120;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_1472aee10(param_1,param_2,param_3);
  return;
}



// FUNCTION 1472aa7a0 FUN_1472aa7a0 body=87 status=ok
// SIG undefined FUN_1472aa7a0(void)

longlong FUN_1472aa7a0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_141774efe(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0x20 + lVar2;
  FUN_142f5bc24(lVar2,1);
  return lVar2;
}



// FUNCTION 1472aa7f8 FUN_1472aa7f8 body=139 status=ok
// SIG undefined FUN_1472aa7f8(void)

void FUN_1472aa7f8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x3330);
  iVar1 = *(int *)(param_1 + 0x3338);
  if ((longlong)iVar1 == 0) {
    local_30 = 0;
  }
  else {
    lVar3 = 0;
    do {
      FUN_1472aa884(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
    lVar2 = *(longlong *)(param_1 + 0x3330);
    local_30 = *(undefined4 *)(param_1 + 0x3338);
  }
  local_38 = lVar2;
  FUN_142f4414c(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aa884 FUN_1472aa884 body=300 status=ok
// SIG undefined FUN_1472aa884(void)

void FUN_1472aa884(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (DAT_14ca96da8 != '\0') {
    lVar5 = *(longlong *)(param_1 + 0x180);
    if ((longlong)*(int *)(param_1 + 0x188) == 0) {
      uVar4 = 0;
    }
    else {
      lVar8 = (longlong)*(int *)(param_1 + 0x188) * 0x30 + lVar5;
      do {
        lVar7 = lVar5 + 0x10;
        if (*(longlong *)(lVar5 + 0x18) != 0) {
          lVar7 = *(longlong *)(lVar5 + 0x18);
        }
        iVar1 = *(int *)(lVar5 + 0x20);
        if ((longlong)iVar1 != 0) {
          lVar6 = 0;
          do {
            iVar2 = *(int *)(lVar7 + lVar6);
            if (-1 < (longlong)iVar2) {
              lVar3 = *(longlong *)(param_1 + 0x148);
              FUN_144ab2e4c((longlong)iVar2 * 0x98 + *(longlong *)(lVar3 + 0x2a08));
              FUN_1472afc10(lVar3 + 0x2a08,iVar2,1);
            }
            lVar6 = lVar6 + 4;
          } while ((longlong)iVar1 * 4 != lVar6);
        }
        FUN_1472c3da6(*(longlong *)(param_1 + 0x148) + 0x43f8,*(undefined8 *)(lVar5 + 0x28));
        lVar5 = lVar5 + 0x30;
      } while (lVar5 != lVar8);
      uVar4 = *(undefined4 *)(param_1 + 0x188);
      lVar5 = *(longlong *)(param_1 + 0x180);
    }
    FUN_14477c11e(lVar5,uVar4);
    *(undefined4 *)(param_1 + 0x188) = 0;
    if (*(int *)(param_1 + 0x18c) != 0) {
      FUN_1472afca8(param_1 + 0x180,0);
      return;
    }
  }
  return;
}



// FUNCTION 1472aa9b0 FUN_1472aa9b0 body=269 status=ok
// SIG undefined FUN_1472aa9b0(void)

void FUN_1472aa9b0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [38];
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((param_3 & 0x10) == 0) {
    *(undefined1 *)(param_1 + 0x1ea) = 0xff;
    *(undefined1 *)(param_1 + 0x1ec) = 0;
    *(byte *)(param_1 + 0x173) = *(byte *)(param_1 + 0x173) & 0x1f | 0x20;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 8);
    *(int *)(param_1 + 0x1d0) = (int)param_2[6];
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_1 + 0x204);
    *(longlong *)(param_1 + 0x230) = *param_2;
    cVar2 = FUN_14366ada8();
    if ((cVar2 == '\0') || ((*(byte *)(lVar1 + 0x74) & 8) == 0)) {
      uVar3 = *(undefined8 *)(*param_2 + 0x90);
    }
    else {
      uVar3 = FUN_147262e9a(&DAT_14ca1c220,param_1);
    }
    *(undefined8 *)(param_1 + 400) = uVar3;
    *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_1 + 0x204);
    *(undefined1 *)(param_1 + 0x1e9) = 1;
    *(undefined1 *)(param_1 + 0x1e8) = *(undefined1 *)((longlong)param_2 + 0x2a);
    *(undefined1 *)(param_1 + 0x1ec) = 0;
    local_22 = 0xff;
    if ((int)param_2[4] == 0 && (int)param_2[2] == 0) {
      local_22 = 0;
    }
    else {
      FUN_1472b0b22(&local_22,param_2,lVar1);
    }
    FUN_1472aade4(param_1,&local_22);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aaabe FUN_1472aaabe body=108 status=ok
// SIG undefined FUN_1472aaabe(void)

void FUN_1472aaabe(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_140064c53(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1472aab2a FUN_1472aab2a body=159 status=ok
// SIG undefined FUN_1472aab2a(void)

undefined4 FUN_1472aab2a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1472af9e0(param_1,local_30);
  *(undefined8 *)(local_28 + 0x10) = 0;
  *(undefined8 *)(local_28 + 0x18) = 0x200000000;
  *(undefined8 *)(local_28 + 0x20) = 0;
  *(undefined8 *)(local_28 + 0x28) = 0;
  *(undefined8 *)(local_28 + 0x30) = 0;
  *(undefined8 *)(local_28 + 0x38) = 0;
  *(undefined8 *)(local_28 + 0x40) = 0;
  *(undefined8 *)(local_28 + 0x48) = 0;
  *(undefined8 *)(local_28 + 0x50) = 0;
  *(undefined8 *)(local_28 + 0x58) = 0;
  *(undefined8 *)(local_28 + 0x60) = 0;
  *(undefined8 *)(local_28 + 0x68) = 0;
  *(undefined4 *)(local_28 + 0x70) = 0;
  FUN_14176f2be(local_28,param_2);
  uVar1 = *(undefined4 *)(param_2 + 0x78);
  uVar2 = *(undefined4 *)(param_2 + 0x7c);
  uVar3 = *(undefined4 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x84);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x90);
  uVar7 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(local_28 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(local_28 + 0x8c) = uVar5;
  *(undefined4 *)(local_28 + 0x90) = uVar6;
  *(undefined4 *)(local_28 + 0x94) = uVar7;
  *(undefined4 *)(local_28 + 0x78) = uVar1;
  *(undefined4 *)(local_28 + 0x7c) = uVar2;
  *(undefined4 *)(local_28 + 0x80) = uVar3;
  *(undefined4 *)(local_28 + 0x84) = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472aabca FUN_1472aabca body=536 status=ok
// SIG undefined FUN_1472aabca(void)

void FUN_1472aabca(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,byte *param_7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (**(code **)(**(longlong **)(param_2 + 8) + 0x98))();
  *(undefined4 *)(param_2 + 0x178) = uVar4;
  bVar2 = (**(code **)(**(longlong **)(param_2 + 8) + 0x88))();
  *param_7 = bVar2;
  if ((bVar2 & 0xf) == 0) {
    uVar6 = 1;
    if (*(int *)(param_6 + 0x10) < 1) {
      uVar6 = 0;
      if ((longlong)*(int *)(param_2 + 0x48) != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          iVar7 = (int)*(char *)(*(longlong *)(param_2 + 0x40) + 0xde + lVar5);
          if ((int)uVar6 <= iVar7) {
            uVar6 = iVar7 + 1;
          }
          lVar5 = lVar5 + 0x100;
        } while ((longlong)*(int *)(param_2 + 0x48) * 0x100 != lVar5);
      }
    }
    local_58 = 0;
    uStack_50 = 0;
    local_70 = param_1;
    FUN_1472aaeac(&local_58,uVar6);
    FUN_1472af57e(&local_58,uVar6);
    if ((longlong)*(int *)(param_6 + 0x10) < 1) {
      if ((longlong)*(int *)(param_2 + 0x48) != 0) {
        lVar5 = *(longlong *)(param_2 + 0x40);
        lVar8 = (longlong)*(int *)(param_2 + 0x48) << 8;
        do {
          local_80 = param_5;
          local_78 = 0;
          local_88 = param_4;
          FUN_1472afb15(lVar5,param_2,&local_58,param_3);
          lVar5 = lVar5 + 0x100;
          lVar8 = lVar8 + -0x100;
        } while (lVar8 != 0);
      }
    }
    else {
      lVar5 = *(longlong *)(param_6 + 8);
      lVar8 = (longlong)*(int *)(param_6 + 0x10) * 0xf0;
      do {
        local_80 = param_5;
        local_78 = 1;
        local_88 = param_4;
        FUN_1472afb15(lVar5,param_2,&local_58,param_3);
        lVar5 = lVar5 + 0xf0;
        lVar8 = lVar8 + -0xf0;
      } while (lVar8 != 0);
    }
    if ((0 < (int)uVar6) && ((*param_7 & 0x40) != 0)) {
      uVar1 = *(undefined1 *)(local_70 + 0x3600);
      lVar5 = 0;
      do {
        lVar8 = local_58;
        uVar3 = FUN_1472b593e(5,CONCAT71((int7)((ulonglong)param_4 >> 8),uVar1) & 0xffffffff);
        *(undefined1 *)(lVar8 + 8 + lVar5) = uVar3;
        lVar5 = lVar5 + 0x30;
      } while ((ulonglong)uVar6 * 0x30 != lVar5);
    }
    local_68 = local_58;
    uStack_60 = uStack_50;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1472af714(param_2);
    FUN_14477c11e(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1472aade4 FUN_1472aade4 body=102 status=ok
// SIG undefined FUN_1472aade4(void)

void FUN_1472aade4(longlong param_1,undefined1 *param_2)

{
  byte bVar1;
  byte bVar2;
  
  *(undefined1 *)(param_1 + 0x1ea) = *param_2;
  bVar2 = param_2[1];
  if ((bVar2 & 1) != 0) {
    *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) | 8;
    bVar2 = param_2[1];
  }
  if ((bVar2 & 2) != 0) {
    *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) | 2;
    bVar2 = param_2[1];
  }
  if ((bVar2 & 4) != 0) {
    *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) | 4;
    bVar2 = param_2[1];
  }
  bVar1 = *(byte *)(param_1 + 0x173);
  bVar2 = (bVar2 & 8) << 3;
  *(byte *)(param_1 + 0x173) = bVar1 & 0xbf | bVar2;
  *(byte *)(param_1 + 0x173) = bVar1 & 0x1f | bVar2 | (param_2[1] & 0x10) << 3;
  return;
}



// FUNCTION 1472aae4a FUN_1472aae4a body=97 status=ok
// SIG undefined FUN_1472aae4a(void)

void FUN_1472aae4a(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x188) == 0) {
    return;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x28) != 0) {
    FUN_1472c3da6(*(longlong *)(param_1 + 0x148) + 0x43f8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x28) = 0;
  }
  *(undefined8 *)(param_1 + 400) = param_2;
  FUN_1472aa3fa(param_1);
  return;
}



// FUNCTION 1472aaeac FUN_1472aaeac body=68 status=ok
// SIG undefined FUN_1472aaeac(void)

void FUN_1472aaeac(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14477c11e(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1472afca8(param_1,param_2);
  return;
}



// FUNCTION 1472aaef2 FUN_1472aaef2 body=307 status=ok
// SIG undefined FUN_1472aaef2(void)

int FUN_1472aaef2(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_b8 [36];
  undefined4 local_94;
  undefined1 local_90 [64];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1 + 0x171) & 4) != 0) {
    FUN_1400eb05c(DAT_14ca712d8,param_1);
    *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) & 0xfb;
  }
  local_50 = (undefined1 *)0x0;
  local_48 = 0x800000000;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x1d8))(*(longlong **)(param_1 + 8),local_90);
  iVar4 = (int)local_48;
  if (0 < (int)local_48) {
    lVar5 = 0;
    do {
      puVar3 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar3 = local_90;
      }
      lVar1 = *(longlong *)(puVar3 + lVar5 * 8);
      if (lVar1 != 0) {
        FUN_1436a22b6(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x148) + 8));
        local_94 = 0;
        cVar2 = FUN_147cef464(lVar1,*(undefined4 *)(*(longlong *)(param_1 + 0x148) + 8),&local_94);
        if (cVar2 != '\0') {
          FUN_14486759e(DAT_14ca712d8,&local_94,FUN_142f45ac9,param_1);
          *(byte *)(param_1 + 0x171) = *(byte *)(param_1 + 0x171) | 4;
        }
        iVar4 = (int)local_48;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  if (local_50 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ab026 FUN_1472ab026 body=238 status=ok
// SIG undefined FUN_1472ab026(void)

void FUN_1472ab026(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
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
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *(longlong *)(param_1 + 8);
  local_28 = *(undefined8 *)(lVar1 + 0x1b0);
  local_58 = *(undefined8 *)(lVar1 + 0x180);
  uStack_50 = *(undefined8 *)(lVar1 + 0x188);
  local_48 = *(undefined4 *)(lVar1 + 400);
  uStack_44 = *(undefined4 *)(lVar1 + 0x194);
  uStack_40 = *(undefined4 *)(lVar1 + 0x198);
  uStack_3c = *(undefined4 *)(lVar1 + 0x19c);
  local_38 = *(undefined4 *)(lVar1 + 0x1a0);
  uStack_34 = *(undefined4 *)(lVar1 + 0x1a4);
  uStack_30 = *(undefined4 *)(lVar1 + 0x1a8);
  uStack_2c = *(undefined4 *)(lVar1 + 0x1ac);
  local_68 = *(undefined8 *)(lVar1 + 400);
  local_78 = *(undefined4 *)(lVar1 + 0x180);
  uStack_74 = *(undefined4 *)(lVar1 + 0x184);
  uStack_70 = *(undefined4 *)(lVar1 + 0x188);
  uStack_6c = *(undefined4 *)(lVar1 + 0x18c);
  uVar2 = FUN_1472c8630(*(undefined8 *)(param_1 + 0x148));
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  uVar2 = FUN_1472c86fe(*(undefined8 *)(param_1 + 0x148),&local_58);
  *(undefined8 *)(param_1 + 200) = uVar2;
  if (*(int *)(*(longlong *)(param_1 + 0x148) + 8) < 3) {
    local_88 = CONCAT44(uStack_44,local_48);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    FUN_1472c887a(*(longlong *)(param_1 + 0x148),&local_98,param_1 + 0x108);
  }
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xfd;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ab116 FUN_1472ab116 body=169 status=ok
// SIG undefined FUN_1472ab116(void)

undefined8 FUN_1472ab116(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_140a4a5fe(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1472ab1c0 FUN_1472ab1c0 body=72 status=ok
// SIG undefined FUN_1472ab1c0(void)

void FUN_1472ab1c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (0 < (int)param_2[1]) {
    lVar1 = 0;
    do {
      FUN_1472aa884(*(undefined8 *)(*param_2 + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_2[1]);
    FUN_142f4414c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1472ab208 FUN_1472ab208 body=160 status=ok
// SIG undefined FUN_1472ab208(void)

int FUN_1472ab208(longlong *param_1,longlong *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = (int)param_1[1];
  iVar4 = iVar1;
  if (0 < iVar1) {
    uVar5 = 0;
    bVar3 = 0;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + (longlong)(int)uVar5 * 8) == *param_2) {
        iVar6 = ~uVar5 + iVar4;
        if (iVar6 != 0) {
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + (longlong)(int)uVar5 * 8),
                  (void *)(lVar2 + (longlong)(iVar4 - iVar6) * 8),(longlong)iVar6 << 3);
          iVar4 = (int)param_1[1];
        }
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 1) = iVar4;
        bVar3 = 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
    if ((bool)(param_3 == '\x01' & bVar3)) {
      FUN_140a4a5fe(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 1472ab2a8 FUN_1472ab2a8 body=265 status=ok
// SIG undefined FUN_1472ab2a8(void)

void FUN_1472ab2a8(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_14175e8cc(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  if (((*(int *)(param_1 + 0x18) == 0) && ((*(byte *)(*(longlong *)(param_1 + 8) + 0x73) & 8) != 0))
     && (lVar6 = *(longlong *)(param_1 + 0x148),
        *(int *)(lVar6 + 0x4e40) != *(int *)(lVar6 + 0x4e6c))) {
    lVar5 = lVar6 + 0x4e70;
    if (*(longlong *)(lVar6 + 0x4e78) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x4e78);
    }
    uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar6 + 0x4e80) - 1U & *(uint *)(param_1 + 0x10))
                              * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar6 + 0x4e38) + (longlong)(int)uVar4 * 0x28);
        if (*puVar1 == *(uint *)(param_1 + 0x10)) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) == 0) {
            return;
          }
          uVar4 = puVar1[6];
          if ((longlong)(int)uVar4 < 1) {
            return;
          }
          lVar6 = 0;
          do {
            uVar3 = *(undefined8 *)(*(longlong *)(puVar1 + 4) + lVar6 * 8);
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_14175e8cc(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
            lVar6 = lVar6 + 1;
          } while ((int)uVar4 != lVar6);
          return;
        }
        uVar4 = puVar1[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1472ab3b2 FUN_1472ab3b2 body=265 status=ok
// SIG undefined FUN_1472ab3b2(void)

void FUN_1472ab3b2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_1401baee0(param_2,iVar2);
  }
  *(longlong *)(*param_2 + (longlong)iVar2 * 8) = param_1;
  if (((*(int *)(param_1 + 0x18) == 0) && ((*(byte *)(*(longlong *)(param_1 + 8) + 0x73) & 8) != 0))
     && (lVar6 = *(longlong *)(param_1 + 0x148),
        *(int *)(lVar6 + 0x4e40) != *(int *)(lVar6 + 0x4e6c))) {
    lVar5 = lVar6 + 0x4e70;
    if (*(longlong *)(lVar6 + 0x4e78) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x4e78);
    }
    uVar4 = *(uint *)(lVar5 + (ulonglong)(*(int *)(lVar6 + 0x4e80) - 1U & *(uint *)(param_1 + 0x10))
                              * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar6 + 0x4e38) + (longlong)(int)uVar4 * 0x28);
        if (*puVar1 == *(uint *)(param_1 + 0x10)) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) == 0) {
            return;
          }
          uVar4 = puVar1[6];
          if ((longlong)(int)uVar4 < 1) {
            return;
          }
          lVar6 = 0;
          do {
            uVar3 = *(undefined8 *)(*(longlong *)(puVar1 + 4) + lVar6 * 8);
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_1401baee0(param_2,iVar2);
            }
            *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = uVar3;
            lVar6 = lVar6 + 1;
          } while ((int)uVar4 != lVar6);
          return;
        }
        uVar4 = puVar1[8];
      } while (uVar4 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1472ab4bc FUN_1472ab4bc body=955 status=ok
// SIG undefined FUN_1472ab4bc(void)

void FUN_1472ab4bc(longlong param_1,double *param_2)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  lVar12 = *(longlong *)(param_1 + 8);
  param_2[6] = *(double *)(lVar12 + 0x1b0);
  dVar2 = *(double *)(lVar12 + 0x180);
  dVar3 = *(double *)(lVar12 + 0x188);
  dVar4 = *(double *)(lVar12 + 400);
  dVar15 = *(double *)(lVar12 + 0x198);
  dVar14 = *(double *)(lVar12 + 0x1a8);
  param_2[4] = *(double *)(lVar12 + 0x1a0);
  param_2[5] = dVar14;
  param_2[2] = dVar4;
  param_2[3] = dVar15;
  *param_2 = dVar2;
  param_2[1] = dVar3;
  if (((*(int *)(param_1 + 0x18) == 0) && ((*(byte *)(lVar12 + 0x73) & 8) != 0)) &&
     (lVar12 = *(longlong *)(param_1 + 0x148),
     *(int *)(lVar12 + 0x4e40) != *(int *)(lVar12 + 0x4e6c))) {
    lVar11 = lVar12 + 0x4e70;
    if (*(longlong *)(lVar12 + 0x4e78) != 0) {
      lVar11 = *(longlong *)(lVar12 + 0x4e78);
    }
    uVar13 = *(uint *)(lVar11 + (ulonglong)
                                (*(int *)(lVar12 + 0x4e80) - 1U & *(uint *)(param_1 + 0x10)) * 4);
    if (uVar13 != 0xffffffff) {
      do {
        puVar1 = (uint *)(*(longlong *)(lVar12 + 0x4e38) + (longlong)(int)uVar13 * 0x28);
        if (*puVar1 == *(uint *)(param_1 + 0x10)) {
          if (((ulonglong)(puVar1 + 2) & 0xfffffffffffffff7) == 0) {
            return;
          }
          if ((longlong)(int)puVar1[6] < 1) {
            return;
          }
          dVar2 = param_2[3];
          dVar3 = param_2[4];
          dVar4 = param_2[5];
          dVar15 = param_2[6];
          lVar12 = 0;
          dVar14 = param_2[2];
          dVar17 = param_2[1];
          dVar19 = *param_2;
          do {
            lVar11 = *(longlong *)(*(longlong *)(*(longlong *)(puVar1 + 4) + lVar12 * 8) + 8);
            dVar9 = dVar19 - dVar2;
            dVar2 = dVar2 + dVar19;
            dVar10 = dVar17 - dVar3;
            dVar3 = dVar3 + dVar17;
            dVar8 = dVar14 - dVar4;
            dVar4 = dVar4 + dVar14;
            dVar20 = dVar9;
            if (dVar2 <= dVar9) {
              dVar20 = dVar2;
            }
            dVar18 = dVar10;
            if (dVar3 <= dVar10) {
              dVar18 = dVar3;
            }
            if (dVar9 <= dVar2) {
              dVar9 = dVar2;
            }
            dVar16 = dVar8;
            if (dVar4 <= dVar8) {
              dVar16 = dVar4;
            }
            if (dVar10 <= dVar3) {
              dVar10 = dVar3;
            }
            if (dVar8 <= dVar4) {
              dVar8 = dVar4;
            }
            dVar5 = *(double *)(lVar11 + 400);
            dVar6 = *(double *)(lVar11 + 0x180);
            dVar7 = *(double *)(lVar11 + 0x188);
            dVar2 = dVar6 - *(double *)(lVar11 + 0x198);
            if (dVar2 <= dVar20) {
              dVar20 = dVar2;
            }
            if (dVar9 <= dVar2) {
              dVar9 = dVar2;
            }
            dVar2 = dVar7 - *(double *)(lVar11 + 0x1a0);
            if (dVar2 <= dVar18) {
              dVar18 = dVar2;
            }
            if (dVar10 <= dVar2) {
              dVar10 = dVar2;
            }
            dVar2 = dVar5 - *(double *)(lVar11 + 0x1a8);
            if (dVar2 <= dVar16) {
              dVar16 = dVar2;
            }
            if (dVar8 <= dVar2) {
              dVar8 = dVar2;
            }
            dVar2 = *(double *)(lVar11 + 0x198) + dVar6;
            if (dVar2 <= dVar20) {
              dVar20 = dVar2;
            }
            if (dVar9 <= dVar2) {
              dVar9 = dVar2;
            }
            dVar3 = *(double *)(lVar11 + 0x1a8) + dVar5;
            dVar2 = *(double *)(lVar11 + 0x1a0) + dVar7;
            if (dVar2 <= dVar18) {
              dVar18 = dVar2;
            }
            if (dVar10 <= dVar2) {
              dVar10 = dVar2;
            }
            if (dVar3 <= dVar16) {
              dVar16 = dVar3;
            }
            if (dVar8 <= dVar3) {
              dVar8 = dVar3;
            }
            dVar4 = (dVar8 - dVar16) * 0.5;
            dVar3 = (dVar10 - dVar18) * 0.5;
            dVar2 = (dVar9 - dVar20) * 0.5;
            dVar18 = dVar18 + dVar3;
            dVar20 = dVar20 + dVar2;
            dVar16 = dVar16 + dVar4;
            dVar14 = SQRT((dVar14 - dVar16) * (dVar14 - dVar16) +
                          (dVar19 - dVar20) * (dVar19 - dVar20) +
                          (dVar17 - dVar18) * (dVar17 - dVar18)) + dVar15;
            dVar15 = SQRT((dVar5 - dVar16) * (dVar5 - dVar16) +
                          (dVar6 - dVar20) * (dVar6 - dVar20) + (dVar7 - dVar18) * (dVar7 - dVar18))
                     + *(double *)(lVar11 + 0x1b0);
            if (dVar14 <= dVar15) {
              dVar14 = dVar15;
            }
            dVar15 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
            if (dVar14 <= dVar15) {
              dVar15 = dVar14;
            }
            lVar12 = lVar12 + 1;
            dVar14 = dVar16;
            dVar17 = dVar18;
            dVar19 = dVar20;
          } while ((int)puVar1[6] != lVar12);
          param_2[6] = dVar15;
          *param_2 = dVar20;
          param_2[1] = dVar18;
          param_2[2] = dVar16;
          param_2[3] = dVar2;
          param_2[4] = dVar3;
          param_2[5] = dVar4;
          return;
        }
        uVar13 = puVar1[8];
      } while (uVar13 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 1472ab878 FUN_1472ab878 body=110 status=ok
// SIG undefined FUN_1472ab878(void)

void FUN_1472ab878(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if (*(char *)(param_2 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001472ab8af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
    return;
  }
  FUN_1446f970a(param_2,1);
  (**(code **)(*DAT_14ca83900 + 0x140))(DAT_14ca83900,param_2,uVar1,param_3);
  FUN_1446f970a(param_2,0);
  return;
}



// FUNCTION 1472ab8e6 FUN_1472ab8e6 body=138 status=ok
// SIG undefined FUN_1472ab8e6(void)

void FUN_1472ab8e6(longlong param_1,byte *param_2,byte *param_3)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  
  *param_2 = 0x7f;
  *param_3 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar2 = 0x14;
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x30);
      bVar3 = *(byte *)(lVar1 + lVar2);
      bVar3 = -((bVar3 & 0x10) != 0) | bVar3 & 0xf;
      if ((char)*param_2 < (char)bVar3) {
        bVar3 = *param_2;
      }
      *param_2 = bVar3;
      bVar3 = *(byte *)(lVar1 + lVar2);
      bVar5 = -((bVar3 & 0x10) != 0) | bVar3 & 0xf;
      bVar3 = *param_3;
      if ((char)*param_3 < (char)bVar5) {
        bVar3 = bVar5;
      }
      *param_3 = bVar3;
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x18;
    } while (lVar4 < *(int *)(param_1 + 0x38));
  }
  return;
}



// FUNCTION 1472ab970 FUN_1472ab970 body=69 status=ok
// SIG undefined FUN_1472ab970(void)

undefined8 FUN_1472ab970(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x160) == (longlong *)0x0) {
    FUN_140056680(param_2,L"Unknown Object");
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x98))();
    FUN_1468ff0b8(uVar1,param_2,0);
  }
  return param_2;
}



// FUNCTION 1472ab9b6 FUN_1472ab9b6 body=72 status=ok
// SIG undefined FUN_1472ab9b6(void)

longlong FUN_1472ab9b6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x98))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a3a302();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1472ab9fe FUN_1472ab9fe body=138 status=ok
// SIG undefined FUN_1472ab9fe(void)

code * FUN_1472ab9fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointSceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472aba88;
}



// FUNCTION 1472aba88 FUN_1472aba88 body=138 status=ok
// SIG undefined FUN_1472aba88(void)

code * FUN_1472aba88(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PointSceneColorTextureArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1180000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462ffb22;
}



// FUNCTION 1472abb12 FUN_1472abb12 body=138 status=ok
// SIG undefined FUN_1472abb12(void)

code * FUN_1472abb12(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abb9c;
}



// FUNCTION 1472abb9c FUN_1472abb9c body=138 status=ok
// SIG undefined FUN_1472abb9c(void)

code * FUN_1472abb9c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f58046;
}



// FUNCTION 1472abc2a FUN_1472abc2a body=138 status=ok
// SIG undefined FUN_1472abc2a(void)

code * FUN_1472abc2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e93092;
}



// FUNCTION 1472abcb4 FUN_1472abcb4 body=138 status=ok
// SIG undefined FUN_1472abcb4(void)

code * FUN_1472abcb4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ComplexityScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1cc0000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abd3e;
}



// FUNCTION 1472abd3e FUN_1472abd3e body=138 status=ok
// SIG undefined FUN_1472abd3e(void)

code * FUN_1472abd3e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderComplexityColorCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c80000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f586c6;
}



// FUNCTION 1472abdc8 FUN_1472abdc8 body=138 status=ok
// SIG undefined FUN_1472abdc8(void)

code * FUN_1472abdc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bShowError";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bc0000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abe52;
}



// FUNCTION 1472abe52 FUN_1472abe52 body=138 status=ok
// SIG undefined FUN_1472abe52(void)

code * FUN_1472abe52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bLegend";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b800000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abedc;
}



// FUNCTION 1472abedc FUN_1472abedc body=138 status=ok
// SIG undefined FUN_1472abedc(void)

code * FUN_1472abedc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UsedQuadTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abf66;
}



// FUNCTION 1472abf66 FUN_1472abf66 body=138 status=ok
// SIG undefined FUN_1472abf66(void)

code * FUN_1472abf66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShaderComplexityColors";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0xb;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472abff0;
}



// FUNCTION 1472abff0 FUN_1472abff0 body=138 status=ok
// SIG undefined FUN_1472abff0(void)

code * FUN_1472abff0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MiniFontTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f58750;
}



// FUNCTION 1472ac07a FUN_1472ac07a body=138 status=ok
// SIG undefined FUN_1472ac07a(void)

code * FUN_1472ac07a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe800000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5863c;
}



// FUNCTION 1472ac108 FUN_1472ac108 body=138 status=ok
// SIG undefined FUN_1472ac108(void)

code * FUN_1472ac108(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LuminanceScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2280000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac192;
}



// FUNCTION 1472ac192 FUN_1472ac192 body=138 status=ok
// SIG undefined FUN_1472ac192(void)

code * FUN_1472ac192(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UsingIlluminance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2240000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac21c;
}



// FUNCTION 1472ac21c FUN_1472ac21c body=138 status=ok
// SIG undefined FUN_1472ac21c(void)

code * FUN_1472ac21c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"IlluminanceMeterEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2200000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146300116;
}



// FUNCTION 1472ac2a6 FUN_1472ac2a6 body=138 status=ok
// SIG undefined FUN_1472ac2a6(void)

code * FUN_1472ac2a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmWhiteClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac330;
}



// FUNCTION 1472ac330 FUN_1472ac330 body=138 status=ok
// SIG undefined FUN_1472ac330(void)

code * FUN_1472ac330(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmBlackClip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1fc0000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac3ba;
}



// FUNCTION 1472ac3ba FUN_1472ac3ba body=138 status=ok
// SIG undefined FUN_1472ac3ba(void)

code * FUN_1472ac3ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmShoulder";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f58bd8;
}



// FUNCTION 1472ac444 FUN_1472ac444 body=138 status=ok
// SIG undefined FUN_1472ac444(void)

code * FUN_1472ac444(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilmSlope";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630019e;
}



// FUNCTION 1472ac4ce FUN_1472ac4ce body=138 status=ok
// SIG undefined FUN_1472ac4ce(void)

code * FUN_1472ac4ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MiniFontTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac558;
}



// FUNCTION 1472ac558 FUN_1472ac558 body=138 status=ok
// SIG undefined FUN_1472ac558(void)

code * FUN_1472ac558(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LuminanceSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac5e2;
}



// FUNCTION 1472ac5e2 FUN_1472ac5e2 body=138 status=ok
// SIG undefined FUN_1472ac5e2(void)

code * FUN_1472ac5e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac66c;
}



// FUNCTION 1472ac66c FUN_1472ac66c body=138 status=ok
// SIG undefined FUN_1472ac66c(void)

code * FUN_1472ac66c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HDRSceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac6f6;
}



// FUNCTION 1472ac6f6 FUN_1472ac6f6 body=138 status=ok
// SIG undefined FUN_1472ac6f6(void)

code * FUN_1472ac6f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac780;
}



// FUNCTION 1472ac780 FUN_1472ac780 body=138 status=ok
// SIG undefined FUN_1472ac780(void)

code * FUN_1472ac780(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LuminanceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x12800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f58b4e;
}



// FUNCTION 1472ac80a FUN_1472ac80a body=138 status=ok
// SIG undefined FUN_1472ac80a(void)

code * FUN_1472ac80a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1180000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ac894;
}



// FUNCTION 1472ac894 FUN_1472ac894 body=138 status=ok
// SIG undefined FUN_1472ac894(void)

code * FUN_1472ac894(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HDRSceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630022e;
}



// FUNCTION 1472ac922 FUN_1472ac922 body=138 status=ok
// SIG undefined FUN_1472ac922(void)

code * FUN_1472ac922(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d800000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f59144;
}



// FUNCTION 1472ac9ac FUN_1472ac9ac body=138 status=ok
// SIG undefined FUN_1472ac9ac(void)

code * FUN_1472ac9ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HDRSceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463004ee;
}



// FUNCTION 1472aca3a FUN_1472aca3a body=138 status=ok
// SIG undefined FUN_1472aca3a(void)

code * FUN_1472aca3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e93602;
}



// FUNCTION 1472acac4 FUN_1472acac4 body=138 status=ok
// SIG undefined FUN_1472acac4(void)

code * FUN_1472acac4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acb4e;
}



// FUNCTION 1472acb4e FUN_1472acb4e body=138 status=ok
// SIG undefined FUN_1472acb4e(void)

code * FUN_1472acb4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevScreenPosToPrevColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acbd8;
}



// FUNCTION 1472acbd8 FUN_1472acbd8 body=138 status=ok
// SIG undefined FUN_1472acbd8(void)

code * FUN_1472acbd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPosToColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463009d8;
}



// FUNCTION 1472acc62 FUN_1472acc62 body=138 status=ok
// SIG undefined FUN_1472acc62(void)

code * FUN_1472acc62(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472accec;
}



// FUNCTION 1472accec FUN_1472accec body=138 status=ok
// SIG undefined FUN_1472accec(void)

code * FUN_1472accec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acd76;
}



// FUNCTION 1472acd76 FUN_1472acd76 body=138 status=ok
// SIG undefined FUN_1472acd76(void)

code * FUN_1472acd76(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocitySampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a80000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ace00;
}



// FUNCTION 1472ace00 FUN_1472ace00 body=138 status=ok
// SIG undefined FUN_1472ace00(void)

code * FUN_1472ace00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a00000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f80be2;
}



// FUNCTION 1472ace8a FUN_1472ace8a body=138 status=ok
// SIG undefined FUN_1472ace8a(void)

code * FUN_1472ace8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acf14;
}



// FUNCTION 1472acf14 FUN_1472acf14 body=138 status=ok
// SIG undefined FUN_1472acf14(void)

code * FUN_1472acf14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472acf9e;
}



// FUNCTION 1472acf9e FUN_1472acf9e body=138 status=ok
// SIG undefined FUN_1472acf9e(void)

code * FUN_1472acf9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad028;
}



// FUNCTION 1472ad028 FUN_1472ad028 body=138 status=ok
// SIG undefined FUN_1472ad028(void)

code * FUN_1472ad028(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad0b2;
}



// FUNCTION 1472ad0b2 FUN_1472ad0b2 body=138 status=ok
// SIG undefined FUN_1472ad0b2(void)

code * FUN_1472ad0b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UndistortingDisplacementSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad13c;
}



// FUNCTION 1472ad13c FUN_1472ad13c body=138 status=ok
// SIG undefined FUN_1472ad13c(void)

code * FUN_1472ad13c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UndistortingDisplacementTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad1c6;
}



// FUNCTION 1472ad1c6 FUN_1472ad1c6 body=138 status=ok
// SIG undefined FUN_1472ad1c6(void)

code * FUN_1472ad1c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevDistortingDisplacementSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad250;
}



// FUNCTION 1472ad250 FUN_1472ad250 body=138 status=ok
// SIG undefined FUN_1472ad250(void)

code * FUN_1472ad250(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PrevDistortingDisplacementTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146300af0;
}



// FUNCTION 1472ad2de FUN_1472ad2de body=138 status=ok
// SIG undefined FUN_1472ad2de(void)

code * FUN_1472ad2de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ShadingModelMaskInView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472ad368;
}



// FUNCTION 1472ad368 FUN_1472ad368 body=138 status=ok
// SIG undefined FUN_1472ad368(void)

code * FUN_1472ad368(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ea7034;
}



// FUNCTION 1472ad3f2 FUN_1472ad3f2 body=69 status=ok
// SIG undefined FUN_1472ad3f2(void)

undefined8 * FUN_1472ad3f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a2912b0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144ab2e4c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad438 FUN_1472ad438 body=29 status=ok
// SIG undefined FUN_1472ad438(void)

undefined8 FUN_1472ad438(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad456 FUN_1472ad456 body=29 status=ok
// SIG undefined FUN_1472ad456(void)

undefined8 FUN_1472ad456(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad474 FUN_1472ad474 body=38 status=ok
// SIG undefined FUN_1472ad474(void)

undefined8 FUN_1472ad474(undefined8 param_1,int param_2)

{
  FUN_1462ffa0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad4a0 FUN_1472ad4a0 body=198 status=ok
// SIG undefined FUN_1472ad4a0(void)

void FUN_1472ad4a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472ad566(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472ad566 FUN_1472ad566 body=244 status=ok
// SIG undefined FUN_1472ad566(void)

undefined8 *
FUN_1472ad566(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca36380;
  if (DAT_14ca36380 != 0) {
    LOCK();
    *(int *)(DAT_14ca36380 + 8) = *(int *)(DAT_14ca36380 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca36338;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2d2690;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472ad65c FUN_1472ad65c body=38 status=ok
// SIG undefined FUN_1472ad65c(void)

undefined8 FUN_1472ad65c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad682 FUN_1472ad682 body=253 status=ok
// SIG undefined FUN_1472ad682(void)

void FUN_1472ad682(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f54710(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472ad780 FUN_1472ad780 body=31 status=ok
// SIG undefined FUN_1472ad780(void)

undefined8 FUN_1472ad780(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ad79f FUN_1472ad79f body=47 status=ok
// SIG undefined FUN_1472ad79f(void)

void FUN_1472ad79f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1472ad7ce FUN_1472ad7ce body=147 status=ok
// SIG undefined FUN_1472ad7ce(void)

void FUN_1472ad7ce(longlong param_1,int param_2)

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



// FUNCTION 1472ad862 FUN_1472ad862 body=367 status=ok
// SIG undefined FUN_1472ad862(void)

undefined4 *
FUN_1472ad862(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b412f4(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  uVar2 = param_3[1];
  *local_48 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_48[4] = 0;
  local_48[5] = 0;
  FUN_140b411da(local_48 + 2,uVar2);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*local_48;
    iVar8 = *(int *)(local_48 + 1) + -1;
  }
  uVar4 = FUN_144a49b4a(iVar8,puVar7);
  local_68 = param_4;
  cVar3 = FUN_140b4124e(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_48 + 0x34) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140b414cc(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1472ad9d2 FUN_1472ad9d2 body=138 status=ok
// SIG undefined FUN_1472ad9d2(void)

void FUN_1472ad9d2(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1472ada5c FUN_1472ada5c body=29 status=ok
// SIG undefined FUN_1472ada5c(void)

undefined8 FUN_1472ada5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ada7a FUN_1472ada7a body=198 status=ok
// SIG undefined FUN_1472ada7a(void)

void FUN_1472ada7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472adb40(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472adb40 FUN_1472adb40 body=244 status=ok
// SIG undefined FUN_1472adb40(void)

undefined8 *
FUN_1472adb40(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca36408;
  if (DAT_14ca36408 != 0) {
    LOCK();
    *(int *)(DAT_14ca36408 + 8) = *(int *)(DAT_14ca36408 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca363c0;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2d2700;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472adc36 FUN_1472adc36 body=38 status=ok
// SIG undefined FUN_1472adc36(void)

undefined8 FUN_1472adc36(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472adc5c FUN_1472adc5c body=253 status=ok
// SIG undefined FUN_1472adc5c(void)

void FUN_1472adc5c(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f550c2(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472add5a FUN_1472add5a body=158 status=ok
// SIG undefined FUN_1472add5a(void)

void FUN_1472add5a(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 0x22) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x24) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x26) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  param_1[0x2a] = 0;
  *(undefined1 (*) [16])(param_1 + 0x3b) = (undefined1  [16])0x0;
  lVar1 = 0x230;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x2f0);
  *(undefined4 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 (*) [16])(param_1 + 0x5e) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0xffffffff;
  *(undefined4 *)(param_1 + 99) = 0;
  *(undefined2 *)((longlong)param_1 + 0x31c) = 0;
  param_1[100] = 0;
  return;
}



// FUNCTION 1472addf8 FUN_1472addf8 body=29 status=ok
// SIG undefined FUN_1472addf8(void)

undefined8 FUN_1472addf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ade16 FUN_1472ade16 body=198 status=ok
// SIG undefined FUN_1472ade16(void)

void FUN_1472ade16(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472adedc(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}



// FUNCTION 1472adedc FUN_1472adedc body=244 status=ok
// SIG undefined FUN_1472adedc(void)

undefined8 *
FUN_1472adedc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = DAT_14ca36490;
  if (DAT_14ca36490 != 0) {
    LOCK();
    *(int *)(DAT_14ca36490 + 8) = *(int *)(DAT_14ca36490 + 8) + 1;
    UNLOCK();
  }
  local_30 = &DAT_14ca36448;
  local_48 = 2;
  local_40 = param_3;
  FUN_140068f1a(param_1);
  *param_1 = &PTR_FUN_14a2d2780;
  uVar1 = param_5[1];
  uVar2 = param_5[2];
  uVar3 = param_5[3];
  *(undefined4 *)(param_1 + 0x37) = *param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_5 + 4);
  param_1[0x3a] = *(undefined8 *)(param_5 + 6);
  param_1[0x3b] = *(undefined8 *)(param_5 + 8);
  param_1[0x3c] = *(undefined8 *)(param_5 + 10);
  param_1[0x3d] = *(undefined8 *)(param_5 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_5 + 0xe);
  puVar5 = (undefined8 *)(param_5 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_5 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1472adfd2 FUN_1472adfd2 body=38 status=ok
// SIG undefined FUN_1472adfd2(void)

undefined8 FUN_1472adfd2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472adff8 FUN_1472adff8 body=253 status=ok
// SIG undefined FUN_1472adff8(void)

void FUN_1472adff8(ulonglong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 5;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x30);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 5;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar3 + 2) = (float)(int)uVar1;
  *(float *)((longlong)puVar3 + 0x14) = (float)(int)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(puVar3 + 3) = 0;
  *(float *)((longlong)puVar3 + 0x1c) = (float)(int)uVar2;
  *(float *)(puVar3 + 4) = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((longlong)puVar3 + 0x24) = 0x3f800000;
  FUN_1404e1f8e(param_1,param_5);
  FUN_142f55346(param_7);
  FUN_1447a9dbb(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1472ae0f6 FUN_1472ae0f6 body=142 status=ok
// SIG undefined FUN_1472ae0f6(void)

void FUN_1472ae0f6(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  param_1[0x3a] = 0;
  lVar1 = 0x1e0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x2a0);
  *(undefined4 *)((longlong)param_1 + 0x2b4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x54) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 700) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x59) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5a] = 0;
  return;
}



// FUNCTION 1472ae184 FUN_1472ae184 body=29 status=ok
// SIG undefined FUN_1472ae184(void)

undefined8 FUN_1472ae184(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1472ae1a2 FUN_1472ae1a2 body=198 status=ok
// SIG undefined FUN_1472ae1a2(void)

void FUN_1472ae1a2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_140069376();
  uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar2 = uVar3 + 600;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x260);
    uVar3 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar2 = uVar3 + 600;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1472ae268(uVar3,param_2,param_3,1,param_4);
  iVar1 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar1 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar1 * 8) = uVar3;
  *(int *)(uVar3 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,uVar3);
  return;
}


