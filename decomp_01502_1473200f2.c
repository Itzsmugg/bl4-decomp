// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1473200f2 FUN_1473200f2 body=163 status=ok
// SIG undefined FUN_1473200f2(void)

void FUN_1473200f2(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430a5a6c();
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
  FUN_1430a5b54(param_1,param_2);
  return;
}



// FUNCTION 147320195 FUN_147320195 body=374 status=ok
// SIG undefined FUN_147320195(void)

void FUN_147320195(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14732030c FUN_14732030c body=29 status=ok
// SIG undefined FUN_14732030c(void)

undefined8 FUN_14732030c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14732032a FUN_14732032a body=564 status=ok
// SIG undefined FUN_14732032a(void)

void FUN_14732032a(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    local_50 = DAT_14ca5f4d8;
    if (DAT_14ca5f4d8 != 0) {
      LOCK();
      *(int *)(DAT_14ca5f4d8 + 8) = *(int *)(DAT_14ca5f4d8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5f490;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312c30;
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
    local_50 = DAT_14ca5f4d8;
    if (DAT_14ca5f4d8 != 0) {
      LOCK();
      *(int *)(DAT_14ca5f4d8 + 8) = *(int *)(DAT_14ca5f4d8 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5f490;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312c30;
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
    *puVar16 = &PTR_FUN_14a312c10;
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



// FUNCTION 147320560 FUN_147320560 body=38 status=ok
// SIG undefined FUN_147320560(void)

undefined8 FUN_147320560(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147320586 FUN_147320586 body=219 status=ok
// SIG undefined FUN_147320586(void)

void FUN_147320586(longlong param_1,ulonglong *param_2)

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
  FUN_1430a5ba6(param_1,param_2);
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



// FUNCTION 147320662 FUN_147320662 body=38 status=ok
// SIG undefined FUN_147320662(void)

undefined8 FUN_147320662(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147320688 FUN_147320688 body=163 status=ok
// SIG undefined FUN_147320688(void)

void FUN_147320688(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430a5d88();
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
  FUN_1430a5e70(param_1,param_2);
  return;
}



// FUNCTION 14732072b FUN_14732072b body=374 status=ok
// SIG undefined FUN_14732072b(void)

void FUN_14732072b(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1473208a2 FUN_1473208a2 body=29 status=ok
// SIG undefined FUN_1473208a2(void)

undefined8 FUN_1473208a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473208c0 FUN_1473208c0 body=564 status=ok
// SIG undefined FUN_1473208c0(void)

void FUN_1473208c0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,
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
    local_50 = DAT_14ca5f560;
    if (DAT_14ca5f560 != 0) {
      LOCK();
      *(int *)(DAT_14ca5f560 + 8) = *(int *)(DAT_14ca5f560 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5f518;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312c70;
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
    local_50 = DAT_14ca5f560;
    if (DAT_14ca5f560 != 0) {
      LOCK();
      *(int *)(DAT_14ca5f560 + 8) = *(int *)(DAT_14ca5f560 + 8) + 1;
      UNLOCK();
    }
    local_48 = &DAT_14ca5f518;
    local_68 = 2;
    FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
    *puVar16 = &PTR_FUN_14a312c70;
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
    *puVar16 = &PTR_FUN_14a312c50;
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



// FUNCTION 147320af6 FUN_147320af6 body=38 status=ok
// SIG undefined FUN_147320af6(void)

undefined8 FUN_147320af6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147320b1c FUN_147320b1c body=219 status=ok
// SIG undefined FUN_147320b1c(void)

void FUN_147320b1c(longlong param_1,ulonglong *param_2)

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
  FUN_1430a5ec2(param_1,param_2);
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



// FUNCTION 147320bf8 FUN_147320bf8 body=38 status=ok
// SIG undefined FUN_147320bf8(void)

undefined8 FUN_147320bf8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147320c1e FUN_147320c1e body=163 status=ok
// SIG undefined FUN_147320c1e(void)

void FUN_147320c1e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430a60a4();
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
  FUN_1430a618c(param_1,param_2);
  return;
}



// FUNCTION 147320cc1 FUN_147320cc1 body=374 status=ok
// SIG undefined FUN_147320cc1(void)

void FUN_147320cc1(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147320e38 FUN_147320e38 body=182 status=ok
// SIG undefined FUN_147320e38(void)

void FUN_147320e38(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 4;
  param_1[0x1a] = 0;
  lVar1 = 0xf0;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + 0x10) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x1b0);
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x36) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  return;
}



// FUNCTION 147320eee FUN_147320eee body=29 status=ok
// SIG undefined FUN_147320eee(void)

undefined8 FUN_147320eee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147320f0c FUN_147320f0c body=42 status=ok
// SIG undefined FUN_147320f0c(void)

void FUN_147320f0c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147320f3e FUN_147320f3e body=96 status=ok
// SIG undefined FUN_147320f3e(void)

undefined8 FUN_147320f3e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb13c6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62658,1);
  return uVar3;
}



// FUNCTION 147320f9e FUN_147320f9e body=52 status=ok
// SIG undefined FUN_147320f9e(void)

void FUN_147320f9e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147320fd2 FUN_147320fd2 body=42 status=ok
// SIG undefined FUN_147320fd2(void)

void FUN_147320fd2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147321004 FUN_147321004 body=96 status=ok
// SIG undefined FUN_147321004(void)

undefined8 FUN_147321004(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eb193c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca626e0,1);
  return uVar3;
}



// FUNCTION 147321064 FUN_147321064 body=52 status=ok
// SIG undefined FUN_147321064(void)

void FUN_147321064(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147321098 FUN_147321098 body=42 status=ok
// SIG undefined FUN_147321098(void)

void FUN_147321098(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473210ca FUN_1473210ca body=96 status=ok
// SIG undefined FUN_1473210ca(void)

undefined8 FUN_1473210ca(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f77026();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62768,1);
  return uVar3;
}



// FUNCTION 14732112a FUN_14732112a body=52 status=ok
// SIG undefined FUN_14732112a(void)

void FUN_14732112a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14732115e FUN_14732115e body=42 status=ok
// SIG undefined FUN_14732115e(void)

void FUN_14732115e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147321190 FUN_147321190 body=96 status=ok
// SIG undefined FUN_147321190(void)

undefined8 FUN_147321190(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145eba60a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca627f0,1);
  return uVar3;
}



// FUNCTION 1473211f0 FUN_1473211f0 body=52 status=ok
// SIG undefined FUN_1473211f0(void)

void FUN_1473211f0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147321224 FUN_147321224 body=42 status=ok
// SIG undefined FUN_147321224(void)

void FUN_147321224(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147321256 FUN_147321256 body=96 status=ok
// SIG undefined FUN_147321256(void)

undefined8 FUN_147321256(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e772ae();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62878,1);
  return uVar3;
}



// FUNCTION 1473212b6 FUN_1473212b6 body=52 status=ok
// SIG undefined FUN_1473212b6(void)

void FUN_1473212b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473212ea FUN_1473212ea body=42 status=ok
// SIG undefined FUN_1473212ea(void)

void FUN_1473212ea(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147321320 FUN_147321320 body=96 status=ok
// SIG undefined FUN_147321320(void)

undefined8 FUN_147321320(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141572e38();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62900,1);
  return uVar3;
}



// FUNCTION 147321380 FUN_147321380 body=52 status=ok
// SIG undefined FUN_147321380(void)

void FUN_147321380(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473213b4 FUN_1473213b4 body=42 status=ok
// SIG undefined FUN_1473213b4(void)

void FUN_1473213b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473213ea FUN_1473213ea body=96 status=ok
// SIG undefined FUN_1473213ea(void)

undefined8 FUN_1473213ea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14158fde6();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62988,1);
  return uVar3;
}



// FUNCTION 14732144a FUN_14732144a body=52 status=ok
// SIG undefined FUN_14732144a(void)

void FUN_14732144a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14732147e FUN_14732147e body=42 status=ok
// SIG undefined FUN_14732147e(void)

void FUN_14732147e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473214c8 FUN_1473214c8 body=89 status=ok
// SIG undefined FUN_1473214c8(void)

undefined8 FUN_1473214c8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = FUN_14153ccb2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,uVar4,1);
  return uVar3;
}



// FUNCTION 147321522 FUN_147321522 body=52 status=ok
// SIG undefined FUN_147321522(void)

void FUN_147321522(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147321556 FUN_147321556 body=42 status=ok
// SIG undefined FUN_147321556(void)

void FUN_147321556(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473215a0 FUN_1473215a0 body=39 status=ok
// SIG undefined FUN_1473215a0(void)

void FUN_1473215a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar1,param_1);
  return;
}



// FUNCTION 1473215c8 FUN_1473215c8 body=52 status=ok
// SIG undefined FUN_1473215c8(void)

void FUN_1473215c8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473215fc FUN_1473215fc body=54 status=ok
// SIG undefined FUN_1473215fc(void)

void FUN_1473215fc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_147321632(param_2,param_1 + 0x138,param_1 + 0x168,param_3,0,param_4);
  return;
}



// FUNCTION 147321632 FUN_147321632 body=1925 status=ok
// SIG undefined FUN_147321632(void)

undefined8
FUN_147321632(longlong param_1,longlong *param_2,longlong param_3,uint param_4,uint param_5,
             int *param_6)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_148 [32];
  uint local_128;
  wchar_t *local_120;
  uint local_114;
  longlong *local_110;
  uint local_104;
  int local_100;
  int local_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 uStack_bc;
  uint uStack_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined8 *local_a0;
  uint local_98 [10];
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar14 = 0;
  local_fc = 0;
  local_100 = 0;
  local_104 = 0;
  local_114 = 0;
  if (param_6 != (int *)0x0) {
    local_fc = *param_6;
    local_100 = param_6[1];
    local_104 = param_6[2];
    local_114 = param_6[3];
  }
  local_98[1] = param_4;
  local_98[0] = param_5;
  local_98[3] = local_100;
  local_98[2] = local_fc;
  local_98[4] = local_104;
  local_98[5] = local_114;
  lVar11 = 0;
  do {
    uVar14 = ((uint)(*(int *)((longlong)local_98 + lVar11) * -0x3361d2af) >> 0x11 |
             *(int *)((longlong)local_98 + lVar11) * 0x16a88000) * 0x1b873593 ^ uVar14;
    uVar14 = (uVar14 << 0xd | uVar14 >> 0x13) * 5 + 0xe6546b64;
    lVar11 = lVar11 + 4;
  } while (lVar11 != 0x18);
  uVar14 = (uVar14 >> 0x10 ^ uVar14) * -0x7a143595;
  uVar6 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar14 = *(uint *)(*(longlong *)(param_3 + 0x10) + (ulonglong)(*(uint *)(param_3 + 4) & uVar6) * 4
                    );
  local_110 = param_2;
  if (uVar14 != 0xffffffff) {
    lVar11 = *param_2;
    do {
      lVar15 = (longlong)(int)uVar14;
      if (*(uint *)(lVar11 + 0x14 + lVar15 * 0x28) == param_4) {
        lVar1 = lVar11 + lVar15 * 0x28;
        if ((((*(uint *)(lVar1 + 0x18) == param_5) && (*(int *)(lVar1 + 4) == local_fc)) &&
            (*(int *)(lVar1 + 8) == local_100)) &&
           ((*(uint *)(lVar1 + 0xc) == local_104 && (*(uint *)(lVar1 + 0x10) == local_114)))) {
          if (*(longlong *)(lVar11 + 0x20 + lVar15 * 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
          }
          break;
        }
      }
      uVar14 = *(uint *)(*(longlong *)(param_3 + 0x18) + (ulonglong)uVar14 * 4);
    } while (uVar14 != 0xffffffff);
  }
  local_d8 = 1;
  uStack_d4 = 1;
  local_d0 = 0;
  local_c8 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 1;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[8] = 0;
  local_98[9] = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"";
  local_60 = 0;
  uStack_58 = 0;
  lVar11 = *(longlong *)(param_1 + 0x18);
  local_f0 = param_1;
  if (param_5 == 2) {
    local_68 = L"DefaultByteAddressBuffer";
    uStack_d4 = param_4 >> 2;
    local_d8 = 4;
    local_c8 = 0;
    local_d0 = 0x10111;
    uStack_bc = CONCAT44(0x10111,param_4);
    local_c0 = param_4;
    if (param_4 == 0) {
      uVar10 = 0x10111;
LAB_1473219b6:
      local_c8 = 0;
      local_c0 = param_4;
      FUN_14570b4be(lVar11,local_98,uVar10,0);
    }
LAB_1473219be:
    if (*(char *)(lVar11 + 0x69) == '\0') {
      FUN_14002049c(lVar11,1);
      lVar15 = *DAT_14ca83900;
      uVar12 = 0x70;
LAB_147321d25:
      local_120 = (wchar_t *)local_98;
      local_128 = uVar12;
      (**(code **)(lVar15 + 0x150))(DAT_14ca83900,&local_e0,lVar11,&local_c0);
      *(undefined4 *)(local_e0 + 0x18) = uVar12;
      FUN_14002049c(lVar11,0);
      lVar15 = local_e0;
    }
    else {
      lVar15 = *DAT_14ca83900;
      uVar12 = 0x70;
LAB_1473219e5:
      local_120 = (wchar_t *)local_98;
      local_128 = uVar12;
      (**(code **)(lVar15 + 0x150))(DAT_14ca83900,&local_e0,lVar11,&local_c0);
      *(undefined4 *)(local_e0 + 0x18) = uVar12;
      lVar15 = local_e0;
    }
  }
  else {
    if (param_5 == 1) {
      local_68 = L"DefaultStructuredBuffer";
      uStack_d4 = 1;
      local_d0 = 0x10101;
      local_c8 = 0;
      uStack_bc = CONCAT44(0x10101,param_4);
      local_d8 = param_4;
      local_c0 = param_4;
      if (param_4 == 0) {
        uVar10 = 0x10101;
        goto LAB_1473219b6;
      }
      goto LAB_1473219be;
    }
    lVar15 = 0;
    if (param_5 == 0) {
      local_68 = L"DefaultBuffer";
      uStack_d4 = 1;
      local_d0 = 0x4100;
      local_c8 = 0;
      uStack_bc = 0x410100000000;
      local_d8 = param_4;
      local_c0 = param_4;
      if (param_4 == 0) {
        FUN_14570b4be(lVar11,local_98,0x4101,0);
      }
      if (*(char *)(lVar11 + 0x69) == '\0') {
        FUN_14002049c(lVar11,1);
        lVar15 = *DAT_14ca83900;
        uVar12 = 0x78;
        goto LAB_147321d25;
      }
      lVar15 = *DAT_14ca83900;
      uVar12 = 0x78;
      goto LAB_1473219e5;
    }
  }
  cVar4 = *(char *)(lVar11 + 0x69);
  local_f8 = param_3;
  if (cVar4 == '\0') {
    FUN_14002049c(lVar11,1);
  }
  local_120 = (wchar_t *)CONCAT44(local_120._4_4_,1);
  local_128 = param_4;
  puVar8 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar11,lVar15,0);
  if (cVar4 == '\0') {
    FUN_14002049c(lVar11);
  }
  uVar9 = (ulonglong)param_4;
  if (param_6 != (int *)0x0) {
    puVar16 = (undefined8 *)((longlong)puVar8 + uVar9);
    if (0xf < param_4) {
      uVar9 = (ulonglong)(param_4 >> 4);
      do {
        uVar10 = *(undefined8 *)(param_6 + 2);
        *puVar8 = *(undefined8 *)param_6;
        puVar8[1] = uVar10;
        puVar8 = puVar8 + 2;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (puVar16 <= puVar8) goto LAB_147321a98;
    uVar9 = (longlong)puVar16 - (longlong)puVar8;
  }
  memset(puVar8,0,uVar9);
LAB_147321a98:
  if (*(char *)(lVar11 + 0x69) == '\0') {
    FUN_14002049c(lVar11,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,lVar15);
    FUN_14002049c(lVar11,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,lVar11,lVar15);
  }
  local_a0 = (undefined8 *)0x0;
  uStack_bc = CONCAT44(local_100,local_fc);
  uStack_b4 = local_104;
  local_b0 = local_114;
  local_a8 = param_5;
  local_c0 = uVar6;
  local_ac = param_4;
  puVar8 = (undefined8 *)FUN_14001cc68(0xb8,0x10);
  if (lVar15 == 0) {
    puVar16 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
    puVar16 = local_a0;
  }
  local_120 = local_68;
  local_128 = 1;
  local_e8 = lVar15;
  FUN_14004772e(puVar8,lVar11,&local_e8,&local_d8);
  if (puVar16 != puVar8) {
    if (puVar8 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
      UNLOCK();
    }
    local_a0 = puVar8;
    if (puVar16 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar16 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  uVar14 = *(uint *)(local_110 + 1);
  lVar11 = (longlong)(int)uVar14;
  uVar13 = uVar14 + 1;
  *(uint *)(local_110 + 1) = uVar13;
  if (*(uint *)((longlong)local_110 + 0xc) < uVar13) {
    FUN_1456bceb2(local_110,uVar14);
  }
  lVar5 = local_f8;
  lVar1 = *local_110;
  puVar3 = (uint *)(lVar1 + 0xc + lVar11 * 0x28);
  *puVar3 = uStack_b4;
  puVar3[1] = local_b0;
  puVar3[2] = local_ac;
  puVar3[3] = local_a8;
  puVar3 = (uint *)(lVar1 + lVar11 * 0x28);
  *puVar3 = local_c0;
  puVar3[1] = (uint)uStack_bc;
  puVar3[2] = uStack_bc._4_4_;
  puVar3[3] = uStack_b4;
  *(undefined8 **)(lVar1 + 0x20 + lVar11 * 0x28) = local_a0;
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
    UNLOCK();
  }
  if (*(uint *)(local_f8 + 8) <= uVar14) {
    uVar9 = (ulonglong)(uVar14 + (uVar13 == 0)) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar11 & 0x1f);
    uVar13 = 0x20;
    if (0x20 < uVar7) {
      uVar13 = uVar7;
    }
    FUN_1404b04e2(local_f8,uVar13);
  }
  uVar9 = (ulonglong)(uVar6 & *(uint *)(lVar5 + 4));
  *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uVar14 * 4) =
       *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 4);
  *(uint *)(*(longlong *)(lVar5 + 0x10) + uVar9 * 4) = uVar14;
  uVar10 = FUN_144735dd8(local_f0,&local_a0,2);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  if (lVar15 != 0) {
    LOCK();
    puVar3 = (uint *)(lVar15 + 8);
    uVar14 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar14 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar15);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 147321dd9 FUN_147321dd9 body=382 status=ok
// SIG undefined FUN_147321dd9(void)

void FUN_147321dd9(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(*(longlong *)(param_3 + 8) + 0xd0) == '\x01') {
    lVar1 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x348);
    lVar3 = 0;
    if (*(char *)(lVar1 + 8) != '\0') {
      lVar3 = lVar1;
    }
  }
  else {
    lVar3 = 0;
  }
  local_b8 = param_4;
  FUN_1448e315a(param_2,lVar3,*(undefined4 *)(param_3 + 0x3090),0);
  local_70 = (float)(*(double *)(param_1 + 0x58) - *(double *)(param_3 + 0x1040));
  local_74 = (float)(*(double *)(param_1 + 0x50) - *(double *)(param_3 + 0x1038));
  local_78 = (float)(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x1030));
  local_a8 = 0x3f800000;
  local_a4 = 0;
  uStack_9c = 0;
  local_94 = 0x3f800000;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x3f800000;
  local_6c = 0x3f800000;
  FUN_144afeb32(&local_68,&local_a8,param_1 + 0x1e0);
  *(undefined4 *)(param_4 + 0xc0) = local_38;
  *(undefined4 *)(param_4 + 0xc4) = uStack_34;
  *(undefined4 *)(param_4 + 200) = uStack_30;
  *(undefined4 *)(param_4 + 0xcc) = uStack_2c;
  *(undefined4 *)(param_4 + 0xb0) = local_48;
  *(undefined4 *)(param_4 + 0xb4) = uStack_44;
  *(undefined4 *)(param_4 + 0xb8) = uStack_40;
  *(undefined4 *)(param_4 + 0xbc) = uStack_3c;
  *(undefined4 *)(param_4 + 0xa0) = local_58;
  *(undefined4 *)(param_4 + 0xa4) = uStack_54;
  *(undefined4 *)(param_4 + 0xa8) = uStack_50;
  *(undefined4 *)(param_4 + 0xac) = uStack_4c;
  *(undefined4 *)(param_4 + 0x90) = local_68;
  *(undefined4 *)(param_4 + 0x94) = uStack_64;
  *(undefined4 *)(param_4 + 0x98) = uStack_60;
  *(undefined4 *)(param_4 + 0x9c) = uStack_5c;
  cVar2 = FUN_144b17b9c(param_1);
  if (cVar2 == '\0') {
    uVar4 = 0;
    if (((*(uint *)(param_1 + 0x990) >> 0xb & 1) == 0) || ((*(uint *)(param_1 + 0x990) & 0x10) == 0)
       ) goto LAB_147321ef4;
  }
  uVar4 = 0x3f800000;
