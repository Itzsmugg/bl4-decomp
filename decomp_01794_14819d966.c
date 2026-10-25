// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14819d966 FUN_14819d966 body=68 status=ok
// SIG undefined FUN_14819d966(void)

char FUN_14819d966(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_140383372(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + 8;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 14819d9aa FUN_14819d9aa body=57 status=ok
// SIG undefined FUN_14819d9aa(void)

void FUN_14819d9aa(undefined8 *param_1,int param_2)

{
  FUN_145aa5a03(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14819d9e4(param_1,param_2);
  return;
}



// FUNCTION 14819d9e4 FUN_14819d9e4 body=112 status=ok
// SIG undefined FUN_14819d9e4(void)

void FUN_14819d9e4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 14819da54 FUN_14819da54 body=147 status=ok
// SIG undefined FUN_14819da54(void)

void FUN_14819da54(longlong param_1,int param_2)

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



// FUNCTION 14819dae8 FUN_14819dae8 body=29 status=ok
// SIG undefined FUN_14819dae8(void)

undefined8 FUN_14819dae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14819db06 FUN_14819db06 body=135 status=ok
// SIG undefined FUN_14819db06(void)

void FUN_14819db06(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (param_2 <= (int)uVar1) {
    iVar7 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x44) < 2) {
        uVar3 = 4;
        if (4 < uVar1) {
          uVar3 = uVar1;
        }
        lVar4 = (longlong)(int)uVar3;
      }
      else {
        lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar5 = FUN_144a3809e(lVar4 * 0x38,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5 >> 3;
      iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar7 = 0x7fffffff;
      if ((int)uVar1 <= iVar6) {
        iVar7 = iVar6;
      }
    }
    *(int *)(param_1 + 0x44) = iVar7;
    FUN_14819db8e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14819db8e FUN_14819db8e body=132 status=ok
// SIG undefined FUN_14819db8e(void)

void FUN_14819db8e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x38);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x38);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x38,0,param_3,0x38);
    memmove(*(void **)((longlong)param_1 + 0x38),param_1,(longlong)param_2 * 0x38);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x38,param_2,param_3,0x38);
  return;
}



// FUNCTION 14819dc12 FUN_14819dc12 body=80 status=ok
// SIG undefined FUN_14819dc12(void)

void FUN_14819dc12(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x40) = param_3;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 1;
    return;
  }
  FUN_14819dc62(param_1,param_3);
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar1 = param_1;
  }
  FUN_144b1a7d1(lVar1,param_2,param_3);
  return;
}



// FUNCTION 14819dc62 FUN_14819dc62 body=108 status=ok
// SIG undefined FUN_14819dc62(void)

void FUN_14819dc62(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = param_2;
    if (param_2 != 1) {
      uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,0);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar2 >> 3;
      iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
      if (iVar3 < param_2) {
        iVar3 = 0x7fffffff;
      }
      else {
        param_2 = 0;
        if (iVar3 < 1) goto LAB_14819dca8;
      }
    }
    param_2 = iVar3;
    FUN_14819db8e(param_1,0,param_2);
  }
LAB_14819dca8:
  *(int *)(param_1 + 0x44) = param_2;
  return;
}



// FUNCTION 14819dcce FUN_14819dcce body=258 status=ok
// SIG undefined FUN_14819dcce(void)

void FUN_14819dcce(void)

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
              0x110) < DAT_14cb3d670) {
    FUN_144b3d300(&DAT_14cb3d670);
    if (DAT_14cb3d670 == -1) {
      FUN_14819dfea(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNDIGpuComputeDispatchArgsGenParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3d5f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a6f9be);
      _Init_thread_footer(&DAT_14cb3d670);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819ddd1 FUN_14819ddd1 body=163 status=ok
// SIG undefined FUN_14819ddd1(void)

void FUN_14819ddd1(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  FUN_143a6f885();
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
  FUN_143a6f96d(param_1,param_2);
  return;
}



// FUNCTION 14819de74 FUN_14819de74 body=374 status=ok
// SIG undefined FUN_14819de74(void)

void FUN_14819de74(ulonglong *param_1,longlong *param_2,undefined8 param_3)

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



// FUNCTION 14819dfea FUN_14819dfea body=226 status=ok
// SIG undefined FUN_14819dfea(void)

longlong * FUN_14819dfea(longlong *param_1)

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
  pcVar13 = FUN_14819e0ce;
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



// FUNCTION 14819e0ce FUN_14819e0ce body=136 status=ok
// SIG undefined FUN_14819e0ce(void)

code * FUN_14819e0ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureAccessArray";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xb;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819e156;
}



// FUNCTION 14819e156 FUN_14819e156 body=136 status=ok
// SIG undefined FUN_14819e156(void)

code * FUN_14819e156(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BufferAccessArray";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819e1de;
}



// FUNCTION 14819e1de FUN_14819e1de body=136 status=ok
// SIG undefined FUN_14819e1de(void)

undefined1 * FUN_14819e1de(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145eb2426();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"IndirectArgsGenParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FNiagaraDispatchIndirectArgsGenCS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14819e266;
}



// FUNCTION 14819e26a FUN_14819e26a body=48 status=ok
// SIG undefined FUN_14819e26a(void)

void FUN_14819e26a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x50,0x10);
  }
  return;
}



// FUNCTION 14819e29a FUN_14819e29a body=98 status=ok
// SIG undefined FUN_14819e29a(void)

void FUN_14819e29a(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x48 + *param_1);
  FUN_140e959d1(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x48),(longlong)iVar2 * 0x48);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 14819e2fc FUN_14819e2fc body=62 status=ok
// SIG undefined FUN_14819e2fc(void)

void FUN_14819e2fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14819e33a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 14819e33a FUN_14819e33a body=112 status=ok
// SIG undefined FUN_14819e33a(void)

ulonglong FUN_14819e33a(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14819e374;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_14819e374:
  return param_2 & 0xffffffff;
}



// FUNCTION 14819e3aa FUN_14819e3aa body=103 status=ok
// SIG undefined FUN_14819e3aa(void)

void FUN_14819e3aa(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0x20;
    if (0x20 < param_2) {
      uVar2 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      iVar1 = (int)(uVar2 >> 3);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (iVar3 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = iVar3;
    FUN_14819e412(param_1,*(undefined4 *)(param_1 + 0x108));
    return;
  }
  return;
}



// FUNCTION 14819e412 FUN_14819e412 body=141 status=ok
// SIG undefined FUN_14819e412(void)

void FUN_14819e412(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 14819e4a0 FUN_14819e4a0 body=119 status=ok
// SIG undefined FUN_14819e4a0(void)

void FUN_14819e4a0(longlong param_1,int param_2)

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
    FUN_14819e518(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14819e518 FUN_14819e518 body=141 status=ok
// SIG undefined FUN_14819e518(void)

void FUN_14819e518(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 14819e5a6 FUN_14819e5a6 body=119 status=ok
// SIG undefined FUN_14819e5a6(void)

void FUN_14819e5a6(longlong param_1,int param_2)

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
    FUN_14819e412(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14819e61e FUN_14819e61e body=136 status=ok
// SIG undefined FUN_14819e61e(void)

void FUN_14819e61e(longlong *param_1,uint param_2)

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



// FUNCTION 14819e6a6 FUN_14819e6a6 body=62 status=ok
// SIG undefined FUN_14819e6a6(void)

void FUN_14819e6a6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14819e6e4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14819e6e4 FUN_14819e6e4 body=93 status=ok
// SIG undefined FUN_14819e6e4(void)

ulonglong FUN_14819e6e4(uint param_1,uint param_2)

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



// FUNCTION 14819e742 FUN_14819e742 body=136 status=ok
// SIG undefined FUN_14819e742(void)

void FUN_14819e742(longlong *param_1,uint param_2)

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



// FUNCTION 14819e7ca FUN_14819e7ca body=62 status=ok
// SIG undefined FUN_14819e7ca(void)

void FUN_14819e7ca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14819e808(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14819e808 FUN_14819e808 body=93 status=ok
// SIG undefined FUN_14819e808(void)

ulonglong FUN_14819e808(uint param_1,uint param_2)

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



// FUNCTION 14819e866 FUN_14819e866 body=9 status=ok
// SIG undefined FUN_14819e866(void)

void FUN_14819e866(longlong param_1)

{
  FUN_14810c008(param_1 + 0x10);
  return;
}



// FUNCTION 14819e870 FUN_14819e870 body=29 status=ok
// SIG undefined FUN_14819e870(void)

undefined8 FUN_14819e870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14819e88e FUN_14819e88e body=132 status=ok
// SIG undefined FUN_14819e88e(void)

void FUN_14819e88e(longlong param_1,int param_2)

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



// FUNCTION 14819e914 FUN_14819e914 body=52 status=ok
// SIG undefined FUN_14819e914(void)

void FUN_14819e914(longlong param_1)

{
  undefined8 *puVar1;
  
  FUN_143a695c4(param_1 + 0x10);
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014819e93e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14819e948 FUN_14819e948 body=29 status=ok
// SIG undefined FUN_14819e948(void)

undefined8 FUN_14819e948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14819e966 FUN_14819e966 body=132 status=ok
// SIG undefined FUN_14819e966(void)

void FUN_14819e966(longlong param_1,int param_2)

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



// FUNCTION 14819e9ec FUN_14819e9ec body=62 status=ok
// SIG undefined FUN_14819e9ec(void)

void FUN_14819e9ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14819ea2a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,0x10);
  }
  return;
}



// FUNCTION 14819ea2a FUN_14819ea2a body=93 status=ok
// SIG undefined FUN_14819ea2a(void)

ulonglong FUN_14819ea2a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,0x10);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 14819ea88 FUN_14819ea88 body=132 status=ok
// SIG undefined FUN_14819ea88(void)

void FUN_14819ea88(longlong param_1,int param_2)

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



// FUNCTION 14819eb0e FUN_14819eb0e body=114 status=ok
// SIG undefined FUN_14819eb0e(void)

void FUN_14819eb0e(longlong *param_1,int param_2)

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



// FUNCTION 14819eb9a FUN_14819eb9a body=29 status=ok
// SIG undefined FUN_14819eb9a(void)

bool FUN_14819eb9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14819ebb8 FUN_14819ebb8 body=26 status=ok
// SIG undefined FUN_14819ebb8(void)

bool FUN_14819ebb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14819ebd2 FUN_14819ebd2 body=93 status=ok
// SIG undefined FUN_14819ebd2(void)

void FUN_14819ebd2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addd5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14819ec30 FUN_14819ec30 body=93 status=ok
// SIG undefined FUN_14819ec30(void)

void FUN_14819ec30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addd5f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14819ec8e FUN_14819ec8e body=126 status=ok
// SIG undefined FUN_14819ec8e(void)

void FUN_14819ec8e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addd5f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014819ecfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14819ed0c FUN_14819ed0c body=140 status=ok
// SIG undefined FUN_14819ed0c(void)

bool FUN_14819ed0c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14819ed9a FUN_14819ed9a body=138 status=ok
// SIG undefined FUN_14819ed9a(void)

code * FUN_14819ed9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedPrevPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c800000089;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819ee24;
}



// FUNCTION 14819ee24 FUN_14819ee24 body=138 status=ok
// SIG undefined FUN_14819ee24(void)

code * FUN_14819ee24(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedCurrPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c000000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819eeae;
}



// FUNCTION 14819eeae FUN_14819eeae body=138 status=ok
// SIG undefined FUN_14819eeae(void)

code * FUN_14819eeae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EnabledFeatures";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1bc00000086;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14647225e;
}



// FUNCTION 14819ef38 FUN_14819ef38 body=138 status=ok
// SIG undefined FUN_14819ef38(void)

code * FUN_14819ef38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreSkinnedLocalBoundsCenter";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef3850;
}



// FUNCTION 14819efc2 FUN_14819efc2 body=138 status=ok
// SIG undefined FUN_14819efc2(void)

