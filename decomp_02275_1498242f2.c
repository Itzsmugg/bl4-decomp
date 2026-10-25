// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1498242f2 FUN_1498242f2 body=383 status=ok
// SIG undefined FUN_1498242f2(void)

void FUN_1498242f2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea90e0;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149824472 FUN_149824472 body=38 status=ok
// SIG undefined FUN_149824472(void)

undefined8 FUN_149824472(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149824498 FUN_149824498 body=152 status=ok
// SIG undefined FUN_149824498(void)

void FUN_149824498(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144658cd1();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_144658db6(param_1,param_2);
  return;
}



// FUNCTION 149824530 FUN_149824530 body=374 status=ok
// SIG undefined FUN_149824530(void)

void FUN_149824530(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1498246a6 FUN_1498246a6 body=29 status=ok
// SIG undefined FUN_1498246a6(void)

undefined8 FUN_1498246a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498246c4 FUN_1498246c4 body=314 status=ok
// SIG undefined FUN_1498246c4(void)

void FUN_1498246c4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x200000001;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar1 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_input_color_jittered_14bea9120;
  puVar5 = &DAT_14bea9118;
  uVar2 = 0;
  do {
    *puVar1 = (int)uVar2;
    puVar1[2] = *puVar5;
    wcsncpy((wchar_t *)(puVar1 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar1 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar5 = puVar5 + 1;
    puVar1 = puVar1 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar4 = (undefined2 *)(param_3 + 0xcc);
    uVar2 = 0;
    do {
      *(int *)(puVar4 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar4 + -0x40) = 0x23;
      wcsncpy(puVar4 + -0x3e,L"rw_output_autoreactive",0x3e);
      *puVar4 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar1 = (undefined4 *)(param_3 + 0x8c44);
    uVar2 = 0;
    do {
      *puVar1 = (int)uVar2;
      puVar1[2] = 3;
      wcsncpy((wchar_t *)(puVar1 + 3),L"cbGenerateReactive",0x3e);
      *(undefined2 *)(puVar1 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 1498247fe FUN_1498247fe body=181 status=ok
// SIG undefined FUN_1498247fe(void)

undefined4 * FUN_1498247fe(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_146097652();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29898,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_146097652();
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



// FUNCTION 1498248b4 FUN_1498248b4 body=383 status=ok
// SIG undefined FUN_1498248b4(void)

void FUN_1498248b4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea9130;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149824a34 FUN_149824a34 body=38 status=ok
// SIG undefined FUN_149824a34(void)

undefined8 FUN_149824a34(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149824a5a FUN_149824a5a body=152 status=ok
// SIG undefined FUN_149824a5a(void)

void FUN_149824a5a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1446591ad();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_144659292(param_1,param_2);
  return;
}



// FUNCTION 149824af2 FUN_149824af2 body=374 status=ok
// SIG undefined FUN_149824af2(void)

void FUN_149824af2(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149824c68 FUN_149824c68 body=29 status=ok
// SIG undefined FUN_149824c68(void)

undefined8 FUN_149824c68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149824c86 FUN_149824c86 body=326 status=ok
// SIG undefined FUN_149824c86(void)

void FUN_149824c86(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x700000002;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_input_exposure_14bea9190;
  puVar4 = &DAT_14bea9170;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_luma_history_14bea91d0;
    puVar5 = &DAT_14bea91c8;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = 0;
      wcsncpy((wchar_t *)(puVar5 + 3),L"cbFSR3Upscaler",0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 149824dcc FUN_149824dcc body=181 status=ok
// SIG undefined FUN_149824dcc(void)

undefined4 * FUN_149824dcc(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_146097b2e();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29ae8,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_146097b2e();
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



// FUNCTION 149824e82 FUN_149824e82 body=383 status=ok
// SIG undefined FUN_149824e82(void)

void FUN_149824e82(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea91e0;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149825002 FUN_149825002 body=38 status=ok
// SIG undefined FUN_149825002(void)

undefined8 FUN_149825002(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149825028 FUN_149825028 body=152 status=ok
// SIG undefined FUN_149825028(void)

void FUN_149825028(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144659689();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465976e(param_1,param_2);
  return;
}



// FUNCTION 1498250c0 FUN_1498250c0 body=374 status=ok
// SIG undefined FUN_1498250c0(void)

void FUN_1498250c0(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149825236 FUN_149825236 body=29 status=ok
// SIG undefined FUN_149825236(void)

undefined8 FUN_149825236(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149825254 FUN_149825254 body=338 status=ok
// SIG undefined FUN_149825254(void)

void FUN_149825254(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x200000009;
  *(undefined4 *)(param_3 + 0x40) = 2;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_current_luma_14bea9220;
  puVar4 = &DAT_14bea9218;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_spd_global_atomic_14bea9260;
    puVar5 = &DAT_14bea9230;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    ppuVar3 = &PTR_u_cbFSR3Upscaler_14bea95f0;
    puVar4 = &DAT_14bea95e8;
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = *puVar4;
      wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 1498253a6 FUN_1498253a6 body=181 status=ok
// SIG undefined FUN_1498253a6(void)

undefined4 * FUN_1498253a6(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_146097d9c();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29c10,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_146097d9c();
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



// FUNCTION 14982545c FUN_14982545c body=383 status=ok
// SIG undefined FUN_14982545c(void)

void FUN_14982545c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea92b0;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498255dc FUN_1498255dc body=38 status=ok
// SIG undefined FUN_1498255dc(void)

undefined8 FUN_1498255dc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149825602 FUN_149825602 body=152 status=ok
// SIG undefined FUN_149825602(void)

void FUN_149825602(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_144659b65();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_144659c4a(param_1,param_2);
  return;
}



// FUNCTION 14982569a FUN_14982569a body=374 status=ok
// SIG undefined FUN_14982569a(void)

void FUN_14982569a(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149825810 FUN_149825810 body=29 status=ok
// SIG undefined FUN_149825810(void)

undefined8 FUN_149825810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982582e FUN_14982582e body=326 status=ok
// SIG undefined FUN_14982582e(void)

void FUN_14982582e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x300000005;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_input_motion_vectors_14bea9300;
  puVar4 = &DAT_14bea92e8;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_dilated_motion_vectors_14bea9340;
    puVar5 = &DAT_14bea9320;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = 0;
      wcsncpy((wchar_t *)(puVar5 + 3),L"cbFSR3Upscaler",0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 149825974 FUN_149825974 body=181 status=ok
// SIG undefined FUN_149825974(void)

undefined4 * FUN_149825974(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_14609800a();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29d38,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_14609800a();
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



// FUNCTION 149825a2a FUN_149825a2a body=383 status=ok
// SIG undefined FUN_149825a2a(void)

void FUN_149825a2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea9370;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149825baa FUN_149825baa body=38 status=ok
// SIG undefined FUN_149825baa(void)

undefined8 FUN_149825baa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149825bd0 FUN_149825bd0 body=152 status=ok
// SIG undefined FUN_149825bd0(void)

void FUN_149825bd0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14465a041();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465a126(param_1,param_2);
  return;
}



// FUNCTION 149825c68 FUN_149825c68 body=374 status=ok
// SIG undefined FUN_149825c68(void)

void FUN_149825c68(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149825dde FUN_149825dde body=29 status=ok
// SIG undefined FUN_149825dde(void)

undefined8 FUN_149825dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149825dfc FUN_149825dfc body=326 status=ok
// SIG undefined FUN_149825dfc(void)

void FUN_149825dfc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x900000003;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_reconstructed_previous_nearest_14bea93e0;
  puVar4 = &DAT_14bea93b0;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_dilated_reactive_masks_14bea9440;
    puVar5 = &DAT_14bea9428;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = 0;
      wcsncpy((wchar_t *)(puVar5 + 3),L"cbFSR3Upscaler",0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 149825f42 FUN_149825f42 body=181 status=ok
// SIG undefined FUN_149825f42(void)

undefined4 * FUN_149825f42(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_146098278();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29e60,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_146098278();
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



// FUNCTION 149825ff8 FUN_149825ff8 body=383 status=ok
// SIG undefined FUN_149825ff8(void)

void FUN_149825ff8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea9460;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149826178 FUN_149826178 body=38 status=ok
// SIG undefined FUN_149826178(void)

undefined8 FUN_149826178(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982619e FUN_14982619e body=152 status=ok
// SIG undefined FUN_14982619e(void)

void FUN_14982619e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14465a51d();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465a602(param_1,param_2);
  return;
}



// FUNCTION 149826236 FUN_149826236 body=374 status=ok
// SIG undefined FUN_149826236(void)

void FUN_149826236(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1498263ac FUN_1498263ac body=29 status=ok
// SIG undefined FUN_1498263ac(void)

undefined8 FUN_1498263ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498263ca FUN_1498263ca body=326 status=ok
// SIG undefined FUN_1498263ca(void)

void FUN_1498263ca(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x200000001;
  *(undefined4 *)(param_3 + 0x40) = 2;
  puVar1 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_input_exposure_14bea94a0;
  puVar5 = &DAT_14bea9498;
  uVar2 = 0;
  do {
    *puVar1 = (int)uVar2;
    puVar1[2] = *puVar5;
    wcsncpy((wchar_t *)(puVar1 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar1 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar5 = puVar5 + 1;
    puVar1 = puVar1 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar4 = (undefined2 *)(param_3 + 0xcc);
    uVar2 = 0;
    do {
      *(int *)(puVar4 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar4 + -0x40) = 0x12;
      wcsncpy(puVar4 + -0x3e,L"rw_upscaled_output",0x3e);
      *puVar4 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar1 = (undefined4 *)(param_3 + 0x8c44);
    ppuVar3 = &PTR_u_cbFSR3Upscaler_14bea94c0;
    puVar5 = &DAT_14bea94b0;
    uVar2 = 0;
    do {
      *puVar1 = (int)uVar2;
      puVar1[2] = *puVar5;
      wcsncpy((wchar_t *)(puVar1 + 3),(wchar_t *)*ppuVar3,0x3e);
      *(undefined2 *)(puVar1 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 149826510 FUN_149826510 body=181 status=ok
// SIG undefined FUN_149826510(void)

undefined4 * FUN_149826510(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_145e9e5f4();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc29f88,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_145e9e5f4();
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



// FUNCTION 1498265c6 FUN_1498265c6 body=659 status=ok
// SIG undefined FUN_1498265c6(void)

void FUN_1498265c6(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined1 auStack_138 [32];
  undefined1 *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  uint uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_110 = param_1;
  local_108 = param_2;
  if (*(int *)(param_3 + 200) != 0) {
    plVar15 = (longlong *)(param_3 + 0x9a10);
    piVar14 = (int *)(param_3 + 0x8cd4);
    uVar16 = 0;
    do {
      if (*piVar14 == 2) {
        puVar4 = (undefined4 *)*plVar15;
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uStack_f0 = puVar4[2];
        uStack_ec = puVar4[3];
        local_f8 = (undefined1)uVar5;
        uStack_f7 = (undefined1)((uint)uVar5 >> 8);
        uStack_f6 = (undefined2)((uint)uVar5 >> 0x10);
        uStack_f4 = (undefined2)uVar6;
        uStack_f2 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_f1 = (undefined1)((uint)uVar6 >> 0x18);
        FUN_144655e14(&local_100,&local_f8);
        FUN_145da973c();
        cVar8 = DAT_14cc2a1b9;
        if (DAT_14cc2a1b9 == '\x03') {
          cVar8 = '\x02';
        }
        lVar12 = CONCAT71(uStack_ff,local_100);
        param_4[2] = lVar12;
        *(char *)(param_4 + 3) = cVar8;
LAB_1498266d9:
        if (lVar12 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar12 + 8);
          uVar9 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar9 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      else if (*piVar14 == 0) {
        local_c8 = 0;
        uStack_c0 = 0x3f80000000000000;
        memcpy(&local_f8,(void *)*plVar15,0x90);
        FUN_144655d1c(&local_100,&local_f8);
        FUN_145de5a5a();
        cVar8 = DAT_14cc2a089;
        if (DAT_14cc2a089 == '\x03') {
          cVar8 = '\x02';
        }
        lVar12 = CONCAT71(uStack_ff,local_100);
        *param_4 = lVar12;
        *(char *)(param_4 + 1) = cVar8;
        goto LAB_1498266d9;
      }
      uVar16 = uVar16 + 1;
      plVar15 = plVar15 + 2;
      piVar14 = piVar14 + 0x23;
    } while (uVar16 < *(uint *)(param_3 + 200));
  }
  uVar7 = local_108;
  lVar12 = local_110;
  if (*(int *)(param_3 + 0xac) != 0) {
    lVar13 = 0;
    uVar16 = 0;
    do {
      iVar3 = *(int *)(param_3 + 0x23d4 + lVar13 * 4);
      if (iVar3 == 0x13) {
        lVar10 = FUN_149817d64(uVar7,lVar12,*(undefined4 *)(param_3 + 0x8f04 + uVar16 * 4));
        param_4[5] = lVar10;
      }
      else if (iVar3 == 5) {
        lVar10 = FUN_149817d64(uVar7,lVar12,*(undefined4 *)(param_3 + 0x8f04 + uVar16 * 4));
        param_4[4] = lVar10;
      }
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x23;
    } while (uVar16 < *(uint *)(param_3 + 0xac));
  }
  uVar9 = *(uint *)(param_3 + 0xa8);
  if (uVar9 != 0) {
    lVar13 = local_110 + 0x198;
    lVar12 = local_110 + 0x70;
    lVar10 = 0xd4;
    uVar16 = 0;
    do {
      if (*(int *)(param_3 + lVar10) == 0x12) {
        uVar2 = *(undefined1 *)(param_3 + 0x9404 + uVar16 * 8);
        local_e8 = FUN_149817d64(local_108,local_110,*(undefined4 *)(param_3 + 0x9408 + uVar16 * 8))
        ;
        local_f8 = *(undefined1 *)(local_e8 + 0x94);
        uStack_f6 = 0;
        uStack_f4 = 0;
        uStack_f2 = 0;
        uStack_f0 = uStack_f0 & 0xffffff00;
        local_100 = 0;
        local_118 = &local_100;
        uStack_f7 = uVar2;
        lVar11 = FUN_144a96e92(lVar13,lVar12,local_e8 + 8,&local_f8);
        param_4[6] = lVar11;
        uVar9 = *(uint *)(param_3 + 0xa8);
      }
      uVar16 = uVar16 + 1;
      lVar10 = lVar10 + 0x8c;
    } while (uVar16 < uVar9);
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14982685a FUN_14982685a body=29 status=ok
// SIG undefined FUN_14982685a(void)

undefined8 FUN_14982685a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149826878 FUN_149826878 body=383 status=ok
// SIG undefined FUN_149826878(void)

void FUN_149826878(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a808;
  if (DAT_14cc2a808 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a808 + 8) = *(int *)(DAT_14cc2a808 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a7c0;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea94e0;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498269f8 FUN_1498269f8 body=38 status=ok
// SIG undefined FUN_1498269f8(void)

undefined8 FUN_1498269f8(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149826a1e FUN_149826a1e body=152 status=ok
// SIG undefined FUN_149826a1e(void)

void FUN_149826a1e(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14465a9eb();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465aad0(param_1,param_2);
  return;
}



// FUNCTION 149826ab6 FUN_149826ab6 body=374 status=ok
// SIG undefined FUN_149826ab6(void)

void FUN_149826ab6(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 149826c2c FUN_149826c2c body=29 status=ok
// SIG undefined FUN_149826c2c(void)

undefined8 FUN_149826c2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149826c4a FUN_149826c4a body=298 status=ok
// SIG undefined FUN_149826c4a(void)

void FUN_149826c4a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  *(undefined1 **)(param_3 + 0x20) = &DAT_100000001;
  *(undefined4 *)(param_3 + 0x40) = 1;
  puVar2 = (undefined4 *)(param_3 + 0x2344);
  uVar3 = 0;
  do {
    *puVar2 = (int)uVar3;
    puVar2[2] = 0x1b;
    wcsncpy((wchar_t *)(puVar2 + 3),L"r_spd_mips",0x3e);
    *(undefined2 *)(puVar2 + 0x22) = 0;
    if (0x3e < uVar3) break;
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 0x23;
  } while (uVar3 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    uVar3 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar3;
      *(undefined4 *)(puVar1 + -0x40) = 0x2a;
      wcsncpy(puVar1 + -0x3e,L"rw_shading_change",0x3e);
      *puVar1 = 0;
      if (0x3e < uVar3) break;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar3 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar2 = (undefined4 *)(param_3 + 0x8c44);
    uVar3 = 0;
    do {
      *puVar2 = (int)uVar3;
      puVar2[2] = 0;
      wcsncpy((wchar_t *)(puVar2 + 3),L"cbFSR3Upscaler",0x3e);
      *(undefined2 *)(puVar2 + 0x22) = 0;
      if (1 < uVar3) {
        return;
      }
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 0x23;
    } while (uVar3 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 149826d74 FUN_149826d74 body=181 status=ok
// SIG undefined FUN_149826d74(void)

undefined4 * FUN_149826d74(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_1460984e6();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc2a310,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_1460984e6();
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



// FUNCTION 149826e2a FUN_149826e2a body=383 status=ok
// SIG undefined FUN_149826e2a(void)

void FUN_149826e2a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea9520;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149826faa FUN_149826faa body=38 status=ok
// SIG undefined FUN_149826faa(void)

undefined8 FUN_149826faa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149826fd0 FUN_149826fd0 body=152 status=ok
// SIG undefined FUN_149826fd0(void)

void FUN_149826fd0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14465aec7();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465afac(param_1,param_2);
  return;
}



// FUNCTION 149827068 FUN_149827068 body=374 status=ok
// SIG undefined FUN_149827068(void)

void FUN_149827068(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1498271de FUN_1498271de body=29 status=ok
// SIG undefined FUN_1498271de(void)

undefined8 FUN_1498271de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498271fc FUN_1498271fc body=338 status=ok
// SIG undefined FUN_1498271fc(void)

void FUN_1498271fc(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  *(undefined8 *)(param_3 + 0x20) = 0x400000007;
  *(undefined4 *)(param_3 + 0x40) = 2;
  puVar5 = (undefined4 *)(param_3 + 0x2344);
  ppuVar3 = &PTR_u_r_current_luma_14bea9570;
  puVar4 = &DAT_14bea9560;
  uVar2 = 0;
  do {
    *puVar5 = (int)uVar2;
    puVar5[2] = *puVar4;
    wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
    *(undefined2 *)(puVar5 + 0x22) = 0;
    if (0x3e < uVar2) break;
    uVar2 = uVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 0x23;
  } while (uVar2 < *(uint *)(param_3 + 0x24));
  if (*(int *)(param_3 + 0x20) != 0) {
    puVar1 = (undefined2 *)(param_3 + 0xcc);
    ppuVar3 = &PTR_u_rw_spd_global_atomic_14bea95b0;
    puVar5 = &DAT_14bea9590;
    uVar2 = 0;
    do {
      *(int *)(puVar1 + -0x44) = (int)uVar2;
      *(undefined4 *)(puVar1 + -0x40) = *puVar5;
      wcsncpy(puVar1 + -0x3e,(wchar_t *)*ppuVar3,0x3e);
      *puVar1 = 0;
      if (0x3e < uVar2) break;
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar5 = puVar5 + 1;
      puVar1 = puVar1 + 0x46;
    } while (uVar2 < *(uint *)(param_3 + 0x20));
  }
  if (*(int *)(param_3 + 0x40) != 0) {
    puVar5 = (undefined4 *)(param_3 + 0x8c44);
    ppuVar3 = &PTR_u_cbFSR3Upscaler_14bea95f0;
    puVar4 = &DAT_14bea95e8;
    uVar2 = 0;
    do {
      *puVar5 = (int)uVar2;
      puVar5[2] = *puVar4;
      wcsncpy((wchar_t *)(puVar5 + 3),(wchar_t *)*ppuVar3,0x3e);
      *(undefined2 *)(puVar5 + 0x22) = 0;
      if (1 < uVar2) {
        return;
      }
      uVar2 = uVar2 + 1;
      ppuVar3 = ppuVar3 + 1;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 0x23;
    } while (uVar2 < *(uint *)(param_3 + 0x40));
  }
  return;
}



// FUNCTION 14982734e FUN_14982734e body=181 status=ok
// SIG undefined FUN_14982734e(void)

undefined4 * FUN_14982734e(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
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
  bVar6 = param_3[5];
  bVar7 = param_3[6];
  bVar8 = param_3[7];
  FUN_146098754();
  FUN_1448e935e(param_2,&local_38,&DAT_14cc2a438,
                (uint)bVar1 + (uint)bVar2 * 2 +
                ((uint)bVar4 * 2 + (uint)bVar5 * 4 + (uint)bVar6 * 8 | (uint)bVar7 << 4 |
                 (uint)bVar8 << 5 | (uint)bVar3) * 4);
  FUN_146098754();
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



// FUNCTION 149827404 FUN_149827404 body=383 status=ok
// SIG undefined FUN_149827404(void)

void FUN_149827404(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined8 unaff_RBP;
  undefined8 *puVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar11;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140069376();
  uVar11 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar11,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar11,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar12 + 0x3c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x1e8);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar12 + 0x3c;
  }
  *puVar1 = (ulonglong)puVar9;
  local_50 = DAT_14cc2a780;
  if (DAT_14cc2a780 != 0) {
    LOCK();
    *(int *)(DAT_14cc2a780 + 8) = *(int *)(DAT_14cc2a780 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cc2a738;
  local_68 = 1;
  local_58 = param_3;
  FUN_140068f1a(puVar12,param_2,&local_58,uVar10);
  *puVar12 = &PTR_FUN_14bea9600;
  uVar10 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = param_4[4];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(puVar12 + 0x37) = *param_4;
  *(undefined4 *)((longlong)puVar12 + 0x1bc) = uVar10;
  *(undefined4 *)(puVar12 + 0x38) = uVar3;
  *(undefined4 *)((longlong)puVar12 + 0x1c4) = uVar4;
  *(undefined4 *)(puVar12 + 0x39) = uVar5;
  *(undefined4 *)((longlong)puVar12 + 0x1cc) = uVar6;
  *(undefined4 *)(puVar12 + 0x3a) = uVar7;
  *(undefined4 *)((longlong)puVar12 + 0x1d4) = uVar8;
  puVar12[0x3b] = *(undefined8 *)(param_4 + 8);
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    FUN_140069100(param_1,puVar12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149827584 FUN_149827584 body=38 status=ok
// SIG undefined FUN_149827584(void)

undefined8 FUN_149827584(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1498275aa FUN_1498275aa body=152 status=ok
// SIG undefined FUN_1498275aa(void)

void FUN_1498275aa(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_14465b3a3();
  uVar1 = param_4[2];
  uVar2 = *param_4;
  uVar3 = param_4[1];
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
  FUN_14465b488(param_1,param_2);
  return;
}



// FUNCTION 149827642 FUN_149827642 body=374 status=ok
// SIG undefined FUN_149827642(void)

void FUN_149827642(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 1498277b8 FUN_1498277b8 body=42 status=ok
// SIG undefined FUN_1498277b8(void)

void FUN_1498277b8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149827802 FUN_149827802 body=96 status=ok
// SIG undefined FUN_149827802(void)

undefined8 FUN_149827802(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145f3c250();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2c720,1);
  return uVar3;
}



// FUNCTION 149827862 FUN_149827862 body=52 status=ok
// SIG undefined FUN_149827862(void)

void FUN_149827862(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149827896 FUN_149827896 body=42 status=ok
// SIG undefined FUN_149827896(void)

void FUN_149827896(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498278e0 FUN_1498278e0 body=96 status=ok
// SIG undefined FUN_1498278e0(void)

undefined8 FUN_1498278e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_145e9edd2();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cc2c7a8,1);
  return uVar3;
}



// FUNCTION 149827940 FUN_149827940 body=52 status=ok
// SIG undefined FUN_149827940(void)

void FUN_149827940(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149827974 FUN_149827974 body=259 status=ok
// SIG undefined FUN_149827974(void)

ulonglong FUN_149827974(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  *param_2 = DAT_14cb0cbdc;
  *param_3 = DAT_14cb0d290;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0xc20);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
    }
    else if (lVar4 == 0) goto LAB_149827a1c;
    if ((*(longlong *)(lVar4 + 0xf8) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0xf8) + 0x90), plVar2 != (longlong *)0x0)) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
      lVar4 = (**(code **)(*plVar2 + 0x30))(plVar2);
      if (lVar4 == 0) {
LAB_149827a38:
        uVar5 = 0;
      }
      else if ((*(int *)(lVar4 + 0xa4) == 1) || (*(char *)(lVar4 + 0xae) == '\x01')) {
        uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x58) + 0xa0))
                          (*(longlong **)(lVar4 + 0x58),param_2,param_3);
        uVar5 = (ulonglong)uVar3;
      }
      else {
        if (*(int *)(lVar4 + 0xa4) != 0) goto LAB_149827a38;
        *param_2 = *(undefined4 *)(param_1 + 0x138);
        *param_3 = *(undefined4 *)(param_1 + 0x13c);
        uVar5 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      }
      LOCK();
      puVar1 = (uint *)(plVar2 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812(plVar2);
      }
      goto LAB_149827a1e;
    }
  }
LAB_149827a1c:
  uVar5 = 0;
LAB_149827a1e:
  return uVar5 & 0xffffffff;
}



// FUNCTION 149827a78 FUN_149827a78 body=77 status=ok
// SIG undefined FUN_149827a78(void)

void FUN_149827a78(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0x60) = param_2;
  plVar3 = (longlong *)*param_3;
  *(longlong **)(param_1 + 0x68) = plVar3;
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  if (*param_3 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_3 + 8);
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



// FUNCTION 149827ac6 FUN_149827ac6 body=601 status=ok
// SIG undefined FUN_149827ac6(void)

longlong * FUN_149827ac6(longlong param_1,longlong *param_2,int param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0xad) == '\0') {
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      puVar15 = (undefined8 *)0x0;
      lVar14 = 0;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x90) + lVar14);
        if (*(int *)(lVar13 + 0x10) == param_3) {
          if (lVar13 == 0) {
            puVar15 = (undefined8 *)0x0;
          }
          else {
            *param_2 = lVar13;
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
            puVar15 = (undefined8 *)*param_2;
          }
          if (((((*(int *)((longlong)puVar15 + 0x2c) == param_4[5]) &&
                (*(int *)(puVar15 + 6) == param_4[6])) &&
               (*(int *)((longlong)puVar15 + 0x34) == param_4[7])) &&
              ((*(int *)(puVar15 + 7) == param_4[8] &&
               (*(int *)((longlong)puVar15 + 0x3c) == param_4[9])))) &&
             (*(int *)(puVar15 + 5) == param_4[4])) goto LAB_149827be4;
          break;
        }
        lVar14 = lVar14 + 8;
      } while ((longlong)*(int *)(param_1 + 0x98) * 8 != lVar14);
      goto LAB_149827afd;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xad) = 0;
  }
  puVar15 = (undefined8 *)0x0;
LAB_149827afd:
  puVar12 = (undefined8 *)FUN_14001cc68(0x80,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  FUN_144a9d3d4(puVar12,0);
  *puVar12 = &PTR_FUN_14bea9a40;
  *(int *)(puVar12 + 2) = param_3;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = uVar3;
  *(undefined1 *)(puVar12 + 0xf) = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0;
  puVar12[7] = 0;
  if (puVar15 != puVar12) {
    *param_2 = (longlong)puVar12;
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
    }
    if (puVar15 != (undefined8 *)0x0) {
      LOCK();
      puVar1 = (uint *)(puVar15 + 1);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812(puVar15);
      }
    }
    puVar15 = (undefined8 *)*param_2;
  }
  puVar15[7] = *(undefined8 *)(param_4 + 8);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  uVar10 = param_4[7];
  *(undefined4 *)(puVar15 + 5) = param_4[4];
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
  *(undefined4 *)(puVar15 + 6) = uVar9;
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar10;
  *(undefined4 *)(puVar15 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar5;
  *(undefined4 *)(puVar15 + 4) = uVar6;
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar7;
  iVar11 = (**(code **)**(undefined8 **)(param_1 + 0x58))
                     (*(undefined8 **)(param_1 + 0x58),puVar15 + 8,puVar15 + 3);
  if ((puVar15 != (undefined8 *)0x0) && (iVar11 != 0)) {
    *param_2 = 0;
    LOCK();
    puVar1 = (uint *)(puVar15 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(puVar15);
    }
  }
LAB_149827be4:
  lVar14 = *param_2;
  lVar13 = *(longlong *)(param_1 + 0x78);
  if (lVar13 != lVar14) {
    *(longlong *)(param_1 + 0x78) = lVar14;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    if (lVar13 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar13 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar14 = *(longlong *)(param_1 + 0x78);
    lVar13 = lVar14;
  }
  if (lVar14 != 0) {
    iVar11 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar11 + 1U) {
      FUN_1498305a8((longlong *)(param_1 + 0x80),iVar11);
      lVar13 = *(longlong *)(param_1 + 0x78);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar11 * 8) = lVar13;
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 149827d1f FUN_149827d1f body=177 status=ok
// SIG undefined FUN_149827d1f(void)

void FUN_149827d1f(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145f3c250();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2c720,param_4);
  local_78 = &DAT_14cc2c720;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14982f2c6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149827dd1 FUN_149827dd1 body=177 status=ok
// SIG undefined FUN_149827dd1(void)

void FUN_149827dd1(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
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
  FUN_145e9edd2();
  local_50 = *(undefined4 *)(param_5 + 1);
  local_58 = *param_5;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1448f70da(*param_3,&DAT_14cc2c7a8,param_4);
  local_78 = &DAT_14cc2c7a8;
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_70 = param_4;
  FUN_14982f6a6(param_1,param_2,param_4,&local_78);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149827e84 FUN_149827e84 body=89 status=ok
// SIG undefined FUN_149827e84(void)

void FUN_149827e84(longlong param_1)

{
  FUN_14982b234(param_1 + 0x90,param_1 + 0x80);
  FUN_146131365(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) == 0) {
    return;
  }
  FUN_14982b31c(param_1 + 0x80);
  return;
}



// FUNCTION 149827ede FUN_149827ede body=149 status=ok
// SIG undefined FUN_149827ede(void)

void FUN_149827ede(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_2;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x38) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  plVar1 = (longlong *)*param_3;
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != plVar1) {
    *(longlong **)(param_1 + 0x40) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
  }
  if ((longlong *)*param_2 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_2 + 0x38))();
  }
  if ((longlong *)*param_3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149827f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_3 + 0x38))();
    return;
  }
  return;
}



// FUNCTION 149827f74 FUN_149827f74 body=71 status=ok
// SIG undefined FUN_149827f74(void)

void FUN_149827f74(longlong param_1)

{
  FUN_146131365(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) == 0) {
    return;
  }
  FUN_14982b31c(param_1 + 0x90);
  return;
}



// FUNCTION 149827fbc FUN_149827fbc body=42 status=ok
// SIG undefined FUN_149827fbc(void)

void FUN_149827fbc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 149828006 FUN_149828006 body=39 status=ok
// SIG undefined FUN_149828006(void)

void FUN_149828006(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_14982b34c(uVar1,param_1);
  return;
}



// FUNCTION 14982802e FUN_14982802e body=57 status=ok
// SIG undefined FUN_14982802e(void)

longlong FUN_14982802e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xec) = 0;
  *(undefined8 *)(lVar1 + 0xf4) = 0;
  return lVar1;
}



// FUNCTION 149828068 FUN_149828068 body=139 status=ok
// SIG undefined FUN_149828068(void)

void FUN_149828068(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14bea9a40;
  (**(code **)(*(longlong *)param_1[0xe] + 8))((longlong *)param_1[0xe],param_1 + 8);
  if (param_1[0xd] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xd] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if ((longlong *)param_1[0xc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xc] + 0x38))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x38))();
  }
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[10] + 0x38))();
  }
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[9] + 0x38))();
  }
  FUN_144a94e2a(param_1);
  return;
}



// FUNCTION 1498280fc FUN_1498280fc body=103 status=ok
// SIG undefined FUN_1498280fc(void)

undefined4 * FUN_1498280fc(undefined4 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e1a002();
  FUN_1448e935e(param_2,&local_30,&DAT_14cc2aee0,0);
  FUN_145e1a002();
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149828164 FUN_149828164 body=476 status=ok
// SIG undefined FUN_149828164(void)

void FUN_149828164(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = param_2;
  lVar12 = FUN_144821ef4(&DAT_14ca85100);
  FUN_14982b435(lVar12,param_1 + 0xf0,&local_50);
  FUN_14982b435(lVar12,param_1 + 0xf6,&local_58);
  FUN_144775fd8(lVar12,param_1 + 0xe0,param_3);
  FUN_144775fd8(lVar12,param_1 + 0xe4,param_4);
  FUN_144775fd8(lVar12,param_1 + 0xe8,param_5);
  FUN_144a86a8e(lVar12,param_1 + 0xec,param_6);
  uVar9 = DAT_14ca852b8;
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if (DAT_14ca85108 < puVar14) {
      FUN_140023dd8(&DAT_14ca85100,0x60);
      puVar13 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar14;
    *DAT_14ca85130 = puVar13;
    DAT_14ca85130 = puVar13 + 1;
    uVar5 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar6 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar7 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar8 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fa8;
    puVar13[2] = uVar9;
    puVar13[3] = uVar8;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar7;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar6;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar5;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149828388 FUN_149828388 body=133 status=ok
// SIG undefined FUN_149828388(void)

void FUN_149828388(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149828420 FUN_149828420 body=135 status=ok
// SIG undefined FUN_149828420(void)

void FUN_149828420(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498284ba FUN_1498284ba body=135 status=ok
// SIG undefined FUN_1498284ba(void)

void FUN_1498284ba(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  local_20 = *param_2;
  local_18 = param_2[1];
  if (local_18 != 0) {
    LOCK();
    *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x50))(plVar3,&local_20);
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
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149828554 FUN_149828554 body=30 status=ok
// SIG undefined FUN_149828554(void)

undefined8 FUN_149828554(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x78))();
  return param_2;
}



// FUNCTION 149828584 FUN_149828584 body=139 status=ok
// SIG undefined FUN_149828584(void)

undefined4 FUN_149828584(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x3f0);
  local_28 = *param_3;
  local_20 = param_3[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*plVar3 + 0x68))(plVar3,param_2,&local_28);
  plVar3 = (longlong *)param_3[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149828610 FUN_149828610 body=33 status=ok
// SIG undefined FUN_149828610(void)

undefined8 FUN_149828610(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x3f0) + 0x80))();
  return param_2;
}



// FUNCTION 149828646 FUN_149828646 body=151 status=ok
// SIG undefined FUN_149828646(void)

void FUN_149828646(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*param_2 != 0) {
    param_1 = param_1 + (ulonglong)*(uint *)(param_1 + 0x400) * 0x10;
    iVar3 = *(int *)(param_1 + 0x398);
    *(uint *)(param_1 + 0x398) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x39c) < iVar3 + 1U) {
      FUN_147514bac((longlong *)(param_1 + 0x390),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x390);
    *(longlong *)(lVar4 + (longlong)iVar3 * 0x10) = *param_2;
    lVar5 = param_2[1];
    *(longlong *)(lVar4 + 8 + (longlong)iVar3 * 0x10) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
  }
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
                    /* WARNING: Could not recover jumptable at 0x0001498286c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1498288a8 FUN_1498288a8 body=42 status=ok
// SIG undefined FUN_1498288a8(void)

void FUN_1498288a8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498288da FUN_1498288da body=39 status=ok
// SIG undefined FUN_1498288da(void)

void FUN_1498288da(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982cc20(uVar1,param_1);
  return;
}



// FUNCTION 149828902 FUN_149828902 body=52 status=ok
// SIG undefined FUN_149828902(void)

void FUN_149828902(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828936 FUN_149828936 body=42 status=ok
// SIG undefined FUN_149828936(void)

void FUN_149828936(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828968 FUN_149828968 body=39 status=ok
// SIG undefined FUN_149828968(void)

void FUN_149828968(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982cd30(uVar1,param_1);
  return;
}



// FUNCTION 149828990 FUN_149828990 body=52 status=ok
// SIG undefined FUN_149828990(void)

void FUN_149828990(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 1498289c4 FUN_1498289c4 body=42 status=ok
// SIG undefined FUN_1498289c4(void)

void FUN_1498289c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1498289f6 FUN_1498289f6 body=39 status=ok
// SIG undefined FUN_1498289f6(void)

void FUN_1498289f6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982cdc0(uVar1,param_1);
  return;
}



// FUNCTION 149828a1e FUN_149828a1e body=52 status=ok
// SIG undefined FUN_149828a1e(void)

void FUN_149828a1e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828a52 FUN_149828a52 body=42 status=ok
// SIG undefined FUN_149828a52(void)

void FUN_149828a52(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828a84 FUN_149828a84 body=39 status=ok
// SIG undefined FUN_149828a84(void)

void FUN_149828a84(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982ce50(uVar1,param_1);
  return;
}



// FUNCTION 149828aac FUN_149828aac body=52 status=ok
// SIG undefined FUN_149828aac(void)

void FUN_149828aac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828ae0 FUN_149828ae0 body=42 status=ok
// SIG undefined FUN_149828ae0(void)

void FUN_149828ae0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828b12 FUN_149828b12 body=39 status=ok
// SIG undefined FUN_149828b12(void)

void FUN_149828b12(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982cee0(uVar1,param_1);
  return;
}



// FUNCTION 149828b3a FUN_149828b3a body=52 status=ok
// SIG undefined FUN_149828b3a(void)

void FUN_149828b3a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828b6e FUN_149828b6e body=42 status=ok
// SIG undefined FUN_149828b6e(void)

void FUN_149828b6e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828ba0 FUN_149828ba0 body=39 status=ok
// SIG undefined FUN_149828ba0(void)

void FUN_149828ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982cf70(uVar1,param_1);
  return;
}



// FUNCTION 149828bc8 FUN_149828bc8 body=52 status=ok
// SIG undefined FUN_149828bc8(void)

void FUN_149828bc8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828bfc FUN_149828bfc body=42 status=ok
// SIG undefined FUN_149828bfc(void)

void FUN_149828bfc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828c2e FUN_149828c2e body=39 status=ok
// SIG undefined FUN_149828c2e(void)

void FUN_149828c2e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982d000(uVar1,param_1);
  return;
}



// FUNCTION 149828c56 FUN_149828c56 body=52 status=ok
// SIG undefined FUN_149828c56(void)

void FUN_149828c56(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828c8a FUN_149828c8a body=42 status=ok
// SIG undefined FUN_149828c8a(void)

void FUN_149828c8a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828cbc FUN_149828cbc body=39 status=ok
// SIG undefined FUN_149828cbc(void)

void FUN_149828cbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982d090(uVar1,param_1);
  return;
}



// FUNCTION 149828ce4 FUN_149828ce4 body=52 status=ok
// SIG undefined FUN_149828ce4(void)

void FUN_149828ce4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828d18 FUN_149828d18 body=42 status=ok
// SIG undefined FUN_149828d18(void)

void FUN_149828d18(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828d4a FUN_149828d4a body=39 status=ok
// SIG undefined FUN_149828d4a(void)

void FUN_149828d4a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982d120(uVar1,param_1);
  return;
}



// FUNCTION 149828d72 FUN_149828d72 body=52 status=ok
// SIG undefined FUN_149828d72(void)

void FUN_149828d72(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828da6 FUN_149828da6 body=42 status=ok
// SIG undefined FUN_149828da6(void)

void FUN_149828da6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828dd8 FUN_149828dd8 body=39 status=ok
// SIG undefined FUN_149828dd8(void)

void FUN_149828dd8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982d1b0(uVar1,param_1);
  return;
}



// FUNCTION 149828e00 FUN_149828e00 body=52 status=ok
// SIG undefined FUN_149828e00(void)

void FUN_149828e00(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828e34 FUN_149828e34 body=42 status=ok
// SIG undefined FUN_149828e34(void)

void FUN_149828e34(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 149828e66 FUN_149828e66 body=39 status=ok
// SIG undefined FUN_149828e66(void)

void FUN_149828e66(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982d240(uVar1,param_1);
  return;
}



// FUNCTION 149828e8e FUN_149828e8e body=52 status=ok
// SIG undefined FUN_149828e8e(void)

void FUN_149828e8e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 149828ec2 FUN_149828ec2 body=789 status=ok
// SIG undefined FUN_149828ec2(void)

undefined8 *
FUN_149828ec2(undefined4 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead140;
    puVar1[1] = L"FidelityFX-FSR3/FI Reconstruct And Dilate (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149833e74();
    break;
  case 1:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beacd80;
    puVar1[1] = L"FidelityFX-FSR3/FI Setup (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149831ce4();
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead1c0;
    puVar1[1] = L"FidelityFX-FSR3/FI Reconstruct Prev Depth (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_14983440e();
    break;
  case 3:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beace10;
    puVar1[1] = L"FidelityFX-FSR3/FI Game Motion Vector Field (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149832272();
    break;
  case 4:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead0a0;
    puVar1[1] = L"FidelityFX-FSR3/FI OpticalFlow Vector Field (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_1498338da();
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beacc20;
    puVar1[1] = L"FidelityFX-FSR3/FI Disocclusion Mask (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_1498311c8();
    break;
  case 6:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beaccc0;
    puVar1[1] = L"FidelityFX-FSR3/FI Frame Interpolation (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149831756();
    break;
  case 7:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beacfa0;
    puVar1[1] = L"FidelityFX-FSR3/FI Inpainting Pyramid (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149833340();
    break;
  case 8:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beacf00;
    puVar1[1] = L"FidelityFX-FSR3/FI Inpainting (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149832db2();
    break;
  case 9:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beaceb0;
    puVar1[1] = L"FidelityFX-FSR3/FI Game Vector Field Inpainting (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_14983280c();
    break;
  case 10:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14beacb60;
    puVar1[1] = L"FidelityFX-FSR3/FI Debug View (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x12) = 0;
    FUN_149830c1c();
    break;
  default:
    return (undefined8 *)0x0;
  }
  *(byte *)(puVar1 + 2) = *param_3 & 1;
  *(undefined1 *)((longlong)puVar1 + 0x11) = param_5;
  *(undefined1 *)((longlong)puVar1 + 0x12) = param_6;
  return puVar1;
}



// FUNCTION 1498291d8 FUN_1498291d8 body=4089 status=ok
// SIG undefined FUN_1498291d8(void)

void FUN_1498291d8(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  longlong local_130;
  longlong local_128;
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined1 local_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  uint uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(param_3 + 200) != 0) {
    plVar14 = (longlong *)(param_3 + 0x9a10);
    piVar11 = (int *)(param_3 + 0x8cd4);
    uVar15 = 0;
    do {
      if (*piVar11 == 1) {
        puVar4 = (undefined4 *)*plVar14;
        uVar5 = *puVar4;
        uVar6 = puVar4[1];
        uStack_110 = puVar4[2];
        uStack_10c = puVar4[3];
        local_118 = (undefined1)uVar5;
        uStack_117 = (undefined1)((uint)uVar5 >> 8);
        uStack_116 = (undefined1)((uint)uVar5 >> 0x10);
        uStack_115 = (undefined1)((uint)uVar5 >> 0x18);
        uStack_114 = (undefined2)uVar6;
        uStack_112 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_111 = (undefined1)((uint)uVar6 >> 0x18);
        FUN_14465d714(&local_120,&local_118);
        FUN_145e0a182();
        cVar7 = DAT_14cc2bd61;
        if (DAT_14cc2bd61 == '\x03') {
          cVar7 = '\x02';
        }
        lVar12 = CONCAT71(uStack_11f,local_120);
        param_4[2] = lVar12;
        *(char *)(param_4 + 3) = cVar7;
LAB_1498292e8:
        if (lVar12 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar12 + 8);
          uVar2 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar2 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      else if (*piVar11 == 0) {
        local_e8 = 0;
        uStack_e0 = 0x3f80000000000000;
        memcpy(&local_118,(void *)*plVar14,0xb0);
        FUN_14465d61c(&local_120,&local_118);
        FUN_145eee1c0();
        cVar7 = DAT_14cc2bcc9;
        if (DAT_14cc2bcc9 == '\x03') {
          cVar7 = '\x02';
        }
        lVar12 = CONCAT71(uStack_11f,local_120);
        *param_4 = lVar12;
        *(char *)(param_4 + 1) = cVar7;
        goto LAB_1498292e8;
      }
      uVar15 = uVar15 + 1;
      plVar14 = plVar14 + 2;
      piVar11 = piVar11 + 0x23;
    } while (uVar15 < *(uint *)(param_3 + 200));
  }
  if (*(int *)(param_3 + 0xac) != 0) {
    local_130 = param_1 + 0x198;
    lVar12 = 0;
    uVar15 = 0;
    do {
      switch(*(undefined4 *)(param_3 + 0x23d4 + lVar12 * 4)) {
      case 1:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x15] = lVar8;
        break;
      case 3:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[10] = lVar8;
        break;
      case 4:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0xb] = lVar8;
        break;
      case 5:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[4] = lVar8;
        break;
      case 6:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[5] = lVar8;
        break;
      case 10:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[6] = lVar8;
        break;
      case 0xb:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[7] = lVar8;
        break;
      case 0xc:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[8] = lVar8;
        break;
      case 0xd:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[9] = lVar8;
        break;
      case 0xe:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0xc] = lVar8;
        break;
      case 0xf:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0xd] = lVar8;
        break;
      case 0x10:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0xe] = lVar8;
        break;
      case 0x11:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0xf] = lVar8;
        break;
      case 0x12:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x10] = lVar8;
        break;
      case 0x13:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x11] = lVar8;
        break;
      case 0x15:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x12] = lVar8;
        break;
      case 0x16:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x13] = lVar8;
        break;
      case 0x17:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x14] = lVar8;
        break;
      case 0x1e:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x16] = lVar8;
        break;
      case 0x1f:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x18] = lVar8;
        break;
      case 0x20:
        local_100 = FUN_149817dc8(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_118 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_111 = 0;
        uStack_110 = 0xffffffff;
        local_108 = 0;
        if ((*(byte *)(local_100 + 0x68) & 0x80) != 0) {
          local_118 = 0x1c;
        }
        lVar8 = FUN_14475683e(local_130,param_1 + 0x70,local_100 + 8,&local_118);
        param_4[0x1a] = lVar8;
        break;
      case 0x21:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x17] = lVar8;
        break;
      case 0x2f:
        lVar8 = FUN_149817d64(param_2,param_1,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        param_4[0x19] = lVar8;
      }
      uVar15 = uVar15 + 1;
      lVar12 = lVar12 + 0x23;
    } while (uVar15 < *(uint *)(param_3 + 0xac));
  }
  if (*(int *)(param_3 + 0xa8) != 0) {
    lVar12 = param_1 + 0x198;
    local_130 = param_1 + 0x70;
    lVar8 = param_3 + 0x9408;
    lVar13 = 0xd4;
    uVar15 = 0;
    local_128 = lVar12;
    do {
      switch(*(undefined4 *)(param_3 + lVar13)) {
      case 1:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x1f] = lVar9;
        break;
      case 10:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x1b] = lVar9;
        break;
      case 0xb:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x1c] = lVar9;
        break;
      case 0xc:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x1d] = lVar9;
        break;
      case 0xd:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x1e] = lVar9;
        break;
      case 0xe:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x20] = lVar9;
        break;
      case 0xf:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x21] = lVar9;
        break;
      case 0x10:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x22] = lVar9;
        break;
      case 0x11:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x23] = lVar9;
        break;
      case 0x12:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x24] = lVar9;
        break;
      case 0x1e:
        uVar3 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        lVar12 = local_128;
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        uStack_117 = uVar3;
        lVar9 = FUN_144a96e92(local_128,local_130,local_108 + 8);
        param_4[0x26] = lVar9;
        break;
      case 0x20:
        lVar9 = FUN_149817dc8(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        local_118 = 0;
        uStack_117 = 0;
        uStack_116 = 0;
        uStack_110 = (uint)lVar9;
        uStack_10c = (undefined4)((ulonglong)lVar9 >> 0x20);
        if ((*(byte *)(lVar9 + 0x68) & 0x80) != 0) {
          local_118 = 0x1c;
        }
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a23c98(lVar12,local_130,lVar9 + 8,&local_118);
        param_4[0x25] = lVar9;
        break;
      case 0x21:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x27] = lVar9;
        break;
      case 0x22:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x28] = lVar9;
        break;
      case 0x23:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x29] = lVar9;
        break;
      case 0x24:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2a] = lVar9;
        break;
      case 0x25:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2b] = lVar9;
        break;
      case 0x26:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2c] = lVar9;
        break;
      case 0x27:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2d] = lVar9;
        break;
      case 0x28:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2e] = lVar9;
        break;
      case 0x29:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x2f] = lVar9;
        break;
      case 0x2a:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x30] = lVar9;
        break;
      case 0x2b:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x31] = lVar9;
        break;
      case 0x2c:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x32] = lVar9;
        break;
      case 0x2d:
        local_108 = FUN_149817d64(param_2,param_1,*(undefined4 *)(lVar8 + uVar15 * 8));
        uVar10 = *(byte *)(local_108 + 0x90) - 1;
        uVar2 = *(uint *)(param_3 + 0x9404 + uVar15 * 8);
        if (uVar2 < uVar10) {
          uVar10 = uVar2;
        }
        local_118 = *(undefined1 *)(local_108 + 0x94);
        uStack_117 = (undefined1)uVar10;
        uStack_116 = 0;
        uStack_115 = 0;
        uStack_114 = 0;
        uStack_112 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_138 = &local_120;
        local_120 = 0;
        lVar9 = FUN_144a96e92(lVar12,local_130,local_108 + 8);
        param_4[0x33] = lVar9;
      }
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 0x8c;
    } while (uVar15 < *(uint *)(param_3 + 0xa8));
  }
  param_4[0x34] = DAT_14c9c0de0;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982a1d2 FUN_14982a1d2 body=42 status=ok
// SIG undefined FUN_14982a1d2(void)

void FUN_14982a1d2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a204 FUN_14982a204 body=39 status=ok
// SIG undefined FUN_14982a204(void)

void FUN_14982a204(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e63a(uVar1,param_1);
  return;
}



// FUNCTION 14982a22c FUN_14982a22c body=52 status=ok
// SIG undefined FUN_14982a22c(void)

void FUN_14982a22c(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a260 FUN_14982a260 body=42 status=ok
// SIG undefined FUN_14982a260(void)

void FUN_14982a260(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a292 FUN_14982a292 body=39 status=ok
// SIG undefined FUN_14982a292(void)

void FUN_14982a292(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e74a(uVar1,param_1);
  return;
}



// FUNCTION 14982a2ba FUN_14982a2ba body=52 status=ok
// SIG undefined FUN_14982a2ba(void)

void FUN_14982a2ba(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a2ee FUN_14982a2ee body=42 status=ok
// SIG undefined FUN_14982a2ee(void)

void FUN_14982a2ee(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a320 FUN_14982a320 body=39 status=ok
// SIG undefined FUN_14982a320(void)

void FUN_14982a320(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e7da(uVar1,param_1);
  return;
}



// FUNCTION 14982a348 FUN_14982a348 body=52 status=ok
// SIG undefined FUN_14982a348(void)

void FUN_14982a348(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a37c FUN_14982a37c body=42 status=ok
// SIG undefined FUN_14982a37c(void)

void FUN_14982a37c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a3ae FUN_14982a3ae body=39 status=ok
// SIG undefined FUN_14982a3ae(void)

void FUN_14982a3ae(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e86a(uVar1,param_1);
  return;
}



// FUNCTION 14982a3d6 FUN_14982a3d6 body=52 status=ok
// SIG undefined FUN_14982a3d6(void)

void FUN_14982a3d6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a40a FUN_14982a40a body=42 status=ok
// SIG undefined FUN_14982a40a(void)

void FUN_14982a40a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a43c FUN_14982a43c body=39 status=ok
// SIG undefined FUN_14982a43c(void)

void FUN_14982a43c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e8fa(uVar1,param_1);
  return;
}



// FUNCTION 14982a464 FUN_14982a464 body=52 status=ok
// SIG undefined FUN_14982a464(void)

void FUN_14982a464(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a498 FUN_14982a498 body=42 status=ok
// SIG undefined FUN_14982a498(void)

void FUN_14982a498(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a4ca FUN_14982a4ca body=39 status=ok
// SIG undefined FUN_14982a4ca(void)

void FUN_14982a4ca(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982e98a(uVar1,param_1);
  return;
}



// FUNCTION 14982a4f2 FUN_14982a4f2 body=52 status=ok
// SIG undefined FUN_14982a4f2(void)

void FUN_14982a4f2(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a526 FUN_14982a526 body=42 status=ok
// SIG undefined FUN_14982a526(void)

void FUN_14982a526(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 14982a558 FUN_14982a558 body=39 status=ok
// SIG undefined FUN_14982a558(void)

void FUN_14982a558(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe0,0x10);
  FUN_14982ea1a(uVar1,param_1);
  return;
}



// FUNCTION 14982a580 FUN_14982a580 body=52 status=ok
// SIG undefined FUN_14982a580(void)

void FUN_14982a580(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 14982a5b4 FUN_14982a5b4 body=485 status=ok
// SIG undefined FUN_14982a5b4(void)

undefined8 * FUN_14982a5b4(undefined4 param_1)

{
  undefined8 *puVar1;
  undefined1 in_stack_00000028;
  undefined1 in_stack_00000030;
  
  switch(param_1) {
  case 0:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead450;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow PrepareLuma (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_14983623e();
    break;
  case 1:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead230;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow ComputeLumaPyramid (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_14983499c();
    break;
  case 2:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead410;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow GenSCDHistogram (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_149835d42();
    break;
  case 3:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead360;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow ComputeSCDDivergence (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_149835392();
    break;
  case 4:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead2f0;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow ComputeOpticalFlowAdv (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_149834e7a();
    break;
  case 5:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead3d0;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow FilterOpticalFlow (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_149835846();
    break;
  case 6:
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = &PTR_FUN_14bead490;
    puVar1[1] = L"FidelityFX-FSR3/OpticalFlow ScaleOpticalFlowAdv (CS)";
    *(undefined2 *)(puVar1 + 2) = 0;
    FUN_14983673a();
    break;
  default:
    return (undefined8 *)0x0;
  }
  *(undefined1 *)(puVar1 + 2) = in_stack_00000028;
  *(undefined1 *)((longlong)puVar1 + 0x11) = in_stack_00000030;
  return puVar1;
}



// FUNCTION 14982a79a FUN_14982a79a body=2457 status=ok
// SIG undefined FUN_14982a79a(void)

void FUN_14982a79a(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  uint *puVar1;
  wchar_t *pwVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int *piVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined1 uStack_61;
  uint uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_4;
  local_88 = param_1;
  local_80 = param_2;
  if (*(int *)(param_3 + 200) != 0) {
    plVar13 = (longlong *)(param_3 + 0x9a10);
    piVar12 = (int *)(param_3 + 0x8cd4);
    uVar15 = 0;
    do {
      if (*piVar12 == 1) {
        puVar5 = (undefined4 *)*plVar13;
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        uStack_60 = puVar5[2];
        uStack_5c = puVar5[3];
        local_68 = (undefined1)uVar6;
        uStack_67 = (undefined1)((uint)uVar6 >> 8);
        uStack_66 = (undefined2)((uint)uVar6 >> 0x10);
        uStack_64 = (undefined2)uVar7;
        uStack_62 = (undefined1)((uint)uVar7 >> 0x10);
        uStack_61 = (undefined1)((uint)uVar7 >> 0x18);
        FUN_14465d970(&local_70,&local_68);
        FUN_145e0a522();
        cVar8 = DAT_14cc2c6a9;
        if (DAT_14cc2c6a9 == '\x03') {
          cVar8 = '\x02';
        }
        lVar14 = CONCAT71(uStack_6f,local_70);
        local_90[2] = lVar14;
        *(char *)(local_90 + 3) = cVar8;
LAB_14982a89c:
        if (lVar14 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar14 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
      else if (*piVar12 == 0) {
        puVar5 = (undefined4 *)*plVar13;
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        uStack_60 = puVar5[2];
        uStack_5c = puVar5[3];
        local_58 = *(longlong *)(puVar5 + 4);
        uStack_50 = puVar5[6];
        uStack_4c = puVar5[7];
        local_68 = (undefined1)uVar6;
        uStack_67 = (undefined1)((uint)uVar6 >> 8);
        uStack_66 = (undefined2)((uint)uVar6 >> 0x10);
        uStack_64 = (undefined2)uVar7;
        uStack_62 = (undefined1)((uint)uVar7 >> 0x10);
        uStack_61 = (undefined1)((uint)uVar7 >> 0x18);
        FUN_14465d878(&local_70,&local_68);
        FUN_145e0a8bc();
        cVar8 = DAT_14cc2c611;
        if (DAT_14cc2c611 == '\x03') {
          cVar8 = '\x02';
        }
        lVar14 = CONCAT71(uStack_6f,local_70);
        *local_90 = lVar14;
        *(char *)(local_90 + 1) = cVar8;
        goto LAB_14982a89c;
      }
      uVar15 = uVar15 + 1;
      plVar13 = plVar13 + 2;
      piVar12 = piVar12 + 0x23;
    } while (uVar15 < *(uint *)(param_3 + 200));
  }
  if (*(int *)(param_3 + 0xac) != 0) {
    lVar14 = 0x23d8;
    uVar15 = 0;
    do {
      pwVar2 = (wchar_t *)(param_3 + lVar14);
      iVar9 = wcscmp(pwVar2,L"r_input_color");
      if (iVar9 == 0) {
        lVar10 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_90[4] = lVar10;
      }
      iVar9 = wcscmp(pwVar2,L"r_optical_flow_input");
      if (iVar9 == 0) {
        lVar10 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_90[5] = lVar10;
      }
      iVar9 = wcscmp(pwVar2,L"r_optical_flow_previous_input");
      if (iVar9 == 0) {
        lVar10 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_90[6] = lVar10;
      }
      iVar9 = wcscmp(pwVar2,L"r_optical_flow");
      if (iVar9 == 0) {
        lVar10 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_90[7] = lVar10;
      }
      iVar9 = wcscmp(pwVar2,L"r_optical_flow_previous");
      if (iVar9 == 0) {
        lVar10 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x8f04 + uVar15 * 4));
        local_90[8] = lVar10;
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x8c;
    } while (uVar15 < *(uint *)(param_3 + 0xac));
  }
  if (*(int *)(param_3 + 0xa8) != 0) {
    local_78 = local_88 + 0x198;
    lVar14 = local_88 + 0x70;
    lVar10 = 0xd8;
    uVar15 = 0;
    do {
      pwVar2 = (wchar_t *)(param_3 + lVar10);
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[9] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_1");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[10] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_2");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0xb] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_3");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0xc] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_4");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0xd] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_5");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0xe] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_input_level_6");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0xf] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x10] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_next_level");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x11] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_scd_histogram");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x12] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_scd_previous_histogram");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x13] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_scd_temp");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x14] = lVar11;
      }
      iVar9 = wcscmp(pwVar2,L"rw_optical_flow_scd_output");
      if (iVar9 == 0) {
        uVar4 = *(undefined1 *)(param_3 + 0x9404 + uVar15 * 8);
        local_58 = FUN_149817d64(local_80,local_88,*(undefined4 *)(param_3 + 0x9408 + uVar15 * 8));
        local_68 = *(undefined1 *)(local_58 + 0x94);
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_62 = 0;
        uStack_60 = uStack_60 & 0xffffff00;
        local_70 = 0;
        local_98 = &local_70;
        uStack_67 = uVar4;
        lVar11 = FUN_144a96e92(local_78,lVar14,local_58 + 8,&local_68);
        local_90[0x15] = lVar11;
      }
      uVar15 = uVar15 + 1;
      lVar10 = lVar10 + 0x8c;
    } while (uVar15 < *(uint *)(param_3 + 0xa8));
  }
  local_90[0x16] = DAT_14c9c0de0;
  local_90[0x17] = DAT_14c9c0d80;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14982b134 FUN_14982b134 body=38 status=ok
// SIG undefined FUN_14982b134(void)

undefined8 FUN_14982b134(undefined8 param_1,int param_2)

{
  FUN_149828068();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982b15a FUN_14982b15a body=38 status=ok
// SIG undefined FUN_14982b15a(void)

undefined8 FUN_14982b15a(undefined8 param_1,int param_2)

{
  FUN_145984552();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982b180 FUN_14982b180 body=38 status=ok
// SIG undefined FUN_14982b180(void)

undefined8 FUN_14982b180(undefined8 param_1,int param_2)

{
  FUN_145806982();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14982b1a6 FUN_14982b1a6 body=138 status=ok
// SIG undefined FUN_14982b1a6(void)

code * FUN_14982b1a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputVelocity";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3c4bc;
}



// FUNCTION 14982b234 FUN_14982b234 body=95 status=ok
// SIG undefined FUN_14982b234(void)

undefined8 * FUN_14982b234(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146131365(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14982b294(param_1,iVar1);
      FUN_14982b2f6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14982b294 FUN_14982b294 body=98 status=ok
// SIG undefined FUN_14982b294(void)

void FUN_14982b294(longlong param_1,int param_2,int param_3)

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



// FUNCTION 14982b2f6 FUN_14982b2f6 body=38 status=ok
// SIG undefined FUN_14982b2f6(void)

void FUN_14982b2f6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_2 + lVar2 * 8);
      *(longlong *)(param_1 + lVar2 * 8) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != (int)lVar2);
  }
  return;
}



// FUNCTION 14982b31c FUN_14982b31c body=48 status=ok
// SIG undefined FUN_14982b31c(void)

void FUN_14982b31c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14982b34c FUN_14982b34c body=233 status=ok
// SIG undefined FUN_14982b34c(void)

longlong FUN_14982b34c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"FirstFrame",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"FirstFrameWithUI",0);
  FUN_147440a6c(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"SecondFrame",0);
  FUN_147440a6c(param_1 + 0xec,*(undefined8 *)(param_2 + 0x28),L"SecondFrameWithUI",0);
  FUN_1474409b8(param_1 + 0xf0,*(undefined8 *)(param_2 + 0x28),L"ViewSize",0);
  FUN_1474409b8(param_1 + 0xf6,*(undefined8 *)(param_2 + 0x28),L"ViewMin",0);
  return param_1;
}



// FUNCTION 14982b435 FUN_14982b435 body=184 status=ok
// SIG undefined FUN_14982b435(void)

void FUN_14982b435(longlong *param_1,undefined2 *param_2,undefined8 param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong lVar4;
  ushort uVar5;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 *local_50;
  ushort *local_48;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    uVar5 = 8;
    if (uVar1 < 8) {
      uVar5 = uVar1;
    }
    uVar2 = *param_2;
    uVar3 = param_2[1];
    lVar4 = param_1[2];
    FUN_144ab3e68(*param_1,param_1 + 1,uVar5,param_3);
    local_48 = &local_32;
    local_50 = &local_34;
    local_58 = &local_36;
    local_38 = uVar2;
    local_36 = uVar3;
    local_34 = (short)lVar4;
    local_32 = uVar5;
    FUN_144ab3f26(*param_1,*param_1 + 0x38,param_1 + 3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982b4ee FUN_14982b4ee body=138 status=ok
// SIG undefined FUN_14982b4ee(void)

code * FUN_14982b4ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid12";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1980000008c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b578;
}



// FUNCTION 14982b578 FUN_14982b578 body=138 status=ok
// SIG undefined FUN_14982b578(void)

code * FUN_14982b578(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid11";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000008b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b602;
}



// FUNCTION 14982b602 FUN_14982b602 body=138 status=ok
// SIG undefined FUN_14982b602(void)

code * FUN_14982b602(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid10";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1880000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762f6a;
}



// FUNCTION 14982b68c FUN_14982b68c body=138 status=ok
// SIG undefined FUN_14982b68c(void)

code * FUN_14982b68c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid8";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17800000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b716;
}



// FUNCTION 14982b716 FUN_14982b716 body=138 status=ok
// SIG undefined FUN_14982b716(void)

code * FUN_14982b716(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid7";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000087;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b7a0;
}



// FUNCTION 14982b7a0 FUN_14982b7a0 body=138 status=ok
// SIG undefined FUN_14982b7a0(void)

code * FUN_14982b7a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid6";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16800000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b82a;
}



// FUNCTION 14982b82a FUN_14982b82a body=138 status=ok
// SIG undefined FUN_14982b82a(void)

code * FUN_14982b82a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid5";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16000000085;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa658a;
}



// FUNCTION 14982b8b4 FUN_14982b8b4 body=138 status=ok
// SIG undefined FUN_14982b8b4(void)

code * FUN_14982b8b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b93e;
}



// FUNCTION 14982b93e FUN_14982b93e body=138 status=ok
// SIG undefined FUN_14982b93e(void)

code * FUN_14982b93e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982b9c8;
}



// FUNCTION 14982b9c8 FUN_14982b9c8 body=138 status=ok
// SIG undefined FUN_14982b9c8(void)

code * FUN_14982b9c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid1";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982ba52;
}



// FUNCTION 14982ba52 FUN_14982ba52 body=138 status=ok
// SIG undefined FUN_14982ba52(void)

code * FUN_14982ba52(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_pyramid0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982badc;
}



// FUNCTION 14982badc FUN_14982badc body=138 status=ok
// SIG undefined FUN_14982badc(void)

code * FUN_14982badc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_inpainting_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000007f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bb66;
}



// FUNCTION 14982bb66 FUN_14982bb66 body=138 status=ok
// SIG undefined FUN_14982bb66(void)

code * FUN_14982bb66(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_counters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1280000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bbf0;
}



// FUNCTION 14982bbf0 FUN_14982bbf0 body=138 status=ok
// SIG undefined FUN_14982bbf0(void)

code * FUN_14982bbf0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_motion_vector_field_y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bc7a;
}



// FUNCTION 14982bc7a FUN_14982bc7a body=138 status=ok
// SIG undefined FUN_14982bc7a(void)

code * FUN_14982bc7a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_motion_vector_field_x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1180000007c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bd04;
}



// FUNCTION 14982bd04 FUN_14982bd04 body=138 status=ok
// SIG undefined FUN_14982bd04(void)

code * FUN_14982bd04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_game_motion_vector_field_y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa6476;
}



// FUNCTION 14982bd8e FUN_14982bd8e body=138 status=ok
// SIG undefined FUN_14982bd8e(void)

code * FUN_14982bd8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_disocclusion_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982be18;
}



// FUNCTION 14982be18 FUN_14982be18 body=138 status=ok
// SIG undefined FUN_14982be18(void)

code * FUN_14982be18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145aa6500;
}



// FUNCTION 14982bea2 FUN_14982bea2 body=138 status=ok
// SIG undefined FUN_14982bea2(void)

code * FUN_14982bea2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_reconstructed_depth_previous_frame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe800000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146762ff2;
}



// FUNCTION 14982bf2c FUN_14982bf2c body=138 status=ok
// SIG undefined FUN_14982bf2c(void)

code * FUN_14982bf2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_dilated_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd800000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982bfb6;
}



// FUNCTION 14982bfb6 FUN_14982bfb6 body=138 status=ok
// SIG undefined FUN_14982bfb6(void)

code * FUN_14982bfb6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_counters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd000000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c040;
}



// FUNCTION 14982c040 FUN_14982c040 body=138 status=ok
// SIG undefined FUN_14982c040(void)

code * FUN_14982c040(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_distortion_field";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c0ca;
}



// FUNCTION 14982c0ca FUN_14982c0ca body=138 status=ok
// SIG undefined FUN_14982c0ca(void)

code * FUN_14982c0ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_present_backbuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000071;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c154;
}



// FUNCTION 14982c154 FUN_14982c154 body=138 status=ok
// SIG undefined FUN_14982c154(void)

code * FUN_14982c154(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_inpainting_pyramid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c1de;
}



// FUNCTION 14982c1de FUN_14982c1de body=138 status=ok
// SIG undefined FUN_14982c1de(void)

code * FUN_14982c1de(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_inpainting_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c268;
}



// FUNCTION 14982c268 FUN_14982c268 body=138 status=ok
// SIG undefined FUN_14982c268(void)

code * FUN_14982c268(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa80000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c2f2;
}



// FUNCTION 14982c2f2 FUN_14982c2f2 body=138 status=ok
// SIG undefined FUN_14982c2f2(void)

code * FUN_14982c2f2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_scd";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c37c;
}



// FUNCTION 14982c37c FUN_14982c37c body=138 status=ok
// SIG undefined FUN_14982c37c(void)

code * FUN_14982c37c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_global_motion";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c406;
}



// FUNCTION 14982c406 FUN_14982c406 body=138 status=ok
// SIG undefined FUN_14982c406(void)

code * FUN_14982c406(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_confidence";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c490;
}



// FUNCTION 14982c490 FUN_14982c490 body=138 status=ok
// SIG undefined FUN_14982c490(void)

code * FUN_14982c490(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c51a;
}



// FUNCTION 14982c51a FUN_14982c51a body=138 status=ok
// SIG undefined FUN_14982c51a(void)

code * FUN_14982c51a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_motion_vector_field_y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c5a4;
}



// FUNCTION 14982c5a4 FUN_14982c5a4 body=138 status=ok
// SIG undefined FUN_14982c5a4(void)

code * FUN_14982c5a4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_motion_vector_field_x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c62e;
}



// FUNCTION 14982c62e FUN_14982c62e body=138 status=ok
// SIG undefined FUN_14982c62e(void)

code * FUN_14982c62e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_game_motion_vector_field_y";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c6b8;
}



// FUNCTION 14982c6b8 FUN_14982c6b8 body=138 status=ok
// SIG undefined FUN_14982c6b8(void)

code * FUN_14982c6b8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_game_motion_vector_field_x";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c742;
}



// FUNCTION 14982c742 FUN_14982c742 body=138 status=ok
// SIG undefined FUN_14982c742(void)

code * FUN_14982c742(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_disocclusion_mask";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c7cc;
}



// FUNCTION 14982c7cc FUN_14982c7cc body=138 status=ok
// SIG undefined FUN_14982c7cc(void)

code * FUN_14982c7cc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_current_interpolation_source";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c856;
}



// FUNCTION 14982c856 FUN_14982c856 body=138 status=ok
// SIG undefined FUN_14982c856(void)

code * FUN_14982c856(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_previous_interpolation_source";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c8e0;
}



// FUNCTION 14982c8e0 FUN_14982c8e0 body=138 status=ok
// SIG undefined FUN_14982c8e0(void)

code * FUN_14982c8e0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_reconstructed_depth_interpolated_frame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c96a;
}



// FUNCTION 14982c96a FUN_14982c96a body=138 status=ok
// SIG undefined FUN_14982c96a(void)

code * FUN_14982c96a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_reconstructed_depth_previous_frame";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982c9f4;
}



// FUNCTION 14982c9f4 FUN_14982c9f4 body=138 status=ok
// SIG undefined FUN_14982c9f4(void)

code * FUN_14982c9f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_dilated_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982ca7e;
}



// FUNCTION 14982ca7e FUN_14982ca7e body=138 status=ok
// SIG undefined FUN_14982ca7e(void)

code * FUN_14982ca7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_dilated_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982cb08;
}



// FUNCTION 14982cb08 FUN_14982cb08 body=138 status=ok
// SIG undefined FUN_14982cb08(void)

code * FUN_14982cb08(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_motion_vectors";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982cb92;
}



// FUNCTION 14982cb92 FUN_14982cb92 body=138 status=ok
// SIG undefined FUN_14982cb92(void)

code * FUN_14982cb92(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_input_depth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e0a0f0;
}



// FUNCTION 14982cc20 FUN_14982cc20 body=143 status=ok
// SIG undefined FUN_14982cc20(void)

undefined8 FUN_14982cc20(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982ccb0 FUN_14982ccb0 body=126 status=ok
// SIG undefined FUN_14982ccb0(void)

undefined8 FUN_14982ccb0(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_149820e8e(local_a8);
  FUN_149820f82(param_1,local_a8);
  FUN_14743eafb(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982cd30 FUN_14982cd30 body=143 status=ok
// SIG undefined FUN_14982cd30(void)

undefined8 FUN_14982cd30(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982cdc0 FUN_14982cdc0 body=143 status=ok
// SIG undefined FUN_14982cdc0(void)

undefined8 FUN_14982cdc0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982ce50 FUN_14982ce50 body=143 status=ok
// SIG undefined FUN_14982ce50(void)

undefined8 FUN_14982ce50(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982cee0 FUN_14982cee0 body=143 status=ok
// SIG undefined FUN_14982cee0(void)

undefined8 FUN_14982cee0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982cf70 FUN_14982cf70 body=143 status=ok
// SIG undefined FUN_14982cf70(void)

undefined8 FUN_14982cf70(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d000 FUN_14982d000 body=143 status=ok
// SIG undefined FUN_14982d000(void)

undefined8 FUN_14982d000(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d090 FUN_14982d090 body=143 status=ok
// SIG undefined FUN_14982d090(void)

undefined8 FUN_14982d090(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d120 FUN_14982d120 body=143 status=ok
// SIG undefined FUN_14982d120(void)

undefined8 FUN_14982d120(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d1b0 FUN_14982d1b0 body=143 status=ok
// SIG undefined FUN_14982d1b0(void)

undefined8 FUN_14982d1b0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d240 FUN_14982d240 body=143 status=ok
// SIG undefined FUN_14982d240(void)

undefined8 FUN_14982d240(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982ccb0(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145aa6372();
  local_b8 = &DAT_14cc2c950;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982d2d0 FUN_14982d2d0 body=138 status=ok
// SIG undefined FUN_14982d2d0(void)

code * FUN_14982d2d0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fJitter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d35a;
}



// FUNCTION 14982d35a FUN_14982d35a body=138 status=ok
// SIG undefined FUN_14982d35a(void)

code * FUN_14982d35a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"_pad1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c00000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d3e4;
}



// FUNCTION 14982d3e4 FUN_14982d3e4 body=138 status=ok
// SIG undefined FUN_14982d3e4(void)

code * FUN_14982d3e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fTanHalfFOV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000041;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146763102;
}



// FUNCTION 14982d46e FUN_14982d46e body=138 status=ok
// SIG undefined FUN_14982d46e(void)

code * FUN_14982d46e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"backbufferTransferFunction";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c0000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d4f8;
}



// FUNCTION 14982d4f8 FUN_14982d4f8 body=138 status=ok
// SIG undefined FUN_14982d4f8(void)

code * FUN_14982d4f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"debugBarColor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d582;
}



// FUNCTION 14982d582 FUN_14982d582 body=138 status=ok
// SIG undefined FUN_14982d582(void)

code * FUN_14982d582(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"interpolationRectSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x780000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d60c;
}



// FUNCTION 14982d60c FUN_14982d60c body=138 status=ok
// SIG undefined FUN_14982d60c(void)

code * FUN_14982d60c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"interpolationRectBase";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x700000003c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d696;
}



// FUNCTION 14982d696 FUN_14982d696 body=138 status=ok
// SIG undefined FUN_14982d696(void)

code * FUN_14982d696(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumInstances";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c0000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eee3ec;
}



// FUNCTION 14982d720 FUN_14982d720 body=138 status=ok
// SIG undefined FUN_14982d720(void)

code * FUN_14982d720(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"maxRenderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d7aa;
}



// FUNCTION 14982d7aa FUN_14982d7aa body=138 status=ok
// SIG undefined FUN_14982d7aa(void)

code * FUN_14982d7aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"dispatchFlags";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5c00000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d834;
}



// FUNCTION 14982d834 FUN_14982d834 body=138 status=ok
// SIG undefined FUN_14982d834(void)

code * FUN_14982d834(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"opticalFlowBlockSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d8be;
}



// FUNCTION 14982d8be FUN_14982d8be body=138 status=ok
// SIG undefined FUN_14982d8be(void)

code * FUN_14982d8be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"opticalFlowScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d948;
}



// FUNCTION 14982d948 FUN_14982d948 body=138 status=ok
// SIG undefined FUN_14982d948(void)

code * FUN_14982d948(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"distortionFieldSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000035;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982d9d2;
}



// FUNCTION 14982d9d2 FUN_14982d9d2 body=138 status=ok
// SIG undefined FUN_14982d9d2(void)

code * FUN_14982d9d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HUDLessAttachedFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4400000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eee2d8;
}



// FUNCTION 14982da5c FUN_14982da5c body=138 status=ok
// SIG undefined FUN_14982da5c(void)

code * FUN_14982da5c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"fDeviceToViewDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982dae6;
}



// FUNCTION 14982dae6 FUN_14982dae6 body=138 status=ok
// SIG undefined FUN_14982dae6(void)

code * FUN_14982dae6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"reset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000031;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982db70;
}



// FUNCTION 14982db70 FUN_14982db70 body=138 status=ok
// SIG undefined FUN_14982db70(void)

code * FUN_14982db70(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Mode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000030;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eee362;
}



// FUNCTION 14982dbfa FUN_14982dbfa body=138 status=ok
// SIG undefined FUN_14982dbfa(void)

code * FUN_14982dbfa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"cameraFar";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c0000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982dc84;
}



// FUNCTION 14982dc84 FUN_14982dc84 body=138 status=ok
// SIG undefined FUN_14982dc84(void)

code * FUN_14982dc84(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"cameraNear";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14676318a;
}



// FUNCTION 14982dd0e FUN_14982dd0e body=138 status=ok
// SIG undefined FUN_14982dd0e(void)

code * FUN_14982dd0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"displaySize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982dd98;
}



// FUNCTION 14982dd98 FUN_14982dd98 body=132 status=ok
// SIG undefined FUN_14982dd98(void)

undefined1 * FUN_14982dd98(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"renderSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14982de1c;
}



// FUNCTION 14982de20 FUN_14982de20 body=138 status=ok
// SIG undefined FUN_14982de20(void)

code * FUN_14982de20(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"s_LinearClamp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982deaa;
}



// FUNCTION 14982deaa FUN_14982deaa body=138 status=ok
// SIG undefined FUN_14982deaa(void)

code * FUN_14982deaa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_scd_output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982df34;
}



// FUNCTION 14982df34 FUN_14982df34 body=138 status=ok
// SIG undefined FUN_14982df34(void)

code * FUN_14982df34(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_scd_temp";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146763322;
}



// FUNCTION 14982dfbe FUN_14982dfbe body=138 status=ok
// SIG undefined FUN_14982dfbe(void)

code * FUN_14982dfbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_next_level";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e048;
}



// FUNCTION 14982e048 FUN_14982e048 body=138 status=ok
// SIG undefined FUN_14982e048(void)

code * FUN_14982e048(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e0d2;
}



// FUNCTION 14982e0d2 FUN_14982e0d2 body=138 status=ok
// SIG undefined FUN_14982e0d2(void)

code * FUN_14982e0d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input_level_6";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e15c;
}



// FUNCTION 14982e15c FUN_14982e15c body=138 status=ok
// SIG undefined FUN_14982e15c(void)

code * FUN_14982e15c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input_level_5";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e1e6;
}



// FUNCTION 14982e1e6 FUN_14982e1e6 body=138 status=ok
// SIG undefined FUN_14982e1e6(void)

code * FUN_14982e1e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input_level_4";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e270;
}



// FUNCTION 14982e270 FUN_14982e270 body=138 status=ok
// SIG undefined FUN_14982e270(void)

code * FUN_14982e270(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input_level_3";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e2fa;
}



// FUNCTION 14982e2fa FUN_14982e2fa body=138 status=ok
// SIG undefined FUN_14982e2fa(void)

code * FUN_14982e2fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input_level_2";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x580000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c9d540;
}



// FUNCTION 14982e384 FUN_14982e384 body=138 status=ok
// SIG undefined FUN_14982e384(void)

code * FUN_14982e384(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"rw_optical_flow_input";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e40e;
}



// FUNCTION 14982e40e FUN_14982e40e body=138 status=ok
// SIG undefined FUN_14982e40e(void)

code * FUN_14982e40e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_previous";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000004c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e498;
}



// FUNCTION 14982e498 FUN_14982e498 body=138 status=ok
// SIG undefined FUN_14982e498(void)

code * FUN_14982e498(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000004b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e522;
}



// FUNCTION 14982e522 FUN_14982e522 body=138 status=ok
// SIG undefined FUN_14982e522(void)

code * FUN_14982e522(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_previous_input";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14982e5ac;
}



// FUNCTION 14982e5ac FUN_14982e5ac body=138 status=ok
// SIG undefined FUN_14982e5ac(void)

code * FUN_14982e5ac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"r_optical_flow_input";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145c9d654;
}



// FUNCTION 14982e63a FUN_14982e63a body=143 status=ok
// SIG undefined FUN_14982e63a(void)

undefined8 FUN_14982e63a(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined1 local_b0;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_149820e8e(local_a8);
  FUN_14982e6ca(param_1,local_a8);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  FUN_145c9d2f2();
  local_b8 = &DAT_14cc2c9d8;
  local_b0 = 1;
  FUN_147440c52(param_1,param_1,uVar1,uVar2);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14982e6ca FUN_14982e6ca body=126 status=ok
// SIG undefined FUN_14982e6ca(void)

undefined8 FUN_14982e6ca(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_149820e8e(local_a8);
  FUN_149820f82(param_1,local_a8);
  FUN_14743eafb(*(undefined8 *)(param_2 + 0x78),*(undefined4 *)(param_2 + 0x80));
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