LAB_147321ef4:
  *(undefined4 *)(param_4 + 0xd0) = uVar4;
  *(undefined4 *)(param_4 + 0xd4) = *(undefined4 *)(param_1 + 0x2a0);
  FUN_1472f4aa5(param_1,param_4 + 0xe0);
  if ((local_20 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147321f58 FUN_147321f58 body=54 status=ok
// SIG undefined FUN_147321f58(void)

void FUN_147321f58(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147321f96 FUN_147321f96 body=39 status=ok
// SIG undefined FUN_147321f96(void)

void FUN_147321f96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147321fbe FUN_147321fbe body=60 status=ok
// SIG undefined FUN_147321fbe(void)

longlong FUN_147321fbe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 147321ffa FUN_147321ffa body=54 status=ok
// SIG undefined FUN_147321ffa(void)

void FUN_147321ffa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147322038 FUN_147322038 body=39 status=ok
// SIG undefined FUN_147322038(void)

void FUN_147322038(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea40c(uVar1,param_1);
  return;
}



// FUNCTION 147322060 FUN_147322060 body=60 status=ok
// SIG undefined FUN_147322060(void)

longlong FUN_147322060(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_1472ea222(lVar1);
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined2 *)(lVar1 + 0x100) = 0xffff;
  return lVar1;
}



// FUNCTION 14732209c FUN_14732209c body=54 status=ok
// SIG undefined FUN_14732209c(void)

void FUN_14732209c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1473220da FUN_1473220da body=93 status=ok
// SIG undefined FUN_1473220da(void)

longlong FUN_1473220da(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  FUN_1474409b8(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"TranslucentShadowStartOffset",0);
  return lVar1;
}



// FUNCTION 147322138 FUN_147322138 body=95 status=ok
// SIG undefined FUN_147322138(void)

void * FUN_147322138(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined4 *)((longlong)_Dst + 0x108) = 0;
  *(undefined2 *)((longlong)_Dst + 0x10c) = 0;
  return _Dst;
}



// FUNCTION 147322198 FUN_147322198 body=54 status=ok
// SIG undefined FUN_147322198(void)

void FUN_147322198(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 1473221d6 FUN_1473221d6 body=93 status=ok
// SIG undefined FUN_1473221d6(void)

longlong FUN_1473221d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_1472ea40c(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  FUN_1474409b8(lVar1 + 0x108,*(undefined8 *)(param_1 + 0x28),L"TranslucentShadowStartOffset",0);
  return lVar1;
}



// FUNCTION 147322234 FUN_147322234 body=95 status=ok
// SIG undefined FUN_147322234(void)

void * FUN_147322234(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0x110);
  memset(_Dst,0,0x110);
  FUN_1472ea222(_Dst);
  *(undefined8 *)((longlong)_Dst + 0xf8) = 0;
  *(undefined2 *)((longlong)_Dst + 0x100) = 0xffff;
  *(undefined4 *)((longlong)_Dst + 0x108) = 0;
  *(undefined2 *)((longlong)_Dst + 0x10c) = 0;
  return _Dst;
}



// FUNCTION 147322294 FUN_147322294 body=345 status=ok
// SIG undefined FUN_147322294(void)

ulonglong FUN_147322294(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6,longlong *param_7)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_70 = param_3;
  uVar8 = (**(code **)(*param_7 + 0x338))(param_7);
  cVar1 = (**(code **)(*param_7 + 0x2a8))(param_7);
  local_68 = FUN_144b13a0e(param_2);
  uVar3 = FUN_144a875de(param_7,&local_68);
  uVar4 = FUN_144a53bf0(param_7,&local_68);
  cVar2 = FUN_144b25ad0(param_7);
  uVar7 = CONCAT71((int7)((ulonglong)&local_68 >> 8),1);
  if (cVar2 != '\0') {
    iVar5 = (**(code **)(*param_7 + 0x30))(param_7);
    if (cVar1 == '\0' && iVar5 != 3) {
      local_a8 = param_4;
      local_90 = uVar8;
      local_88 = uVar3;
      local_80 = uVar4;
      if (*(char *)(param_1 + 0x88) == '\x01') {
        local_98 = param_7;
        local_a0 = param_6;
        uVar6 = FUN_1473223ee(param_1,param_2,local_70);
      }
      else {
        local_98 = param_7;
        local_a0 = param_6;
        uVar6 = FUN_14732272e(param_1,param_2,local_70,param_5);
      }
      uVar7 = (ulonglong)uVar6;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473223ee FUN_1473223ee body=830 status=ok
// SIG undefined FUN_1473223ee(void)

undefined4
FUN_1473223ee(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7,float param_8,
             undefined4 param_9,undefined4 param_10)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  ulonglong local_270;
  undefined8 *local_268;
  longlong *local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined8 local_248;
  double *local_240;
  double local_230 [5];
  float local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 auStack_f0 [12];
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  plVar3 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(local_f8,0,0x98);
  FUN_1460cf39c();
  auStack_f0[DAT_14ca60bd0] = &DAT_14ca60b88;
  auStack_90[DAT_14ca60bd0] = 0;
  FUN_1460cf610();
  auStack_f0[DAT_14ca60e20] = &DAT_14ca60dd8;
  auStack_90[DAT_14ca60e20] = 0;
  uVar9 = (**(code **)(*plVar3 + 0x30))(plVar3);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar8 = FUN_14007744c(param_7,local_f8,uVar9);
  lVar7 = lStack_140;
  lVar6 = local_158;
  if ((char)uVar8 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_1f8 = *(undefined8 *)(param_1 + 0x40);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x48);
    local_1e8 = *(undefined4 *)(param_1 + 0x50);
    uStack_1e4 = *(undefined4 *)(param_1 + 0x54);
    uStack_1e0 = *(undefined4 *)(param_1 + 0x58);
    uStack_1dc = *(undefined4 *)(param_1 + 0x5c);
    local_1d8 = *(undefined8 *)(param_1 + 0x60);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x68);
    local_1c8 = *(undefined8 *)(param_1 + 0x70);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x78);
    local_230[3] = 0.0;
    local_230[4] = 0.0;
    local_278 = CONCAT44(local_278._4_4_,param_4);
    local_270 = local_270 & 0xffffffffffffff00;
    FUN_144b17a9a(local_230 + 3,*(undefined8 *)(param_1 + 0x28),param_5,param_2);
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xbb0) + 8);
    local_230[0] = 1.0;
    local_230[1] = 1.0;
    local_230[2] = 1.0;
    lVar10 = 0;
    do {
      dVar13 = *(double *)(lVar5 + 0x100 + lVar10 * 4);
      dVar1 = *(double *)(lVar5 + 0x108 + lVar10 * 4);
      dVar2 = *(double *)(lVar5 + 0x110 + lVar10 * 4);
      dVar13 = dVar2 * dVar2 + dVar13 * dVar13 + dVar1 * dVar1;
      *(ulonglong *)((longlong)local_230 + lVar10) =
           -(ulonglong)(9.99999993922529e-09 < dVar13) & (ulonglong)SQRT(dVar13);
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    uVar11 = SUB84(local_230[0],0);
    uVar12 = (undefined4)((ulonglong)local_230[0] >> 0x20);
    if (local_230[0] <= local_230[1]) {
      uVar11 = SUB84(local_230[1],0);
      uVar12 = (undefined4)((ulonglong)local_230[1] >> 0x20);
    }
    if ((double)CONCAT44(uVar12,uVar11) <= local_230[2]) {
      uVar11 = SUB84(local_230[2],0);
      uVar12 = (undefined4)((ulonglong)local_230[2] >> 0x20);
    }
    local_208 = ((float)(double)CONCAT44(uVar12,uVar11) * param_8) /
                (*(float *)(lVar4 + 0x2a4) - *(float *)(lVar4 + 0x2a8));
    local_248 = FUN_144b139e7(lVar6,lVar7);
    local_250 = param_10;
    local_258 = param_9;
    local_260 = &local_1b8;
    local_268 = &local_1f8;
    local_270 = param_7;
    local_278 = param_6;
    local_240 = local_230 + 3;
    FUN_1430c3160(param_1,param_2,param_3,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14732272e FUN_14732272e body=830 status=ok
// SIG undefined FUN_14732272e(void)

undefined4
FUN_14732272e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,ulonglong param_7,float param_8,
             undefined4 param_9,undefined4 param_10)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  ulonglong local_270;
  undefined8 *local_268;
  longlong *local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined8 local_248;
  double *local_240;
  double local_230 [5];
  float local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [8];
  undefined8 auStack_f0 [12];
  undefined4 auStack_90 [12];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  plVar3 = *(longlong **)(param_2 + 0xb8);
  local_178 = 0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  memset(local_f8,0,0x98);
  FUN_145e24546();
  auStack_f0[DAT_14ca60aa8] = &DAT_14ca60a60;
  auStack_90[DAT_14ca60aa8] = 0;
  FUN_145eefe28();
  auStack_f0[DAT_14ca60cf8] = &DAT_14ca60cb0;
  auStack_90[DAT_14ca60cf8] = 0;
  uVar9 = (**(code **)(*plVar3 + 0x30))(plVar3);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  lStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  uVar8 = FUN_14007744c(param_7,local_f8,uVar9);
  lVar7 = lStack_140;
  lVar6 = local_158;
  if ((char)uVar8 != '\0') {
    if (local_158 != 0) {
      local_1b8 = local_158;
      uStack_1b0 = local_168;
    }
    if (lStack_140 != 0) {
      local_1a8 = lStack_140;
      uStack_1a0 = local_168;
    }
    local_1f8 = *(undefined8 *)(param_1 + 0x40);
    uStack_1f0 = *(undefined8 *)(param_1 + 0x48);
    local_1e8 = *(undefined4 *)(param_1 + 0x50);
    uStack_1e4 = *(undefined4 *)(param_1 + 0x54);
    uStack_1e0 = *(undefined4 *)(param_1 + 0x58);
    uStack_1dc = *(undefined4 *)(param_1 + 0x5c);
    local_1d8 = *(undefined8 *)(param_1 + 0x60);
    uStack_1d0 = *(undefined8 *)(param_1 + 0x68);
    local_1c8 = *(undefined8 *)(param_1 + 0x70);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x78);
    local_230[3] = 0.0;
    local_230[4] = 0.0;
    local_278 = CONCAT44(local_278._4_4_,param_4);
    local_270 = local_270 & 0xffffffffffffff00;
    FUN_144b17a9a(local_230 + 3,*(undefined8 *)(param_1 + 0x28),param_5,param_2);
    lVar4 = *(longlong *)(param_1 + 0x80);
    lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0xbb0) + 8);
    local_230[0] = 1.0;
    local_230[1] = 1.0;
    local_230[2] = 1.0;
    lVar10 = 0;
    do {
      dVar13 = *(double *)(lVar5 + 0x100 + lVar10 * 4);
      dVar1 = *(double *)(lVar5 + 0x108 + lVar10 * 4);
      dVar2 = *(double *)(lVar5 + 0x110 + lVar10 * 4);
      dVar13 = dVar2 * dVar2 + dVar13 * dVar13 + dVar1 * dVar1;
      *(ulonglong *)((longlong)local_230 + lVar10) =
           -(ulonglong)(9.99999993922529e-09 < dVar13) & (ulonglong)SQRT(dVar13);
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x18);
    uVar11 = SUB84(local_230[0],0);
    uVar12 = (undefined4)((ulonglong)local_230[0] >> 0x20);
    if (local_230[0] <= local_230[1]) {
      uVar11 = SUB84(local_230[1],0);
      uVar12 = (undefined4)((ulonglong)local_230[1] >> 0x20);
    }
    if ((double)CONCAT44(uVar12,uVar11) <= local_230[2]) {
      uVar11 = SUB84(local_230[2],0);
      uVar12 = (undefined4)((ulonglong)local_230[2] >> 0x20);
    }
    local_208 = ((float)(double)CONCAT44(uVar12,uVar11) * param_8) /
                (*(float *)(lVar4 + 0x2a4) - *(float *)(lVar4 + 0x2a8));
    local_248 = FUN_144b139e7(lVar6,lVar7);
    local_250 = param_10;
    local_258 = param_9;
    local_260 = &local_1b8;
    local_268 = &local_1f8;
    local_270 = param_7;
    local_278 = param_6;
    local_240 = local_230 + 3;
    FUN_1430c4178(param_1,param_2,param_3,param_5);
  }
  if ((local_60 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147322a6e FUN_147322a6e body=153 status=ok
// SIG undefined FUN_147322a6e(void)

void FUN_147322a6e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((*(byte *)(param_2 + 0xe5) & 1) != 0) {
    plVar3 = *(longlong **)(param_2 + 0xc0);
    while ((plVar3 != (longlong *)0x0 &&
           (((lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,*(undefined4 *)(param_1 + 0x20)),
             lVar2 == 0 || (*(longlong *)(lVar2 + 0x18) == 0)) ||
            (cVar1 = FUN_147322294(param_1,param_2,param_3,param_4,param_5,plVar3,lVar2),
            cVar1 == '\0'))))) {
      plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))(plVar3,*(undefined4 *)(param_1 + 0x20));
    }
  }
  return;
}