code * FUN_14819efc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePrevRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f04c;
}



// FUNCTION 14819f04c FUN_14819f04c body=138 status=ok
// SIG undefined FUN_14819f04c(void)

code * FUN_14819f04c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceRotation";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f0d6;
}



// FUNCTION 14819f0d6 FUN_14819f0d6 body=138 status=ok
// SIG undefined FUN_14819f0d6(void)

code * FUN_14819f0d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancePrevTransform";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef373c;
}



// FUNCTION 14819f160 FUN_14819f160 body=138 status=ok
// SIG undefined FUN_14819f160(void)

code * FUN_14819f160(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConnectivityMaxAdjacentPerVertex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe40000007e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f1ea;
}



// FUNCTION 14819f1ea FUN_14819f1ea body=138 status=ok
// SIG undefined FUN_14819f1ea(void)

code * FUN_14819f1ea(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ConnectivityBufferLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000007d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145ef37c6;
}



// FUNCTION 14819f274 FUN_14819f274 body=138 status=ok
// SIG undefined FUN_14819f274(void)

code * FUN_14819f274(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UvMappingSet";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd40000007b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f2fe;
}



// FUNCTION 14819f2fe FUN_14819f2fe body=138 status=ok
// SIG undefined FUN_14819f2fe(void)

code * FUN_14819f2fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UvMappingBufferLength";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f388;
}



// FUNCTION 14819f388 FUN_14819f388 body=138 status=ok
// SIG undefined FUN_14819f388(void)

code * FUN_14819f388(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UvMappingBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<int>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000079;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f412;
}



// FUNCTION 14819f412 FUN_14819f412 body=138 status=ok
// SIG undefined FUN_14819f412(void)

code * FUN_14819f412(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilteredSocketBoneOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc400000078;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f49c;
}



// FUNCTION 14819f49c FUN_14819f49c body=138 status=ok
// SIG undefined FUN_14819f49c(void)

code * FUN_14819f49c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumFilteredSockets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f526;
}



// FUNCTION 14819f526 FUN_14819f526 body=138 status=ok
// SIG undefined FUN_14819f526(void)

code * FUN_14819f526(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FilteredAndUnfilteredBones";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f5b0;
}



// FUNCTION 14819f5b0 FUN_14819f5b0 body=138 status=ok
// SIG undefined FUN_14819f5b0(void)

code * FUN_14819f5b0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ExcludeBoneIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb400000075;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f63a;
}



// FUNCTION 14819f63a FUN_14819f63a body=138 status=ok
// SIG undefined FUN_14819f63a(void)

code * FUN_14819f63a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RandomMaxBone";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb000000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f6c4;
}



// FUNCTION 14819f6c4 FUN_14819f6c4 body=138 status=ok
// SIG undefined FUN_14819f6c4(void)

code * FUN_14819f6c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumUnfilteredBones";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xac00000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f74e;
}



// FUNCTION 14819f74e FUN_14819f74e body=138 status=ok
// SIG undefined FUN_14819f74e(void)

code * FUN_14819f74e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumFilteredBones";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000072;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464722e6;
}



// FUNCTION 14819f7d8 FUN_14819f7d8 body=138 status=ok
// SIG undefined FUN_14819f7d8(void)

code * FUN_14819f7d8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoneWeightSizeBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000070;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f862;
}



// FUNCTION 14819f862 FUN_14819f862 body=138 status=ok
// SIG undefined FUN_14819f862(void)

code * FUN_14819f862(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoneIndexSizeBytes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c0000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f8ec;
}



// FUNCTION 14819f8ec FUN_14819f8ec body=138 status=ok
// SIG undefined FUN_14819f8ec(void)

code * FUN_14819f8ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshBoneWeightStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x980000006e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819f976;
}



// FUNCTION 14819f976 FUN_14819f976 body=138 status=ok
// SIG undefined FUN_14819f976(void)

code * FUN_14819f976(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshNumWeights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x940000006d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fa00;
}



// FUNCTION 14819fa00 FUN_14819fa00 body=138 status=ok
// SIG undefined FUN_14819fa00(void)

code * FUN_14819fa00(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshNumTexCoord";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x900000006c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fa8a;
}



// FUNCTION 14819fa8a FUN_14819fa8a body=138 status=ok
// SIG undefined FUN_14819fa8a(void)

code * FUN_14819fa8a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshVertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8c0000006b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fb14;
}



// FUNCTION 14819fb14 FUN_14819fb14 body=138 status=ok
// SIG undefined FUN_14819fb14(void)

code * FUN_14819fb14(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTriangleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fb9e;
}



// FUNCTION 14819fb9e FUN_14819fb9e body=138 status=ok
// SIG undefined FUN_14819fb9e(void)

code * FUN_14819fb9e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTriangleMatricesOffsetBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fc28;
}



// FUNCTION 14819fc28 FUN_14819fc28 body=138 status=ok
// SIG undefined FUN_14819fc28(void)

code * FUN_14819fc28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSampleRegionsVertices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fcb2;
}



// FUNCTION 14819fcb2 FUN_14819fcb2 body=138 status=ok
// SIG undefined FUN_14819fcb2(void)

code * FUN_14819fcb2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSampleRegionsTriangleIndices";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fd3c;
}



// FUNCTION 14819fd3c FUN_14819fd3c body=138 status=ok
// SIG undefined FUN_14819fd3c(void)

code * FUN_14819fd3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSamplingRegionsProbAliasBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fdc6;
}



// FUNCTION 14819fdc6 FUN_14819fdc6 body=138 status=ok
// SIG undefined FUN_14819fdc6(void)

code * FUN_14819fdc6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshNumSamplingRegionVertices";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819fe50;
}



// FUNCTION 14819fe50 FUN_14819fe50 body=138 status=ok
// SIG undefined FUN_14819fe50(void)

code * FUN_14819fe50(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshNumSamplingRegionTriangles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819feda;
}



// FUNCTION 14819feda FUN_14819feda body=138 status=ok
// SIG undefined FUN_14819feda(void)

code * FUN_14819feda(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTriangleSamplerProbAliasBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819ff64;
}



// FUNCTION 14819ff64 FUN_14819ff64 body=138 status=ok
// SIG undefined FUN_14819ff64(void)

code * FUN_14819ff64(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshColorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14819ffee;
}



// FUNCTION 14819ffee FUN_14819ffee body=138 status=ok
// SIG undefined FUN_14819ffee(void)

code * FUN_14819ffee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTexCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a0078;
}



// FUNCTION 1481a0078 FUN_1481a0078 body=138 status=ok
// SIG undefined FUN_1481a0078(void)

code * FUN_1481a0078(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000060;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a0102;
}



// FUNCTION 1481a0102 FUN_1481a0102 body=138 status=ok
// SIG undefined FUN_1481a0102(void)

code * FUN_1481a0102(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshPrevSamplingBonesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a018c;
}



// FUNCTION 1481a018c FUN_1481a018c body=138 status=ok
// SIG undefined FUN_1481a018c(void)

code * FUN_1481a018c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshCurrSamplingBonesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000005e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a0216;
}



// FUNCTION 1481a0216 FUN_1481a0216 body=138 status=ok
// SIG undefined FUN_1481a0216(void)

code * FUN_1481a0216(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshPrevBonesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000005d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a02a0;
}



// FUNCTION 1481a02a0 FUN_1481a02a0 body=138 status=ok
// SIG undefined FUN_1481a02a0(void)

code * FUN_1481a02a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshCurrBonesBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000005c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a032a;
}



// FUNCTION 1481a032a FUN_1481a032a body=138 status=ok
// SIG undefined FUN_1481a032a(void)

code * FUN_1481a032a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSkinWeightLookupBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000005b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a03b4;
}



// FUNCTION 1481a03b4 FUN_1481a03b4 body=138 status=ok
// SIG undefined FUN_1481a03b4(void)

code * FUN_1481a03b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshSkinWeightBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000005a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a043e;
}



// FUNCTION 1481a043e FUN_1481a043e body=138 status=ok
// SIG undefined FUN_1481a043e(void)

code * FUN_1481a043e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshVertexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000059;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a04c8;
}



// FUNCTION 1481a04c8 FUN_1481a04c8 body=132 status=ok
// SIG undefined FUN_1481a04c8(void)

undefined1 * FUN_1481a04c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshIndexBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1481a054c;
}



// FUNCTION 1481a0550 FUN_1481a0550 body=126 status=ok
// SIG undefined FUN_1481a0550(void)

