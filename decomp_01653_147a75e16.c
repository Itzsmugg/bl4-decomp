// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147a75e16 FUN_147a75e16 body=322 status=ok
// SIG undefined FUN_147a75e16(void)

void FUN_147a75e16(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 147a75f5a FUN_147a75f5a body=201 status=ok
// SIG undefined FUN_147a75f5a(void)

void FUN_147a75f5a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[1];
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar5 = 0;
    bVar10 = *plVar2 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar2[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(plVar2 + iVar5,plVar2 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 147a76024 FUN_147a76024 body=136 status=ok
// SIG undefined FUN_147a76024(void)

void FUN_147a76024(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_147a760ae(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147a760ae FUN_147a760ae body=149 status=ok
// SIG undefined FUN_147a760ae(void)

void FUN_147a760ae(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,0x18);
  return;
}



// FUNCTION 147a76144 FUN_147a76144 body=63 status=ok
// SIG undefined FUN_147a76144(void)

void FUN_147a76144(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147a76184(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147a76184 FUN_147a76184 body=97 status=ok
// SIG undefined FUN_147a76184(void)

ulonglong FUN_147a76184(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147a761e6 FUN_147a761e6 body=352 status=ok
// SIG undefined FUN_147a761e6(void)

void FUN_147a761e6(longlong *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void *_Dst;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar3 != 0) {
    uVar4 = *(uint *)(param_1 + 1);
    iVar11 = uVar4 - iVar3;
    iVar10 = iVar11;
    if ((int)param_1[6] != -1) {
      lVar6 = *param_1;
      iVar12 = (int)param_1[6];
      uVar14 = uVar4;
      do {
        iVar5 = *(int *)(lVar6 + 4 + (longlong)iVar12 * 0x18);
        if (iVar12 < iVar11) {
          puVar1 = (undefined8 *)(lVar6 + (longlong)iVar12 * 0x18);
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          puVar9 = (undefined8 *)(lVar6 + 0x18 + (longlong)(int)(uVar14 - 1) * 0x18);
          uVar13 = uVar14;
          do {
            puVar15 = puVar9;
            uVar14 = uVar13 - 1;
            uVar16 = uVar13 + 0x1e;
            if (-1 < (int)uVar14) {
              uVar16 = uVar14;
            }
            puVar9 = puVar15 + -3;
            uVar13 = uVar14;
          } while ((*(uint *)((longlong)plVar17 + (longlong)((int)uVar16 >> 5) * 4) >>
                    (uVar14 & 0x1f) & 1) == 0);
          uVar7 = puVar15[-3];
          uVar8 = puVar15[-2];
          puVar1[2] = puVar15[-1];
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          plVar17 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar17 = param_1 + 2;
          }
          iVar18 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar18 = iVar12;
          }
          puVar2 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)iVar12 & 0x1f);
        }
        iVar12 = iVar5;
      } while (iVar5 != -1);
      iVar12 = (int)param_1[1] - uVar4;
      if (iVar12 != 0) {
        _Dst = (void *)((longlong)iVar11 * 0x18 + *param_1);
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar3 * 0x18),(longlong)iVar12 * 0x18);
        iVar10 = (int)param_1[1] - iVar3;
      }
    }
    *(int *)(param_1 + 1) = iVar10;
    FUN_144a6134a(param_1 + 2,iVar11,iVar3);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_144727cd0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147a76346 FUN_147a76346 body=132 status=ok
// SIG undefined FUN_147a76346(void)

void FUN_147a76346(longlong param_1,int param_2)

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



// FUNCTION 147a763cc FUN_147a763cc body=29 status=ok
// SIG undefined FUN_147a763cc(void)

undefined8 FUN_147a763cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a763ea FUN_147a763ea body=344 status=ok
// SIG undefined FUN_147a763ea(void)

void FUN_147a763ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
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
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cad6c58;
  if (DAT_14cad6c58 != 0) {
    LOCK();
    *(int *)(DAT_14cad6c58 + 8) = *(int *)(DAT_14cad6c58 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cad6c10;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14a8bcdb0;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a76544 FUN_147a76544 body=38 status=ok
// SIG undefined FUN_147a76544(void)

undefined8 FUN_147a76544(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a7656a FUN_147a7656a body=163 status=ok
// SIG undefined FUN_147a7656a(void)

void FUN_147a7656a(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1434d6168();
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
  FUN_1434d6250(param_1,param_2);
  return;
}



// FUNCTION 147a7660d FUN_147a7660d body=374 status=ok
// SIG undefined FUN_147a7660d(void)

void FUN_147a7660d(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147a76784 FUN_147a76784 body=29 status=ok
// SIG undefined FUN_147a76784(void)

undefined8 FUN_147a76784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a767a2 FUN_147a767a2 body=344 status=ok
// SIG undefined FUN_147a767a2(void)

void FUN_147a767a2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

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
  undefined4 uVar13;
  undefined8 uVar14;
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
  uVar14 = FUN_14321180c(param_2);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  uVar13 = FUN_144a8b328(uVar14,2);
  puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar15 = puVar16 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar16 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar15 = puVar16 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar15;
  local_50 = DAT_14cad6d68;
  if (DAT_14cad6d68 != 0) {
    LOCK();
    *(int *)(DAT_14cad6d68 + 8) = *(int *)(DAT_14cad6d68 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14cad6d20;
  local_68 = 2;
  local_58 = param_3;
  FUN_140068f1a(puVar16,param_2,&local_58,uVar13);
  *puVar16 = &PTR_FUN_14a8bcdd0;
  uVar13 = param_4[1];
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
  *(undefined4 *)((longlong)puVar16 + 0x1bc) = uVar13;
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
  FUN_140069100(param_1,puVar16);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a768fc FUN_147a768fc body=38 status=ok
// SIG undefined FUN_147a768fc(void)

undefined8 FUN_147a768fc(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147a76922 FUN_147a76922 body=163 status=ok
// SIG undefined FUN_147a76922(void)

void FUN_147a76922(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_1434d6484();
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
  FUN_1434d656c(param_1,param_2);
  return;
}



// FUNCTION 147a769c5 FUN_147a769c5 body=374 status=ok
// SIG undefined FUN_147a769c5(void)

void FUN_147a769c5(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 147a76b3c FUN_147a76b3c body=48 status=ok
// SIG undefined FUN_147a76b3c(void)

void FUN_147a76b3c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,0x10);
  }
  return;
}



// FUNCTION 147a76b6c FUN_147a76b6c body=231 status=ok
// SIG undefined FUN_147a76b6c(void)

int * FUN_147a76b6c(longlong *param_1,int *param_2)

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
      FUN_147a76c54(param_1,iVar6);
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



// FUNCTION 147a76c54 FUN_147a76c54 body=132 status=ok
// SIG undefined FUN_147a76c54(void)

void FUN_147a76c54(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147a76cda FUN_147a76cda body=114 status=ok
// SIG undefined FUN_147a76cda(void)

void FUN_147a76cda(longlong *param_1,int param_2)

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



// FUNCTION 147a76d50 FUN_147a76d50 body=178 status=ok
// SIG undefined FUN_147a76d50(void)

void FUN_147a76d50(float *param_1,float param_2,float *param_3,undefined8 param_4,undefined8 param_5
                  )

{
  float fVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  
  cVar2 = *(char *)(param_1 + 6);
  if (cVar2 == '\x01') {
    fVar7 = (param_2 - param_1[1]) * *param_1;
    fVar7 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar7);
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    auVar8 = roundss(auVar8,ZEXT416((uint)fVar7),0xb);
    uVar4 = (uint)fVar7;
    uVar6 = *(byte *)((longlong)param_1 + 0x19) - 1;
    uVar3 = uVar6;
    if (uVar4 < uVar6) {
      uVar3 = uVar4;
    }
    uVar5 = uVar4 + 1;
    if (uVar6 <= uVar4 + 1) {
      uVar5 = uVar6;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 2) +
                      (longlong)(int)(uVar3 * *(byte *)((longlong)param_1 + 0x1a)) * 4);
    *param_3 = (*(float *)(*(longlong *)(param_1 + 2) +
                          (longlong)(int)(uVar5 * *(byte *)((longlong)param_1 + 0x1a)) * 4) - fVar1)
               * (fVar7 - auVar8._0_4_) + fVar1;
  }
  else {
    if (cVar2 == '\x02') {
      FUN_147a76ef4(param_1,2,param_3,param_5);
      return;
    }
    if (cVar2 == '\x03') {
      FUN_147a76e02(param_1,3,param_3,param_4,param_5);
    }
    else {
      *param_3 = 0.0;
    }
  }
  return;
}



// FUNCTION 147a76e02 FUN_147a76e02 body=241 status=ok
// SIG undefined FUN_147a76e02(void)

void FUN_147a76e02(float *param_1,float param_2,float *param_3,int param_4,longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  float fVar8;
  
  if (param_5 == 0) {
    fVar6 = (float)FUN_140ce4006();
  }
  else {
    uVar3 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar3;
    fVar6 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
  }
  fVar8 = (param_2 - param_1[1]) * *param_1;
  fVar8 = (float)(-(uint)(0.0 <= fVar8) & (uint)fVar8);
  auVar7 = roundss(in_XMM2,ZEXT416((uint)fVar8),0xb);
  uVar1 = (uint)fVar8;
  uVar4 = *(byte *)((longlong)param_1 + 0x19) - 1;
  uVar3 = uVar4;
  if (uVar1 < uVar4) {
    uVar3 = uVar1;
  }
  uVar2 = uVar1 + 1;
  if (uVar4 <= uVar1 + 1) {
    uVar2 = uVar4;
  }
  lVar5 = (ulonglong)(0.5 < fVar6 && param_4 == 0 || 0 < param_4) * 4;
  fVar6 = *(float *)(lVar5 + *(longlong *)(param_1 + 2) +
                             (longlong)(int)(uVar3 * *(byte *)((longlong)param_1 + 0x1a)) * 4);
  *param_3 = (*(float *)(lVar5 + *(longlong *)(param_1 + 2) +
                                 (longlong)(int)(uVar2 * *(byte *)((longlong)param_1 + 0x1a)) * 4) -
             fVar6) * (fVar8 - auVar7._0_4_) + fVar6;
  return;
}



// FUNCTION 147a76ef4 FUN_147a76ef4 body=226 status=ok
// SIG undefined FUN_147a76ef4(void)

void FUN_147a76ef4(float *param_1,float param_2,float *param_3,longlong param_4)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  
  if (param_4 == 0) {
    fVar9 = (float)FUN_140ce4006();
  }
  else {
    uVar3 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar3;
    fVar9 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
  }
  fVar12 = (param_2 - param_1[1]) * *param_1;
  fVar12 = (float)(-(uint)(0.0 <= fVar12) & (uint)fVar12);
  auVar10 = roundss(in_XMM2,ZEXT416((uint)fVar12),0xb);
  uVar4 = (uint)fVar12;
  fVar12 = fVar12 - auVar10._0_4_;
  uVar7 = *(byte *)((longlong)param_1 + 0x19) - 1;
  uVar3 = uVar7;
  if (uVar4 < uVar7) {
    uVar3 = uVar4;
  }
  uVar5 = uVar4 + 1;
  if (uVar7 <= uVar4 + 1) {
    uVar5 = uVar7;
  }
  lVar2 = *(longlong *)(param_1 + 2);
  lVar8 = (longlong)(int)(uVar3 * *(byte *)((longlong)param_1 + 0x1a));
  lVar6 = (longlong)(int)(uVar5 * *(byte *)((longlong)param_1 + 0x1a));
  fVar11 = *(float *)(lVar2 + lVar8 * 4);
  fVar1 = *(float *)(lVar2 + 4 + lVar8 * 4);
  fVar11 = (*(float *)(lVar2 + lVar6 * 4) - fVar11) * fVar12 + fVar11;
  *param_3 = (((*(float *)(lVar2 + 4 + lVar6 * 4) - fVar1) * fVar12 + fVar1) - fVar11) * fVar9 +
             fVar11;
  return;
}



// FUNCTION 147a76fd6 FUN_147a76fd6 body=69 status=ok
// SIG undefined FUN_147a76fd6(void)

void FUN_147a76fd6(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x03') {
    FUN_147a770c6();
  }
  else {
    if (cVar1 == '\x02') {
      FUN_147a771f6();
      return;
    }
    if (cVar1 == '\x01') {
      FUN_147a7701c();
      return;
    }
  }
  return;
}



// FUNCTION 147a7701c FUN_147a7701c body=169 status=ok
// SIG undefined FUN_147a7701c(void)

void FUN_147a7701c(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
  fVar13 = (param_2 - param_1[1]) * *param_1;
  fVar13 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar13);
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auVar14 = roundss(auVar14,ZEXT416((uint)fVar13),0xb);
  uVar8 = (uint)fVar13;
  fVar13 = fVar13 - auVar14._0_4_;
  uVar11 = *(byte *)((longlong)param_1 + 0x19) - 1;
  uVar7 = uVar11;
  if (uVar8 < uVar11) {
    uVar7 = uVar8;
  }
  uVar9 = uVar8 + 1;
  if (uVar11 <= uVar8 + 1) {
    uVar9 = uVar11;
  }
  lVar6 = *(longlong *)(param_1 + 2);
  lVar12 = (longlong)(int)(uVar7 * *(byte *)((longlong)param_1 + 0x1a));
  lVar10 = (longlong)(int)(uVar9 * *(byte *)((longlong)param_1 + 0x1a));
  fVar1 = *(float *)(lVar6 + lVar12 * 4);
  fVar2 = *(float *)(lVar6 + 4 + lVar12 * 4);
  fVar3 = *(float *)(lVar6 + 4 + lVar10 * 4);
  fVar4 = *(float *)(lVar6 + 8 + lVar12 * 4);
  fVar5 = *(float *)(lVar6 + 8 + lVar10 * 4);
  *param_3 = (*(float *)(lVar6 + lVar10 * 4) - fVar1) * fVar13 + fVar1;
  param_3[1] = (fVar3 - fVar2) * fVar13 + fVar2;
  param_3[2] = (fVar5 - fVar4) * fVar13 + fVar4;
  return;
}



// FUNCTION 147a770c6 FUN_147a770c6 body=303 status=ok
// SIG undefined FUN_147a770c6(void)

void FUN_147a770c6(float *param_1,float param_2,float *param_3,int param_4,longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  float fVar13;
  
  if (param_5 == 0) {
    fVar11 = (float)FUN_140ce4006();
  }
  else {
    uVar8 = *(int *)(param_5 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_5 + 4) = uVar8;
    fVar11 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
  }
  fVar13 = (param_2 - param_1[1]) * *param_1;
  fVar13 = (float)(-(uint)(0.0 <= fVar13) & (uint)fVar13);
  uVar6 = (uint)fVar13;
  auVar12 = roundss(in_XMM2,ZEXT416((uint)fVar13),0xb);
  uVar9 = *(byte *)((longlong)param_1 + 0x19) - 1;
  uVar8 = uVar9;
  if (uVar6 < uVar9) {
    uVar8 = uVar6;
  }
  fVar13 = fVar13 - auVar12._0_4_;
  uVar7 = uVar6 + 1;
  if (uVar9 <= uVar6 + 1) {
    uVar7 = uVar9;
  }
  lVar1 = *(longlong *)(param_1 + 2) +
          (longlong)(int)(uVar8 * *(byte *)((longlong)param_1 + 0x1a)) * 4;
  lVar2 = *(longlong *)(param_1 + 2) +
          (longlong)(int)(uVar7 * *(byte *)((longlong)param_1 + 0x1a)) * 4;
  uVar10 = (ulonglong)((uint)(0.5 < fVar11 && param_4 == 0 || 0 < param_4) * 0xc);
  fVar11 = *(float *)(uVar10 + 4 + lVar1);
  fVar3 = *(float *)(uVar10 + 4 + lVar2);
  fVar4 = *(float *)(uVar10 + 8 + lVar1);
  fVar5 = *(float *)(uVar10 + 8 + lVar2);
  *param_3 = (*(float *)(uVar10 + lVar2) - *(float *)(uVar10 + lVar1)) * fVar13 +
             *(float *)(uVar10 + lVar1);
  param_3[1] = (fVar3 - fVar11) * fVar13 + fVar11;
  param_3[2] = (fVar5 - fVar4) * fVar13 + fVar4;
  return;
}



// FUNCTION 147a771f6 FUN_147a771f6 body=608 status=ok
// SIG undefined FUN_147a771f6(void)

void FUN_147a771f6(float *param_1,float param_2,float *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if (param_4 == 0) {
    fVar20 = (float)FUN_140ce4006();
    fVar21 = (float)FUN_140ce4006();
    fVar14 = (float)FUN_140ce4006();
  }
  else {
    iVar6 = *(int *)(param_4 + 4);
    fVar20 = (float)(iVar6 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
    fVar21 = (float)(iVar6 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0;
    uVar8 = iVar6 * 0x1c3c718d + 0xf50d3da5;
    *(uint *)(param_4 + 4) = uVar8;
    fVar14 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
  }
  switch(*(undefined1 *)(param_1 + 7)) {
  case 2:
    fVar14 = fVar20;
    break;
  case 3:
    fVar14 = fVar21;
    break;
  case 4:
    fVar14 = fVar20;
  case 1:
    fVar21 = fVar20;
  }
  fVar18 = (param_2 - param_1[1]) * *param_1;
  fVar18 = (float)(-(uint)(0.0 <= fVar18) & (uint)fVar18);
  auVar16 = roundss(in_XMM4,ZEXT416((uint)fVar18),0xb);
  uVar11 = (uint)fVar18;
  fVar18 = fVar18 - auVar16._0_4_;
  uVar9 = *(byte *)((longlong)param_1 + 0x19) - 1;
  uVar8 = uVar9;
  if (uVar11 < uVar9) {
    uVar8 = uVar11;
  }
  uVar12 = uVar11 + 1;
  if (uVar9 <= uVar11 + 1) {
    uVar12 = uVar9;
  }
  lVar7 = *(longlong *)(param_1 + 2);
  lVar10 = (longlong)(int)(uVar8 * *(byte *)((longlong)param_1 + 0x1a));
  lVar13 = (longlong)(int)(uVar12 * *(byte *)((longlong)param_1 + 0x1a));
  fVar19 = *(float *)(lVar7 + lVar10 * 4);
  fVar15 = *(float *)(lVar7 + 4 + lVar10 * 4);
  fVar19 = (*(float *)(lVar7 + lVar13 * 4) - fVar19) * fVar18 + fVar19;
  fVar15 = (*(float *)(lVar7 + 4 + lVar13 * 4) - fVar15) * fVar18 + fVar15;
  fVar17 = *(float *)(lVar7 + 8 + lVar10 * 4);
  fVar17 = (*(float *)(lVar7 + 8 + lVar13 * 4) - fVar17) * fVar18 + fVar17;
  fVar1 = *(float *)(lVar7 + 0xc + lVar10 * 4);
  fVar2 = *(float *)(lVar7 + 0x10 + lVar10 * 4);
  fVar3 = *(float *)(lVar7 + 0x10 + lVar13 * 4);
  fVar4 = *(float *)(lVar7 + 0x14 + lVar10 * 4);
  fVar5 = *(float *)(lVar7 + 0x14 + lVar13 * 4);
  *param_3 = (((*(float *)(lVar7 + 0xc + lVar13 * 4) - fVar1) * fVar18 + fVar1) - fVar19) * fVar20 +
             fVar19;
  param_3[1] = (((fVar3 - fVar2) * fVar18 + fVar2) - fVar15) * fVar21 + fVar15;
  param_3[2] = (((fVar5 - fVar4) * fVar18 + fVar4) - fVar17) * fVar14 + fVar17;
  return;
}



// FUNCTION 147a77456 FUN_147a77456 body=153 status=ok
// SIG undefined FUN_147a77456(void)

undefined8 FUN_147a77456(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1401a700c(&local_2c,0x194);
  lVar2 = 0x28;
  if (uVar1 != local_2c) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1401a700c(&local_2c,0x195);
    lVar2 = 0x58;
    if (uVar1 != local_2c) {
      uVar3 = 0;
      goto LAB_147a774cb;
    }
  }
  uVar3 = *(undefined8 *)(lVar2 + param_2 + *(int *)(param_1 + 0x44));
LAB_147a774cb:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a774f0 FUN_147a774f0 body=25 status=ok
// SIG undefined FUN_147a774f0(void)

bool FUN_147a774f0(longlong param_1)

{
  bool bVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (bVar1 = true, *(char *)(param_1 + 0x19) == '\0')) {
    bVar1 = *(longlong *)(param_1 + 0x28) != 0;
  }
  return bVar1;
}



// FUNCTION 147a7750a FUN_147a7750a body=25 status=ok
// SIG undefined FUN_147a7750a(void)

bool FUN_147a7750a(longlong param_1)

{
  bool bVar1;
  
  if ((*(int *)(param_1 + 0x10) == 0) || (bVar1 = true, *(char *)(param_1 + 0x19) == '\0')) {
    bVar1 = *(longlong *)(param_1 + 0x58) != 0;
  }
  return bVar1;
}



// FUNCTION 147a77524 FUN_147a77524 body=152 status=ok
// SIG undefined FUN_147a77524(void)

void FUN_147a77524(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x19) == '\0')) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
    }
    local_44 = 0;
  }
  else {
    local_58 = param_4;
    FUN_147a76d50(param_1,param_2,&local_44,0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_44);
}



// FUNCTION 147a775de FUN_147a775de body=26 status=ok
// SIG undefined FUN_147a775de(void)

longlong FUN_147a775de(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x10) != 0)) {
    lVar1 = 0;
    if (*(char *)(param_1 + 0x19) != '\0') {
      lVar1 = param_1;
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 147a775f8 FUN_147a775f8 body=59 status=ok
// SIG undefined FUN_147a775f8(void)

void FUN_147a775f8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(int *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x19) == '\0')) &&
     (lVar1 = *(longlong *)(param_1 + 0x28), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0x28) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000147a7761c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar1 + 0x28,param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}



// FUNCTION 147a77634 caseD_20 body=5 status=ok
// SIG undefined caseD_20(void)

void switchD_143c3d4dc::caseD_20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  wchar_t *pwStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  wchar_t *pwStack_d0;
  wchar_t *pwStack_c8;
  code *pcStack_c0;
  undefined1 *puStack_b8;
  code **ppcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  code *pcStack_70;
  undefined1 auStack_68 [8];
  code *pcStack_60;
  undefined1 auStack_58 [8];
  code *pcStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = *(longlong **)(*param_2 + 8);
  lVar7 = *(longlong *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  lStack_78 = lVar7;
  if ((*(uint *)(lVar7 + 8) >> 10 & 1) != 0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,lVar7);
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(lVar7 + 0x110) != 0)) &&
       (0 < *(int *)(lVar7 + 0x58))) {
      (**(code **)(*plVar2 + 0x198))(plVar2);
    }
  }
  if (((*(byte *)(plVar2 + 5) & 5) == 0) && ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0)) {
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))(*(longlong **)(*param_2 + 8),&uStack_88);
    bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    if ((bVar4 & 0x20) == 0) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&uStack_80);
      bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    }
    if (-1 < (char)bVar4) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&lStack_78);
      lVar7 = lStack_78;
    }
  }
  if (DAT_14c949118 == 0) {
    pcStack_70 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(auStack_68,L"Class",1);
    puStack_b8 = &LAB_146891e90;
    pcStack_c0 = (code *)&LAB_146273097;
    pwStack_d0 = L"Engine";
    pwStack_c8 = (wchar_t *)CONCAT44(pwStack_c8._4_4_,199);
    uStack_d8 = 0x20;
    uStack_e0 = 0x10000000;
    pwStack_e8._0_4_ = 8;
    ppcStack_b0 = &pcStack_70;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      ppcStack_b0 = &pcStack_50;
      pcStack_50 = FUN_1449e2820;
      pcStack_a0 = FUN_14081d0ea;
      pcStack_a8 = FUN_14081d0ea;
      puStack_b8 = &LAB_1468c5283;
      pcStack_c0 = FUN_142809da0;
      pwStack_c8 = L"Engine";
      pwStack_d0 = (wchar_t *)0x400000000;
      uStack_d8 = CONCAT44(uStack_d8._4_4_,0x10000000);
      uStack_e0 = 8;
      pwStack_e8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      pcStack_60 = (code *)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      lStack_98 = DAT_14c948f88;
      FUN_1446f470e(auStack_58,L"Struct",1);
      ppcStack_b0 = &pcStack_60;
      puStack_b8 = &LAB_146891313;
      pcStack_c0 = FUN_146272f63;
      pwStack_d0 = L"Engine";
      pwStack_c8 = (wchar_t *)CONCAT44(pwStack_c8._4_4_,199);
      uStack_d8 = 8;
      uStack_e0 = 0x10000020;
      pwStack_e8._0_4_ = 8;
      FUN_14574b4b2(lStack_98);
      DAT_14c948f88 = lStack_98;
      lStack_90 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        ppcStack_b0 = &pcStack_50;
        pcStack_50 = FUN_1449e2820;
        pcStack_a0 = FUN_14081d0ea;
        pcStack_a8 = FUN_14081d0ea;
        puStack_b8 = &LAB_146856450;
        pcStack_c0 = FUN_1427b121c;
        pwStack_c8 = L"Engine";
        pwStack_d0 = (wchar_t *)0x0;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,0x10000021);
        uStack_e0 = 8;
        pwStack_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        lStack_98 = DAT_14c948f88;
      }
      DAT_14c948f88 = lStack_98;
      lStack_90 = DAT_14c927740;
      uVar6 = FUN_1400163b0();
      pwStack_e8 = L"Struct";
      FUN_14574b446(uVar6,lStack_98,lStack_90,L"/Script/CoreUObject");
    }
    pwStack_e8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar5,lVar3,L"/Script/CoreUObject");
  }
  if (lVar7 != DAT_14c949118) {
    if (((plVar2[0xd] == 0) || (*(longlong *)(plVar2[0xd] + 0x10) == 0)) &&
       (((*(byte *)(plVar2 + 5) & 0x42) == 0x40 &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951808)))) {
      FUN_144b3d300(&DAT_14c951808);
      if (DAT_14c951808 == -1) {
        FUN_145dfc00c(&DAT_14c951778);
        atexit((_func_5014 *)&LAB_142809c19);
        _Init_thread_footer(&DAT_14c951808);
      }
    }
    FUN_144938ae6(param_1,param_2);
  }
  FUN_1427f2558(param_1,param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x5c);
  lVar7 = (longlong)(int)(-iVar1 & (*(int *)(*(longlong *)(param_1 + 0x10) + 0x58) + iVar1) - 1U);
  (**(code **)(*plVar2 + 0x10))(plVar2,lVar7,lVar7);
  if ((uStack_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7763a FUN_147a7763a body=39 status=ok
// SIG undefined FUN_147a7763a(void)

undefined8 FUN_147a7763a(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 6) & 4) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147a77662 FUN_147a77662 body=39 status=ok
// SIG undefined FUN_147a77662(void)

undefined8 FUN_147a77662(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2c8))();
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 6) & 4) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147a776b6 FUN_147a776b6 body=38 status=ok
// SIG undefined FUN_147a776b6(void)

undefined8 FUN_147a776b6(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x2c0))(param_1,param_2,0,0);
  *param_3 = uVar1;
  return 1;
}



// FUNCTION 147a776dc FUN_147a776dc body=208 status=ok
// SIG undefined FUN_147a776dc(void)

double * FUN_147a776dc(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x19) != '\0')) {
    local_38 = param_6;
    FUN_147a76fd6(param_1,param_3,&local_24,param_5);
    *param_2 = (double)local_24;
    param_2[1] = (double)local_20;
    param_2[2] = (double)local_1c;
    if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
  }
  else {
    local_30 = param_6;
    local_38 = CONCAT44(local_38._4_4_,param_5);
    (**(code **)(*plVar1 + 0x2c0))(plVar1,param_2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 147a777ae FUN_147a777ae body=26 status=ok
// SIG undefined FUN_147a777ae(void)

longlong FUN_147a777ae(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(int *)(param_1 + 0x10) != 0)) {
    lVar1 = 0;
    if (*(char *)(param_1 + 0x19) != '\0') {
      lVar1 = param_1;
    }
    return lVar1;
  }
  return 0;
}



// FUNCTION 147a777c8 FUN_147a777c8 body=59 status=ok
// SIG undefined FUN_147a777c8(void)

void FUN_147a777c8(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((*(int *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x19) == '\0')) &&
     (lVar1 = *(longlong *)(param_1 + 0x58), lVar1 != 0)) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(lVar1 + 0x28) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000147a777ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(lVar1 + 0x28,param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x20);
  *param_3 = *(undefined4 *)(param_1 + 0x24);
  return;
}



// FUNCTION 147a77804 FUN_147a77804 body=57 status=ok
// SIG undefined FUN_147a77804(void)

void FUN_147a77804(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a7781a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c8))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x2c8));
    return;
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  param_2[1] = uVar2;
  param_3[2] = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *param_3 = *(undefined8 *)(param_1 + 0x40);
  param_3[1] = uVar2;
  return;
}



// FUNCTION 147a7783e caseD_20 body=5 status=ok
// SIG undefined caseD_20(void)

void switchD_143c3d4dc::caseD_20(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_108 [32];
  wchar_t *pwStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  wchar_t *pwStack_d0;
  wchar_t *pwStack_c8;
  code *pcStack_c0;
  undefined1 *puStack_b8;
  code **ppcStack_b0;
  code *pcStack_a8;
  code *pcStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  code *pcStack_70;
  undefined1 auStack_68 [8];
  code *pcStack_60;
  undefined1 auStack_58 [8];
  code *pcStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = *(longlong **)(*param_2 + 8);
  lVar7 = *(longlong *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x20);
  uStack_88 = *(undefined8 *)(param_1 + 0x18);
  lStack_78 = lVar7;
  if ((*(uint *)(lVar7 + 8) >> 10 & 1) != 0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,lVar7);
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(lVar7 + 0x110) != 0)) &&
       (0 < *(int *)(lVar7 + 0x58))) {
      (**(code **)(*plVar2 + 0x198))(plVar2);
    }
  }
  if (((*(byte *)(plVar2 + 5) & 5) == 0) && ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0)) {
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))(*(longlong **)(*param_2 + 8),&uStack_88);
    bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    if ((bVar4 & 0x20) == 0) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&uStack_80);
      bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    }
    if (-1 < (char)bVar4) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&lStack_78);
      lVar7 = lStack_78;
    }
  }
  if (DAT_14c949118 == 0) {
    pcStack_70 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(auStack_68,L"Class",1);
    puStack_b8 = &LAB_146891e90;
    pcStack_c0 = (code *)&LAB_146273097;
    pwStack_d0 = L"Engine";
    pwStack_c8 = (wchar_t *)CONCAT44(pwStack_c8._4_4_,199);
    uStack_d8 = 0x20;
    uStack_e0 = 0x10000000;
    pwStack_e8._0_4_ = 8;
    ppcStack_b0 = &pcStack_70;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      ppcStack_b0 = &pcStack_50;
      pcStack_50 = FUN_1449e2820;
      pcStack_a0 = FUN_14081d0ea;
      pcStack_a8 = FUN_14081d0ea;
      puStack_b8 = &LAB_1468c5283;
      pcStack_c0 = FUN_142809da0;
      pwStack_c8 = L"Engine";
      pwStack_d0 = (wchar_t *)0x400000000;
      uStack_d8 = CONCAT44(uStack_d8._4_4_,0x10000000);
      uStack_e0 = 8;
      pwStack_e8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      pcStack_60 = (code *)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      lStack_98 = DAT_14c948f88;
      FUN_1446f470e(auStack_58,L"Struct",1);
      ppcStack_b0 = &pcStack_60;
      puStack_b8 = &LAB_146891313;
      pcStack_c0 = FUN_146272f63;
      pwStack_d0 = L"Engine";
      pwStack_c8 = (wchar_t *)CONCAT44(pwStack_c8._4_4_,199);
      uStack_d8 = 8;
      uStack_e0 = 0x10000020;
      pwStack_e8._0_4_ = 8;
      FUN_14574b4b2(lStack_98);
      DAT_14c948f88 = lStack_98;
      lStack_90 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        ppcStack_b0 = &pcStack_50;
        pcStack_50 = FUN_1449e2820;
        pcStack_a0 = FUN_14081d0ea;
        pcStack_a8 = FUN_14081d0ea;
        puStack_b8 = &LAB_146856450;
        pcStack_c0 = FUN_1427b121c;
        pwStack_c8 = L"Engine";
        pwStack_d0 = (wchar_t *)0x0;
        uStack_d8 = CONCAT44(uStack_d8._4_4_,0x10000021);
        uStack_e0 = 8;
        pwStack_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        lStack_98 = DAT_14c948f88;
      }
      DAT_14c948f88 = lStack_98;
      lStack_90 = DAT_14c927740;
      uVar6 = FUN_1400163b0();
      pwStack_e8 = L"Struct";
      FUN_14574b446(uVar6,lStack_98,lStack_90,L"/Script/CoreUObject");
    }
    pwStack_e8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar5,lVar3,L"/Script/CoreUObject");
  }
  if (lVar7 != DAT_14c949118) {
    if (((plVar2[0xd] == 0) || (*(longlong *)(plVar2[0xd] + 0x10) == 0)) &&
       (((*(byte *)(plVar2 + 5) & 0x42) == 0x40 &&
        (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951808)))) {
      FUN_144b3d300(&DAT_14c951808);
      if (DAT_14c951808 == -1) {
        FUN_145dfc00c(&DAT_14c951778);
        atexit((_func_5014 *)&LAB_142809c19);
        _Init_thread_footer(&DAT_14c951808);
      }
    }
    FUN_144938ae6(param_1,param_2);
  }
  FUN_1427f2558(param_1,param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x5c);
  lVar7 = (longlong)(int)(-iVar1 & (*(int *)(*(longlong *)(param_1 + 0x10) + 0x58) + iVar1) - 1U);
  (**(code **)(*plVar2 + 0x10))(plVar2,lVar7,lVar7);
  if ((uStack_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77844 FUN_147a77844 body=39 status=ok
// SIG undefined FUN_147a77844(void)

undefined8 FUN_147a77844(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 6) & 4) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147a7786c FUN_147a7786c body=39 status=ok
// SIG undefined FUN_147a7786c(void)

undefined8 FUN_147a7786c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x2d0))();
  if ((cVar1 == '\0') || ((*(byte *)(param_1 + 6) & 4) == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147a778b2 FUN_147a778b2 body=46 status=ok
// SIG undefined FUN_147a778b2(void)

undefined8 FUN_147a778b2(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2c0))();
  return param_2;
}