// FUNCTION 147322b08 FUN_147322b08 body=42 status=ok
// SIG undefined FUN_147322b08(void)

void FUN_147322b08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147322b3a FUN_147322b3a body=96 status=ok
// SIG undefined FUN_147322b3a(void)

undefined8 FUN_147322b3a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157870a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62a10,1);
  return uVar3;
}



// FUNCTION 147322b9a FUN_147322b9a body=52 status=ok
// SIG undefined FUN_147322b9a(void)

void FUN_147322b9a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147322bce FUN_147322bce body=54 status=ok
// SIG undefined FUN_147322bce(void)

void FUN_147322bce(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147322c0c FUN_147322c0c body=89 status=ok
// SIG undefined FUN_147322c0c(void)

undefined8 FUN_147322c0c(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea2b4(uVar1,param_1);
  FUN_14156fc52();
  FUN_147440c52(uVar1,uVar1,*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x28),
                &DAT_14ca62a98,0);
  return uVar1;
}



// FUNCTION 147322c66 FUN_147322c66 body=31 status=ok
// SIG undefined FUN_147322c66(void)

void FUN_147322c66(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_1472ea222(uVar1);
  return;
}



// FUNCTION 147322c86 FUN_147322c86 body=42 status=ok
// SIG undefined FUN_147322c86(void)