void FUN_1481a0550(ulonglong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14746fa8e(param_1);
    }
    uVar2 = *param_1;
    uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
    if ((uVar2 & 1) == 0) {
      uVar3 = uVar2;
    }
    memset((void *)(uVar3 + (longlong)iVar1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_14746fb0c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481a05d0 FUN_1481a05d0 body=146 status=ok
// SIG undefined FUN_1481a05d0(void)

longlong FUN_1481a05d0(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = FUN_1481a0664();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_1481a060f;
  }
  local_40 = param_3;
  local_38 = param_4;
  FUN_1481a06e4(param_1,&local_2c,param_2);
  lVar2 = (longlong)local_2c;
  lVar3 = *param_1;
LAB_1481a060f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x18 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a0664 FUN_1481a0664 body=128 status=ok
// SIG undefined FUN_1481a0664(void)

int FUN_1481a0664(longlong *param_1,uint param_2,float *param_3)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar6 = (longlong)iVar3;
        fVar2 = *(float *)(lVar4 + lVar6 * 0x18);
        if ((fVar2 == *param_3) && (!NAN(fVar2) && !NAN(*param_3))) {
          lVar1 = lVar4 + lVar6 * 0x18;
          fVar2 = *(float *)(lVar1 + 4);
          if ((fVar2 == param_3[1]) && (!NAN(fVar2) && !NAN(param_3[1]))) {
            fVar2 = *(float *)(lVar1 + 8);
            if ((fVar2 == param_3[2]) && (!NAN(fVar2) && !NAN(param_3[2]))) {
              return iVar3;
            }
          }
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1481a06e4 FUN_1481a06e4 body=285 status=ok
// SIG undefined FUN_1481a06e4(void)

undefined4 * FUN_1481a06e4(longlong param_1,undefined4 *param_2,uint param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481a0802(param_1,local_48);
  puVar1 = (undefined8 *)*param_4;
  puVar2 = (undefined4 *)param_4[1];
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *local_40 = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = *puVar2;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  cVar3 = FUN_1481a08e8(param_1,param_3,local_40,local_48);
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x14) = param_3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1481a09ae(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a0802 FUN_1481a0802 body=230 status=ok
// SIG undefined FUN_1481a0802(void)

int * FUN_1481a0802(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 1481a08e8 FUN_1481a08e8 body=84 status=ok
// SIG undefined FUN_1481a08e8(void)

undefined8 FUN_1481a08e8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_1481a0664(), iVar5 != -1)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar5 * 0x18);
    *puVar1 = *param_3;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
    puVar1[3] = uVar4;
    FUN_1481a093c(param_1,*param_4);
    *param_4 = iVar5;
    return 1;
  }
  return 0;
}



// FUNCTION 1481a093c FUN_1481a093c body=114 status=ok
// SIG undefined FUN_1481a093c(void)

void FUN_1481a093c(longlong *param_1,int param_2)

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



// FUNCTION 1481a09ae FUN_1481a09ae body=446 status=ok
// SIG undefined FUN_1481a09ae(void)

void FUN_1481a09ae(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
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
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
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
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x18;
        iVar6 = FUN_1448eb174(lVar2,0xc,0);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x14) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a0b6e FUN_1481a0b6e body=52 status=ok
// SIG undefined FUN_1481a0b6e(void)

void FUN_1481a0b6e(longlong *param_1)

{
  FUN_1481a0ba2();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1481a0ba2 FUN_1481a0ba2 body=89 status=ok
// SIG undefined FUN_1481a0ba2(void)

void FUN_1481a0ba2(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405357e8(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1481a0bfc FUN_1481a0bfc body=29 status=ok
// SIG undefined FUN_1481a0bfc(void)

undefined8 FUN_1481a0bfc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a0c34 FUN_1481a0c34 body=29 status=ok
// SIG undefined FUN_1481a0c34(void)

bool FUN_1481a0c34(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1481a0c52 FUN_1481a0c52 body=26 status=ok
// SIG undefined FUN_1481a0c52(void)

bool FUN_1481a0c52(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1481a0c6c FUN_1481a0c6c body=24 status=ok
// SIG undefined FUN_1481a0c6c(void)

bool FUN_1481a0c6c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1481a0c84 FUN_1481a0c84 body=93 status=ok
// SIG undefined FUN_1481a0c84(void)

void FUN_1481a0c84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addde40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481a0ce2 FUN_1481a0ce2 body=93 status=ok
// SIG undefined FUN_1481a0ce2(void)

void FUN_1481a0ce2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14addde40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1481a0d40 FUN_1481a0d40 body=126 status=ok
// SIG undefined FUN_1481a0d40(void)

void FUN_1481a0d40(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14addde40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a0daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a0dbe FUN_1481a0dbe body=40 status=ok
// SIG undefined FUN_1481a0dbe(void)

void FUN_1481a0dbe(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481a0de3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1481a0de6 FUN_1481a0de6 body=140 status=ok
// SIG undefined FUN_1481a0de6(void)

bool FUN_1481a0de6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a0e74 FUN_1481a0e74 body=106 status=ok
// SIG undefined FUN_1481a0e74(void)

void FUN_1481a0e74(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == param_2) {
          FUN_1481a0ede(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481a0ede FUN_1481a0ede body=95 status=ok
// SIG undefined FUN_1481a0ede(void)

void FUN_1481a0ede(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_1481a0f3e();
  return;
}



// FUNCTION 1481a0f3e FUN_1481a0f3e body=122 status=ok
// SIG undefined FUN_1481a0f3e(void)

void FUN_1481a0f3e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 1481a0fb8 FUN_1481a0fb8 body=188 status=ok
// SIG undefined FUN_1481a0fb8(void)

longlong FUN_1481a0fb8(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x30;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == *param_3) {
          if (lVar3 != 0) goto LAB_1481a1057;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1481a1076(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x30 + *param_1;
LAB_1481a1057:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1481a1076 FUN_1481a1076 body=302 status=ok
// SIG undefined FUN_1481a1076(void)

undefined4 * FUN_1481a1076(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481a11a6(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = DAT_14c9a5298;
  *(undefined4 *)(local_40 + 3) = DAT_14c9a52a0;
  *(uint *)((longlong)local_40 + 0x1c) = 0;
  *(uint *)(local_40 + 4) = 0;
  *(uint *)((longlong)local_40 + 0x24) = 0;
  *(uint *)(local_40 + 5) = 0xffffffff;
  cVar1 = FUN_1481a1294(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x2c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1481a132c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a11a6 FUN_1481a11a6 body=238 status=ok
// SIG undefined FUN_1481a11a6(void)

int * FUN_1481a11a6(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1481a1294 FUN_1481a1294 body=151 status=ok
// SIG undefined FUN_1481a1294(void)

undefined8 FUN_1481a1294(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_1481a0f3e((int)lVar6,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481a132c FUN_1481a132c body=451 status=ok
// SIG undefined FUN_1481a132c(void)

void FUN_1481a132c(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x30;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
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



// FUNCTION 1481a14f0 FUN_1481a14f0 body=151 status=ok
// SIG undefined FUN_1481a14f0(void)

void FUN_1481a14f0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(uint *)(param_1 + 2) = (int)param_1[2] + 0xfU & 0xfffffff0;
  FUN_1481a1588();
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
  }
  lVar2 = *param_1;
  lVar4 = (longlong)iVar1 * 0x30;
  lVar3 = param_1[2];
  *(undefined8 *)(lVar2 + lVar4) = param_2;
  *(undefined2 **)(lVar2 + 8 + lVar4) = &DAT_149dfb77a;
  *(undefined4 *)(lVar2 + 0x10 + lVar4) = 0x7b;
  *(int *)(lVar2 + 0x14 + lVar4) = (int)lVar3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar4) = &DAT_14cb3d720;
  *(int *)(param_1 + 2) = (int)param_1[2] + 0x60;
  return;
}



// FUNCTION 1481a1588 FUN_1481a1588 body=258 status=ok
// SIG undefined FUN_1481a1588(void)

void FUN_1481a1588(void)

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
              0x110) < DAT_14cb3d7a0) {
    FUN_144b3d300(&DAT_14cb3d7a0);
    if (DAT_14cb3d7a0 == -1) {
      FUN_1481a168c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb3d720,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a70f02);
      _Init_thread_footer(&DAT_14cb3d7a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a168c FUN_1481a168c body=226 status=ok
// SIG undefined FUN_1481a168c(void)

longlong * FUN_1481a168c(longlong *param_1)

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
  pcVar13 = FUN_1481a1770;
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



// FUNCTION 1481a1770 FUN_1481a1770 body=136 status=ok
// SIG undefined FUN_1481a1770(void)

code * FUN_1481a1770(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumFrames";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a17f8;
}



// FUNCTION 1481a17f8 FUN_1481a17f8 body=136 status=ok
// SIG undefined FUN_1481a17f8(void)

code * FUN_1481a17f8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipLevels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c0000001a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1880;
}



// FUNCTION 1481a1880 FUN_1481a1880 body=136 status=ok
// SIG undefined FUN_1481a1880(void)

code * FUN_1481a1880(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000019;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1908;
}



// FUNCTION 1481a1908 FUN_1481a1908 body=136 status=ok
// SIG undefined FUN_1481a1908(void)

code * FUN_1481a1908(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedUniforms1";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1990;
}



// FUNCTION 1481a1990 FUN_1481a1990 body=136 status=ok
// SIG undefined FUN_1481a1990(void)

code * FUN_1481a1990(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PackedUniforms0";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000017;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1a18;
}



// FUNCTION 1481a1a18 FUN_1481a1a18 body=136 status=ok
// SIG undefined FUN_1481a1a18(void)

code * FUN_1481a1a18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalTileDataBTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000016;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1aa0;
}



// FUNCTION 1481a1aa0 FUN_1481a1aa0 body=136 status=ok
// SIG undefined FUN_1481a1aa0(void)

code * FUN_1481a1aa0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PhysicalTileDataATexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1b28;
}



// FUNCTION 1481a1b28 FUN_1481a1b28 body=136 status=ok
// SIG undefined FUN_1481a1b28(void)

code * FUN_1481a1b28(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000014;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1481a1bb0;
}



// FUNCTION 1481a1bb0 FUN_1481a1bb0 body=130 status=ok
// SIG undefined FUN_1481a1bb0(void)

undefined1 * FUN_1481a1bb0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1481a1c32;
}



// FUNCTION 1481a1dce FUN_1481a1dce body=29 status=ok
// SIG undefined FUN_1481a1dce(void)

undefined8 FUN_1481a1dce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a1e00 FUN_1481a1e00 body=93 status=ok
// SIG undefined FUN_1481a1e00(void)

void FUN_1481a1e00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a1e5e FUN_1481a1e5e body=93 status=ok
// SIG undefined FUN_1481a1e5e(void)

void FUN_1481a1e5e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a1ebc FUN_1481a1ebc body=126 status=ok
// SIG undefined FUN_1481a1ebc(void)

void FUN_1481a1ebc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a1f2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a1f42 FUN_1481a1f42 body=19 status=ok
// SIG undefined FUN_1481a1f42(void)

undefined1 FUN_1481a1f42(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a1f56(param_2);
  return 1;
}



// FUNCTION 1481a1f56 FUN_1481a1f56 body=503 status=ok
// SIG undefined FUN_1481a1f56(void)

void FUN_1481a1f56(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_68 = 0.0;
        *local_78 = 0.0;
        *local_88 = 0.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_14819316a(local_48,&local_a0,local_54 * fVar1);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a214e FUN_1481a214e body=137 status=ok
// SIG undefined FUN_1481a214e(void)

void FUN_1481a214e(undefined4 *param_1,char *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  
  if (*param_2 == '\x01') {
    iVar8 = *(int *)(param_2 + 0x30);
    bVar1 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar8);
    *(int *)(param_2 + 0x30) = iVar8 + 1;
    puVar6 = (undefined4 *)
             ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar1 * 4 +
             *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar8 * 8));
  }
  else {
    puVar3 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar2 = *puVar3;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar3 + 1;
    uVar5 = uVar2 & 0x7fff;
    piVar4 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar8 = *piVar4;
    lVar7 = 0;
    if (iVar8 <= (int)uVar5) {
      do {
        uVar5 = uVar5 - iVar8;
        iVar8 = piVar4[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar8 <= (int)uVar5);
    }
    puVar6 = (undefined4 *)
             ((longlong)(int)uVar5 +
             *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8));
  }
  *param_1 = *puVar6;
  return;
}



// FUNCTION 1481a21d8 FUN_1481a21d8 body=29 status=ok
// SIG undefined FUN_1481a21d8(void)

undefined8 FUN_1481a21d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a220a FUN_1481a220a body=93 status=ok
// SIG undefined FUN_1481a220a(void)

void FUN_1481a220a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a2268 FUN_1481a2268 body=93 status=ok
// SIG undefined FUN_1481a2268(void)

void FUN_1481a2268(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a22c6 FUN_1481a22c6 body=126 status=ok
// SIG undefined FUN_1481a22c6(void)

void FUN_1481a22c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde0e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a2335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a234c FUN_1481a234c body=19 status=ok
// SIG undefined FUN_1481a234c(void)

undefined1 FUN_1481a234c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a2360(param_2);
  return 1;
}



// FUNCTION 1481a2360 FUN_1481a2360 body=542 status=ok
// SIG undefined FUN_1481a2360(void)

void FUN_1481a2360(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_70 = 0.0;
        *local_80 = 0.0;
        *local_90 = 0.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_14819316a(local_48,&local_a8,*local_60 * fVar1);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a2718 FUN_1481a2718 body=29 status=ok
// SIG undefined FUN_1481a2718(void)

undefined8 FUN_1481a2718(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a274a FUN_1481a274a body=93 status=ok
// SIG undefined FUN_1481a274a(void)

void FUN_1481a274a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a27a8 FUN_1481a27a8 body=93 status=ok
// SIG undefined FUN_1481a27a8(void)

void FUN_1481a27a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a2806 FUN_1481a2806 body=126 status=ok
// SIG undefined FUN_1481a2806(void)

void FUN_1481a2806(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde150;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a2875. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a288c FUN_1481a288c body=19 status=ok
// SIG undefined FUN_1481a288c(void)

undefined1 FUN_1481a288c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a28a0(param_2);
  return 1;
}



// FUNCTION 1481a28a0 FUN_1481a28a0 body=562 status=ok
// SIG undefined FUN_1481a28a0(void)

void FUN_1481a28a0(char *param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  double local_a8;
  double local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float local_64;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_60,param_1);
  FUN_1481a214e(&local_64,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_98);
  cVar2 = FUN_144729dda(local_58);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_78 = 0.0;
        *local_88 = 0.0;
        *local_98 = 0.0;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    fVar5 = (float)FUN_147a27760(local_58 + 0x200);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        lVar1 = local_58;
        local_b0 = 0;
        uVar6 = FUN_140753fde(local_58 + 0x248,local_64 * fVar5,&local_b0);
        FUN_140703ce0(lVar1 + 0x200,&local_b0,uVar6,&DAT_14c8464e0);
        *local_78 = (float)(double)CONCAT44(uStack_ac,local_b0);
        *local_88 = (float)local_a8;
        *local_98 = (float)local_a0;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a2ad4 FUN_1481a2ad4 body=29 status=ok
// SIG undefined FUN_1481a2ad4(void)

undefined8 FUN_1481a2ad4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a2b06 FUN_1481a2b06 body=93 status=ok
// SIG undefined FUN_1481a2b06(void)

void FUN_1481a2b06(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a2b64 FUN_1481a2b64 body=93 status=ok
// SIG undefined FUN_1481a2b64(void)

void FUN_1481a2b64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a2bc2 FUN_1481a2bc2 body=126 status=ok
// SIG undefined FUN_1481a2bc2(void)

void FUN_1481a2bc2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a2c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a2c48 FUN_1481a2c48 body=19 status=ok
// SIG undefined FUN_1481a2c48(void)

undefined1 FUN_1481a2c48(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a2c5c(param_2);
  return 1;
}



// FUNCTION 1481a2c5c FUN_1481a2c5c body=601 status=ok
// SIG undefined FUN_1481a2c5c(void)

void FUN_1481a2c5c(char *param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  double local_b0;
  double local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0);
  cVar2 = FUN_144729dda(local_58);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_80 = 0.0;
        *local_90 = 0.0;
        *local_a0 = 0.0;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    fVar5 = (float)FUN_147a27760(local_58 + 0x200);
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        lVar1 = local_58;
        local_b8 = 0;
        uVar6 = FUN_140753fde(local_58 + 0x248,*local_70 * fVar5,&local_b8);
        FUN_140703ce0(lVar1 + 0x200,&local_b8,uVar6,&DAT_14c8464e0);
        *local_80 = (float)(double)CONCAT44(uStack_b4,local_b8);
        *local_90 = (float)local_b0;
        *local_a0 = (float)local_a8;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a304e FUN_1481a304e body=29 status=ok
// SIG undefined FUN_1481a304e(void)

undefined8 FUN_1481a304e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a3080 FUN_1481a3080 body=93 status=ok
// SIG undefined FUN_1481a3080(void)

void FUN_1481a3080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a30de FUN_1481a30de body=93 status=ok
// SIG undefined FUN_1481a30de(void)

void FUN_1481a30de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a313c FUN_1481a313c body=126 status=ok
// SIG undefined FUN_1481a313c(void)

void FUN_1481a313c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a31ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a31c2 FUN_1481a31c2 body=19 status=ok
// SIG undefined FUN_1481a31c2(void)

undefined1 FUN_1481a31c2(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a31d6(param_2);
  return 1;
}



// FUNCTION 1481a31d6 FUN_1481a31d6 body=828 status=ok
// SIG undefined FUN_1481a31d6(void)

void FUN_1481a31d6(char *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_e8 [40];
  double local_c0;
  double local_b8;
  double local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float local_74;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481938a0(local_70,param_1);
  FUN_1481a214e(&local_74,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_a8,param_1);
  cVar10 = FUN_144729dda(local_68);
  if (cVar10 == '\0') {
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar12 = 0;
      do {
        dVar6 = *(double *)(local_68 + 0x78);
        dVar7 = *(double *)(local_68 + 0x98);
        dVar8 = *(double *)(local_68 + 0xb8);
        dVar9 = *(double *)(local_68 + 0xd8);
        dVar2 = *(double *)(local_68 + 0xc0);
        dVar3 = *(double *)(local_68 + 0xa0);
        dVar4 = *(double *)(local_68 + 0x80);
        dVar5 = *(double *)(local_68 + 0xe0);
        *local_88 = (float)(*(double *)(local_68 + 0xb0) * 0.0 +
                            *(double *)(local_68 + 0x90) * 0.0 + *(double *)(local_68 + 0x70) * 0.0
                           + *(double *)(local_68 + 0xd0));
        *local_98 = (float)(dVar8 * 0.0 + dVar7 * 0.0 + dVar6 * 0.0 + dVar9);
        *local_a8 = (float)(dVar4 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0 + dVar5);
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        local_a8 = local_a8 + local_a0;
        iVar12 = iVar12 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
      } while (iVar12 < *piVar11);
    }
  }
  else {
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      fVar1 = *(float *)(local_68 + 0x298);
      iVar12 = 0;
      do {
        FUN_14819316a(local_68,&local_c0,local_74 * fVar1);
        dVar6 = *(double *)(local_68 + 0x78);
        dVar7 = *(double *)(local_68 + 0x98);
        dVar8 = *(double *)(local_68 + 0xb8);
        dVar9 = *(double *)(local_68 + 0xd8);
        dVar2 = *(double *)(local_68 + 0xc0);
        dVar3 = *(double *)(local_68 + 0xa0);
        dVar4 = *(double *)(local_68 + 0x80);
        dVar5 = *(double *)(local_68 + 0xe0);
        *local_88 = (float)(local_b0 * *(double *)(local_68 + 0xb0) +
                            local_b8 * *(double *)(local_68 + 0x90) +
                            local_c0 * *(double *)(local_68 + 0x70) + *(double *)(local_68 + 0xd0));
        *local_98 = (float)(local_b0 * dVar8 + local_b8 * dVar7 + local_c0 * dVar6 + dVar9);
        *local_a8 = (float)(local_c0 * dVar4 + local_b8 * dVar3 + local_b0 * dVar2 + dVar5);
        local_88 = local_88 + local_80;
        local_98 = local_98 + local_90;
        local_a8 = local_a8 + local_a0;
        iVar12 = iVar12 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
      } while (iVar12 < *piVar11);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a3514 FUN_1481a3514 body=29 status=ok
// SIG undefined FUN_1481a3514(void)

undefined8 FUN_1481a3514(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a3546 FUN_1481a3546 body=93 status=ok
// SIG undefined FUN_1481a3546(void)

void FUN_1481a3546(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a35a4 FUN_1481a35a4 body=93 status=ok
// SIG undefined FUN_1481a35a4(void)

void FUN_1481a35a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a3602 FUN_1481a3602 body=126 status=ok
// SIG undefined FUN_1481a3602(void)

void FUN_1481a3602(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a3671. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a3688 FUN_1481a3688 body=19 status=ok
// SIG undefined FUN_1481a3688(void)

undefined1 FUN_1481a3688(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a369c(param_2);
  return 1;
}



// FUNCTION 1481a369c FUN_1481a369c body=866 status=ok
// SIG undefined FUN_1481a369c(void)

void FUN_1481a369c(char *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int *piVar11;
  int iVar12;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481938a0(local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_b0,param_1);
  cVar10 = FUN_144729dda(local_68);
  if (cVar10 == '\0') {
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      iVar12 = 0;
      do {
        dVar6 = *(double *)(local_68 + 0x78);
        dVar7 = *(double *)(local_68 + 0x98);
        dVar8 = *(double *)(local_68 + 0xb8);
        dVar9 = *(double *)(local_68 + 0xd8);
        dVar2 = *(double *)(local_68 + 0xc0);
        dVar3 = *(double *)(local_68 + 0xa0);
        dVar4 = *(double *)(local_68 + 0x80);
        dVar5 = *(double *)(local_68 + 0xe0);
        *local_90 = (float)(*(double *)(local_68 + 0xb0) * 0.0 +
                            *(double *)(local_68 + 0x90) * 0.0 + *(double *)(local_68 + 0x70) * 0.0
                           + *(double *)(local_68 + 0xd0));
        *local_a0 = (float)(dVar8 * 0.0 + dVar7 * 0.0 + dVar6 * 0.0 + dVar9);
        *local_b0 = (float)(dVar4 * 0.0 + dVar3 * 0.0 + dVar2 * 0.0 + dVar5);
        local_90 = local_90 + local_88;
        local_80 = local_80 + local_78;
        local_a0 = local_a0 + local_98;
        local_b0 = local_b0 + local_a8;
        iVar12 = iVar12 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
      } while (iVar12 < *piVar11);
    }
  }
  else {
    piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar11 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar11) {
      fVar1 = *(float *)(local_68 + 0x298);
      iVar12 = 0;
      do {
        FUN_14819316a(local_68,&local_c8,*local_80 * fVar1);
        dVar6 = *(double *)(local_68 + 0x78);
        dVar7 = *(double *)(local_68 + 0x98);
        dVar8 = *(double *)(local_68 + 0xb8);
        dVar2 = *(double *)(local_68 + 0xc0);
        dVar9 = *(double *)(local_68 + 0xd8);
        dVar3 = *(double *)(local_68 + 0xa0);
        dVar4 = *(double *)(local_68 + 0x80);
        dVar5 = *(double *)(local_68 + 0xe0);
        *local_90 = (float)(local_b8 * *(double *)(local_68 + 0xb0) +
                            local_c0 * *(double *)(local_68 + 0x90) +
                            local_c8 * *(double *)(local_68 + 0x70) + *(double *)(local_68 + 0xd0));
        *local_a0 = (float)(local_b8 * dVar8 + local_c0 * dVar7 + local_c8 * dVar6 + dVar9);
        *local_b0 = (float)(local_c8 * dVar4 + local_c0 * dVar3 + local_b8 * dVar2 + dVar5);
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        local_b0 = local_b0 + local_a8;
        iVar12 = iVar12 + 1;
        piVar11 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar11 = (int *)(param_1 + 0x3c);
        }
      } while (iVar12 < *piVar11);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a3b98 FUN_1481a3b98 body=29 status=ok
// SIG undefined FUN_1481a3b98(void)

undefined8 FUN_1481a3b98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a3bca FUN_1481a3bca body=93 status=ok
// SIG undefined FUN_1481a3bca(void)

void FUN_1481a3bca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a3c28 FUN_1481a3c28 body=93 status=ok
// SIG undefined FUN_1481a3c28(void)

void FUN_1481a3c28(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a3c86 FUN_1481a3c86 body=126 status=ok
// SIG undefined FUN_1481a3c86(void)

void FUN_1481a3c86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a3cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a3d0c FUN_1481a3d0c body=19 status=ok
// SIG undefined FUN_1481a3d0c(void)

undefined1 FUN_1481a3d0c(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a3d20(param_2);
  return 1;
}



// FUNCTION 1481a3d20 FUN_1481a3d20 body=911 status=ok
// SIG undefined FUN_1481a3d20(void)

void FUN_1481a3d20(char *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  float *local_b8;
  int local_b0;
  float *local_a8;
  int local_a0;
  float *local_98;
  int local_90;
  float local_84;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1481938a0(local_80,param_1);
  FUN_1481a214e(&local_84,param_1);
  FUN_144a76c20(&local_98,param_1);
  FUN_144a76c20(&local_a8,param_1);
  FUN_144a76c20(&local_b8,param_1);
  cVar8 = FUN_144729dda(local_78);
  if (cVar8 == '\0') {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        dVar3 = *(double *)(local_78 + 0x78);
        dVar4 = *(double *)(local_78 + 0x98);
        dVar5 = *(double *)(local_78 + 0xb8);
        dVar6 = *(double *)(local_78 + 0xd8);
        dVar2 = *(double *)(local_78 + 0xc0);
        dVar13 = *(double *)(local_78 + 0xa0);
        dVar14 = *(double *)(local_78 + 0x80);
        dVar1 = *(double *)(local_78 + 0xe0);
        *local_98 = (float)(*(double *)(local_78 + 0xb0) * 0.0 +
                            *(double *)(local_78 + 0x90) * 0.0 + *(double *)(local_78 + 0x70) * 0.0
                           + *(double *)(local_78 + 0xd0));
        *local_a8 = (float)(dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar6);
        *local_b8 = (float)(dVar14 * 0.0 + dVar13 * 0.0 + dVar2 * 0.0 + dVar1);
        local_98 = local_98 + local_90;
        local_a8 = local_a8 + local_a0;
        local_b8 = local_b8 + local_b0;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
      } while (iVar10 < *piVar9);
    }
  }
  else {
    fVar11 = (float)FUN_147a27760(local_78 + 0x200);
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        lVar7 = local_78;
        local_d0 = (double)((ulonglong)local_d0 & 0xffffffff00000000);
        uVar12 = FUN_140753fde(local_78 + 0x248,local_84 * fVar11,&local_d0);
        FUN_140703ce0(lVar7 + 0x200,&local_d0,uVar12,&DAT_14c8464e0);
        dVar2 = local_d0 * *(double *)(local_78 + 0x78);
        dVar13 = local_c0 * *(double *)(local_78 + 0xb0);
        dVar14 = local_c0 * *(double *)(local_78 + 0xb8);
        local_c0 = local_d0 * *(double *)(local_78 + 0x80) + local_c8 * *(double *)(local_78 + 0xa0)
                   + local_c0 * *(double *)(local_78 + 0xc0) + *(double *)(local_78 + 0xe0);
        local_d0 = dVar13 + local_c8 * *(double *)(local_78 + 0x90) +
                            local_d0 * *(double *)(local_78 + 0x70) + *(double *)(local_78 + 0xd0);
        local_c8 = dVar14 + local_c8 * *(double *)(local_78 + 0x98) + dVar2 +
                   *(double *)(local_78 + 0xd8);
        *local_98 = (float)local_d0;
        *local_a8 = (float)local_c8;
        *local_b8 = (float)local_c0;
        local_98 = local_98 + local_90;
        local_a8 = local_a8 + local_a0;
        local_b8 = local_b8 + local_b0;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
      } while (iVar10 < *piVar9);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a40b0 FUN_1481a40b0 body=29 status=ok
// SIG undefined FUN_1481a40b0(void)

undefined8 FUN_1481a40b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a40e2 FUN_1481a40e2 body=93 status=ok
// SIG undefined FUN_1481a40e2(void)

void FUN_1481a40e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a4140 FUN_1481a4140 body=93 status=ok
// SIG undefined FUN_1481a4140(void)

void FUN_1481a4140(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a419e FUN_1481a419e body=126 status=ok
// SIG undefined FUN_1481a419e(void)

void FUN_1481a419e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a420d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a4224 FUN_1481a4224 body=19 status=ok
// SIG undefined FUN_1481a4224(void)

undefined1 FUN_1481a4224(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a4238(param_2);
  return 1;
}



// FUNCTION 1481a4238 FUN_1481a4238 body=947 status=ok
// SIG undefined FUN_1481a4238(void)

void FUN_1481a4238(char *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  float *local_c0;
  int local_b8;
  float *local_b0;
  int local_a8;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  undefined1 local_80 [8];
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1481938a0(local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  FUN_144a76c20(&local_b0,param_1);
  FUN_144a76c20(&local_c0,param_1);
  cVar8 = FUN_144729dda(local_78);
  if (cVar8 == '\0') {
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        dVar3 = *(double *)(local_78 + 0x78);
        dVar4 = *(double *)(local_78 + 0x98);
        dVar5 = *(double *)(local_78 + 0xb8);
        dVar6 = *(double *)(local_78 + 0xd8);
        dVar2 = *(double *)(local_78 + 0xc0);
        dVar13 = *(double *)(local_78 + 0xa0);
        dVar14 = *(double *)(local_78 + 0x80);
        dVar1 = *(double *)(local_78 + 0xe0);
        *local_a0 = (float)(*(double *)(local_78 + 0xb0) * 0.0 +
                            *(double *)(local_78 + 0x90) * 0.0 + *(double *)(local_78 + 0x70) * 0.0
                           + *(double *)(local_78 + 0xd0));
        *local_b0 = (float)(dVar5 * 0.0 + dVar4 * 0.0 + dVar3 * 0.0 + dVar6);
        *local_c0 = (float)(dVar14 * 0.0 + dVar13 * 0.0 + dVar2 * 0.0 + dVar1);
        local_a0 = local_a0 + local_98;
        local_90 = local_90 + local_88;
        local_b0 = local_b0 + local_a8;
        local_c0 = local_c0 + local_b8;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
      } while (iVar10 < *piVar9);
    }
  }
  else {
    fVar11 = (float)FUN_147a27760(local_78 + 0x200);
    piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar9 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar9) {
      iVar10 = 0;
      do {
        lVar7 = local_78;
        local_d8 = (double)((ulonglong)local_d8 & 0xffffffff00000000);
        uVar12 = FUN_140753fde(local_78 + 0x248,*local_90 * fVar11,&local_d8);
        FUN_140703ce0(lVar7 + 0x200,&local_d8,uVar12,&DAT_14c8464e0);
        dVar2 = local_d8 * *(double *)(local_78 + 0x78);
        dVar13 = local_c8 * *(double *)(local_78 + 0xb0);
        dVar14 = local_c8 * *(double *)(local_78 + 0xb8);
        local_c8 = local_d8 * *(double *)(local_78 + 0x80) + local_d0 * *(double *)(local_78 + 0xa0)
                   + local_c8 * *(double *)(local_78 + 0xc0) + *(double *)(local_78 + 0xe0);
        local_d8 = dVar13 + local_d0 * *(double *)(local_78 + 0x90) +
                            local_d8 * *(double *)(local_78 + 0x70) + *(double *)(local_78 + 0xd0);
        local_d0 = dVar14 + local_d0 * *(double *)(local_78 + 0x98) + dVar2 +
                   *(double *)(local_78 + 0xd8);
        *local_a0 = (float)local_d8;
        *local_b0 = (float)local_d0;
        *local_c0 = (float)local_c8;
        local_90 = local_90 + local_88;
        local_a0 = local_a0 + local_98;
        local_b0 = local_b0 + local_a8;
        local_c0 = local_c0 + local_b8;
        iVar10 = iVar10 + 1;
        piVar9 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar9 = (int *)(param_1 + 0x3c);
        }
      } while (iVar10 < *piVar9);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a4784 FUN_1481a4784 body=29 status=ok
// SIG undefined FUN_1481a4784(void)

undefined8 FUN_1481a4784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a47b6 FUN_1481a47b6 body=93 status=ok
// SIG undefined FUN_1481a47b6(void)

void FUN_1481a47b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde3f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a4814 FUN_1481a4814 body=93 status=ok
// SIG undefined FUN_1481a4814(void)

void FUN_1481a4814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde3f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a4872 FUN_1481a4872 body=126 status=ok
// SIG undefined FUN_1481a4872(void)

void FUN_1481a4872(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde3f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a48e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a48f8 FUN_1481a48f8 body=19 status=ok
// SIG undefined FUN_1481a48f8(void)

undefined1 FUN_1481a48f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a490c(param_2);
  return 1;
}



// FUNCTION 1481a490c FUN_1481a490c body=618 status=ok
// SIG undefined FUN_1481a490c(void)

void FUN_1481a490c(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_98,param_1);
  cVar6 = FUN_144729dda(local_48);
  if (cVar6 == '\0') {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = 0;
      do {
        pfVar1 = local_68 + local_60;
        *local_68 = DAT_14c84633c._4_4_;
        pfVar2 = local_78 + local_70;
        *local_78 = DAT_14c846344;
        pfVar3 = local_88 + local_80;
        *local_88 = DAT_14c846348;
        pfVar4 = local_98 + local_90;
        *local_98 = DAT_14c84634c;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_98 = pfVar4;
        local_88 = pfVar3;
        local_78 = pfVar2;
        local_68 = pfVar1;
      } while (iVar8 < *piVar7);
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      fVar5 = *(float *)(local_48 + 0x298);
      iVar8 = 0;
      do {
        FUN_1481a4b78(local_48,&local_b8,local_54 * fVar5);
        pfVar1 = local_68 + local_60;
        *local_68 = (float)local_b8;
        pfVar2 = local_78 + local_70;
        *local_78 = (float)local_b0;
        pfVar3 = local_88 + local_80;
        *local_88 = (float)local_a8;
        pfVar4 = local_98 + local_90;
        *local_98 = (float)local_a0;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_98 = pfVar4;
        local_88 = pfVar3;
        local_78 = pfVar2;
        local_68 = pfVar1;
      } while (iVar8 < *piVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a4b78 FUN_1481a4b78 body=648 status=ok
// SIG undefined FUN_1481a4b78(void)

undefined8 FUN_1481a4b78(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_14819327a(param_1,&local_118);
  FUN_14819316a(param_1,&local_f8,param_3);
  dVar5 = local_e8 * local_e8 + local_f8 * local_f8 + dStack_f0 * dStack_f0;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (9.99999993922529e-09 <= dVar5) {
      local_138 = 1.0 / SQRT(dVar5);
      local_128 = local_e8 * local_138;
      dStack_130 = dStack_f0 * local_138;
      local_138 = local_f8 * local_138;
    }
    else {
      local_128 = DAT_14c8464f0;
      local_138 = DAT_14c8464e0;
      dStack_130 = DAT_14c8464e8;
    }
  }
  else {
    local_128 = local_e8;
    local_138 = local_f8;
    dStack_130 = dStack_f0;
  }
  dVar5 = *(double *)(param_1 + 0x1e8);
  dVar1 = *(double *)(param_1 + 0x1f0);
  dVar2 = *(double *)(param_1 + 0x1f8);
  dVar3 = local_110 * dVar2 - dVar1 * local_108;
  dVar3 = dVar3 + dVar3;
  dVar4 = local_118 * dVar1 - dVar5 * local_110;
  dVar4 = dVar4 + dVar4;
  dVar6 = local_108 * dVar5 - dVar2 * local_118;
  dVar6 = dVar6 + dVar6;
  local_140 = (local_118 * dVar6 - dVar3 * local_110) + local_100 * dVar4 + dVar2;
  local_148 = (local_108 * dVar3 - dVar4 * local_118) + local_100 * dVar6 + dVar1;
  local_150 = (local_110 * dVar4 - dVar6 * local_108) + dVar3 * local_100 + dVar5;
  FUN_14099e850(&local_f8,&local_138);
  FUN_141706d54(&local_f8,param_2);
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1481a4e02 FUN_1481a4e02 body=29 status=ok
// SIG undefined FUN_1481a4e02(void)

undefined8 FUN_1481a4e02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a4e34 FUN_1481a4e34 body=93 status=ok
// SIG undefined FUN_1481a4e34(void)

void FUN_1481a4e34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a4e92 FUN_1481a4e92 body=93 status=ok
// SIG undefined FUN_1481a4e92(void)

void FUN_1481a4e92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde460;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a4ef0 FUN_1481a4ef0 body=126 status=ok
// SIG undefined FUN_1481a4ef0(void)

void FUN_1481a4ef0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde460;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a4f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a4f76 FUN_1481a4f76 body=19 status=ok
// SIG undefined FUN_1481a4f76(void)

undefined1 FUN_1481a4f76(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a4f8a(param_2);
  return 1;
}



// FUNCTION 1481a4f8a FUN_1481a4f8a body=647 status=ok
// SIG undefined FUN_1481a4f8a(void)

void FUN_1481a4f8a(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  cVar7 = FUN_144729dda(local_48);
  if (cVar7 == '\0') {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar8 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar8) {
      iVar9 = 0;
      do {
        pfVar1 = local_70 + local_68;
        *local_70 = DAT_14c84633c._4_4_;
        pfVar2 = local_80 + local_78;
        *local_80 = DAT_14c846344;
        pfVar3 = local_90 + local_88;
        *local_90 = DAT_14c846348;
        pfVar4 = local_a0 + local_98;
        *local_a0 = DAT_14c84634c;
        iVar9 = iVar9 + 1;
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        local_a0 = pfVar4;
        local_90 = pfVar3;
        local_80 = pfVar2;
        local_70 = pfVar1;
      } while (iVar9 < *piVar8);
    }
  }
  else {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar8 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar8) {
      fVar5 = *(float *)(local_48 + 0x298);
      iVar9 = 0;
      do {
        fVar6 = *local_60;
        local_60 = local_60 + local_58;
        FUN_1481a4b78(local_48,&local_c8,fVar6 * fVar5);
        pfVar1 = local_70 + local_68;
        *local_70 = (float)local_c8;
        pfVar2 = local_80 + local_78;
        *local_80 = (float)local_c0;
        pfVar3 = local_90 + local_88;
        *local_90 = (float)local_b8;
        pfVar4 = local_a0 + local_98;
        *local_a0 = (float)local_b0;
        iVar9 = iVar9 + 1;
        piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar8 = (int *)(param_1 + 0x3c);
        }
        local_a0 = pfVar4;
        local_90 = pfVar3;
        local_80 = pfVar2;
        local_70 = pfVar1;
      } while (iVar9 < *piVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a53aa FUN_1481a53aa body=29 status=ok
// SIG undefined FUN_1481a53aa(void)

undefined8 FUN_1481a53aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a53dc FUN_1481a53dc body=93 status=ok
// SIG undefined FUN_1481a53dc(void)

void FUN_1481a53dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a543a FUN_1481a543a body=93 status=ok
// SIG undefined FUN_1481a543a(void)

void FUN_1481a543a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a5498 FUN_1481a5498 body=126 status=ok
// SIG undefined FUN_1481a5498(void)

void FUN_1481a5498(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde4d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a5507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a551e FUN_1481a551e body=19 status=ok
// SIG undefined FUN_1481a551e(void)

undefined1 FUN_1481a551e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a5532(param_2);
  return 1;
}



// FUNCTION 1481a5532 FUN_1481a5532 body=623 status=ok
// SIG undefined FUN_1481a5532(void)

void FUN_1481a5532(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  float *local_98;
  int local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88,param_1);
  FUN_144a76c20(&local_98,param_1);
  cVar5 = FUN_144729dda(local_48);
  if (cVar5 == '\0') {
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        pfVar1 = local_68 + local_60;
        *local_68 = DAT_14c84633c._4_4_;
        pfVar2 = local_78 + local_70;
        *local_78 = DAT_14c846344;
        pfVar3 = local_88 + local_80;
        *local_88 = DAT_14c846348;
        pfVar4 = local_98 + local_90;
        *local_98 = DAT_14c84634c;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = (int *)(param_1 + 0x3c);
        }
        local_98 = pfVar4;
        local_88 = pfVar3;
        local_78 = pfVar2;
        local_68 = pfVar1;
      } while (iVar7 < *piVar6);
    }
  }
  else {
    fVar8 = (float)FUN_147a27760(local_48 + 0x200);
    piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar6 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar6) {
      iVar7 = 0;
      do {
        FUN_1481a57a2(local_48,&local_b8,local_54 * fVar8);
        pfVar1 = local_68 + local_60;
        *local_68 = (float)local_b8;
        pfVar2 = local_78 + local_70;
        *local_78 = (float)local_b0;
        pfVar3 = local_88 + local_80;
        *local_88 = (float)local_a8;
        pfVar4 = local_98 + local_90;
        *local_98 = (float)local_a0;
        iVar7 = iVar7 + 1;
        piVar6 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar6 = (int *)(param_1 + 0x3c);
        }
        local_98 = pfVar4;
        local_88 = pfVar3;
        local_78 = pfVar2;
        local_68 = pfVar1;
      } while (iVar7 < *piVar6);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a57a2 FUN_1481a57a2 body=796 status=ok
// SIG undefined FUN_1481a57a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1481a57a2(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined4 uVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_168 [40];
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  double dStack_f0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_108 = 0;
  FUN_140753fde(param_1 + 0x248);
  FUN_14099e59e(param_1 + 0x218,&local_108);
  dVar3 = local_f8;
  dVar1 = (double)CONCAT44(uStack_104,local_108);
  dVar2 = (double)CONCAT44(uStack_fc,uStack_100);
  FUN_140703ce0(param_1 + 0x200,&local_108);
  local_128 = (double)CONCAT44(uStack_104,local_108);
  uStack_120 = (double)CONCAT44(uStack_fc,uStack_100);
  dVar14 = local_f8 * local_f8 + local_128 * local_128 + uStack_120 * uStack_120;
  if ((dVar14 != 1.0) || (NAN(dVar14))) {
    if (9.99999993922529e-09 <= dVar14) {
      dVar14 = 1.0 / SQRT(dVar14);
      local_f8 = local_f8 * dVar14;
      uStack_120 = uStack_120 * dVar14;
      local_128 = local_128 * dVar14;
      local_118 = local_f8;
      goto LAB_1481a58b4;
    }
    local_118 = DAT_14c8464f0;
    uVar6 = (undefined4)DAT_14c8464e0;
    uStack_104 = DAT_14c8464e0._4_4_;
    uStack_100 = (undefined4)DAT_14c8464e8;
    uStack_fc = DAT_14c8464e8._4_4_;
  }
  else {
    local_118 = local_f8;
    uVar6 = local_108;
  }
  local_128 = (double)CONCAT44(uStack_104,uVar6);
  uStack_120 = (double)CONCAT44(uStack_fc,uStack_100);
LAB_1481a58b4:
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_f8;
  dVar14 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar9 = dStack_f0 * dStack_f0 + dVar2 * dVar2;
  auVar7._0_8_ = dVar14 + dVar9;
  auVar7._8_8_ = dVar14 + dVar9;
  uVar5 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar12 = sqrtpd(auVar8,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar12);
  dStack_f0 = dStack_f0 * auVar8._8_8_;
  auVar12._8_4_ = (int)uVar5;
  auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar12._12_4_ = (int)(uVar5 >> 0x20);
  auVar4._8_4_ = SUB84(dStack_f0,0);
  auVar4._0_8_ = dVar3 * auVar8._0_8_;
  auVar4._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar4,auVar12);
  dVar9 = (double)((ulonglong)(auVar8._0_8_ * dVar1) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_));
  dVar10 = (double)((ulonglong)(auVar8._8_8_ * dVar2) & uVar5);
  dVar1 = *(double *)(param_1 + 0x1e8);
  dVar2 = *(double *)(param_1 + 0x1f0);
  dVar3 = *(double *)(param_1 + 0x1f8);
  dVar11 = auVar12._0_8_;
  dVar16 = dVar10 * dVar3 - dVar2 * dVar11;
  dVar16 = dVar16 + dVar16;
  dVar13 = auVar12._8_8_;
  dVar14 = dVar9 * dVar2 - dVar1 * dVar10;
  dVar14 = dVar14 + dVar14;
  dVar15 = dVar11 * dVar1 - dVar3 * dVar9;
  dVar15 = dVar15 + dVar15;
  local_130 = (dVar9 * dVar15 - dVar16 * dVar10) + dVar13 * dVar14 + dVar3;
  local_138 = (dVar11 * dVar16 - dVar14 * dVar9) + dVar13 * dVar15 + dVar2;
  local_140 = (dVar10 * dVar14 - dVar15 * dVar11) + dVar13 * dVar16 + dVar1;
  FUN_14099e850(&local_108,&local_128);
  FUN_141706d54(&local_108,param_2);
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a5ac0 FUN_1481a5ac0 body=29 status=ok
// SIG undefined FUN_1481a5ac0(void)

undefined8 FUN_1481a5ac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a5af2 FUN_1481a5af2 body=93 status=ok
// SIG undefined FUN_1481a5af2(void)

void FUN_1481a5af2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a5b50 FUN_1481a5b50 body=93 status=ok
// SIG undefined FUN_1481a5b50(void)

void FUN_1481a5b50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde540;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a5bae FUN_1481a5bae body=126 status=ok
// SIG undefined FUN_1481a5bae(void)

void FUN_1481a5bae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde540;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a5c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a5c34 FUN_1481a5c34 body=19 status=ok
// SIG undefined FUN_1481a5c34(void)

undefined1 FUN_1481a5c34(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a5c48(param_2);
  return 1;
}



// FUNCTION 1481a5c48 FUN_1481a5c48 body=652 status=ok
// SIG undefined FUN_1481a5c48(void)

void FUN_1481a5c48(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  float *local_a0;
  int local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90,param_1);
  FUN_144a76c20(&local_a0,param_1);
  cVar6 = FUN_144729dda(local_48);
  if (cVar6 == '\0') {
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = 0;
      do {
        pfVar1 = local_70 + local_68;
        *local_70 = DAT_14c84633c._4_4_;
        pfVar2 = local_80 + local_78;
        *local_80 = DAT_14c846344;
        pfVar3 = local_90 + local_88;
        *local_90 = DAT_14c846348;
        pfVar4 = local_a0 + local_98;
        *local_a0 = DAT_14c84634c;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_a0 = pfVar4;
        local_90 = pfVar3;
        local_80 = pfVar2;
        local_70 = pfVar1;
      } while (iVar8 < *piVar7);
    }
  }
  else {
    fVar9 = (float)FUN_147a27760(local_48 + 0x200);
    piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar7 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar7) {
      iVar8 = 0;
      do {
        fVar5 = *local_60;
        local_60 = local_60 + local_58;
        FUN_1481a57a2(local_48,&local_c8,fVar5 * fVar9);
        pfVar1 = local_70 + local_68;
        *local_70 = (float)local_c8;
        pfVar2 = local_80 + local_78;
        *local_80 = (float)local_c0;
        pfVar3 = local_90 + local_88;
        *local_90 = (float)local_b8;
        pfVar4 = local_a0 + local_98;
        *local_a0 = (float)local_b0;
        iVar8 = iVar8 + 1;
        piVar7 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar7 = (int *)(param_1 + 0x3c);
        }
        local_a0 = pfVar4;
        local_90 = pfVar3;
        local_80 = pfVar2;
        local_70 = pfVar1;
      } while (iVar8 < *piVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a606e FUN_1481a606e body=29 status=ok
// SIG undefined FUN_1481a606e(void)

undefined8 FUN_1481a606e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a60a0 FUN_1481a60a0 body=93 status=ok
// SIG undefined FUN_1481a60a0(void)

void FUN_1481a60a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a60fe FUN_1481a60fe body=93 status=ok
// SIG undefined FUN_1481a60fe(void)

void FUN_1481a60fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde5b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a615c FUN_1481a615c body=126 status=ok
// SIG undefined FUN_1481a615c(void)

void FUN_1481a615c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde5b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a61cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a61e2 FUN_1481a61e2 body=19 status=ok
// SIG undefined FUN_1481a61e2(void)

undefined1 FUN_1481a61e2(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a61f6(param_2);
  return 1;
}



// FUNCTION 1481a61f6 FUN_1481a61f6 body=952 status=ok
// SIG undefined FUN_1481a61f6(void)

void FUN_1481a61f6(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar15;
  char cVar16;
  int *piVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float local_d4;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_c0;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1481938a0(local_d0,param_1);
  FUN_1481a214e(&local_d4,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_118,param_1);
  cVar16 = FUN_144729dda(local_c8);
  if (cVar16 == '\0') {
    piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar17 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar17) {
      iVar18 = 0;
      do {
        pfVar1 = local_e8 + local_e0;
        *local_e8 = DAT_14c84633c._4_4_;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = DAT_14c846344;
        pfVar3 = local_108 + local_100;
        *local_108 = DAT_14c846348;
        pfVar4 = local_118 + local_110;
        *local_118 = DAT_14c84634c;
        iVar18 = iVar18 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = (int *)(param_1 + 0x3c);
        }
        local_118 = pfVar4;
        local_108 = pfVar3;
        local_f8 = pfVar2;
        local_e8 = pfVar1;
      } while (iVar18 < *piVar17);
    }
  }
  else {
    piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar17 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar17) {
      fVar5 = *(float *)(local_c8 + 0x298);
      dVar6 = *(double *)(local_c8 + 0x68);
      dVar7 = *(double *)(local_c8 + 0x68);
      dVar8 = *(double *)(local_c8 + 0x50);
      dVar9 = *(double *)(local_c8 + 0x50);
      dVar10 = *(double *)(local_c8 + 0x58);
      dVar11 = *(double *)(local_c8 + 0x58);
      dVar12 = *(double *)(local_c8 + 0x60);
      dVar13 = *(double *)(local_c8 + 0x60);
      iVar18 = 0;
      do {
        FUN_1481a4b78(local_c8,&local_138,local_d4 * fVar5);
        dVar20 = dVar10 * local_138;
        dVar21 = dVar11 * dStack_130;
        dVar14 = dVar8 * dStack_130;
        dVar15 = dVar9 * local_138;
        dVar19 = local_138 * dVar13;
        local_138 = dStack_130 * dVar12 * -1.0 +
                    dVar8 * (double)local_128._8_8_ * 1.0 + dVar6 * local_138 +
                    dVar10 * (double)local_128._0_8_;
        dStack_130 = dVar19 * 1.0 +
                     dVar9 * (double)local_128._0_8_ * -1.0 + dVar7 * dStack_130 +
                     dVar11 * (double)local_128._8_8_;
        dVar14 = (double)local_128._8_8_ * dVar12 * 1.0 +
                 ((dVar14 * 1.0 + dVar6 * (double)local_128._0_8_) - dVar20);
        dVar15 = (double)local_128._0_8_ * dVar13 * -1.0 +
                 ((dVar15 * -1.0 + dVar7 * (double)local_128._8_8_) - dVar21);
        pfVar1 = local_e8 + local_e0;
        local_128._8_4_ = SUB84(dVar15,0);
        local_128._0_8_ = dVar14;
        local_128._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        *local_e8 = (float)local_138;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = (float)dStack_130;
        pfVar3 = local_108 + local_100;
        *local_108 = (float)dVar14;
        pfVar4 = local_118 + local_110;
        *local_118 = (float)(double)local_128._8_8_;
        iVar18 = iVar18 + 1;
        piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar17 = (int *)(param_1 + 0x3c);
        }
        local_118 = pfVar4;
        local_108 = pfVar3;
        local_f8 = pfVar2;
        local_e8 = pfVar1;
      } while (iVar18 < *piVar17);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a65b0 FUN_1481a65b0 body=29 status=ok
// SIG undefined FUN_1481a65b0(void)

undefined8 FUN_1481a65b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a65e2 FUN_1481a65e2 body=93 status=ok
// SIG undefined FUN_1481a65e2(void)

void FUN_1481a65e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a6640 FUN_1481a6640 body=93 status=ok
// SIG undefined FUN_1481a6640(void)

void FUN_1481a6640(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde620;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a669e FUN_1481a669e body=126 status=ok
// SIG undefined FUN_1481a669e(void)

void FUN_1481a669e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde620;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a670d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a6724 FUN_1481a6724 body=19 status=ok
// SIG undefined FUN_1481a6724(void)

undefined1 FUN_1481a6724(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a6738(param_2);
  return 1;
}



// FUNCTION 1481a6738 FUN_1481a6738 body=981 status=ok
// SIG undefined FUN_1481a6738(void)

void FUN_1481a6738(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar16;
  char cVar17;
  int *piVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  undefined1 local_138 [24];
  float *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_c0;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1481938a0(local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_100,param_1);
  FUN_144a76c20(&local_110,param_1);
  FUN_144a76c20(&local_120,param_1);
  cVar17 = FUN_144729dda(local_c8);
  if (cVar17 == '\0') {
    piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar18 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar18) {
      iVar19 = 0;
      do {
        pfVar1 = local_f0 + local_e8;
        *local_f0 = DAT_14c84633c._4_4_;
        pfVar2 = local_100 + local_f8;
        *local_100 = DAT_14c846344;
        pfVar3 = local_110 + local_108;
        *local_110 = DAT_14c846348;
        pfVar4 = local_120 + local_118;
        *local_120 = DAT_14c84634c;
        iVar19 = iVar19 + 1;
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = (int *)(param_1 + 0x3c);
        }
        local_120 = pfVar4;
        local_110 = pfVar3;
        local_100 = pfVar2;
        local_f0 = pfVar1;
      } while (iVar19 < *piVar18);
    }
  }
  else {
    piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar18 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar18) {
      fVar5 = *(float *)(local_c8 + 0x298);
      dVar7 = *(double *)(local_c8 + 0x68);
      dVar8 = *(double *)(local_c8 + 0x68);
      dVar9 = *(double *)(local_c8 + 0x50);
      dVar10 = *(double *)(local_c8 + 0x50);
      dVar11 = *(double *)(local_c8 + 0x58);
      dVar12 = *(double *)(local_c8 + 0x58);
      dVar13 = *(double *)(local_c8 + 0x60);
      dVar14 = *(double *)(local_c8 + 0x60);
      iVar19 = 0;
      do {
        fVar6 = *local_e0;
        local_e0 = local_e0 + local_d8;
        FUN_1481a4b78(local_c8,&local_148,fVar6 * fVar5);
        dVar21 = dVar11 * local_148;
        dVar22 = dVar12 * dStack_140;
        dVar15 = dVar9 * dStack_140;
        dVar16 = dVar10 * local_148;
        dVar20 = local_148 * dVar14;
        local_148 = dStack_140 * dVar13 * -1.0 +
                    dVar9 * (double)local_138._8_8_ * 1.0 + dVar7 * local_148 +
                    dVar11 * (double)local_138._0_8_;
        dStack_140 = dVar20 * 1.0 +
                     dVar10 * (double)local_138._0_8_ * -1.0 + dVar8 * dStack_140 +
                     dVar12 * (double)local_138._8_8_;
        dVar15 = (double)local_138._8_8_ * dVar13 * 1.0 +
                 ((dVar15 * 1.0 + dVar7 * (double)local_138._0_8_) - dVar21);
        dVar16 = (double)local_138._0_8_ * dVar14 * -1.0 +
                 ((dVar16 * -1.0 + dVar8 * (double)local_138._8_8_) - dVar22);
        pfVar1 = local_f0 + local_e8;
        local_138._8_4_ = SUB84(dVar16,0);
        local_138._0_8_ = dVar15;
        local_138._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
        *local_f0 = (float)local_148;
        pfVar2 = local_100 + local_f8;
        *local_100 = (float)dStack_140;
        pfVar3 = local_110 + local_108;
        *local_110 = (float)dVar15;
        pfVar4 = local_120 + local_118;
        *local_120 = (float)(double)local_138._8_8_;
        iVar19 = iVar19 + 1;
        piVar18 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar18 = (int *)(param_1 + 0x3c);
        }
        local_120 = pfVar4;
        local_110 = pfVar3;
        local_100 = pfVar2;
        local_f0 = pfVar1;
      } while (iVar19 < *piVar18);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a6ca6 FUN_1481a6ca6 body=29 status=ok
// SIG undefined FUN_1481a6ca6(void)

undefined8 FUN_1481a6ca6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a6cd8 FUN_1481a6cd8 body=93 status=ok
// SIG undefined FUN_1481a6cd8(void)

void FUN_1481a6cd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a6d36 FUN_1481a6d36 body=93 status=ok
// SIG undefined FUN_1481a6d36(void)

void FUN_1481a6d36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a6d94 FUN_1481a6d94 body=126 status=ok
// SIG undefined FUN_1481a6d94(void)

void FUN_1481a6d94(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde690;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a6e03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a6e1a FUN_1481a6e1a body=19 status=ok
// SIG undefined FUN_1481a6e1a(void)

undefined1 FUN_1481a6e1a(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a6e2e(param_2);
  return 1;
}



// FUNCTION 1481a6e2e FUN_1481a6e2e body=966 status=ok
// SIG undefined FUN_1481a6e2e(void)

void FUN_1481a6e2e(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  int *piVar12;
  int iVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_158 [32];
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  float *local_118;
  int local_110;
  float *local_108;
  int local_100;
  float *local_f8;
  int local_f0;
  float *local_e8;
  int local_e0;
  float local_d4;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1481938a0(local_d0,param_1);
  FUN_1481a214e(&local_d4,param_1);
  FUN_144a76c20(&local_e8,param_1);
  FUN_144a76c20(&local_f8,param_1);
  FUN_144a76c20(&local_108,param_1);
  FUN_144a76c20(&local_118,param_1);
  cVar11 = FUN_144729dda(local_c8);
  if (cVar11 == '\0') {
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      iVar13 = 0;
      do {
        pfVar1 = local_e8 + local_e0;
        *local_e8 = DAT_14c84633c._4_4_;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = DAT_14c846344;
        pfVar3 = local_108 + local_100;
        *local_108 = DAT_14c846348;
        pfVar4 = local_118 + local_110;
        *local_118 = DAT_14c84634c;
        iVar13 = iVar13 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_118 = pfVar4;
        local_108 = pfVar3;
        local_f8 = pfVar2;
        local_e8 = pfVar1;
      } while (iVar13 < *piVar12);
    }
  }
  else {
    dVar7 = *(double *)(local_c8 + 0x50);
    dVar8 = *(double *)(local_c8 + 0x58);
    dVar9 = *(double *)(local_c8 + 0x60);
    dVar10 = *(double *)(local_c8 + 0x68);
    fVar14 = (float)FUN_147a27760(local_c8 + 0x200);
    piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar12 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar12) {
      iVar13 = 0;
      do {
        FUN_1481a57a2(local_c8,&local_138,local_d4 * fVar14);
        dVar16 = dVar8 * local_138;
        dVar17 = dVar8 * dStack_130;
        dVar5 = dVar7 * dStack_130;
        dVar6 = dVar7 * local_138;
        dVar15 = local_138 * dVar9;
        local_138 = dStack_130 * dVar9 * -1.0 +
                    dVar7 * (double)local_128._8_8_ * 1.0 + dVar10 * local_138 +
                    dVar8 * (double)local_128._0_8_;
        dStack_130 = dVar15 * 1.0 +
                     dVar7 * (double)local_128._0_8_ * -1.0 + dVar10 * dStack_130 +
                     dVar8 * (double)local_128._8_8_;
        dVar5 = (double)local_128._8_8_ * dVar9 * 1.0 +
                ((dVar5 * 1.0 + dVar10 * (double)local_128._0_8_) - dVar16);
        dVar6 = (double)local_128._0_8_ * dVar9 * -1.0 +
                ((dVar6 * -1.0 + dVar10 * (double)local_128._8_8_) - dVar17);
        pfVar1 = local_e8 + local_e0;
        local_128._8_4_ = SUB84(dVar6,0);
        local_128._0_8_ = dVar5;
        local_128._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        *local_e8 = (float)local_138;
        pfVar2 = local_f8 + local_f0;
        *local_f8 = (float)dStack_130;
        pfVar3 = local_108 + local_100;
        *local_108 = (float)dVar5;
        pfVar4 = local_118 + local_110;
        *local_118 = (float)(double)local_128._8_8_;
        iVar13 = iVar13 + 1;
        piVar12 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar12 = (int *)(param_1 + 0x3c);
        }
        local_118 = pfVar4;
        local_108 = pfVar3;
        local_f8 = pfVar2;
        local_e8 = pfVar1;
      } while (iVar13 < *piVar12);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a71f6 FUN_1481a71f6 body=29 status=ok
// SIG undefined FUN_1481a71f6(void)

undefined8 FUN_1481a71f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a7228 FUN_1481a7228 body=93 status=ok
// SIG undefined FUN_1481a7228(void)

void FUN_1481a7228(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a7286 FUN_1481a7286 body=93 status=ok
// SIG undefined FUN_1481a7286(void)

void FUN_1481a7286(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde700;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a72e4 FUN_1481a72e4 body=126 status=ok
// SIG undefined FUN_1481a72e4(void)

void FUN_1481a72e4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde700;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a7353. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a736a FUN_1481a736a body=19 status=ok
// SIG undefined FUN_1481a736a(void)

undefined1 FUN_1481a736a(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a737e(param_2);
  return 1;
}



// FUNCTION 1481a737e FUN_1481a737e body=995 status=ok
// SIG undefined FUN_1481a737e(void)

void FUN_1481a737e(char *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  int *piVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  undefined1 local_138 [24];
  float *local_120;
  int local_118;
  float *local_110;
  int local_108;
  float *local_100;
  int local_f8;
  float *local_f0;
  int local_e8;
  float *local_e0;
  int local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1481938a0(local_d0,param_1);
  FUN_144a76c20(&local_e0,param_1);
  FUN_144a76c20(&local_f0,param_1);
  FUN_144a76c20(&local_100,param_1);
  FUN_144a76c20(&local_110,param_1);
  FUN_144a76c20(&local_120,param_1);
  cVar12 = FUN_144729dda(local_c8);
  if (cVar12 == '\0') {
    piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar13 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar13) {
      iVar14 = 0;
      do {
        pfVar1 = local_f0 + local_e8;
        *local_f0 = DAT_14c84633c._4_4_;
        pfVar2 = local_100 + local_f8;
        *local_100 = DAT_14c846344;
        pfVar3 = local_110 + local_108;
        *local_110 = DAT_14c846348;
        pfVar4 = local_120 + local_118;
        *local_120 = DAT_14c84634c;
        iVar14 = iVar14 + 1;
        piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar13 = (int *)(param_1 + 0x3c);
        }
        local_120 = pfVar4;
        local_110 = pfVar3;
        local_100 = pfVar2;
        local_f0 = pfVar1;
      } while (iVar14 < *piVar13);
    }
  }
  else {
    dVar8 = *(double *)(local_c8 + 0x50);
    dVar9 = *(double *)(local_c8 + 0x58);
    dVar10 = *(double *)(local_c8 + 0x60);
    dVar11 = *(double *)(local_c8 + 0x68);
    fVar15 = (float)FUN_147a27760(local_c8 + 0x200);
    piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar13 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar13) {
      iVar14 = 0;
      do {
        fVar5 = *local_e0;
        local_e0 = local_e0 + local_d8;
        FUN_1481a57a2(local_c8,&local_148,fVar5 * fVar15);
        dVar17 = dVar9 * local_148;
        dVar18 = dVar9 * dStack_140;
        dVar6 = dVar8 * dStack_140;
        dVar7 = dVar8 * local_148;
        dVar16 = local_148 * dVar10;
        local_148 = dStack_140 * dVar10 * -1.0 +
                    dVar8 * (double)local_138._8_8_ * 1.0 + dVar11 * local_148 +
                    dVar9 * (double)local_138._0_8_;
        dStack_140 = dVar16 * 1.0 +
                     dVar8 * (double)local_138._0_8_ * -1.0 + dVar11 * dStack_140 +
                     dVar9 * (double)local_138._8_8_;
        dVar6 = (double)local_138._8_8_ * dVar10 * 1.0 +
                ((dVar6 * 1.0 + dVar11 * (double)local_138._0_8_) - dVar17);
        dVar7 = (double)local_138._0_8_ * dVar10 * -1.0 +
                ((dVar7 * -1.0 + dVar11 * (double)local_138._8_8_) - dVar18);
        pfVar1 = local_f0 + local_e8;
        local_138._8_4_ = SUB84(dVar7,0);
        local_138._0_8_ = dVar6;
        local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *local_f0 = (float)local_148;
        pfVar2 = local_100 + local_f8;
        *local_100 = (float)dStack_140;
        pfVar3 = local_110 + local_108;
        *local_110 = (float)dVar6;
        pfVar4 = local_120 + local_118;
        *local_120 = (float)(double)local_138._8_8_;
        iVar14 = iVar14 + 1;
        piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar13 = (int *)(param_1 + 0x3c);
        }
        local_120 = pfVar4;
        local_110 = pfVar3;
        local_100 = pfVar2;
        local_f0 = pfVar1;
      } while (iVar14 < *piVar13);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a78fa FUN_1481a78fa body=29 status=ok
// SIG undefined FUN_1481a78fa(void)

undefined8 FUN_1481a78fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a792c FUN_1481a792c body=93 status=ok
// SIG undefined FUN_1481a792c(void)

void FUN_1481a792c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a798a FUN_1481a798a body=93 status=ok
// SIG undefined FUN_1481a798a(void)

void FUN_1481a798a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde770;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a79e8 FUN_1481a79e8 body=126 status=ok
// SIG undefined FUN_1481a79e8(void)

void FUN_1481a79e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde770;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a7a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a7a6e FUN_1481a7a6e body=19 status=ok
// SIG undefined FUN_1481a7a6e(void)

undefined1 FUN_1481a7a6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a7a82(param_2);
  return 1;
}



// FUNCTION 1481a7a82 FUN_1481a7a82 body=510 status=ok
// SIG undefined FUN_1481a7a82(void)

void FUN_1481a7a82(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_68 = 0.0;
        *local_78 = 0.0;
        *local_88 = 1.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481a7c82(local_48,&local_a0,local_54 * fVar1);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a7c82 FUN_1481a7c82 body=368 status=ok
// SIG undefined FUN_1481a7c82(void)

double * FUN_1481a7c82(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1481a4b78(param_1,&local_98);
  dVar1 = local_90 * DAT_14c8462d0 - DAT_14c8462c8 * local_88;
  dVar1 = dVar1 + dVar1;
  dVar4 = local_98 * DAT_14c8462c8 - DAT_14c8462c0 * local_90;
  dVar4 = dVar4 + dVar4;
  dVar3 = local_80 * dVar4 + DAT_14c8462d0;
  dVar5 = local_88 * DAT_14c8462c0 - DAT_14c8462d0 * local_98;
  dVar5 = dVar5 + dVar5;
  dVar2 = local_80 * dVar5 + DAT_14c8462c8;
  *param_2 = (local_90 * dVar4 - dVar5 * local_88) + dVar1 * local_80 + DAT_14c8462c0;
  param_2[1] = (local_88 * dVar1 - dVar4 * local_98) + dVar2;
  param_2[2] = (local_98 * dVar5 - dVar1 * local_90) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a7df4 FUN_1481a7df4 body=29 status=ok
// SIG undefined FUN_1481a7df4(void)

undefined8 FUN_1481a7df4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a7e26 FUN_1481a7e26 body=93 status=ok
// SIG undefined FUN_1481a7e26(void)

void FUN_1481a7e26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde7e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a7e84 FUN_1481a7e84 body=93 status=ok
// SIG undefined FUN_1481a7e84(void)

void FUN_1481a7e84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde7e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a7ee2 FUN_1481a7ee2 body=126 status=ok
// SIG undefined FUN_1481a7ee2(void)

void FUN_1481a7ee2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde7e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a7f51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a7f68 FUN_1481a7f68 body=19 status=ok
// SIG undefined FUN_1481a7f68(void)

undefined1 FUN_1481a7f68(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a7f7c(param_2);
  return 1;
}



// FUNCTION 1481a7f7c FUN_1481a7f7c body=546 status=ok
// SIG undefined FUN_1481a7f7c(void)

void FUN_1481a7f7c(char *param_1)

{
  float fVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  float *local_90;
  int local_88;
  float *local_80;
  int local_78;
  float *local_70;
  int local_68;
  float *local_60;
  int local_58;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_144a76c20(&local_60,param_1);
  FUN_144a76c20(&local_70,param_1);
  FUN_144a76c20(&local_80,param_1);
  FUN_144a76c20(&local_90);
  cVar2 = FUN_144729dda(local_48);
  if (cVar2 == '\0') {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      iVar4 = 0;
      do {
        *local_70 = 0.0;
        *local_80 = 0.0;
        *local_90 = 1.0;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  else {
    piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar3 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar3) {
      fVar1 = *(float *)(local_48 + 0x298);
      iVar4 = 0;
      do {
        FUN_1481a7c82(local_48,&local_a8,*local_60 * fVar1);
        *local_70 = (float)local_a8;
        *local_80 = (float)local_a0;
        *local_90 = (float)local_98;
        local_60 = local_60 + local_58;
        local_70 = local_70 + local_68;
        local_80 = local_80 + local_78;
        local_90 = local_90 + local_88;
        iVar4 = iVar4 + 1;
        piVar3 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar3 = (int *)(param_1 + 0x3c);
        }
      } while (iVar4 < *piVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a8338 FUN_1481a8338 body=29 status=ok
// SIG undefined FUN_1481a8338(void)

undefined8 FUN_1481a8338(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481a836a FUN_1481a836a body=93 status=ok
// SIG undefined FUN_1481a836a(void)

void FUN_1481a836a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a83c8 FUN_1481a83c8 body=93 status=ok
// SIG undefined FUN_1481a83c8(void)

void FUN_1481a83c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adde850;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481a8426 FUN_1481a8426 body=126 status=ok
// SIG undefined FUN_1481a8426(void)

void FUN_1481a8426(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adde850;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481a8495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481a84ac FUN_1481a84ac body=19 status=ok
// SIG undefined FUN_1481a84ac(void)

undefined1 FUN_1481a84ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1481a84c0(param_2);
  return 1;
}



// FUNCTION 1481a84c0 FUN_1481a84c0 body=515 status=ok
// SIG undefined FUN_1481a84c0(void)

void FUN_1481a84c0(char *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  float *local_88;
  int local_80;
  float *local_78;
  int local_70;
  float *local_68;
  int local_60;
  float local_54;
  undefined1 local_50 [8];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481938a0(local_50,param_1);
  FUN_1481a214e(&local_54,param_1);
  FUN_144a76c20(&local_68,param_1);
  FUN_144a76c20(&local_78,param_1);
  FUN_144a76c20(&local_88);
  cVar1 = FUN_144729dda(local_48);
  if (cVar1 == '\0') {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        *local_68 = 0.0;
        *local_78 = 0.0;
        *local_88 = 1.0;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  else {
    fVar4 = (float)FUN_147a27760(local_48 + 0x200);
    piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != '\0') {
      piVar2 = (int *)(param_1 + 0x3c);
    }
    if (0 < *piVar2) {
      iVar3 = 0;
      do {
        FUN_1481a86c4(local_48,&local_a0,local_54 * fVar4);
        *local_68 = (float)local_a0;
        *local_78 = (float)local_98;
        *local_88 = (float)local_90;
        local_68 = local_68 + local_60;
        local_78 = local_78 + local_70;
        local_88 = local_88 + local_80;
        iVar3 = iVar3 + 1;
        piVar2 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar2 = (int *)(param_1 + 0x3c);
        }
      } while (iVar3 < *piVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481a86c4 FUN_1481a86c4 body=368 status=ok
// SIG undefined FUN_1481a86c4(void)

double * FUN_1481a86c4(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1481a57a2(param_1,&local_98);
  dVar1 = local_90 * DAT_14c8462d0 - DAT_14c8462c8 * local_88;
  dVar1 = dVar1 + dVar1;
  dVar4 = local_98 * DAT_14c8462c8 - DAT_14c8462c0 * local_90;
  dVar4 = dVar4 + dVar4;
  dVar3 = local_80 * dVar4 + DAT_14c8462d0;
  dVar5 = local_88 * DAT_14c8462c0 - DAT_14c8462d0 * local_98;
  dVar5 = dVar5 + dVar5;
  dVar2 = local_80 * dVar5 + DAT_14c8462c8;
  *param_2 = (local_90 * dVar4 - dVar5 * local_88) + dVar1 * local_80 + DAT_14c8462c0;
  param_2[1] = (local_88 * dVar1 - dVar4 * local_98) + dVar2;
  param_2[2] = (local_98 * dVar5 - dVar1 * local_90) + dVar3;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481a8836 FUN_1481a8836 body=29 status=ok
// SIG undefined FUN_1481a8836(void)

undefined8 FUN_1481a8836(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