// FUNCTION 147a7791c FUN_147a7791c body=132 status=ok
// SIG undefined FUN_147a7791c(void)

undefined8 FUN_147a7791c(longlong *param_1,undefined4 param_2,float *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_30,param_2,0);
  *param_3 = (float)local_30;
  param_3[1] = (float)local_28;
  param_3[2] = (float)local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a779a2 FUN_147a779a2 body=83 status=ok
// SIG undefined FUN_147a779a2(void)

undefined8 * FUN_147a779a2(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1414f0ad3(0,1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a779f6 FUN_147a779f6 body=117 status=ok
// SIG undefined FUN_147a779f6(void)

void FUN_147a779f6(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
    if (cVar1 != '\0') {
      FUN_147a77a6c(param_1,&local_30);
      goto LAB_147a77a40;
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_1414f0ad3(param_1,1);
LAB_147a77a40:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77a6c FUN_147a77a6c body=502 status=ok
// SIG undefined FUN_147a77a6c(void)

void FUN_147a77a6c(uint *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x2c8))();
  if (cVar2 == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1414f0ad3(param_1,1);
  }
  else {
    (**(code **)(*(longlong *)(*param_2 + 0x28) + 0x48))(*param_2 + 0x28,&local_8c,&local_90);
    fVar10 = (local_90 - local_8c) / 127.0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x2a8))();
    uVar3 = (**(code **)(*(longlong *)*param_2 + 0x2b0))();
    bVar9 = cVar2 != '\x01';
    *(bool *)((longlong)param_1 + 0x1b) = bVar9;
    *(char *)(param_1 + 6) = cVar2;
    *(undefined1 *)((longlong)param_1 + 0x19) = 0x80;
    *(char *)((longlong)param_1 + 0x1a) = (char)(1 << bVar9);
    *param_1 = -(uint)(0.0 < fVar10) & (uint)(1.0 / fVar10);
    param_1[1] = (uint)local_8c;
    puVar1 = param_1 + 2;
    uVar6 = 0x80 << bVar9;
    param_1[4] = 0;
    uVar7 = 0;
    uVar4 = uVar6;
    if (param_1[5] != uVar6) {
      FUN_14482f6fa(puVar1);
      uVar7 = param_1[4];
      uVar4 = param_1[5];
    }
    param_1[4] = uVar7 + uVar6;
    if (uVar4 - uVar7 < uVar6) {
      FUN_14475e4ac(puVar1);
    }
    iVar8 = 0;
    memset((void *)((longlong)(int)uVar7 * 4 + *(longlong *)(param_1 + 2)),0,
           (ulonglong)(uint)(0x200 << bVar9));
    *(undefined1 *)(param_1 + 7) = uVar3;
    do {
      (**(code **)(*(longlong *)*param_2 + 0x2b8))
                ((longlong *)*param_2,(float)iVar8 * fVar10 + local_8c,&local_88);
      uVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)puVar1 + (longlong)((iVar8 << bVar9) + (int)uVar5) * 4) =
             *(undefined4 *)((longlong)&local_88 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while ((uint)(1 << bVar9) != uVar5);
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x80);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a77c64 FUN_147a77c64 body=66 status=ok
// SIG undefined FUN_147a77c64(void)

void FUN_147a77c64(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1414f0ad3(param_1,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77ca8 FUN_147a77ca8 body=159 status=ok
// SIG undefined FUN_147a77ca8(void)

void FUN_147a77ca8(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2c8))(param_2);
    if (cVar1 != '\0') {
      uStack_28 = 0;
      uStack_23 = 0;
      local_38 = 0;
      uStack_30 = 0;
      uStack_2b = 0;
      FUN_147a77a6c(&local_38,&local_40);
      FUN_1434d825c(param_1,&local_38);
      if (CONCAT35(uStack_2b,uStack_30) != 0) {
        FUN_1400020a8();
      }
      goto LAB_147a77cf3;
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_2b = 0;
  FUN_1414f0ad3(param_1,1);
LAB_147a77cf3:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77d48 FUN_147a77d48 body=83 status=ok
// SIG undefined FUN_147a77d48(void)

undefined8 * FUN_147a77d48(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1414f0ad3(0,3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77d9c FUN_147a77d9c body=117 status=ok
// SIG undefined FUN_147a77d9c(void)

void FUN_147a77d9c(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
    if (cVar1 != '\0') {
      FUN_147a77e12(param_1,&local_30);
      goto LAB_147a77de6;
    }
  }
  local_28 = 0;
  uStack_20 = 0;
  FUN_1414f0ad3(param_1,3);
LAB_147a77de6:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a77e12 FUN_147a77e12 body=511 status=ok
// SIG undefined FUN_147a77e12(void)

void FUN_147a77e12(uint *param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_b8 [40];
  float local_90;
  float local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x2d0))();
  if (cVar2 == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1414f0ad3(param_1,3);
  }
  else {
    (**(code **)(*(longlong *)(*param_2 + 0x28) + 0x48))(*param_2 + 0x28,&local_8c,&local_90);
    fVar12 = (local_90 - local_8c) / 127.0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x2a8))();
    bVar11 = cVar2 != '\x01';
    uVar8 = 3 << bVar11;
    uVar3 = (**(code **)(*(longlong *)*param_2 + 0x2b0))();
    *(char *)(param_1 + 6) = cVar2;
    *(undefined1 *)((longlong)param_1 + 0x19) = 0x80;
    *(char *)((longlong)param_1 + 0x1a) = (char)uVar8;
    *(char *)((longlong)param_1 + 0x1b) = bVar11 * '\x03';
    *param_1 = -(uint)(0.0 < fVar12) & (uint)(1.0 / fVar12);
    param_1[1] = (uint)local_8c;
    puVar1 = param_1 + 2;
    uVar6 = 0x180 << bVar11;
    param_1[4] = 0;
    uVar10 = 0;
    uVar4 = uVar6;
    if (param_1[5] != uVar6) {
      FUN_14482f6fa(puVar1);
      uVar10 = param_1[4];
      uVar4 = param_1[5];
    }
    param_1[4] = uVar10 + uVar6;
    if (uVar4 - uVar10 < uVar6) {
      FUN_14475e4ac(puVar1);
    }
    lVar9 = 0;
    memset((void *)((longlong)(int)uVar10 * 4 + *(longlong *)(param_1 + 2)),0,
           (ulonglong)(uint)(0x600 << bVar11));
    *(undefined1 *)(param_1 + 7) = uVar3;
    lVar7 = 0;
    do {
      (**(code **)(*(longlong *)*param_2 + 0x2b8))
                ((longlong *)*param_2,(float)(int)lVar7 * fVar12 + local_8c,&local_88);
      uVar5 = 0;
      do {
        *(undefined4 *)(*(longlong *)puVar1 + lVar9 + uVar5 * 4) =
             *(undefined4 *)((longlong)&local_88 + uVar5 * 4);
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + (ulonglong)(uVar8 << 2);
    } while (lVar7 != 0x80);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a78012 FUN_147a78012 body=92 status=ok
// SIG undefined FUN_147a78012(void)

void FUN_147a78012(undefined8 param_1,double *param_2)

{
  undefined1 auStack_38 [36];
  float local_14;
  float local_10;
  float local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (float)param_2[2];
  local_10 = (float)param_2[1];
  local_14 = (float)*param_2;
  FUN_1414f0ad3(local_c,3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78070 FUN_147a78070 body=183 status=ok
// SIG undefined FUN_147a78070(void)

void FUN_147a78070(longlong param_1,double *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_58 [44];
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = (float)*param_2;
  local_2c[1] = (float)param_2[1];
  local_2c[2] = (float)param_2[2];
  bVar1 = *(byte *)(param_1 + 0x19);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x1b);
    lVar7 = *(longlong *)(param_1 + 8);
    bVar3 = *(byte *)(param_1 + 0x1a);
    uVar8 = 0;
    do {
      bVar5 = 1;
      lVar9 = lVar7;
      do {
        lVar6 = 0;
        do {
          *(float *)(lVar9 + lVar6 * 4) = local_2c[lVar6] * *(float *)(lVar9 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        lVar9 = lVar9 + (ulonglong)((uint)bVar2 * 4);
        bVar4 = (bool)(bVar2 != 0 & bVar5);
        bVar5 = 0;
      } while (bVar4);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + (ulonglong)bVar3 * 4;
    } while (uVar8 != bVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78128 FUN_147a78128 body=183 status=ok
// SIG undefined FUN_147a78128(void)

void FUN_147a78128(longlong param_1,double *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_58 [44];
  float local_2c [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = (float)*param_2;
  local_2c[1] = (float)param_2[1];
  local_2c[2] = (float)param_2[2];
  bVar1 = *(byte *)(param_1 + 0x19);
  if (bVar1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x1b);
    lVar7 = *(longlong *)(param_1 + 8);
    bVar3 = *(byte *)(param_1 + 0x1a);
    uVar8 = 0;
    do {
      bVar5 = 1;
      lVar9 = lVar7;
      do {
        lVar6 = 0;
        do {
          *(float *)(lVar9 + lVar6 * 4) = local_2c[lVar6] + *(float *)(lVar9 + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        lVar9 = lVar9 + (ulonglong)((uint)bVar2 * 4);
        bVar4 = (bool)(bVar2 != 0 & bVar5);
        bVar5 = 0;
      } while (bVar4);
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + (ulonglong)bVar3 * 4;
    } while (uVar8 != bVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a781e0 FUN_147a781e0 body=159 status=ok
// SIG undefined FUN_147a781e0(void)

void FUN_147a781e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 local_38;
  undefined5 uStack_30;
  undefined3 uStack_2b;
  undefined5 uStack_28;
  undefined8 uStack_23;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
    if (cVar1 != '\0') {
      uStack_28 = 0;
      uStack_23 = 0;
      local_38 = 0;
      uStack_30 = 0;
      uStack_2b = 0;
      FUN_147a77e12(&local_38,&local_40);
      FUN_1434d825c(param_1,&local_38);
      if (CONCAT35(uStack_2b,uStack_30) != 0) {
        FUN_1400020a8();
      }
      goto LAB_147a7822b;
    }
  }
  local_38 = 0;
  uStack_30 = 0;
  uStack_2b = 0;
  FUN_1414f0ad3(param_1,3);
LAB_147a7822b:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78280 FUN_147a78280 body=134 status=ok
// SIG undefined FUN_147a78280(void)

void FUN_147a78280(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined5 uStack_40;
  undefined3 uStack_3b;
  undefined5 uStack_38;
  undefined8 uStack_33;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2);
    if (cVar1 != '\0') {
      uStack_38 = 0;
      uStack_33 = 0;
      local_48 = 0;
      uStack_40 = 0;
      uStack_3b = 0;
      FUN_147a77e12(&local_48,&local_20);
      FUN_1434d8697(param_1,&local_48);
      if (CONCAT35(uStack_3b,uStack_40) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78308 FUN_147a78308 body=42 status=ok
// SIG undefined FUN_147a78308(void)

void FUN_147a78308(longlong param_1)

{
  FUN_1446e0b6e();
  if ((*(float *)(param_1 + 0x38) == 1.2345e-20) && (!NAN(*(float *)(param_1 + 0x38)))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147a783a2 FUN_147a783a2 body=67 status=ok
// SIG undefined FUN_147a783a2(void)

void FUN_147a783a2(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_140753fde(param_1 + 0x38);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78490 FUN_147a78490 body=67 status=ok
// SIG undefined FUN_147a78490(void)

void FUN_147a78490(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_147a784d4(param_1 + 0x10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a784d4 FUN_147a784d4 body=185 status=ok
// SIG undefined FUN_147a784d4(void)

void FUN_147a784d4(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 1) {
    *param_2 = *(undefined4 *)(*param_1 + 4);
    uVar6 = *(undefined4 *)(*param_1 + 4);
  }
  else {
    if (uVar2 != 0) {
      *param_2 = *(undefined4 *)(*param_1 + 4);
      *param_3 = *(undefined4 *)(*param_1 + 4);
      uVar3 = uVar2;
      if ((char)param_1[2] == '\0') {
        uVar3 = uVar2 - 1;
      }
      if ((int)uVar3 < 1) {
        return;
      }
      uVar4 = 0;
      do {
        uVar1 = uVar4 + 1;
        uVar5 = 0;
        if (uVar4 != uVar2 - 1) {
          uVar5 = uVar1;
        }
        FUN_1467f7181(*param_1 + uVar4 * 0x14,*param_1 + uVar5 * 0x14,param_2,param_3);
        uVar4 = uVar1;
      } while (uVar1 != uVar3);
      return;
    }
    uVar6 = *param_4;
    *param_2 = uVar6;
  }
  *param_3 = uVar6;
  return;
}



// FUNCTION 147a785d0 FUN_147a785d0 body=70 status=ok
// SIG undefined FUN_147a785d0(void)

void FUN_147a785d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0;
  FUN_140753fde(param_1 + 0x10,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78618 FUN_147a78618 body=130 status=ok
// SIG undefined FUN_147a78618(void)

undefined4 FUN_147a78618(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x10;
  local_34 = 0;
  local_34 = FUN_140753fde(lVar1,param_2,&local_34);
  uVar2 = FUN_147a7869c(lVar1,param_2,&local_34);
  FUN_147a78752(lVar1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7869c FUN_147a7869c body=182 status=ok
// SIG undefined FUN_147a7869c(void)

ulonglong FUN_147a7869c(longlong *param_1,float param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar6 = 0;
  }
  else {
    pfVar5 = (float *)*param_1;
    uVar6 = 0;
    do {
      if (param_2 < *pfVar5 || param_2 == *pfVar5) goto LAB_147a786db;
      uVar6 = uVar6 + 1;
      pfVar5 = pfVar5 + 5;
    } while (uVar2 != uVar6);
    uVar6 = (ulonglong)uVar2;
  }
LAB_147a786db:
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2 + 1) {
    FUN_147a3a88c(param_1,uVar2);
  }
  lVar4 = (uVar6 & 0xffffffff) * 0x14;
  memmove((void *)(*param_1 + lVar4 + 0x14),(void *)(*param_1 + lVar4),
          (ulonglong)(uVar2 - (int)uVar6) * 0x14);
  uVar1 = *param_3;
  lVar3 = *param_1;
  *(float *)(lVar3 + lVar4) = param_2;
  *(undefined4 *)(lVar3 + 4 + lVar4) = uVar1;
  *(undefined8 *)(lVar3 + 8 + lVar4) = 0;
  *(undefined1 *)(lVar3 + 0x10 + lVar4) = 0;
  return uVar6 & 0xffffffff;
}



// FUNCTION 147a78752 FUN_147a78752 body=504 status=ok
// SIG undefined FUN_147a78752(void)

void FUN_147a78752(longlong *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_98 [32];
  float local_78;
  float *local_70;
  undefined1 local_68;
  undefined4 *local_60;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_1[1];
  if (0 < (longlong)iVar4) {
    uVar8 = iVar4 - 1;
    lVar6 = (ulonglong)uVar8 * 0x14;
    uVar10 = 1;
    lVar11 = 0;
    do {
      if (lVar11 == 0) {
        uVar7 = 0;
        if ((char)param_1[2] != '\0') {
          uVar7 = uVar8;
        }
      }
      else {
        uVar7 = uVar10 - 2;
      }
      uVar9 = uVar10;
      if ((lVar6 == lVar11) && (uVar9 = uVar8, (char)param_1[2] != '\0')) {
        uVar9 = 0;
      }
      lVar5 = *param_1;
      bVar3 = *(byte *)(lVar5 + 0x10 + lVar11);
      if (bVar3 < 6) {
        puVar1 = (undefined4 *)(lVar5 + (longlong)(int)uVar7 * 0x14);
        pfVar2 = (float *)(lVar5 + (longlong)(int)uVar9 * 0x14);
        switch(bVar3) {
        case 0:
          fVar13 = *(float *)(lVar5 + 4 + lVar11);
          fVar12 = pfVar2[1] - fVar13;
          *(float *)(lVar5 + 0xc + lVar11) = fVar12;
          if ((5 < *(byte *)(puVar1 + 4)) || ((0x3aU >> (*(byte *)(puVar1 + 4) & 0x1f) & 1) == 0)) {
            fVar12 = fVar13 - (float)puVar1[1];
          }
          *(float *)(lVar5 + 8 + lVar11) = fVar12;
          break;
        default:
          if ((lVar11 == 0) || ((lVar6 == lVar11 && ((char)param_1[2] == '\0'))))
          goto switchD_147a787fd_caseD_2;
          if ((*(byte *)(puVar1 + 4) < 6) && ((0x3aU >> (*(byte *)(puVar1 + 4) & 0x1f) & 1) != 0)) {
            if ((lVar6 == lVar11) && ((char)param_1[2] != '\0')) {
              fVar13 = *(float *)(lVar5 + lVar11);
              local_78 = *(float *)((longlong)param_1 + 0x14) + fVar13;
            }
            else {
              local_78 = *pfVar2;
              fVar13 = *(float *)(lVar5 + lVar11);
            }
            local_70 = pfVar2 + 1;
            local_68 = bVar3 == 5;
            lVar5 = lVar5 + 4 + lVar11;
            local_60 = &local_4c;
            FUN_147a8b7d7(*puVar1,puVar1 + 1,fVar13,lVar5);
            *(undefined4 *)(lVar5 + 4) = local_4c;
            *(undefined4 *)(lVar5 + 8) = local_4c;
          }
          else {
            *(undefined4 *)(lVar5 + 8 + lVar11) = puVar1[2];
            *(undefined4 *)(lVar5 + 0xc + lVar11) = puVar1[3];
          }
          break;
        case 2:
switchD_147a787fd_caseD_2:
          *(undefined8 *)(lVar5 + 8 + lVar11) = 0;
          break;
        case 3:
        case 4:
          break;
        }
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x14;
    } while ((longlong)iVar4 * 0x14 != lVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a7894c FUN_147a7894c body=101 status=ok
// SIG undefined FUN_147a7894c(void)

void FUN_147a7894c(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 0x14),
            (void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 0x14 + 0x14),
            (longlong)(int)(~param_2 + iVar1) * 0x14);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar1 + -1;
  FUN_147a8b84c(param_1 + 0x10);
  FUN_147a78752(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a789b2 FUN_147a789b2 body=46 status=ok
// SIG undefined FUN_147a789b2(void)

undefined4 FUN_147a789b2(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147a789e0(param_1 + 0x10);
  FUN_147a78752(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 147a789e0 FUN_147a789e0 body=252 status=ok
// SIG undefined FUN_147a789e0(void)

uint FUN_147a789e0(longlong *param_1,uint param_2,undefined4 param_3)

{
  void *_Dst;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < (int)param_2) && (iVar5 = (int)param_1[1], (int)param_2 < iVar5)) {
    lVar4 = *param_1;
    uVar6 = (ulonglong)param_2;
    local_54 = *(undefined4 *)(lVar4 + 4 + uVar6 * 0x14);
    uVar3 = *(undefined1 *)(lVar4 + 0x10 + uVar6 * 0x14);
    uVar1 = *(undefined4 *)(lVar4 + 8 + uVar6 * 0x14);
    uVar2 = *(undefined4 *)(lVar4 + 0xc + uVar6 * 0x14);
    if (~param_2 + iVar5 != 0) {
      _Dst = (void *)(lVar4 + uVar6 * 0x14);
      memmove(_Dst,(void *)((longlong)_Dst + 0x14),(longlong)(int)(~param_2 + iVar5) * 0x14);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147a8b84c(param_1);
    param_2 = FUN_147a7869c(param_1,param_3,&local_54);
    lVar4 = (longlong)(int)param_2 * 0x14;
    *(undefined1 *)(*param_1 + 0x10 + lVar4) = uVar3;
    *(undefined4 *)(*param_1 + 8 + lVar4) = uVar1;
    *(undefined4 *)(*param_1 + 0xc + lVar4) = uVar2;
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78ade FUN_147a78ade body=44 status=ok
// SIG undefined FUN_147a78ade(void)

void FUN_147a78ade(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)param_3 * 0x14) = param_4;
  FUN_147a78752(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a78b0a FUN_147a78b0a body=43 status=ok
// SIG undefined FUN_147a78b0a(void)

void FUN_147a78b0a(longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)param_2 * 0x14) = param_3;
  FUN_147a78752(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a78b60 FUN_147a78b60 body=65 status=ok
// SIG undefined FUN_147a78b60(void)

void FUN_147a78b60(longlong param_1)

{
  FUN_1446e0b6e();
  if ((*(float *)(param_1 + 0x38) == 1.2345e-20) && (!NAN(*(float *)(param_1 + 0x38)))) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if ((*(float *)(param_1 + 0x3c) == 1.2345e-20) && (!NAN(*(float *)(param_1 + 0x3c)))) {
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 147a78ba2 FUN_147a78ba2 body=103 status=ok
// SIG undefined FUN_147a78ba2(void)

void FUN_147a78ba2(void)

{
  longlong in_R9;
  
  if (in_R9 == 0) {
    FUN_140ce4006();
  }
  else {
    *(int *)(in_R9 + 4) = *(int *)(in_R9 + 4) * 0xbb38435 + 0x3619636b;
  }
  return;
}



// FUNCTION 147a78d0c FUN_147a78d0c body=181 status=ok
// SIG undefined FUN_147a78d0c(void)

undefined8 FUN_147a78d0c(longlong param_1,undefined4 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  uStack_60 = 0;
  FUN_147a78dc2(param_1 + 0x38,&local_50,param_2);
  if (param_4 == 0) {
    auVar2._0_8_ = FUN_140ce4006();
    auVar2._8_8_ = extraout_XMM0_Qb;
  }
  else {
    uVar1 = *(int *)(param_4 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)(param_4 + 4) = uVar1;
    auVar2 = ZEXT416((uint)((float)(uVar1 >> 9 | 0x3f800000) + -1.0));
  }
  auVar3._8_8_ = auVar2._8_8_;
  auVar3._0_8_ = (double)auVar2._0_4_ * (local_48 - local_50) + local_50;
  auVar4._4_12_ = auVar3._4_12_;
  auVar4._0_4_ = (float)auVar3._0_8_;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return auVar4._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a78dc2 FUN_147a78dc2 body=685 status=ok
// SIG undefined FUN_147a78dc2(void)

double * FUN_147a78dc2(undefined8 *param_1,double *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  byte bVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  iVar16 = *(int *)(param_1 + 1) + -1;
  if ((*(int *)(param_1 + 1) == 0) || (iVar9 = _isnan((double)param_3), iVar9 != 0)) {
    fVar22 = *param_4;
    fVar21 = param_4[1];
    fVar23 = param_4[2];
    fVar18 = param_4[3];
    goto LAB_147a78e17;
  }
  pfVar6 = (float *)*param_1;
  if (*pfVar6 <= param_3) {
    iVar9 = *(int *)(param_1 + 1);
    uVar11 = (longlong)iVar9 - 1;
    if (pfVar6[uVar11 * 0x10] <= param_3) {
LAB_147a78ea7:
      iVar10 = (int)uVar11;
      if (iVar10 == -1) goto LAB_147a78e58;
    }
    else {
      iVar10 = 0;
      if (1 < iVar9) {
        uVar11 = 0;
        uVar14 = (longlong)iVar9;
        do {
          uVar15 = (ulonglong)((uint)((int)uVar11 + (int)uVar14) >> 1);
          if (pfVar6[uVar15 * 0x10] <= param_3) {
            uVar11 = uVar15;
            uVar15 = uVar14;
          }
          uVar14 = uVar15;
        } while (1 < (int)uVar15 - (int)uVar11);
        goto LAB_147a78ea7;
      }
    }
    bVar17 = *(byte *)(param_1 + 2);
    if (iVar10 == iVar16) {
      if ((bVar17 & 1) == 0) {
        pfVar6 = pfVar6 + (longlong)iVar16 * 0x10 + 2;
        fVar22 = *pfVar6;
        fVar21 = pfVar6[1];
        fVar23 = pfVar6[2];
        fVar18 = pfVar6[3];
        goto LAB_147a78e17;
      }
      bVar17 = 1;
      if (pfVar6[(longlong)iVar16 * 0x10] + *(float *)((longlong)param_1 + 0x14) <= param_3)
      goto LAB_147a78e58;
    }
    lVar12 = 0;
    if ((iVar10 == iVar16 & bVar17) == 0) {
      lVar12 = (longlong)(iVar10 + 1);
    }
    pfVar1 = pfVar6 + (longlong)iVar10 * 0x10;
    pfVar13 = pfVar6 + lVar12 * 0x10;
    if ((iVar10 == iVar16 & bVar17) == 0) {
      fVar22 = *pfVar13 - *pfVar1;
    }
    else {
      fVar22 = *(float *)((longlong)param_1 + 0x14);
    }
    if ((0.0 < fVar22) && (*(char *)(pfVar1 + 0xe) != '\x02')) {
      fVar21 = (param_3 - *pfVar1) / fVar22;
      if (*(char *)(pfVar1 + 0xe) != '\0') {
        dVar19 = (double)fVar22;
        dVar2 = *(double *)(pfVar13 + 8);
        dVar3 = *(double *)(pfVar1 + 0xc);
        fVar23 = fVar21 * fVar21;
        fVar22 = fVar21 * fVar23;
        dVar8 = (double)(((fVar22 + fVar22) - fVar23 * 3.0) + 1.0);
        dVar4 = *(double *)(pfVar1 + 4);
        dVar7 = (double)((fVar22 - (fVar23 + fVar23)) + fVar21);
        dVar20 = (double)(fVar23 * 3.0 - (fVar22 + fVar22));
        dVar5 = *(double *)(pfVar13 + 4);
        *param_2 = dVar20 * *(double *)(pfVar13 + 2) +
                   *(double *)(pfVar13 + 6) * dVar19 * (double)(fVar22 - fVar23) +
                   dVar19 * *(double *)(pfVar1 + 10) * dVar7 + dVar8 * *(double *)(pfVar1 + 2);
        param_2[1] = dVar5 * dVar20 +
                     dVar2 * dVar19 * (double)(fVar22 - fVar23) +
                     dVar3 * dVar19 * dVar7 + dVar4 * dVar8;
        return param_2;
      }
      dVar2 = *(double *)(pfVar13 + 4);
      dVar3 = *(double *)(pfVar1 + 4);
      *param_2 = (*(double *)(pfVar13 + 2) - *(double *)(pfVar1 + 2)) * (double)fVar21 +
                 *(double *)(pfVar1 + 2);
      param_2[1] = (dVar2 - dVar3) * (double)fVar21 + dVar3;
      return param_2;
    }
    pfVar6 = pfVar6 + (longlong)iVar10 * 0x10 + 2;
    fVar22 = *pfVar6;
    fVar21 = pfVar6[1];
    fVar23 = pfVar6[2];
    fVar18 = pfVar6[3];
  }
  else {
LAB_147a78e58:
    fVar22 = pfVar6[2];
    fVar21 = pfVar6[3];
    fVar23 = pfVar6[4];
    fVar18 = pfVar6[5];
  }
LAB_147a78e17:
  *(float *)param_2 = fVar22;
  *(float *)((longlong)param_2 + 4) = fVar21;
  *(float *)(param_2 + 1) = fVar23;
  *(float *)((longlong)param_2 + 0xc) = fVar18;
  return param_2;
}



// FUNCTION 147a79094 FUN_147a79094 body=102 status=ok
// SIG undefined FUN_147a79094(void)

undefined8 FUN_147a79094(longlong *param_1,undefined4 param_2,float *param_3)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_28,param_2,0);
  *param_3 = (float)local_28;
  param_3[1] = (float)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a790fc FUN_147a790fc body=75 status=ok
// SIG undefined FUN_147a790fc(void)

undefined8 FUN_147a790fc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_147a78dc2(param_1 + 0x38);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a79232 FUN_147a79232 body=123 status=ok
// SIG undefined FUN_147a79232(void)

void FUN_147a79232(longlong param_1,float *param_2,float *param_3)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147a792ae(param_1 + 0x10,&local_38,&local_48);
  if (local_30 <= local_38) {
    local_38 = local_30;
  }
  *param_2 = (float)local_38;
  if (local_48 <= local_40) {
    local_48 = local_40;
  }
  *param_3 = (float)local_48;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a792ae FUN_147a792ae body=186 status=ok
// SIG undefined FUN_147a792ae(void)

void FUN_147a792ae(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  uVar7 = DAT_14c8463f8;
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 1) {
    uVar7 = *(undefined8 *)(*param_1 + 0x10);
    *param_2 = *(undefined8 *)(*param_1 + 8);
    param_2[1] = uVar7;
    puVar9 = (undefined8 *)(*param_1 + 8);
  }
  else {
    if (uVar2 != 0) {
      uVar7 = *(undefined8 *)(*param_1 + 0x10);
      *param_2 = *(undefined8 *)(*param_1 + 8);
      param_2[1] = uVar7;
      lVar3 = *param_1;
      uVar4 = *(undefined4 *)(lVar3 + 0xc);
      uVar5 = *(undefined4 *)(lVar3 + 0x10);
      uVar6 = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)param_3 = *(undefined4 *)(lVar3 + 8);
      *(undefined4 *)((longlong)param_3 + 4) = uVar4;
      *(undefined4 *)(param_3 + 1) = uVar5;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar6;
      uVar8 = uVar2;
      if ((char)param_1[2] == '\0') {
        uVar8 = uVar2 - 1;
      }
      if ((int)uVar8 < 1) {
        return;
      }
      uVar10 = 0;
      do {
        uVar1 = uVar10 + 1;
        uVar11 = 0;
        if (uVar10 != uVar2 - 1) {
          uVar11 = uVar1;
        }
        FUN_1467f723d(uVar10 * 0x40 + *param_1,uVar11 * 0x40 + *param_1,param_2,param_3);
        uVar10 = uVar1;
      } while (uVar1 != uVar8);
      return;
    }
    *param_2 = DAT_14c8463f0;
    param_2[1] = uVar7;
    puVar9 = &DAT_14c8463f0;
  }
  uVar7 = puVar9[1];
  *param_3 = *puVar9;
  param_3[1] = uVar7;
  return;
}



// FUNCTION 147a793ca FUN_147a793ca body=91 status=ok
// SIG undefined FUN_147a793ca(void)

void FUN_147a793ca(longlong param_1,int param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147a78dc2(param_1 + 0x10,&local_28,param_3,&DAT_14c8463f0);
  pdVar1 = &local_20;
  if (param_2 == 0) {
    pdVar1 = &local_28;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)*pdVar1);
}



// FUNCTION 147a79426 FUN_147a79426 body=128 status=ok
// SIG undefined FUN_147a79426(void)

undefined4 FUN_147a79426(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x10;
  FUN_147a78dc2(lVar1,local_40,param_2,&DAT_14c8463f0);
  uVar2 = FUN_147a794a8(lVar1,param_2,local_40);
  FUN_147a7959e(lVar1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a794a8 FUN_147a794a8 body=245 status=ok
// SIG undefined FUN_147a794a8(void)

ulonglong FUN_147a794a8(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar5 = 0;
  }
  else {
    pfVar4 = (float *)*param_1;
    uVar5 = 0;
    do {
      if (param_2 < *pfVar4 || param_2 == *pfVar4) goto LAB_147a794f6;
      uVar5 = uVar5 + 1;
      pfVar4 = pfVar4 + 0x10;
    } while (uVar2 != uVar5);
    uVar5 = (ulonglong)uVar2;
  }
LAB_147a794f6:
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar2 + 1) {
    FUN_147a8b902(param_1,uVar2);
  }
  lVar6 = (uVar5 & 0xffffffff) * 0x40;
  memmove((void *)(*param_1 + lVar6 + 0x40),(void *)(*param_1 + lVar6),
          (ulonglong)(uVar2 - (int)uVar5) << 6);
  local_50 = (undefined4)*param_3;
  uStack_4c = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_48 = (undefined4)param_3[1];
  uStack_44 = (undefined4)((ulonglong)param_3[1] >> 0x20);
  lVar3 = *param_1;
  *(float *)(lVar3 + lVar6) = param_2;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = uStack_44;
  puVar1 = (undefined8 *)(lVar3 + 4 + lVar6);
  *puVar1 = CONCAT44(local_50,uStack_54);
  puVar1[1] = CONCAT44(uStack_48,uStack_4c);
  puVar1 = (undefined8 *)(lVar3 + 0x18 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar6);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar3 + 0x38 + lVar6) = 0;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7959e FUN_147a7959e body=553 status=ok
// SIG undefined FUN_147a7959e(void)

void FUN_147a7959e(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_b8 [32];
  float local_98;
  float *local_90;
  undefined1 local_88;
  undefined4 *local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar7 = (int)param_1[1];
  if (0 < (longlong)iVar7) {
    uVar15 = iVar7 - 1;
    lVar19 = (ulonglong)uVar15 << 6;
    uVar20 = 1;
    lVar18 = 0;
    do {
      if (lVar18 == 0) {
        uVar13 = 0;
        if ((char)param_1[2] != '\0') {
          uVar13 = uVar15;
        }
      }
      else {
        uVar13 = uVar20 - 2;
      }
      uVar16 = uVar20;
      if ((lVar19 == lVar18) && (uVar16 = uVar15, (char)param_1[2] != '\0')) {
        uVar16 = 0;
      }
      lVar8 = *param_1;
      bVar6 = *(byte *)(lVar8 + 0x38 + lVar18);
      if (bVar6 < 6) {
        puVar14 = (undefined4 *)((longlong)(int)uVar13 * 0x40 + lVar8);
        pfVar17 = (float *)((longlong)(int)uVar16 * 0x40 + lVar8);
        switch(bVar6) {
        case 0:
          dVar4 = *(double *)(lVar8 + 8 + lVar18);
          dVar5 = *(double *)(lVar8 + 0x10 + lVar18);
          dVar21 = *(double *)(pfVar17 + 4) - dVar5;
          dVar22 = *(double *)(pfVar17 + 2) - dVar4;
          *(double *)(lVar8 + 0x28 + lVar18) = dVar22;
          *(double *)(lVar8 + 0x30 + lVar18) = dVar21;
          if ((5 < *(byte *)(puVar14 + 0xe)) ||
             ((0x3aU >> (*(byte *)(puVar14 + 0xe) & 0x1f) & 1) == 0)) {
            dVar21 = dVar5 - *(double *)(puVar14 + 4);
            dVar22 = dVar4 - *(double *)(puVar14 + 2);
          }
          *(double *)(lVar8 + 0x18 + lVar18) = dVar22;
          *(double *)(lVar8 + 0x20 + lVar18) = dVar21;
          break;
        default:
          if ((lVar18 == 0) || ((lVar19 == lVar18 && ((char)param_1[2] == '\0'))))
          goto switchD_147a79647_caseD_2;
          if ((*(byte *)(puVar14 + 0xe) < 6) &&
             ((0x3aU >> (*(byte *)(puVar14 + 0xe) & 0x1f) & 1) != 0)) {
            if ((lVar19 == lVar18) && ((char)param_1[2] != '\0')) {
              fVar3 = *(float *)(lVar8 + lVar18);
              local_98 = *(float *)((longlong)param_1 + 0x14) + fVar3;
            }
            else {
              local_98 = *pfVar17;
              fVar3 = *(float *)(lVar8 + lVar18);
            }
            local_90 = pfVar17 + 2;
            local_88 = bVar6 == 5;
            lVar8 = lVar8 + 8 + lVar18;
            local_80 = &local_70;
            FUN_147a8b987(*puVar14,puVar14 + 2,fVar3,lVar8);
            *(ulonglong *)(lVar8 + 0x10) = CONCAT44(uStack_6c,local_70);
            *(ulonglong *)(lVar8 + 0x18) = CONCAT44(uStack_64,uStack_68);
            *(undefined4 *)(lVar8 + 0x20) = local_70;
            *(undefined4 *)(lVar8 + 0x24) = uStack_6c;
            *(undefined4 *)(lVar8 + 0x28) = uStack_68;
            *(undefined4 *)(lVar8 + 0x2c) = uStack_64;
          }
          else {
            uVar12 = *(undefined8 *)(puVar14 + 8);
            puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar18);
            *puVar1 = *(undefined8 *)(puVar14 + 6);
            puVar1[1] = uVar12;
            uVar9 = puVar14[0xb];
            uVar10 = puVar14[0xc];
            uVar11 = puVar14[0xd];
            puVar2 = (undefined4 *)(lVar8 + 0x28 + lVar18);
            *puVar2 = puVar14[10];
            puVar2[1] = uVar9;
            puVar2[2] = uVar10;
            puVar2[3] = uVar11;
          }
          break;
        case 2:
switchD_147a79647_caseD_2:
          puVar1 = (undefined8 *)(lVar8 + 0x28 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar18);
          *puVar1 = 0;
          puVar1[1] = 0;
          break;
        case 3:
        case 4:
          break;
        }
      }
      uVar20 = uVar20 + 1;
      lVar18 = lVar18 + 0x40;
    } while ((longlong)iVar7 * 0x40 != lVar18);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a797c8 FUN_147a797c8 body=93 status=ok
// SIG undefined FUN_147a797c8(void)

void FUN_147a797c8(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 0x40),
            (void *)((longlong)(int)param_2 * 0x40 + *(longlong *)(param_1 + 0x10) + 0x40),
            (longlong)(int)(~param_2 + iVar1) << 6);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar1 + -1;
  FUN_147a8bab6(param_1 + 0x10);
  FUN_147a7959e(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a79826 FUN_147a79826 body=46 status=ok
// SIG undefined FUN_147a79826(void)

undefined4 FUN_147a79826(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147a79854(param_1 + 0x10);
  FUN_147a7959e(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 147a79854 FUN_147a79854 body=239 status=ok
// SIG undefined FUN_147a79854(void)

uint FUN_147a79854(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((-1 < (int)param_2) && (iVar4 = (int)param_1[1], (int)param_2 < iVar4)) {
    lVar5 = *param_1;
    lVar6 = (ulonglong)param_2 * 0x40;
    puVar1 = (undefined8 *)(lVar5 + 8 + lVar6);
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    uVar3 = *(undefined1 *)(lVar5 + 0x38 + lVar6);
    puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar6);
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    puVar2 = (undefined4 *)(lVar5 + 0x28 + lVar6);
    local_68 = *puVar2;
    uStack_64 = puVar2[1];
    uStack_60 = puVar2[2];
    uStack_5c = puVar2[3];
    if (~param_2 + iVar4 != 0) {
      memmove((void *)(lVar5 + lVar6),(void *)(lVar5 + lVar6 + 0x40),
              (longlong)(int)(~param_2 + iVar4) << 6);
      iVar4 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar4 + -1;
    FUN_147a8bab6(param_1);
    param_2 = FUN_147a794a8(param_1,param_3,&local_48);
    lVar5 = (longlong)(int)param_2 * 0x40;
    *(undefined1 *)(*param_1 + 0x38 + lVar5) = uVar3;
    puVar1 = (undefined8 *)(*param_1 + 0x18 + lVar5);
    *puVar1 = local_58;
    puVar1[1] = uStack_50;
    puVar2 = (undefined4 *)(*param_1 + 0x28 + lVar5);
    *puVar2 = local_68;
    puVar2[1] = uStack_64;
    puVar2[2] = uStack_60;
    puVar2[3] = uStack_5c;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a79944 FUN_147a79944 body=55 status=ok
// SIG undefined FUN_147a79944(void)

void FUN_147a79944(longlong param_1,int param_2,int param_3,float param_4)

{
  *(double *)
   ((longlong)param_3 * 0x40 + *(longlong *)(param_1 + 0x10) + 8 + (ulonglong)(param_2 != 0) * 8) =
       (double)param_4;
  FUN_147a7959e(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7997c FUN_147a7997c body=43 status=ok
// SIG undefined FUN_147a7997c(void)

void FUN_147a7997c(longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x38 + (longlong)param_2 * 0x40) = param_3;
  FUN_147a7959e(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a799f4 FUN_147a799f4 body=97 status=ok
// SIG undefined FUN_147a799f4(void)

void FUN_147a799f4(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446e0b6e();
  if ((((*(double *)(param_1 + 0x38) == 1.2345000173693373e-20) &&
       (!NAN(*(double *)(param_1 + 0x38)))) &&
      (*(double *)(param_1 + 0x40) == 1.2345000173693373e-20)) &&
     (((!NAN(*(double *)(param_1 + 0x40)) && (*(double *)(param_1 + 0x48) == 1.2345000173693373e-20)
       ) && (!NAN(*(double *)(param_1 + 0x48)))))) {
    *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x38) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  return;
}



// FUNCTION 147a79ca8 FUN_147a79ca8 body=224 status=ok
// SIG undefined FUN_147a79ca8(void)

undefined8 * FUN_147a79ca8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140703ce0(param_1 + 0x38,&local_30,param_3,&DAT_14c8464e0);
  switch(*(undefined1 *)(param_1 + 0x54)) {
  case 1:
    *param_2 = CONCAT44(uStack_2c,local_30);
    param_2[1] = CONCAT44(uStack_2c,local_30);
    break;
  case 2:
    *param_2 = CONCAT44(uStack_2c,local_30);
    param_2[1] = CONCAT44(uStack_24,uStack_28);
    goto LAB_147a79d50;
  case 3:
    local_20 = CONCAT44(uStack_24,uStack_28);
    *param_2 = CONCAT44(uStack_2c,local_30);
    param_2[1] = local_20;
    break;
  case 4:
    *param_2 = CONCAT44(uStack_2c,local_30);
    param_2[1] = CONCAT44(uStack_2c,local_30);
LAB_147a79d50:
    param_2[2] = CONCAT44(uStack_2c,local_30);
    goto LAB_147a79d55;
  default:
    param_2[2] = local_20;
    *(undefined4 *)param_2 = local_30;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
    *(undefined4 *)(param_2 + 1) = uStack_28;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
    goto LAB_147a79d55;
  }
  param_2[2] = local_20;
LAB_147a79d55:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a79ee6 FUN_147a79ee6 body=269 status=ok
// SIG undefined FUN_147a79ee6(void)

void FUN_147a79ee6(longlong param_1,float *param_2,float *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140924b76(param_1 + 0x10,&local_38,&local_50,&DAT_14c8464e0);
  if (*(byte *)(param_1 + 0x2c) - 1 < 4) {
    pdVar1 = &local_40;
    dVar2 = local_50;
    switch((uint)*(byte *)(param_1 + 0x2c)) {
    case 1:
      pdVar1 = &local_48;
      local_30 = local_38;
      break;
    case 2:
      local_28 = local_38;
      break;
    case 3:
      local_28 = local_30;
      dVar2 = local_48;
      break;
    case 4:
      local_30 = local_38;
      local_28 = local_38;
      local_48 = local_50;
    }
    *pdVar1 = dVar2;
  }
  if (local_30 <= local_38) {
    local_38 = local_30;
  }
  if (local_28 <= local_38) {
    local_38 = local_28;
  }
  *param_2 = (float)local_38;
  if (local_50 <= local_48) {
    local_50 = local_48;
  }
  if (local_50 <= local_40) {
    local_50 = local_40;
  }
  *param_3 = (float)local_50;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7a08c FUN_147a7a08c body=106 status=ok
// SIG undefined FUN_147a7a08c(void)

void FUN_147a7a08c(longlong param_1,int param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140703ce0(param_1 + 0x10,&local_28,param_3,&DAT_14c8464e0);
  if ((param_2 != 1) && (local_20 = local_18, param_2 == 0)) {
    local_20 = local_28;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0((float)local_20);
  }
  return;
}



// FUNCTION 147a7a0f8 FUN_147a7a0f8 body=134 status=ok
// SIG undefined FUN_147a7a0f8(void)

undefined4 FUN_147a7a0f8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1 + 0x10;
  FUN_140703ce0(lVar1,local_48,param_2,&DAT_14c8464e0);
  uVar2 = FUN_140924a7e(lVar1,param_2,local_48);
  FUN_14093ac1c(lVar1,0,1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7a180 FUN_147a7a180 body=102 status=ok
// SIG undefined FUN_147a7a180(void)

void FUN_147a7a180(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 0x58),
            (void *)((longlong)(int)param_2 * 0x58 + *(longlong *)(param_1 + 0x10) + 0x58),
            (longlong)(int)(~param_2 + iVar1) * 0x58);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar1 + -1;
  FUN_147a8bb52(param_1 + 0x10);
  FUN_14093ac1c(param_1 + 0x10,0,1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7a1e6 FUN_147a7a1e6 body=52 status=ok
// SIG undefined FUN_147a7a1e6(void)

undefined4 FUN_147a7a1e6(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147a7a21a(param_1 + 0x10);
  FUN_14093ac1c(param_1 + 0x10,0,1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 147a7a21a FUN_147a7a21a body=300 status=ok
// SIG undefined FUN_147a7a21a(void)

uint FUN_147a7a21a(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((-1 < (int)param_2) && (iVar5 = (int)param_1[1], (int)param_2 < iVar5)) {
    lVar4 = *param_1;
    lVar6 = (ulonglong)param_2 * 0x58;
    local_38 = *(undefined8 *)(lVar4 + 0x18 + lVar6);
    puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    uVar3 = *(undefined1 *)(lVar4 + 0x50 + lVar6);
    local_58 = *(undefined8 *)(lVar4 + 0x30 + lVar6);
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar6);
    local_68 = *puVar1;
    uStack_60 = puVar1[1];
    local_78 = *(undefined8 *)(lVar4 + 0x48 + lVar6);
    puVar2 = (undefined4 *)(lVar4 + 0x38 + lVar6);
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    if (~param_2 + iVar5 != 0) {
      memmove((void *)(lVar4 + lVar6),(void *)(lVar4 + lVar6 + 0x58),
              (longlong)(int)(~param_2 + iVar5) * 0x58);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147a8bb52(param_1);
    param_2 = FUN_140924a7e(param_1,param_3,&local_48);
    lVar6 = (longlong)(int)param_2 * 0x58;
    *(undefined1 *)(*param_1 + 0x50 + lVar6) = uVar3;
    lVar4 = *param_1;
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar6);
    *puVar1 = local_68;
    puVar1[1] = uStack_60;
    *(undefined8 *)(lVar4 + 0x30 + lVar6) = local_58;
    lVar4 = *param_1;
    *(undefined8 *)(lVar4 + 0x48 + lVar6) = local_78;
    puVar2 = (undefined4 *)(lVar4 + 0x38 + lVar6);
    *puVar2 = local_88;
    puVar2[1] = uStack_84;
    puVar2[2] = uStack_80;
    puVar2[3] = uStack_7c;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7a348 FUN_147a7a348 body=94 status=ok
// SIG undefined FUN_147a7a348(void)

void FUN_147a7a348(longlong param_1,int param_2,int param_3,float param_4)

{
  longlong lVar1;
  double *pdVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar3 = (longlong)param_3;
  if (param_2 == 1) {
    pdVar2 = (double *)(lVar1 + lVar3 * 0x58 + 0x10);
  }
  else if (param_2 == 0) {
    pdVar2 = (double *)(lVar1 + lVar3 * 0x58 + 8);
  }
  else {
    pdVar2 = (double *)(lVar1 + lVar3 * 0x58 + 0x18);
  }
  *pdVar2 = (double)param_4;
  FUN_14093ac1c(param_1 + 0x10,0,CONCAT71((int7)(int3)((uint)param_3 >> 8),1));
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7a3a6 FUN_147a7a3a6 body=49 status=ok
// SIG undefined FUN_147a7a3a6(void)

void FUN_147a7a3a6(longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x50 + (longlong)param_2 * 0x58) = param_3;
  FUN_14093ac1c(param_1 + 0x10,0,1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7a45e FUN_147a7a45e body=251 status=ok
// SIG undefined FUN_147a7a45e(void)

void FUN_147a7a45e(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140924b76(param_1 + 0x38,&local_38,&local_50,&DAT_14c8464e0);
  if (*(byte *)(param_1 + 0x54) - 1 < 4) {
    puVar1 = &local_40;
    uVar2 = local_50;
    uVar3 = uStack_4c;
    switch((uint)*(byte *)(param_1 + 0x54)) {
    case 1:
      puVar1 = &uStack_48;
      uStack_30 = local_38;
      break;
    case 2:
      local_28 = local_38;
      break;
    case 3:
      local_28 = uStack_30;
      uVar2 = (int)uStack_48;
      uVar3 = (int)((ulonglong)uStack_48 >> 0x20);
      break;
    case 4:
      uStack_30 = local_38;
      local_28 = local_38;
      uStack_48 = CONCAT44(uStack_4c,local_50);
    }
    *puVar1 = CONCAT44(uVar3,uVar2);
  }
  param_2[2] = local_28;
  *param_2 = local_38;
  param_2[1] = uStack_30;
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = (undefined4)uStack_48;
  param_3[3] = uStack_48._4_4_;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7a55a FUN_147a7a55a body=175 status=ok
// SIG undefined FUN_147a7a55a(void)

void FUN_147a7a55a(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1446e0b6e();
  if ((((*(double *)(param_1 + 0x50) == 1.2345000173693373e-20) &&
       (!NAN(*(double *)(param_1 + 0x50)))) &&
      (*(double *)(param_1 + 0x58) == 1.2345000173693373e-20)) &&
     (((!NAN(*(double *)(param_1 + 0x58)) && (*(double *)(param_1 + 0x60) == 1.2345000173693373e-20)
       ) && (!NAN(*(double *)(param_1 + 0x60)))))) {
    *(undefined8 *)(param_1 + 0x60) = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x50) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
  }
  if (((*(double *)(param_1 + 0x38) == 1.2345000173693373e-20) &&
      (!NAN(*(double *)(param_1 + 0x38)))) &&
     ((*(double *)(param_1 + 0x40) == 1.2345000173693373e-20 &&
      (((!NAN(*(double *)(param_1 + 0x40)) &&
        (*(double *)(param_1 + 0x48) == 1.2345000173693373e-20)) &&
       (!NAN(*(double *)(param_1 + 0x48)))))))) {
    *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x38) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  return;
}



// FUNCTION 147a7a60a FUN_147a7a60a body=1367 status=ok
// SIG undefined FUN_147a7a60a(void)

double * FUN_147a7a60a(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      int param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  uint uVar14;
  
  dVar1 = *(double *)(param_1 + 0x38);
  uVar13 = SUB84(dVar1,0);
  uVar14 = (uint)((ulonglong)dVar1 >> 0x20);
  if (*(char *)(param_1 + 0x6d) == '\x02') {
    uVar14 = uVar14 ^ 0x80000000;
  }
  if (*(char *)(param_1 + 0x6d) == '\x01') {
    uVar13 = (undefined4)*(undefined8 *)(param_1 + 0x50);
    uVar14 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20);
  }
  dVar8 = (double)CONCAT44(uVar14,uVar13);
  dVar2 = *(double *)(param_1 + 0x40);
  dVar7 = dVar2;
  if (*(char *)(param_1 + 0x6e) == '\x02') {
    dVar7 = -dVar2;
  }
  if (*(char *)(param_1 + 0x6e) == '\x01') {
    dVar7 = *(double *)(param_1 + 0x58);
  }
  dVar3 = *(double *)(param_1 + 0x48);
  dVar4 = dVar3;
  if (*(char *)(param_1 + 0x6f) == '\x02') {
    dVar4 = -dVar3;
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    dVar4 = *(double *)(param_1 + 0x60);
  }
  bVar6 = true;
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    if (param_5 == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
      }
      else {
        uVar9 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar9;
        fVar10 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      if (0.5 < fVar10) {
        bVar6 = false;
      }
    }
    else {
      bVar6 = param_5 < 1;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x70);
  switch(*(undefined1 *)(param_1 + 0x6c)) {
  case 1:
    if ((uVar9 & 1) == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
        fVar11 = (float)FUN_140ce4006();
      }
      else {
        fVar10 = (float)(*(int *)(param_6 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
        uVar9 = *(int *)(param_6 + 4) * -0x4b9b4d07 + 0x9d6f2492;
        *(uint *)(param_6 + 4) = uVar9;
        fVar11 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      dVar8 = ((double)CONCAT44(uVar14,uVar13) - dVar1) * (double)fVar10 + dVar1;
      dVar4 = (double)fVar11 * (dVar4 - dVar3) + dVar3;
    }
    else if (!bVar6) {
      dVar8 = dVar1;
      dVar4 = dVar3;
    }
    fVar12 = (float)dVar8;
    fVar10 = (float)dVar4;
    fVar11 = fVar12;
    break;
  case 2:
    if ((uVar9 & 1) == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
        fVar11 = (float)FUN_140ce4006();
      }
      else {
        fVar10 = (float)(*(int *)(param_6 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
        uVar9 = *(int *)(param_6 + 4) * -0x4b9b4d07 + 0x9d6f2492;
        *(uint *)(param_6 + 4) = uVar9;
        fVar11 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      dVar8 = ((double)CONCAT44(uVar14,uVar13) - dVar1) * (double)fVar10 + dVar1;
      dVar7 = (double)fVar11 * (dVar7 - dVar2) + dVar2;
    }
    else if (!bVar6) {
      dVar8 = dVar1;
      dVar7 = dVar2;
    }
    fVar11 = (float)dVar7;
    fVar12 = (float)dVar8;
    fVar10 = fVar12;
    break;
  case 3:
    if ((uVar9 & 1) == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
        fVar11 = (float)FUN_140ce4006();
      }
      else {
        fVar10 = (float)(*(int *)(param_6 + 4) * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
        uVar9 = *(int *)(param_6 + 4) * -0x4b9b4d07 + 0x9d6f2492;
        *(uint *)(param_6 + 4) = uVar9;
        fVar11 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      dVar8 = ((double)CONCAT44(uVar14,uVar13) - dVar1) * (double)fVar10 + dVar1;
      dVar7 = (double)fVar11 * (dVar7 - dVar2) + dVar2;
    }
    else if (!bVar6) {
      dVar8 = dVar1;
      dVar7 = dVar2;
    }
    fVar12 = (float)dVar8;
    fVar10 = (float)dVar7;
    fVar11 = (float)dVar7;
    break;
  case 4:
    if ((uVar9 & 1) == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
      }
      else {
        uVar9 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
        *(uint *)(param_6 + 4) = uVar9;
        fVar10 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      dVar8 = ((double)CONCAT44(uVar14,uVar13) - dVar1) * (double)fVar10 + dVar1;
    }
    else if (!bVar6) {
      dVar8 = dVar1;
    }
    fVar12 = (float)dVar8;
    fVar10 = fVar12;
    fVar11 = fVar12;
    break;
  default:
    if ((uVar9 & 1) == 0) {
      if (param_6 == 0) {
        fVar10 = (float)FUN_140ce4006();
        fVar11 = (float)FUN_140ce4006();
        dVar7 = (double)fVar11 * (dVar7 - dVar2);
        fVar11 = (float)FUN_140ce4006();
      }
      else {
        iVar5 = *(int *)(param_6 + 4);
        fVar10 = (float)(iVar5 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
        dVar7 = (double)((float)(iVar5 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) *
                (dVar7 - dVar2);
        uVar9 = iVar5 * 0x1c3c718d + 0xf50d3da5;
        *(uint *)(param_6 + 4) = uVar9;
        fVar11 = (float)(uVar9 >> 9 | 0x3f800000) + -1.0;
      }
      fVar12 = (float)(((double)CONCAT44(uVar14,uVar13) - dVar1) * (double)fVar10 + dVar1);
      fVar10 = (float)((double)fVar11 * (dVar4 - dVar3) + dVar3);
      fVar11 = (float)(dVar7 + dVar2);
    }
    else if (bVar6) {
      fVar12 = (float)(double)CONCAT44(uVar14,uVar13);
      fVar10 = (float)dVar4;
      fVar11 = (float)dVar7;
    }
    else {
      fVar12 = (float)dVar1;
      fVar10 = (float)dVar3;
      fVar11 = (float)dVar2;
    }
  }
  *param_2 = (double)fVar12;
  param_2[1] = (double)fVar11;
  param_2[2] = (double)fVar10;
  return param_2;
}



// FUNCTION 147a7aba2 FUN_147a7aba2 body=179 status=ok
// SIG undefined FUN_147a7aba2(void)

undefined8 FUN_147a7aba2(longlong *param_1,undefined8 param_2,float *param_3)

{
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2d8))(param_1,&local_40);
  (**(code **)(*param_1 + 0x2e0))(param_1,&local_58);
  *param_3 = (float)local_40;
  param_3[1] = (float)local_38;
  param_3[2] = (float)local_30;
  param_3[3] = (float)local_58;
  param_3[4] = (float)local_50;
  param_3[5] = (float)local_48;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7ac56 FUN_147a7ac56 body=268 status=ok
// SIG undefined FUN_147a7ac56(void)

double * FUN_147a7ac56(longlong param_1,double *param_2)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_68 [32];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = (double)*(undefined8 *)(param_1 + 0x48);
  local_28[0] = *(double *)(param_1 + 0x38);
  local_28[1] = (double)*(undefined8 *)(param_1 + 0x40);
  local_48[2] = *(double *)(param_1 + 0x60);
  local_48[0] = *(double *)(param_1 + 0x50);
  local_48[1] = *(double *)(param_1 + 0x58);
  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x6d + lVar2);
    if (cVar1 == '\x02') {
      dVar5 = -local_28[lVar2];
LAB_147a7acb8:
      local_48[lVar2] = dVar5;
    }
    else if (cVar1 == '\0') {
      dVar5 = local_28[lVar2];
      goto LAB_147a7acb8;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 3) {
      fVar3 = (float)local_48[0];
      fVar4 = fVar3;
      fVar6 = fVar3;
      switch(*(undefined1 *)(param_1 + 0x6c)) {
      case 1:
        fVar6 = (float)local_48[2];
        break;
      case 2:
        fVar4 = (float)local_48[1];
        break;
      case 3:
        fVar4 = (float)local_48[1];
        fVar6 = (float)local_48[1];
        break;
      case 4:
        break;
      default:
        fVar4 = (float)local_48[1];
        fVar6 = (float)local_48[2];
      }
      *param_2 = (double)fVar3;
      param_2[1] = (double)fVar4;
      param_2[2] = (double)fVar6;
      if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 147a7ae06 FUN_147a7ae06 body=156 status=ok
// SIG undefined FUN_147a7ae06(void)

undefined4 * FUN_147a7ae06(longlong *param_1,undefined4 *param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  if (5 < param_3) {
    return param_2;
  }
  switch(param_3) {
  case 0:
    uVar3 = 0xff200000;
    uVar2 = 0xffff0000;
    break;
  case 1:
    if ((uVar1 & 0xfffffffd) == 4) {
      uVar3 = 0xff1c0000;
      uVar2 = 0xffc40000;
      break;
    }
    goto LAB_147a7ae86;
  case 2:
    if ((uVar1 & 0xfffffffd) != 4) goto switchD_147a7ae34_caseD_4;
LAB_147a7ae86:
    uVar3 = 0xff002000;
    uVar2 = 0xff00ff00;
    break;
  case 3:
    uVar3 = 0xff001c00;
    uVar2 = 0xff00c400;
    break;
  case 4:
switchD_147a7ae34_caseD_4:
    uVar3 = 0xff000020;
    uVar2 = 0xff0000ff;
    break;
  case 5:
    uVar3 = 0xff00001c;
    uVar2 = 0xff0000c4;
  }
  if (param_4 != '\0') {
    uVar2 = uVar3;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 147a7aea6 FUN_147a7aea6 body=290 status=ok
// SIG undefined FUN_147a7aea6(void)

void FUN_147a7aea6(longlong param_1,undefined4 param_2)

{
  char cVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48 [4];
  ulonglong local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = *(undefined8 *)(param_1 + 0x20);
  local_28[0] = *(ulonglong *)(param_1 + 0x10);
  local_28[1] = *(undefined8 *)(param_1 + 0x18);
  local_48[2] = *(undefined8 *)(param_1 + 0x38);
  puVar2 = local_48 + 2;
  local_48[0] = *(ulonglong *)(param_1 + 0x28);
  local_48[1] = *(ulonglong *)(param_1 + 0x30);
  lVar3 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x45 + lVar3);
    if (cVar1 == '\x02') {
      uVar8 = local_28[lVar3] ^ 0x8000000000000000;
LAB_147a7af0d:
      local_48[lVar3] = uVar8;
    }
    else if (cVar1 == '\0') {
      uVar8 = local_28[lVar3];
      goto LAB_147a7af0d;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  uVar5 = (undefined4)local_48[0];
  uVar7 = (undefined4)(local_48[0] >> 0x20);
  uVar4 = uVar5;
  uVar6 = uVar7;
  switch(*(undefined1 *)(param_1 + 0x44)) {
  case 1:
    puVar2 = local_48 + 1;
    break;
  case 2:
    break;
  case 3:
    uVar4 = (int)local_48[1];
    uVar6 = (int)(local_48[1] >> 0x20);
    break;
  case 4:
    local_48[1] = local_48[0];
    break;
  default:
    goto switchD_147a7af36_default;
  }
  *puVar2 = CONCAT44(uVar6,uVar4);
switchD_147a7af36_default:
  switch(param_2) {
  case 0:
    break;
  case 1:
    uVar5 = (undefined4)local_28[0];
    uVar7 = (undefined4)(local_28[0] >> 0x20);
    break;
  case 2:
    uVar5 = (undefined4)local_48[1];
    uVar7 = (undefined4)(local_48[1] >> 0x20);
    break;
  case 3:
    uVar5 = (undefined4)local_28[1];
    uVar7 = (undefined4)(local_28[1] >> 0x20);
    break;
  case 4:
    uVar5 = (undefined4)local_48[2];
    uVar7 = (undefined4)(local_48[2] >> 0x20);
    break;
  default:
    uVar5 = (undefined4)local_28[2];
    uVar7 = (undefined4)(local_28[2] >> 0x20);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0((float)(double)CONCAT44(uVar7,uVar5));
  }
  return;
}



// FUNCTION 147a7b018 FUN_147a7b018 body=371 status=ok
// SIG undefined FUN_147a7b018(void)

void FUN_147a7b018(longlong param_1,float *param_2,float *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_68 [32];
  double local_48 [4];
  double local_28 [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28[2] = *(double *)(param_1 + 0x20);
  local_28[0] = *(double *)(param_1 + 0x10);
  dVar7 = *(double *)(param_1 + 0x18);
  local_28[1] = dVar7;
  local_48[2] = *(double *)(param_1 + 0x38);
  local_48[0] = *(double *)(param_1 + 0x28);
  local_48[1] = *(double *)(param_1 + 0x30);
  lVar2 = 0;
  do {
    cVar1 = *(char *)(param_1 + 0x45 + lVar2);
    if (cVar1 == '\x02') {
      dVar5 = -local_28[lVar2];
LAB_147a7b07a:
      local_48[lVar2] = dVar5;
    }
    else if (cVar1 == '\0') {
      dVar5 = local_28[lVar2];
      goto LAB_147a7b07a;
    }
    lVar2 = lVar2 + 1;
    if (lVar2 == 3) {
      uVar3 = SUB84(local_48[0],0);
      uVar4 = (undefined4)((ulonglong)local_48[0] >> 0x20);
      dVar5 = local_48[1];
      dVar7 = local_28[1];
      dVar8 = local_28[2];
      dVar9 = local_48[2];
      switch(*(undefined1 *)(param_1 + 0x44)) {
      case 1:
        dVar5 = local_48[0];
        dVar7 = local_28[0];
        dVar8 = local_28[2];
        break;
      case 2:
        dVar8 = local_28[0];
        dVar9 = local_48[0];
        break;
      case 3:
        dVar8 = dVar7;
        dVar9 = local_48[1];
        break;
      case 4:
        dVar5 = local_48[0];
        dVar7 = local_28[0];
        dVar8 = local_28[0];
        dVar9 = local_48[0];
      }
      dVar6 = local_28[0];
      if (local_28[0] <= dVar7) {
        dVar6 = dVar7;
      }
      if (dVar6 <= dVar8) {
        dVar6 = dVar8;
      }
      if (dVar5 <= local_48[0]) {
        uVar3 = SUB84(dVar5,0);
        uVar4 = (undefined4)((ulonglong)dVar5 >> 0x20);
      }
      if (dVar9 <= (double)CONCAT44(uVar4,uVar3)) {
        uVar3 = SUB84(dVar9,0);
        uVar4 = (undefined4)((ulonglong)dVar9 >> 0x20);
      }
      *param_2 = (float)(double)CONCAT44(uVar4,uVar3);
      *param_3 = (float)dVar6;
      if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 147a7b248 FUN_147a7b248 body=672 status=ok
// SIG undefined FUN_147a7b248(void)

double * FUN_147a7b248(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      int param_5,longlong param_6)

{
  int iVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_147a7b4ea(param_1 + 7,&local_a0);
  bVar5 = true;
  if (((*(byte *)((longlong)param_1 + 0x5c) & 1) != 0) && (bVar5 = -1 < param_5, param_5 == 0)) {
    if (param_6 == 0) {
      fVar6 = (float)FUN_140ce4006();
    }
    else {
      uVar4 = *(int *)(param_6 + 4) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_6 + 4) = uVar4;
      fVar6 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
    }
    bVar5 = true;
    if (0.5 < fVar6) {
      bVar5 = false;
    }
  }
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_a0);
  if ((*(byte *)((longlong)param_1 + 0x5c) & 1) == 0) {
    if (param_6 == 0) {
      fVar6 = (float)FUN_140ce4006();
      fVar7 = (float)FUN_140ce4006();
      dVar2 = (double)fVar7 * (local_80 - local_98) + local_98;
      uVar8 = SUB84(local_a0,0);
      uVar9 = (undefined4)((ulonglong)local_a0 >> 0x20);
      dVar3 = local_88 - local_a0;
      fVar7 = (float)FUN_140ce4006();
    }
    else {
      iVar1 = *(int *)(param_6 + 4);
      fVar6 = (float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0;
      uVar8 = SUB84(local_a0,0);
      uVar9 = (undefined4)((ulonglong)local_a0 >> 0x20);
      dVar2 = (double)((float)(iVar1 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) *
              (local_80 - local_98) + local_98;
      dVar3 = local_88 - local_a0;
      uVar4 = iVar1 * 0x1c3c718d + 0xf50d3da5;
      *(uint *)(param_6 + 4) = uVar4;
      fVar7 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0;
    }
    local_a0 = (double)fVar7 * dVar3 + (double)CONCAT44(uVar9,uVar8);
    local_90 = (local_78 - local_90) * (double)fVar6 + local_90;
    local_98 = dVar2;
  }
  else if (bVar5) {
    local_a0 = local_88;
    local_90 = local_78;
    local_98 = local_80;
  }
  *param_2 = local_a0;
  param_2[1] = local_98;
  param_2[2] = local_90;
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a7b4ea FUN_147a7b4ea body=1283 status=ok
// SIG undefined FUN_147a7b4ea(void)

double * FUN_147a7b4ea(undefined8 *param_1,double *param_2,float param_3,float *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float *pfVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  longlong lVar31;
  float *pfVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  longlong lVar35;
  int iVar36;
  byte bVar37;
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
  
  iVar36 = *(int *)(param_1 + 1) + -1;
  if ((*(int *)(param_1 + 1) == 0) || (iVar28 = _isnan((double)param_3), iVar28 != 0)) {
    fVar48 = *param_4;
    fVar47 = param_4[1];
    fVar49 = param_4[2];
    fVar38 = param_4[3];
    fVar39 = param_4[4];
    fVar40 = param_4[5];
    fVar41 = param_4[6];
    fVar42 = param_4[7];
    fVar43 = param_4[8];
    fVar44 = param_4[9];
    fVar45 = param_4[10];
    fVar46 = param_4[0xb];
    goto LAB_147a7b574;
  }
  pfVar22 = (float *)*param_1;
  if (*pfVar22 <= param_3) {
    iVar28 = *(int *)(param_1 + 1);
    uVar30 = (longlong)iVar28 - 1;
    if (pfVar22[uVar30 * 0x28] <= param_3) {
LAB_147a7b644:
      iVar29 = (int)uVar30;
      if (iVar29 == -1) goto LAB_147a7b5e6;
    }
    else {
      iVar29 = 0;
      if (1 < iVar28) {
        uVar30 = 0;
        uVar33 = (longlong)iVar28;
        do {
          uVar34 = (ulonglong)((uint)((int)uVar30 + (int)uVar33) >> 1);
          if (pfVar22[uVar34 * 0x28] <= param_3) {
            uVar30 = uVar34;
            uVar34 = uVar33;
          }
          uVar33 = uVar34;
        } while (1 < (int)uVar34 - (int)uVar30);
        goto LAB_147a7b644;
      }
    }
    bVar37 = *(byte *)(param_1 + 2);
    if (iVar29 == iVar36) {
      lVar35 = (longlong)iVar36;
      if ((bVar37 & 1) == 0) {
        pfVar1 = pfVar22 + lVar35 * 0x28 + 2;
        fVar48 = *pfVar1;
        fVar47 = pfVar1[1];
        fVar49 = pfVar1[2];
        fVar38 = pfVar1[3];
        pfVar1 = pfVar22 + lVar35 * 0x28 + 6;
        fVar39 = *pfVar1;
        fVar40 = pfVar1[1];
        fVar41 = pfVar1[2];
        fVar42 = pfVar1[3];
        pfVar22 = pfVar22 + lVar35 * 0x28 + 10;
        fVar43 = *pfVar22;
        fVar44 = pfVar22[1];
        fVar45 = pfVar22[2];
        fVar46 = pfVar22[3];
        goto LAB_147a7b574;
      }
      bVar37 = 1;
      if (pfVar22[lVar35 * 0x28] + *(float *)((longlong)param_1 + 0x14) <= param_3)
      goto LAB_147a7b5e6;
    }
    lVar31 = (longlong)iVar29;
    pfVar1 = pfVar22 + lVar31 * 0x28;
    lVar35 = 0;
    if ((iVar29 == iVar36 & bVar37) == 0) {
      lVar35 = (longlong)(iVar29 + 1);
    }
    pfVar32 = pfVar22 + lVar35 * 0x28;
    if ((iVar29 == iVar36 & bVar37) == 0) {
      fVar48 = *pfVar32 - *pfVar1;
    }
    else {
      fVar48 = *(float *)((longlong)param_1 + 0x14);
    }
    if ((0.0 < fVar48) && (*(char *)(pfVar1 + 0x26) != '\x02')) {
      fVar47 = (param_3 - *pfVar1) / fVar48;
      if (*(char *)(pfVar1 + 0x26) != '\0') {
        dVar25 = (double)fVar48;
        dVar2 = *(double *)(pfVar32 + 0x18);
        dVar3 = *(double *)(pfVar32 + 0x16);
        dVar4 = *(double *)(pfVar32 + 0x14);
        dVar5 = *(double *)(pfVar32 + 0x12);
        dVar6 = *(double *)(pfVar32 + 0x10);
        dVar7 = *(double *)(pfVar1 + 0x24);
        dVar8 = *(double *)(pfVar1 + 0x22);
        dVar9 = *(double *)(pfVar1 + 0x20);
        fVar49 = fVar47 * fVar47;
        fVar48 = fVar47 * fVar49;
        dVar10 = *(double *)(pfVar1 + 0x1e);
        dVar11 = *(double *)(pfVar1 + 0x1c);
        dVar26 = (double)(((fVar48 + fVar48) - fVar49 * 3.0) + 1.0);
        dVar12 = *(double *)(pfVar1 + 0xc);
        dVar27 = (double)((fVar48 - (fVar49 + fVar49)) + fVar47);
        dVar13 = *(double *)(pfVar1 + 10);
        dVar14 = *(double *)(pfVar1 + 8);
        dVar15 = *(double *)(pfVar1 + 6);
        dVar16 = *(double *)(pfVar1 + 4);
        dVar23 = (double)(fVar48 - fVar49);
        dVar24 = (double)(fVar49 * 3.0 - (fVar48 + fVar48));
        dVar17 = *(double *)(pfVar32 + 0xc);
        dVar18 = *(double *)(pfVar32 + 10);
        dVar19 = *(double *)(pfVar32 + 8);
        dVar20 = *(double *)(pfVar32 + 6);
        dVar21 = *(double *)(pfVar32 + 4);
        *param_2 = dVar24 * *(double *)(pfVar32 + 2) +
                   *(double *)(pfVar32 + 0xe) * dVar25 * dVar23 +
                   dVar25 * *(double *)(pfVar1 + 0x1a) * dVar27 + dVar26 * *(double *)(pfVar1 + 2);
        param_2[1] = dVar21 * dVar24 +
                     dVar6 * dVar25 * dVar23 + dVar11 * dVar25 * dVar27 + dVar16 * dVar26;
        param_2[2] = dVar20 * dVar24 +
                     dVar5 * dVar25 * dVar23 + dVar10 * dVar25 * dVar27 + dVar15 * dVar26;
        param_2[3] = dVar19 * dVar24 +
                     dVar4 * dVar25 * dVar23 + dVar9 * dVar25 * dVar27 + dVar14 * dVar26;
        param_2[4] = dVar18 * dVar24 +
                     dVar3 * dVar25 * dVar23 + dVar8 * dVar25 * dVar27 + dVar13 * dVar26;
        param_2[5] = dVar17 * dVar24 +
                     dVar2 * dVar25 * dVar23 + dVar7 * dVar25 * dVar27 + dVar12 * dVar26;
        return param_2;
      }
      dVar2 = *(double *)(pfVar32 + 0xc);
      dVar3 = *(double *)(pfVar1 + 0xc);
      dVar4 = *(double *)(pfVar32 + 10);
      dVar5 = *(double *)(pfVar1 + 10);
      dVar6 = *(double *)(pfVar32 + 8);
      dVar7 = *(double *)(pfVar1 + 8);
      dVar8 = *(double *)(pfVar32 + 6);
      dVar9 = *(double *)(pfVar1 + 6);
      dVar10 = *(double *)(pfVar32 + 4);
      dVar11 = *(double *)(pfVar1 + 4);
      dVar12 = (double)fVar47;
      *param_2 = (*(double *)(pfVar32 + 2) - *(double *)(pfVar1 + 2)) * dVar12 +
                 *(double *)(pfVar1 + 2);
      param_2[1] = (dVar10 - dVar11) * dVar12 + dVar11;
      param_2[2] = (dVar8 - dVar9) * dVar12 + dVar9;
      param_2[3] = (dVar6 - dVar7) * dVar12 + dVar7;
      param_2[4] = (dVar4 - dVar5) * dVar12 + dVar5;
      param_2[5] = (dVar2 - dVar3) * dVar12 + dVar3;
      return param_2;
    }
    pfVar1 = pfVar22 + lVar31 * 0x28 + 2;
    fVar48 = *pfVar1;
    fVar47 = pfVar1[1];
    fVar49 = pfVar1[2];
    fVar38 = pfVar1[3];
    pfVar1 = pfVar22 + lVar31 * 0x28 + 6;
    fVar39 = *pfVar1;
    fVar40 = pfVar1[1];
    fVar41 = pfVar1[2];
    fVar42 = pfVar1[3];
    pfVar22 = pfVar22 + lVar31 * 0x28 + 10;
    fVar43 = *pfVar22;
    fVar44 = pfVar22[1];
    fVar45 = pfVar22[2];
    fVar46 = pfVar22[3];
  }
  else {
LAB_147a7b5e6:
    fVar48 = pfVar22[2];
    fVar47 = pfVar22[3];
    fVar49 = pfVar22[4];
    fVar38 = pfVar22[5];
    fVar39 = pfVar22[6];
    fVar40 = pfVar22[7];
    fVar41 = pfVar22[8];
    fVar42 = pfVar22[9];
    fVar43 = pfVar22[10];
    fVar44 = pfVar22[0xb];
    fVar45 = pfVar22[0xc];
    fVar46 = pfVar22[0xd];
  }
LAB_147a7b574:
  *(float *)(param_2 + 4) = fVar43;
  *(float *)((longlong)param_2 + 0x24) = fVar44;
  *(float *)(param_2 + 5) = fVar45;
  *(float *)((longlong)param_2 + 0x2c) = fVar46;
  *(float *)(param_2 + 2) = fVar39;
  *(float *)((longlong)param_2 + 0x14) = fVar40;
  *(float *)(param_2 + 3) = fVar41;
  *(float *)((longlong)param_2 + 0x1c) = fVar42;
  *(float *)param_2 = fVar48;
  *(float *)((longlong)param_2 + 4) = fVar47;
  *(float *)(param_2 + 1) = fVar49;
  *(float *)((longlong)param_2 + 0xc) = fVar38;
  return param_2;
}



// FUNCTION 147a7ba32 FUN_147a7ba32 body=174 status=ok
// SIG undefined FUN_147a7ba32(void)

undefined8 FUN_147a7ba32(longlong *param_1,undefined4 param_2,float *param_3)

{
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x2e8))(param_1,&local_50,param_2,0);
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_50);
  *param_3 = (float)local_50;
  param_3[1] = (float)local_48;
  param_3[2] = (float)local_40;
  param_3[3] = (float)local_38;
  param_3[4] = (float)local_30;
  param_3[5] = (float)local_28;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7bae2 FUN_147a7bae2 body=85 status=ok
// SIG undefined FUN_147a7bae2(void)

undefined8 FUN_147a7bae2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_147a7b4ea(param_1 + 0x38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7bb76 FUN_147a7bb76 body=156 status=ok
// SIG undefined FUN_147a7bb76(void)

undefined4 * FUN_147a7bb76(longlong *param_1,undefined4 *param_2,uint param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  if (5 < param_3) {
    return param_2;
  }
  switch(param_3) {
  case 0:
    uVar3 = 0xff200000;
    uVar2 = 0xffff0000;
    break;
  case 1:
    if ((uVar1 & 0xfffffffd) == 4) {
      uVar3 = 0xff1c0000;
      uVar2 = 0xffc40000;
      break;
    }
    goto LAB_147a7bbf6;
  case 2:
    if ((uVar1 & 0xfffffffd) != 4) goto switchD_147a7bba4_caseD_4;
LAB_147a7bbf6:
    uVar3 = 0xff002000;
    uVar2 = 0xff00ff00;
    break;
  case 3:
    uVar3 = 0xff001c00;
    uVar2 = 0xff00c400;
    break;
  case 4:
switchD_147a7bba4_caseD_4:
    uVar3 = 0xff000020;
    uVar2 = 0xff0000ff;
    break;
  case 5:
    uVar3 = 0xff00001c;
    uVar2 = 0xff0000c4;
  }
  if (param_4 != '\0') {
    uVar2 = uVar3;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 147a7bc28 FUN_147a7bc28 body=192 status=ok
// SIG undefined FUN_147a7bc28(void)

void FUN_147a7bc28(longlong param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  memcpy(local_c8,(void *)((longlong)param_3 * 0xa0 + *(longlong *)(param_1 + 0x10)),0xa0);
  puVar1 = &local_f8;
  local_d8 = local_a0;
  uStack_d4 = uStack_9c;
  uStack_d0 = uStack_98;
  uStack_cc = uStack_94;
  local_e8 = local_b0;
  uStack_e4 = uStack_ac;
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  local_f8 = local_c0;
  uStack_f4 = uStack_bc;
  uStack_f0 = uStack_b8;
  uStack_ec = uStack_b4;
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2f0))(param_1 + -0x28,puVar1);
  if ((param_2 & 1) != 0) {
    puVar1 = &uStack_e0;
    param_2 = param_2 - ((int)param_2 >> 0x1f);
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0((float)*(double *)(puVar1 + (longlong)((int)param_2 >> 1) * 2));
  }
  return;
}



// FUNCTION 147a7bda4 FUN_147a7bda4 body=602 status=ok
// SIG undefined FUN_147a7bda4(void)

void FUN_147a7bda4(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_e8 = 0.0;
  dStack_e0 = 0.0;
  local_f8 = 0.0;
  dStack_f0 = 0.0;
  local_108 = 0.0;
  dStack_100 = 0.0;
  local_118 = 0.0;
  dStack_110 = 0.0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_138 = 0.0;
  dStack_130 = 0.0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  FUN_147a7c000(param_1 + 0x10,&local_108,&local_138);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2f0))(param_1 + -0x28,&local_108);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2f0))(param_1 + -0x28,&local_138);
  uVar2 = (undefined4)((ulonglong)local_138 >> 0x20);
  uVar7 = (undefined4)((ulonglong)dStack_130 >> 0x20);
  uVar1 = SUB84(local_138,0);
  uVar5 = uVar2;
  if (dStack_130 <= local_138) {
    uVar1 = SUB84(dStack_130,0);
    uVar5 = uVar7;
  }
  uVar8 = (undefined4)((ulonglong)local_128 >> 0x20);
  if (local_128 <= (double)CONCAT44(uVar5,uVar1)) {
    uVar1 = SUB84(local_128,0);
    uVar5 = uVar8;
  }
  uVar10 = SUB84(local_108,0);
  uVar12 = (undefined4)((ulonglong)local_108 >> 0x20);
  if (dStack_100 <= local_108) {
    uVar10 = SUB84(dStack_100,0);
    uVar12 = (undefined4)((ulonglong)dStack_100 >> 0x20);
  }
  if (local_f8 <= (double)CONCAT44(uVar12,uVar10)) {
    uVar10 = SUB84(local_f8,0);
    uVar12 = (undefined4)((ulonglong)local_f8 >> 0x20);
  }
  uVar9 = (undefined4)((ulonglong)local_e8 >> 0x20);
  uVar6 = (undefined4)((ulonglong)dStack_f0 >> 0x20);
  uVar13 = SUB84(dStack_f0,0);
  uVar15 = uVar6;
  if (local_e8 <= dStack_f0) {
    uVar13 = SUB84(local_e8,0);
    uVar15 = uVar9;
  }
  uVar14 = (undefined4)((ulonglong)dStack_e0 >> 0x20);
  if (dStack_e0 <= (double)CONCAT44(uVar15,uVar13)) {
    uVar13 = SUB84(dStack_e0,0);
    uVar15 = uVar14;
  }
  if ((double)CONCAT44(uVar15,uVar13) <= (double)CONCAT44(uVar12,uVar10)) {
    uVar10 = uVar13;
    uVar12 = uVar15;
  }
  uVar13 = SUB84(dStack_120,0);
  uVar15 = (undefined4)((ulonglong)dStack_120 >> 0x20);
  if (local_118 <= dStack_120) {
    uVar13 = SUB84(local_118,0);
    uVar15 = (undefined4)((ulonglong)local_118 >> 0x20);
  }
  if (dStack_110 <= (double)CONCAT44(uVar15,uVar13)) {
    uVar13 = SUB84(dStack_110,0);
    uVar15 = (undefined4)((ulonglong)dStack_110 >> 0x20);
  }
  fVar11 = (float)(double)CONCAT44(uVar12,uVar10);
  if ((double)CONCAT44(uVar15,uVar13) <= (double)CONCAT44(uVar5,uVar1)) {
    uVar1 = uVar13;
    uVar5 = uVar15;
  }
  if ((double)CONCAT44(uVar5,uVar1) < (double)fVar11 ||
      (double)CONCAT44(uVar5,uVar1) == (double)fVar11) {
    fVar11 = (float)(double)CONCAT44(uVar5,uVar1);
  }
  *param_2 = fVar11;
  uVar1 = SUB84(local_138,0);
  if (local_138 <= dStack_130) {
    uVar1 = SUB84(dStack_130,0);
    uVar2 = uVar7;
  }
  if ((double)CONCAT44(uVar2,uVar1) <= local_128) {
    uVar1 = SUB84(local_128,0);
    uVar2 = uVar8;
  }
  dVar3 = dStack_120;
  if (dStack_120 <= local_118) {
    dVar3 = local_118;
  }
  if (dVar3 <= dStack_110) {
    dVar3 = dStack_110;
  }
  dVar4 = local_108;
  if (local_108 <= dStack_100) {
    dVar4 = dStack_100;
  }
  if (dVar4 <= local_f8) {
    dVar4 = local_f8;
  }
  uVar5 = SUB84(dStack_f0,0);
  if (dStack_f0 <= local_e8) {
    uVar5 = SUB84(local_e8,0);
    uVar6 = uVar9;
  }
  if ((double)CONCAT44(uVar6,uVar5) <= dStack_e0) {
    uVar5 = SUB84(dStack_e0,0);
    uVar6 = uVar14;
  }
  if (dVar4 <= (double)CONCAT44(uVar6,uVar5)) {
    dVar4 = (double)CONCAT44(uVar6,uVar5);
  }
  fVar11 = (float)dVar4;
  if ((double)CONCAT44(uVar2,uVar1) <= dVar3) {
    uVar1 = SUB84(dVar3,0);
    uVar2 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  if ((double)fVar11 < (double)CONCAT44(uVar2,uVar1) ||
      (double)fVar11 == (double)CONCAT44(uVar2,uVar1)) {
    fVar11 = (float)(double)CONCAT44(uVar2,uVar1);
  }
  *param_3 = fVar11;
  if ((local_d0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7c000 FUN_147a7c000 body=272 status=ok
// SIG undefined FUN_147a7c000(void)

void FUN_147a7c000(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 1) {
    lVar3 = *param_1;
    uVar8 = *(undefined8 *)(lVar3 + 8);
    uVar9 = *(undefined8 *)(lVar3 + 0x10);
    uVar10 = *(undefined8 *)(lVar3 + 0x18);
    uVar11 = *(undefined8 *)(lVar3 + 0x20);
    uVar12 = *(undefined8 *)(lVar3 + 0x30);
    param_2[4] = *(undefined8 *)(lVar3 + 0x28);
    param_2[5] = uVar12;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
    *param_2 = uVar8;
    param_2[1] = uVar9;
    param_4 = (undefined8 *)(*param_1 + 8);
  }
  else {
    if (uVar2 != 0) {
      lVar3 = *param_1;
      uVar8 = *(undefined8 *)(lVar3 + 8);
      uVar9 = *(undefined8 *)(lVar3 + 0x10);
      uVar10 = *(undefined8 *)(lVar3 + 0x18);
      uVar11 = *(undefined8 *)(lVar3 + 0x20);
      uVar12 = *(undefined8 *)(lVar3 + 0x30);
      param_2[4] = *(undefined8 *)(lVar3 + 0x28);
      param_2[5] = uVar12;
      param_2[2] = uVar10;
      param_2[3] = uVar11;
      *param_2 = uVar8;
      param_2[1] = uVar9;
      lVar3 = *param_1;
      uVar4 = *(undefined4 *)(lVar3 + 8);
      uVar5 = *(undefined4 *)(lVar3 + 0xc);
      uVar6 = *(undefined4 *)(lVar3 + 0x10);
      uVar7 = *(undefined4 *)(lVar3 + 0x14);
      uVar8 = *(undefined8 *)(lVar3 + 0x18);
      uVar9 = *(undefined8 *)(lVar3 + 0x20);
      uVar10 = *(undefined8 *)(lVar3 + 0x30);
      param_3[4] = *(undefined8 *)(lVar3 + 0x28);
      param_3[5] = uVar10;
      param_3[2] = uVar8;
      param_3[3] = uVar9;
      *(undefined4 *)param_3 = uVar4;
      *(undefined4 *)((longlong)param_3 + 4) = uVar5;
      *(undefined4 *)(param_3 + 1) = uVar6;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar7;
      uVar13 = uVar2;
      if ((char)param_1[2] == '\0') {
        uVar13 = uVar2 - 1;
      }
      if ((int)uVar13 < 1) {
        return;
      }
      uVar14 = 0;
      do {
        uVar1 = uVar14 + 1;
        uVar15 = 0;
        if (uVar14 != uVar2 - 1) {
          uVar15 = uVar1;
        }
        FUN_1467f736e(uVar14 * 0xa0 + *param_1,uVar15 * 0xa0 + *param_1,param_2,param_3);
        uVar14 = uVar1;
      } while (uVar1 != uVar13);
      return;
    }
    uVar8 = *param_4;
    uVar9 = param_4[1];
    uVar10 = param_4[2];
    uVar11 = param_4[3];
    uVar12 = param_4[5];
    param_2[4] = param_4[4];
    param_2[5] = uVar12;
    param_2[2] = uVar10;
    param_2[3] = uVar11;
    *param_2 = uVar8;
    param_2[1] = uVar9;
  }
  uVar8 = *param_4;
  uVar9 = param_4[1];
  uVar10 = param_4[2];
  uVar11 = param_4[3];
  uVar12 = param_4[5];
  param_3[4] = param_4[4];
  param_3[5] = uVar12;
  param_3[2] = uVar10;
  param_3[3] = uVar11;
  *param_3 = uVar8;
  param_3[1] = uVar9;
  return;
}



// FUNCTION 147a7c252 FUN_147a7c252 body=169 status=ok
// SIG undefined FUN_147a7c252(void)

void FUN_147a7c252(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  puVar1 = local_88;
  FUN_147a7b4ea(param_1 + 0x10,puVar1);
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x2f0))(param_1 + -0x28,puVar1);
  if ((param_2 & 1) != 0) {
    puVar1 = local_70;
    param_2 = param_2 - ((int)param_2 >> 0x1f);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0((float)*(double *)(puVar1 + (longlong)((int)param_2 >> 1) * 8));
  }
  return;
}



// FUNCTION 147a7c2fc FUN_147a7c2fc body=161 status=ok
// SIG undefined FUN_147a7c2fc(void)

undefined4 FUN_147a7c2fc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_60 [48];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1 + 0x10;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_147a7b4ea(lVar1,local_60,param_2);
  uVar2 = FUN_147a7c39e(lVar1,param_2,local_60);
  FUN_147a7c4e4(lVar1);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7c39e FUN_147a7c39e body=324 status=ok
// SIG undefined FUN_147a7c39e(void)

ulonglong FUN_147a7c39e(longlong *param_1,float param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float *pfVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [36];
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(uint *)(param_1 + 1);
  if ((int)uVar3 < 1) {
    uVar11 = 0;
  }
  else {
    pfVar10 = (float *)*param_1;
    uVar11 = 0;
    do {
      if (param_2 < *pfVar10 || param_2 == *pfVar10) goto LAB_147a7c3ee;
      uVar11 = uVar11 + 1;
      pfVar10 = pfVar10 + 0x28;
    } while (uVar3 != uVar11);
    uVar11 = (ulonglong)uVar3;
  }
LAB_147a7c3ee:
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3 + 1) {
    FUN_147a8bbf8(param_1,uVar3);
  }
  lVar5 = (uVar11 & 0xffffffff) * 0xa0;
  memmove((void *)(*param_1 + lVar5 + 0xa0),(void *)(*param_1 + lVar5),
          (ulonglong)(uVar3 - (int)uVar11) * 0xa0);
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  local_70 = (undefined4)*param_3;
  uStack_6c = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_68 = (undefined4)param_3[1];
  uStack_64 = (undefined4)((ulonglong)param_3[1] >> 0x20);
  lVar4 = *param_1;
  *(float *)(lVar4 + lVar5) = param_2;
  uStack_48._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(lVar4 + 0x34 + lVar5) = uStack_48._4_4_;
  local_60._0_4_ = (undefined4)uVar6;
  local_60._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_58._0_4_ = (undefined4)uVar7;
  uStack_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_50._0_4_ = (undefined4)uVar8;
  local_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_48._0_4_ = (undefined4)uVar9;
  puVar1 = (undefined4 *)(lVar4 + 0x24 + lVar5);
  *puVar1 = uStack_58._4_4_;
  puVar1[1] = (undefined4)local_50;
  puVar1[2] = local_50._4_4_;
  puVar1[3] = (undefined4)uStack_48;
  puVar1 = (undefined4 *)(lVar4 + 0x14 + lVar5);
  *puVar1 = uStack_64;
  puVar1[1] = (undefined4)local_60;
  puVar1[2] = local_60._4_4_;
  puVar1[3] = (undefined4)uStack_58;
  puVar2 = (undefined8 *)(lVar4 + 4 + lVar5);
  *puVar2 = CONCAT44(local_70,uStack_74);
  puVar2[1] = CONCAT44(uStack_68,uStack_6c);
  puVar2 = (undefined8 *)(lVar4 + 0x38 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x48 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x58 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x68 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x78 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x88 + lVar5);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar4 + 0x98 + lVar5) = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar11 & 0xffffffff;
  }
  local_60 = uVar6;
  uStack_58 = uVar7;
  local_50 = uVar8;
  uStack_48 = uVar9;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7c4e4 FUN_147a7c4e4 body=1018 status=ok
// SIG undefined FUN_147a7c4e4(void)

void FUN_147a7c4e4(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint uVar33;
  float *pfVar34;
  undefined4 *puVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_138 [32];
  float local_118;
  float *local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar10 = (int)param_1[1];
  if (0 < (longlong)iVar10) {
    uVar36 = iVar10 - 1;
    lVar16 = (ulonglong)uVar36 * 0xa0;
    uVar38 = 1;
    lVar39 = 0;
    do {
      if (lVar39 == 0) {
        uVar33 = uVar36;
        if ((char)param_1[2] == '\0') {
          uVar33 = 0;
        }
      }
      else {
        uVar33 = uVar38 - 2;
      }
      uVar37 = uVar38;
      if ((lVar16 == lVar39) && (uVar37 = 0, (char)param_1[2] == '\0')) {
        uVar37 = uVar36;
      }
      lVar11 = *param_1;
      bVar9 = *(byte *)(lVar11 + 0x98 + lVar39);
      if (bVar9 < 6) {
        puVar35 = (undefined4 *)((longlong)(int)uVar33 * 0xa0 + lVar11);
        pfVar34 = (float *)((longlong)(int)uVar37 * 0xa0 + lVar11);
        switch(bVar9) {
        case 0:
          dVar3 = *(double *)(lVar11 + 0x30 + lVar39);
          dVar12 = *(double *)(pfVar34 + 0xc) - dVar3;
          dVar4 = *(double *)(lVar11 + 0x28 + lVar39);
          dVar41 = *(double *)(pfVar34 + 10) - dVar4;
          dVar5 = *(double *)(lVar11 + 0x20 + lVar39);
          dVar42 = *(double *)(pfVar34 + 8) - dVar5;
          dVar6 = *(double *)(lVar11 + 0x18 + lVar39);
          dVar13 = *(double *)(pfVar34 + 6) - dVar6;
          dVar7 = *(double *)(lVar11 + 8 + lVar39);
          dVar8 = *(double *)(lVar11 + 0x10 + lVar39);
          dVar15 = *(double *)(pfVar34 + 4) - dVar8;
          dVar14 = *(double *)(pfVar34 + 2) - dVar7;
          *(double *)(lVar11 + 0x68 + lVar39) = dVar14;
          *(double *)(lVar11 + 0x70 + lVar39) = dVar15;
          *(double *)(lVar11 + 0x78 + lVar39) = dVar13;
          *(double *)(lVar11 + 0x80 + lVar39) = dVar42;
          *(double *)(lVar11 + 0x88 + lVar39) = dVar41;
          *(double *)(lVar11 + 0x90 + lVar39) = dVar12;
          if ((5 < *(byte *)(puVar35 + 0x26)) ||
             ((0x3aU >> (*(byte *)(puVar35 + 0x26) & 0x1f) & 1) == 0)) {
            dVar12 = dVar3 - *(double *)(puVar35 + 0xc);
            dVar41 = dVar4 - *(double *)(puVar35 + 10);
            dVar42 = dVar5 - *(double *)(puVar35 + 8);
            dVar13 = dVar6 - *(double *)(puVar35 + 6);
            dVar15 = dVar8 - *(double *)(puVar35 + 4);
            dVar14 = dVar7 - *(double *)(puVar35 + 2);
          }
          *(double *)(lVar11 + 0x38 + lVar39) = dVar14;
          *(double *)(lVar11 + 0x40 + lVar39) = dVar15;
          *(double *)(lVar11 + 0x48 + lVar39) = dVar13;
          *(double *)(lVar11 + 0x50 + lVar39) = dVar42;
          *(double *)(lVar11 + 0x58 + lVar39) = dVar41;
          *(double *)(lVar11 + 0x60 + lVar39) = dVar12;
          break;
        default:
          if ((lVar39 == 0) || ((lVar16 == lVar39 && ((char)param_1[2] == '\0'))))
          goto switchD_147a7c5e3_caseD_2;
          if ((*(byte *)(puVar35 + 0x26) < 6) &&
             ((0x3aU >> (*(byte *)(puVar35 + 0x26) & 0x1f) & 1) != 0)) {
            local_d8 = 0;
            uStack_d0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_f8 = 0;
            uStack_f0 = 0;
            if ((lVar16 == lVar39) && ((char)param_1[2] != '\0')) {
              fVar40 = *(float *)(lVar11 + lVar39);
              local_118 = *(float *)((longlong)param_1 + 0x14) + fVar40;
            }
            else {
              local_118 = *pfVar34;
              fVar40 = *(float *)(lVar11 + lVar39);
            }
            local_110 = pfVar34 + 2;
            local_108 = bVar9 == 5;
            lVar11 = lVar11 + 8 + lVar39;
            local_100 = &local_f8;
            FUN_147a8bc8c(*puVar35,puVar35 + 2,fVar40,lVar11);
            *(undefined8 *)(lVar11 + 0x50) = local_d8;
            *(undefined8 *)(lVar11 + 0x58) = uStack_d0;
            *(undefined8 *)(lVar11 + 0x40) = local_e8;
            *(undefined8 *)(lVar11 + 0x48) = uStack_e0;
            *(undefined8 *)(lVar11 + 0x30) = local_f8;
            *(undefined8 *)(lVar11 + 0x38) = uStack_f0;
            *(undefined4 *)(lVar11 + 0x60) = (undefined4)local_f8;
            *(undefined4 *)(lVar11 + 100) = local_f8._4_4_;
            *(undefined4 *)(lVar11 + 0x68) = (undefined4)uStack_f0;
            *(undefined4 *)(lVar11 + 0x6c) = uStack_f0._4_4_;
            *(undefined4 *)(lVar11 + 0x70) = (undefined4)local_e8;
            *(undefined4 *)(lVar11 + 0x74) = local_e8._4_4_;
            *(undefined4 *)(lVar11 + 0x78) = (undefined4)uStack_e0;
            *(undefined4 *)(lVar11 + 0x7c) = uStack_e0._4_4_;
            *(undefined4 *)(lVar11 + 0x80) = (undefined4)local_d8;
            *(undefined4 *)(lVar11 + 0x84) = local_d8._4_4_;
            *(undefined4 *)(lVar11 + 0x88) = (undefined4)uStack_d0;
            *(undefined4 *)(lVar11 + 0x8c) = uStack_d0._4_4_;
          }
          else {
            uVar28 = *(undefined8 *)(puVar35 + 0xe);
            uVar29 = *(undefined8 *)(puVar35 + 0x10);
            uVar30 = *(undefined8 *)(puVar35 + 0x12);
            uVar31 = *(undefined8 *)(puVar35 + 0x14);
            uVar32 = *(undefined8 *)(puVar35 + 0x18);
            puVar1 = (undefined8 *)(lVar11 + 0x58 + lVar39);
            *puVar1 = *(undefined8 *)(puVar35 + 0x16);
            puVar1[1] = uVar32;
            puVar1 = (undefined8 *)(lVar11 + 0x48 + lVar39);
            *puVar1 = uVar30;
            puVar1[1] = uVar31;
            puVar1 = (undefined8 *)(lVar11 + 0x38 + lVar39);
            *puVar1 = uVar28;
            puVar1[1] = uVar29;
            uVar17 = puVar35[0x1b];
            uVar18 = puVar35[0x1c];
            uVar19 = puVar35[0x1d];
            uVar20 = puVar35[0x1e];
            uVar21 = puVar35[0x1f];
            uVar22 = puVar35[0x20];
            uVar23 = puVar35[0x21];
            uVar24 = puVar35[0x22];
            uVar25 = puVar35[0x23];
            uVar26 = puVar35[0x24];
            uVar27 = puVar35[0x25];
            puVar2 = (undefined4 *)(lVar11 + 0x68 + lVar39);
            *puVar2 = puVar35[0x1a];
            puVar2[1] = uVar17;
            puVar2[2] = uVar18;
            puVar2[3] = uVar19;
            puVar35 = (undefined4 *)(lVar11 + 0x78 + lVar39);
            *puVar35 = uVar20;
            puVar35[1] = uVar21;
            puVar35[2] = uVar22;
            puVar35[3] = uVar23;
            puVar35 = (undefined4 *)(lVar11 + 0x88 + lVar39);
            *puVar35 = uVar24;
            puVar35[1] = uVar25;
            puVar35[2] = uVar26;
            puVar35[3] = uVar27;
          }
          break;
        case 2:
switchD_147a7c5e3_caseD_2:
          puVar1 = (undefined8 *)(lVar11 + 0x88 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x78 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x68 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x58 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x48 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x38 + lVar39);
          *puVar1 = 0;
          puVar1[1] = 0;
          break;
        case 3:
        case 4:
          break;
        }
      }
      uVar38 = uVar38 + 1;
      lVar39 = lVar39 + 0xa0;
    } while ((longlong)iVar10 * 0xa0 != lVar39);
  }
  if ((local_c0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a7c8e0 FUN_147a7c8e0 body=103 status=ok
// SIG undefined FUN_147a7c8e0(void)

void FUN_147a7c8e0(longlong param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (~param_2 + iVar1 != 0) {
    memmove((void *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_2 * 0xa0),
            (void *)((longlong)(int)param_2 * 0xa0 + *(longlong *)(param_1 + 0x10) + 0xa0),
            (longlong)(int)(~param_2 + iVar1) * 0xa0);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar1 + -1;
  FUN_147a8bf60(param_1 + 0x10);
  FUN_147a7c4e4(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7c948 FUN_147a7c948 body=46 status=ok
// SIG undefined FUN_147a7c948(void)

undefined4 FUN_147a7c948(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147a7c976(param_1 + 0x10);
  FUN_147a7c4e4(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return uVar1;
}



// FUNCTION 147a7c976 FUN_147a7c976 body=400 status=ok
// SIG undefined FUN_147a7c976(void)

uint FUN_147a7c976(longlong *param_1,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
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
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((-1 < (int)param_2) && (iVar5 = (int)param_1[1], (int)param_2 < iVar5)) {
    lVar4 = *param_1;
    lVar6 = (ulonglong)param_2 * 0xa0;
    puVar1 = (undefined8 *)(lVar4 + 8 + lVar6);
    local_68 = *puVar1;
    uStack_60 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar6);
    local_58 = *puVar1;
    uStack_50 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x28 + lVar6);
    local_48 = *puVar1;
    uStack_40 = puVar1[1];
    uVar3 = *(undefined1 *)(lVar4 + 0x98 + lVar6);
    puVar1 = (undefined8 *)(lVar4 + 0x38 + lVar6);
    local_98 = *puVar1;
    uStack_90 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x48 + lVar6);
    local_88 = *puVar1;
    uStack_80 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x58 + lVar6);
    local_78 = *puVar1;
    uStack_70 = puVar1[1];
    puVar2 = (undefined4 *)(lVar4 + 0x68 + lVar6);
    local_c8 = *puVar2;
    uStack_c4 = puVar2[1];
    uStack_c0 = puVar2[2];
    uStack_bc = puVar2[3];
    puVar1 = (undefined8 *)(lVar4 + 0x78 + lVar6);
    local_b8 = *puVar1;
    uStack_b0 = puVar1[1];
    puVar1 = (undefined8 *)(lVar4 + 0x88 + lVar6);
    local_a8 = *puVar1;
    uStack_a0 = puVar1[1];
    if (~param_2 + iVar5 != 0) {
      memmove((void *)(lVar4 + lVar6),(void *)(lVar4 + lVar6 + 0xa0),
              (longlong)(int)(~param_2 + iVar5) * 0xa0);
      iVar5 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar5 + -1;
    FUN_147a8bf60(param_1);
    param_2 = FUN_147a7c39e(param_1,param_3,&local_68);
    lVar6 = (longlong)(int)param_2 * 0xa0;
    *(undefined1 *)(*param_1 + 0x98 + lVar6) = uVar3;
    lVar4 = *param_1;
    puVar1 = (undefined8 *)(lVar4 + 0x38 + lVar6);
    *puVar1 = local_98;
    puVar1[1] = uStack_90;
    puVar1 = (undefined8 *)(lVar4 + 0x48 + lVar6);
    *puVar1 = local_88;
    puVar1[1] = uStack_80;
    puVar1 = (undefined8 *)(lVar4 + 0x58 + lVar6);
    *puVar1 = local_78;
    puVar1[1] = uStack_70;
    lVar4 = *param_1;
    puVar2 = (undefined4 *)(lVar4 + 0x88 + lVar6);
    *puVar2 = (undefined4)local_a8;
    puVar2[1] = local_a8._4_4_;
    puVar2[2] = (undefined4)uStack_a0;
    puVar2[3] = uStack_a0._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x78 + lVar6);
    *puVar2 = (undefined4)local_b8;
    puVar2[1] = local_b8._4_4_;
    puVar2[2] = (undefined4)uStack_b0;
    puVar2[3] = uStack_b0._4_4_;
    puVar2 = (undefined4 *)(lVar4 + 0x68 + lVar6);
    *puVar2 = local_c8;
    puVar2[1] = uStack_c4;
    puVar2[2] = uStack_c0;
    puVar2[3] = uStack_bc;
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7cb08 FUN_147a7cb08 body=289 status=ok
// SIG undefined FUN_147a7cb08(void)

void FUN_147a7cb08(longlong param_1,uint param_2,int param_3,float param_4)

{
  longlong lVar1;
  
  if (param_2 < 6) {
    lVar1 = (longlong)param_3 * 0xa0 + *(longlong *)(param_1 + 0x10);
    switch(param_2) {
    case 0:
      if ((double)param_4 <= *(double *)(lVar1 + 0x20)) {
        param_4 = (float)*(double *)(lVar1 + 0x20);
      }
      *(double *)(lVar1 + 8) = (double)param_4;
      break;
    case 1:
      if (*(double *)(lVar1 + 8) <= (double)param_4) {
        param_4 = (float)*(double *)(lVar1 + 8);
      }
      *(double *)(lVar1 + 0x20) = (double)param_4;
      break;
    case 2:
      if ((double)param_4 <= *(double *)(lVar1 + 0x28)) {
        param_4 = (float)*(double *)(lVar1 + 0x28);
      }
      *(double *)(lVar1 + 0x10) = (double)param_4;
      break;
    case 3:
      if (*(double *)(lVar1 + 0x10) <= (double)param_4) {
        param_4 = (float)*(double *)(lVar1 + 0x10);
      }
      *(double *)(lVar1 + 0x28) = (double)param_4;
      break;
    case 4:
      if ((double)param_4 <= *(double *)(lVar1 + 0x30)) {
        param_4 = (float)*(double *)(lVar1 + 0x30);
      }
      *(double *)(lVar1 + 0x18) = (double)param_4;
      break;
    case 5:
      if (*(double *)(lVar1 + 0x18) <= (double)param_4) {
        param_4 = (float)*(double *)(lVar1 + 0x18);
      }
      *(double *)(lVar1 + 0x30) = (double)param_4;
    }
  }
  FUN_147a7c4e4(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7cc2a FUN_147a7cc2a body=50 status=ok
// SIG undefined FUN_147a7cc2a(void)

void FUN_147a7cc2a(longlong param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x98 + (longlong)param_2 * 0xa0) = param_3;
  FUN_147a7c4e4(param_1 + 0x10);
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
  return;
}



// FUNCTION 147a7ce56 FUN_147a7ce56 body=278 status=ok
// SIG undefined FUN_147a7ce56(void)

void FUN_147a7ce56(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = 0.0;
  dStack_40 = 0.0;
  local_58 = 0.0;
  dStack_50 = 0.0;
  local_68 = 0.0;
  dStack_60 = 0.0;
  local_78 = 0.0;
  dStack_70 = 0.0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  local_98 = 0.0;
  dStack_90 = 0.0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_147a7c000(param_1 + 7,&local_68,&local_98);
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_68);
  (**(code **)(*param_1 + 0x2f0))(param_1,&local_98);
  uVar1 = SUB84(local_68,0);
  uVar2 = (undefined4)((ulonglong)local_68 >> 0x20);
  if (local_98 <= local_68) {
    uVar1 = SUB84(local_98,0);
    uVar2 = (undefined4)((ulonglong)local_98 >> 0x20);
  }
  *param_2 = CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(dStack_60,0);
  uVar2 = (undefined4)((ulonglong)dStack_60 >> 0x20);
  if (dStack_90 <= dStack_60) {
    uVar1 = SUB84(dStack_90,0);
    uVar2 = (undefined4)((ulonglong)dStack_90 >> 0x20);
  }
  param_2[1] = CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(local_58,0);
  uVar2 = (undefined4)((ulonglong)local_58 >> 0x20);
  if (local_88 <= local_58) {
    uVar1 = SUB84(local_88,0);
    uVar2 = (undefined4)((ulonglong)local_88 >> 0x20);
  }
  param_2[2] = CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(dStack_50,0);
  uVar2 = (undefined4)((ulonglong)dStack_50 >> 0x20);
  if (dStack_50 <= dStack_80) {
    uVar1 = SUB84(dStack_80,0);
    uVar2 = (undefined4)((ulonglong)dStack_80 >> 0x20);
  }
  *param_3 = CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(local_48,0);
  uVar2 = (undefined4)((ulonglong)local_48 >> 0x20);
  if (local_48 <= local_78) {
    uVar1 = SUB84(local_78,0);
    uVar2 = (undefined4)((ulonglong)local_78 >> 0x20);
  }
  param_3[1] = CONCAT44(uVar2,uVar1);
  uVar1 = SUB84(dStack_40,0);
  uVar2 = (undefined4)((ulonglong)dStack_40 >> 0x20);
  if (dStack_40 <= dStack_70) {
    uVar1 = SUB84(dStack_70,0);
    uVar2 = (undefined4)((ulonglong)dStack_70 >> 0x20);
  }
  param_3[2] = CONCAT44(uVar2,uVar1);
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7cf6e FUN_147a7cf6e body=211 status=ok
// SIG undefined FUN_147a7cf6e(void)

void FUN_147a7cf6e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_38 [36];
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0.0;
  cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,param_3,param_1[8]);
  if (cVar2 == '\0') {
    local_14 = *(float *)(param_1 + 7);
  }
  if ((char)param_1[0xb] == '\x01') {
    local_14 = ABS(local_14);
  }
  else {
    fVar4 = local_14;
    if ((char)param_1[0xb] == '\x02') goto LAB_147a7d025;
  }
  fVar4 = *(float *)(param_1 + 9);
  fVar1 = *(float *)((longlong)param_1 + 0x4c);
  if (fVar1 <= fVar4) {
    fVar5 = *(float *)(param_1 + 10);
    fVar6 = 0.0;
  }
  else {
    fVar5 = *(float *)(param_1 + 10);
    fVar6 = (*(float *)((longlong)param_1 + 0x54) - fVar5) / (fVar1 - fVar4);
  }
  fVar3 = local_14;
  if (fVar1 <= local_14) {
    fVar3 = fVar1;
  }
  if (fVar3 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = (fVar3 - fVar4) * fVar6 + fVar5;
LAB_147a7d025:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar4);
  }
  return;
}



// FUNCTION 147a7d042 FUN_147a7d042 body=672 status=ok
// SIG undefined FUN_147a7d042(void)

double * FUN_147a7d042(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_d8 [32];
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = 0.0;
  dStack_b0 = 0.0;
  local_a8 = 0.0;
  cVar9 = (**(code **)(*param_1 + 0x2d8))(param_1,param_4,param_1[0xb]);
  if (cVar9 == '\0') {
    local_a8 = (double)param_1[9];
    local_b8 = (double)param_1[7];
    dStack_b0 = (double)param_1[8];
  }
  lVar8 = param_1[0x18];
  if ((char)lVar8 == '\x01') {
    local_b8 = ABS(local_b8);
  }
  cVar9 = *(char *)((longlong)param_1 + 0xc1);
  if (cVar9 == '\x01') {
    dStack_b0 = ABS(dStack_b0);
  }
  cVar7 = *(char *)((longlong)param_1 + 0xc2);
  if (cVar7 == '\x01') {
    local_a8 = ABS(local_a8);
  }
  dVar1 = (double)param_1[0xc];
  dVar12 = (double)param_1[0xf];
  dVar10 = 0.0;
  dVar11 = 0.0;
  if (dVar1 < dVar12) {
    dVar11 = ((double)param_1[0x15] - (double)param_1[0x12]) / (dVar12 - dVar1);
  }
  dVar2 = (double)param_1[0xd];
  dVar3 = (double)param_1[0x10];
  if (dVar2 < dVar3) {
    dVar10 = ((double)param_1[0x16] - (double)param_1[0x13]) / (dVar3 - dVar2);
  }
  dVar4 = (double)param_1[0xe];
  dVar5 = (double)param_1[0x11];
  if (dVar5 <= dVar4) {
    uVar13 = (undefined4)param_1[0x14];
    uVar14 = (undefined4)((ulonglong)param_1[0x14] >> 0x20);
    dVar6 = 0.0;
  }
  else {
    dVar6 = (double)param_1[0x14];
    uVar13 = SUB84(dVar6,0);
    uVar14 = (undefined4)((ulonglong)dVar6 >> 0x20);
    dVar6 = ((double)param_1[0x17] - dVar6) / (dVar5 - dVar4);
  }
  uVar15 = SUB84(local_b8,0);
  uVar16 = (undefined4)((ulonglong)local_b8 >> 0x20);
  if (dVar12 <= local_b8) {
    uVar15 = SUB84(dVar12,0);
    uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
  }
  if ((double)CONCAT44(uVar16,uVar15) <= dVar1) {
    uVar15 = SUB84(dVar1,0);
    uVar16 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  uVar17 = SUB84(dStack_b0,0);
  uVar18 = (undefined4)((ulonglong)dStack_b0 >> 0x20);
  if (dVar3 <= dStack_b0) {
    uVar17 = SUB84(dVar3,0);
    uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  if ((double)CONCAT44(uVar18,uVar17) <= dVar2) {
    uVar17 = SUB84(dVar2,0);
    uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  dVar12 = local_a8;
  if (dVar5 <= local_a8) {
    dVar12 = dVar5;
  }
  if (dVar12 <= dVar4) {
    dVar12 = dVar4;
  }
  dVar3 = (double)param_1[0x13];
  *param_2 = dVar11 * ((double)CONCAT44(uVar16,uVar15) - dVar1) + (double)param_1[0x12];
  param_2[1] = dVar10 * ((double)CONCAT44(uVar18,uVar17) - dVar2) + dVar3;
  param_2[2] = (dVar12 - dVar4) * dVar6 + (double)CONCAT44(uVar14,uVar13);
  if ((char)lVar8 == '\x02') {
    *param_2 = local_b8;
  }
  if (cVar9 == '\x02') {
    param_2[1] = dStack_b0;
  }
  if (cVar7 == '\x02') {
    param_2[2] = local_a8;
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7d2fa FUN_147a7d2fa body=33 status=ok
// SIG undefined FUN_147a7d2fa(void)

undefined8 FUN_147a7d2fa(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x10))(param_1,param_2,&DAT_14ca85100,param_3);
  return param_2;
}



// FUNCTION 147a7d31c FUN_147a7d31c body=329 status=ok
// SIG undefined FUN_147a7d31c(void)

longlong * FUN_147a7d31c(longlong *param_1,longlong param_2,uint param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  int local_74 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  uint local_44;
  undefined1 local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_74[0] = param_3 << 2;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 1;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_40 = 0;
  local_3c = 0;
  local_38 = L"FDynamicMeshBufferAllocator";
  local_30 = 0;
  uStack_28 = 0;
  local_74[1] = 4;
  local_74[2] = 0x8004;
  if ((param_3 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_68,0x8004,4);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_80 = &local_68;
    local_88 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_80 = &local_68;
    local_88 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 8;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7d466 FUN_147a7d466 body=42 status=ok
// SIG undefined FUN_147a7d466(void)

undefined8 FUN_147a7d466(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&DAT_14ca85100,param_3,param_4);
  return param_2;
}



// FUNCTION 147a7d490 FUN_147a7d490 body=326 status=ok
// SIG undefined FUN_147a7d490(void)

longlong * FUN_147a7d490(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_80;
  int local_74 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  uint local_44;
  undefined1 local_40;
  undefined4 local_3c;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_74[0] = param_3 * param_4;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 1;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_40 = 0;
  local_3c = 0;
  local_38 = L"FDynamicMeshBufferAllocator";
  local_30 = 0;
  uStack_28 = 0;
  local_74[1] = 0;
  local_74[2] = 0x4104;
  if (local_74[0] == 0) {
    FUN_14570b4be(param_2,&local_68,0x4104,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_80 = &local_68;
    local_88 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_80 = &local_68;
    local_88 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7d5d8 FUN_147a7d5d8 body=83 status=ok
// SIG undefined FUN_147a7d5d8(void)

int FUN_147a7d5d8(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_140d35044((longlong *)(lVar2 + 0x98),iVar1);
  }
  puVar4 = (undefined4 *)((longlong)iVar1 * 0x58 + *(longlong *)(lVar2 + 0x98));
  for (lVar3 = 0x16; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  return iVar1;
}



// FUNCTION 147a7d62c FUN_147a7d62c body=35 status=ok
// SIG undefined FUN_147a7d62c(void)

undefined4 FUN_147a7d62c(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xa0);
  FUN_147a7d650(*(longlong *)(param_1 + 0x10) + 0x98);
  return uVar1;
}



// FUNCTION 147a7d650 FUN_147a7d650 body=94 status=ok
// SIG undefined FUN_147a7d650(void)

void FUN_147a7d650(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140d35044(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x58 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x58)
    ;
    return;
  }
  return;
}



// FUNCTION 147a7d6ae FUN_147a7d6ae body=103 status=ok
// SIG undefined FUN_147a7d6ae(void)

void FUN_147a7d6ae(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    iVar2 = *(int *)(lVar3 + 0x28);
    *(uint *)(lVar3 + 0x28) = iVar2 + uVar1;
    if ((uint)(*(int *)(lVar3 + 0x2c) - iVar2) < uVar1) {
      FUN_1446f48e2((longlong *)(lVar3 + 0x20),iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 4 + *(longlong *)(lVar3 + 0x20)),(void *)*param_2,
           (longlong)(int)uVar1 << 2);
    return;
  }
  return;
}



// FUNCTION 147a7d716 FUN_147a7d716 body=165 status=ok
// SIG undefined FUN_147a7d716(void)

void FUN_147a7d716(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined2 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = &local_27;
  local_27 = 1;
  local_25 = 0;
  local_21 = 0;
  local_26 = param_5;
  local_24 = param_6;
  local_23 = 1;
  local_38 = param_8;
  local_40 = param_7;
  local_30 = 0xffffffff;
  local_48 = 0;
  local_58 = param_4;
  FUN_140d351b2(param_1,param_2,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7d7bc FUN_147a7d7bc body=186 status=ok
// SIG undefined FUN_147a7d7bc(void)

void FUN_147a7d7bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,longlong param_10)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_10 == 0) {
    local_40 = 0xffffffff;
  }
  else {
    local_40 = *(undefined4 *)(param_10 + 0x18);
  }
  local_60 = &local_2f;
  local_2f = 1;
  local_2d = 0;
  local_29 = 0;
  local_2e = param_5;
  local_2c = param_6;
  local_2b = 1;
  local_48 = param_9;
  local_50 = param_8;
  local_58 = 0;
  local_68 = param_4;
  FUN_140d351b2(param_1,param_2,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7d878 FUN_147a7d878 body=484 status=ok
// SIG undefined FUN_147a7d878(void)

longlong FUN_147a7d878(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined1 local_110 [64];
  longlong local_d0;
  undefined1 local_c0 [64];
  longlong local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)((longlong)param_1 + 0x24) < 1) {
    FUN_147a7da5e(param_1);
    iVar4 = ((int)param_1[2] + 1) % (int)param_1[1];
    FUN_147a7dbac(&local_128);
    lVar2 = *param_1;
    lVar6 = (longlong)iVar4 * 0xb8;
    puVar1 = (undefined4 *)(lVar2 + lVar6);
    *puVar1 = local_128;
    puVar1[1] = uStack_124;
    puVar1[2] = uStack_120;
    puVar1[3] = uStack_11c;
    *(undefined8 *)(puVar1 + 4) = local_118;
    FUN_14016d654(puVar1 + 6,local_110);
    FUN_14016d654(lVar2 + lVar6 + 0x68,local_c0);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    FUN_14016d654(*param_1 + lVar6 + 0x68,param_1 + 5);
    *(undefined4 *)(*param_1 + lVar6) = param_2;
    *(undefined4 *)(*param_1 + 4 + lVar6) = param_3;
    *(undefined4 *)(*param_1 + 8 + lVar6) = param_4;
    *(undefined4 *)(*param_1 + 0xc + lVar6) = param_5;
    *(int *)(param_1 + 2) = iVar4;
    iVar4 = *(int *)((longlong)param_1 + 0x14) + 1;
    if ((int)param_1[1] <= iVar4) {
      iVar4 = (int)param_1[1];
    }
    *(int *)((longlong)param_1 + 0x14) = iVar4;
    if (DAT_14ca8ba00 != (longlong *)0x0) {
      plVar3 = DAT_14ca8ba00;
      do {
        plVar5 = (longlong *)param_1[0x21];
        if ((longlong *)param_1[0x21] == (longlong *)0x0) {
          plVar5 = param_1 + 0x19;
        }
        iVar4 = *(int *)((longlong)plVar5 + (longlong)*(int *)(plVar3[2] + 100) * 4) + 1;
        if ((int)param_1[1] <= iVar4) {
          iVar4 = (int)param_1[1];
        }
        *(int *)((longlong)plVar5 + (longlong)*(int *)(plVar3[2] + 100) * 4) = iVar4;
        plVar3 = (longlong *)*plVar3;
      } while (plVar3 != (longlong *)0x0);
    }
    lVar2 = param_1[0x23] + 1;
    param_1[0x23] = lVar2;
  }
  else {
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + -1;
    lVar2 = -1;
  }
  if ((local_70 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7da5e FUN_147a7da5e body=332 status=ok
// SIG undefined FUN_147a7da5e(void)

void FUN_147a7da5e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar7 = 1;
  if (1 < *(int *)(DAT_14cad7948 + 4)) {
    iVar7 = *(int *)(DAT_14cad7948 + 4);
  }
  if ((int)param_1[1] != iVar7) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_147a7de2e(&local_58);
    uVar3 = (uint)uStack_50;
    if ((int)*(uint *)((longlong)param_1 + 0x14) < (int)(uint)uStack_50) {
      uVar3 = *(uint *)((longlong)param_1 + 0x14);
    }
    local_5c = uVar3 - 1;
    if (0 < (int)uVar3) {
      lVar12 = (ulonglong)local_5c * 0xb8 + 0x68;
      lVar11 = 0;
      do {
        lVar2 = *param_1;
        lVar9 = (longlong)(((int)param_1[2] + (int)lVar11) % (int)param_1[1]) * 0xb8;
        lVar8 = lVar9 + 0x18 + lVar2;
        lVar1 = local_58 + lVar12;
        lVar10 = local_58 + lVar12;
        *(undefined8 *)(lVar1 + -0x58) = *(undefined8 *)(lVar8 + -8);
        uVar4 = *(undefined4 *)(lVar8 + -0x14);
        uVar5 = *(undefined4 *)(lVar8 + -0x10);
        uVar6 = *(undefined4 *)(lVar8 + -0xc);
        *(undefined4 *)(lVar1 + -0x68) = *(undefined4 *)(lVar8 + -0x18);
        *(undefined4 *)(lVar1 + -100) = uVar4;
        *(undefined4 *)(lVar1 + -0x60) = uVar5;
        *(undefined4 *)(lVar1 + -0x5c) = uVar6;
        FUN_14016d654();
        FUN_14016d654(lVar10,lVar9 + 0x68 + lVar2);
        lVar11 = lVar11 + -1;
        lVar12 = lVar12 + -0xb8;
      } while (-lVar11 != (ulonglong)uVar3);
    }
    FUN_147a7de9c(param_1,&local_58);
    *(uint *)((longlong)param_1 + 0x14) = uVar3;
    *(uint *)(param_1 + 2) = local_5c;
    FUN_1456d7c02(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7dbac FUN_147a7dbac body=204 status=ok
// SIG undefined FUN_147a7dbac(void)

undefined4 * FUN_147a7dbac(undefined4 *param_1)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0xbf800000;
  param_1[1] = 0xbf800000;
  param_1[2] = 0xbf800000;
  param_1[3] = 0xbf800000;
  *(undefined8 *)(param_1 + 4) = 0xbf800000bf800000;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x1000000000;
  FUN_1448b6aaa(param_1 + 6,DAT_14ca8b9f8);
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0x1000000000;
  FUN_1448b6aaa(param_1 + 0x1a,DAT_14ca8b9f8);
  local_34 = 0x3f800000;
  FUN_1448b6b20(param_1 + 0x1a,&local_34);
  local_34 = 0xbf800000;
  FUN_1448b6b20(param_1 + 6,&local_34);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7dc7a FUN_147a7dc7a body=99 status=ok
// SIG undefined FUN_147a7dc7a(void)

void FUN_147a7dc7a(longlong *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  if ((param_2 != 0xffffffffffffffff) &&
     ((ulonglong)(param_1[0x23] - (longlong)*(int *)((longlong)param_1 + 0x14)) < param_2)) {
    lVar1 = (longlong)
            ((((int)param_2 - (int)param_1[0x23]) + (int)param_1[1] + (int)param_1[2]) %
            (int)param_1[1]) * 0xb8;
    *(undefined4 *)(*param_1 + 0x10 + lVar1) = param_3;
    *(undefined4 *)(*param_1 + 0x14 + lVar1) = param_4;
    FUN_14016d654(*param_1 + lVar1 + 0x18,param_5);
    return;
  }
  return;
}



// FUNCTION 147a7dcde FUN_147a7dcde body=156 status=ok
// SIG undefined FUN_147a7dcde(void)

undefined * FUN_147a7dcde(longlong *param_1,int param_2)

{
  undefined *puVar1;
  
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0x14) <= param_2)) {
    puVar1 = &DAT_14cad8158;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cad8210) {
      FUN_144b3d300(&DAT_14cad8210);
      if (DAT_14cad8210 == -1) {
        puVar1 = &DAT_14cad8158;
        FUN_147a7dbac(&DAT_14cad8158);
        atexit(FUN_1434dbf75);
        _Init_thread_footer(&DAT_14cad8210);
      }
    }
  }
  else {
    puVar1 = (undefined *)
             ((longlong)((((int)param_1[1] - param_2) + (int)param_1[2]) % (int)param_1[1]) * 0xb8 +
             *param_1);
  }
  return puVar1;
}



// FUNCTION 147a7dd7a FUN_147a7dd7a body=179 status=ok
// SIG undefined FUN_147a7dd7a(void)

longlong FUN_147a7dd7a(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [64];
  undefined1 *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1417c53aa(local_70,param_1 + 0x78);
  FUN_1417c53aa(param_2,param_1 + 0x28);
  for (puVar1 = DAT_14ca8ba00; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
    puVar3 = local_30;
    if (local_30 == (undefined1 *)0x0) {
      puVar3 = local_70;
    }
    lVar4 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      lVar4 = param_2;
    }
    lVar2 = (longlong)*(int *)(puVar1[2] + 100);
    fVar5 = *(float *)(lVar4 + lVar2 * 4);
    if (*(float *)(puVar3 + lVar2 * 4) <= fVar5) {
      fVar5 = *(float *)(puVar3 + lVar2 * 4);
    }
    *(float *)(lVar4 + lVar2 * 4) = fVar5;
  }
  if (local_30 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7de2e FUN_147a7de2e body=110 status=ok
// SIG undefined FUN_147a7de2e(void)

void FUN_147a7de2e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147a8c40c(param_1,iVar1);
    }
    FUN_147a8c3e2((longlong)iVar1 * 0xb8 + *param_1,param_2 - iVar1);
    return;
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_147a8c4a2(param_1,param_2,iVar1 - param_2);
  FUN_147a8c504(param_1);
  return;
}



// FUNCTION 147a7de9c FUN_147a7de9c body=95 status=ok
// SIG undefined FUN_147a7de9c(void)

undefined8 * FUN_147a7de9c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1456d7c02(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147a8c5b4(param_1,iVar1);
      FUN_147a8c629(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147a7df12 FUN_147a7df12 body=330 status=ok
// SIG undefined FUN_147a7df12(void)

void FUN_147a7df12(longlong *param_1,longlong *param_2,char param_3,uint param_4)

{
  int iVar1;
  undefined1 auStack_d8 [44];
  undefined1 local_ac [4];
  longlong *local_a8;
  int local_a0 [2];
  longlong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_50;
  undefined4 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  iVar1 = (int)param_1[7];
  *(uint *)(param_1 + 7) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar1 + 1U) {
    FUN_147a8cc04(param_1 + 6,iVar1);
  }
  *(longlong **)(param_1[6] + (longlong)iVar1 * 8) = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_2);
  }
  local_a0[0] = (param_4 & 0xff) * 2 + 1;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_a8 = param_2;
  local_98 = param_1;
  local_40 = param_3;
  FUN_147a8c718(&local_90,local_ac);
  (**(code **)(*param_1 + 0x2a8))(param_1,local_a0);
  if (param_3 != '\0') {
    (**(code **)(*param_2 + 0x2c8))(param_2);
  }
  local_48 = 0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8c68a(&local_90);
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7e05e FUN_147a7e05e body=156 status=ok
// SIG undefined FUN_147a7e05e(void)

void FUN_147a7e05e(longlong param_1)

{
  undefined1 auStack_a8 [40];
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80[0] = 0;
  local_50 = 0;
  local_48 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_147a8cc8a(param_1 + 0x48,local_80);
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8c68a(&uStack_70);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7e105 FUN_147a7e105 body=1078 status=ok
// SIG undefined FUN_147a7e105(void)

longlong * FUN_147a7e105(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  ushort uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbd8);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e31250);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc08);
  iVar3 = FUN_1448332aa(param_1,&DAT_149e3cbd8);
  if (iVar3 < 0x1f) {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    FUN_14021219d(param_1,&local_68);
    if ((int)param_1[8] < 0x202) {
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar5 = local_68;
      }
      lVar8 = 0;
      pwVar4 = L"softobject";
      while( true ) {
        uVar9 = *(ushort *)((longlong)puVar5 + lVar8);
        uVar10 = (ulonglong)uVar9;
        uVar7 = *(ushort *)((longlong)L"asset" + lVar8);
        if (uVar9 != uVar7) break;
        if (uVar9 == 0) goto LAB_147a7e31c;
LAB_147a7e29e:
        lVar8 = lVar8 + 2;
      }
      if ((uVar7 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
        uVar11 = (ulonglong)uVar7;
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_147a7e29e;
      }
      if (uVar9 != uVar7) {
        lVar8 = 0;
        pwVar4 = L"softclass";
        goto LAB_147a7e2db;
      }
LAB_147a7e31c:
      FUN_14020fad6(&local_68,pwVar4);
    }
LAB_147a7e333:
    puVar5 = local_68;
    if ((int)uStack_60 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_78,puVar5,1);
    *param_2 = local_78;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    FUN_14021219d(param_1,&local_78);
    plVar6 = (longlong *)&DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      plVar6 = local_78;
    }
    FUN_1446f470e(&local_80,plVar6,1);
    param_2[1] = local_80;
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_1 + 0x160))(param_1,param_2);
    (**(code **)(*param_1 + 0x160))(param_1,param_2 + 1);
  }
  if (((*(byte *)((longlong)param_1 + 0x2b) & 6) != 2) ||
     ((*(byte *)((longlong)param_1 + 0x29) & 1) != 0)) {
    local_68 = (undefined2 *)FUN_144a34e94(param_2 + 2,1);
    (**(code **)(*param_1 + 0x150))(param_1);
    if (((*(byte *)(param_1 + 5) & 1) != 0) || ((*(byte *)((longlong)param_1 + 0x2b) & 4) != 0)) {
      FUN_14485c47a(param_2 + 2,local_68);
    }
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_68 = (undefined2 *)CONCAT44(local_68._4_4_,(uint)*(byte *)(param_2 + 3));
    (**(code **)(*param_1 + 0x170))(param_1,&local_68,4);
    if (1 < (uint)local_68) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 3) = (uint)local_68 != 0;
  }
  else {
    *(bool *)(param_2 + 3) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_68 = (undefined2 *)CONCAT44(local_68._4_4_,(uint)*(byte *)((longlong)param_2 + 0x19));
    (**(code **)(*param_1 + 0x170))(param_1,&local_68,4);
    if (1 < (uint)local_68) {
      FUN_14572541c(param_1);
    }
    *(bool *)((longlong)param_2 + 0x19) = (uint)local_68 != 0;
  }
  else {
    *(bool *)((longlong)param_2 + 0x19) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  iVar3 = FUN_1448332aa(param_1,&DAT_149e31250);
  if (0x1f < iVar3) {
    piVar1 = *(int **)param_1[1];
    if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
      local_68 = (undefined2 *)CONCAT44(local_68._4_4_,(uint)*(byte *)((longlong)param_2 + 0x1a));
      (**(code **)(*param_1 + 0x170))(param_1,&local_68,4);
      if (1 < (uint)local_68) {
        FUN_14572541c(param_1);
      }
      *(bool *)((longlong)param_2 + 0x1a) = (uint)local_68 != 0;
    }
    else {
      *(bool *)((longlong)param_2 + 0x1a) = *piVar1 != 0;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_1,&DAT_149e3cc08);
    if (iVar3 < 0x1d) {
      cVar2 = FUN_1402ca022(*param_2,L"double");
      if (cVar2 == '\0') {
        cVar2 = FUN_1402ca022(*param_2,L"float");
        if (cVar2 == '\0') goto LAB_147a7e510;
      }
      FUN_1446f470e(&local_68,L"real",1);
      *param_2 = local_68;
      FUN_1446f470e(&local_68,L"double",1);
      param_2[1] = local_68;
    }
  }
LAB_147a7e510:
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_147a7e2db:
  uVar9 = *(ushort *)((longlong)puVar5 + lVar8);
  uVar10 = (ulonglong)uVar9;
  uVar7 = *(ushort *)((longlong)L"assetclass" + lVar8);
  if (uVar9 != uVar7) {
    if ((uVar7 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar11 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar11]) goto LAB_147a7e2f0;
    }
    if (uVar9 != uVar7) goto LAB_147a7e333;
    goto LAB_147a7e31c;
  }
  if (uVar9 == 0) goto LAB_147a7e31c;
LAB_147a7e2f0:
  lVar8 = lVar8 + 2;
  goto LAB_147a7e2db;
}



// FUNCTION 147a7e53c FUN_147a7e53c body=206 status=ok
// SIG undefined FUN_147a7e53c(void)

void FUN_147a7e53c(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (((DAT_14cad7a90 != 0) && (*(longlong *)(param_2 + 0x68) != 0)) &&
     (*(longlong *)(*(longlong *)(param_2 + 0x68) + 0x10) != 0)) {
    iVar1 = *(int *)(param_1 + 0x68) + -1;
    if (*(int *)(param_1 + 0x68) == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(&local_38,*(undefined8 *)(param_1 + 0x60),iVar1);
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  iVar1 = (int)uStack_30 + -1;
  if ((int)uStack_30 == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    FUN_1402980a2(param_1 + 0x60,local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7e62c FUN_147a7e62c body=1857 status=ok
// SIG undefined FUN_147a7e62c(void)

bool FUN_147a7e62c(undefined8 *param_1,longlong *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  ulonglong *puVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  ulonglong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = param_2[8];
  if ((int)lVar7 < 0x144) goto LAB_147a7ecb2;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbd8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e02218);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar10 < 0x1f) {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    FUN_14021219d(param_2,&local_78);
    puVar15 = &DAT_149dfb77a;
    if ((int)uStack_70 != 0) {
      puVar15 = local_78;
    }
    FUN_1446f470e(&local_88,puVar15,1);
    *param_1 = local_88;
    local_88 = (ulonglong *)0x0;
    uStack_80 = 0;
    FUN_14021219d(param_2,&local_88);
    puVar16 = (ulonglong *)&DAT_149dfb77a;
    if ((int)uStack_80 != 0) {
      puVar16 = local_88;
    }
    FUN_1446f470e(&local_90,puVar16,1);
    param_1[1] = local_90;
    if (local_88 != (ulonglong *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    (**(code **)(*param_2 + 0x160))(param_2,param_1);
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 1);
  }
  if ((int)param_2[8] < 0x202) {
    cVar8 = FUN_1402ca022(*param_1,L"asset");
    if (cVar8 == '\0') {
      cVar8 = FUN_1402ca022(*param_1,L"assetclass");
      if (cVar8 == '\0') goto LAB_147a7e727;
      pwVar14 = L"softclass";
    }
    else {
      pwVar14 = L"softobject";
    }
    FUN_1446f470e(&local_78,pwVar14,1);
    *param_1 = local_78;
  }
LAB_147a7e727:
  if (((*(byte *)((longlong)param_2 + 0x2b) & 6) != 2) ||
     ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    local_78 = (undefined2 *)FUN_144a34e94(param_1 + 2,1);
    (**(code **)(*param_2 + 0x150))(param_2);
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((*(byte *)((longlong)param_2 + 0x2b) & 4) != 0)) {
      FUN_14485c47a(param_1 + 2,local_78);
    }
  }
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3cbd8);
  if (iVar10 < 0x1a) {
    (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e38ef4);
    iVar10 = FUN_1448332aa(param_2,&DAT_149e38ef4);
    if (iVar10 < 6) {
      bVar18 = false;
      bVar17 = false;
    }
    else {
      puVar16 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar16 + 1;
      if ((uint *)puVar16[1] < puVar2) {
        local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffff00000000);
        (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
        uVar11 = (uint)local_78;
        if (1 < (uint)local_78) {
          FUN_14572541c(param_2);
          uVar11 = (uint)local_78;
        }
      }
      else {
        uVar11 = *(uint *)*puVar16;
        *puVar16 = (ulonglong)puVar2;
      }
      bVar17 = uVar11 != 0;
      if (bVar17) {
        FUN_147a7e105(param_2,param_1 + 7);
      }
      puVar16 = (ulonglong *)param_2[1];
      piVar3 = (int *)*puVar16 + 1;
      if ((int *)puVar16[1] < piVar3) {
        local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffff00000000);
        (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
        if (1 < (uint)local_78) {
          FUN_14572541c(param_2);
        }
        bVar18 = (uint)local_78 != 0;
      }
      else {
        bVar18 = *(int *)*puVar16 != 0;
        *puVar16 = (ulonglong)piVar3;
      }
    }
    puVar16 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar16 + 1;
    if ((uint *)puVar16[1] < puVar2) {
      local_78 = (undefined2 *)((ulonglong)local_78 & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
      uVar11 = (uint)local_78;
      if (1 < (uint)local_78) {
        FUN_14572541c(param_2);
        uVar11 = (uint)local_78;
      }
    }
    else {
      uVar11 = *(uint *)*puVar16;
      *puVar16 = (ulonglong)puVar2;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      cVar8 = '\x02';
      if (!bVar18) {
        cVar8 = bVar17 * '\x03';
      }
      cVar9 = '\x01';
      if (uVar11 == 0) {
        cVar9 = cVar8;
      }
      *(char *)((longlong)param_1 + 0x54) = cVar9;
    }
  }
  else {
    pcVar1 = (char *)((longlong)param_1 + 0x54);
    pcVar5 = *(char **)param_2[1];
    if ((char *)((undefined8 *)param_2[1])[1] < pcVar5 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,pcVar1,1);
    }
    else {
      *pcVar1 = *pcVar5;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    }
    if (*pcVar1 == '\x03') {
      FUN_147a7e105(param_2,param_1 + 7);
    }
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x55);
  puVar16 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar16 + 1;
  if ((uint *)puVar16[1] < puVar2) {
    local_78 = (undefined2 *)(CONCAT44(local_78._4_4_,(uint)(bVar4 >> 1)) & 0xffffffff00000001);
    (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
    uVar11 = (uint)local_78;
    if (1 < (uint)local_78) {
      FUN_14572541c(param_2);
      uVar11 = (uint)local_78;
    }
  }
  else {
    uVar11 = *(uint *)*puVar16;
    *puVar16 = (ulonglong)puVar2;
  }
  puVar16 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar16 + 1;
  if ((uint *)puVar16[1] < puVar2) {
    local_78 = (undefined2 *)(CONCAT44(local_78._4_4_,(uint)(bVar4 >> 3)) & 0xffffffff00000001);
    (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
    uVar19 = (uint)local_78;
    if (1 < (uint)local_78) {
      FUN_14572541c(param_2);
      uVar19 = (uint)local_78;
    }
  }
  else {
    uVar19 = *(uint *)*puVar16;
    *puVar16 = (ulonglong)puVar2;
  }
  if ((int)param_2[8] < 0x163) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
      cVar8 = FUN_1402ca022(*param_1,L"delegate");
      if (cVar8 == '\0') {
        cVar8 = FUN_1402ca022(*param_1,L"mcdelegate");
        if (cVar8 == '\0') goto LAB_147a7ea83;
      }
      lVar12 = FUN_14479d2ce(param_1 + 2);
      if (lVar12 != 0) {
        lVar13 = FUN_140010bca();
        if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
          param_1[4] = *(undefined8 *)(lVar12 + 0x18);
          lVar12 = FUN_14570ab3e(lVar12);
          if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_14689c22e(lVar12);
          }
          param_1[3] = lVar12;
          local_78 = (undefined2 *)0x0;
          FUN_14485c47a(&local_78,0);
          param_1[2] = local_78;
        }
      }
    }
  }
  else {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 3);
    (**(code **)(*param_2 + 0x160))(param_2,param_1 + 4);
    FUN_1402ac1b3(param_2,param_1 + 5);
  }
LAB_147a7ea83:
  bVar4 = *(byte *)((longlong)param_1 + 0x55) >> 2;
  bVar17 = (bool)(bVar4 & 1);
  if (0x1c7 < (int)param_2[8]) {
    puVar16 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar16 + 1;
    if ((int *)puVar16[1] < piVar3) {
      local_78 = (undefined2 *)(CONCAT44(local_78._4_4_,(uint)bVar4) & 0xffffffff00000001);
      (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
      if (1 < (uint)local_78) {
        FUN_14572541c(param_2);
      }
      bVar17 = (uint)local_78 != 0;
    }
    else {
      bVar17 = *(int *)*puVar16 != 0;
      *puVar16 = (ulonglong)piVar3;
    }
  }
  bVar4 = *(byte *)((longlong)param_1 + 0x55) >> 4;
  bVar18 = (bool)(bVar4 & 1);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x1f < iVar10) {
    puVar16 = (ulonglong *)param_2[1];
    piVar3 = (int *)*puVar16 + 1;
    if ((int *)puVar16[1] < piVar3) {
      local_78 = (undefined2 *)(CONCAT44(local_78._4_4_,(uint)bVar4) & 0xffffffff00000001);
      (**(code **)(*param_2 + 0x170))(param_2,&local_78,4);
      if (1 < (uint)local_78) {
        FUN_14572541c(param_2);
      }
      bVar18 = (uint)local_78 != 0;
    }
    else {
      bVar18 = *(int *)*puVar16 != 0;
      *puVar16 = (ulonglong)piVar3;
    }
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x55) =
         bVar18 << 4 | bVar17 << 2 | (uVar19 != 0) << 3 | (uVar11 != 0) * '\x02' |
         *(byte *)((longlong)param_1 + 0x55) & 0xe1;
  }
  iVar10 = FUN_1448332aa(param_2,&DAT_149e02218);
  if (0 < iVar10) {
    param_1 = param_1 + 0xb;
    puVar6 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar6 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      }
      else {
        thunk_FUN_14572512c(param_2,param_1);
      }
    }
    else {
      *(undefined4 *)param_1 = *puVar6;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
LAB_147a7ecb2:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 0x143 < (int)lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7ed6e FUN_147a7ed6e body=207 status=ok
// SIG undefined FUN_147a7ed6e(void)

void FUN_147a7ed6e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  lVar3 = param_1[0x1a];
  iVar1 = *(int *)(param_1 + 0x1b);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    lVar4 = 0;
    do {
      if (*(undefined8 **)(lVar3 + lVar4) == param_2) {
        return;
      }
      lVar4 = lVar4 + 8;
    } while (lVar5 * 8 - lVar4 != 0);
  }
  uVar2 = *param_1;
  *(uint *)(param_1 + 0x1b) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xdc) < iVar1 + 1U) {
    FUN_147a8cd2e(param_1 + 0x1a,iVar1);
    lVar3 = param_1[0x1a];
  }
  *(undefined8 **)(lVar3 + lVar5 * 8) = param_2;
  iVar1 = *(int *)(param_2 + 0x1b);
  *(uint *)(param_2 + 0x1b) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xdc) < iVar1 + 1U) {
    FUN_147a8cd2e(param_2 + 0x1a,iVar1);
  }
  *(undefined8 **)(param_2[0x1a] + (longlong)iVar1 * 8) = param_1;
  FUN_147a7ee3e(uVar2);
  FUN_147a7ee3e(*param_2);
  return;
}



// FUNCTION 147a7ee3e FUN_147a7ee3e body=132 status=ok
// SIG undefined FUN_147a7ee3e(void)

void FUN_147a7ee3e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x5b) & 4) == 0)) &&
     (*(char *)(param_1 + 0x59) == '\x01')) {
    *(undefined1 *)(param_1 + 0x59) = 0;
    FUN_144a7e010(param_1 + 0x60);
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      plVar4 = *(longlong **)(param_1 + 0x28);
      plVar1 = plVar4 + *(int *)(param_1 + 0x30);
      do {
        lVar3 = (longlong)*(int *)(*plVar4 + 0xd8);
        if (lVar3 != 0) {
          lVar2 = *(longlong *)(*plVar4 + 0xd0);
          lVar5 = 0;
          do {
            FUN_147a7ee3e(**(undefined8 **)(lVar2 + lVar5));
            lVar5 = lVar5 + 8;
          } while (lVar3 * 8 != lVar5);
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar1);
    }
  }
  return;
}



// FUNCTION 147a7eec2 FUN_147a7eec2 body=219 status=ok
// SIG undefined FUN_147a7eec2(void)

void FUN_147a7eec2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  longlong **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != (longlong *)0x0) && ((longlong)(int)param_1[0x1b] != 0)) {
    lVar1 = 0;
    do {
      if (*(longlong **)(param_1[0x1a] + lVar1) == param_2) {
        if ((longlong)(int)param_2[0x1b] == 0) goto LAB_147a7ef44;
        lVar1 = 0;
        goto LAB_147a7ef70;
      }
      lVar1 = lVar1 + 8;
    } while ((longlong)(int)param_1[0x1b] * 8 != lVar1);
  }
  goto LAB_147a7ef10;
  while (lVar1 = lVar1 + 8, (longlong)(int)param_2[0x1b] * 8 != lVar1) {
LAB_147a7ef70:
    if (*(longlong **)(param_2[0x1a] + lVar1) == param_1) {
      local_18 = &local_28;
      local_28 = param_1;
      FUN_147a8cdb4(param_2 + 0x1a,&local_18);
      break;
    }
  }
LAB_147a7ef44:
  local_18 = &local_20;
  FUN_147a8cdb4(param_1 + 0x1a);
LAB_147a7ef10:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7ef9e FUN_147a7ef9e body=187 status=ok
// SIG undefined FUN_147a7ef9e(void)

void FUN_147a7ef9e(longlong param_1)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0xd8);
  lVar2 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 0xd0);
  if (lVar2 != 0) {
    FUN_147a8ce7e(&local_38,local_30);
    memcpy(local_38,pvVar1,lVar2 << 3);
    pvVar1 = local_38;
    lVar2 = (longlong)local_30;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        FUN_147a7eec2(param_1,*(undefined8 *)((longlong)pvVar1 + lVar3));
        lVar3 = lVar3 + 8;
      } while (lVar2 * 8 != lVar3);
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147a7f05a FUN_147a7f05a body=501 status=ok
// SIG undefined FUN_147a7f05a(void)

undefined8 * FUN_147a7f05a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x38) != DAT_14cadbe38) {
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      FUN_1468bee18(param_2,*(longlong *)(param_1 + 0xb8),0);
LAB_147a7f0d0:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
    }
    cVar2 = FUN_144a7c5f6(param_1 + 0xc0);
    if (cVar2 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_1467d1a5a(param_2,param_1 + 0xc0,0,0);
      goto LAB_147a7f0d0;
    }
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0xa0);
    _Src = *(void **)(param_1 + 0x98);
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      goto LAB_147a7f0d0;
    }
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    goto LAB_147a7f1ba;
  }
  lVar4 = *(longlong *)(param_1 + 0xb8);
  if ((lVar4 == 0) && (lVar4 = FUN_14479d2ce(param_1 + 0x48), lVar4 == 0)) {
LAB_147a7f0fd:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_147a7f0fd;
  }
  puVar5 = &DAT_149dfb77a;
  if (*(int *)(param_1 + 0xa0) != 0) {
    puVar5 = *(undefined2 **)(param_1 + 0x98);
  }
  FUN_1446f470e(&local_70,puVar5,1);
  local_68 = local_70;
  local_60 = FUN_14477b664(lVar4);
  local_58 = 0;
  FUN_14686b592(&local_68,&local_40);
  puVar5 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar5 = local_40;
  }
  FUN_1400021e4(&local_68,&local_50);
  puVar6 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar6 = local_50;
  }
  FUN_140002266(param_2,L"(\"%s\",\"%s\")",puVar6,puVar5);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_147a7f1ba:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7f278 FUN_147a7f278 body=210 status=ok
// SIG undefined FUN_147a7f278(void)

undefined4 FUN_147a7f278(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x2b8))(param_1,local_40,param_2,param_3);
  uVar1 = 0;
  switch(local_30) {
  case 0:
    goto switchD_147a7f2ca_caseD_0;
  case 2:
    uVar2 = param_2;
    goto LAB_147a7f337;
  case 4:
    FUN_147a7ef9e(param_2);
  case 3:
    uVar2 = param_3;
LAB_147a7f337:
    FUN_147a7ef9e(uVar2);
switchD_147a7f2ca_caseD_0:
    FUN_147a7ed6e(param_2,param_3);
    uVar1 = 1;
    break;
  case 5:
    uVar1 = (**(code **)(*param_1 + 0x2e8))(param_1,param_2,param_3);
    break;
  case 6:
    uVar1 = (**(code **)(*param_1 + 0x2f0))(param_1,param_2,param_3);
  }
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7f350 FUN_147a7f350 body=37 status=ok
// SIG undefined FUN_147a7f350(void)

undefined8 FUN_147a7f350(undefined8 param_1,undefined8 param_2)

{
  FUN_14786771a(param_2,1,L"Not implemented by this schema");
  return param_2;
}



// FUNCTION 147a7f392 FUN_147a7f392 body=48 status=ok
// SIG undefined FUN_147a7f392(void)

void FUN_147a7f392(undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(param_3);
  }
  *(longlong *)(param_2 + 0xb8) = param_3;
  return;
}



// FUNCTION 147a7f3c2 FUN_147a7f3c2 body=77 status=ok
// SIG undefined FUN_147a7f3c2(void)

void FUN_147a7f3c2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_3;
  plVar2 = *(longlong **)(param_2 + 0xc0);
  if (plVar2 != plVar1) {
    *(longlong **)(param_2 + 0xc0) = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_2 + 200) = (int)param_3[1];
  return;
}



// FUNCTION 147a7f410 FUN_147a7f410 body=395 status=ok
// SIG undefined FUN_147a7f410(void)

ulonglong FUN_147a7f410(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_40;
  int local_38;
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = (undefined7)((ulonglong)param_2 >> 8);
  if ((int)param_3[1] < 2) {
    if (*(longlong *)(param_2 + 0xb8) == 0) {
      cVar3 = FUN_144a7c5f6(param_2 + 0xc0);
      if (cVar3 != '\0') {
        uVar8 = CONCAT71(uVar9,*(int *)(param_2 + 0xa0) < 2);
        goto LAB_147a7f440;
      }
    }
    uVar8 = 0;
    goto LAB_147a7f440;
  }
  FUN_144a5dc74(local_30);
  cVar3 = FUN_144a7c5f6(param_2 + 0xc0);
  if (cVar3 == '\0') {
    if ((int)param_3[1] == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_3;
    }
    local_48 = 0;
    lVar6 = FUN_140c97480(puVar7,local_30,0,0);
    if (lVar6 == 0) goto LAB_147a7f500;
    uVar4 = thunk_FUN_141160768(local_30,param_2 + 0xc0,0);
    uVar8 = (ulonglong)uVar4;
  }
  else {
LAB_147a7f500:
    FUN_147a7f05a(param_2,&local_40);
    if (local_38 == (int)param_3[1]) {
      uVar8 = CONCAT71(uVar9,1);
      if (1 < local_38) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_40 + lVar6);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(*param_3 + lVar6);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_147a7f548;
            }
            iVar5 = uVar4 - uVar10;
            goto LAB_147a7f594;
          }
          if (uVar1 == 0) break;
LAB_147a7f548:
          lVar6 = lVar6 + 2;
        }
        iVar5 = 0;
LAB_147a7f594:
        uVar8 = CONCAT71(uVar9,iVar5 == 0);
      }
    }
    else {
      uVar8 = CONCAT71(uVar9,(int)param_3[1] + local_38 == 1);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
LAB_147a7f440:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7f5be FUN_147a7f5be body=574 status=ok
// SIG undefined FUN_147a7f5be(void)

longlong * FUN_147a7f5be(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  void *_Src;
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  undefined2 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(local_50);
  FUN_14023423e(param_2,local_50);
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((longlong)param_2 + 0x11) = *(byte *)((longlong)param_2 + 0x11) & 0xfe;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  local_60 = (void *)0x0;
  local_58 = *(int *)(param_3 + 0xd8);
  lVar5 = (longlong)local_58;
  _Src = *(void **)(param_3 + 0xd0);
  if (lVar5 == 0) {
    local_54 = 0;
  }
  else {
    FUN_147a8ce7e(&local_60,local_58);
    memcpy(local_60,_Src,lVar5 << 3);
  }
  FUN_147a7ef9e(param_3);
  if (0 < local_58) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)((longlong)local_60 + lVar5 * 8);
      (**(code **)(*param_1 + 0x2b8))(param_1,&local_78,param_4,uVar1);
      if ((char)local_68 == '\x05') {
        (**(code **)(*param_1 + 0x2e8))(param_1,param_4,uVar1);
      }
      else if (((char)local_68 == '\0') || ((char)local_68 == '\x06')) {
        FUN_147a7ed6e(param_4,uVar1);
      }
      else {
        plVar2 = (longlong *)*param_2;
        if (plVar2 != local_78) {
          *param_2 = (longlong)local_78;
          if (local_78 != (longlong *)0x0) {
            (**(code **)(*local_78 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(param_2 + 1) = local_70;
        *(undefined2 *)(param_2 + 2) = local_68;
      }
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < local_58);
  }
  iVar4 = *(int *)(param_3 + 0xa0) + -1;
  if (*(int *)(param_3 + 0xa0) == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(param_4 + 0x98,*(undefined8 *)(param_3 + 0x98),iVar4);
  lVar5 = *(longlong *)(param_3 + 0xb8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_3 + 0xb8);
    }
  }
  *(longlong *)(param_4 + 0xb8) = lVar5;
  plVar2 = *(longlong **)(param_3 + 0xc0);
  plVar3 = *(longlong **)(param_4 + 0xc0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_4 + 0xc0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_4 + 200) = *(undefined4 *)(param_3 + 200);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a7f7fe FUN_147a7f7fe body=447 status=ok
// SIG undefined FUN_147a7f7fe(void)

longlong * FUN_147a7f7fe(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined2 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a5dc74(local_50);
  FUN_14023423e(param_2,local_50);
  *(undefined1 *)(param_2 + 2) = 0;
  *(byte *)((longlong)param_2 + 0x11) = *(byte *)((longlong)param_2 + 0x11) & 0xfe;
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (0 < *(int *)(param_3 + 0xd8)) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_3 + 0xd0) + lVar5 * 8);
      (**(code **)(*param_1 + 0x2b8))(param_1,&local_68,param_4,uVar1);
      if (((char)local_58 == '\x06') || ((char)local_58 == '\0')) {
        FUN_147a7ed6e(param_4,uVar1);
      }
      else {
        plVar2 = (longlong *)*param_2;
        if (plVar2 != local_68) {
          *param_2 = (longlong)local_68;
          if (local_68 != (longlong *)0x0) {
            (**(code **)(*local_68 + 8))();
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
        *(undefined4 *)(param_2 + 1) = local_60;
        *(undefined2 *)(param_2 + 2) = local_58;
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_3 + 0xd8));
  }
  iVar4 = *(int *)(param_3 + 0xa0) + -1;
  if (*(int *)(param_3 + 0xa0) == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(param_4 + 0x98,*(undefined8 *)(param_3 + 0x98),iVar4);
  lVar5 = *(longlong *)(param_3 + 0xb8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_14689c22e();
      lVar5 = *(longlong *)(param_3 + 0xb8);
    }
  }
  *(longlong *)(param_4 + 0xb8) = lVar5;
  plVar2 = *(longlong **)(param_3 + 0xc0);
  plVar3 = *(longlong **)(param_4 + 0xc0);
  if (plVar3 != plVar2) {
    *(longlong **)(param_4 + 0xc0) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(undefined4 *)(param_4 + 200) = *(undefined4 *)(param_3 + 200);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a7f9be FUN_147a7f9be body=32 status=ok
// SIG undefined FUN_147a7f9be(void)

void FUN_147a7f9be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1447a1f4a(param_3);
  FUN_144a787a6(param_4,uVar1);
  return;
}



// FUNCTION 147a7f9f4 FUN_147a7f9f4 body=183 status=ok
// SIG undefined FUN_147a7f9f4(void)

void FUN_147a7f9f4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30[0] = *(longlong **)(param_2 + 0x18);
  FUN_1400021e4(local_30,local_40);
  FUN_140233b1a(local_30,local_40);
  FUN_140008f88(param_3,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)*param_3;
  plVar2 = (longlong *)param_3[2];
  if (plVar2 != plVar1) {
    param_3[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_3 + 3) = (int)param_3[1];
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7fac6 FUN_147a7fac6 body=48 status=ok
// SIG undefined FUN_147a7fac6(void)

undefined8 FUN_147a7fac6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_147a7fbee(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  thunk_FUN_146857ca8(param_2,uVar2,0);
  return param_2;
}



// FUNCTION 147a7fafa FUN_147a7fafa body=121 status=ok
// SIG undefined FUN_147a7fafa(void)

void FUN_147a7fafa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a87eda(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7fb74 FUN_147a7fb74 body=121 status=ok
// SIG undefined FUN_147a7fb74(void)

void FUN_147a7fb74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a88044(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7fbee FUN_147a7fbee body=281 status=ok
// SIG undefined FUN_147a7fbee(void)

undefined8 FUN_147a7fbee(longlong *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    FUN_1415b7ec4(L"Element handle data is null!",2,0);
  }
  else {
    if (DAT_14cad7c28 == *(char *)(*param_1 + 0xb)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_147a8ced8(local_48);
    FUN_1400021e4(local_48,&local_40);
    local_58 = &DAT_149dfb77a;
    if (local_38 != 0) {
      local_58 = local_40;
    }
    puVar1 = &DAT_14c99f64c;
    if (*param_1 != 0) {
      puVar1 = (undefined4 *)(*param_1 + 8);
    }
    FUN_140002266(&local_30,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!",
                  *(undefined1 *)((longlong)puVar1 + 3),DAT_14cad7c28);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,2,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7fd2a FUN_147a7fd2a body=29 status=ok
// SIG undefined FUN_147a7fd2a(void)

undefined8 FUN_147a7fd2a(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_147a7fbee(param_2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 147a7fd50 FUN_147a7fd50 body=46 status=ok
// SIG undefined FUN_147a7fd50(void)

undefined8 FUN_147a7fd50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_144a792c0(*plVar1,0x30);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a7fd7e FUN_147a7fd7e body=41 status=ok
// SIG undefined FUN_147a7fd7e(void)

undefined8 FUN_147a7fd7e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_144a79cc8();
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a7fda8 FUN_147a7fda8 body=41 status=ok
// SIG undefined FUN_147a7fda8(void)

undefined8 FUN_147a7fda8(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_1447210f0();
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a7fdd2 FUN_147a7fdd2 body=96 status=ok
// SIG undefined FUN_147a7fdd2(void)

undefined8 FUN_147a7fdd2(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  plVar6 = (longlong *)FUN_147a7fbee(param_2);
  if (((plVar6 == (longlong *)0x0) || (*plVar6 == 0)) ||
     (lVar1 = *(longlong *)(*plVar6 + 0x1c8), lVar1 == 0)) {
    uVar7 = 0;
  }
  else {
    param_3[6] = *(undefined8 *)(lVar1 + 400);
    uVar7 = *(undefined8 *)(lVar1 + 0x160);
    uVar2 = *(undefined8 *)(lVar1 + 0x168);
    uVar3 = *(undefined8 *)(lVar1 + 0x170);
    uVar4 = *(undefined8 *)(lVar1 + 0x178);
    uVar5 = *(undefined8 *)(lVar1 + 0x188);
    param_3[4] = *(undefined8 *)(lVar1 + 0x180);
    param_3[5] = uVar5;
    param_3[2] = uVar3;
    param_3[3] = uVar4;
    *param_3 = uVar7;
    param_3[1] = uVar2;
    uVar7 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar7;
}



// FUNCTION 147a7fe32 FUN_147a7fe32 body=74 status=ok
// SIG undefined FUN_147a7fe32(void)

undefined8 FUN_147a7fe32(undefined8 param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined7 uVar3;
  byte bVar4;
  
  plVar2 = (longlong *)FUN_147a7fbee(param_2);
  bVar4 = (byte)param_2;
  if ((plVar2 == (longlong *)0x0) || (bVar4 = 0, *plVar2 == 0)) {
    bVar1 = 0;
    uVar3 = 0;
  }
  else {
    if ((param_3 == '\0') && (*(longlong *)(*plVar2 + 0x1c8) != 0)) {
      plVar2 = (longlong *)FUN_1433b813c();
      if ((char)plVar2 == '\0') {
        uVar3 = (undefined7)((ulonglong)plVar2 >> 8);
        bVar1 = 1;
        bVar4 = 0;
        goto LAB_147a7fe5b;
      }
    }
    uVar3 = (undefined7)((ulonglong)plVar2 >> 8);
    bVar1 = 1;
    bVar4 = 1;
  }
LAB_147a7fe5b:
  return CONCAT71(uVar3,bVar1 & bVar4);
}



// FUNCTION 147a7fe80 FUN_147a7fe80 body=79 status=ok
// SIG undefined FUN_147a7fe80(void)

undefined8 FUN_147a7fe80(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(*plVar2 + 0x1c8);
    puVar5 = &DAT_14c846480;
    if (lVar1 != 0) {
      puVar5 = (undefined8 *)(lVar1 + 0x240);
    }
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *param_3 = *puVar5;
      puVar5 = puVar5 + 1;
      param_3 = param_3 + 1;
    }
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 147a7fed0 FUN_147a7fed0 body=64 status=ok
// SIG undefined FUN_147a7fed0(void)

undefined8 FUN_147a7fed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  plVar2 = (longlong *)FUN_147a7fbee(param_2);
  bVar5 = (byte)param_2;
  if ((plVar2 == (longlong *)0x0) || (bVar5 = 0, *plVar2 == 0)) {
    bVar1 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = FUN_1413d4c10(*plVar2,param_3,0,0,0);
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar1 = 1;
  }
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 147a7ff10 FUN_147a7ff10 body=134 status=ok
// SIG undefined FUN_147a7ff10(void)

undefined8 FUN_147a7ff10(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(*plVar1 + 0x1c8);
    if (lVar3 == 0) {
      puVar4 = &DAT_14c846480;
    }
    else {
      puVar4 = local_78;
      FUN_14480333a(lVar3,puVar4);
    }
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a7ff98 FUN_147a7ff98 body=72 status=ok
// SIG undefined FUN_147a7ff98(void)

undefined8 FUN_147a7ff98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_147a7fbee(param_2);
  if (((plVar2 == (longlong *)0x0) || (*plVar2 == 0)) ||
     (lVar1 = *(longlong *)(*plVar2 + 0x1c8), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    FUN_144927a08(lVar1,param_3,0,0,0);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 147a7ffe0 FUN_147a7ffe0 body=653 status=ok
// SIG undefined FUN_147a7ffe0(void)

undefined8
FUN_147a7ffe0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  double *pdVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar12 = (longlong *)FUN_147a7fbee(param_2);
  if ((plVar12 == (longlong *)0x0) || (lVar17 = *plVar12, lVar17 == 0)) {
LAB_147a801fb:
    uVar15 = 0;
    goto LAB_147a801fd;
  }
  lVar13 = FUN_1447210f0(lVar17);
  plVar12 = *(longlong **)(lVar17 + 0x1c8);
  if (plVar12 == (longlong *)0x0) {
LAB_147a80086:
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *param_4 = *param_3;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    }
  }
  else {
    lVar14 = FUN_144a3a302();
    if (((*(int *)(plVar12[2] + 0x38) < *(int *)(lVar14 + 0x38)) || (lVar13 == 0)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) goto LAB_147a80086;
    uVar11 = (**(code **)(*plVar12 + 0x570))(plVar12);
    if ((5 < uVar11) || ((0x2aU >> (uVar11 & 0x1f) & 1) == 0)) goto LAB_147a80086;
    lVar14 = *(longlong *)(lVar17 + 0x1c8);
    if (lVar14 == 0) {
      pdVar16 = (double *)&DAT_14c8464e0;
      dVar9 = DAT_14c8464f0;
    }
    else {
      pdVar16 = (double *)(lVar14 + 0x260);
      dVar9 = *(double *)(lVar14 + 0x270);
    }
    dVar1 = (double)plVar12[0x2e];
    dVar2 = (double)plVar12[0x2c];
    dVar3 = (double)plVar12[0x2d];
    dVar4 = pdVar16[1];
    dVar5 = *pdVar16;
    dVar6 = (double)param_3[4];
    dVar7 = (double)param_3[5];
    dVar8 = (double)param_3[6];
    local_b8 = *param_3;
    uStack_b0 = param_3[1];
    local_a8 = param_3[2];
    uStack_a0 = param_3[3];
    FUN_1448052ee(&local_b8,&local_f0);
    local_108 = local_f0;
    uStack_100 = uStack_e8;
    local_f8 = local_e0;
    local_d8 = dVar6 + (dVar2 - dVar5);
    dStack_d0 = dVar7 + (dVar3 - dVar4);
    local_c8 = dVar8 + (dVar1 - dVar9);
    cVar10 = FUN_140d7405c(lVar13,lVar17);
    if (cVar10 == '\0') goto LAB_147a801fb;
    local_d8 = local_d8 - (dVar2 - dVar5);
    dStack_d0 = dStack_d0 - (dVar3 - dVar4);
    local_c8 = local_c8 - (dVar1 - dVar9);
    puVar18 = param_4;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar18 = *param_3;
      param_3 = param_3 + 1;
      puVar18 = puVar18 + 1;
    }
    param_4[4] = local_d8;
    param_4[5] = dStack_d0;
    param_4[6] = local_c8;
    param_4[7] = 0;
    FUN_144a7484c(&local_f0,&local_b8);
    *param_4 = local_b8;
    param_4[1] = uStack_b0;
    param_4[2] = local_a8;
    param_4[3] = uStack_a0;
  }
  uVar15 = 1;
LAB_147a801fd:
  if ((local_90 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8026e FUN_147a8026e body=582 status=ok
// SIG undefined FUN_147a8026e(void)

undefined4
FUN_147a8026e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188 [3];
  undefined8 local_170;
  undefined8 local_160;
  undefined8 uStack_158;
  double local_150;
  undefined1 local_130 [100];
  undefined4 local_cc;
  undefined4 local_a0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar4 = FUN_145c635e4();
  if ((lVar4 != 0) && ((longlong)*(int *)(param_5 + 1) != 0)) {
    plVar9 = (longlong *)*param_5;
    lVar8 = (longlong)*(int *)(param_5 + 1) << 3;
    do {
      local_170 = FUN_1458d4b68();
      if ((local_170 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(local_170);
      }
      puVar7 = (undefined4 *)(*plVar9 + 8);
      if (*plVar9 == 0) {
        puVar7 = &DAT_14c99f64c;
      }
      lVar5 = FUN_147051a0c(lVar4,*(undefined1 *)((longlong)puVar7 + 3),&local_170);
      if (lVar5 != 0) {
        FUN_1458d4b68();
        plVar6 = (longlong *)FUN_144718840(lVar5);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x120))(plVar6,plVar9,param_6,1);
        }
      }
      plVar9 = plVar9 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
  }
  memset(&local_170,0,0x100);
  local_a0 = 0xffffffff;
  local_cc = 0xffffffff;
  local_170 = CONCAT44(0x3f800000,(undefined4)local_170);
  local_1b8 = &DAT_14cad0f10;
  local_1c0 = param_6;
  local_1d8 = &DAT_14c8463d0;
  local_1d0 = 0;
  local_1c8 = param_4;
  uVar3 = FUN_14021655c(param_1,&local_170,param_2,param_3);
  if ((char)uVar3 != '\0') {
    FUN_144a79a9c(local_130,local_188);
    local_188[0] = local_188[0] + -90.0;
    param_7[4] = local_160;
    param_7[5] = uStack_158;
    param_7[6] = local_150 + 9.999999747378752e-05;
    param_7[7] = 0;
    FUN_144a7484c(local_188,&local_1a8);
    *param_7 = local_1a8;
    param_7[1] = uStack_1a0;
    param_7[2] = local_198;
    param_7[3] = uStack_190;
    uVar2 = DAT_14c846520;
    uVar1 = DAT_14c846518;
    param_7[8] = DAT_14c846510;
    param_7[9] = uVar1;
    param_7[10] = uVar2;
    param_7[0xb] = 0;
  }
  if ((local_70 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147a804b6 FUN_147a804b6 body=1510 status=ok
// SIG undefined FUN_147a804b6(void)

longlong *
FUN_147a804b6(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             undefined8 *param_5)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  char cVar15;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  char local_d9;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong *local_c0;
  longlong *local_b8;
  int local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  uVar7 = (**(code **)(*param_1 + 0x1d0))();
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_98 = FUN_1458d3d9a();
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_98);
  }
  FUN_147a8f5ba(uVar7,param_3,&local_98,&local_88);
  bVar3 = true;
  cVar15 = '\x01';
  if (plStack_80 != (longlong *)0x0 && local_88 != 0) {
    local_98 = 0;
    uStack_90 = 0;
    (**(code **)(*plStack_80 + 0x28))(plStack_80,&local_88,&local_98,1);
    cVar15 = (longlong)(int)uStack_90 == 0;
    if (!(bool)cVar15) {
      lVar13 = local_98 + (longlong)(int)uStack_90 * 8;
      lVar14 = local_98;
      local_d9 = cVar15;
      local_d8 = param_2;
      local_d0 = param_4;
      do {
        uVar7 = (**(code **)(*param_1 + 0x1d0))(param_1);
        local_a8 = 0;
        plStack_a0 = (longlong *)0x0;
        local_b8 = (longlong *)FUN_1458d4b68();
        if ((local_b8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(local_b8);
        }
        FUN_147a8f3c2(uVar7,lVar14,&local_b8,&local_a8);
        if (plStack_a0 == (longlong *)0x0 || local_a8 == 0) {
LAB_147a80792:
          bVar4 = false;
        }
        else {
          local_e8 = param_5;
          (**(code **)(*plStack_a0 + 0x1c8))(plStack_a0,&local_b8,&local_a8,param_4);
          lVar8 = (longlong)local_b0;
          if (lVar8 < 2) {
LAB_147a80762:
            if (local_b0 != 0) {
              lVar8 = (longlong)local_b0;
              goto LAB_147a807c3;
            }
            bVar4 = false;
            bVar3 = true;
          }
          else {
            iVar10 = (int)uStack_70 + local_b0;
            if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar10);
            }
            if ((int)uStack_70._4_4_ < iVar10) {
              FUN_14705784a(&local_78);
              goto LAB_147a80762;
            }
LAB_147a807c3:
            plVar12 = local_b8 + lVar8;
            plVar9 = local_b8;
            do {
              uVar11 = uStack_70;
              lVar8 = *param_3;
              if (*plVar9 == lVar8) {
                local_68 = 0;
                if (*plVar9 != 0) {
                  LOCK();
                  *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
                  UNLOCK();
                  local_68 = lVar8;
                }
                local_c8 = &local_68;
                local_c0 = local_60;
                FUN_147a86f02(local_d8,&local_c8);
                if (local_68 != 0) {
                  LOCK();
                  *(int *)(local_68 + 0xc) = *(int *)(local_68 + 0xc) + -1;
                  UNLOCK();
                }
                bVar4 = true;
                bVar3 = false;
                param_4 = local_d0;
                goto LAB_147a8076b;
              }
              lVar8 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_1470578aa(&local_78,uVar11 & 0xffffffff);
              }
              *(undefined8 *)(local_78 + lVar8 * 8) = 0;
              lVar2 = *plVar9;
              if (lVar2 != 0) {
                *(longlong *)(local_78 + lVar8 * 8) = lVar2;
                LOCK();
                *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
                UNLOCK();
              }
              plVar9 = plVar9 + 1;
            } while (plVar9 != plVar12);
            bVar4 = false;
            bVar3 = true;
            param_4 = local_d0;
          }
LAB_147a8076b:
          FUN_147057811(local_b8,local_b0);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          if (bVar3) goto LAB_147a80792;
        }
        lVar8 = local_78;
        uVar11 = uStack_90;
        param_2 = local_d8;
        cVar15 = local_d9;
        if (local_a8 != 0) {
          LOCK();
          *(int *)(local_a8 + 0xc) = *(int *)(local_a8 + 0xc) + -1;
          UNLOCK();
        }
        iVar10 = (int)uStack_90;
        if (bVar4) {
          FUN_147057811(local_98,uStack_90 & 0xffffffff);
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          bVar3 = false;
          param_2 = local_d8;
          cVar15 = local_d9;
          goto LAB_147a805c2;
        }
        lVar14 = lVar14 + 8;
      } while (lVar14 != lVar13);
      lVar13 = (longlong)(int)uStack_90;
      if (((int)uStack_90 == (int)uStack_70) &&
         (cVar5 = FUN_147a8f7ae(local_98,local_78,uStack_90 & 0xffffffff), cVar5 != '\0')) {
        if (*param_4 == 0) {
          uStack_70 = CONCAT44(uStack_70._4_4_,iVar10 + 1U);
          if (uStack_70._4_4_ < iVar10 + 1U) {
            FUN_1470578aa(&local_78,uVar11 & 0xffffffff);
            lVar8 = local_78;
          }
          *(undefined8 *)(lVar8 + lVar13 * 8) = 0;
          lVar14 = *param_3;
          if (lVar14 != 0) {
            *(longlong *)(lVar8 + lVar13 * 8) = lVar14;
            LOCK();
            *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
            UNLOCK();
          }
        }
        else {
          FUN_14705f56e(*param_4,&local_a8,param_3,(char)param_4[1]);
          uVar11 = uStack_70;
          lVar13 = (longlong)(int)uStack_70;
          uVar6 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          if (uStack_70._4_4_ < uVar6) {
            FUN_1470578aa(&local_78,uVar11 & 0xffffffff);
          }
          *(longlong *)(local_78 + lVar13 * 8) = local_a8;
        }
      }
    }
    FUN_147057811(local_98,uStack_90 & 0xffffffff);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    bVar3 = true;
  }
LAB_147a805c2:
  if (local_88 != 0) {
    LOCK();
    *(int *)(local_88 + 0xc) = *(int *)(local_88 + 0xc) + -1;
    UNLOCK();
  }
  if (bVar3) {
    if (cVar15 != '\0') {
      pcVar1 = (code *)*param_5;
      plVar9 = param_5 + 4;
      if ((longlong *)param_5[2] != (longlong *)0x0) {
        plVar9 = (longlong *)param_5[2];
      }
      uVar7 = (**(code **)(*plVar9 + 8))();
      cVar15 = (*pcVar1)(uVar7,param_3,param_4);
      uVar11 = uStack_70;
      if (cVar15 != '\0') {
        if (*param_4 == 0) {
          lVar13 = (longlong)(int)uStack_70;
          uVar6 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          if (uStack_70._4_4_ < uVar6) {
            FUN_1470578aa(&local_78,uVar11 & 0xffffffff);
          }
          *(undefined8 *)(local_78 + lVar13 * 8) = 0;
          lVar14 = *param_3;
          if (lVar14 != 0) {
            *(longlong *)(local_78 + lVar13 * 8) = lVar14;
            LOCK();
            *(int *)(lVar14 + 0xc) = *(int *)(lVar14 + 0xc) + 1;
            UNLOCK();
          }
        }
        else {
          FUN_14705f56e(*param_4,&local_88,param_3,(char)param_4[1]);
          uVar11 = uStack_70;
          lVar13 = (longlong)(int)uStack_70;
          uVar6 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
          if (uStack_70._4_4_ < uVar6) {
            FUN_1470578aa(&local_78,uVar11 & 0xffffffff);
          }
          *(longlong *)(local_78 + lVar13 * 8) = local_88;
        }
      }
    }
    *param_2 = local_78;
    local_78 = 0;
    *(int *)(param_2 + 1) = (int)uStack_70;
    *(uint *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
    uStack_70 = 0;
    uVar11 = 0;
  }
  else {
    uVar11 = uStack_70 & 0xffffffff;
  }
  FUN_147057811(local_78,uVar11);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a80a9e FUN_147a80a9e body=234 status=ok
// SIG undefined FUN_147a80a9e(void)

undefined8 FUN_147a80a9e(undefined8 param_1,longlong *param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14cad7c28 == *(char *)((longlong)param_2 + 0xb))) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x10))();
    if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
      local_38 = (longlong *)0x0;
      local_30 = 1;
      FUN_14010590e(&local_38,1,0);
      *local_38 = lVar1;
      if (param_4 != '\0') {
        local_48[0] = 0;
        local_48[1] = 0;
        FUN_140c5bf3a(lVar1,local_48,1);
        FUN_147a80b8a(&local_38,local_48);
        if (local_48[0] != 0) {
          FUN_1400020a8();
        }
      }
      FUN_1479ab182(param_3,&local_38);
      if (local_38 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = 1;
      goto LAB_147a80b33;
    }
  }
  uVar3 = 0;
LAB_147a80b33:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a80b8a FUN_147a80b8a body=94 status=ok
// SIG undefined FUN_147a80b8a(void)

void FUN_147a80b8a(longlong *param_1,undefined8 *param_2)

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
    FUN_1447f76d2(param_1,iVar2);
  }
  FUN_14782382b((longlong)iVar2 * 8 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147a80bec FUN_147a80bec body=121 status=ok
// SIG undefined FUN_147a80bec(void)

void FUN_147a80bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a87eda(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a80c66 FUN_147a80c66 body=121 status=ok
// SIG undefined FUN_147a80c66(void)

void FUN_147a80c66(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    local_30 = *(undefined8 *)(*plVar1 + 0x10);
    FUN_1401a700c(&local_24,0x69);
    FUN_147a88044(param_3,local_24,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a80ce0 FUN_147a80ce0 body=281 status=ok
// SIG undefined FUN_147a80ce0(void)

undefined8 FUN_147a80ce0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [8];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 0) {
    FUN_1415b7ec4(L"Element handle data is null!",2,0);
  }
  else {
    if (DAT_14cad7cb8 == *(char *)(*param_1 + 0xb)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
    }
    FUN_147a8cf50(local_48);
    FUN_1400021e4(local_48,&local_40);
    local_58 = &DAT_149dfb77a;
    if (local_38 != 0) {
      local_58 = local_40;
    }
    puVar1 = &DAT_14c99f64c;
    if (*param_1 != 0) {
      puVar1 = (undefined4 *)(*param_1 + 8);
    }
    FUN_140002266(&local_30,L"Element handle data type is \'%d\', but \'%d\' (%s) was requested!",
                  *(undefined1 *)((longlong)puVar1 + 3),DAT_14cad7cb8);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1415b7ec4(puVar2,2,0);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a80e10 FUN_147a80e10 body=32 status=ok
// SIG undefined FUN_147a80e10(void)

undefined8 * FUN_147a80e10(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_147a80ce0(param_3);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147a80e30 FUN_147a80e30 body=66 status=ok
// SIG undefined FUN_147a80e30(void)

void FUN_147a80e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar1, plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147a80e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x418))(plVar1,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 147a80e76 FUN_147a80e76 body=29 status=ok
// SIG undefined FUN_147a80e76(void)

undefined8 FUN_147a80e76(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_147a80ce0(param_2);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



// FUNCTION 147a80e9c FUN_147a80e9c body=41 status=ok
// SIG undefined FUN_147a80e9c(void)

undefined8 FUN_147a80e9c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_1479b5f62();
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a80ec6 FUN_147a80ec6 body=46 status=ok
// SIG undefined FUN_147a80ec6(void)

undefined8 FUN_147a80ec6(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) {
    uVar2 = FUN_144a792c0(*plVar1,0x30);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a80ef4 FUN_147a80ef4 body=53 status=ok
// SIG undefined FUN_147a80ef4(void)

undefined8 FUN_147a80ef4(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && (*(longlong *)(*plVar1 + 0xa8) != 0)) {
    uVar2 = FUN_144a79cc8();
    return uVar2;
  }
  return 0;
}



// FUNCTION 147a80f2a FUN_147a80f2a body=53 status=ok
// SIG undefined FUN_147a80f2a(void)

longlong FUN_147a80f2a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(*plVar1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
      return lVar2;
    }
  }
  return lVar2;
}



// FUNCTION 147a80f60 FUN_147a80f60 body=118 status=ok
// SIG undefined FUN_147a80f60(void)

undefined8 FUN_147a80f60(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar8 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar8 != (longlong *)0x0) && (lVar1 = *plVar8, lVar1 != 0)) {
    lVar9 = FUN_144a799b0();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      uVar2 = *(undefined8 *)(lVar1 + 400);
      param_3[6] = uVar2;
      uVar3 = *(undefined8 *)(lVar1 + 0x160);
      uVar4 = *(undefined8 *)(lVar1 + 0x168);
      uVar5 = *(undefined8 *)(lVar1 + 0x170);
      uVar6 = *(undefined8 *)(lVar1 + 0x178);
      uVar7 = *(undefined8 *)(lVar1 + 0x188);
      param_3[4] = *(undefined8 *)(lVar1 + 0x180);
      param_3[5] = uVar7;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147a80fd6 FUN_147a80fd6 body=90 status=ok
// SIG undefined FUN_147a80fd6(void)

undefined8 FUN_147a80fd6(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined7 uVar4;
  
  plVar2 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      uVar4 = (undefined7)((ulonglong)(lVar3 + 0x30) >> 8);
      if (param_3 == '\x01') {
        return CONCAT71(uVar4,1);
      }
      return CONCAT71(uVar4,*(char *)(lVar1 + 0x1fb) == '\x02');
    }
  }
  return 0;
}



// FUNCTION 147a81034 FUN_147a81034 body=90 status=ok
// SIG undefined FUN_147a81034(void)

undefined8 FUN_147a81034(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar2 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      puVar5 = (undefined8 *)(lVar1 + 0x240);
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      }
      return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147a8108e FUN_147a8108e body=97 status=ok
// SIG undefined FUN_147a8108e(void)

undefined8 FUN_147a8108e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_140613f88(lVar1,param_3,0,0,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a810f0 FUN_147a810f0 body=153 status=ok
// SIG undefined FUN_147a810f0(void)

undefined8 FUN_147a810f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar1 != (longlong *)0x0) && (lVar4 = *plVar1, lVar4 != 0)) {
    lVar2 = FUN_144a799b0();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14480333a(lVar4,local_88);
      puVar5 = local_88;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *param_3 = *puVar5;
        puVar5 = puVar5 + 1;
        param_3 = param_3 + 1;
      }
      uVar3 = 1;
      goto LAB_147a81146;
    }
  }
  uVar3 = 0;
LAB_147a81146:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8118a FUN_147a8118a body=97 status=ok
// SIG undefined FUN_147a8118a(void)

undefined8 FUN_147a8118a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
    lVar3 = FUN_144a799b0();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_144927a08(lVar1,param_3,0,0,0);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 147a811ec FUN_147a811ec body=471 status=ok
// SIG undefined FUN_147a811ec(void)

ulonglong FUN_147a811ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = (longlong *)FUN_147a80ce0(param_2);
  if ((plVar4 == (longlong *)0x0) || (unaff_RDI = *plVar4, unaff_RDI == 0)) {
LAB_147a81245:
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    if (param_4 == '\0') {
      uVar7 = 0;
      goto LAB_147a8127c;
    }
  }
  else {
    lVar5 = FUN_144a799b0();
    if ((*(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30)) goto LAB_147a81245;
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    lVar5 = FUN_144a3a302();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) +
         (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      FUN_140c43e06(&local_58,0);
      *local_58 = unaff_RDI;
    }
    if (param_4 != '\0') {
      local_68 = 0;
      uStack_60 = 0;
      lVar5 = FUN_144a799b0();
      iVar1 = *(int *)(lVar5 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + 0x30) + (longlong)iVar1 * 8)
          == lVar5 + 0x30)) {
        FUN_1407329d4(unaff_RDI,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),&local_68);
        lVar5 = local_68;
        lVar9 = (longlong)(int)uStack_60;
        if (lVar9 != 0) {
          lVar8 = 0;
          do {
            lVar2 = *(longlong *)(lVar5 + lVar8);
            if (lVar2 != 0) {
              lVar6 = FUN_144a3a302();
              uVar7 = uStack_50;
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
                lVar6 = (longlong)(int)uStack_50;
                uVar3 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
                if (uStack_50._4_4_ < uVar3) {
                  FUN_140c43e06(&local_58,uVar7 & 0xffffffff);
                }
                local_58[lVar6] = lVar2;
              }
            }
            lVar8 = lVar8 + 8;
          } while (lVar9 * 8 != lVar8);
        }
        unaff_RDI = local_68;
        if (local_68 != 0) {
          FUN_1400020a8(local_68);
        }
      }
    }
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(int)uStack_50 != 0);
  if ((int)uStack_50 != 0) {
    FUN_144b20ad8(param_3,&local_58);
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147a8127c:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147a813c8 FUN_147a813c8 body=96 status=ok
// SIG undefined FUN_147a813c8(void)

void FUN_147a813c8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad80b8) {
    FUN_144b3d300(&DAT_14cad80b8);
    if (DAT_14cad80b8 == -1) {
      FUN_147a88752();
      atexit((_func_5014 *)&LAB_1434dac51);
      _Init_thread_footer(&DAT_14cad80b8);
      return;
    }
  }
  return;
}



// FUNCTION 147a81428 FUN_147a81428 body=125 status=ok
// SIG undefined FUN_147a81428(void)

longlong FUN_147a81428(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_1;
  lVar3 = 0;
  if ((lVar4 != 0) && ((int)param_1[1] != -1)) {
    lVar3 = *(longlong *)(lVar4 + 0xa8);
    if (lVar3 != 0) {
      uVar1 = FUN_145a6f260();
      plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a81475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,*(code **)(*plVar2 + 0x10));
        return lVar3;
      }
      uVar1 = FUN_14599247e();
      lVar3 = FUN_144718840(lVar3,uVar1);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar4 = *param_1;
    }
    lVar3 = lVar4 + 0x718;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
  }
  return lVar3;
}



// FUNCTION 147a814b2 FUN_147a814b2 body=214 status=ok
// SIG undefined FUN_147a814b2(void)

void FUN_147a814b2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147a8158a(param_1,puVar5);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8158a FUN_147a8158a body=294 status=ok
// SIG undefined FUN_147a8158a(void)

undefined4 FUN_147a8158a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = (longlong *)param_2[1];
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_28,&local_38);
  plVar3 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_28 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"ElementList is in a invalid state.",2,0);
  }
  else {
    local_38 = local_28;
    local_30 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,&local_38,0);
    plVar3 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a816b8 FUN_147a816b8 body=324 status=ok
// SIG undefined FUN_147a816b8(void)

void FUN_147a816b8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [3];
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  plStack_40 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar4 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147a817fe(param_1,plVar4,plVar3);
  *param_3 = uVar2;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a817fe FUN_147a817fe body=299 status=ok
// SIG undefined FUN_147a817fe(void)

undefined4 FUN_147a817fe(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_38 = (longlong *)param_2[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_30,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_30 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"ElementList is in a invalid state.",2,0);
  }
  else {
    local_40 = local_30;
    local_38 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,&local_40,param_3);
    plVar3 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a81930 FUN_147a81930 body=163 status=ok
// SIG undefined FUN_147a81930(void)

void FUN_147a81930(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a819d4(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a819d4 FUN_147a819d4 body=249 status=ok
// SIG undefined FUN_147a819d4(void)

undefined4 FUN_147a819d4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  else {
    local_38 = 0;
    local_30 = 0;
    FUN_14705f6da(param_2,&local_28);
    local_48 = local_28;
    local_40 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,&local_48,0);
    plVar3 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a81ad4 FUN_147a81ad4 body=265 status=ok
// SIG undefined FUN_147a81ad4(void)

void FUN_147a81ad4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar2 = local_48;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a81bde(param_1,local_30,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a81bde FUN_147a81bde body=254 status=ok
// SIG undefined FUN_147a81bde(void)

undefined4 FUN_147a81bde(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar4 = 0;
    FUN_1415b7ec4(L"SelectionSet is null.",2,0);
  }
  else {
    local_40 = 0;
    local_38 = 0;
    FUN_14705f6da(param_2,&local_30);
    local_50 = local_30;
    local_48 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
    }
    uVar4 = (**(code **)(*param_1 + 0x2a8))(param_1,&local_50,param_3);
    plVar3 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_28 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a81ce4 FUN_147a81ce4 body=479 status=ok
// SIG undefined FUN_147a81ce4(void)

void FUN_147a81ce4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4b = 0x100;
  local_49 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4b);
  }
  local_68 = &local_4b;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    local_68 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = local_38;
  local_58 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  uVar4 = FUN_147a81ec4(param_1,&local_60,local_40,local_48);
  plVar3 = plStack_30;
  *param_3 = uVar4;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a81ec4 FUN_147a81ec4 body=435 status=ok
// SIG undefined FUN_147a81ec4(void)

undefined4
FUN_147a81ec4(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *param_2;
  local_48 = (longlong *)param_2[1];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_40,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = local_38;
  if (local_40 == 0) {
    pwVar5 = L"ElementList is in a invalid state.";
  }
  else {
    if (param_3 != 0) {
      local_50 = local_40;
      local_48 = local_38;
      if (local_38 == (longlong *)0x0) {
        local_58 = param_5;
        uVar4 = FUN_147a839d0(param_1,&local_50,param_3,param_4);
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        local_58 = param_5;
        uVar4 = FUN_147a839d0(param_1,&local_50,param_3,param_4);
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
      }
      goto LAB_147a81f68;
    }
    pwVar5 = L"World is null.";
  }
  uVar4 = 0;
  FUN_1415b7ec4(pwVar5,2,0);
LAB_147a81f68:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8207e FUN_147a8207e body=331 status=ok
// SIG undefined FUN_147a8207e(void)

void FUN_147a8207e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [37];
  undefined2 local_33;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_33 = 0x100;
  local_31 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_33);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_33);
  }
  puVar2 = &local_33;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    puVar2 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147a821ca(param_1,local_28,local_30,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a821ca FUN_147a821ca body=324 status=ok
// SIG undefined FUN_147a821ca(void)

undefined4 FUN_147a821ca(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    pwVar5 = L"SelectionSet is null.";
  }
  else {
    if (param_3 != 0) {
      local_50 = 0;
      local_48 = 0;
      FUN_14705f6da(param_2,&local_40);
      plVar1 = local_38;
      local_60 = local_40;
      local_58 = local_38;
      local_68 = param_4;
      if (local_38 == (longlong *)0x0) {
        uVar4 = FUN_147a839d0(param_1,&local_60,param_3,param_2);
      }
      else {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
        uVar4 = FUN_147a839d0(param_1,&local_60,param_3,param_2);
        if (plVar1 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar1)(plVar1);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_38)(local_38);
          LOCK();
          piVar2 = (int *)((longlong)local_38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_38 + 0x10))(local_38);
          }
        }
      }
      goto LAB_147a82204;
    }
    pwVar5 = L"World is null.";
  }
  uVar4 = 0;
  FUN_1415b7ec4(pwVar5,2,0);
LAB_147a82204:
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a82310 FUN_147a82310 body=444 status=ok
// SIG undefined FUN_147a82310(void)

void FUN_147a82310(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_78;
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_88 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_88 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_38;
  local_70 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
    UNLOCK();
  }
  FUN_147a824ce(param_1,&local_68,&local_78,local_40);
  FUN_147049538(param_3,&local_68);
  FUN_14704c977(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a824ce FUN_147a824ce body=478 status=ok
// SIG undefined FUN_147a824ce(void)

undefined8 *
FUN_147a824ce(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_3;
  local_50 = (longlong *)param_3[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_48,&local_58);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48 == 0) {
    pwVar5 = L"ElementList is in a invalid state.";
  }
  else {
    if (param_4 != 0) {
      uVar4 = FUN_14479d2ce(local_48 + 0x10);
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_78 = param_5;
      (**(code **)(*param_1 + 0x2a0))(param_1,&local_58,&local_68,param_4);
      FUN_147051bc5(param_2,&local_58,uVar4);
      FUN_147057811(local_58,(ulonglong)local_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      goto LAB_147a82578;
    }
    pwVar5 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar5,2,0);
  *param_2 = 0;
  param_2[1] = 0;
LAB_147a82578:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
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
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a826ae FUN_147a826ae body=365 status=ok
// SIG undefined FUN_147a826ae(void)

void FUN_147a826ae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  local_68 = local_48;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a8281c(param_1,&local_58,local_28,local_30);
  FUN_147049538(param_3,&local_58);
  FUN_14704c977(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8281c FUN_147a8281c body=323 status=ok
// SIG undefined FUN_147a8281c(void)

undefined8 *
FUN_147a8281c(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    pwVar6 = L"SelectionSet is null.";
  }
  else {
    if (param_4 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x848);
      plVar4 = *(longlong **)(param_3 + 0x850);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      uVar5 = FUN_14479d2ce(lVar3 + 0x10);
      local_58 = param_5;
      FUN_147a83cd0(param_1,&local_50,param_3,param_4);
      FUN_147051bc5(param_2,&local_50,uVar5);
      FUN_147057811(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
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
      if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    pwVar6 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 147a82960 FUN_147a82960 body=506 status=ok
// SIG undefined FUN_147a82960(void)

void FUN_147a82960(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_98 = 0;
  local_90 = 0;
  local_78 = DAT_14c8464f0;
  local_88 = DAT_14c8464e0;
  uStack_80 = DAT_14c8464e8;
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_44 = 0xffffffff00000080;
  local_3c = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_c8 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_c8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a82b5c(param_1,&local_b8,local_a0,local_a8);
  FUN_147049538(param_3,&local_b8);
  FUN_14704c977(local_b8,local_b0);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_28 = 0;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b084(&local_70);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a82b5c FUN_147a82b5c body=332 status=ok
// SIG undefined FUN_147a82b5c(void)

undefined8 *
FUN_147a82b5c(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    pwVar6 = L"SelectionSet is null.";
  }
  else {
    if (param_4 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x848);
      plVar4 = *(longlong **)(param_3 + 0x850);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      uVar5 = FUN_14479d2ce(lVar3 + 0x10);
      local_68 = param_5;
      local_60 = 0;
      FUN_147a8459a(param_1,&local_50,param_3,param_4);
      FUN_147051bc5(param_2,&local_50,uVar5);
      FUN_147057811(local_50,local_48);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
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
      if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    pwVar6 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
}



// FUNCTION 147a82caa FUN_147a82caa body=569 status=ok
// SIG undefined FUN_147a82caa(void)

void FUN_147a82caa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar4 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_88 = DAT_14c8464f0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_d8 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    local_d8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147a82ee4(param_1,&local_d0,puVar4,local_c0);
  FUN_147049538(param_3,&local_d0);
  FUN_14704c977(local_d0,local_c8);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b084(&local_80);
  plVar3 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a82ee4 FUN_147a82ee4 body=428 status=ok
// SIG undefined FUN_147a82ee4(void)

undefined8 *
FUN_147a82ee4(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *param_3;
  local_48 = (longlong *)param_3[1];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_40,&local_50);
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40 == 0) {
    pwVar5 = L"ElementList is in a invalid state.";
  }
  else {
    if (param_4 != 0) {
      uVar4 = FUN_14479d2ce(local_40 + 0x10);
      local_60 = local_40;
      local_58 = local_38;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      local_78 = param_5;
      local_70 = 0;
      (**(code **)(*param_1 + 0x2b0))(param_1,&local_50,&local_60,param_4);
      FUN_147051bc5(param_2,&local_50,uVar4);
      FUN_147057811(local_50,(ulonglong)local_48 & 0xffffffff);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      goto LAB_147a82f81;
    }
    pwVar5 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar5,2,0);
  *param_2 = 0;
  param_2[1] = 0;
LAB_147a82f81:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a83092 FUN_147a83092 body=614 status=ok
// SIG undefined FUN_147a83092(void)

void FUN_147a83092(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  longlong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8 [3];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a8 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_b0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_a0 = 0;
  local_98 = 0;
  local_80 = DAT_14c8464f0;
  local_90 = DAT_14c8464e0;
  uStack_88 = DAT_14c8464e8;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  puVar1 = &local_a0;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  local_c8[0] = 0;
  local_c8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e0 = local_c8;
  local_e8 = puVar1;
  FUN_147a832fa(param_1,&local_d8,local_a8,local_b0);
  FUN_147049538(param_3,&local_d8);
  FUN_14704c977(local_d8,local_d0);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b084(&local_78);
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a832fa FUN_147a832fa body=338 status=ok
// SIG undefined FUN_147a832fa(void)

undefined8 *
FUN_147a832fa(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 == 0) {
    pwVar6 = L"SelectionSet is null.";
  }
  else {
    if (param_4 != 0) {
      lVar3 = *(longlong *)(param_3 + 0x848);
      plVar4 = *(longlong **)(param_3 + 0x850);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
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
      uVar5 = FUN_14479d2ce(lVar3 + 0x10);
      local_60 = param_6;
      local_68 = param_5;
      FUN_147a8459a(param_1,&local_58,param_3,param_4);
      FUN_147051bc5(param_2,&local_58,uVar5);
      FUN_147057811(local_58,local_50);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
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
      if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    pwVar6 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar6,2,0);
  *param_2 = 0;
  param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 147a8344e FUN_147a8344e body=676 status=ok
// SIG undefined FUN_147a8344e(void)

void FUN_147a8344e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  longlong *local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong local_d8 [3];
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = 0;
  plStack_b0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar4 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_c0 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_88 = DAT_14c8464f0;
  local_60 = 0;
  local_58 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_54 = 0xffffffff00000080;
  local_4c = 0;
  local_40 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar5 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_d8[0] = 0;
  local_d8[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_f0 = local_d8;
  local_f8 = puVar5;
  FUN_147a836f4(param_1,&local_e8,puVar4,local_c0);
  FUN_147049538(param_3,&local_e8);
  FUN_14704c977(local_e8,local_e0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if (local_d8[0] != 0) {
    FUN_1400020a8();
  }
  local_38 = 0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b084(&local_80);
  plVar3 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a836f4 FUN_147a836f4 body=436 status=ok
// SIG undefined FUN_147a836f4(void)

undefined8 *
FUN_147a836f4(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  wchar_t *pwVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *param_3;
  local_50 = (longlong *)param_3[1];
  if (local_50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
  }
  FUN_147050e88(&local_48,&local_58);
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_48 == 0) {
    pwVar5 = L"ElementList is in a invalid state.";
  }
  else {
    if (param_4 != 0) {
      uVar4 = FUN_14479d2ce(local_48 + 0x10);
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      local_70 = param_6;
      local_78 = param_5;
      (**(code **)(*param_1 + 0x2b0))(param_1,&local_58,&local_68,param_4);
      FUN_147051bc5(param_2,&local_58,uVar4);
      FUN_147057811(local_58,(ulonglong)local_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      goto LAB_147a83793;
    }
    pwVar5 = L"World is null.";
  }
  FUN_1415b7ec4(pwVar5,2,0);
  *param_2 = 0;
  param_2[1] = 0;
LAB_147a83793:
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a838ac FUN_147a838ac body=92 status=ok
// SIG undefined FUN_147a838ac(void)

void FUN_147a838ac(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = param_6;
  (**(code **)(*param_2 + 0x148))(param_2,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8390a FUN_147a8390a body=92 status=ok
// SIG undefined FUN_147a8390a(void)

void FUN_147a8390a(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  local_28 = param_6;
  (**(code **)(*param_2 + 0x170))(param_2,&local_18,param_4,param_5);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a83968 FUN_147a83968 body=73 status=ok
// SIG undefined FUN_147a83968(void)

void FUN_147a83968(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(*param_2 + 0x188))(param_2,&local_18,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a839b2 FUN_147a839b2 body=29 status=ok
// SIG undefined FUN_147a839b2(void)

undefined8 FUN_147a839b2(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  (**(code **)(*param_3 + 400))(param_3);
  return param_2;
}



// FUNCTION 147a839d0 FUN_147a839d0 body=767 status=ok
// SIG undefined FUN_147a839d0(void)

byte FUN_147a839d0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *param_2;
  bVar8 = 0;
  if (lVar3 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c0 = param_2[1];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    local_108 = param_3;
    local_c8 = lVar3;
    FUN_147051b1f(&local_c8,local_98);
    lVar3 = FUN_145c635e4();
    *(char *)(lVar3 + 0x8f8) = *(char *)(lVar3 + 0x8f8) + '\x01';
    local_b0 = local_88;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar6 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar6 = local_70;
    }
    local_d8 = local_a8;
    uVar5 = local_d8;
    local_d0 = local_a0;
    local_cc = local_9c;
    local_e8 = local_b8;
    local_e0 = local_b0;
    local_f0 = local_98;
    local_d8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    local_d8 = uVar5;
    if ((local_d8._4_4_ == iVar6) && (local_b0 == local_88)) {
      bVar8 = 0;
    }
    else {
      bVar8 = 0;
      iVar2 = local_d8._4_4_;
      local_110 = param_4;
      do {
        lVar7 = *local_f0;
        uVar9 = (ulonglong)*(byte *)(lVar7 + (longlong)iVar2 * 0x20);
        plVar10 = *(longlong **)(param_1 + 0x30 + uVar9 * 8);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0x30);
        }
        local_b8 = FUN_1458d4b68();
        if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(local_b8);
        }
        lVar4 = FUN_147051a0c(lVar3,uVar9,&local_b8);
        if (lVar4 != 0) {
          uVar5 = FUN_1458d4b68();
          lVar4 = FUN_144718840(lVar4,uVar5);
          if ((plVar10 != (longlong *)0x0) && (lVar4 != 0)) {
            lVar7 = lVar7 + (longlong)iVar2 * 0x20;
            local_100 = *(undefined8 *)(lVar7 + 8);
            local_f8 = *(undefined4 *)(lVar7 + 0x10);
            local_120 = param_5;
            local_128 = local_110;
            bVar1 = (**(code **)(*plVar10 + 8))(plVar10,lVar4,&local_100,local_108);
            bVar8 = bVar8 | bVar1;
          }
        }
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar2 = local_d8._4_4_;
      } while (local_f0 != local_98 || (local_e0 != local_88 || local_d8._4_4_ != iVar6));
    }
    *(char *)(lVar3 + 0x8f8) = *(char *)(lVar3 + 0x8f8) + -1;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147a8b11c(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return bVar8 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a83cd0 FUN_147a83cd0 body=253 status=ok
// SIG undefined FUN_147a83cd0(void)

undefined8
FUN_147a83cd0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = 0;
  local_48 = 0;
  FUN_14705f6da(param_3,&local_40);
  local_60 = local_40;
  local_58 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_68 = param_5;
  (**(code **)(*param_1 + 0x2a0))(param_1,param_2,&local_60,param_4);
  plVar3 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
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
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a83dce FUN_147a83dce body=769 status=ok
// SIG undefined FUN_147a83dce(void)

undefined8 *
FUN_147a83dce(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *param_2 = 0;
  param_2[1] = 0;
  lVar7 = *param_3;
  if (lVar7 != 0) {
    iVar6 = *(int *)(lVar7 + 0x70);
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    local_108 = param_4;
    if (iVar6 != 0) {
      FUN_14705784a(param_2);
      lVar7 = *param_3;
    }
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c0 = param_3[1];
    if (local_c0 != 0) {
      LOCK();
      *(int *)(local_c0 + 8) = *(int *)(local_c0 + 8) + 1;
      UNLOCK();
    }
    local_c8 = lVar7;
    FUN_147051b1f(&local_c8,local_98);
    uVar2 = FUN_145c635e4();
    local_b0 = local_88;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    iVar6 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      iVar6 = local_70;
    }
    local_d8 = local_a8;
    uVar4 = local_d8;
    local_d0 = local_a0;
    local_cc = local_9c;
    local_e8 = local_b8;
    local_e0 = local_b0;
    local_f0 = local_98;
    local_d8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
    iVar1 = local_d8._4_4_;
    if ((local_d8._4_4_ != iVar6) || (local_d8 = uVar4, local_b0 != local_88)) {
      do {
        local_d8 = uVar4;
        lVar7 = *local_f0;
        uVar8 = (ulonglong)*(byte *)(lVar7 + (longlong)iVar1 * 0x20);
        plVar5 = *(longlong **)(param_1 + 0x30 + uVar8 * 8);
        if (plVar5 == (longlong *)0x0) {
          plVar5 = *(longlong **)(param_1 + 0x30);
        }
        local_b8 = FUN_1458d4b68();
        if ((local_b8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(local_b8);
        }
        lVar3 = FUN_147051a0c(uVar2,uVar8,&local_b8);
        if (lVar3 != 0) {
          uVar4 = FUN_1458d4b68();
          lVar3 = FUN_144718840(lVar3,uVar4);
          if ((plVar5 != (longlong *)0x0) && (lVar3 != 0)) {
            lVar7 = lVar7 + (longlong)iVar1 * 0x20;
            local_100 = *(undefined8 *)(lVar7 + 8);
            local_f8 = *(undefined4 *)(lVar7 + 0x10);
            local_118 = param_5;
            local_110 = param_2;
            (**(code **)(*plVar5 + 0x10))(plVar5,lVar3,&local_100,local_108);
          }
        }
        local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~local_e8._4_4_);
        FUN_1449c0562(&local_e8);
        iVar1 = local_d8._4_4_;
        uVar4 = local_d8;
      } while (local_f0 != local_98 || (local_e0 != local_88 || local_d8._4_4_ != iVar6));
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147a8b11c(local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147a840d2 FUN_147a840d2 body=1222 status=ok
// SIG undefined FUN_147a840d2(void)

ulonglong FUN_147a840d2(longlong param_1,longlong *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte *pbVar10;
  PSRWLOCK SRWLock;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined2 *local_138;
  int local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined **local_d8;
  undefined1 local_cf;
  undefined2 *local_c8;
  int local_c0;
  undefined **local_b8;
  undefined1 *local_b0;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar11 = 0;
  if (*param_2 != 0) {
    local_140 = param_3;
    FUN_140056680(&local_c8,&DAT_149dfb77a);
    FUN_144a81de8(&local_d8);
    local_d8 = &PTR_FUN_149e98010;
    local_cf = 0;
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_e8 = *param_2;
    local_e0 = param_2[1];
    if (local_e0 != 0) {
      LOCK();
      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
      UNLOCK();
    }
    FUN_147051b1f(&local_e8,local_98);
    local_148 = FUN_145c635e4();
    local_b0 = local_88;
    local_b8 = (undefined **)0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    uVar7 = 0;
    if (local_70 != 0) {
      FUN_1449c0562(&local_b8);
      uVar7 = local_70;
    }
    local_f8 = local_a8;
    lVar4 = local_f8;
    local_f0 = local_a0;
    local_ec = local_9c;
    local_108 = local_b8;
    local_100 = local_b0;
    local_110 = local_98;
    local_f8._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
    if ((local_f8._4_4_ != uVar7) || (local_b0 != local_88)) {
      SRWLock = (PSRWLOCK)(local_148 + 0x28);
      uVar3 = local_f8._4_4_;
      local_f8 = lVar4;
      do {
        uVar11 = (ulonglong)uVar7;
        lVar4 = *local_110;
        FUN_140056680(&local_a8,&DAT_149dfb77a);
        FUN_144a81de8(&local_b8);
        local_b8 = &PTR_FUN_149e98010;
        local_b0._0_2_ = (ushort)(byte)local_b0;
        uVar8 = (ulonglong)*(byte *)(lVar4 + (longlong)(int)uVar3 * 0x20);
        plVar9 = *(longlong **)(param_1 + 0x30 + uVar8 * 8);
        if (plVar9 == (longlong *)0x0) {
          plVar9 = *(longlong **)(param_1 + 0x30);
        }
        local_138 = (undefined2 *)FUN_1458d4b68();
        if ((local_138 != (undefined2 *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(local_138);
        }
        pbVar10 = (byte *)(lVar4 + (longlong)(int)uVar3 * 0x20);
        lVar4 = FUN_147051a0c(local_148,uVar8,&local_138);
        if (lVar4 != 0) {
          uVar5 = FUN_1458d4b68();
          lVar4 = FUN_144718840(lVar4,uVar5);
          if ((plVar9 != (longlong *)0x0) && (lVar4 != 0)) {
            local_120 = *(undefined8 *)(pbVar10 + 8);
            local_118 = *(undefined4 *)(pbVar10 + 0x10);
            (**(code **)(*plVar9 + 0x18))(plVar9,lVar4,&local_120,&local_b8);
          }
        }
        if (1 < local_a0) {
          bVar1 = *pbVar10;
          AcquireSRWLockShared(SRWLock);
          if (bVar1 == 0) {
            ReleaseSRWLockShared(SRWLock);
LAB_147a843c2:
            local_128 = 0;
          }
          else {
            lVar4 = *(longlong *)(local_148 + 0x30 + (ulonglong)(bVar1 - 1) * 8);
            ReleaseSRWLockShared(SRWLock);
            if (lVar4 == 0) goto LAB_147a843c2;
            local_128 = *(undefined8 *)(lVar4 + 0xc);
          }
          FUN_1400021e4(&local_128,&local_138);
          puVar6 = &DAT_149dfb77a;
          if (local_130 != 0) {
            puVar6 = local_138;
          }
          FUN_140047918(&local_d8,L"Begin ElementGroup Type=%s\r\n",puVar6);
          if (local_138 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          iVar2 = local_a0 + -1;
          if (local_a0 == 0) {
            iVar2 = 0;
          }
          FUN_1400020e8(&local_c8,local_a8,iVar2);
          FUN_1468161aa(&local_d8,L"End ElementGroup\r\n");
        }
        FUN_144a8720c(&local_b8);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
        FUN_1449c0562(&local_108);
        uVar3 = local_f8._4_4_;
        lVar4 = local_f8;
      } while (local_110 != local_98 || (local_100 != local_88 || local_f8._4_4_ != uVar7));
    }
    local_f8 = lVar4;
    uVar11 = CONCAT71((int7)(uVar11 >> 8),1 < local_c0);
    if (local_140 == 0) {
      puVar6 = local_c8;
      if (local_c0 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      FUN_142855b70(puVar6);
    }
    else {
      iVar2 = local_c0 + -1;
      if (local_c0 == 0) {
        iVar2 = 0;
      }
      FUN_1402980a2(local_140,local_c8,iVar2);
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_147a8b11c(local_98);
    FUN_144a8720c(&local_d8);
    if (local_c8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147a8459a FUN_147a8459a body=270 status=ok
// SIG undefined FUN_147a8459a(void)

undefined8
FUN_147a8459a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  FUN_14705f6da(param_3,&local_48);
  local_68 = local_48;
  local_60 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_70 = param_6;
  local_78 = param_5;
  (**(code **)(*param_1 + 0x2b0))(param_1,param_2,&local_68,param_4);
  plVar3 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a846aa FUN_147a846aa body=3493 status=ok
// SIG undefined FUN_147a846aa(void)

/* WARNING: Removing unreachable block (ram,0x000147a84f00) */
/* WARNING: Removing unreachable block (ram,0x000147a84f06) */
/* WARNING: Removing unreachable block (ram,0x000147a84f14) */

longlong *
FUN_147a846aa(longlong param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
             longlong *param_5,undefined8 *param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  short sVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  wchar_t *pwVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  size_t sVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_9d8 [32];
  ulonglong local_9b8;
  longlong *local_9a8;
  undefined8 local_9a0;
  longlong local_998;
  longlong *local_990;
  undefined8 local_988;
  undefined8 local_980;
  longlong *local_978;
  undefined8 uStack_970;
  ulonglong local_968;
  undefined8 local_960;
  undefined8 uStack_958;
  longlong *local_948;
  longlong *plStack_940;
  wchar_t *local_938;
  undefined4 local_930;
  undefined4 uStack_92c;
  wchar_t *local_928;
  short *local_920;
  longlong local_918;
  undefined8 uStack_910;
  longlong local_908;
  undefined8 uStack_900;
  undefined2 *local_8f0;
  undefined2 *local_8e8;
  undefined8 uStack_8e0;
  longlong local_8d8 [2];
  undefined4 local_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 uStack_8bc;
  double local_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  longlong local_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_9d8;
  local_8e8 = (undefined2 *)0x0;
  uStack_8e0 = 0;
  local_9a8 = param_2;
  local_998 = param_1;
  if (param_6 == (undefined8 *)0x0) {
    FUN_140d67490(&local_8e8);
    local_8f0 = local_8e8;
    if ((int)uStack_8e0 != 0) goto LAB_147a8477d;
  }
  else if (*(int *)(param_6 + 1) != 0) {
    local_8f0 = (undefined2 *)*param_6;
    goto LAB_147a8477d;
  }
  local_8f0 = &DAT_149dfb77a;
LAB_147a8477d:
  local_9a0 = FUN_14479d2ce(*param_3 + 0x10);
  local_908 = 0;
  uStack_900 = 0;
  local_978 = (longlong *)0x0;
  uStack_970 = (longlong *)0x0;
  local_918 = 0;
  uStack_910 = (longlong *)((ulonglong)uStack_910._4_4_ << 0x20);
  local_990 = param_5 + 5;
  plVar19 = (longlong *)0x0;
  lVar23 = 0;
  while( true ) {
    cVar10 = FUN_146816d46(&local_8f0,&local_918,0);
    lVar15 = local_918;
    if (cVar10 == '\0') break;
    if ((int)(uint)uStack_970 < 2) {
      if ((5 < (int)uStack_910) && (iVar11 = FUN_144a54874(L"Begin ",local_918), iVar11 == 0)) {
        local_920 = (short *)(lVar15 + 0xc);
        local_9b8 = local_9b8 & 0xffffffffffff0000;
        cVar10 = FUN_142786b6e(&local_920,local_8d8,0x400,0);
        if (cVar10 != '\0') {
          iVar11 = wcscmp(L"ElementGroup",(wchar_t *)local_8d8);
          if (iVar11 == 0) {
            sVar5 = *local_920;
            while (sVar5 == 0x20) {
              local_920 = local_920 + 1;
              sVar5 = *local_920;
            }
            local_928 = (wchar_t *)0x0;
            cVar10 = FUN_140e134ac(local_920,L"Type=");
            if (cVar10 != '\0') {
              local_938 = local_928;
              lVar15 = FUN_142af9074(local_9a0,&local_938);
              if ((lVar15 != 0) && (uVar22 = (ulonglong)*(byte *)(lVar15 + 8), uVar22 != 0)) {
                local_938 = (wchar_t *)FUN_1458d4b68();
                if ((local_938 != (wchar_t *)0x0) && (DAT_14c950c29 != '\0')) {
                  FUN_14689c22e(local_938);
                }
                lVar15 = FUN_147051a0c(local_9a0,uVar22);
                if (lVar15 != 0) {
                  uVar17 = FUN_1458d4b68();
                  lVar15 = FUN_144718840(lVar15,uVar17);
                  if (lVar15 != 0) {
                    plVar20 = *(longlong **)(local_998 + 0x30 + uVar22 * 8);
                    if (plVar20 == (longlong *)0x0) {
                      plVar20 = *(longlong **)(local_998 + 0x30);
                    }
                    local_9b8 = param_4;
                    (**(code **)(*plVar20 + 0x20))(plVar20,&local_938);
                    uVar22 = uStack_900;
                    lVar15 = local_918;
                    pwVar8 = local_938;
                    if (local_938 != (wchar_t *)0x0) {
                      plVar19 = (longlong *)CONCAT44(uStack_92c,local_930);
                      if (plVar19 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                        UNLOCK();
                        LOCK();
                        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                        UNLOCK();
                      }
                      lVar23 = (longlong)(int)uStack_900;
                      uVar14 = (int)uStack_900 + 1;
                      uStack_900 = CONCAT44(uStack_900._4_4_,uVar14);
                      if (uStack_900._4_4_ < uVar14) {
                        FUN_147a8f240(&local_908,uVar22 & 0xffffffff);
                      }
                      lVar23 = lVar23 * 0x20;
                      lVar18 = local_908 + lVar23;
                      *(wchar_t **)(local_908 + lVar23) = pwVar8;
                      *(longlong **)(local_908 + 8 + lVar23) = plVar19;
                      if (plVar19 == (longlong *)0x0) {
                        *(undefined8 *)(lVar18 + 0x10) = 0;
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                      }
                      else {
                        LOCK();
                        *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                        UNLOCK();
                        *(undefined8 *)(lVar18 + 0x10) = 0;
                        *(undefined8 *)(lVar18 + 0x18) = 0;
                        LOCK();
                        plVar20 = plVar19 + 1;
                        *(int *)plVar20 = (int)*plVar20 + -1;
                        UNLOCK();
                        if ((int)*plVar20 == 0) {
                          (**(code **)*plVar19)();
                          LOCK();
                          piVar1 = (int *)((longlong)plVar19 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar19 + 0x10))(plVar19);
                          }
                        }
                        LOCK();
                        plVar20 = plVar19 + 1;
                        *(int *)plVar20 = (int)*plVar20 + -1;
                        UNLOCK();
                        if ((int)*plVar20 == 0) {
                          (**(code **)*plVar19)();
                          LOCK();
                          piVar1 = (int *)((longlong)plVar19 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar19 + 0x10))(plVar19);
                          }
                        }
                      }
                      plVar19 = (longlong *)(lVar18 + 0x10);
                      FUN_140002266(&local_948,L"End %s");
                      if (local_978 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      local_978 = local_948;
                      uStack_970 = plStack_940;
                      lVar23 = lVar15;
                    }
                    plVar20 = (longlong *)CONCAT44(uStack_92c,local_930);
                    if (plVar20 != (longlong *)0x0) {
                      LOCK();
                      plVar25 = plVar20 + 1;
                      *(int *)plVar25 = (int)*plVar25 + -1;
                      UNLOCK();
                      if ((int)*plVar25 == 0) {
                        (**(code **)*plVar20)(plVar20);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar20 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar20 + 0x10))(plVar20);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_938 = (wchar_t *)local_8d8;
            sVar16 = wcslen((wchar_t *)local_8d8);
            local_930 = (int)sVar16;
            uVar13 = FUN_144a49b4a(sVar16 & 0xffffffff,local_8d8);
            plVar20 = local_990;
            iVar11 = FUN_147a8f2c6(local_990,uVar13);
            lVar15 = local_918;
            lVar18 = (longlong)iVar11 * 0x60 + *plVar20;
            if (lVar18 != 0 && iVar11 != -1) {
              pcVar6 = *(code **)(lVar18 + 0x10);
              plVar19 = (longlong *)(lVar18 + 0x30);
              if (*(longlong **)(lVar18 + 0x20) != (longlong *)0x0) {
                plVar19 = *(longlong **)(lVar18 + 0x20);
              }
              uVar17 = (**(code **)(*plVar19 + 8))();
              (*pcVar6)(&local_948,uVar17);
              uVar22 = uStack_900;
              plVar20 = plStack_940;
              plVar19 = local_948;
              if (plStack_940 != (longlong *)0x0) {
                LOCK();
                *(int *)(plStack_940 + 1) = (int)plStack_940[1] + 1;
                UNLOCK();
              }
              lVar23 = (longlong)(int)uStack_900;
              uVar14 = (int)uStack_900 + 1;
              uStack_900 = CONCAT44(uStack_900._4_4_,uVar14);
              if (uStack_900._4_4_ < uVar14) {
                FUN_147a8f240(&local_908,uVar22 & 0xffffffff);
              }
              lVar23 = lVar23 * 0x20;
              lVar18 = local_908 + lVar23;
              *(longlong **)(local_908 + lVar23) = plVar19;
              *(longlong **)(local_908 + 8 + lVar23) = plVar20;
              if (plVar20 == (longlong *)0x0) {
                *(undefined8 *)(lVar18 + 0x10) = 0;
                *(undefined8 *)(lVar18 + 0x18) = 0;
              }
              else {
                LOCK();
                *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
                UNLOCK();
                *(undefined8 *)(lVar18 + 0x10) = 0;
                *(undefined8 *)(lVar18 + 0x18) = 0;
                LOCK();
                plVar19 = plVar20 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*plVar20)(plVar20);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar20 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              plVar20 = plStack_940;
              plVar19 = (longlong *)(lVar18 + 0x10);
              if (plStack_940 != (longlong *)0x0) {
                LOCK();
                plVar25 = plStack_940 + 1;
                *(int *)plVar25 = (int)*plVar25 + -1;
                UNLOCK();
                if ((int)*plVar25 == 0) {
                  (**(code **)*plStack_940)(plStack_940);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar20 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar20 + 0x10))(plVar20);
                  }
                }
              }
              FUN_140002266(&local_948,L"End %s");
              if (local_978 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_978 = local_948;
              uStack_970 = plStack_940;
              lVar23 = lVar15;
            }
          }
        }
      }
    }
    else {
      iVar12 = (uint)uStack_970 + -1;
      lVar15 = (longlong)(int)uStack_910;
      iVar11 = (int)uStack_910;
      if (iVar12 < (int)uStack_910) {
        iVar11 = iVar12;
      }
      iVar21 = 0;
      if (0 < iVar11) {
        iVar21 = iVar11;
      }
      if ((iVar12 == iVar21) &&
         ((iVar11 < 1 || (iVar11 = FUN_144a54874(local_978,local_918), iVar11 == 0)))) {
        if (plVar19 != (longlong *)0x0) {
          *plVar19 = lVar23;
          *(int *)(plVar19 + 1) = (int)((ulonglong)((lVar15 * 2 + local_918) - lVar23) >> 1);
        }
        bVar26 = (longlong)uStack_970 < 0;
        uStack_970 = (longlong *)((ulonglong)uStack_970 & 0xffffffff00000000);
        if (bVar26) {
          FUN_1446f8c06(&local_978,0);
        }
        if (local_978 != (longlong *)0x0) {
          *(undefined2 *)local_978 = 0;
        }
      }
    }
  }
  if (local_978 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar23 = local_908;
  *local_9a8 = 0;
  local_9a8[1] = 0;
  local_8b8 = 0.0;
  uStack_8b0._0_4_ = 0;
  local_8d8[0] = 0;
  local_8d8[1] = 0;
  uStack_8b0._4_4_ = 0x80;
  uStack_8a8._0_4_ = 0xffffffff;
  uStack_8a8._4_4_ = 0;
  local_898 = 0;
  uStack_890._0_4_ = 0;
  lVar15 = (longlong)(int)uStack_900;
  plVar19 = local_9a8;
  if (lVar15 != 0) {
    lVar24 = local_908 + 0x10;
    lVar18 = 0;
    do {
      local_978 = (longlong *)*param_3;
      uStack_970 = (longlong *)param_3[1];
      if (uStack_970 == (longlong *)0x0) {
        uStack_970 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(uStack_970 + 1) = (int)uStack_970[1] + 1;
        UNLOCK();
      }
      puVar2 = (undefined8 *)(lVar24 + lVar18);
      local_960 = *puVar2;
      uStack_958 = puVar2[1];
      local_968 = param_4;
      (**(code **)(**(longlong **)(lVar23 + lVar18) + 8))
                (*(longlong **)(lVar23 + lVar18),&local_978);
      plVar19 = uStack_970;
      if (uStack_970 != (longlong *)0x0) {
        LOCK();
        plVar20 = uStack_970 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*uStack_970)(uStack_970);
          LOCK();
          piVar1 = (int *)((longlong)plVar19 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
        }
      }
      lVar9 = local_908;
      plVar19 = local_9a8;
      lVar18 = lVar18 + 0x20;
    } while (lVar15 * 0x20 != lVar18);
    lVar23 = (longlong)(int)uStack_900;
    if (lVar23 != 0) {
      lVar15 = 0;
      do {
        (**(code **)(**(longlong **)(lVar9 + lVar15) + 0x10))
                  (*(longlong **)(lVar9 + lVar15),&local_978);
        lVar18 = (longlong)(int)(uint)uStack_970;
        if (lVar18 != 0) {
          iVar11 = (int)plVar19[1];
          *(uint *)(plVar19 + 1) = iVar11 + (uint)uStack_970;
          if ((uint)(*(int *)((longlong)plVar19 + 0xc) - iVar11) < (uint)uStack_970) {
            FUN_1470578aa(plVar19,iVar11);
          }
          memmove((void *)((longlong)iVar11 * 8 + *plVar19),local_978,lVar18 << 3);
          uStack_970 = (longlong *)((ulonglong)uStack_970 & 0xffffffff00000000);
        }
        FUN_147057811(local_978,0);
        if (local_978 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar15 = lVar15 + 0x20;
      } while (lVar23 * 0x20 != lVar15);
    }
  }
  uStack_890 = (ulonglong)uStack_890._4_4_ << 0x20;
  if (local_898 != 0) {
    FUN_1400020a8();
  }
  FUN_147a8b2a2(local_8d8);
  if ((char)param_5[1] != '\0') {
    uVar29 = 0;
    uVar30 = 0;
    uVar13 = 0;
    uVar31 = 0;
    local_978 = (longlong *)0x0;
    uStack_970 = (longlong *)0x0;
    iVar11 = (int)plVar19[1];
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    dVar27 = 0.0;
    if (iVar11 == 0) {
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      dVar27 = 0.0;
    }
    else {
      FUN_147a8f36c(&local_978);
      uVar36 = 0;
      uVar37 = 0;
      uVar38 = 0;
      uVar39 = 0;
      if ((longlong)(int)plVar19[1] != 0) {
        lVar23 = *plVar19;
        lVar15 = (longlong)(int)plVar19[1] << 3;
        uVar34 = 0;
        uVar35 = 0;
        uVar32 = 0;
        uVar33 = 0;
        uVar29 = 0;
        uVar30 = 0;
        uVar13 = 0;
        uVar31 = 0;
        bVar26 = false;
        do {
          local_918 = 0;
          uStack_910 = (longlong *)0x0;
          local_8d8[0] = FUN_1458d4b68();
          if ((local_8d8[0] != 0) && (DAT_14c950c29 != '\0')) {
            FUN_14689c22e(local_8d8[0]);
          }
          FUN_147a8f3c2(local_9a0,lVar23,local_8d8,&local_918);
          if (uStack_910 != (longlong *)0x0 && local_918 != 0) {
            local_8d8[0] = 0;
            local_8d8[1] = 0;
            local_8c8 = 0;
            uStack_8c4 = 0;
            uStack_8c0 = 0;
            uStack_8bc = 0x3ff00000;
            uStack_8a8._0_4_ = 0;
            uStack_8a8._4_4_ = 0;
            uStack_8a0 = 0;
            local_8b8 = 0.0;
            uStack_8b0._0_4_ = 0;
            uStack_8b0._4_4_ = 0;
            local_898 = 0x3ff0000000000000;
            uStack_890 = 0x3ff0000000000000;
            local_888 = 0x3ff0000000000000;
            uStack_880 = 0;
            (**(code **)(*uStack_910 + 0x88))(uStack_910,&local_918,local_8d8);
            plVar19 = uStack_970;
            auVar7._8_4_ = (undefined4)uStack_8b0;
            auVar7._0_8_ = local_8b8;
            auVar7._12_4_ = uStack_8b0._4_4_;
            if (bVar26) {
              dVar27 = (double)CONCAT44(uVar37,uVar36);
              if (local_8b8 <= (double)CONCAT44(uVar37,uVar36)) {
                dVar27 = local_8b8;
              }
              dVar28 = (double)CONCAT44(uVar30,uVar29);
              if ((double)CONCAT44(uVar30,uVar29) <= local_8b8) {
                dVar28 = local_8b8;
              }
              if (auVar7._8_8_ <= (double)CONCAT44(uVar39,uVar38)) {
                uVar38 = (undefined4)uStack_8b0;
                uVar39 = uStack_8b0._4_4_;
              }
              if ((double)CONCAT44(uStack_8a8._4_4_,(undefined4)uStack_8a8) <=
                  (double)CONCAT44(uVar35,uVar34)) {
                uVar34 = (undefined4)uStack_8a8;
                uVar35 = uStack_8a8._4_4_;
              }
              if ((double)CONCAT44(uVar31,uVar13) <= auVar7._8_8_) {
                uVar13 = (undefined4)uStack_8b0;
                uVar31 = uStack_8b0._4_4_;
              }
              if ((double)CONCAT44(uVar33,uVar32) <=
                  (double)CONCAT44(uStack_8a8._4_4_,(undefined4)uStack_8a8)) {
                uVar32 = (undefined4)uStack_8a8;
                uVar33 = uStack_8a8._4_4_;
              }
              uVar29 = SUB84(dVar28,0);
              uVar30 = (undefined4)((ulonglong)dVar28 >> 0x20);
              uVar36 = SUB84(dVar27,0);
              uVar37 = (undefined4)((ulonglong)dVar27 >> 0x20);
            }
            else {
              uVar29 = SUB84(local_8b8,0);
              uVar30 = (undefined4)((ulonglong)local_8b8 >> 0x20);
              uVar13 = (undefined4)uStack_8b0;
              uVar31 = uStack_8b0._4_4_;
              uVar32 = (undefined4)uStack_8a8;
              uVar33 = uStack_8a8._4_4_;
              uVar34 = (undefined4)uStack_8a8;
              uVar35 = uStack_8a8._4_4_;
              uVar36 = uVar29;
              uVar37 = uVar30;
              uVar38 = (undefined4)uStack_8b0;
              uVar39 = uStack_8b0._4_4_;
            }
            lVar18 = (longlong)(int)(uint)uStack_970;
            uVar14 = (uint)uStack_970 + 1;
            uStack_970 = (longlong *)CONCAT44(uStack_970._4_4_,uVar14);
            if (uStack_970._4_4_ < uVar14) {
              FUN_147a8f534(&local_978,(ulonglong)plVar19 & 0xffffffff);
            }
            local_978[lVar18 * 2] = local_918;
            local_918 = 0;
            local_978[lVar18 * 2 + 1] = (longlong)uStack_910;
            uStack_910 = (longlong *)0x0;
            bVar26 = true;
          }
          if (local_918 != 0) {
            LOCK();
            *(int *)(local_918 + 0xc) = *(int *)(local_918 + 0xc) + -1;
            UNLOCK();
          }
          lVar23 = lVar23 + 8;
          lVar15 = lVar15 + -8;
        } while (lVar15 != 0);
        dVar27 = ((double)CONCAT44(uVar33,uVar32) + (double)CONCAT44(uVar35,uVar34)) * 0.5;
        plVar19 = local_9a8;
      }
    }
    uVar22 = 0;
    if ((longlong)(int)(uint)uStack_970 != 0) {
      dVar28 = (double)param_5[4];
      dVar3 = (double)param_5[2];
      dVar4 = (double)param_5[3];
      plVar25 = local_978 + (longlong)(int)(uint)uStack_970 * 2;
      plVar20 = local_978;
      do {
        local_918 = 0;
        lVar23 = *plVar20;
        if (lVar23 != 0) {
          LOCK();
          *(int *)(lVar23 + 0xc) = *(int *)(lVar23 + 0xc) + 1;
          UNLOCK();
          local_918 = lVar23;
        }
        uStack_910 = (longlong *)plVar20[1];
        local_8d8[0] = 0;
        local_8d8[1] = 0;
        local_8c8 = 0;
        uStack_8c4 = 0;
        uStack_8c0 = 0;
        uStack_8bc = 0x3ff00000;
        uStack_8a8._0_4_ = 0;
        uStack_8a8._4_4_ = 0;
        uStack_8a0 = 0;
        local_8b8 = 0.0;
        uStack_8b0._0_4_ = 0;
        uStack_8b0._4_4_ = 0;
        local_898 = 0x3ff0000000000000;
        uStack_890 = 0x3ff0000000000000;
        local_888 = 0x3ff0000000000000;
        uStack_880 = 0;
        (**(code **)(*uStack_910 + 0x88))(uStack_910,&local_918,local_8d8);
        uStack_8a8 = (double)CONCAT44(uStack_8a8._4_4_,(undefined4)uStack_8a8) + (dVar28 - dVar27);
        uStack_8b0 = (double)CONCAT44(uStack_8b0._4_4_,(undefined4)uStack_8b0) +
                     (dVar4 - ((double)CONCAT44(uVar31,uVar13) + (double)CONCAT44(uVar39,uVar38)) *
                              0.5);
        local_8b8 = local_8b8 +
                    (dVar3 - ((double)CONCAT44(uVar30,uVar29) + (double)CONCAT44(uVar37,uVar36)) *
                             0.5);
        uStack_8a0 = 0;
        (**(code **)(*uStack_910 + 0x98))(uStack_910,&local_918,local_8d8);
        if (local_918 != 0) {
          LOCK();
          *(int *)(local_918 + 0xc) = *(int *)(local_918 + 0xc) + -1;
          UNLOCK();
        }
        plVar20 = plVar20 + 2;
      } while (plVar20 != plVar25);
      uVar22 = (ulonglong)uStack_970 & 0xffffffff;
    }
    FUN_147a8f34d(local_978,uVar22);
    if (local_978 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*param_5 != 0) && ((int)plVar19[1] != 0)) {
    local_988 = 0x10100;
    local_980 = 0;
    FUN_14705f25a(*param_5,plVar19);
  }
  FUN_147a8f1f6(local_908,uStack_900 & 0xffffffff);
  if (local_908 != 0) {
    FUN_1400020a8();
  }
  if (local_8e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_9d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar19;
}



// FUNCTION 147a85468 FUN_147a85468 body=205 status=ok
// SIG undefined FUN_147a85468(void)

void FUN_147a85468(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x128))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a8553c FUN_147a8553c body=205 status=ok
// SIG undefined FUN_147a8553c(void)

void FUN_147a8553c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x150))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85610 FUN_147a85610 body=199 status=ok
// SIG undefined FUN_147a85610(void)

void FUN_147a85610(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a856de FUN_147a856de body=290 status=ok
// SIG undefined FUN_147a856de(void)

void FUN_147a856de(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_31 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_31);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x60))(param_1,plVar3,local_31);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85808 FUN_147a85808 body=205 status=ok
// SIG undefined FUN_147a85808(void)

void FUN_147a85808(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x198))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a858dc FUN_147a858dc body=199 status=ok
// SIG undefined FUN_147a858dc(void)

void FUN_147a858dc(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x70))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a859aa FUN_147a859aa body=492 status=ok
// SIG undefined FUN_147a859aa(void)

void FUN_147a859aa(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined2 local_4b;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar3 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4b = 0x100;
  local_49 = 1;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4b);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4b);
  }
  local_58 = &local_4b;
  if (*(undefined2 **)(param_2 + 0x38) != (undefined2 *)0x0) {
    local_58 = *(undefined2 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x138))(param_1,plVar3,local_40,local_48);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85b98 FUN_147a85b98 body=409 status=ok
// SIG undefined FUN_147a85b98(void)

void FUN_147a85b98(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar2 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_68 = local_58;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_68 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x160))(param_1,&local_60,plVar2,local_40);
  *param_3 = local_60;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85d38 FUN_147a85d38 body=306 status=ok
// SIG undefined FUN_147a85d38(void)

void FUN_147a85d38(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [56];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar3 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85e6c FUN_147a85e6c body=200 status=ok
// SIG undefined FUN_147a85e6c(void)

void FUN_147a85e6c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x30))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a85f36 FUN_147a85f36 body=200 status=ok
// SIG undefined FUN_147a85f36(void)

void FUN_147a85f36(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = &local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0x40))(param_1,plVar3);
  *param_3 = uVar2;
  if (local_30 != 0) {
    piVar1 = (int *)(local_30 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147a86006 FUN_147a86006 body=309 status=ok
// SIG undefined FUN_147a86006(void)

void FUN_147a86006(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  int *piVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  plVar4 = &local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar3 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,plVar4,puVar3);
  *param_3 = uVar2;
  if (local_38 != 0) {
    piVar1 = (int *)(local_38 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