void FUN_147322c86(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147322cb8 FUN_147322cb8 body=96 status=ok
// SIG undefined FUN_147322cb8(void)

undefined8 FUN_147322cb8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141598608();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62b20,1);
  return uVar3;
}



// FUNCTION 147322d18 FUN_147322d18 body=52 status=ok
// SIG undefined FUN_147322d18(void)

void FUN_147322d18(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147322d4c FUN_147322d4c body=42 status=ok
// SIG undefined FUN_147322d4c(void)

void FUN_147322d4c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147322d96 FUN_147322d96 body=96 status=ok
// SIG undefined FUN_147322d96(void)

undefined8 FUN_147322d96(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141578930();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62ba8,1);
  return uVar3;
}



// FUNCTION 147322df6 FUN_147322df6 body=52 status=ok
// SIG undefined FUN_147322df6(void)

void FUN_147322df6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147322e2a FUN_147322e2a body=42 status=ok
// SIG undefined FUN_147322e2a(void)

void FUN_147322e2a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147322e74 FUN_147322e74 body=96 status=ok
// SIG undefined FUN_147322e74(void)

undefined8 FUN_147322e74(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157db6e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62c30,1);
  return uVar3;
}



// FUNCTION 147322ed4 FUN_147322ed4 body=52 status=ok
// SIG undefined FUN_147322ed4(void)

void FUN_147322ed4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147322f08 FUN_147322f08 body=42 status=ok
// SIG undefined FUN_147322f08(void)

void FUN_147322f08(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147322f3a FUN_147322f3a body=96 status=ok
// SIG undefined FUN_147322f3a(void)

undefined8 FUN_147322f3a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415744b8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62cb8,1);
  return uVar3;
}



// FUNCTION 147322f9a FUN_147322f9a body=52 status=ok
// SIG undefined FUN_147322f9a(void)

void FUN_147322f9a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147322fce FUN_147322fce body=20 status=ok
// SIG undefined FUN_147322fce(void)

undefined1 FUN_147322fce(uint param_1)

{
  undefined1 uVar1;
  
  uVar1 = 0x3a;
  if (param_1 < 0xf) {
    uVar1 = (&DAT_14a31ad20)[param_1];
  }
  return uVar1;
}



// FUNCTION 147322fe2 FUN_147322fe2 body=42 status=ok
// SIG undefined FUN_147322fe2(void)

void FUN_147322fe2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14732302c FUN_14732302c body=96 status=ok
// SIG undefined FUN_14732302c(void)

undefined8 FUN_14732302c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141578b56();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62d40,1);
  return uVar3;
}



// FUNCTION 14732308c FUN_14732308c body=52 status=ok
// SIG undefined FUN_14732308c(void)

void FUN_14732308c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473230c0 FUN_1473230c0 body=42 status=ok
// SIG undefined FUN_1473230c0(void)

void FUN_1473230c0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14732310a FUN_14732310a body=96 status=ok
// SIG undefined FUN_14732310a(void)

undefined8 FUN_14732310a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e97bec();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62dc8,1);
  return uVar3;
}



// FUNCTION 14732316a FUN_14732316a body=52 status=ok
// SIG undefined FUN_14732316a(void)

void FUN_14732316a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14732319e FUN_14732319e body=42 status=ok
// SIG undefined FUN_14732319e(void)

void FUN_14732319e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473231e8 FUN_1473231e8 body=96 status=ok
// SIG undefined FUN_1473231e8(void)

undefined8 FUN_1473231e8(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14159882e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62e50,1);
  return uVar3;
}



// FUNCTION 147323248 FUN_147323248 body=52 status=ok
// SIG undefined FUN_147323248(void)

void FUN_147323248(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14732327c FUN_14732327c body=42 status=ok
// SIG undefined FUN_14732327c(void)

void FUN_14732327c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1473232c6 FUN_1473232c6 body=96 status=ok
// SIG undefined FUN_1473232c6(void)

undefined8 FUN_1473232c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e7781c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62ed8,1);
  return uVar3;
}



// FUNCTION 147323326 FUN_147323326 body=52 status=ok
// SIG undefined FUN_147323326(void)

void FUN_147323326(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14732335a FUN_14732335a body=435 status=ok
// SIG undefined FUN_14732335a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14732335a(longlong param_1,undefined8 param_2,int *param_3,uint param_4,void *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_1838 [32];
  undefined1 *local_1818;
  undefined1 *local_1810;
  undefined8 local_1800 [7];
  undefined1 local_17c8;
  undefined1 local_1790;
  undefined1 local_1788 [2976];
  undefined1 local_be8 [2976];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1838;
  local_1800[0] = param_2;
  memcpy(param_5,*(void **)(param_1 + 0x3110),0x1960);
  memcpy(local_be8,(void *)(param_1 + 0x500),0xba0);
  memcpy(local_1788,(void *)(param_1 + 0x125d0),0xba0);
  if ((param_4 & 0xfffffff7) == 4) {
    FUN_1448e6e32(local_be8);
    memcpy(local_1788,local_be8,0xba0);
    local_17c8 = 0;
    local_1790 = 0;
    local_1810 = param_5;
    local_1818 = (undefined1 *)CONCAT44(local_1818._4_4_,2);
    FUN_1401ee8d8(param_1,local_be8,local_1788);
  }
  local_1818 = local_be8;
  local_1810 = local_1788;
  FUN_14054f8e6(param_1,param_5,local_1800,param_3);
  fVar1 = (float)(param_3[2] - *param_3) /
          (float)(*(int *)(param_1 + 0x3100) - *(int *)(param_1 + 0x30f8));
  fVar3 = (float)(param_3[3] - param_3[1]) /
          (float)(*(int *)(param_1 + 0x3104) - *(int *)(param_1 + 0x30fc));
  fVar4 = 1.0 / fVar3;
  fVar2 = 1.0 / fVar1;
  *(float *)((longlong)param_5 + 0xb20) = fVar1;
  *(float *)((longlong)param_5 + 0xb24) = fVar3;
  *(float *)((longlong)param_5 + 0xb28) = fVar2;
  *(float *)((longlong)param_5 + 0xb2c) = fVar4;
  *(float *)((longlong)param_5 + 0xb60) = fVar2;
  *(float *)((longlong)param_5 + 0xb64) = fVar4;
  if ((local_48 ^ (ulonglong)auStack_1838) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14732350e FUN_14732350e body=42 status=ok
// SIG undefined FUN_14732350e(void)

void FUN_14732350e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147323540 FUN_147323540 body=96 status=ok
// SIG undefined FUN_147323540(void)

undefined8 FUN_147323540(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_141578d7c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca62ff8,1);
  return uVar3;
}



// FUNCTION 1473235a0 FUN_1473235a0 body=52 status=ok
// SIG undefined FUN_1473235a0(void)

void FUN_1473235a0(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473235d4 FUN_1473235d4 body=42 status=ok
// SIG undefined FUN_1473235d4(void)

void FUN_1473235d4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14732361e FUN_14732361e body=96 status=ok
// SIG undefined FUN_14732361e(void)

undefined8 FUN_14732361e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_14157bac2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca63080,1);
  return uVar3;
}



// FUNCTION 14732367e FUN_14732367e body=52 status=ok
// SIG undefined FUN_14732367e(void)

void FUN_14732367e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1473236b2 FUN_1473236b2 body=141 status=ok
// SIG undefined FUN_1473236b2(void)

undefined8
FUN_1473236b2(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,byte param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((*(int *)(DAT_14ca61c68 + 4) != 0) &&
      (iVar1 = FUN_14078f954(), iVar1 < *(int *)(param_2 + 0x130))) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)iVar1 * 8) != 0)) {
    iVar1 = FUN_14078f954();
    if ((iVar1 < *(int *)(param_2 + 0x130)) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)iVar1 * 8), lVar2 != 0)) {
      lVar2 = lVar2 + 8;
    }
    else {
      lVar2 = 0;
    }
    if (param_4 == 1) {
      lVar3 = 0x10;
    }
    else {
      if (param_4 != 2) {
        return 0;
      }
      lVar3 = 0x18;
    }
    return *(undefined8 *)(lVar2 + (ulonglong)param_5 * 0x20 + lVar3);
  }
  return 0;
}



// FUNCTION 147323740 FUN_147323740 body=42 status=ok
// SIG undefined FUN_147323740(void)

void FUN_147323740(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14732378a FUN_14732378a body=96 status=ok
// SIG undefined FUN_14732378a(void)

undefined8 FUN_14732378a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f09948();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca63108,1);
  return uVar3;
}



// FUNCTION 1473237ea FUN_1473237ea body=52 status=ok
// SIG undefined FUN_1473237ea(void)

void FUN_1473237ea(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147323840 FUN_147323840 body=344 status=ok
// SIG undefined FUN_147323840(void)

undefined4 FUN_147323840(longlong param_1)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  float fVar4;
  
  if (DAT_14c75b13c != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x24) = DAT_14c75b13c;
    uVar2 = (**(code **)(*DAT_14ca83900 + 0x330))(DAT_14ca83900,0);
    dVar3 = (double)(float)((double)uVar2 * DAT_14c83f420 * 1000.0);
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 < 10) {
      dVar3 = dVar3 + *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x18) = dVar3;
      *(int *)(param_1 + 0x20) = iVar1 + 1;
      if (iVar1 + 1 != 10) goto LAB_147323853;
    }
    else {
      if (iVar1 != 10) goto LAB_147323853;
      dVar3 = dVar3 + *(double *)(param_1 + 0x18) / -10.0 + *(double *)(param_1 + 0x18);
      *(double *)(param_1 + 0x18) = dVar3;
    }
    if ((dVar3 / 10.0 <=
         *(double *)
          (&DAT_14a313450 +
          (ulonglong)
          ((&DAT_14ca814b8)
           [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0xf] == 1) * 8) +
         0.5) || (1.0 <= *(float *)(param_1 + 0x10))) {
      if ((*(double *)
            (&DAT_14a313450 +
            (ulonglong)
            ((&DAT_14ca814b8)
             [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 0xf] == 1) * 8)
           + -0.5 <= dVar3 / 10.0) || (*(float *)(param_1 + 0x10) <= 0.0)) goto LAB_147323853;
      fVar4 = *(float *)(param_1 + 0x10) + -0.1;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x10) + 0.1;
    }
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(param_1 + 0x10) = fVar4;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
LAB_147323853:
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 147323998 FUN_147323998 body=101 status=ok
// SIG undefined FUN_147323998(void)

bool FUN_147323998(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = DAT_14ca61f18;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  if ((*(int *)(lVar1 + uVar3 * 4) == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0x1000) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(longlong *)(DAT_14cb0d2b0 + 0xfd0) != 0;
  }
  return bVar4;
}



// FUNCTION 147323a02 FUN_147323a02 body=24 status=ok
// SIG undefined FUN_147323a02(void)

int FUN_147323a02(void)

{
  byte bVar1;
  
  bVar1 = FUN_147323998();
  return 2 - (uint)bVar1;
}



// FUNCTION 147323a33 FUN_147323a33 body=63 status=ok
// SIG undefined FUN_147323a33(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147323a33(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb0))();
  DAT_14ca84f31 = (undefined1)iVar1;
  DAT_14ca84f30 = DAT_14ca84f32;
  if (iVar1 == 0) {
    DAT_14ca84f30 = 0;
  }
  if (iVar1 != 0) {
    DAT_14ca84f31 = (undefined1)_DAT_14ca84f34;
  }
  if ((DAT_14ca84f32 & 1) != 0) {
    DAT_14ca63cf0 = 1;
  }
  return;
}



// FUNCTION 147323a72 FUN_147323a72 body=42 status=ok
// SIG undefined FUN_147323a72(void)

void FUN_147323a72(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147323abc FUN_147323abc body=96 status=ok
// SIG undefined FUN_147323abc(void)

undefined8 FUN_147323abc(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5dbae();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca63190,1);
  return uVar3;
}



// FUNCTION 147323b1c FUN_147323b1c body=52 status=ok
// SIG undefined FUN_147323b1c(void)

void FUN_147323b1c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147323b50 FUN_147323b50 body=42 status=ok
// SIG undefined FUN_147323b50(void)

void FUN_147323b50(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147323b9a FUN_147323b9a body=96 status=ok
// SIG undefined FUN_147323b9a(void)

undefined8 FUN_147323b9a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e5e118();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca63218,1);
  return uVar3;
}



// FUNCTION 147323bfa FUN_147323bfa body=52 status=ok
// SIG undefined FUN_147323bfa(void)

void FUN_147323bfa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147323c2e FUN_147323c2e body=42 status=ok
// SIG undefined FUN_147323c2e(void)

void FUN_147323c2e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147323c78 FUN_147323c78 body=96 status=ok
// SIG undefined FUN_147323c78(void)

undefined8 FUN_147323c78(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145ed59c8();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca632a0,1);
  return uVar3;
}



// FUNCTION 147323cd8 FUN_147323cd8 body=52 status=ok
// SIG undefined FUN_147323cd8(void)

void FUN_147323cd8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147323d0c FUN_147323d0c body=27 status=ok
// SIG undefined FUN_147323d0c(void)

undefined8 FUN_147323d0c(void)

{
  if (DAT_14ca84f34 == '\x01') {
    return CONCAT71((int7)((ulonglong)DAT_14ca620d8 >> 8),*(int *)(DAT_14ca620d8 + 4) != 0);
  }
  return 0;
}



// FUNCTION 147323d28 FUN_147323d28 body=424 status=ok
// SIG undefined FUN_147323d28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147323d28(longlong param_1,longlong param_2,undefined8 param_3,uint param_4,
                       byte param_5)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 unaff_RBP;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined1 local_71;
  undefined1 local_70;
  undefined4 local_6f;
  undefined2 local_6b;
  undefined1 local_68;
  ulonglong local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca62578) {
    FUN_144b3d300(&DAT_14ca62578);
    if (DAT_14ca62578 == -1) {
      DAT_14ca62568 = (undefined8 *)0x0;
      _DAT_14ca62570 = 7;
      FUN_1447bda9e(&DAT_14ca62568,7,0);
      puVar1 = DAT_14ca62568;
      *(undefined8 *)((longlong)DAT_14ca62568 + 0xc) = 0x600000005;
      *(undefined8 *)((longlong)puVar1 + 0x14) = 0xa00000009;
      *puVar1 = 0x100000000;
      puVar1[1] = 0x500000004;
      atexit((_func_5014 *)&LAB_1430bc093);
      _Init_thread_footer(&DAT_14ca62578);
    }
  }
  uVar2 = 0;
  if (*(char *)(param_1 + 0x50 + (ulonglong)param_5) == '\x01') {
    FUN_140c8348a(&local_70,param_3,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff
                 );
    uVar2 = FUN_14472bf7a(param_2,&local_70,L"ForceShadingRateTexture",0);
    local_70 = *(undefined1 *)(uVar2 + 0x94);
    local_68 = 0;
    local_6f = 0;
    local_6b = 0;
    local_88 = &local_71;
    local_71 = 0;
    local_60 = uVar2;
    uVar3 = FUN_144a96e92(param_2 + 0x198,param_2 + 0x70,uVar2 + 8,&local_70);
    uVar4 = (uint)DAT_14ca84f33 * 3 + 3;
    if ((int)param_4 < (int)uVar4) {
      uVar4 = param_4;
    }
    uVar5 = (ulonglong)uVar4;
    if ((int)uVar4 < 1) {
      uVar5 = 0;
    }
    FUN_14742ba95(param_2,uVar3,*(undefined4 *)((longlong)DAT_14ca62568 + uVar5 * 4),2);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147323ed1 FUN_147323ed1 body=177 status=ok
// SIG undefined FUN_147323ed1(void)

void FUN_147323ed1(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e5dbae();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca63190,param_4);
  local_78 = &DAT_14ca63190;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147329ec4(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147323f84 FUN_147323f84 body=29 status=ok
// SIG undefined FUN_147323f84(void)

undefined8 FUN_147323f84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147323fa2 FUN_147323fa2 body=38 status=ok
// SIG undefined FUN_147323fa2(void)

undefined8 FUN_147323fa2(undefined8 param_1,int param_2)

{
  FUN_145af2480();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147323fc8 FUN_147323fc8 body=132 status=ok
// SIG undefined FUN_147323fc8(void)

undefined1 * FUN_147323fc8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClosureIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x31;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eb15b0;
}



// FUNCTION 14732404c FUN_14732404c body=138 status=ok
// SIG undefined FUN_14732404c(void)

code * FUN_14732404c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRealTimeUpdate";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473240d6;
}



// FUNCTION 1473240d6 FUN_1473240d6 body=132 status=ok
// SIG undefined FUN_1473240d6(void)

undefined1 * FUN_1473240d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eb1b26;
}



// FUNCTION 14732415a FUN_14732415a body=138 status=ok
// SIG undefined FUN_14732415a(void)

code * FUN_14732415a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxClosureCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c0000009a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473241e4;
}



// FUNCTION 1473241e4 FUN_1473241e4 body=138 status=ok
// SIG undefined FUN_1473241e4(void)

code * FUN_1473241e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaterialBufferAllocationMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f771b6;
}



// FUNCTION 14732426e FUN_14732426e body=138 status=ok
// SIG undefined FUN_14732426e(void)

code * FUN_14732426e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewsMaxClosurePerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f7712c;
}



// FUNCTION 1473242f8 FUN_1473242f8 body=138 status=ok
// SIG undefined FUN_1473242f8(void)

code * FUN_1473242f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectMaxClosurePerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147324382;
}



// FUNCTION 147324382 FUN_147324382 body=138 status=ok
// SIG undefined FUN_147324382(void)

code * FUN_147324382(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectMaxBytesPerPixel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732440c;
}



// FUNCTION 14732440c FUN_14732440c body=138 status=ok
// SIG undefined FUN_14732440c(void)

code * FUN_14732440c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bUseClosureCountFromMaterialData";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147324496;
}



// FUNCTION 147324496 FUN_147324496 body=138 status=ok
// SIG undefined FUN_147324496(void)

code * FUN_147324496(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bRoughRefraction";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147324520;
}



// FUNCTION 147324520 FUN_147324520 body=138 status=ok
// SIG undefined FUN_147324520(void)

code * FUN_147324520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Classification8bits";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473245aa;
}



// FUNCTION 1473245aa FUN_1473245aa body=138 status=ok
// SIG undefined FUN_1473245aa(void)

code * FUN_1473245aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClassificationAsync";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147324634;
}



// FUNCTION 147324634 FUN_147324634 body=138 status=ok
// SIG undefined FUN_147324634(void)

code * FUN_147324634(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClassificationCMask";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473246be;
}



// FUNCTION 1473246be FUN_1473246be body=138 status=ok
// SIG undefined FUN_1473246be(void)

code * FUN_1473246be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bDbufferPass";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147324748;
}



// FUNCTION 147324748 FUN_147324748 body=138 status=ok
// SIG undefined FUN_147324748(void)

code * FUN_147324748(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnergyPreservation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473247d2;
}



// FUNCTION 1473247d2 FUN_1473247d2 body=138 status=ok
// SIG undefined FUN_1473247d2(void)

code * FUN_1473247d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bEnergyConservation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732485c;
}



// FUNCTION 14732485c FUN_14732485c body=132 status=ok
// SIG undefined FUN_14732485c(void)

undefined1 * FUN_14732485c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bAdvancedDebugEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1473248e0;
}



// FUNCTION 1473248e4 FUN_1473248e4 body=132 status=ok
// SIG undefined FUN_1473248e4(void)

undefined1 * FUN_1473248e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOverrideCursorPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eba7f4;
}



// FUNCTION 147324968 FUN_147324968 body=177 status=ok
// SIG undefined FUN_147324968(void)

void FUN_147324968(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145eb13c6();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca62658,param_4);
  local_78 = &DAT_14ca62658;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147324a38(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147324a1a FUN_147324a1a body=29 status=ok
// SIG undefined FUN_147324a1a(void)

undefined8 FUN_147324a1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147324a38 FUN_147324a38 body=384 status=ok
// SIG undefined FUN_147324a38(void)

void FUN_147324a38(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca626a0;
  if (DAT_14ca626a0 != 0) {
    LOCK();
    *(int *)(DAT_14ca626a0 + 8) = *(int *)(DAT_14ca626a0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca62658;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a318660;
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



// FUNCTION 147324bba FUN_147324bba body=38 status=ok
// SIG undefined FUN_147324bba(void)

undefined8 FUN_147324bba(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147324be0 FUN_147324be0 body=163 status=ok
// SIG undefined FUN_147324be0(void)

void FUN_147324be0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430bc30a();
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
  FUN_1430bc3f2(param_1,param_2);
  return;
}



// FUNCTION 147324c83 FUN_147324c83 body=374 status=ok
// SIG undefined FUN_147324c83(void)

void FUN_147324c83(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147324dfa FUN_147324dfa body=248 status=ok
// SIG undefined FUN_147324dfa(void)

void FUN_147324dfa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145eb193c();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca626e0,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145eb193c();
  FUN_147324fc0(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147324ef4 FUN_147324ef4 body=174 status=ok
// SIG undefined FUN_147324ef4(void)

void FUN_147324ef4(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x80) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 (*) [16])(param_1 + 0xa0) = (undefined1  [16])0x0;
  lVar1 = 0xb0;
  do {
    *(undefined1 (*) [16])(param_1 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + 0x10 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x170);
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined1 (*) [16])(param_1 + 0x170) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0xffffffff;
  *(undefined4 *)(param_1 + 400) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined2 *)(param_1 + 0x19c) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  return;
}



// FUNCTION 147324fa2 FUN_147324fa2 body=29 status=ok
// SIG undefined FUN_147324fa2(void)

undefined8 FUN_147324fa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147324fc0 FUN_147324fc0 body=354 status=ok
// SIG undefined FUN_147324fc0(void)

void FUN_147324fc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  local_48 = DAT_14ca62728;
  if (DAT_14ca62728 != 0) {
    LOCK();
    *(int *)(DAT_14ca62728 + 8) = *(int *)(DAT_14ca62728 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca626e0;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a318680;
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



// FUNCTION 147325124 FUN_147325124 body=38 status=ok
// SIG undefined FUN_147325124(void)

undefined8 FUN_147325124(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14732514a FUN_14732514a body=177 status=ok
// SIG undefined FUN_14732514a(void)

void FUN_14732514a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145eba60a();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca627f0,param_4);
  local_78 = &DAT_14ca627f0;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_147325314(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473251fc FUN_1473251fc body=248 status=ok
// SIG undefined FUN_1473251fc(void)

void FUN_1473251fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145e772ae();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca62878,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145e772ae();
  FUN_147325790(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473252f6 FUN_1473252f6 body=29 status=ok
// SIG undefined FUN_1473252f6(void)

undefined8 FUN_1473252f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147325314 FUN_147325314 body=384 status=ok
// SIG undefined FUN_147325314(void)

void FUN_147325314(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca62838;
  if (DAT_14ca62838 != 0) {
    LOCK();
    *(int *)(DAT_14ca62838 + 8) = *(int *)(DAT_14ca62838 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca627f0;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a3186a0;
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



// FUNCTION 147325496 FUN_147325496 body=38 status=ok
// SIG undefined FUN_147325496(void)

undefined8 FUN_147325496(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473254bc FUN_1473254bc body=163 status=ok
// SIG undefined FUN_1473254bc(void)

void FUN_1473254bc(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430bcbb2();
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
  FUN_1430bcc9a(param_1,param_2);
  return;
}



// FUNCTION 14732555f FUN_14732555f body=374 status=ok
// SIG undefined FUN_14732555f(void)

void FUN_14732555f(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1473256d6 FUN_1473256d6 body=155 status=ok
// SIG undefined FUN_1473256d6(void)

void FUN_1473256d6(longlong param_1)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x58) = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f80000000000000;
  lVar1 = 0xa2;
  do {
    *(undefined1 (*) [16])(param_1 + -0x12 + lVar1) = (undefined1  [16])0x0;
    *(undefined4 *)(param_1 + -2 + lVar1) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x162);
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined1 (*) [16])(param_1 + 0x150) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  return;
}



// FUNCTION 147325772 FUN_147325772 body=29 status=ok
// SIG undefined FUN_147325772(void)

undefined8 FUN_147325772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147325790 FUN_147325790 body=354 status=ok
// SIG undefined FUN_147325790(void)

void FUN_147325790(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  local_48 = DAT_14ca628c0;
  if (DAT_14ca628c0 != 0) {
    LOCK();
    *(int *)(DAT_14ca628c0 + 8) = *(int *)(DAT_14ca628c0 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca62878;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a3186c0;
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



// FUNCTION 1473258f4 FUN_1473258f4 body=38 status=ok
// SIG undefined FUN_1473258f4(void)

undefined8 FUN_1473258f4(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14732591a FUN_14732591a body=177 status=ok
// SIG undefined FUN_14732591a(void)

void FUN_14732591a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f77026();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca62768,param_4);
  local_78 = &DAT_14ca62768;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_1473259ea(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1473259cc FUN_1473259cc body=29 status=ok
// SIG undefined FUN_1473259cc(void)

undefined8 FUN_1473259cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473259ea FUN_1473259ea body=384 status=ok
// SIG undefined FUN_1473259ea(void)

void FUN_1473259ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  local_50 = DAT_14ca627b0;
  if (DAT_14ca627b0 != 0) {
    LOCK();
    *(int *)(DAT_14ca627b0 + 8) = *(int *)(DAT_14ca627b0 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca62768;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar14);
  *puVar16 = &PTR_FUN_14a3186e0;
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



// FUNCTION 147325b6c FUN_147325b6c body=38 status=ok
// SIG undefined FUN_147325b6c(void)

undefined8 FUN_147325b6c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147325b92 FUN_147325b92 body=163 status=ok
// SIG undefined FUN_147325b92(void)

void FUN_147325b92(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1430bd45a();
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
  FUN_1430bd542(param_1,param_2);
  return;
}



// FUNCTION 147325c35 FUN_147325c35 body=374 status=ok
// SIG undefined FUN_147325c35(void)

void FUN_147325c35(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147325dac FUN_147325dac body=138 status=ok
// SIG undefined FUN_147325dac(void)

code * FUN_147325dac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConditionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e462e2;
}



// FUNCTION 147325e3a FUN_147325e3a body=138 status=ok
// SIG undefined FUN_147325e3a(void)

code * FUN_147325e3a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bClampToNearPlane";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147325ec4;
}



// FUNCTION 147325ec4 FUN_147325ec4 body=138 status=ok
// SIG undefined FUN_147325ec4(void)

code * FUN_147325ec4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ProjectionMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e9f972;
}



// FUNCTION 147325f4e FUN_147325f4e body=138 status=ok
// SIG undefined FUN_147325f4e(void)

code * FUN_147325f4e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TexelSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000002a3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147325fd8;
}



// FUNCTION 147325fd8 FUN_147325fd8 body=138 status=ok
// SIG undefined FUN_147325fd8(void)

code * FUN_147325fd8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucencyLightingVolumeDirectionalSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000002a2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5cee4;
}



// FUNCTION 147326062 FUN_147326062 body=138 status=ok
// SIG undefined FUN_147326062(void)

code * FUN_147326062(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"AtmospherePerPixelTransmittanceEnabled";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c8000002c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473260ec;
}



// FUNCTION 1473260ec FUN_1473260ec body=138 status=ok
// SIG undefined FUN_1473260ec(void)

code * FUN_1473260ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualShadowMapId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c4000002c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3a170;
}



// FUNCTION 147326176 FUN_147326176 body=138 status=ok
// SIG undefined FUN_147326176(void)

code * FUN_147326176(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CameraRelativeLightPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3b0000002bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326200;
}



// FUNCTION 147326200 FUN_147326200 body=138 status=ok
// SIG undefined FUN_147326200(void)

code * FUN_147326200(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3a0000002bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732628a;
}



// FUNCTION 14732628a FUN_14732628a body=138 status=ok
// SIG undefined FUN_14732628a(void)

code * FUN_14732628a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LightFunctionTranslatedWorldToLight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x360000002bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e3a1fa;
}



// FUNCTION 147326318 FUN_147326318 body=138 status=ok
// SIG undefined FUN_147326318(void)

code * FUN_147326318(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VolumeCascadeIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3c00000319;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1d826;
}



// FUNCTION 1473263a6 FUN_1473263a6 body=132 status=ok
// SIG undefined FUN_1473263a6(void)

undefined1 * FUN_1473263a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWAmbient0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x346;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5d19c;
}



// FUNCTION 14732642a FUN_14732642a body=138 status=ok
// SIG undefined FUN_14732642a(void)

code * FUN_14732642a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleLightColorAndExponent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000617;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473264b4;
}



// FUNCTION 1473264b4 FUN_1473264b4 body=138 status=ok
// SIG undefined FUN_1473264b4(void)

code * FUN_1473264b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimpleLightPositionAndRadius";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000616;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e4b2d0;
}



// FUNCTION 14732653e FUN_14732653e body=138 status=ok
// SIG undefined FUN_14732653e(void)

code * FUN_14732653e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TranslucentHoldoutPointSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000234;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e97dda;
}



// FUNCTION 1473265c8 FUN_1473265c8 body=138 status=ok
// SIG undefined FUN_1473265c8(void)

code * FUN_1473265c8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd800000274;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326652;
}



// FUNCTION 147326652 FUN_147326652 body=138 status=ok
// SIG undefined FUN_147326652(void)

code * FUN_147326652(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000273;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630f67a;
}



// FUNCTION 1473266dc FUN_1473266dc body=138 status=ok
// SIG undefined FUN_1473266dc(void)

code * FUN_1473266dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FullResDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000270;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326766;
}



// FUNCTION 147326766 FUN_147326766 body=138 status=ok
// SIG undefined FUN_147326766(void)

code * FUN_147326766(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LowResDepthSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb80000026e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473267f0;
}



// FUNCTION 1473267f0 FUN_1473267f0 body=138 status=ok
// SIG undefined FUN_1473267f0(void)

code * FUN_1473267f0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LowResDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000026d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732687a;
}



// FUNCTION 14732687a FUN_14732687a body=138 status=ok
// SIG undefined FUN_14732687a(void)

code * FUN_14732687a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateModulationBilinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000026b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326904;
}



// FUNCTION 147326904 FUN_147326904 body=138 status=ok
// SIG undefined FUN_147326904(void)

code * FUN_147326904(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateModulationBilinearTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000026a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732698e;
}



// FUNCTION 14732698e FUN_14732698e body=138 status=ok
// SIG undefined FUN_14732698e(void)

code * FUN_14732698e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyBilinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000269;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326a18;
}



// FUNCTION 147326a18 FUN_147326a18 body=138 status=ok
// SIG undefined FUN_147326a18(void)

code * FUN_147326a18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyBilinearTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000268;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1db98;
}



// FUNCTION 147326aa2 FUN_147326aa2 body=138 status=ok
// SIG undefined FUN_147326aa2(void)

code * FUN_147326aa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateModulationPointTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000265;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326b2c;
}



// FUNCTION 147326b2c FUN_147326b2c body=138 status=ok
// SIG undefined FUN_147326b2c(void)

code * FUN_147326b2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyPointSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000264;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1dc22;
}



// FUNCTION 147326bb6 FUN_147326bb6 body=138 status=ok
// SIG undefined FUN_147326bb6(void)

code * FUN_147326bb6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000260;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326c40;
}



// FUNCTION 147326c40 FUN_147326c40 body=138 status=ok
// SIG undefined FUN_147326c40(void)

code * FUN_147326c40(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bPassthroughAlpha";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c0000025e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326cca;
}



// FUNCTION 147326cca FUN_147326cca body=138 status=ok
// SIG undefined FUN_147326cca(void)

code * FUN_147326cca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bLensDistortion";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000025d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326d54;
}



// FUNCTION 147326d54 FUN_147326d54 body=138 status=ok
// SIG undefined FUN_147326d54(void)

code * FUN_147326d54(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000025c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326dde;
}



// FUNCTION 147326dde FUN_147326dde body=138 status=ok
// SIG undefined FUN_147326dde(void)

code * FUN_147326dde(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyUVMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000025b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326e68;
}



// FUNCTION 147326e68 FUN_147326e68 body=138 status=ok
// SIG undefined FUN_147326e68(void)

code * FUN_147326e68(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SeparateTranslucencyUVMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000025a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147326ef2;
}



// FUNCTION 147326ef2 FUN_147326ef2 body=138 status=ok
// SIG undefined FUN_147326ef2(void)

code * FUN_147326ef2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewportUVToSeparateTranslucencyUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000259;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14630f702;
}



// FUNCTION 147326f7c FUN_147326f7c body=138 status=ok
// SIG undefined FUN_147326f7c(void)

code * FUN_147326f7c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPosToSeparateTranslucencyUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000257;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327006;
}



// FUNCTION 147327006 FUN_147327006 body=132 status=ok
// SIG undefined FUN_147327006(void)

undefined1 * FUN_147327006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenPosToSceneColorUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x256;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14732708a;
}



// FUNCTION 14732708e FUN_14732708e body=138 status=ok
// SIG undefined FUN_14732708e(void)

code * FUN_14732708e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000028a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e77a92;
}



// FUNCTION 147327118 FUN_147327118 body=138 status=ok
// SIG undefined FUN_147327118(void)

code * FUN_147327118(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToStencilPixelCoord";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000288;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e77a0a;
}



// FUNCTION 1473271a2 FUN_1473271a2 body=132 status=ok
// SIG undefined FUN_1473271a2(void)

undefined1 * FUN_1473271a2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StencilPixelPosMin";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x286;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e77a06;
}



// FUNCTION 147327226 FUN_147327226 body=248 status=ok
// SIG undefined FUN_147327226(void)

void FUN_147327226(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_145e97bec();
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_1448f70da(*param_4,&DAT_14ca62dc8,param_5,&local_b8);
  local_b8 = param_5;
  local_a8 = *(undefined4 *)param_4;
  uStack_a4 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_a0 = *(undefined4 *)(param_4 + 1);
  uStack_9c = *(undefined4 *)((longlong)param_4 + 0xc);
  local_98 = *param_6;
  local_90 = param_6[1];
  local_88 = param_7;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_b0 = param_2;
  FUN_145e97bec();
  FUN_14732733e(param_1,param_3,param_5,&local_b8);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147327320 FUN_147327320 body=29 status=ok
// SIG undefined FUN_147327320(void)

undefined8 FUN_147327320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14732733e FUN_14732733e body=354 status=ok
// SIG undefined FUN_14732733e(void)

void FUN_14732733e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

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
  local_48 = DAT_14ca62e10;
  if (DAT_14ca62e10 != 0) {
    LOCK();
    *(int *)(DAT_14ca62e10 + 8) = *(int *)(DAT_14ca62e10 + 8) + 1;
    UNLOCK();
  }
  local_40 = &DAT_14ca62dc8;
  local_58 = 2;
  local_50 = param_3;
  FUN_140068f1a(puVar14,param_2,&local_50,1);
  *puVar14 = &PTR_FUN_14a319010;
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



// FUNCTION 1473274a2 FUN_1473274a2 body=38 status=ok
// SIG undefined FUN_1473274a2(void)

undefined8 FUN_1473274a2(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473274c8 FUN_1473274c8 body=29 status=ok
// SIG undefined FUN_1473274c8(void)

undefined8 FUN_1473274c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473274e6 FUN_1473274e6 body=138 status=ok
// SIG undefined FUN_1473274e6(void)

code * FUN_1473274e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConservativeEdgeThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5d8b6;
}



// FUNCTION 147327570 FUN_147327570 body=132 status=ok
// SIG undefined FUN_147327570(void)

undefined1 * FUN_147327570(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x52;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145e5d828;
}



// FUNCTION 1473275f4 FUN_1473275f4 body=138 status=ok
// SIG undefined FUN_1473275f4(void)

code * FUN_1473275f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaledSRITexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000099;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732767e;
}



// FUNCTION 14732767e FUN_14732767e body=138 status=ok
// SIG undefined FUN_14732767e(void)

code * FUN_14732767e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvDynamicResolutionScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000098;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327708;
}



// FUNCTION 147327708 FUN_147327708 body=138 status=ok
// SIG undefined FUN_147327708(void)

code * FUN_147327708(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScaledUVOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e77d4e;
}



// FUNCTION 147327792 FUN_147327792 body=138 status=ok
// SIG undefined FUN_147327792(void)

code * FUN_147327792(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSRIDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732781c;
}



// FUNCTION 14732781c FUN_14732781c body=138 status=ok
// SIG undefined FUN_14732781c(void)

code * FUN_14732781c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InvTextureDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000094;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473278a6;
}



// FUNCTION 1473278a6 FUN_1473278a6 body=138 status=ok
// SIG undefined FUN_1473278a6(void)

code * FUN_1473278a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327930;
}



// FUNCTION 147327930 FUN_147327930 body=138 status=ok
// SIG undefined FUN_147327930(void)

code * FUN_147327930(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSRITexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e77dd6;
}



// FUNCTION 1473279ba FUN_1473279ba body=138 status=ok
// SIG undefined FUN_1473279ba(void)

code * FUN_1473279ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FoveationHalfRateCutoffSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327a44;
}



// FUNCTION 147327a44 FUN_147327a44 body=138 status=ok
// SIG undefined FUN_147327a44(void)

code * FUN_147327a44(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FoveationFullRateCutoffSquared";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2400000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147327ace;
}



// FUNCTION 147327ace FUN_147327ace body=138 status=ok
// SIG undefined FUN_147327ace(void)

code * FUN_147327ace(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewDiagonalSquaredInPixels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f09bb6;
}



// FUNCTION 147327b58 FUN_147327b58 body=138 status=ok
// SIG undefined FUN_147327b58(void)

code * FUN_147327b58(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HMDFieldOfView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f09b32;
}



// FUNCTION 147327be6 FUN_147327be6 body=138 status=ok
// SIG undefined FUN_147327be6(void)

code * FUN_147327be6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DynamicResolutionScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e5e38a;
}



// FUNCTION 147327c70 FUN_147327c70 body=29 status=ok
// SIG undefined FUN_147327c70(void)

undefined8 FUN_147327c70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147327c8e FUN_147327c8e body=173 status=ok
// SIG undefined FUN_147327c8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147327c8e(void)

{
  _DAT_14ca63b18 = 0xffffffff;
  _DAT_14ca63b1c = 0x105;
  DAT_14ca63b1e = 0;
  DAT_14ca63b10 = &PTR_FUN_14a31a220;
  memset(&DAT_14ca63b20,0,0x110);
  _DAT_14ca63c30 = 5;
  DAT_14ca63c34 = 0;
  _DAT_14ca63c38 = 0;
  uRam000000014ca63c40 = 0;
  DAT_14ca63c48 = 0;
  _DAT_14ca63c50 = 0;
  _DAT_14ca63c58 = 0x400;
  _DAT_14ca63c60 = 0;
  _DAT_14ca63c68 = &DAT_14c7585e0;
  _DAT_14ca63c70 = 0;
  _DAT_14ca63c78 = 0x400;
  DAT_14ca63c80 = 0;
  DAT_14ca63c88 = &DAT_14c7585e0;
  DAT_14ca63c90 = 0;
  return;
}



// FUNCTION 147327d3c FUN_147327d3c body=56 status=ok
// SIG undefined FUN_147327d3c(void)

undefined8 * FUN_147327d3c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a31a1f0;
  FUN_144725486();
  FUN_14630ff64(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147327d74 FUN_147327d74 body=38 status=ok
// SIG undefined FUN_147327d74(void)

undefined8 FUN_147327d74(undefined8 param_1,int param_2)

{
  FUN_14630ff64();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1473284cc FUN_1473284cc body=405 status=ok
// SIG undefined FUN_1473284cc(void)

void FUN_1473284cc(int *param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_68 [36];
  uint local_44 [6];
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c[0] = *param_2;
  local_2c[1] = param_2[1];
  local_2c[2] = param_2[2];
  lVar2 = 0;
  do {
    fVar1 = local_2c[lVar2];
    uVar6 = (uint)fVar1 & 0x7fffff;
    uVar3 = (uint)fVar1 & 0x7f800000;
    uVar7 = (uint)(uVar6 == 0 || uVar3 != 0) << 0x17 | uVar6;
    local_44[lVar2 + 3] = uVar7;
    uVar4 = (uint)fVar1 >> 0x17 & 0xff;
    uVar5 = uVar4 - 0x7f;
    local_44[lVar2] = uVar5;
    if (uVar6 == 0 || uVar3 != 0) {
      uVar5 = uVar4 - 0x7e;
      local_44[lVar2] = uVar5;
      local_44[lVar2 + 3] = uVar7 >> 1;
    }
    uVar7 = 0xfffffff1;
    uVar4 = 0;
    if (((uVar3 == 0x7f800000 && uVar6 != 0) || (uVar4 = 0, fVar1 < 0.0)) ||
       (uVar4 = 0, fVar1 != 0.0 && (int)uVar5 < -0xf)) {
LAB_1473285b7:
      local_44[lVar2] = uVar7;
      local_44[lVar2 + 3] = uVar4;
    }
    else if (0xf < (int)uVar5) {
      uVar4 = 0x7fffff;
      uVar7 = 0x10;
      goto LAB_1473285b7;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 3) {
      if ((int)local_44[1] < (int)local_44[2]) {
        local_44[1] = local_44[2];
      }
      if ((int)local_44[1] <= (int)local_44[0]) {
        local_44[1] = local_44[0];
      }
      lVar2 = 0;
      do {
        local_44[lVar2 + 3] =
             (local_44[lVar2 + 3] >> ((char)local_44[1] - (char)local_44[lVar2] & 0x1fU)) >> 0xe;
        lVar2 = lVar2 + 1;
      } while (lVar2 != 3);
      *param_1 = ((local_44[4] & 0x1ff) << 9 | (local_44[5] & 0x1ff) << 0x12 | local_44[1] << 0x1b)
                 + (local_44[3] & 0x1ff) + 0x78000000;
      if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 147328662 FUN_147328662 body=870 status=ok
// SIG undefined FUN_147328662(void)

void FUN_147328662(float *param_1,undefined1 param_2,float *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  float fVar4;
  undefined1 auStack_58 [36];
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
  case 0x17:
  case 0x18:
  case 0x1e:
  case 0x1f:
  case 0x24:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x3b:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
    *param_4 = 0;
    goto switchD_147328697_default;
  case 1:
    *param_3 = (float)(uint)param_1[3];
    param_3[1] = (float)(uint)param_1[2];
    param_3[2] = (float)(uint)param_1[1];
    param_3[3] = (float)(uint)*param_1;
    goto LAB_14732888b;
  case 2:
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 2);
    *(undefined1 *)((longlong)param_3 + 1) = *(undefined1 *)(param_1 + 1);
    uVar1 = *(undefined1 *)param_1;
    goto LAB_1473288a3;
  case 3:
  case 0x19:
  case 0x1b:
  case 0x39:
  case 0x3a:
  case 0x47:
  case 0x53:
    *(undefined1 *)param_3 = *(undefined1 *)param_1;
    break;
  case 4:
  case 0x20:
  case 0x21:
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
    break;
  case 9:
  case 0x1a:
    *param_3 = (float)((int)param_1[2] << 0x16 |
                      ((uint)param_1[1] & 0x7ff) << 0xb | (uint)*param_1 & 0x7ff);
    break;
  case 10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0xb:
  case 0xd:
  case 0x14:
    *param_3 = (float)(uint)*param_1;
    break;
  case 0xc:
  case 0x15:
  case 0x16:
    fVar4 = (float)(uint)*param_1;
    if ((uint)fVar4 < 0x47800000) {
      if ((uint)fVar4 < 0x38800000) {
        sVar3 = SUB42(fVar4 + 0.5,0);
      }
      else {
        sVar3 = (short)((int)fVar4 + 0x8000fff + (uint)(((uint)fVar4 >> 0xd & 1) != 0) >> 0xd);
      }
    }
    else {
      sVar3 = (0x7f800000 < (uint)fVar4 | 0x3e) << 9;
    }
    *(short *)param_3 = sVar3;
    break;
  case 0xe:
  case 0x4e:
    *(undefined2 *)param_3 = *(undefined2 *)(param_1 + 1);
    uVar2 = *(undefined2 *)param_1;
    goto LAB_1473286a9;
  case 0xf:
  case 0x10:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  case 0x11:
    *param_3 = (float)(uint)param_1[1];
    param_3[1] = (float)(uint)*param_1;
    goto LAB_1473289bb;
  case 0x12:
    fVar4 = (float)((int)param_1[3] << 0x1e |
                   ((uint)param_1[2] & 0x3ff) << 0x14 |
                   ((uint)param_1[1] & 0x3ff) << 10 | (uint)*param_1 & 0x3ff);
    goto LAB_14732869b;
  case 0x13:
    *(undefined2 *)param_3 = *(undefined2 *)(param_1 + 3);
    *(undefined2 *)((longlong)param_3 + 2) = *(undefined2 *)(param_1 + 2);
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 1);
    uVar2 = *(undefined2 *)param_1;
    goto LAB_1473289b7;
  case 0x1c:
  case 0x1d:
    fVar4 = *param_1;
LAB_14732869b:
    *param_3 = fVar4;
    break;
  case 0x22:
  case 0x23:
  case 0x3e:
  case 0x3f:
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
    *(undefined2 *)((longlong)param_3 + 2) = *(undefined2 *)(param_1 + 1);
    *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 2);
    uVar2 = *(undefined2 *)(param_1 + 3);
LAB_1473289b7:
    *(undefined2 *)((longlong)param_3 + 6) = uVar2;
    goto LAB_1473289bb;
  case 0x25:
  case 0x3c:
  case 0x3d:
    *(undefined1 *)param_3 = *(undefined1 *)param_1;
    *(undefined1 *)((longlong)param_3 + 1) = *(undefined1 *)(param_1 + 1);
    uVar1 = *(undefined1 *)(param_1 + 2);
LAB_1473288a3:
    *(undefined1 *)((longlong)param_3 + 2) = uVar1;
    uVar1 = *(undefined1 *)(param_1 + 3);
LAB_1473288a9:
    *(undefined1 *)((longlong)param_3 + 3) = uVar1;
    break;
  case 0x26:
    *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 3);
    *(undefined1 *)((longlong)param_3 + 1) = *(undefined1 *)(param_1 + 2);
    *(undefined1 *)((longlong)param_3 + 2) = *(undefined1 *)(param_1 + 1);
    uVar1 = *(undefined1 *)param_1;
    goto LAB_1473288a9;
  case 0x28:
  case 0x4f:
    *(undefined1 *)param_3 = *(undefined1 *)param_1;
    *(undefined1 *)((longlong)param_3 + 1) = *(undefined1 *)(param_1 + 1);
    goto LAB_14732879b;
  case 0x30:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    param_3[3] = param_1[3];
LAB_14732888b:
    *param_4 = 0x10;
    goto switchD_147328697_default;
  case 0x31:
  case 0x5c:
    *(undefined2 *)param_3 = *(undefined2 *)param_1;
    uVar2 = *(undefined2 *)(param_1 + 1);
LAB_1473286a9:
    *(undefined2 *)((longlong)param_3 + 2) = uVar2;
    break;
  case 0x44:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
LAB_1473289bb:
    *param_4 = 8;
    goto switchD_147328697_default;
  case 0x48:
    *(ushort *)param_3 =
         SUB42(param_1[3],0) & 1 |
         (ushort)((int)param_1[2] << 0xb) |
         (short)(((uint)param_1[1] & 0x1f) << 6) + (SUB42(*param_1,0) & 0x1f) * 2;
LAB_14732879b:
    *param_4 = 2;
    goto switchD_147328697_default;
  case 0x50:
  case 0x51:
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    goto LAB_1473287e3;
  case 0x52:
    *param_3 = (float)(uint)*param_1;
    param_3[1] = (float)(uint)param_1[1];
    param_3[2] = (float)(uint)param_1[2];
LAB_1473287e3:
    *param_4 = 0xc;
    goto switchD_147328697_default;
  case 0x54:
    *(ulonglong *)param_3 = (ulonglong)(uint)*param_1;
    break;
  case 0x55:
    local_2c = (float)(uint)param_1[2];
    local_30 = (float)(uint)param_1[1];
    local_34 = (float)(uint)*param_1;
    local_28 = 0x3f800000;
    FUN_1473284cc(&local_24);
    *param_4 = 4;
    *param_3 = local_24;
  default:
    goto switchD_147328697_default;
  }
  *param_4 = 4;
switchD_147328697_default:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147328c28 FUN_147328c28 body=54 status=ok
// SIG undefined FUN_147328c28(void)

void FUN_147328c28(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147328c62 FUN_147328c62 body=54 status=ok
// SIG undefined FUN_147328c62(void)

void FUN_147328c62(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae((longlong)param_1 + 0xe0);
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147328c9c FUN_147328c9c body=29 status=ok
// SIG undefined FUN_147328c9c(void)

undefined8 FUN_147328c9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147328cba FUN_147328cba body=231 status=ok
// SIG undefined FUN_147328cba(void)

undefined8 *
FUN_147328cba(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_145e9f768();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca609a8;
  puVar6[4] = DAT_14ca609a8;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca60960;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a31a448;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 147328da2 FUN_147328da2 body=38 status=ok
// SIG undefined FUN_147328da2(void)

undefined8 FUN_147328da2(undefined8 param_1,int param_2)

{
  FUN_144ada7d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147328dc8 FUN_147328dc8 body=163 status=ok
// SIG undefined FUN_147328dc8(void)

void FUN_147328dc8(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 4;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 8;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  lVar1 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)param_1 + lVar1 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)param_1 + lVar1 + -2) = 0xffff0000;
    lVar1 = lVar1 + 0x18;
  } while (lVar1 != 0x152);
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  return;
}



// FUNCTION 147328e6c FUN_147328e6c body=29 status=ok
// SIG undefined FUN_147328e6c(void)

undefined8 FUN_147328e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147328e8a FUN_147328e8a body=258 status=ok
// SIG undefined FUN_147328e8a(void)

void FUN_147328e8a(void)

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
              0x110) < DAT_14ca63778) {
    FUN_144b3d300(&DAT_14ca63778);
    if (DAT_14ca63778 == -1) {
      FUN_147328f8e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FTranslucencyDepthPassParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x21c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca636f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430c556c);
      _Init_thread_footer(&DAT_14ca63778);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147328f8e FUN_147328f8e body=226 status=ok
// SIG undefined FUN_147328f8e(void)

longlong * FUN_147328f8e(longlong *param_1)

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
  pcVar13 = FUN_147329072;
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



// FUNCTION 147329072 FUN_147329072 body=136 status=ok
// SIG undefined FUN_147329072(void)

code * FUN_147329072(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000220;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1473290fa;
}



// FUNCTION 1473290fa FUN_1473290fa body=142 status=ok
// SIG undefined FUN_1473290fa(void)

code * FUN_1473290fa(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x200000021f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147329188;
}



// FUNCTION 147329188 FUN_147329188 body=144 status=ok
// SIG undefined FUN_147329188(void)

code * FUN_147329188(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145e9f768();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PassUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FTranslucencyDepthPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000021e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca60960;
  return FUN_147329218;
}



// FUNCTION 147329218 FUN_147329218 body=136 status=ok
// SIG undefined FUN_147329218(void)

undefined1 * FUN_147329218(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x21d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1473292a0;
}



// FUNCTION 1473292a4 FUN_1473292a4 body=58 status=ok
// SIG undefined FUN_1473292a4(void)

void FUN_1473292a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1473292de(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  if (iVar1 == *(int *)(param_1 + 0x1c)) {
    return;
  }
  *(int *)(param_1 + 0x1c) = iVar1;
  FUN_14714d07a(param_1,*(undefined4 *)(param_1 + 0x18),iVar1,8);
  return;
}



// FUNCTION 1473292de FUN_1473292de body=108 status=ok
// SIG undefined FUN_1473292de(void)

ulonglong FUN_1473292de(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 2;
  if (2 < param_1) {
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



// FUNCTION 14732934a FUN_14732934a body=38 status=ok
// SIG undefined FUN_14732934a(void)

undefined8 FUN_14732934a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147329370 FUN_147329370 body=219 status=ok
// SIG undefined FUN_147329370(void)

void FUN_147329370(longlong param_1,ulonglong *param_2)

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
  FUN_1430c5598(param_1,param_2);
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


