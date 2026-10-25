// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1400b2424 FUN_1400b2424 body=692 status=ok
// SIG undefined FUN_1400b2424(void)

void FUN_1400b2424(int *param_1,longlong param_2,char param_3)

{
  wchar_t *pwVar1;
  void *_Dst;
  undefined *_Src;
  bool bVar2;
  char cVar3;
  wchar_t *pwVar4;
  undefined1 *puVar5;
  size_t sVar6;
  longlong lVar7;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_328 [32];
  wchar_t *local_308;
  undefined1 local_300 [128];
  longlong local_280;
  char *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  wchar_t *local_260;
  ulonglong *local_258;
  char local_250;
  wchar_t local_248 [256];
  ulonglong local_48;
  
  _Src = PTR_DAT_14c75ec00;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_328;
  if (*param_1 != 0) {
    iVar8 = param_1[1];
    if (((longlong)iVar8 != 0) && (*param_1 != DAT_14c948000)) {
      if ((iVar8 < 2) && (param_1[9] < 1)) {
        param_1 = param_1 + 2;
      }
      else {
        param_1 = *(int **)(param_1 + 6);
      }
      lVar7 = 0;
      bVar2 = false;
      do {
        if (bVar2) {
          puVar5 = *(undefined1 **)(param_2 + 8);
          if (*(undefined1 **)(param_2 + 0x10) <= puVar5 + 1) {
            FUN_145753a78(param_2,1);
            puVar5 = *(undefined1 **)(param_2 + 8);
          }
          *(undefined1 **)(param_2 + 8) = puVar5 + 1;
          *puVar5 = 0x2e;
        }
        pwVar1 = *(wchar_t **)((longlong)param_1 + lVar7 + 4);
        pwVar4 = pwVar1;
        if ((pwVar1 == DAT_14c948034) &&
           (pwVar4 = DAT_14c948034, *(int *)((longlong)param_1 + lVar7) != DAT_14c948030)) {
          FUN_14011791e(&local_268,*(int *)((longlong)param_1 + lVar7),(ulonglong)pwVar1 >> 0x20);
          *(wchar_t **)((longlong)param_1 + lVar7 + 4) = local_268;
          pwVar4 = local_268;
        }
        local_308 = (wchar_t *)((ulonglong)pwVar4 & 0xffffffff);
        if (param_3 != '\0') {
          local_308 = pwVar4;
        }
        cVar3 = FUN_14014edce(&local_308,param_2);
        if (cVar3 == '\0') {
          local_268 = local_248;
          local_258 = &local_48;
          local_250 = '\0';
          local_260 = local_268;
          FUN_14005eb5c(&local_308,&local_268);
          *local_260 = L'\0';
          pwVar1 = local_268;
          local_280 = 0;
          if (local_268 == (wchar_t *)0x0) {
            local_278 = (char *)0x0;
            local_270 = 0;
LAB_1400b2668:
            pcVar9 = (char *)0x0;
            sVar6 = 0;
          }
          else {
            sVar6 = wcslen(local_268);
            FUN_1449b853c(local_300,pwVar1,sVar6 & 0xffffffff,1);
            pcVar9 = local_278;
            if (local_278 == (char *)0x0) goto LAB_1400b2668;
            sVar6 = strlen(local_278);
          }
          FUN_1414db1c4(param_2,pcVar9,sVar6);
          if (local_280 != 0) {
            FUN_1400020a8();
          }
          if (local_250 == '\x01') {
            FUN_1400020a8(local_268);
          }
        }
        lVar7 = lVar7 + 0xc;
        bVar2 = true;
      } while ((longlong)iVar8 * 0xc != lVar7);
      goto LAB_1400b24e4;
    }
  }
  if (PTR_DAT_14c75ec00 == (undefined *)0x0) {
    iVar8 = 0;
  }
  else {
    sVar6 = strlen(PTR_DAT_14c75ec00);
    iVar8 = (int)sVar6;
  }
  sVar6 = (size_t)iVar8;
  if (*(ulonglong *)(param_2 + 0x10) <= *(longlong *)(param_2 + 8) + sVar6) {
    FUN_145753a78(param_2,sVar6);
  }
  if (iVar8 != 0) {
    _Dst = *(void **)(param_2 + 8);
    memcpy(_Dst,_Src,sVar6);
    *(size_t *)(param_2 + 8) = (longlong)_Dst + sVar6;
  }
LAB_1400b24e4:
  if ((local_48 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400b26da FUN_1400b26da body=79 status=ok
// SIG undefined FUN_1400b26da(void)

undefined8 FUN_1400b26da(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 1;
  if (3 < param_2) {
    uVar3 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) &&
     ((param_3 != '\x01' || (*(int *)(param_1 + 0x48) <= iVar4)))) {
    uVar2 = 0;
  }
  else {
    *(int *)(param_1 + 0x48) = iVar4;
    FUN_140220ed2(param_1);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 1400b272a FUN_1400b272a body=307 status=ok
// SIG undefined FUN_1400b272a(void)

void FUN_1400b272a(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  
  iVar1 = (int)param_1[5];
  if (iVar1 == 0) {
    iVar4 = -1;
  }
  else {
    iVar4 = -1;
    plVar6 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar6 = param_1 + 2;
    }
    uVar8 = (ulonglong)(iVar1 + 0x1fU >> 5);
    iVar7 = -0x3e - (iVar1 + 0x1fU & 0xffffffe0);
    uVar5 = 0xffffffff >> (-(char)iVar1 & 0x1fU);
    do {
      bVar11 = uVar8 == 0;
      uVar8 = uVar8 - 1;
      if (bVar11) goto LAB_1400b27a6;
      iVar7 = iVar7 + 0x20;
      uVar9 = uVar5 & *(uint *)((longlong)plVar6 + uVar8 * 4);
      uVar5 = 0xffffffff;
    } while (uVar9 == 0);
    uVar8 = (ulonglong)uVar9 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar4 = -(((uint)lVar3 ^ 0x3f) + iVar7);
  }
LAB_1400b27a6:
  iVar1 = iVar4 + 1;
  iVar7 = (int)param_1[1];
  if (iVar1 < iVar7) {
    if ((0 < *(int *)((longlong)param_1 + 0x34)) &&
       (uVar8 = (ulonglong)*(uint *)(param_1 + 6), *(uint *)(param_1 + 6) != 0xffffffff)) {
      lVar3 = *param_1;
      do {
        lVar10 = (longlong)(int)uVar8 * 0x20;
        if (iVar4 < (int)uVar8) {
          iVar7 = *(int *)(lVar3 + lVar10);
          iVar2 = *(int *)(lVar3 + 4 + lVar10);
          uVar8 = (ulonglong)iVar2;
          if (uVar8 != 0xffffffffffffffff) {
            *(int *)(lVar3 + uVar8 * 0x20) = iVar7;
          }
          if (iVar7 == -1) {
            *(int *)(param_1 + 6) = iVar2;
          }
          else {
            *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x20) = iVar2;
          }
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + -1;
        }
        else {
          uVar8 = (ulonglong)*(uint *)(lVar3 + 4 + lVar10);
        }
      } while ((int)uVar8 != -1);
      iVar7 = (int)param_1[1];
    }
    if (iVar7 != iVar1) {
      *(int *)(param_1 + 1) = iVar1;
    }
    FUN_144a6134a(param_1 + 2,iVar1,(int)param_1[5] - iVar1);
    iVar7 = (int)param_1[1];
  }
  if (*(int *)((longlong)param_1 + 0xc) != iVar7) {
    FUN_1446f4a44(param_1,iVar7);
    return;
  }
  return;
}



// FUNCTION 1400b285e FUN_1400b285e body=450 status=ok
// SIG undefined FUN_1400b285e(void)

void FUN_1400b285e(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400b2979:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400b29b6:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400b28b4;
LAB_1400b28a9:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400b28b4:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001400b28e0;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400b2936:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400b29b6;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400b2979;
code_r0x0001400b28e0:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400b2936;
    }
  }
  goto LAB_1400b28a9;
}



// FUNCTION 1400b2a20 FUN_1400b2a20 body=125 status=ok
// SIG undefined FUN_1400b2a20(void)

void FUN_1400b2a20(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = DAT_14c999a84 + 1;
  local_38 = param_1;
  local_30 = param_2;
  if (iVar1 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)((longlong)&DAT_14c999ae0 + lVar2) != 0) {
        local_28 = *(longlong *)((longlong)&DAT_14c999ae0 + lVar2);
        FUN_1435a633e(&local_38);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b2a9e FUN_1400b2a9e body=131 status=ok
// SIG undefined FUN_1400b2a9e(void)

longlong FUN_1400b2a9e(longlong param_1,int param_2)

{
  FUN_1400b2b21(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1400b2b21(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1400b2b21(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b2b21 FUN_1400b2b21 body=44 status=ok
// SIG undefined FUN_1400b2b21(void)

void FUN_1400b2b21(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x38;
    do {
      FUN_1447ef07c(param_1);
      param_1 = param_1 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400b2b4d FUN_1400b2b4d body=3673 status=ok
// SIG undefined FUN_1400b2b4d(void)

undefined8
FUN_1400b2b4d(undefined8 param_1,longlong *param_2,undefined4 *param_3,float param_4,
             undefined8 param_5,double *param_6,double *param_7,longlong param_8,longlong param_9,
             byte param_10,byte param_11)

{
  undefined8 *puVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  char cVar20;
  int iVar21;
  int iVar22;
  undefined4 uVar23;
  longlong lVar24;
  byte bVar25;
  undefined8 uVar26;
  bool bVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  uint uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  uint uVar45;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  byte local_1a0;
  longlong local_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar6 = *(ushort *)(param_2 + 7);
  lVar24 = *param_2;
  lVar7 = param_2[1];
  iVar22 = (int)param_2[2];
  fVar3 = *(float *)(param_2 + 0xe);
  if ((param_8 == 0) || (0.0 < fVar3)) {
    if (lVar24 == 0 || lVar7 == 0) {
LAB_1400b2cef:
      local_f8 = *(double *)(param_3 + 0x20);
      local_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      local_118 = *(double *)(param_3 + 0x26);
      local_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = local_f8;
      *(double *)(param_3 + 0x1c) = local_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = local_118;
      *(undefined8 *)(param_3 + 0x22) = local_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = local_128._8_8_;
      uVar26 = 1;
      goto LAB_1400b34ac;
    }
    local_188 = (double)CONCAT44(local_188._4_4_,iVar22);
    puVar1 = (undefined8 *)(lVar7 + 0x48 + (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0) * 8);
    local_158 = *puVar1;
    uStack_150 = puVar1[1];
    local_190 = lVar24;
    cVar20 = FUN_144b2633e(param_5,&local_158,0);
    *(byte *)((longlong)param_3 + 0xad) =
         (fVar3 <= 0.0) * '\x02' | cVar20 == '\x02' | *(byte *)((longlong)param_3 + 0xad) & 0xfc;
    fVar4 = *(float *)(param_2 + 0xe);
    param_3[1] = fVar4 / param_4;
    param_3[2] = (int)param_2[0xe];
    dVar32 = param_6[2];
    dVar31 = param_7[2] - dVar32;
    dVar29 = param_6[1];
    dVar15 = param_7[1] - dVar29;
    dVar35 = *param_7 - *param_6;
    dVar28 = (double)(fVar4 / param_4);
    *(double *)(param_3 + 4) = dVar28 * dVar35 + *param_6;
    *(double *)(param_3 + 6) = dVar15 * dVar28 + dVar29;
    *(double *)(param_3 + 8) = dVar31 * dVar28 + dVar32;
    if ((uVar6 & 1) == 0 || fVar3 <= 0.0) {
      uVar23 = SUB84(*param_6,0);
      uVar39 = (undefined4)((ulonglong)*param_6 >> 0x20);
      uVar41 = SUB84(param_6[1],0);
      uVar42 = (undefined4)((ulonglong)param_6[1] >> 0x20);
      uVar43 = SUB84(param_6[2],0);
      uVar44 = (undefined4)((ulonglong)param_6[2] >> 0x20);
    }
    else {
      dVar32 = (double)param_2[8];
      uVar23 = SUB84(dVar32,0);
      uVar39 = (undefined4)((ulonglong)dVar32 >> 0x20);
      dVar29 = (double)param_2[9];
      uVar41 = SUB84(dVar29,0);
      uVar42 = (undefined4)((ulonglong)dVar29 >> 0x20);
      dVar28 = (double)param_2[10];
      uVar43 = SUB84(dVar28,0);
      uVar44 = (undefined4)((ulonglong)dVar28 >> 0x20);
      iVar22 = _finite(dVar32);
      if (((iVar22 == 0) || (iVar22 = _finite(dVar29), iVar22 == 0)) ||
         (iVar22 = _finite(dVar28), iVar22 == 0)) goto LAB_1400b2cef;
    }
    *(ulonglong *)(param_3 + 10) = CONCAT44(uVar39,uVar23);
    *(ulonglong *)(param_3 + 0xc) = CONCAT44(uVar42,uVar41);
    *(ulonglong *)(param_3 + 0xe) = CONCAT44(uVar44,uVar43);
    bVar27 = (uVar6 & 2) != 0;
    if (bVar27 && 0.0 < fVar3) {
      auVar5 = *(undefined1 (*) [16])(param_2 + 0xb);
      dVar29 = auVar5._0_8_;
      uVar39 = auVar5._0_4_;
      uVar41 = auVar5._4_4_;
      uVar42 = auVar5._8_4_;
      uVar45 = auVar5._12_4_;
      dVar32 = (double)param_2[0xd];
      uVar23 = SUB84(dVar32,0);
      uVar40 = (uint)((ulonglong)dVar32 >> 0x20);
      iVar21 = _finite(dVar29);
      iVar22 = local_188._0_4_;
      if (((iVar21 == 0) || (iVar21 = _finite(auVar5._8_8_), iVar21 == 0)) ||
         (iVar21 = _finite(dVar32), iVar21 == 0)) goto LAB_1400b2cef;
    }
    else {
      uVar40 = (uint)((ulonglong)dVar31 >> 0x20) ^ 0x80000000;
      uVar23 = SUB84(dVar31,0);
      uVar45 = (uint)((ulonglong)dVar15 >> 0x20) ^ 0x80000000;
      uVar42 = SUB84(dVar15,0);
      dVar29 = -dVar35;
      uVar39 = SUB84(dVar35,0);
      uVar41 = (undefined4)((ulonglong)dVar29 >> 0x20);
      iVar22 = local_188._0_4_;
    }
    dVar32 = (double)CONCAT44(uVar40,uVar23) * (double)CONCAT44(uVar40,uVar23) +
             dVar29 * dVar29 + (double)CONCAT44(uVar45,uVar42) * (double)CONCAT44(uVar45,uVar42);
    if (((dVar32 != 1.0) ||
        (dVar28 = (double)CONCAT44(uVar40,uVar23), dVar30 = (double)CONCAT44(uVar41,uVar39),
        dVar14 = (double)CONCAT44(uVar45,uVar42), NAN(dVar32))) &&
       (dVar28 = DAT_14c8464f0, dVar30 = DAT_14c8464e0, dVar14 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar32)) {
      dVar32 = 1.0 / SQRT(dVar32);
      dVar28 = (double)CONCAT44(uVar40,uVar23) * dVar32;
      dVar30 = dVar29 * dVar32;
      dVar14 = (double)CONCAT44(uVar45,uVar42) * dVar32;
    }
    uVar23 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar5._8_4_ = SUB84(dVar14,0);
    auVar5._0_8_ = dVar30;
    auVar5._12_4_ = uVar23;
    *(undefined1 (*) [16])(param_3 + 0x10) = auVar5;
    *(double *)(param_3 + 0x14) = dVar28;
    auVar10._8_4_ = SUB84(dVar14,0);
    auVar10._0_8_ = dVar30;
    auVar10._12_4_ = uVar23;
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar10;
    *(double *)(param_3 + 0x1a) = dVar28;
    dVar32 = *param_6;
    dVar29 = param_6[1];
    *(double *)(param_3 + 0x20) = param_6[2];
    *(double *)(param_3 + 0x1c) = dVar32;
    *(double *)(param_3 + 0x1e) = dVar29;
    dVar32 = *param_7;
    dVar29 = param_7[1];
    *(double *)(param_3 + 0x26) = param_7[2];
    *(double *)(param_3 + 0x22) = dVar32;
    *(double *)(param_3 + 0x24) = dVar29;
    local_1a0 = param_11;
    local_1a8 = param_3;
    FUN_143426011(lVar7,local_190,iVar22,param_3 + 10);
    if ((bVar27 && 0.0 < fVar3) &&
       (0.009999999776482582 <= ABS(1.0 - (dVar28 * dVar28 + dVar30 * dVar30 + dVar14 * dVar14)))) {
      dVar32 = dVar31 * dVar31 + dVar35 * dVar35 + dVar15 * dVar15;
      if (((dVar32 != 1.0) || (dVar28 = dVar31, dVar30 = dVar35, dVar29 = dVar15, NAN(dVar32))) &&
         (dVar28 = DAT_14c8464f0, dVar30 = DAT_14c8464e0, dVar29 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar32)) {
        dVar32 = 1.0 / SQRT(dVar32);
        dVar28 = dVar31 * dVar32;
        dVar30 = dVar32 * dVar35;
        dVar29 = dVar15 * dVar32;
      }
      dVar28 = -dVar28;
      dVar30 = -dVar30;
      dVar14 = -dVar29;
      uVar23 = (undefined4)((ulonglong)dVar14 >> 0x20);
      auVar11._8_4_ = SUB84(dVar29,0);
      auVar11._0_8_ = dVar30;
      auVar11._12_4_ = uVar23;
      *(undefined1 (*) [16])(param_3 + 0x10) = auVar11;
      *(double *)(param_3 + 0x14) = dVar28;
      auVar12._8_4_ = SUB84(dVar29,0);
      auVar12._0_8_ = dVar30;
      auVar12._12_4_ = uVar23;
      *(undefined1 (*) [16])(param_3 + 0x16) = auVar12;
      *(double *)(param_3 + 0x1a) = dVar28;
    }
    if (param_8 != 0) {
      bVar25 = *(byte *)(param_8 + 0x1c) & 0x1f;
      if (bVar25 == 4) {
        do {
          param_8 = *(longlong *)(param_8 + 0x20);
          bVar25 = *(byte *)(param_8 + 0x1c) & 0x1f;
        } while (param_8 != 0 && bVar25 == 4);
      }
      if (((bVar25 == 3) || (bVar25 == 0)) && (lVar24 = param_2[1], lVar24 != 0)) {
        cVar20 = (**(code **)(**(longlong **)(lVar24 + 0x10) + 8))();
        if ((cVar20 != '\x05') ||
           (((ABS((double)param_2[3]) <= 9.999999747378752e-05 &&
             (ABS((double)param_2[4]) <= 9.999999747378752e-05)) &&
            (ABS((double)param_2[5]) <= 9.999999747378752e-05)))) {
          lVar9 = *param_2;
          dVar17 = (double)*(float *)(lVar9 + 0x4c);
          dVar18 = (double)*(float *)(lVar9 + 0x48);
          local_188 = (double)*(float *)(lVar9 + 0x44);
          uStack_180 = 0;
          dVar16 = (double)*(float *)(lVar9 + 0x40);
          local_168._8_4_ = SUB84(local_188,0);
          local_168._0_8_ = dVar16;
          local_168._12_4_ = (int)((ulonglong)local_188 >> 0x20);
          dVar33 = dVar18 * -1.0;
          dVar34 = dVar17 * 1.0;
          dVar37 = dVar14 * -dVar16 - dVar30 * -local_188;
          dVar38 = dVar28 * -local_188 - dVar14 * dVar33;
          dVar36 = dVar30 * dVar33 - dVar28 * -dVar16;
          dVar38 = dVar38 + dVar38;
          dVar36 = dVar36 + dVar36;
          dVar37 = dVar37 + dVar37;
          local_118 = dVar37 * dVar34 + dVar28 + (dVar36 * -dVar16 - dVar38 * -local_188);
          dVar14 = dVar16 * dVar37 + dVar33 * dVar38 + dVar34 * dVar36 + dVar14;
          dVar32 = dVar15 * -dVar16 - dVar35 * -local_188;
          dVar29 = dVar31 * -local_188 - dVar15 * dVar33;
          dVar28 = dVar35 * dVar33 - dVar31 * -dVar16;
          dVar29 = dVar29 + dVar29;
          dVar28 = dVar28 + dVar28;
          dVar32 = dVar32 + dVar32;
          local_138 = dVar32 * dVar34 + dVar31 + (dVar28 * -dVar16 - dVar29 * -local_188);
          local_148 = (dVar32 * -local_188 - dVar28 * dVar33) + dVar34 * dVar29 + dVar35;
          dStack_140 = dVar16 * dVar32 + dVar33 * dVar29 + dVar34 * dVar28 + dVar15;
          local_1a8 = (undefined4 *)local_128;
          local_128._8_4_ = SUB84(dVar14,0);
          local_128._0_8_ = (dVar37 * -local_188 - dVar36 * dVar33) + dVar34 * dVar38 + dVar30;
          local_128._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
          local_178 = dVar18;
          dStack_170 = dVar17;
          (**(code **)(**(longlong **)(lVar24 + 0x10) + 0xc0))
                    (*(longlong **)(lVar24 + 0x10),&local_108,&local_148,(int)param_2[2]);
          dVar32 = dStack_100 * (double)local_168._0_8_ - local_188 * local_108;
          dVar29 = local_f8 * (double)local_168._8_8_ - dVar18 * dStack_100;
          dVar31 = local_108 * local_178 - dVar16 * local_f8;
          dVar32 = dVar32 + dVar32;
          dVar29 = dVar29 + dVar29;
          dVar31 = dVar31 + dVar31;
          dVar28 = dVar17 * dVar32 + local_f8 +
                   (dVar31 * (double)local_168._0_8_ - dVar29 * local_188);
          dVar30 = (dVar32 * (double)local_168._8_8_ - dVar31 * dVar18) +
                   dVar17 * dVar29 + local_108;
          dVar14 = (dVar18 * dVar29 - dVar32 * dVar16) + dVar17 * dVar31 + dStack_100;
        }
        else {
          dVar30 = (double)param_2[3];
          dVar14 = (double)param_2[4];
          dVar28 = (double)param_2[5];
        }
      }
    }
    auVar13._8_4_ = SUB84(dVar14,0);
    auVar13._0_8_ = dVar30;
    auVar13._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(param_3 + 0x16) = auVar13;
    *(double *)(param_3 + 0x1a) = dVar28;
    lVar24 = *(longlong *)(lVar7 + 0x10);
    bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
    if (bVar25 == 4 && lVar24 != 0) {
      do {
        lVar24 = *(longlong *)(lVar24 + 0x20);
        bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
      } while (lVar24 != 0 && bVar25 == 4);
    }
    uVar26 = 0;
    if (bVar25 == 0xc) {
      if (((param_11 & iVar22 != -1) != 1) ||
         (lVar24 = FUN_144b266e4(lVar7,local_190,iVar22), lVar24 == 0)) goto LAB_1400b34ac;
      piVar8 = *(int **)(lVar24 + 0x58);
      if ((piVar8 == (int *)0x0) || (*piVar8 != 2)) {
LAB_1400b3976:
        param_3[0x2c] = 0;
        iVar22 = 0;
      }
      else {
        if (*(longlong *)(piVar8 + 2) == 0) goto LAB_1400b3976;
        uVar40 = *(uint *)(*(longlong *)(piVar8 + 2) + 0xc);
        param_3[0x2c] = uVar40;
        if ((int)uVar40 < DAT_14c9647dc) {
          lVar24 = (ulonglong)((uVar40 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar40 >> 0x10) * 8);
        }
        else {
          lVar24 = 0;
        }
        iVar22 = *(int *)(lVar24 + 0x10);
        if (*(int *)(lVar24 + 0x10) == 0) {
          LOCK();
          iVar22 = DAT_14c964868 + 1;
          UNLOCK();
          iVar21 = DAT_14c964868 + 1;
          bVar27 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar22;
          if (bVar27) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar21);
          }
          LOCK();
          iVar22 = *(int *)(lVar24 + 0x10);
          bVar27 = iVar22 == 0;
          if (bVar27) {
            *(int *)(lVar24 + 0x10) = iVar21;
            iVar22 = 0;
          }
          UNLOCK();
          if (bVar27) {
            iVar22 = iVar21;
          }
        }
      }
      param_3[0x2d] = iVar22;
      goto LAB_1400b34ac;
    }
    if ((bVar25 != 0xb) || ((param_10 & iVar22 != -1) != 1)) goto LAB_1400b34ac;
  }
  else {
    if (lVar24 != 0 && lVar7 != 0) {
      pdVar2 = (double *)(lVar7 + 0x48 + (ulonglong)((*(byte *)(lVar7 + 8) & 3) == 0) * 8);
      local_108 = *pdVar2;
      dStack_100 = pdVar2[1];
      local_190 = lVar24;
      cVar20 = FUN_144b2633e(param_5,&local_108,0);
      *(byte *)((longlong)param_3 + 0xad) =
           *(byte *)((longlong)param_3 + 0xad) & 0xfc | cVar20 == '\x02' | 2;
      *(undefined8 *)(param_3 + 1) = 0;
      uVar19 = *(undefined8 *)(param_9 + 0x28);
      uVar26 = *(undefined8 *)(param_9 + 0x30);
      *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_9 + 0x20);
      *(undefined8 *)(param_3 + 6) = uVar19;
      *(undefined8 *)(param_3 + 8) = uVar26;
      if ((*(byte *)(param_2 + 7) & 1) == 0) {
LAB_1400b2f48:
        dVar32 = *param_6;
        dVar29 = param_6[1];
        *(double *)(param_3 + 0xe) = param_6[2];
        *(double *)(param_3 + 10) = dVar32;
        *(double *)(param_3 + 0xc) = dVar29;
      }
      else {
        dVar32 = (double)param_2[8];
        dVar29 = (double)param_2[9];
        dVar31 = (double)param_2[10];
        iVar21 = _finite(dVar32);
        if (((iVar21 == 0) || (iVar21 = _finite(dVar29), iVar21 == 0)) ||
           (iVar21 = _finite(dVar31), iVar21 == 0)) goto LAB_1400b2f48;
        *(double *)(param_3 + 10) = dVar32;
        *(double *)(param_3 + 0xc) = dVar29;
        *(double *)(param_3 + 0xe) = dVar31;
      }
      dVar32 = *param_6;
      dVar29 = param_6[1];
      *(double *)(param_3 + 0x20) = param_6[2];
      *(double *)(param_3 + 0x1c) = dVar32;
      *(double *)(param_3 + 0x1e) = dVar29;
      dVar32 = *param_7;
      dVar29 = param_7[1];
      *(double *)(param_3 + 0x26) = param_7[2];
      *(double *)(param_3 + 0x22) = dVar32;
      *(double *)(param_3 + 0x24) = dVar29;
      dVar32 = (double)param_2[0xb];
      dVar29 = (double)param_2[0xc];
      dVar31 = (double)param_2[0xd];
      iVar21 = _finite(dVar32);
      if (((iVar21 == 0) || (iVar21 = _finite(dVar29), iVar21 == 0)) ||
         ((iVar21 = _finite(dVar31), iVar21 == 0 || ((*(ushort *)(param_2 + 7) & 2) == 0)))) {
        *(undefined8 *)(param_3 + 0x1a) = DAT_14c8462d0;
        uVar26 = DAT_14c8462c8;
        *(undefined8 *)(param_3 + 0x16) = DAT_14c8462c0;
        *(undefined8 *)(param_3 + 0x18) = uVar26;
        param_3[0x28] = 0;
        if (cVar20 != '\x02') {
          dVar29 = param_6[2] - param_7[2];
          dVar32 = param_6[1] - param_7[1];
          dVar31 = *param_6 - *param_7;
          dVar35 = dVar29 * dVar29 + dVar31 * dVar31 + dVar32 * dVar32;
          if (((dVar35 != 1.0) || (dVar28 = dVar31, dVar15 = dVar32, dVar30 = dVar29, NAN(dVar35)))
             && (dVar28 = DAT_14c8464e0, dVar15 = DAT_14c8464e8, dVar30 = DAT_14c8464f0,
                9.99999993922529e-09 <= dVar35)) {
            dVar35 = 1.0 / SQRT(dVar35);
            dVar28 = dVar31 * dVar35;
            dVar15 = dVar32 * dVar35;
            dVar30 = dVar29 * dVar35;
          }
          *(double *)(param_3 + 0x16) = dVar28;
          *(double *)(param_3 + 0x18) = dVar15;
          *(double *)(param_3 + 0x1a) = dVar30;
        }
      }
      else {
        *(double *)(param_3 + 0x16) = dVar32;
        *(double *)(param_3 + 0x18) = dVar29;
        *(double *)(param_3 + 0x1a) = dVar31;
        param_3[0x28] = *(uint *)(param_2 + 0xe) & 0x7fffffff;
      }
      *(undefined8 *)(param_3 + 0x14) = *(undefined8 *)(param_3 + 0x1a);
      *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x16);
      *(undefined8 *)(param_3 + 0x12) = *(undefined8 *)(param_3 + 0x18);
      local_1a0 = param_11;
      local_1a8 = param_3;
      FUN_143426011(lVar7,local_190,(int)param_2[2],param_3 + 10);
    }
    else {
      local_f8 = *(double *)(param_3 + 0x20);
      local_108 = *(double *)(param_3 + 0x1c);
      dStack_100 = *(double *)(param_3 + 0x1e);
      local_118 = *(double *)(param_3 + 0x26);
      local_128 = *(undefined1 (*) [16])(param_3 + 0x22);
      uVar26 = 0;
      memset(param_3,0,0x100);
      param_3[0x34] = 0xffffffff;
      param_3[0x29] = 0xffffffff;
      param_3[1] = 0x3f800000;
      *(double *)(param_3 + 0x20) = local_f8;
      *(double *)(param_3 + 0x1c) = local_108;
      *(double *)(param_3 + 0x1e) = dStack_100;
      *(double *)(param_3 + 0x26) = local_118;
      *(undefined8 *)(param_3 + 0x22) = local_128._0_8_;
      *(undefined8 *)(param_3 + 0x24) = local_128._8_8_;
      if (lVar7 == 0) goto LAB_1400b34ac;
    }
    lVar24 = *(longlong *)(lVar7 + 0x10);
    bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
    if (bVar25 == 4 && lVar24 != 0) {
      do {
        lVar24 = *(longlong *)(lVar24 + 0x20);
        bVar25 = *(byte *)(lVar24 + 0x1c) & 0x1f;
      } while (lVar24 != 0 && bVar25 == 4);
    }
    uVar26 = 0;
    if ((bVar25 != 0xb) || (param_10 != 1 || iVar22 == -1)) goto LAB_1400b34ac;
  }
  uVar26 = 0;
  uVar23 = FUN_147c68946(lVar7,iVar22);
  *param_3 = uVar23;
LAB_1400b34ac:
  if ((local_f0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar26;
}



// FUNCTION 1400b39a8 FUN_1400b39a8 body=26 status=ok
// SIG undefined FUN_1400b39a8(void)

void FUN_1400b39a8(longlong param_1)

{
  FUN_1447c0e7a();
  *(byte *)(param_1 + 0x674) = *(byte *)(param_1 + 0x674) & 0xf7;
  return;
}



// FUNCTION 1400b39c2 FUN_1400b39c2 body=511 status=ok
// SIG undefined FUN_1400b39c2(void)

char FUN_1400b39c2(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [39];
  char local_d1;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0;
  iVar2 = *(int *)(param_2 + 1);
  uVar3 = *param_2;
  local_d0 = param_4;
  local_80 = iVar2;
  if (iVar2 == 0) {
    local_7c = 0;
  }
  else {
    FUN_140a1e386(&local_88,iVar2,0);
    FUN_140a1e307(local_88,uVar3,iVar2);
  }
  if ((*(char *)(param_1 + 0xc0) == '\0') && (*(char *)(param_1 + 0xc1) == '\0')) {
    FUN_1470a1004(&local_88);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_d1 = FUN_1400b435e(param_1,&local_88,param_3,&local_98);
  lVar4 = local_98;
  if ((local_d1 != '\0') && (lVar5 = (longlong)(int)uStack_90, lVar5 != 0)) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(lVar4 + lVar6);
      local_c8 = *puVar1;
      uStack_c4 = puVar1[1];
      uStack_c0 = puVar1[2];
      uStack_bc = puVar1[3];
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_78 = 0;
      uStack_70 = 0;
      FUN_1400b3bc2(&local_b8,&local_c8,&local_78);
      FUN_1400b3c24(param_1,&local_b8);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar5 * 0x10 != lVar6);
  }
  if (&local_98 == local_d0 || local_d0 == (longlong *)0x0) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_d0 != 0) {
      FUN_1400020a8();
    }
    *local_d0 = local_98;
    local_98 = 0;
    *(int *)(local_d0 + 1) = (int)uStack_90;
    *(undefined4 *)((longlong)local_d0 + 0xc) = uStack_90._4_4_;
  }
  FUN_140861e20(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_d1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b3bc2 FUN_1400b3bc2 body=97 status=ok
// SIG undefined FUN_1400b3bc2(void)

void FUN_1400b3bc2(undefined4 *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  if ((longlong *)(param_1 + 4) != param_3) {
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 4) = *param_3;
    *param_3 = 0;
    param_1[6] = (int)param_3[1];
    param_1[7] = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
  if (*param_3 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400b3c24 FUN_1400b3c24 body=227 status=ok
// SIG undefined FUN_1400b3c24(void)

void FUN_1400b3c24(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined ***pppuVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  code *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(char *)(param_1 + 0x175) == '\0') && (*(int *)(param_1 + 0xbc) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xb8), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xbc))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      local_48 = (undefined ***)0x0;
      local_38 = &PTR_LAB_14a179180;
      local_58[0] = FUN_142b28f08;
      local_30 = param_1;
      local_28 = param_2;
      FUN_1400b3d08(param_2,local_58);
      if (local_58[0] != (code *)0x0) {
        pppuVar2 = local_48;
        if (local_48 == (undefined ***)0x0) {
          pppuVar2 = &local_38;
        }
        (*(code *)(*pppuVar2)[2])();
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b3d08 FUN_1400b3d08 body=60 status=ok
// SIG undefined FUN_1400b3d08(void)

void FUN_1400b3d08(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1400b3dae();
  if (lVar1 != 0) {
    lVar1 = FUN_1400b3e1a();
    if (lVar1 != 0) {
      FUN_1400b3d44(lVar1,param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1400b3d44 FUN_1400b3d44 body=105 status=ok
// SIG undefined FUN_1400b3d44(void)

void FUN_1400b3d44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  cVar1 = FUN_1400b40c0();
  if (cVar1 != '\0') {
    FUN_1400b3e9a(param_1,&local_48,param_3);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b3dae FUN_1400b3dae body=107 status=ok
// SIG undefined FUN_1400b3dae(void)

undefined8 FUN_1400b3dae(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "GbxNexus";
  local_10 = 8;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  plVar2 = (longlong *)FUN_1447c1074(uVar1);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b3e1a FUN_1400b3e1a body=119 status=ok
// SIG undefined FUN_1400b3e1a(void)

undefined8 FUN_1400b3e1a(void)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  char *local_18;
  undefined4 local_10;
  undefined1 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = "AssetRegistry";
  local_10 = 0xd;
  local_c = 0;
  uVar1 = FUN_14001a6c0(&local_18,1);
  plVar2 = (longlong *)FUN_1447c1074(uVar1);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
    uVar3 = (**(code **)(*plVar2 + 0x460))(plVar2);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b3e9a FUN_1400b3e9a body=156 status=ok
// SIG undefined FUN_1400b3e9a(void)

void FUN_1400b3e9a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = (longlong *)FUN_1400b3f36(param_1 + 0x58,param_2,param_1 + 0x108);
  if ((plVar5 != (longlong *)0x0) && (lVar4 = plVar5[1], (longlong)(int)lVar4 != 0)) {
    lVar2 = *plVar5;
    lVar8 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar8);
      if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_1 + 0x100))) &&
         (lVar7 = (longlong)iVar1 * 0xc + *(longlong *)(param_1 + 0xf8), lVar7 != 0)) {
        pcVar3 = (code *)*param_3;
        plVar5 = (longlong *)param_3[2];
        if ((longlong *)param_3[2] == (longlong *)0x0) {
          plVar5 = param_3 + 4;
        }
        uVar6 = (**(code **)(*plVar5 + 8))();
        (*pcVar3)(uVar6,lVar7);
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar8);
  }
  return;
}



// FUNCTION 1400b3f36 FUN_1400b3f36 body=218 status=ok
// SIG undefined FUN_1400b3f36(void)

longlong FUN_1400b3f36(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  undefined1 local_34 [20];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400b4012(local_34);
  uVar2 = FUN_14498da01(local_34);
  iVar3 = FUN_1447c11f0(param_1,uVar2,local_34);
  if (iVar3 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if ((*param_1 + (longlong)iVar3 * 0x20 != 0) &&
       (puVar5 = (uint *)(*param_1 + (longlong)iVar3 * 0x20 + 0x14), puVar5 != (uint *)0x0)) {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar1 = *puVar5;
        plVar6 = param_3 + 7;
        if ((longlong *)param_3[8] != (longlong *)0x0) {
          plVar6 = (longlong *)param_3[8];
        }
        iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_3[9] - 1U & uVar1) * 4);
        if (iVar3 != -1) {
          do {
            lVar7 = *param_3 + (longlong)iVar3 * 0x20;
            if (*(uint *)(*param_3 + (longlong)iVar3 * 0x20) == uVar1) goto LAB_1400b3fe3;
            iVar3 = *(int *)(lVar7 + 0x18);
          } while (iVar3 != -1);
        }
      }
      lVar7 = 0;
LAB_1400b3fe3:
      lVar4 = lVar7 + 8;
      if (lVar7 == 0) {
        lVar4 = 0;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b4012 FUN_1400b4012 body=173 status=ok
// SIG undefined FUN_1400b4012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b4012(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  
  *param_1 = 0;
  bVar6 = *(byte *)(param_1 + 1);
  *(byte *)(param_1 + 1) = bVar6 & 0xf8;
  *(undefined2 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = *param_2;
  lVar3 = _DAT_14c99def8;
  lVar1 = param_2[2];
  bVar6 = (lVar1 == _DAT_14c99def8) * '\x02' | bVar6 & 0xf8;
  *(byte *)(param_1 + 1) = bVar6;
  bVar6 = (param_2[2] == _DAT_14c99df00) << 2 | bVar6;
  *(byte *)(param_1 + 1) = bVar6;
  lVar4 = DAT_14c99df08;
  lVar2 = param_2[1];
  *(byte *)(param_1 + 1) = lVar2 == DAT_14c99df08 | bVar6;
  if (lVar2 == lVar4) {
    uVar5 = param_2[2];
  }
  else {
    if (lVar1 == lVar3) {
      FUN_147015e98(param_2,(longlong)param_1 + 10);
      return param_1;
    }
    uVar5 = param_2[3];
  }
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar5;
  return param_1;
}



// FUNCTION 1400b40c0 FUN_1400b40c0 body=334 status=ok
// SIG undefined FUN_1400b40c0(void)

undefined8 FUN_1400b40c0(undefined8 param_1,ulonglong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_a0 [64];
  undefined1 local_60 [16];
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  uVar4 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = *param_2;
  local_30 = uVar4;
  if (uVar3 != 0) {
    if (DAT_14c9485b8 == (longlong *)0x0) {
      lVar6 = 0;
      lVar5 = 0;
    }
    else {
      local_b8 = 0;
      (**(code **)(*DAT_14c9485b8 + 0x98))(DAT_14c9485b8,local_a0,param_2,1);
      FUN_1400b428a(local_a0,&local_b0);
      lVar6 = local_b0;
      if (local_a8 == 0) {
        lVar6 = 0;
      }
      lVar5 = local_a8;
      if (local_b0 == 0) {
        lVar5 = 0;
        lVar6 = local_b0;
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
      FUN_1400b4210(local_60);
    }
    uVar4 = uVar3 >> 0x20;
    *param_3 = (int)uVar3;
    param_3[1] = (int)(uVar3 >> 0x20);
    param_3[2] = (int)lVar6;
    param_3[3] = (int)((ulonglong)lVar6 >> 0x20);
    param_3[4] = (int)lVar5;
    param_3[5] = (int)((ulonglong)lVar5 >> 0x20);
    *(undefined8 *)(param_3 + 6) = 0;
    *(undefined2 *)(param_3 + 8) = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar4 >> 8),uVar3 != 0);
}



// FUNCTION 1400b4210 FUN_1400b4210 body=122 status=ok
// SIG undefined FUN_1400b4210(void)

void FUN_1400b4210(ushort *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if ((*param_1 & 1) == 0) {
    if (*(longlong *)param_1 != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (plVar3 = *(longlong **)param_1, plVar3 != (longlong *)0x0)) {
        FUN_140958ed1(*plVar3,(int)plVar3[1]);
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1400b4273;
      }
    }
  }
  else {
    plVar3 = *(longlong **)(&DAT_14c927ae8 + (ulonglong)(*param_1 & 0xfffffffc) * 2);
    LOCK();
    plVar2 = plVar3 + 0x18;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (plVar3 != (longlong *)0x0 && (int)*plVar2 == 0) {
      FUN_14587a8e6(plVar3);
LAB_1400b4273:
      FUN_1400020a8(plVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1400b428a FUN_1400b428a body=210 status=ok
// SIG undefined FUN_1400b428a(void)

longlong * FUN_1400b428a(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447c126c(param_1 + 0x40,&local_28,DAT_14c951750);
  if (local_28 == 0) {
    local_30 = 0;
  }
  else {
    FUN_14685b1a4(&local_28,&local_30);
  }
  FUN_1447c126c(param_1 + 0x40,&local_28,DAT_14c951758);
  if (local_28 == 0) {
    local_38 = 0;
  }
  else {
    FUN_14685b1a4(&local_28,&local_38);
  }
  if ((local_30 == 0) || (local_38 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = local_30;
    param_2[1] = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b435e FUN_1400b435e body=479 status=ok
// SIG undefined FUN_1400b435e(void)

undefined4 FUN_1400b435e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_8f8 [40];
  longlong local_8d0;
  longlong local_8c8;
  longlong *local_8c0;
  undefined8 local_8b8;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined1 *local_8a8;
  undefined4 local_8a0;
  longlong local_898;
  undefined8 uStack_890;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  char local_868;
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  if (param_3 == 0) {
    param_3 = DAT_14caddf80;
  }
  local_898 = 0;
  uStack_890 = 0;
  lVar4 = param_2[1];
  local_8d0 = param_3;
  local_8c8 = param_1;
  local_8c0 = param_4;
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar11 = 0;
    do {
      local_868 = '\0';
      local_870 = local_4a;
      local_8b8 = *(undefined8 *)(lVar3 + lVar11);
      local_880 = local_860;
      local_878 = local_860;
      FUN_14005eb5c(&local_8b8,&local_880);
      local_8a8 = local_880;
      local_8a0 = (undefined4)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
      cVar7 = FUN_14475c62c(&local_8a8);
      uVar6 = uStack_890;
      if (cVar7 == '\0') {
        puVar1 = (undefined8 *)(lVar11 + lVar3);
        local_8b8 = *puVar1;
        uStack_8b0 = *(undefined4 *)(puVar1 + 1);
        uStack_8ac = *(undefined4 *)((longlong)puVar1 + 0xc);
        lVar10 = (longlong)(int)uStack_890;
        uVar8 = (int)uStack_890 + 1;
        uStack_890 = CONCAT44(uStack_890._4_4_,uVar8);
        if (uStack_890._4_4_ < uVar8) {
          FUN_1401d5364(&local_898,uVar6 & 0xffffffff);
        }
        puVar2 = (undefined4 *)(local_898 + lVar10 * 0x10);
        *puVar2 = (undefined4)local_8b8;
        puVar2[1] = local_8b8._4_4_;
        puVar2[2] = uStack_8b0;
        puVar2[3] = uStack_8ac;
      }
      if (local_868 == '\x01') {
        FUN_1400020a8(local_880);
      }
      lVar11 = lVar11 + 0x20;
    } while ((longlong)(int)lVar4 * 0x20 != lVar11);
  }
  lVar4 = local_8c8;
  uVar9 = FUN_1448d4484(local_8c8 + 0x58,local_8d0,&local_898);
  plVar5 = local_8c0;
  if ((char)uVar9 != '\0') {
    *(undefined1 *)(lVar4 + 0x30) = 1;
  }
  if ((local_8c0 == (longlong *)0x0) || (&local_898 == local_8c0)) {
    if (local_898 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*local_8c0 != 0) {
      FUN_1400020a8();
    }
    *plVar5 = local_898;
    *(int *)(plVar5 + 1) = (int)uStack_890;
    *(uint *)((longlong)plVar5 + 0xc) = uStack_890._4_4_;
  }
  if ((local_48 ^ (ulonglong)auStack_8f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1400b453e FUN_1400b453e body=20 status=ok
// SIG undefined FUN_1400b453e(void)

void FUN_1400b453e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400b4552(param_1,*(undefined4 *)(param_1 + 8),param_2);
    return;
  }
  return;
}



// FUNCTION 1400b4552 FUN_1400b4552 body=228 status=ok
// SIG undefined FUN_1400b4552(void)

void FUN_1400b4552(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x10);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 0x10;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < iVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)iVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,iVar4 + (uint)(0xf < iVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)iVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 4);
      return;
    }
  }
  return;
}



// FUNCTION 1400b4636 FUN_1400b4636 body=38 status=ok
// SIG undefined FUN_1400b4636(void)

undefined8 FUN_1400b4636(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1400b465c(param_1 + -0x30);
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x360);
  }
  return uVar2;
}



// FUNCTION 1400b465c FUN_1400b465c body=59 status=ok
// SIG undefined FUN_1400b465c(void)

longlong FUN_1400b465c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_1400b4698();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1400b4698 FUN_1400b4698 body=221 status=ok
// SIG undefined FUN_1400b4698(void)

longlong FUN_1400b4698(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cadac78 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1417c5d06;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147aa5297;
    local_40 = &LAB_1463ca864;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"GameInstance",&DAT_14cadac78,FUN_1463ca842);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cadac78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b4776 FUN_1400b4776 body=179 status=ok
// SIG undefined FUN_1400b4776(void)

void FUN_1400b4776(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c992a90 == '\0') {
    FUN_144a61b4f();
  }
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((lVar1 == 0) || (local_40 = *(longlong *)(lVar1 + 8), local_40 == 0)) {
    local_40 = 0;
    param_2 = 0;
  }
  else if (param_2 == 1) {
    param_2 = DAT_14c993c90 + 1;
  }
  local_48 = param_1;
  local_38 = param_3;
  local_30 = param_2;
  FUN_1400b482a(&local_48,param_1 + 0x50);
  *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 0x10;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    FUN_144a78688(*(longlong *)(lVar1 + 8) + 0x70,lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b482a FUN_1400b482a body=496 status=ok
// SIG undefined FUN_1400b482a(void)

void FUN_1400b482a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  longlong *local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)*param_2;
  if (plVar7 == (longlong *)0x0) goto LAB_1400b4924;
  lVar4 = *param_1;
  iVar3 = (int)param_1[3];
  if (iVar3 == 0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
LAB_1400b486b:
    FUN_1447c18cc(*(undefined8 *)param_1[2],plVar7,*(undefined1 *)((undefined8 *)param_1[2] + 1));
  }
  else {
    if (iVar3 == 1) {
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_98);
    }
    else {
      if (iVar3 != 2) {
        plVar7 = (longlong *)0x0;
        goto LAB_1400b486b;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_98);
    }
    FUN_1447c18cc(*(undefined8 *)param_1[2],local_98,*(undefined1 *)((undefined8 *)param_1[2] + 1));
    plVar6 = (longlong *)*param_2;
    plVar7 = local_98;
    if (plVar6 != local_98) {
      *param_2 = (longlong)local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)*plVar2 == 0) && (*(int *)((longlong)plVar6 + 0xc) == 0)) {
          (**(code **)*plVar6)(plVar6,1);
        }
      }
    }
  }
  dStack_80 = (double)*(float *)(lVar4 + 0x4c);
  local_88 = (double)*(float *)(lVar4 + 0x48);
  uVar5 = *(undefined8 *)(lVar4 + 0x10);
  dStack_90 = (double)*(float *)(lVar4 + 0x44);
  local_98 = (longlong *)(double)*(float *)(lVar4 + 0x40);
  local_78 = *(undefined8 *)(lVar4 + 0x20);
  uStack_70 = *(undefined8 *)(lVar4 + 0x28);
  local_68 = *(undefined8 *)(lVar4 + 0x30);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_a0 = *(undefined8 **)(lVar4 + 0x50);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
    UNLOCK();
  }
  FUN_1400ed869(lVar4 + 0x78,&local_a0,&local_98,uVar5);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a0 + 0xc) == 0)) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if (((int)*plVar6 == 0) && (*(int *)((longlong)plVar7 + 0xc) == 0)) {
      (**(code **)*plVar7)(plVar7,1);
    }
  }
LAB_1400b4924:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b4a6a FUN_1400b4a6a body=81 status=ok
// SIG undefined FUN_1400b4a6a(void)

void FUN_1400b4a6a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  if ((longlong *)param_1[0x150] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x150] + 0x2b8))();
  }
  cVar2 = (**(code **)(*param_1 + 0x758))(param_1);
  if (cVar2 != '\0') {
    param_1[0xc4] = DAT_14c846508;
    lVar1 = DAT_14c846500;
    param_1[0xc2] = DAT_14c8464f8;
    param_1[0xc3] = lVar1;
  }
  return;
}



// FUNCTION 1400b4ad0 FUN_1400b4ad0 body=88 status=ok
// SIG undefined FUN_1400b4ad0(void)

void FUN_1400b4ad0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x1c) == param_2) {
          FUN_1400b4b28(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x1c + *param_1 + 0x14);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1400b4b28 FUN_1400b4b28 body=99 status=ok
// SIG undefined FUN_1400b4b28(void)

void FUN_1400b4b28(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)((longlong)iVar2 * 0x1c + lVar1 + 0x14);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_1400b4b8c();
  return;
}



// FUNCTION 1400b4b8c FUN_1400b4b8c body=128 status=ok
// SIG undefined FUN_1400b4b8c(void)

void FUN_1400b4b8c(longlong *param_1,int param_2)

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



// FUNCTION 1400b4c0c FUN_1400b4c0c body=194 status=ok
// SIG undefined FUN_1400b4c0c(void)

void FUN_1400b4c0c(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_3 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_3 + 8))(param_3);
    if ((*(byte *)(lVar3 + 2) & 4) != 0) {
      param_3 = (longlong *)**(undefined8 **)(param_3[0x48] + 0xa0);
    }
    lVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  }
  uVar2 = *(uint *)(param_2 + 0x17c);
  if (uVar2 != 0) {
    iVar5 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
      }
    }
    do {
      uVar4 = (**(code **)(**(longlong **)(param_2 + 0x40) + 0x278))
                        (*(longlong **)(param_2 + 0x40),iVar5);
      FUN_144706208(uVar4,*(undefined8 *)(lVar3 + 0xb8),0x7fffffff,param_4,param_5);
      bVar1 = (byte)iVar5 & 0x1f;
      uVar2 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar2;
      if (uVar2 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0;
        if (uVar2 != 0) {
          for (; (uVar2 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
      }
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 1400b4cce FUN_1400b4cce body=233 status=ok
// SIG undefined FUN_1400b4cce(void)

void FUN_1400b4cce(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = param_1 + 0x6d8;
  if (*(longlong *)(param_1 + 0x898) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x898);
  }
  if ((longlong)*(int *)(param_1 + 0x8a0) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x8a0) * 0x70 + lVar8;
    do {
      iVar2 = *(int *)(lVar8 + 0x10);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(lVar8 + 8);
        lVar9 = 0;
        do {
          puVar4 = *(undefined8 **)(lVar3 + lVar9);
          if (puVar4 != (undefined8 *)0x0) {
            *(undefined8 *)(lVar3 + lVar9) = 0;
            LOCK();
            piVar1 = (int *)(puVar4 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar4)(puVar4,1);
            }
          }
          lVar9 = lVar9 + 0x28;
        } while ((longlong)iVar2 * 0x28 != lVar9);
      }
      lVar8 = lVar8 + 0x70;
    } while (lVar8 != lVar7);
  }
  bVar5 = 3;
  do {
    uVar6 = (ulonglong)((-bVar5 & bVar5) == 2);
    puVar4 = *(undefined8 **)(param_1 + 0x8f8 + uVar6 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x8f8 + uVar6 * 8) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    bVar5 = bVar5 - 1 & bVar5;
  } while (bVar5 != 0);
  FUN_1456ca322(param_1 + 0x6b0);
  FUN_1456ca1d6(param_1);
  return;
}



// FUNCTION 1400b4db8 FUN_1400b4db8 body=88 status=ok
// SIG undefined FUN_1400b4db8(void)

void FUN_1400b4db8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3498c8;
  if ((*(byte *)((longlong)param_1 + 0x3d) & 2) != 0) {
    FUN_147370a04(param_1[2] + 0x658,param_1 + 3,*(undefined1 *)((longlong)param_1 + 0x3c),
                  *(undefined4 *)((longlong)param_1 + 0x34),*(byte *)((longlong)param_1 + 0x3d));
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 1400b4e10 FUN_1400b4e10 body=26 status=ok
// SIG undefined FUN_1400b4e10(void)

void FUN_1400b4e10(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  FUN_1400b4e32(uVar1);
  return;
}



// FUNCTION 1400b4e32 FUN_1400b4e32 body=99 status=ok
// SIG undefined FUN_1400b4e32(void)

void FUN_1400b4e32(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_1400b4e95(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x14) != 0)) {
    FUN_146dfc58c(param_1 + 8,0);
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x30) == *(int *)(param_1 + 0x5c)) {
    return;
  }
  FUN_140221dc0(param_1 + 0x28);
  FUN_140221c28(param_1 + 0x28);
  return;
}



// FUNCTION 1400b4e95 FUN_1400b4e95 body=55 status=ok
// SIG undefined FUN_1400b4e95(void)

void FUN_1400b4e95(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x1a;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1400b4ed2 FUN_1400b4ed2 body=57 status=ok
// SIG undefined FUN_1400b4ed2(void)

void FUN_1400b4ed2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a7f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a7f8 = FUN_140002ddd(FUN_1464caa8d,uVar1,L"GbxBodyNodeSettings_Switch");
  }
  return;
}



// FUNCTION 1400b4f0c FUN_1400b4f0c body=275 status=ok
// SIG undefined FUN_1400b4f0c(void)

void FUN_1400b4f0c(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 1400b5020 FUN_1400b5020 body=165 status=ok
// SIG undefined FUN_1400b5020(void)

undefined8 * FUN_1400b5020(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_3;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[1] = *param_2;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[3] = param_1;
  lVar2 = param_1[1];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[3];
    lVar2 = FUN_1447c2c38(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[1];
    param_1[1] = lVar2;
  }
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[6] = param_1;
  lVar2 = param_1[4];
  while (lVar2 != 0) {
    plVar1 = (longlong *)param_1[6];
    lVar2 = FUN_1447c2c38(*(undefined8 *)(lVar2 + 0x10));
    if (lVar2 == *plVar1) break;
    lVar2 = *(longlong *)param_1[4];
    param_1[4] = lVar2;
  }
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1400b50cc FUN_1400b50cc body=472 status=ok
// SIG undefined FUN_1400b50cc(void)

undefined8
FUN_1400b50cc(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = param_4[2];
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_98 = *(undefined8 *)(param_3 + 4);
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') {
      cVar1 = FUN_144a61b4f();
      if ((cVar1 != '\0') ||
         (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002)) {
        local_e8 = &local_48;
        local_38 = local_78;
        local_48 = local_88;
        uStack_40 = uStack_80;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_58 = local_98;
        local_c0 = &local_69;
        local_c8 = &DAT_14cad0f08;
        local_d0 = param_7;
        local_d8 = param_6;
        local_e0 = param_5;
        uVar2 = FUN_143444273(param_1,param_2,&local_a9);
        goto LAB_1400b51d2;
      }
    }
    local_e8 = &local_48;
    local_38 = local_78;
    local_48 = local_88;
    uStack_40 = uStack_80;
    local_68 = local_a8;
    uStack_64 = uStack_a4;
    uStack_60 = uStack_a0;
    uStack_5c = uStack_9c;
    local_58 = local_98;
    local_c0 = &local_69;
    local_c8 = &DAT_14cad0f08;
    local_d0 = param_7;
    local_d8 = param_6;
    local_e0 = param_5;
    uVar2 = FUN_14006c4c7(param_1,param_2,&local_a9);
  }
LAB_1400b51d2:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b52a6 FUN_1400b52a6 body=269 status=ok
// SIG undefined FUN_1400b52a6(void)

void FUN_1400b52a6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400b5544 FUN_1400b5544 body=211 status=ok
// SIG undefined FUN_1400b5544(void)

int FUN_1400b5544(uint *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((int)param_1[0x2c] < 1) {
    iVar3 = -1;
  }
  else {
    lVar7 = 1;
    lVar6 = 0;
    do {
      if ((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) {
LAB_1400b560c:
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          puVar5 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((puVar5 == (undefined8 *)0x0) || (*(uint *)(puVar5 + 2) != param_1[1])) ||
             ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_1400b560c;
          uVar4 = *puVar5;
        }
      }
      cVar2 = FUN_1447c3330(*(longlong *)(param_1 + 0x2a) + lVar6,uVar4);
      if (cVar2 == '\0') {
        iVar3 = -1;
      }
      else {
        iVar3 = (int)lVar7 + -1;
        if (*(char *)(*(longlong *)(param_1 + 0x2a) + 0x4a + lVar6) == '\0') {
          iVar3 = -1;
        }
      }
      if ((int)param_1[0x2c] <= lVar7) {
        return iVar3;
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x50;
    } while (iVar3 == -1);
  }
  return iVar3;
}



// FUNCTION 1400b5618 FUN_1400b5618 body=228 status=ok
// SIG undefined FUN_1400b5618(void)

longlong FUN_1400b5618(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cad06b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b576a;
    local_38 = &LAB_1479c0009;
    local_40 = FUN_1417bbe8d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"CapsuleComponent",&DAT_14cad06b0,FUN_1463b5a3a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad06b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b56fe FUN_1400b56fe body=314 status=ok
// SIG undefined FUN_1400b56fe(void)

undefined8 * FUN_1400b56fe(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 *_Dst;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if (*(byte *)(param_2 + 4) == (byte)param_3) {
    uVar1 = *(ushort *)(param_2 + 3);
    *(ushort *)(param_1 + 3) = uVar1;
    _Dst = param_1;
    puVar4 = param_2;
    if (0x18 < uVar1) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar1,0);
      *param_1 = _Dst;
      puVar4 = (undefined8 *)*param_2;
    }
    uVar3 = (ulonglong)((param_3 & 0xff) * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + uVar3);
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,puVar4,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
    }
    else {
      (*pcVar2)();
    }
    *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  }
  else {
    if (*(code **)(&DAT_14c9a8570 + (uint)*(byte *)(param_2 + 4) * 0x120) != (code *)0x0) {
      (**(code **)(&DAT_14c9a8570 + (uint)*(byte *)(param_2 + 4) * 0x120))(param_1,param_2,param_3);
      if (*(char *)(param_1 + 4) != '\0') {
        return param_1;
      }
      if (DAT_14c9a85d0 != (code *)0x0) {
        puVar4 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          puVar4 = (undefined8 *)*param_1;
        }
        (*DAT_14c9a85d0)(puVar4);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
    }
    if (*(code **)(&DAT_14c9a8578 + (param_3 & 0xff) * 0x120) != (code *)0x0) {
      (**(code **)(&DAT_14c9a8578 + (param_3 & 0xff) * 0x120))(param_1,param_2);
      if (*(char *)(param_1 + 4) != '\0') {
        return param_1;
      }
      if (DAT_14c9a85d0 != (code *)0x0) {
        puVar4 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          puVar4 = (undefined8 *)*param_1;
        }
        (*DAT_14c9a85d0)(puVar4);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
    }
    *(undefined2 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return param_1;
}



// FUNCTION 1400b5842 FUN_1400b5842 body=19 status=ok
// SIG undefined FUN_1400b5842(void)

void FUN_1400b5842(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1400b587e FUN_1400b587e body=142 status=ok
// SIG undefined FUN_1400b587e(void)

void FUN_1400b587e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 1400b590c FUN_1400b590c body=44 status=ok
// SIG undefined FUN_1400b590c(void)

longlong FUN_1400b590c(longlong param_1,int param_2)

{
  FUN_1400b5938(param_1 + 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b5938 FUN_1400b5938 body=99 status=ok
// SIG undefined FUN_1400b5938(void)

void FUN_1400b5938(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400b599c FUN_1400b599c body=5183 status=ok
// SIG undefined FUN_1400b599c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b599c(longlong param_1,longlong *param_2,longlong param_3,uint param_4,longlong param_5
                  ,undefined4 param_6,int param_7,undefined8 param_8,longlong param_9,byte param_10,
                  longlong *param_11,undefined8 param_12,longlong *param_13,longlong *param_14)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  ulonglong uVar28;
  byte bVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  undefined1 uVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar45 [16];
  
  auVar10 = _DAT_149931e80;
  if (0 < (int)param_2[1]) {
    puVar13 = (undefined4 *)((longlong)param_7 * 0xf8 + *(longlong *)(param_5 + 0x10) + 0x10);
    auVar44 = pmovsxbq(unaff_XMM7,0x302);
    auVar45 = pmovsxbq(unaff_XMM8,0x100);
    uVar24 = 0;
    do {
      if ((param_4 >> ((uint)uVar24 & 0x1f) & 1) != 0) {
        lVar21 = *(longlong *)(*param_2 + uVar24 * 8);
        iVar23 = (int)param_11[1];
        iVar4 = (int)param_11[2];
        iVar7 = (iVar4 + 0x44) / 0x44;
        *(int *)(param_11 + 2) = iVar4 + 1;
        if (iVar23 < iVar7) {
          do {
            lVar18 = FUN_14001cc68(0x3fc0,0x10);
            lVar25 = 0;
            do {
              *(undefined8 *)(lVar18 + 0xa8 + lVar25) = 0;
              puVar14 = (undefined8 *)(lVar18 + 0xb8 + lVar25);
              *puVar14 = 0;
              puVar14[1] = 0;
              *(undefined8 *)(lVar18 + 200 + lVar25) = 0;
              *(undefined8 *)(lVar18 + 0xd0 + lVar25) = 0xffffffff;
              *(undefined8 *)(lVar18 + 0xd8 + lVar25) = 0xff0000ffffffff;
              *(undefined1 *)(lVar18 + 0xe0 + lVar25) = 0;
              *(undefined4 *)(lVar18 + 0xe4 + lVar25) = 0x40c00f07;
              pbVar2 = (byte *)(lVar18 + 0xe8 + lVar25);
              *pbVar2 = *pbVar2 & 0xfc;
              *(undefined1 **)(lVar18 + 0xb0 + lVar25) = &DAT_100000001;
              FUN_14470b9e0(lVar18 + lVar25,1);
              lVar25 = lVar25 + 0xf0;
            } while (lVar25 != 0x3fc0);
            iVar5 = (int)param_11[1];
            *(uint *)(param_11 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
              FUN_14002baf6(param_11,iVar5);
            }
            *(longlong *)(*param_11 + (longlong)iVar5 * 8) = lVar18;
            iVar23 = iVar23 + 1;
          } while (iVar23 != iVar7);
        }
        lVar25 = *(longlong *)(*param_11 + (longlong)(iVar4 / 0x44) * 8);
        lVar32 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0;
        lVar18 = lVar25 + lVar32;
        FUN_144727972(param_1,lVar21,param_5,param_6,param_7,param_9,lVar18,param_12,0);
        if (*(longlong *)(lVar25 + 0xb8 + lVar32) != 0) {
          *(uint *)(lVar18 + 0xe4) =
               *(uint *)(lVar18 + 0xe4) & 0xff7e3fff |
               (*(uint *)(param_1 + 0x2cc) & 2) << 0xb | (uint)param_10 << 0x17;
          lVar27 = *(longlong *)(lVar18 + 0xa8);
          if (*(longlong *)(lVar18 + 0xa8) == 0) {
            lVar27 = lVar18;
          }
          *(undefined4 *)(lVar27 + 0x68) = *puVar13;
          uVar12 = *(uint *)(lVar18 + 0xe4);
          uVar11 = (*(byte *)(param_1 + 0x6b) & 1) << 6;
          *(uint *)(lVar18 + 0xe4) = uVar12 & 0xffffffbf | uVar11;
          *(uint *)(lVar18 + 0xe4) =
               (uint)*(byte *)(param_9 + 8) * 0x100 + (uVar12 & 0xffcffebf | uVar11) + 0x100000;
          if (*(char *)(param_9 + 0x10) == '\x01') {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb06de4) && (FUN_144b3d300(&DAT_14cb06de4), DAT_14cb06de4 == -1))
            {
              DAT_14cb06de0 = 2;
              _Init_thread_footer(&DAT_14cb06de4);
            }
            if ((DAT_14cb06de0 != 0) && (*(uint *)(lVar21 + 0x30b8) != 0)) {
              if ((longlong)*(int *)(param_1 + 0xf0) == 0) {
                bVar35 = false;
                bVar36 = false;
              }
              else {
                uVar28 = (longlong)*(int *)(param_1 + 0xf0) * 8;
                uVar30 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar30) ==
                      *(longlong *)(lVar21 + 0x30b0)) {
                    bVar35 = (~uVar30 & 0x7fffffff8) != 0;
                    goto LAB_1400b5ce6;
                  }
                  uVar30 = uVar30 + 8;
                } while (uVar28 != uVar30);
                bVar35 = false;
LAB_1400b5ce6:
                uVar30 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + uVar30) ==
                      *(longlong *)(lVar21 + 0x4c0)) {
                    bVar36 = (~uVar30 & 0x7fffffff8) != 0;
                    goto LAB_1400b5d22;
                  }
                  uVar30 = uVar30 + 8;
                } while (uVar28 != uVar30);
                bVar36 = false;
              }
LAB_1400b5d22:
              if (((bVar36) || ((*(uint *)(lVar21 + 0x30c0) & DAT_14cb06de0) == 0)) &&
                 (!(bool)(~bVar35 & (*(uint *)(lVar21 + 0x30c4) & DAT_14cb06de0) != 0))) {
                uVar12 = DAT_14cb06de0;
                if (!bVar36) {
                  uVar12 = DAT_14cb06de0 & *(uint *)(lVar21 + 0x30bc);
                }
                if ((uVar12 & ~*(uint *)(lVar21 + 0x30b8)) == 0) goto LAB_1400b5d6e;
              }
              *(byte *)(lVar18 + 0xe5) = *(byte *)(lVar18 + 0xe5) & 0xf9;
            }
          }
LAB_1400b5d6e:
          lVar25 = lVar25 + lVar32;
          puVar14 = (undefined8 *)(lVar25 + 0xb8);
          lVar32 = *(longlong *)(lVar18 + 0xc0);
          if (lVar32 != 0) {
            plVar26 = *(longlong **)(param_1 + 0x220);
            if (*(longlong **)(param_1 + 0x220) == (longlong *)0x0) {
              plVar26 = param_14;
            }
            plVar15 = *(longlong **)(param_1 + 0x228);
            if (*(longlong **)(param_1 + 0x228) == (longlong *)0x0) {
              plVar15 = param_13;
            }
            lVar27 = lVar18;
            if (*(longlong *)(lVar21 + 0x20) == 0) {
              if (plVar26 != (longlong *)0x0 || plVar15 != (longlong *)0x0) {
                plVar17 = (longlong *)FUN_14485b2b4(lVar32,*(undefined1 *)(param_1 + 0x2cd));
                uVar12 = (**(code **)(*plVar17 + 0x270))(plVar17);
                if ((plVar26 == (longlong *)0x0) ||
                   (lVar32 = (**(code **)(*plVar26 + 0x2f0))(plVar26), lVar32 == 0)) {
                  bVar29 = 0;
                }
                else {
                  bVar29 = *(byte *)(*(longlong *)(lVar18 + 0xc0) + 0xc0) ^ 1;
                }
                uVar11 = 0;
                if ((plVar15 != (longlong *)0x0) && (uVar12 < 2)) {
                  lVar32 = (**(code **)(*plVar15 + 0x2f0))(plVar15,uVar24);
                  if (lVar32 == 0) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = *(byte *)(*(longlong *)(lVar18 + 0xc0) + 0xc1) ^ 1;
                  }
                }
                if ((byte)(bVar29 | (byte)uVar11) == 1) {
                  uVar33 = (undefined1)uVar12;
                  if (bVar29 == 0) {
                    uVar34 = uVar11 << 5;
                    uVar31 = 2;
                    uVar19 = 0;
                    bVar29 = 0;
                  }
                  else {
                    iVar23 = (int)param_11[1];
                    iVar4 = (int)param_11[2];
                    iVar7 = (iVar4 + 0x44) / 0x44;
                    *(int *)(param_11 + 2) = iVar4 + 1;
                    if (iVar23 < iVar7) {
                      do {
                        lVar32 = FUN_14001cc68(0x3fc0,0x10);
                        lVar27 = 0;
                        do {
                          *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0;
                          puVar1 = (undefined8 *)(lVar32 + 0xb8 + lVar27);
                          *puVar1 = 0;
                          puVar1[1] = 0;
                          *(undefined8 *)(lVar32 + 200 + lVar27) = 0;
                          *(undefined8 *)(lVar32 + 0xd0 + lVar27) = 0xffffffff;
                          *(undefined8 *)(lVar32 + 0xd8 + lVar27) = 0xff0000ffffffff;
                          *(undefined1 *)(lVar32 + 0xe0 + lVar27) = 0;
                          *(undefined4 *)(lVar32 + 0xe4 + lVar27) = 0x40c00f07;
                          pbVar2 = (byte *)(lVar32 + 0xe8 + lVar27);
                          *pbVar2 = *pbVar2 & 0xfc;
                          *(undefined1 **)(lVar32 + 0xb0 + lVar27) = &DAT_100000001;
                          FUN_14470b9e0(lVar27 + lVar32,1);
                          lVar27 = lVar27 + 0xf0;
                        } while (lVar27 != 0x3fc0);
                        iVar5 = (int)param_11[1];
                        *(uint *)(param_11 + 1) = iVar5 + 1U;
                        if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
                          FUN_14002baf6(param_11,iVar5);
                        }
                        *(longlong *)(*param_11 + (longlong)iVar5 * 8) = lVar32;
                        iVar23 = iVar23 + 1;
                      } while (iVar23 != iVar7);
                    }
                    lVar32 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0 +
                             *(longlong *)(*param_11 + (longlong)(iVar4 / 0x44) * 8);
                    if (lVar32 != lVar18) {
                      lVar27 = *(longlong *)(lVar32 + 0xa8);
                      if (*(longlong *)(lVar32 + 0xa8) == 0) {
                        lVar27 = lVar32;
                      }
                      FUN_1446fc26f(lVar27,*(undefined4 *)(lVar32 + 0xb0));
                      iVar23 = *(int *)(lVar18 + 0xb0);
                      lVar27 = *(longlong *)(lVar18 + 0xa8);
                      *(int *)(lVar32 + 0xb0) = iVar23;
                      if (iVar23 == 0 && *(int *)(lVar32 + 0xb4) == 0) {
                        *(undefined4 *)(lVar32 + 0xb4) = 1;
                      }
                      else {
                        if (lVar27 == 0) {
                          lVar27 = lVar18;
                        }
                        FUN_14473945a(lVar32,iVar23);
                        lVar20 = *(longlong *)(lVar32 + 0xa8);
                        if (*(longlong *)(lVar32 + 0xa8) == 0) {
                          lVar20 = lVar32;
                        }
                        FUN_1447393f1(lVar20,lVar27,iVar23);
                      }
                    }
                    uVar16 = *puVar14;
                    uVar9 = *(undefined8 *)(lVar25 + 0xc0);
                    auVar3 = *(undefined1 (*) [16])(lVar25 + 200);
                    *(undefined1 (*) [16])(lVar32 + 0xd8) = *(undefined1 (*) [16])(lVar25 + 0xd8);
                    *(undefined1 *)(lVar32 + 0xe8) = *(undefined1 *)(lVar25 + 0xe8);
                    *(undefined1 (*) [16])(lVar32 + 200) = auVar3;
                    uVar19 = *(uint *)(lVar32 + 0xe4) & 0x100;
                    if (uVar12 >= 2) {
                      uVar19 = 0;
                    }
                    *(undefined8 *)(lVar32 + 0xb8) = uVar16;
                    *(undefined8 *)(lVar32 + 0xc0) = uVar9;
                    *(undefined1 *)(lVar32 + 0xdf) = 1;
                    *(undefined1 *)(lVar32 + 0xe0) = uVar33;
                    uVar34 = uVar11 * 0x20;
                    *(uint *)(lVar32 + 0xe4) =
                         ((uint)(uVar12 < 2) + (uint)(uVar12 < 2) * 2 |
                          *(uint *)(lVar32 + 0xe4) & 0xfffffec0 | uVar19) + uVar34 + 0x18;
                    uVar16 = (**(code **)(*plVar26 + 0x2f0))(plVar26);
                    *(undefined8 *)(lVar32 + 0xc0) = uVar16;
                    FUN_1436a14f8(param_11,uVar24 & 0xffffffff,lVar32);
                    uVar31 = 0;
                    uVar19 = 0x10;
                  }
                  uVar8 = *(uint *)(lVar18 + 0xe4) & 0x100;
                  if (bVar29 != 0) {
                    uVar8 = 0;
                  }
                  *(undefined1 *)(lVar18 + 0xdf) = 0;
                  *(undefined1 *)(lVar18 + 0xe0) = uVar33;
                  *(uint *)(lVar18 + 0xe4) =
                       uVar34 | uVar19 |
                       bVar29 ^ 1 | uVar31 | *(uint *)(lVar18 + 0xe4) & 0xfffffec0 | uVar8 | 0xc;
                  FUN_1436a14f8(param_11,uVar24,lVar18);
                  if ((1 < uVar12) || ((byte)uVar11 != 1)) goto LAB_1400b63f7;
                  iVar23 = (int)param_11[1];
                  iVar4 = (int)param_11[2];
                  iVar7 = (iVar4 + 0x44) / 0x44;
                  *(int *)(param_11 + 2) = iVar4 + 1;
                  if (iVar23 < iVar7) {
                    do {
                      lVar32 = FUN_14001cc68(0x3fc0,0x10);
                      lVar27 = 0;
                      do {
                        *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0;
                        puVar1 = (undefined8 *)(lVar32 + 0xb8 + lVar27);
                        *puVar1 = 0;
                        puVar1[1] = 0;
                        *(undefined8 *)(lVar32 + 200 + lVar27) = 0;
                        *(undefined8 *)(lVar32 + 0xd0 + lVar27) = 0xffffffff;
                        *(undefined8 *)(lVar32 + 0xd8 + lVar27) = 0xff0000ffffffff;
                        *(undefined1 *)(lVar32 + 0xe0 + lVar27) = 0;
                        *(undefined4 *)(lVar32 + 0xe4 + lVar27) = 0x40c00f07;
                        pbVar2 = (byte *)(lVar32 + 0xe8 + lVar27);
                        *pbVar2 = *pbVar2 & 0xfc;
                        *(undefined1 **)(lVar32 + 0xb0 + lVar27) = &DAT_100000001;
                        FUN_14470b9e0(lVar32 + lVar27,1);
                        lVar27 = lVar27 + 0xf0;
                      } while (lVar27 != 0x3fc0);
                      iVar5 = (int)param_11[1];
                      *(uint *)(param_11 + 1) = iVar5 + 1U;
                      if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
                        FUN_14002baf6(param_11,iVar5);
                      }
                      *(longlong *)(*param_11 + (longlong)iVar5 * 8) = lVar32;
                      iVar23 = iVar23 + 1;
                    } while (iVar23 != iVar7);
                  }
                  lVar27 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0 +
                           *(longlong *)(*param_11 + (longlong)(iVar4 / 0x44) * 8);
                  if (lVar27 != lVar18) {
                    lVar32 = *(longlong *)(lVar27 + 0xa8);
                    if (*(longlong *)(lVar27 + 0xa8) == 0) {
                      lVar32 = lVar27;
                    }
                    FUN_1446fc26f(lVar32,*(undefined4 *)(lVar27 + 0xb0));
                    iVar23 = *(int *)(lVar18 + 0xb0);
                    lVar32 = *(longlong *)(lVar18 + 0xa8);
                    *(int *)(lVar27 + 0xb0) = iVar23;
                    if (iVar23 == 0 && *(int *)(lVar27 + 0xb4) == 0) {
                      *(undefined4 *)(lVar27 + 0xb4) = 1;
                    }
                    else {
                      if (lVar32 == 0) {
                        lVar32 = lVar18;
                      }
                      FUN_14473945a(lVar27,iVar23);
                      lVar20 = *(longlong *)(lVar27 + 0xa8);
                      if (*(longlong *)(lVar27 + 0xa8) == 0) {
                        lVar20 = lVar27;
                      }
                      FUN_1447393f1(lVar20,lVar32,iVar23);
                    }
                  }
                  uVar16 = *puVar14;
                  uVar9 = *(undefined8 *)(lVar25 + 0xc0);
                  auVar3 = *(undefined1 (*) [16])(lVar25 + 200);
                  *(undefined1 (*) [16])(lVar27 + 0xd8) = *(undefined1 (*) [16])(lVar25 + 0xd8);
                  *(undefined1 *)(lVar27 + 0xe8) = *(undefined1 *)(lVar25 + 0xe8);
                  *(undefined1 (*) [16])(lVar27 + 200) = auVar3;
                  *(undefined8 *)(lVar27 + 0xb8) = uVar16;
                  *(undefined8 *)(lVar27 + 0xc0) = uVar9;
                  *(undefined1 *)(lVar27 + 0xdf) = 2;
                  *(undefined1 *)(lVar27 + 0xe0) = uVar33;
                  *(uint *)(lVar27 + 0xe4) =
                       uVar34 + (uVar19 | *(uint *)(lVar27 + 0xe4) & 0xfffffec0) + 0xc;
                  uVar16 = (**(code **)(*plVar15 + 0x2f0))(plVar15);
                  *(undefined8 *)(lVar27 + 0xc0) = uVar16;
                }
              }
            }
            else if ((plVar26 != (longlong *)0x0) && (*(char *)(lVar32 + 0xc0) == '\0')) {
              plVar15 = (longlong *)FUN_14485b2b4(lVar32,*(undefined1 *)(param_1 + 0x2cd));
              uVar12 = (**(code **)(*plVar15 + 0x270))(plVar15);
              if (1 < uVar12) goto LAB_1400b63f7;
              if (uVar12 != 1) {
                uVar16 = (**(code **)(*plVar26 + 0x2f0))(plVar26);
                *(undefined8 *)(lVar18 + 0xc0) = uVar16;
              }
            }
            FUN_1436a14f8(param_11,uVar24,lVar27);
          }
LAB_1400b63f7:
          if ((*(longlong *)(param_1 + 0x2c0) != 0) &&
             (fVar37 = *(float *)(param_1 + 0x2c8), 0.0 <= fVar37)) {
            if ((0.0 < fVar37) &&
               (((fVar37 != 3.4028235e+38 || (NAN(fVar37))) &&
                ((*(byte *)(param_3 + 0x5b) & 4) == 0)))) {
              fVar39 = DAT_14cb0cc3c;
              if (1e-08 < ABS(DAT_14cb0cc3c - DAT_14cb0cc34)) {
                fVar39 = *(float *)(lVar21 + 0x1dec);
                if (DAT_14cb0cc38 <= *(float *)(lVar21 + 0x1dec)) {
                  fVar39 = DAT_14cb0cc38;
                }
                if (fVar39 <= DAT_14cb0cc30) {
                  fVar39 = DAT_14cb0cc30;
                }
                fVar39 = ((fVar39 - DAT_14cb0cc30) / (DAT_14cb0cc38 - DAT_14cb0cc30)) *
                         (DAT_14cb0cc3c - DAT_14cb0cc34) + DAT_14cb0cc34;
              }
              dVar41 = *(double *)(param_1 + 400) - *(double *)(lVar21 + 0x1058);
              dVar43 = *(double *)(param_1 + 0x188) - *(double *)(lVar21 + 0x1050);
              dVar42 = *(double *)(param_1 + 0x180) - *(double *)(lVar21 + 0x1048);
              fVar37 = fVar37 * fVar39 * _DAT_14cb0cc1c;
              if (fVar37 * fVar37 < (float)(dVar41 * dVar41 + dVar42 * dVar42 + dVar43 * dVar43))
              goto LAB_1400b6668;
            }
            iVar23 = (int)param_11[1];
            iVar4 = (int)param_11[2];
            iVar7 = (iVar4 + 0x44) / 0x44;
            *(int *)(param_11 + 2) = iVar4 + 1;
            if (iVar23 < iVar7) {
              do {
                lVar32 = FUN_14001cc68(0x3fc0,0x10);
                lVar27 = 0;
                do {
                  *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0;
                  puVar1 = (undefined8 *)(lVar32 + 0xb8 + lVar27);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar32 + 200 + lVar27) = 0;
                  *(undefined8 *)(lVar32 + 0xd0 + lVar27) = 0xffffffff;
                  *(undefined8 *)(lVar32 + 0xd8 + lVar27) = 0xff0000ffffffff;
                  *(undefined1 *)(lVar32 + 0xe0 + lVar27) = 0;
                  *(undefined4 *)(lVar32 + 0xe4 + lVar27) = 0x40c00f07;
                  pbVar2 = (byte *)(lVar32 + 0xe8 + lVar27);
                  *pbVar2 = *pbVar2 & 0xfc;
                  *(undefined1 **)(lVar32 + 0xb0 + lVar27) = &DAT_100000001;
                  FUN_14470b9e0(lVar32 + lVar27,1);
                  lVar27 = lVar27 + 0xf0;
                } while (lVar27 != 0x3fc0);
                iVar5 = (int)param_11[1];
                *(uint *)(param_11 + 1) = iVar5 + 1U;
                if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
                  FUN_14002baf6(param_11,iVar5);
                }
                *(longlong *)(*param_11 + (longlong)iVar5 * 8) = lVar32;
                iVar23 = iVar23 + 1;
              } while (iVar23 != iVar7);
            }
            lVar32 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0 +
                     *(longlong *)(*param_11 + (longlong)(iVar4 / 0x44) * 8);
            if (lVar32 != lVar18) {
              lVar27 = *(longlong *)(lVar32 + 0xa8);
              if (*(longlong *)(lVar32 + 0xa8) == 0) {
                lVar27 = lVar32;
              }
              FUN_1446fc26f(lVar27,*(undefined4 *)(lVar32 + 0xb0));
              iVar23 = *(int *)(lVar18 + 0xb0);
              lVar27 = *(longlong *)(lVar18 + 0xa8);
              *(int *)(lVar32 + 0xb0) = iVar23;
              if (iVar23 == 0 && *(int *)(lVar32 + 0xb4) == 0) {
                *(undefined4 *)(lVar32 + 0xb4) = 1;
              }
              else {
                if (lVar27 == 0) {
                  lVar27 = lVar18;
                }
                FUN_14473945a(lVar32,iVar23);
                lVar20 = *(longlong *)(lVar32 + 0xa8);
                if (*(longlong *)(lVar32 + 0xa8) == 0) {
                  lVar20 = lVar32;
                }
                FUN_1447393f1(lVar20,lVar27,iVar23);
              }
            }
            uVar16 = *puVar14;
            uVar9 = *(undefined8 *)(lVar25 + 0xc0);
            auVar3 = *(undefined1 (*) [16])(lVar25 + 200);
            *(undefined1 (*) [16])(lVar32 + 0xd8) = *(undefined1 (*) [16])(lVar25 + 0xd8);
            *(undefined1 *)(lVar32 + 0xe8) = *(undefined1 *)(lVar25 + 0xe8);
            *(undefined1 (*) [16])(lVar32 + 200) = auVar3;
            *(undefined8 *)(lVar32 + 0xb8) = uVar16;
            *(undefined8 *)(lVar32 + 0xc0) = uVar9;
            *(uint *)(lVar32 + 0xe4) = *(uint *)(lVar32 + 0xe4) & 0xdf7ffeff | 0x20000000;
            uVar16 = (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x2f0))();
            *(undefined8 *)(lVar32 + 0xc0) = uVar16;
            *(short *)(lVar32 + 0xdc) = *(short *)(lVar32 + 0xdc) + *(short *)(param_5 + 0x18);
            FUN_1436a14f8(param_11,uVar24 & 0xffffffff,lVar32);
          }
LAB_1400b6668:
          if ((*(byte *)(lVar18 + 0xe5) & 1) != 0) {
            lVar32 = *(longlong *)(lVar18 + 0xa8);
            if (*(longlong *)(lVar18 + 0xa8) == 0) {
              lVar32 = lVar18;
            }
            if (*(char *)(lVar32 + 0x80) == '\x01') {
              iVar23 = (int)param_11[1];
              iVar4 = (int)param_11[2];
              iVar7 = (iVar4 + 0x44) / 0x44;
              *(int *)(param_11 + 2) = iVar4 + 1;
              if (iVar23 < iVar7) {
                do {
                  lVar32 = FUN_14001cc68(0x3fc0,0x10);
                  lVar27 = 0;
                  do {
                    *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0;
                    puVar1 = (undefined8 *)(lVar32 + 0xb8 + lVar27);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined8 *)(lVar32 + 200 + lVar27) = 0;
                    *(undefined8 *)(lVar32 + 0xd0 + lVar27) = 0xffffffff;
                    *(undefined8 *)(lVar32 + 0xd8 + lVar27) = 0xff0000ffffffff;
                    *(undefined1 *)(lVar32 + 0xe0 + lVar27) = 0;
                    *(undefined4 *)(lVar32 + 0xe4 + lVar27) = 0x40c00f07;
                    pbVar2 = (byte *)(lVar32 + 0xe8 + lVar27);
                    *pbVar2 = *pbVar2 & 0xfc;
                    *(undefined1 **)(lVar32 + 0xb0 + lVar27) = &DAT_100000001;
                    FUN_14470b9e0(lVar32 + lVar27,1);
                    lVar27 = lVar27 + 0xf0;
                  } while (lVar27 != 0x3fc0);
                  iVar5 = (int)param_11[1];
                  *(uint *)(param_11 + 1) = iVar5 + 1U;
                  if (*(uint *)((longlong)param_11 + 0xc) < iVar5 + 1U) {
                    FUN_14002baf6(param_11,iVar5);
                  }
                  *(longlong *)(*param_11 + (longlong)iVar5 * 8) = lVar32;
                  iVar23 = iVar23 + 1;
                } while (iVar23 != iVar7);
              }
              lVar32 = (ulonglong)(uint)(iVar4 % 0x44) * 0xf0 +
                       *(longlong *)(*param_11 + (longlong)(iVar4 / 0x44) * 8);
              if (lVar32 != lVar18) {
                lVar27 = *(longlong *)(lVar32 + 0xa8);
                if (*(longlong *)(lVar32 + 0xa8) == 0) {
                  lVar27 = lVar32;
                }
                FUN_1446fc26f(lVar27,*(undefined4 *)(lVar32 + 0xb0));
                iVar23 = *(int *)(lVar18 + 0xb0);
                lVar27 = *(longlong *)(lVar18 + 0xa8);
                *(int *)(lVar32 + 0xb0) = iVar23;
                if (iVar23 == 0 && *(int *)(lVar32 + 0xb4) == 0) {
                  *(undefined4 *)(lVar32 + 0xb4) = 1;
                }
                else {
                  if (lVar27 == 0) {
                    lVar27 = lVar18;
                  }
                  FUN_14473945a(lVar32,iVar23);
                  lVar20 = *(longlong *)(lVar32 + 0xa8);
                  if (*(longlong *)(lVar32 + 0xa8) == 0) {
                    lVar20 = lVar32;
                  }
                  FUN_1447393f1(lVar20,lVar27,iVar23);
                }
              }
              *(undefined1 *)(lVar32 + 0xe8) = *(undefined1 *)(lVar25 + 0xe8);
              uVar16 = *puVar14;
              uVar9 = *(undefined8 *)(lVar25 + 0xc0);
              auVar3 = *(undefined1 (*) [16])(lVar25 + 200);
              *(undefined1 (*) [16])(lVar32 + 0xd8) = *(undefined1 (*) [16])(lVar25 + 0xd8);
              *(undefined1 (*) [16])(lVar32 + 200) = auVar3;
              *(undefined8 *)(lVar32 + 0xb8) = uVar16;
              *(undefined8 *)(lVar32 + 0xc0) = uVar9;
              *(byte *)(lVar18 + 0xe5) = *(byte *)(lVar18 + 0xe5) & 0xfe;
              *(uint *)(lVar32 + 0xe4) = *(uint *)(lVar32 + 0xe4) & 0xff7ff9ff;
              FUN_1447e22f6(param_1,lVar21,param_5,param_6,param_7,param_9,lVar32,param_12,0);
              lVar21 = *(longlong *)(lVar32 + 0xa8);
              if (*(longlong *)(lVar32 + 0xa8) == 0) {
                lVar21 = lVar32;
              }
              if ((longlong)*(int *)(lVar32 + 0xb0) != 0) {
                uVar6 = *puVar13;
                uVar28 = (longlong)*(int *)(lVar32 + 0xb0) * 0xa8 - 0xa8U >> 3;
                auVar3._8_8_ = 0;
                auVar3._0_8_ = uVar28;
                auVar38._8_4_ = SUB164(auVar3 * ZEXT816(0xc30c30c30c30c31),8);
                auVar38._0_8_ = uVar28 / 0x15;
                auVar38._12_4_ = (int)(uVar28 / 0x1500000000);
                puVar22 = (undefined4 *)(lVar21 + 0x260);
                lVar21 = SUB168(auVar38 | auVar10,0);
                uVar30 = 0;
                do {
                  if ((bool)(~(lVar21 < (longlong)(uVar30 ^ auVar10._0_8_)) & 1)) {
                    puVar22[-0x7e] = uVar6;
                  }
                  auVar40._8_4_ = (int)uVar30;
                  auVar40._0_8_ = uVar30;
                  auVar40._12_4_ = (int)(uVar30 >> 0x20);
                  if ((longlong)((auVar40._8_8_ | auVar45._8_8_) ^ auVar10._8_8_) <=
                      SUB168(auVar38 | auVar10,8)) {
                    puVar22[-0x54] = uVar6;
                  }
                  if ((longlong)((uVar30 | auVar44._0_8_) ^ auVar10._0_8_) <= lVar21) {
                    puVar22[-0x2a] = uVar6;
                    *puVar22 = uVar6;
                  }
                  uVar30 = uVar30 + 4;
                  puVar22 = puVar22 + 0xa8;
                } while ((uVar28 / 0x15 + 4 & 0xfffffffffffffffc) != uVar30);
              }
              FUN_1436a14f8(param_11,uVar24 & 0xffffffff,lVar32);
            }
          }
        }
      }
      uVar24 = uVar24 + 1;
    } while ((longlong)uVar24 < (longlong)(int)param_2[1]);
  }
  return;
}



// FUNCTION 1400b6e48 FUN_1400b6e48 body=62 status=ok
// SIG undefined FUN_1400b6e48(void)

byte FUN_1400b6e48(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar1 = FUN_140059518(param_1 + 0x14);
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  else {
    lVar2 = FUN_1400b6e86(lVar1);
    bVar3 = (byte)lVar1;
    if (lVar2 != 0) {
      bVar3 = *(int *)(param_1 + 0x24) != 0;
    }
    bVar3 = lVar2 != 0 & bVar3;
  }
  return bVar3;
}



// FUNCTION 1400b6e86 FUN_1400b6e86 body=105 status=ok
// SIG undefined FUN_1400b6e86(void)

void FUN_1400b6e86(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1400b6f3c();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1400b6ef0(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b6ef0 FUN_1400b6ef0 body=76 status=ok
// SIG undefined FUN_1400b6ef0(void)

void FUN_1400b6ef0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1400b6f3c();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1400b6f2d;
    }
  }
  lVar2 = 0;
LAB_1400b6f2d:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1400b6f3c FUN_1400b6f3c body=228 status=ok
// SIG undefined FUN_1400b6f3c(void)

longlong FUN_1400b6f3c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb270a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_147f96199;
    local_40 = &LAB_145ad4bcf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1e8;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"EnhancedInputLocalPlayerSubsystem",&DAT_14cb270a0,
                  &DAT_147f96198);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb270a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b7021 FUN_1400b7021 body=310 status=ok
// SIG undefined FUN_1400b7021(void)

undefined1 FUN_1400b7021(void)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43300) {
    FUN_144b3d300(&DAT_14ca43300);
    if (DAT_14ca43300 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.gbx.ProjectTranslucencyDigistructEnable",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14ca432f8 = 0;
      }
      else {
        DAT_14ca432f8 = (**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14ca43300);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43308) {
    FUN_144b3d300(&DAT_14ca43308);
    lVar1 = DAT_14ca432f8;
    if (DAT_14ca43308 == -1) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar2 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar2 ^ 1);
      }
      DAT_14ca43304 = *(int *)(lVar1 + uVar4 * 4) != 0;
      _Init_thread_footer(&DAT_14ca43308);
    }
  }
  return DAT_14ca43304;
}



// FUNCTION 1400b7158 FUN_1400b7158 body=29 status=ok
// SIG undefined FUN_1400b7158(void)

void FUN_1400b7158(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b7176 FUN_1400b7176 body=73 status=ok
// SIG undefined FUN_1400b7176(void)

undefined8 * FUN_1400b7176(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a4c0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b71c0 FUN_1400b71c0 body=29 status=ok
// SIG undefined FUN_1400b71c0(void)

void FUN_1400b71c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b71de FUN_1400b71de body=73 status=ok
// SIG undefined FUN_1400b71de(void)

undefined8 * FUN_1400b71de(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a4e0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b7228 FUN_1400b7228 body=29 status=ok
// SIG undefined FUN_1400b7228(void)

void FUN_1400b7228(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b7246 FUN_1400b7246 body=73 status=ok
// SIG undefined FUN_1400b7246(void)

undefined8 * FUN_1400b7246(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a500;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b7290 FUN_1400b7290 body=29 status=ok
// SIG undefined FUN_1400b7290(void)

void FUN_1400b7290(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b72ae FUN_1400b72ae body=73 status=ok
// SIG undefined FUN_1400b72ae(void)

undefined8 * FUN_1400b72ae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a580;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b72f8 FUN_1400b72f8 body=29 status=ok
// SIG undefined FUN_1400b72f8(void)

void FUN_1400b72f8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b7316 FUN_1400b7316 body=73 status=ok
// SIG undefined FUN_1400b7316(void)

undefined8 * FUN_1400b7316(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a5a0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b7360 FUN_1400b7360 body=29 status=ok
// SIG undefined FUN_1400b7360(void)

void FUN_1400b7360(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400b737e FUN_1400b737e body=73 status=ok
// SIG undefined FUN_1400b737e(void)

undefined8 * FUN_1400b737e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a29a5c0;
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400b73c8 FUN_1400b73c8 body=71 status=ok
// SIG undefined FUN_1400b73c8(void)

undefined8 FUN_1400b73c8(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte unaff_BL;
  
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) ||
     (lVar1 = **(longlong **)(param_1 + 0x1b0), lVar1 == 0)) {
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    unaff_BL = FUN_1400b7460(lVar1);
    uVar3 = FUN_1400b7410(lVar1,param_1,0);
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & unaff_BL);
}



// FUNCTION 1400b7410 FUN_1400b7410 body=79 status=ok
// SIG undefined FUN_1400b7410(void)

void FUN_1400b7410(longlong param_1,longlong param_2)

{
  if (*(int *)(param_1 + 0x90) == 0) {
    *(byte *)(param_2 + 0x31) = *(byte *)(param_2 + 0x31) & 0xfe;
    FUN_146979a96(param_2 + 0x1b0,0);
    FUN_146979b1e(param_2 + 0x1b0);
    if ((~*(byte *)(param_2 + 0x31) & 6) == 0) {
      FUN_140163244(param_2,0x40);
      return;
    }
  }
  return;
}



// FUNCTION 1400b7460 FUN_1400b7460 body=145 status=ok
// SIG undefined FUN_1400b7460(void)

undefined8 FUN_1400b7460(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 8;
  lVar4 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar4 = lVar1;
  }
  iVar2 = 0;
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = 0;
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar3) == param_2) {
        if (iVar2 == 1) {
          return 0;
        }
        lVar4 = *(longlong *)(lVar4 + 0x10 + (lVar5 >> 0x20) * 0x20);
        if ((lVar4 != 0) && (*(char *)(lVar4 + 0x51) == '\x01')) {
          *(char *)(param_1 + 0x99) = *(char *)(param_1 + 0x99) + -1;
        }
        FUN_146979bc0(lVar1,-iVar2);
        FUN_146979c32(lVar1);
        return 1;
      }
      lVar5 = lVar5 + 0x100000000;
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x90) * 0x20 != lVar3);
  }
  return 0;
}



// FUNCTION 1400b74f2 FUN_1400b74f2 body=68 status=ok
// SIG undefined FUN_1400b74f2(void)

undefined8 FUN_1400b74f2(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_14472d054();
  if (((cVar1 != '\0') && (cVar1 = FUN_14472d054(param_1 + 0x18,param_2 + 0x18), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x30) == *(char *)(param_2 + 0x30))) {
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x34) >> 8),
                    *(longlong *)(param_1 + 0x34) == *(longlong *)(param_2 + 0x34));
  }
  return 0;
}



// FUNCTION 1400b7536 FUN_1400b7536 body=148 status=ok
// SIG undefined FUN_1400b7536(void)

void FUN_1400b7536(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  code *local_48;
  longlong *local_40;
  code **local_38;
  code *local_30;
  undefined8 **local_28;
  code **local_20;
  undefined1 *local_18;
  undefined8 **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    local_40 = &local_58;
    local_38 = &local_48;
    local_48 = FUN_143cbc988;
    local_28 = &local_38;
    local_20 = &local_30;
    local_30 = FUN_14480c624;
    local_10 = &local_20;
    local_18 = &LAB_142b4460a;
    local_58 = param_1;
    local_50 = param_2;
    FUN_1447c5ba2();
  }
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b75cc FUN_1400b75cc body=55 status=ok
// SIG undefined FUN_1400b75cc(void)

ulonglong FUN_1400b75cc(int *param_1,int *param_2)

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



// FUNCTION 1400b7604 FUN_1400b7604 body=126 status=ok
// SIG undefined FUN_1400b7604(void)

ulonglong FUN_1400b7604(uint *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar4 != 0 &&
          (*(uint *)(lVar4 + 0x10) == param_1[1])))) && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0))
  {
    if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
      return CONCAT71((uint7)(uint3)(*param_1 >> 8),1);
    }
    cVar1 = FUN_144729dda();
    if (cVar1 == '\0') {
      uVar3 = FUN_144729dda(param_2);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
    return uVar3;
  }
  if (((*(double *)(param_1 + 2) != *(double *)(param_2 + 2)) ||
      (NAN(*(double *)(param_1 + 2)) || NAN(*(double *)(param_2 + 2)))) ||
     ((*(double *)(param_1 + 4) != *(double *)(param_2 + 4) ||
      (NAN(*(double *)(param_1 + 4)) || NAN(*(double *)(param_2 + 4)))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = -(uint)(*(double *)(param_2 + 6) == *(double *)(param_1 + 6)) & 1;
  }
  return (ulonglong)uVar2;
}



// FUNCTION 1400b7682 FUN_1400b7682 body=55 status=ok
// SIG undefined FUN_1400b7682(void)

ulonglong FUN_1400b7682(int *param_1,int *param_2)

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



// FUNCTION 1400b76ba FUN_1400b76ba body=1350 status=ok
// SIG undefined FUN_1400b76ba(void)

void FUN_1400b76ba(longlong *param_1,longlong param_2)

{
  double dVar1;
  double dVar3;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  undefined4 *puVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong *plVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_138 [40];
  longlong *local_110;
  code *local_108;
  longlong **local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  code **local_98;
  ulonglong local_90;
  double dVar2;
  double dVar4;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((char)param_1[0x9c] == '\x01') {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if ((char)param_1[0xa1] == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  if ((char)param_1[0xa6] == '\x01') {
    *(undefined1 *)(param_1 + 0xa6) = 0;
  }
  if ((char)param_1[0xab] == '\x01') {
    *(undefined1 *)(param_1 + 0xab) = 0;
  }
  if ((char)param_1[0xb0] == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  if ((char)param_1[0xb5] == '\x01') {
    *(undefined1 *)(param_1 + 0xb5) = 0;
  }
  if ((char)param_1[0xb9] == '\x01') {
    *(undefined1 *)(param_1 + 0xb9) = 0;
  }
  plVar25 = param_1 + 0xc6;
  plVar24 = plVar25;
  if (0 < (longlong)(int)param_1[0xca]) {
    plVar24 = param_1 + 199;
    if ((longlong *)param_1[0xc9] != (longlong *)0x0) {
      plVar24 = (longlong *)param_1[0xc9];
    }
    plVar24 = plVar24 + (longlong)(int)param_1[0xca] * 2 + -2;
  }
  lVar5 = *plVar24;
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_1400b7866:
    lVar6 = *(longlong *)(param_2 + 0x10);
    lVar28 = *(longlong *)(lVar6 + 0x28);
    lVar23 = *(longlong *)(lVar6 + 0x30);
    param_1[0x80] = *(longlong *)(lVar6 + 0x20);
    param_1[0x81] = lVar28;
    param_1[0x82] = lVar23;
    bVar19 = true;
    bVar20 = false;
  }
  else {
    iVar22 = FUN_144909502(*(longlong *)(param_2 + 8),lVar5);
    if (iVar22 == -1) {
      plVar24 = *(longlong **)(param_2 + 8);
      if ((plVar24 == (longlong *)0x0) ||
         (cVar21 = (**(code **)(*plVar24 + 0x4c8))(plVar24,lVar5), cVar21 == '\0'))
      goto LAB_1400b7866;
      (**(code **)(**(longlong **)(param_2 + 8) + 0x4b0))
                (*(longlong **)(param_2 + 8),&local_f8,lVar5);
      param_1[0x82] = local_e8;
      param_1[0x80] = (longlong)local_f8;
      param_1[0x81] = (longlong)uStack_f0;
      bVar20 = true;
      bVar19 = true;
    }
    else {
      lVar23 = *(longlong *)(param_2 + 8);
      if ((*(byte *)(lVar23 + 0x9c) & 1) == 0) {
        puVar26 = &DAT_14c846480;
        puVar27 = &local_f8;
        for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
          *puVar27 = *puVar26;
          puVar26 = puVar26 + 1;
          puVar27 = puVar27 + 1;
        }
      }
      else {
        FUN_140084aae(lVar23,&local_f8,iVar22,lVar23 + 0x240);
      }
      param_1[0x80] = local_d8;
      param_1[0x81] = lStack_d0;
      param_1[0x82] = local_c8;
      bVar20 = false;
      bVar19 = false;
    }
  }
  lVar23 = DAT_14c8463e8;
  if (((param_1[0x1a] == 0) && (lVar6 = *(longlong *)(param_2 + 8), lVar6 != 0)) &&
     (lVar28 = (longlong)*(int *)(lVar6 + 0x718) * 0x10, *(int *)(lVar6 + 0x6d8 + lVar28) != 0)) {
    pdVar7 = *(double **)(lVar6 + lVar28 + 0x6d0);
    dVar17 = *pdVar7;
    dVar18 = pdVar7[1];
    dVar12 = pdVar7[2];
    dVar13 = pdVar7[3];
    if ((char)param_1[0x96] == '\x01') {
      dVar29 = (double)param_1[0x94] * -1.0;
      dVar30 = (double)param_1[0x95] * 1.0;
      dVar1 = (double)param_1[0x92];
      dVar2 = (double)param_1[0x92];
      dVar3 = (double)param_1[0x93];
      dVar4 = (double)param_1[0x93];
      dVar10 = dVar17 * dVar29 * 1.0 + ((dVar18 * dVar30 - dVar12 * dVar2 * -1.0) - dVar13 * dVar4);
      dVar2 = dVar12 * dVar29 * -1.0 + dVar18 * dVar4 + (dVar30 * dVar13 - dVar2 * dVar17 * -1.0);
      auVar9._8_4_ = SUB84(dVar10,0);
      auVar9._0_8_ = dVar18 * dVar29 * -1.0 +
                     ((dVar17 * dVar30 - dVar13 * dVar1 * 1.0) - dVar12 * dVar3);
      auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x8a) = auVar9;
      auVar11._8_4_ = SUB84(dVar2,0);
      auVar11._0_8_ =
           dVar13 * dVar29 * 1.0 + dVar17 * dVar3 + (dVar30 * dVar12 - dVar1 * dVar18 * 1.0);
      auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x8c) = auVar11;
    }
    else {
      param_1[0x8a] = (longlong)dVar17;
      param_1[0x8b] = (longlong)dVar18;
      param_1[0x8c] = (longlong)dVar12;
      param_1[0x8d] = (longlong)dVar13;
    }
  }
  else {
    param_1[0x8c] = DAT_14c8463e0;
    param_1[0x8d] = lVar23;
    uVar16 = DAT_14c8463d8._4_4_;
    uVar15 = (undefined4)DAT_14c8463d8;
    uVar14 = DAT_14c8463d0._4_4_;
    *(undefined4 *)(param_1 + 0x8a) = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_1 + 0x454) = uVar14;
    *(undefined4 *)(param_1 + 0x8b) = uVar15;
    *(undefined4 *)((longlong)param_1 + 0x45c) = uVar16;
  }
  if ((char)param_1[0x96] == '\x01') {
    *(undefined1 *)(param_1 + 0x96) = 0;
  }
  if ((longlong)(int)param_1[0xf2] < 1) {
    plVar24 = param_1 + 0xee;
  }
  else {
    plVar24 = param_1 + 0xef;
    if ((longlong *)param_1[0xf1] != (longlong *)0x0) {
      plVar24 = (longlong *)param_1[0xf1];
    }
    plVar24 = (longlong *)((longlong)plVar24 + (longlong)(int)param_1[0xf2] * 0xc + -0xc);
  }
  if ((char)*plVar24 == '\x01') {
    if (!bVar19) {
      if (0 < (longlong)(int)param_1[0xca]) {
        plVar25 = param_1 + 199;
        if ((longlong *)param_1[0xc9] != (longlong *)0x0) {
          plVar25 = (longlong *)param_1[0xc9];
        }
        plVar25 = plVar25 + (longlong)(int)param_1[0xca] * 2 + -2;
      }
      FUN_143493df0(*(undefined8 *)(param_2 + 8),&local_f8,*plVar25,0);
      goto LAB_1400b7ab6;
    }
    if (bVar20) {
      (**(code **)(**(longlong **)(param_2 + 8) + 0x4c0))
                (*(longlong **)(param_2 + 8),&local_f8,lVar5);
      if (&local_f8 == param_1 + 0x84) goto LAB_1400b7acd;
      param_1[0x86] = local_e8;
      param_1[0x87] = lStack_e0;
      *(undefined4 *)(param_1 + 0x84) = (undefined4)local_f8;
      *(undefined4 *)((longlong)param_1 + 0x424) = local_f8._4_4_;
      *(undefined4 *)(param_1 + 0x85) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)param_1 + 0x42c) = uStack_f0._4_4_;
    }
    else {
      puVar8 = *(undefined4 **)(param_2 + 0x10);
      uVar14 = puVar8[1];
      uVar15 = puVar8[2];
      uVar16 = puVar8[3];
      lVar5 = *(longlong *)(puVar8 + 4);
      lVar23 = *(longlong *)(puVar8 + 6);
      *(undefined4 *)(param_1 + 0x84) = *puVar8;
      *(undefined4 *)((longlong)param_1 + 0x424) = uVar14;
      *(undefined4 *)(param_1 + 0x85) = uVar15;
      *(undefined4 *)((longlong)param_1 + 0x42c) = uVar16;
      param_1[0x86] = lVar5;
      param_1[0x87] = lVar23;
    }
  }
  else {
    cVar21 = (**(code **)(*param_1 + 0x28))(param_1);
    if (cVar21 == '\0') goto LAB_1400b7acd;
    local_f8._0_4_ = (undefined4)param_1[0x78];
    local_f8._4_4_ = *(undefined4 *)((longlong)param_1 + 0x3c4);
    uStack_f0._0_4_ = (undefined4)param_1[0x79];
    uStack_f0._4_4_ = *(undefined4 *)((longlong)param_1 + 0x3cc);
    local_e8 = param_1[0x7a];
    lStack_e0 = param_1[0x7b];
LAB_1400b7ab6:
    param_1[0x86] = local_e8;
    param_1[0x87] = lStack_e0;
    *(undefined4 *)(param_1 + 0x84) = (undefined4)local_f8;
    *(undefined4 *)((longlong)param_1 + 0x424) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x85) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)param_1 + 0x42c) = uStack_f0._4_4_;
  }
  *(undefined1 *)(param_1 + 0x88) = 1;
LAB_1400b7acd:
  cVar21 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar21 != '\0') {
    *(undefined4 *)(param_1 + 0x53) = *(undefined4 *)((longlong)param_1 + 0x294);
    *(undefined1 *)((longlong)param_1 + 0x29c) = 1;
  }
  if ((char)param_1[0x88] == '\x01') {
    param_1[0x7a] = param_1[0x86];
    param_1[0x7b] = param_1[0x87];
    *(int *)(param_1 + 0x78) = (int)param_1[0x84];
    *(undefined4 *)((longlong)param_1 + 0x3c4) = *(undefined4 *)((longlong)param_1 + 0x424);
    *(int *)(param_1 + 0x79) = (int)param_1[0x85];
    *(undefined4 *)((longlong)param_1 + 0x3cc) = *(undefined4 *)((longlong)param_1 + 0x42c);
  }
  local_100 = &local_110;
  local_98 = &local_108;
  local_108 = FUN_143cba7dc;
  uStack_f0 = &local_98;
  local_f8 = FUN_1448094e2;
  local_110 = param_1;
  FUN_14480914e(param_1);
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400b7c02 FUN_1400b7c02 body=1077 status=ok
// SIG undefined FUN_1400b7c02(void)

void FUN_1400b7c02(undefined8 *param_1,longlong *param_2)

{
  double dVar1;
  double dVar3;
  undefined8 uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  char cVar15;
  longlong *plVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  code *local_c0;
  undefined8 *local_b8;
  code **local_b0;
  code *local_a8;
  code ***pppcStack_a0;
  undefined1 local_98 [16];
  ulonglong local_80;
  double dVar2;
  double dVar4;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar5 = *param_1;
  if (*(char *)((longlong)param_2 + 0x7e9) == '\x01') goto LAB_1400b7e64;
  FUN_1400b76ba(param_2,uVar5);
  FUN_1447c7e66(param_2,uVar5);
  if (*(code **)(*param_2 + 0x28) == (code *)&LAB_1447c9426) {
    if (*(float *)(param_2 + 0x54) <= 1e-08) {
LAB_1400b7e40:
      *(undefined4 *)((longlong)param_2 + 0x2a4) = 0;
      if ((char)param_2[0x88] == '\x01') {
        *(undefined1 *)(param_2 + 0x88) = 0;
      }
      if (*(char *)((longlong)param_2 + 0x29c) == '\x01') {
        *(undefined1 *)((longlong)param_2 + 0x29c) = 0;
      }
      goto LAB_1400b7e64;
    }
  }
  else {
    cVar15 = (**(code **)(*param_2 + 0x28))(param_2);
    if (cVar15 == '\0') goto LAB_1400b7e40;
  }
  if ((char)param_2[0x74] == '\x01') {
    FUN_1400b9c20(param_2,uVar5);
    if ((longlong)(int)param_2[0xed] < 1) {
      plVar16 = param_2 + 0xe9;
    }
    else {
      plVar16 = param_2 + 0xea;
      if ((longlong *)param_2[0xec] != (longlong *)0x0) {
        plVar16 = (longlong *)param_2[0xec];
      }
      plVar16 = (longlong *)((longlong)plVar16 + (longlong)(int)param_2[0xed] * 0xc + -0xc);
    }
    if (((((char)*plVar16 == '\x01') && (lVar6 = param_2[0x1a], lVar6 != 0)) &&
        (*(char *)(lVar6 + 0x3a0) == '\x01')) && (*(char *)(lVar6 + 0x440) == '\x01')) {
      FUN_1448052ee(param_2 + 0x7c,&local_a8);
      cVar15 = FUN_1447ca264(param_2,param_2[0x1a] + 0x420,lVar6 + 0x380,(float)(double)pppcStack_a0
                            );
      uVar14 = DAT_14c8463e8;
      if (cVar15 != '\0') {
        lVar6 = param_2[0x1a];
        lVar17 = lVar6;
        if (*(char *)(lVar6 + 0x580) == '\0') {
          if (*(char *)(lVar6 + 0x440) == '\x01') {
            dVar7 = *(double *)(lVar6 + 0x430) * -1.0;
            dVar18 = *(double *)(lVar6 + 0x438) * 1.0;
            dVar10 = *(double *)(lVar6 + 0x3c0);
            dVar11 = *(double *)(lVar6 + 0x3c8);
            dVar12 = *(double *)(lVar6 + 0x3d0);
            dVar13 = *(double *)(lVar6 + 0x3d8);
            dVar1 = *(double *)(lVar6 + 0x428);
            dVar2 = *(double *)(lVar6 + 0x428);
            dVar3 = *(double *)(lVar6 + 0x420);
            dVar4 = *(double *)(lVar6 + 0x420);
            dVar9 = dVar12 * dVar7 * -1.0 +
                    dVar2 * dVar11 + (dVar18 * dVar13 - dVar4 * dVar10 * -1.0);
            *(double *)(lVar6 + 0x560) =
                 dVar11 * dVar7 * -1.0 + ((dVar10 * dVar18 - dVar3 * dVar13 * 1.0) - dVar12 * dVar1)
            ;
            *(double *)(lVar6 + 0x568) =
                 dVar10 * dVar7 * 1.0 + ((dVar11 * dVar18 - dVar4 * dVar12 * -1.0) - dVar13 * dVar2)
            ;
            auVar8._8_4_ = SUB84(dVar9,0);
            auVar8._0_8_ = dVar13 * dVar7 * 1.0 +
                           dVar1 * dVar10 + (dVar18 * dVar12 - dVar3 * dVar11 * 1.0);
            auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            *(undefined1 (*) [16])(lVar6 + 0x570) = auVar8;
          }
          else {
            if ((undefined8 *)(lVar6 + 0x560) == &DAT_14c8463d0) goto LAB_1400b7f69;
            *(undefined8 *)(lVar6 + 0x570) = DAT_14c8463e0;
            *(undefined8 *)(lVar6 + 0x578) = uVar14;
            uVar14 = DAT_14c8463d8;
            *(undefined8 *)(lVar6 + 0x560) = DAT_14c8463d0;
            *(undefined8 *)(lVar6 + 0x568) = uVar14;
          }
          *(undefined1 *)(lVar6 + 0x580) = 1;
          lVar17 = param_2[0x1a];
        }
LAB_1400b7f69:
        dVar7 = *(double *)(lVar6 + 0x560);
        dVar9 = *(double *)(lVar6 + 0x568);
        dVar3 = *(double *)(lVar6 + 0x570) * -1.0;
        dVar4 = *(double *)(lVar6 + 0x578) * 1.0;
        dVar1 = *(double *)(lVar6 + 0x568);
        dVar2 = *(double *)(lVar6 + 0x568);
        local_a8 = (code *)(((-dVar7 * dVar4 * 1.0 - dVar4 * dVar7) - dVar1 * dVar3) -
                           dVar9 * dVar3 * -1.0);
        pppcStack_a0 = (code ***)
                       (((-dVar7 * dVar3 * -1.0 - dVar4 * dVar9) - dVar2 * dVar4) -
                       dVar7 * dVar3 * 1.0);
        dVar2 = dVar3 * dVar3 * -1.0 +
                ((*(double *)(lVar6 + 0x560) * dVar7 * -1.0 + dVar4 * dVar4) - dVar9 * dVar2);
        local_98._8_4_ = SUB84(dVar2,0);
        local_98._0_8_ =
             dVar4 * dVar3 * 1.0 +
             ((*(double *)(lVar6 + 0x560) * dVar9 * 1.0 + dVar3 * dVar4) - dVar7 * dVar1);
        local_98._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        FUN_14186d720(lVar17);
      }
    }
    FUN_1447c6720(param_2);
  }
  *(float *)((longlong)param_2 + 0x2a4) =
       *(float *)(param_2 + 0x54) * *(float *)((longlong)param_2 + 0x294);
LAB_1400b7e64:
  local_b8 = &local_c8;
  local_b0 = &local_c0;
  local_c0 = FUN_1400b7c02;
  pppcStack_a0 = &local_b0;
  local_a8 = FUN_14061a336;
  local_c8 = uVar5;
  FUN_1448fef12(param_2,3);
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b8038 FUN_1400b8038 body=405 status=ok
// SIG undefined FUN_1400b8038(void)

void FUN_1400b8038(longlong param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar9 = 0.0;
  if (((*(char *)(param_1 + 0x290) == '\x01') && (*(char *)(param_1 + 0x3a0) == '\x01')) &&
     (*(char *)(param_1 + 0x7e9) != '\0')) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    if (cVar2 == '\0') {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 1.0;
    }
  }
  fVar7 = 1.0;
  if (((*(longlong *)(param_1 + 0x5d8) != 0) && (*(longlong *)(param_2 + 2) != 0)) &&
     (lVar5 = *(longlong *)(*(longlong *)(param_2 + 2) + 0xae8), lVar5 != 0)) {
    cVar2 = FUN_1448f9132(lVar5,*(longlong *)(param_1 + 0x5d8),&local_34);
    fVar7 = 1.0;
    if (cVar2 != '\0') {
      fVar7 = 1.0 - local_34;
    }
    if (fVar7 < fVar9) {
      *(float *)(param_1 + 0x2a0) = fVar7;
      goto LAB_1400b81ab;
    }
  }
  fVar9 = fVar9 * fVar7;
  fVar7 = *(float *)(param_1 + 0x2a0);
  if (fVar9 <= fVar7) {
    uVar3 = *(uint *)(param_1 + 0x6a0);
    if (0 < (int)uVar3) {
      lVar6 = 0x698;
      lVar5 = 0x688;
      goto LAB_1400b8123;
    }
    pfVar4 = (float *)(param_1 + 0x680);
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x678);
    if ((int)uVar3 < 1) {
      pfVar4 = (float *)(param_1 + 0x658);
    }
    else {
      lVar6 = 0x670;
      lVar5 = 0x660;
LAB_1400b8123:
      lVar5 = lVar5 + param_1;
      if (*(longlong *)(param_1 + lVar6) != 0) {
        lVar5 = *(longlong *)(param_1 + lVar6);
      }
      pfVar4 = (float *)(lVar5 + (ulonglong)uVar3 * 0xc + -0xc);
    }
  }
  fVar1 = *pfVar4;
  if (((fVar1 != 0.0) || (NAN(fVar1))) && (fVar8 = fVar9 - fVar7, 1e-08 <= fVar8 * fVar8)) {
    fVar9 = (1.0 / fVar1) * *param_2;
    if (fVar9 <= fVar8) {
      fVar8 = fVar9;
    }
    if (fVar8 <= -fVar9) {
      fVar8 = -fVar9;
    }
    fVar9 = fVar7 + fVar8;
  }
  *(float *)(param_1 + 0x2a0) = fVar9;
LAB_1400b81ab:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b81ce FUN_1400b81ce body=878 status=ok
// SIG undefined FUN_1400b81ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1400b81ce(uint *param_1,undefined4 *param_2,undefined8 param_3)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  double *pdVar5;
  uint *puVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_b8 [40];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar9 = *(longlong **)(param_1 + 4);
  if ((((plVar9 == (longlong *)0x0) || (param_1[3] == 0)) || (uVar2 = param_1[2], (int)uVar2 < 0))
     || (DAT_14c9647dc <= (int)uVar2)) {
LAB_1400b83bd:
    if ((param_1[1] != 0) && ((uVar2 = *param_1, -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))))
    {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 != (longlong *)0x0) &&
         (((*(uint *)(plVar9 + 2) == param_1[1] && ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) &&
          (plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0)))) {
        local_68 = DAT_14c8464f0;
        local_78 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_70 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        bVar1 = (byte)param_1[0xc];
        if (bVar1 == 1) {
LAB_1400b843c:
          (**(code **)(*plVar9 + 0x590))(plVar9,&local_78,0);
        }
        else if (bVar1 == 2) {
          (**(code **)(*plVar9 + 0x588))(plVar9,&local_78,&local_58);
        }
        else if (bVar1 == 0) {
          lVar8 = plVar9[0x39];
          if (lVar8 == 0) {
            pdVar5 = (double *)&DAT_14c8464e0;
            uVar10 = SUB84(DAT_14c8464f0,0);
            uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
            uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
            pdVar5 = (double *)(lVar8 + 0x260);
          }
          local_78 = *pdVar5;
          uStack_70 = pdVar5[1];
          local_68 = (double)CONCAT44(uVar11,uVar10);
        }
        else if (bVar1 - 3 < 2) {
          plVar7 = (longlong *)thunk_FUN_1487d5b90(plVar9);
          if (plVar7 == (longlong *)0x0) goto LAB_1400b843c;
          (**(code **)(*plVar7 + 0x4b0))(plVar7,&local_78,*(undefined8 *)(param_1 + 0xd));
        }
        local_40 = 0;
        goto LAB_1400b8331;
      }
    }
    *param_2 = 0x3f800000;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar11 = (undefined4)DAT_14c8464e8;
    uVar10 = DAT_14c8464e0._4_4_;
    param_2[0xe] = (undefined4)DAT_14c8464e0;
    param_2[0xf] = uVar10;
    param_2[0x10] = uVar11;
    param_2[0x11] = uVar4;
    *(double *)(param_2 + 0x12) = DAT_14c8464f0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
  }
  else {
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar8 == 0) || (*(uint *)(lVar8 + 0x10) != param_1[3])) ||
       ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_1400b83bd;
    pcVar3 = *(code **)(*plVar9 + 0x10);
    if (pcVar3 == (code *)&LAB_144a13144) {
      puVar6 = (uint *)(plVar9 + 0x25d);
    }
    else if (pcVar3 == (code *)&LAB_144a1313c) {
      puVar6 = (uint *)(plVar9 + 0x13);
    }
    else {
      puVar6 = (uint *)(*pcVar3)(plVar9);
    }
    if ((((puVar6[1] == 0) || (uVar2 = *puVar6, (int)uVar2 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar2 ||
         (((plVar9 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar9 == (longlong *)0x0 || (*(uint *)(plVar9 + 2) != puVar6[1])) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))))) || (*plVar9 == 0)) goto LAB_1400b83bd;
    FUN_1400b85b8(puVar6,&local_78,param_1 + 0xc,param_1 + 8);
    if ((local_78 == _DAT_14cb722d0) && (!NAN(local_78) && !NAN(_DAT_14cb722d0))) {
      if ((uStack_70 == _DAT_14cb722d8) && (!NAN(uStack_70) && !NAN(_DAT_14cb722d8))) {
        if ((local_68 == _DAT_14cb722e0) && (!NAN(local_68) && !NAN(_DAT_14cb722e0)))
        goto LAB_1400b83bd;
      }
    }
    FUN_1400b853e(puVar6,&local_90);
    local_48 = local_80;
    local_58 = local_90;
    uStack_54 = uStack_8c;
    uStack_50 = uStack_88;
    uStack_4c = uStack_84;
    local_40 = 1;
LAB_1400b8331:
    FUN_1447c9d7a(param_2,param_3,&local_78);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400b853e FUN_1400b853e body=122 status=ok
// SIG undefined FUN_1400b853e(void)

undefined8 * FUN_1400b853e(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && (((plVar3 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar3 != (longlong *)0x0 && (*(uint *)(plVar3 + 2) == param_1[1])) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
          (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))))) {
    (**(code **)(*plVar3 + 0x328))(plVar3,param_2);
    return param_2;
  }
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar2;
  return param_2;
}



// FUNCTION 1400b85b8 FUN_1400b85b8 body=494 status=ok
// SIG undefined FUN_1400b85b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1400b85b8(longlong param_1,double *param_2,char *param_3,uint *param_4)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_68 [40];
  double local_40;
  double dStack_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*param_3 == '\x01') || (*(char *)(param_1 + 0x80) != '\0')) ||
     (*(char *)(param_1 + 0x18) == '\x01')) {
    FUN_1400b8d22(param_1,&local_40,param_4);
    bVar4 = true;
    if (((local_40 == _DAT_14cb24410) && (!NAN(local_40) && !NAN(_DAT_14cb24410))) &&
       ((dStack_38 == _DAT_14cb24418 && (!NAN(dStack_38) && !NAN(_DAT_14cb24418))))) {
      bVar4 = DAT_14cb24420 != local_30;
    }
    if ((bVar4) && (*param_3 == '\x02')) {
      dVar1 = *(double *)(param_1 + 0x1a0);
      dVar2 = *(double *)(param_1 + 0x198);
      *param_2 = local_40 + *(double *)(param_1 + 400);
      param_2[1] = dStack_38 + dVar2;
      param_2[2] = local_30 + dVar1;
    }
    else {
      param_2[2] = local_30;
      *param_2 = local_40;
      param_2[1] = dStack_38;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((*(longlong **)(param_4 + 2) != (longlong *)0x0) && (param_4[1] != 0)) {
    uVar3 = *param_4;
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1400b86c1;
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(uint *)(lVar6 + 0x10) == param_4[1])) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      lVar6 = (**(code **)(**(longlong **)(param_4 + 2) + 0x28))();
      if (*(int *)(lVar6 + 0x1c) != 0) {
        uVar3 = *(uint *)(lVar6 + 0x18);
        uVar7 = 0;
        if (((int)uVar3 < 0) || (uVar7 = 0, DAT_14c9647dc <= (int)uVar3)) goto LAB_1400b86c1;
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((puVar5 != (undefined8 *)0x0) &&
           ((*(int *)(puVar5 + 2) == *(int *)(lVar6 + 0x1c) &&
            ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
          uVar7 = *puVar5;
          goto LAB_1400b86c1;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1400b86c1:
  FUN_1400b9382(param_1,param_2,param_3,uVar7);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400b87a8 FUN_1400b87a8 body=920 status=ok
// SIG undefined FUN_1400b87a8(void)

undefined4 * FUN_1400b87a8(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined1 uVar14;
  char cVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 800) != '\x01')) {
    FUN_1400ba80e(param_2,param_3);
  }
  else {
    *param_2 = *(undefined4 *)(lVar2 + 0x2b0);
    cVar15 = *(char *)(lVar2 + 0x2b8);
    *(char *)(param_2 + 2) = cVar15;
    if (cVar15 == '\x01') {
      param_2[1] = *(undefined4 *)(lVar2 + 0x2b4);
    }
    cVar15 = *(char *)(lVar2 + 0x2c0);
    *(char *)(param_2 + 4) = cVar15;
    if (cVar15 == '\x01') {
      param_2[3] = *(undefined4 *)(lVar2 + 700);
    }
    cVar15 = *(char *)(lVar2 + 0x2e0);
    *(char *)(param_2 + 0xc) = cVar15;
    if (cVar15 == '\x01') {
      *(undefined8 *)(param_2 + 10) = *(undefined8 *)(lVar2 + 0x2d8);
      uVar12 = *(undefined8 *)(lVar2 + 0x2d0);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(lVar2 + 0x2c8);
      *(undefined8 *)(param_2 + 8) = uVar12;
    }
    *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(lVar2 + 0x2f8);
    uVar12 = *(undefined8 *)(lVar2 + 0x2f0);
    *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(lVar2 + 0x2e8);
    *(undefined8 *)(param_2 + 0x10) = uVar12;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    uVar5 = *(undefined4 *)(lVar2 + 0x304);
    uVar6 = *(undefined4 *)(lVar2 + 0x308);
    uVar7 = *(undefined4 *)(lVar2 + 0x30c);
    uVar8 = *(undefined4 *)(lVar2 + 0x310);
    uVar9 = *(undefined4 *)(lVar2 + 0x314);
    uVar10 = *(undefined4 *)(lVar2 + 0x318);
    uVar11 = *(undefined4 *)(lVar2 + 0x31c);
    param_2[0x14] = *(undefined4 *)(lVar2 + 0x300);
    param_2[0x15] = uVar5;
    param_2[0x16] = uVar6;
    param_2[0x17] = uVar7;
    param_2[0x18] = uVar8;
    param_2[0x19] = uVar9;
    param_2[0x1a] = uVar10;
    param_2[0x1b] = uVar11;
    FUN_1400b8b40(param_2,param_1 + 0x400);
  }
  *(undefined4 *)(param_1 + 0x2b0) = *param_2;
  if ((undefined4 *)(param_1 + 0x2b0) == param_2) {
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x12);
    uVar5 = param_2[0xf];
    uVar6 = param_2[0x10];
    uVar7 = param_2[0x11];
    *(undefined4 *)(param_1 + 0x2e8) = param_2[0xe];
    *(undefined4 *)(param_1 + 0x2ec) = uVar5;
    *(undefined4 *)(param_1 + 0x2f0) = uVar6;
    *(undefined4 *)(param_1 + 0x2f4) = uVar7;
    goto LAB_1400b8909;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
    *(undefined4 *)(param_1 + 0x2b4) = param_2[1];
    uVar14 = 1;
LAB_1400b8898:
    *(undefined1 *)(param_1 + 0x2b8) = uVar14;
  }
  else if (*(char *)(param_1 + 0x2b8) == '\x01') {
    uVar14 = 0;
    goto LAB_1400b8898;
  }
  if (*(char *)(param_2 + 4) == '\x01') {
    *(undefined4 *)(param_1 + 700) = param_2[3];
    *(undefined1 *)(param_1 + 0x2c0) = 1;
  }
  else if (*(char *)(param_1 + 0x2c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  if (*(char *)(param_2 + 0xc) == '\x01') {
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 10);
    uVar12 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 0x2d0) = uVar12;
    *(undefined1 *)(param_1 + 0x2e0) = 1;
  }
  else if (*(char *)(param_1 + 0x2e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x12);
  uVar5 = param_2[0xf];
  uVar6 = param_2[0x10];
  uVar7 = param_2[0x11];
  *(undefined4 *)(param_1 + 0x2e8) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x2ec) = uVar5;
  *(undefined4 *)(param_1 + 0x2f0) = uVar6;
  *(undefined4 *)(param_1 + 0x2f4) = uVar7;
  if (*(char *)(param_2 + 0x1c) == '\x01') {
    uVar5 = param_2[0x14];
    uVar6 = param_2[0x15];
    uVar7 = param_2[0x16];
    uVar8 = param_2[0x17];
    uVar12 = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x318) = uVar12;
    *(undefined4 *)(param_1 + 0x300) = uVar5;
    *(undefined4 *)(param_1 + 0x304) = uVar6;
    *(undefined4 *)(param_1 + 0x308) = uVar7;
    *(undefined4 *)(param_1 + 0x30c) = uVar8;
    *(undefined1 *)(param_1 + 800) = 1;
  }
  else if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
LAB_1400b8909:
  plVar18 = (longlong *)(param_1 + 0x7f0);
  if (*(longlong **)(param_1 + 0x800) != (longlong *)0x0) {
    plVar18 = *(longlong **)(param_1 + 0x800);
  }
  if ((longlong)*(int *)(param_1 + 0x808) != 0) {
    plVar17 = plVar18 + (longlong)*(int *)(param_1 + 0x808) * 2;
    do {
      plVar3 = (longlong *)plVar18[1];
      if (plVar3 != (longlong *)0x0) {
        iVar16 = (int)plVar3[1];
        do {
          if (iVar16 == 0) goto LAB_1400b89e5;
          LOCK();
          iVar13 = (int)plVar3[1];
          bVar19 = iVar16 == iVar13;
          if (bVar19) {
            *(int *)(plVar3 + 1) = iVar16 + 1;
            iVar13 = iVar16;
          }
          iVar16 = iVar13;
          UNLOCK();
        } while (!bVar19);
        plVar4 = (longlong *)*plVar18;
        if ((plVar4 != (longlong *)0x0) &&
           (cVar15 = (**(code **)(*plVar4 + 0x10))(plVar4), cVar15 != '\0')) {
          (**(code **)(*plVar4 + 8))(plVar4,param_2,param_1);
        }
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
LAB_1400b89e5:
      plVar18 = plVar18 + 2;
    } while (plVar18 != plVar17);
  }
  if (*(char *)(param_1 + 0x4e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e0) = 0;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    *(undefined1 *)(param_1 + 0x508) = 0;
  }
  if (*(char *)(param_1 + 0x530) == '\x01') {
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_1 + 0x558) == '\x01') {
    *(undefined1 *)(param_1 + 0x558) = 0;
  }
  if (*(char *)(param_1 + 0x580) == '\x01') {
    *(undefined1 *)(param_1 + 0x580) = 0;
  }
  if (*(char *)(param_1 + 0x5a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
  }
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  return param_2;
}



// FUNCTION 1400b8b40 FUN_1400b8b40 body=481 status=ok
// SIG undefined FUN_1400b8b40(void)

void FUN_1400b8b40(longlong param_1,double *param_2)

{
  double _Y;
  double _Y_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((*(char *)(param_1 + 0x70) == '\x01') && (*(char *)(param_1 + 8) == '\x01')) {
    dVar2 = *(double *)(param_1 + 0x48) - param_2[2];
    dVar4 = *(double *)(param_1 + 0x40) - param_2[1];
    dVar3 = *(double *)(param_1 + 0x38) - *param_2;
    dVar1 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
    if (((dVar1 != 1.0) || (_Y = dVar2, _Y_00 = dVar4, dVar5 = dVar3, NAN(dVar1))) &&
       (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar1)) {
      dVar5 = 1.0 / SQRT(dVar1);
      _Y = dVar2 * dVar5;
      _Y_00 = dVar4 * dVar5;
      dVar5 = dVar3 * dVar5;
    }
    *(float *)(param_1 + 4) = (float)SQRT(dVar1);
    *(undefined1 *)(param_1 + 8) = 1;
    dVar2 = 0.0;
    if ((((_Y_00 != 0.0) || (NAN(_Y_00))) || (dVar5 != 0.0)) || (NAN(dVar5))) {
      dVar2 = atan2(_Y_00,dVar5);
      dVar2 = dVar2 * 0.5;
    }
    dVar4 = SQRT(dVar5 * dVar5 + _Y_00 * _Y_00);
    dVar3 = 0.0;
    if (((_Y != 0.0) || (NAN(_Y))) || ((dVar4 != 0.0 || (NAN(dVar4))))) {
      dVar3 = atan2(_Y,dVar4);
      dVar3 = dVar3 * 0.5;
    }
    dVar4 = sin(dVar3);
    dVar3 = cos(dVar3);
    dVar1 = sin(dVar2);
    dVar2 = cos(dVar2);
    *(double *)(param_1 + 0x50) = dVar4 * dVar1;
    *(double *)(param_1 + 0x58) = -dVar4 * dVar2;
    *(double *)(param_1 + 0x60) = dVar1 * dVar3;
    *(double *)(param_1 + 0x68) = dVar3 * dVar2;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



// FUNCTION 1400b8d22 FUN_1400b8d22 body=329 status=ok
// SIG undefined FUN_1400b8d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1400b8d22(uint *param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1400b8d88;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar4;
      goto LAB_1400b8d88;
    }
  }
  uVar6 = 0;
LAB_1400b8d88:
  if (((((*(longlong **)(param_3 + 2) != (longlong *)0x0) && (param_3[1] != 0)) &&
       (uVar1 = *param_3, -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)))) &&
     ((*(uint *)(lVar5 + 0x10) == param_3[1] && ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
    uVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x28))();
    pfVar3 = (float *)FUN_1400b9668(uVar2,0,uVar6);
    if (((pfVar3 == (float *)0x0) || (*pfVar3 != 0.0)) || (NAN(*pfVar3))) {
      uVar2 = (**(code **)(**(longlong **)(param_3 + 2) + 0x28))();
      lVar5 = FUN_1447ca08a(uVar2,uVar6,0);
      if (lVar5 == 0) {
        *(undefined8 *)(param_2 + 4) = DAT_14cb24420;
        uVar7 = _DAT_14cb24410;
        uVar8 = uRam000000014cb24414;
        uVar9 = _DAT_14cb24418;
        uVar10 = uRam000000014cb2441c;
      }
      else {
        *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar5 + 0x28);
        uVar7 = *(undefined4 *)(lVar5 + 0x18);
        uVar8 = *(undefined4 *)(lVar5 + 0x1c);
        uVar9 = *(undefined4 *)(lVar5 + 0x20);
        uVar10 = *(undefined4 *)(lVar5 + 0x24);
      }
      *param_2 = uVar7;
      param_2[1] = uVar8;
      param_2[2] = uVar9;
      param_2[3] = uVar10;
      return param_2;
    }
  }
  FUN_1400e23a4(param_1,param_2);
  return param_2;
}



// FUNCTION 1400b8e6c FUN_1400b8e6c body=1301 status=ok
// SIG undefined FUN_1400b8e6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1400b8e6c(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
      (**(code **)(*plVar5 + 0x680))(plVar5,local_b8);
      dVar6 = (double)DAT_1499387d0;
      dVar7 = DAT_1499387d0._8_8_;
      auVar8 = divpd(local_b8,_DAT_1499387d0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = local_a8;
      auVar14 = divpd(auVar13,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      dVar15 = local_b8._0_8_ - auVar8._0_8_ * dVar6;
      dVar16 = local_b8._8_8_ - auVar8._8_8_ * dVar7;
      local_a8 = local_a8 - auVar14._0_8_ * dVar6;
      dVar17 = 0.0 - auVar14._8_8_ * dVar7;
      auVar19._0_8_ = dVar15 + dVar6;
      auVar19._8_8_ = dVar16 + dVar7;
      auVar18._0_8_ = local_a8 + dVar6;
      auVar18._8_8_ = dVar17 + dVar7;
      auVar9._8_8_ = -(ulonglong)(0.0 <= dVar16);
      auVar9._0_8_ = -(ulonglong)(0.0 <= dVar15);
      auVar8._8_8_ = dVar16;
      auVar8._0_8_ = dVar15;
      auVar20 = blendvpd(auVar19,auVar8,auVar9);
      auVar10._8_8_ = -(ulonglong)(0.0 <= dVar17);
      auVar10._0_8_ = -(ulonglong)(0.0 <= local_a8);
      auVar21._8_8_ = dVar17;
      auVar21._0_8_ = local_a8;
      auVar8 = blendvpd(auVar18,auVar21,auVar10);
      auVar11._8_8_ = -(ulonglong)(180.0 < auVar20._8_8_);
      auVar11._0_8_ = -(ulonglong)(180.0 < auVar20._0_8_);
      auVar14._8_8_ = auVar20._8_8_ + -360.0;
      auVar14._0_8_ = auVar20._0_8_ + -360.0;
      auVar21 = blendvpd(auVar20,auVar14,auVar11);
      auVar12._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
      auVar12._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
      auVar2._8_8_ = auVar8._8_8_ + 0.0;
      auVar2._0_8_ = auVar8._0_8_ + -360.0;
      auVar20 = blendvpd(auVar8,auVar2,auVar12);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = auVar20._0_8_;
      auVar8 = divpd(auVar21,_DAT_1499387d0);
      auVar14 = divpd(auVar25,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar14 = roundpd(auVar14,auVar14,3);
      dVar16 = (auVar21._0_8_ - auVar8._0_8_ * dVar6) * 0.008726646259971648;
      dVar17 = (auVar21._8_8_ - auVar8._8_8_ * dVar7) * 0.008726646259971648;
      dVar23 = (auVar20._0_8_ - auVar14._0_8_ * dVar6) * 0.008726646259971648;
      dVar26 = (0.0 - auVar14._8_8_ * dVar7) * 0.008726646259971648;
      dVar6 = sin(dVar16);
      dVar7 = sin(dVar17);
      dVar15 = sin(dVar23);
      sin(dVar26);
      dVar16 = cos(dVar16);
      dVar17 = cos(dVar17);
      dVar23 = cos(dVar23);
      cos(dVar26);
      dVar26 = -(dVar17 * dVar6 * dVar15) + dVar7 * dVar16 * dVar23;
      dVar22 = dVar7 * dVar6 * dVar15 + dVar17 * dVar16 * dVar23;
      dVar24 = dVar6 * dVar7 * dVar23 - dVar16 * dVar17 * dVar15;
      dVar6 = -(dVar6 * dVar17 * dVar23) - dVar16 * dVar7 * dVar15;
      *param_2 = 0x3f800000;
      *(undefined1 *)(param_2 + 2) = 0;
      *(undefined1 *)(param_2 + 4) = 0;
      *(undefined1 *)(param_2 + 0xc) = 0;
      uVar3 = DAT_14c8464e8;
      *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
      *(double *)(param_2 + 0x14) = dVar24;
      *(double *)(param_2 + 0x16) = dVar6;
      *(double *)(param_2 + 0x18) = dVar26;
      *(double *)(param_2 + 0x1a) = dVar22;
      *(undefined1 *)(param_2 + 0x1c) = 1;
      iVar4 = _finite(dVar24);
      if (iVar4 != 0) {
        iVar4 = _finite(dVar6);
        if (iVar4 != 0) {
          iVar4 = _finite(dVar26);
          if (iVar4 != 0) {
            _finite(dVar22);
          }
        }
      }
      goto LAB_1400b916f;
    }
  }
  auVar8 = *(undefined1 (*) [16])(param_1 + 2);
  auVar14 = divpd(auVar8,_DAT_1499387d0);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = *(double *)(param_1 + 6);
  auVar20 = divpd(auVar20,_DAT_1499387d0);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar20 = roundpd(auVar20,auVar20,3);
  dVar16 = (auVar8._0_8_ - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar17 = (auVar8._8_8_ - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar23 = (*(double *)(param_1 + 6) - auVar20._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
  ;
  dVar26 = (0.0 - auVar20._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar6 = sin(dVar16);
  dVar7 = sin(dVar17);
  dVar15 = sin(dVar23);
  sin(dVar26);
  dVar16 = cos(dVar16);
  dVar17 = cos(dVar17);
  dVar23 = cos(dVar23);
  cos(dVar26);
  dVar26 = -(dVar17 * dVar6 * dVar15) + dVar7 * dVar16 * dVar23;
  dVar22 = dVar7 * dVar6 * dVar15 + dVar17 * dVar16 * dVar23;
  dVar24 = dVar6 * dVar7 * dVar23 - dVar16 * dVar17 * dVar15;
  dVar6 = -(dVar6 * dVar17 * dVar23) - dVar16 * dVar7 * dVar15;
  *param_2 = 0x3f800000;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
  *(double *)(param_2 + 0x14) = dVar24;
  *(double *)(param_2 + 0x16) = dVar6;
  *(double *)(param_2 + 0x18) = dVar26;
  *(double *)(param_2 + 0x1a) = dVar22;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  iVar4 = _finite(dVar24);
  if (iVar4 != 0) {
    iVar4 = _finite(dVar6);
    if (iVar4 != 0) {
      iVar4 = _finite(dVar26);
      if (iVar4 != 0) {
        _finite(dVar22);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_d8);
      }
    }
  }
LAB_1400b916f:
  if ((local_a0 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400b9382 FUN_1400b9382 body=740 status=ok
// SIG undefined FUN_1400b9382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1400b9382(uint *param_1,undefined8 *param_2,undefined1 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  switch(*param_3) {
  case 0:
    goto switchD_1400b93b9_caseD_0;
  case 1:
    FUN_1400e2302(param_1,param_2,param_4);
    goto LAB_1400b9619;
  case 2:
    if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)
         ) && ((plVar6 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && (*(uint *)(plVar6 + 2) == param_1[1])))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
      (**(code **)(*plVar6 + 0x588))(plVar6,param_2,local_40);
      goto LAB_1400b955c;
    }
    break;
  case 3:
    puVar4 = param_1 + 0x2e;
    if (*(uint **)(param_1 + 0x42) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x42);
    }
    if ((longlong)(int)param_1[0x44] != 0) {
      lVar5 = 0;
      do {
        if (((((*(longlong *)((longlong)puVar4 + lVar5 + 8) == *(longlong *)(param_3 + 4)) &&
              (iVar1 = *(int *)((longlong)puVar4 + lVar5 + 4), iVar1 != 0)) &&
             (uVar2 = *(uint *)((longlong)puVar4 + lVar5), -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0)))) &&
           (((int)plVar6[2] == iVar1 &&
            (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
             (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))))) {
          (**(code **)(*plVar6 + 0x4b0))(plVar6,param_2);
          goto LAB_1400b9619;
        }
        lVar5 = lVar5 + 0x14;
      } while ((longlong)(int)param_1[0x44] * 0x14 != lVar5);
    }
    break;
  case 4:
    puVar4 = param_1 + 0x4a;
    if (*(uint **)(param_1 + 0x5e) != (uint *)0x0) {
      puVar4 = *(uint **)(param_1 + 0x5e);
    }
    if ((longlong)(int)param_1[0x60] != 0) {
      lVar5 = 0;
      do {
        if ((((*(longlong *)((longlong)puVar4 + lVar5 + 8) == *(longlong *)(param_3 + 4)) &&
             (iVar1 = *(int *)((longlong)puVar4 + lVar5 + 4), iVar1 != 0)) &&
            (uVar2 = *(uint *)((longlong)puVar4 + lVar5), -1 < (int)uVar2)) &&
           ((((int)uVar2 < DAT_14c9647dc &&
             (plVar6 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0)) &&
            (((int)plVar6[2] == iVar1 &&
             (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
              (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))))))) {
          (**(code **)(*plVar6 + 0x4b0))(plVar6,param_2);
          goto LAB_1400b9619;
        }
        lVar5 = lVar5 + 0x14;
      } while ((longlong)(int)param_1[0x60] * 0x14 != lVar5);
    }
switchD_1400b93b9_caseD_0:
    if ((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar2 ||
         (((plVar6 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])) ||
          ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))))) || (*plVar6 == 0)) break;
    lVar5 = *(longlong *)(*plVar6 + 0x1c8);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar5 + 0x268);
      *param_2 = *(undefined8 *)(lVar5 + 0x260);
      param_2[1] = uVar3;
      param_2[2] = *(undefined8 *)(lVar5 + 0x270);
LAB_1400b955c:
      if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    param_2[2] = DAT_14c8464f0;
    uVar7 = (undefined4)DAT_14c8464e0;
    uVar8 = DAT_14c8464e0._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar10 = DAT_14c8464e8._4_4_;
    goto LAB_1400b9616;
  }
  param_2[2] = DAT_14cb24420;
  uVar7 = _DAT_14cb24410;
  uVar8 = uRam000000014cb24414;
  uVar9 = _DAT_14cb24418;
  uVar10 = uRam000000014cb2441c;
LAB_1400b9616:
  *(undefined4 *)param_2 = uVar7;
  *(undefined4 *)((longlong)param_2 + 4) = uVar8;
  *(undefined4 *)(param_2 + 1) = uVar9;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
LAB_1400b9619:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 1400b9668 FUN_1400b9668 body=437 status=ok
// SIG undefined FUN_1400b9668(void)

longlong FUN_1400b9668(longlong param_1,uint param_2,longlong param_3)

{
  float *pfVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 == 0) {
    uVar9 = 0;
    uVar3 = 0;
  }
  else {
    uVar9 = *(uint *)(param_3 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar3 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar7 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar7);
      }
      LOCK();
      uVar3 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar3 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar7;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar3 = uVar7;
      }
    }
  }
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar10 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & (uVar3 ^ uVar9)) * 4);
    if (iVar6 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x50);
      lVar4 = 0;
      do {
        lVar8 = (longlong)iVar6 * 0x2b0;
        local_48 = *(undefined8 *)(lVar10 + lVar8);
        local_50 = CONCAT44(uVar3,uVar9);
        cVar2 = FUN_14472d054(&local_48,&local_50);
        lVar10 = *(longlong *)(param_1 + 0x50);
        if (cVar2 != '\0') {
          lVar4 = 0;
          if ((lVar10 + lVar8 != 0) && (lVar10 = lVar10 + lVar8 + 8, lVar10 != 0)) {
            uVar5 = (ulonglong)((param_2 & 0xff) * 0x60);
            pfVar1 = (float *)(lVar10 + uVar5);
            if (3.4028235e+38 < *pfVar1 || *pfVar1 == 3.4028235e+38) goto LAB_1400b97ce;
            lVar4 = lVar10 + uVar5;
          }
          break;
        }
        iVar6 = *(int *)(lVar10 + 0x2a8 + lVar8);
      } while (iVar6 != -1);
      goto LAB_1400b979a;
    }
  }
LAB_1400b97ce:
  lVar4 = 0;
LAB_1400b979a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1400b981e FUN_1400b981e body=887 status=ok
// SIG undefined FUN_1400b981e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1400b981e(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double _X;
  double _X_00;
  undefined1 auVar24 [16];
  double dVar25;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar2 = *plVar5, lVar2 == 0)))) {
    *param_2 = 0x3f800000;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
    uVar3 = DAT_14c8464e8;
    *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
    return param_2;
  }
  fVar6 = (float)FUN_1400b9b96(lVar2 + 0x3ae0);
  dVar7 = (double)DAT_1499387d0;
  dVar8 = DAT_1499387d0._8_8_;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (double)fVar6;
  auVar10 = divpd(auVar23 << 0x40,_DAT_1499387d0);
  auVar10 = roundpd(auVar10,auVar10,3);
  auVar15 = roundpd(in_XMM4,ZEXT816(0),3);
  dVar9 = 0.0 - auVar10._0_8_ * dVar7;
  dVar20 = (double)fVar6 - auVar10._8_8_ * dVar8;
  dVar18 = 0.0 - auVar15._0_8_ * dVar7;
  dVar19 = 0.0 - auVar15._8_8_ * dVar8;
  auVar21._0_8_ = dVar9 + dVar7;
  auVar21._8_8_ = dVar20 + dVar8;
  auVar16._0_8_ = dVar18 + dVar7;
  auVar16._8_8_ = dVar19 + dVar8;
  auVar11._8_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar11._0_8_ = -(ulonglong)(0.0 <= dVar9);
  auVar10._8_4_ = SUB84(dVar20,0);
  auVar10._0_8_ = dVar9;
  auVar10._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar22 = blendvpd(auVar21,auVar10,auVar11);
  auVar12._8_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar12._0_8_ = -(ulonglong)(0.0 <= dVar18);
  auVar17._8_8_ = dVar19;
  auVar17._0_8_ = dVar18;
  auVar10 = blendvpd(auVar16,auVar17,auVar12);
  dVar9 = auVar22._8_8_ + -360.0;
  auVar13._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
  auVar13._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
  auVar15._8_4_ = SUB84(dVar9,0);
  auVar15._0_8_ = auVar22._0_8_ + -360.0;
  auVar15._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar23 = blendvpd(auVar22,auVar15,auVar13);
  auVar14._8_8_ = -(ulonglong)(180.0 < auVar10._8_8_);
  auVar14._0_8_ = -(ulonglong)(180.0 < auVar10._0_8_);
  auVar22._8_8_ = auVar10._8_8_ + 0.0;
  auVar22._0_8_ = auVar10._0_8_ + -360.0;
  auVar17 = blendvpd(auVar10,auVar22,auVar14);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar17._0_8_;
  auVar10 = divpd(auVar23,_DAT_1499387d0);
  auVar15 = divpd(auVar24,_DAT_1499387d0);
  auVar10 = roundpd(auVar10,auVar10,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar20 = (auVar23._0_8_ - auVar10._0_8_ * dVar7) * 0.008726646259971648;
  dVar18 = (auVar23._8_8_ - auVar10._8_8_ * dVar8) * 0.008726646259971648;
  dVar19 = (auVar17._0_8_ - auVar15._0_8_ * dVar7) * 0.008726646259971648;
  dVar25 = (0.0 - auVar15._8_8_ * dVar8) * 0.008726646259971648;
  dVar7 = sin(dVar20);
  dVar8 = sin(dVar18);
  dVar9 = sin(dVar19);
  sin(dVar25);
  dVar20 = cos(dVar20);
  dVar18 = cos(dVar18);
  dVar19 = cos(dVar19);
  cos(dVar25);
  dVar25 = -(dVar18 * dVar7 * dVar9) + dVar8 * dVar20 * dVar19;
  _X = dVar8 * dVar7 * dVar9 + dVar18 * dVar20 * dVar19;
  _X_00 = dVar7 * dVar8 * dVar19 - dVar20 * dVar18 * dVar9;
  dVar7 = -(dVar7 * dVar18 * dVar19) - dVar20 * dVar8 * dVar9;
  *param_2 = 0x3f800000;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  uVar3 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
  *(double *)(param_2 + 0x14) = _X_00;
  *(double *)(param_2 + 0x16) = dVar7;
  *(double *)(param_2 + 0x18) = dVar25;
  *(double *)(param_2 + 0x1a) = _X;
  *(undefined1 *)(param_2 + 0x1c) = 1;
  iVar4 = _finite(_X_00);
  if (((iVar4 != 0) && (iVar4 = _finite(dVar7), iVar4 != 0)) &&
     (iVar4 = _finite(dVar25), iVar4 != 0)) {
    _finite(_X);
  }
  if (*(char *)(lVar2 + 0x3b18) != '\x01') {
    return param_2;
  }
  if (*(char *)(lVar2 + 0x3b54) != '\x01') {
    return param_2;
  }
  param_2[3] = *(undefined4 *)(lVar2 + 0x3b50);
  *(undefined1 *)(param_2 + 4) = 1;
  return param_2;
}



// FUNCTION 1400b9b96 FUN_1400b9b96 body=136 status=ok
// SIG undefined FUN_1400b9b96(void)

void FUN_1400b9b96(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  double local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    fVar2 = *(float *)(param_1 + 0x58);
  }
  else {
    if (*(char *)(param_1 + 0x40) == '\0') {
      lVar1 = FUN_14479d2ce(param_1);
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)(&DAT_00001100 + lVar1) + 0x30))(&DAT_00001100 + lVar1,local_28);
        fVar2 = (float)local_20;
        goto LAB_1400b9bb8;
      }
    }
    else if (*(char *)(param_1 + 0x50) == '\x01') {
      fVar2 = *(float *)(param_1 + 0x4c);
      goto LAB_1400b9bb8;
    }
    fVar2 = *(float *)(param_1 + 0x30);
  }
LAB_1400b9bb8:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 1400b9c20 FUN_1400b9c20 body=2988 status=ok
// SIG undefined FUN_1400b9c20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b9c20(longlong param_1,float *param_2)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  char cVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  double *pdVar15;
  uint uVar16;
  longlong *plVar17;
  char *pcVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  char *pcVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  double dVar42;
  double dVar43;
  double dVar46;
  double dVar47;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar48;
  double dVar51;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_188 [32];
  float local_168;
  char local_160;
  float local_150 [2];
  longlong local_148;
  undefined1 (*local_140) [16];
  float *local_138;
  longlong *local_130;
  int local_128;
  float local_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  char local_f8;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong local_c0;
  double dVar5;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  pfVar13 = (float *)(param_1 + 0x608);
  uVar16 = *(uint *)(param_1 + 0x628);
  if ((ulonglong)uVar16 == 0) {
    if ((*(char *)(param_1 + 0x3a0) == '\x01') && (*(char *)(param_1 + 0x340) != '\0')) {
      pfVar13 = (float *)(param_1 + 0x33c);
    }
  }
  else if (0 < (int)uVar16) {
    lVar21 = param_1 + 0x610;
    if (*(longlong *)(param_1 + 0x620) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x620);
    }
    pfVar13 = (float *)(lVar21 + (ulonglong)uVar16 * 0xc + -0xc);
  }
  local_11c = *pfVar13;
  if ((longlong)*(int *)(param_1 + 200) < 1) {
    lVar21 = param_1 + 0x50;
  }
  else {
    lVar21 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar21 = *(longlong *)(param_1 + 0xc0);
    }
    lVar21 = lVar21 + (longlong)*(int *)(param_1 + 200) * 0x18 + -0x18;
  }
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x380);
  local_130 = (longlong *)0x0;
  local_128 = 0;
  FUN_144966e2e(&local_130,lVar21);
  if ((local_130 == (longlong *)0x0 || local_128 == 0) ||
     (cVar12 = (**(code **)(*local_130 + 0x30))(), cVar12 == '\0')) {
LAB_1400b9de1:
    uVar28 = DAT_14c8463e8;
    pcVar23 = (char *)(param_1 + 0x5e0);
    pcVar18 = pcVar23;
    if (0 < (longlong)*(int *)(param_1 + 0x600)) {
      lVar21 = param_1 + 0x5e8;
      if (*(longlong *)(param_1 + 0x5f8) != 0) {
        lVar21 = *(longlong *)(param_1 + 0x5f8);
      }
      pcVar18 = (char *)(lVar21 + (longlong)*(int *)(param_1 + 0x600) * 0xc + -0xc);
    }
    if (*pcVar18 == '\0') {
      uVar28 = *(undefined8 *)*pauVar1;
      uVar31 = *(undefined8 *)(param_1 + 0x388);
      uVar32 = *(undefined4 *)(param_1 + 0x390);
      uVar35 = *(undefined4 *)(param_1 + 0x394);
      uVar37 = *(undefined4 *)(param_1 + 0x398);
      uVar38 = *(undefined4 *)(param_1 + 0x39c);
      goto LAB_1400ba371;
    }
    pauVar14 = (undefined1 (*) [16])(param_1 + 0x420);
    if (*(char *)(param_1 + 0x440) == '\0') {
      pauVar14 = pauVar1;
    }
    dVar27 = *(double *)*pauVar14;
    dVar26 = *(double *)(*pauVar14 + 8);
    local_118 = *pauVar14;
    dVar47 = *(double *)pauVar14[1];
    dVar43 = *(double *)(pauVar14[1] + 8);
    local_108 = pauVar14[1];
    if ((longlong)*(int *)(param_1 + 0x740) < 1) {
      pcVar18 = (char *)(param_1 + 0x720);
    }
    else {
      lVar21 = param_1 + 0x728;
      if (*(longlong *)(param_1 + 0x738) != 0) {
        lVar21 = *(longlong *)(param_1 + 0x738);
      }
      pcVar18 = (char *)(lVar21 + (longlong)*(int *)(param_1 + 0x740) * 0xc + -0xc);
    }
    if ((*pcVar18 == '\x01') && (lVar21 = *(longlong *)(param_1 + 0xd0), lVar21 != 0)) {
      if (*(char *)(lVar21 + 0x580) == '\0') {
        if (*(char *)(lVar21 + 0x440) == '\x01') {
          dVar42 = *(double *)(lVar21 + 0x430) * -1.0;
          dVar46 = *(double *)(lVar21 + 0x438) * 1.0;
          dVar3 = *(double *)(lVar21 + 0x3c0);
          dVar5 = *(double *)(lVar21 + 0x3c8);
          dVar4 = *(double *)(lVar21 + 0x3d0);
          dVar10 = *(double *)(lVar21 + 0x3d8);
          dVar48 = *(double *)(lVar21 + 0x428);
          dVar25 = *(double *)(lVar21 + 0x428);
          dVar2 = *(double *)(lVar21 + 0x420);
          dVar24 = *(double *)(lVar21 + 0x420);
          dVar8 = dVar3 * dVar42 * 1.0 +
                  ((dVar5 * dVar46 - dVar24 * dVar4 * -1.0) - dVar10 * dVar25);
          dVar25 = dVar4 * dVar42 * -1.0 +
                   dVar25 * dVar5 + (dVar46 * dVar10 - dVar24 * dVar3 * -1.0);
          auVar45._8_4_ = SUB84(dVar8,0);
          auVar45._0_8_ =
               dVar5 * dVar42 * -1.0 + ((dVar3 * dVar46 - dVar2 * dVar10 * 1.0) - dVar4 * dVar48);
          auVar45._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x560) = auVar45;
          auVar6._8_4_ = SUB84(dVar25,0);
          auVar6._0_8_ = dVar10 * dVar42 * 1.0 +
                         dVar48 * dVar3 + (dVar46 * dVar4 - dVar2 * dVar5 * 1.0);
          auVar6._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          *(undefined1 (*) [16])(lVar21 + 0x570) = auVar6;
        }
        else {
          if ((undefined8 *)(lVar21 + 0x560) == &DAT_14c8463d0) goto LAB_1400b9fad;
          *(undefined8 *)(lVar21 + 0x570) = DAT_14c8463e0;
          *(undefined8 *)(lVar21 + 0x578) = uVar28;
          uVar28 = DAT_14c8463d8;
          *(undefined8 *)(lVar21 + 0x560) = DAT_14c8463d0;
          *(undefined8 *)(lVar21 + 0x568) = uVar28;
        }
        *(undefined1 *)(lVar21 + 0x580) = 1;
      }
LAB_1400b9fad:
      dVar48 = *(double *)(lVar21 + 0x578);
      dVar25 = *(double *)(lVar21 + 0x578);
      dVar24 = *(double *)(lVar21 + 0x560);
      dVar2 = *(double *)(lVar21 + 0x560);
      dVar3 = *(double *)(lVar21 + 0x568);
      dVar8 = *(double *)(lVar21 + 0x568);
      dVar4 = *(double *)(lVar21 + 0x570);
      dVar5 = *(double *)(lVar21 + 0x570);
      dVar10 = dVar26 * dVar4 * -1.0 + dVar3 * dVar47 + dVar24 * dVar43 * 1.0 + dVar48 * dVar27;
      dVar42 = dVar27 * dVar5 * 1.0 + dVar8 * dVar43 + dVar2 * dVar47 * -1.0 + dVar25 * dVar26;
      dVar48 = dVar43 * dVar4 * 1.0 + ((dVar24 * dVar26 * 1.0 + dVar48 * dVar47) - dVar3 * dVar27);
      dVar2 = dVar47 * dVar5 * -1.0 + ((dVar2 * dVar27 * -1.0 + dVar25 * dVar43) - dVar8 * dVar26);
      dVar25 = dVar2 * *(double *)(param_1 + 0x398) +
               *(double *)(param_1 + 0x390) * dVar48 +
               *(double *)(param_1 + 0x380) * dVar10 + dVar42 * *(double *)(param_1 + 0x388);
      dVar24 = (dVar25 + dVar25) * dVar25 + -1.0;
      dVar25 = dVar24;
      if (1.0 <= dVar24) {
        dVar25 = 1.0;
      }
      dVar25 = acos((double)(-(ulonglong)(dVar24 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar24 < -1.0) & (ulonglong)dVar25));
      dVar27 = dVar43 * *(double *)(param_1 + 0x398) +
               dVar47 * *(double *)(param_1 + 0x390) +
               dVar27 * *(double *)(param_1 + 0x380) + dVar26 * *(double *)(param_1 + 0x388);
      dVar26 = (dVar27 + dVar27) * dVar27 + -1.0;
      dVar27 = dVar26;
      if (1.0 <= dVar26) {
        dVar27 = 1.0;
      }
      dVar27 = acos((double)(-(ulonglong)(dVar26 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar26 < -1.0) & (ulonglong)dVar27));
      if (dVar25 < dVar27) {
        local_118._8_4_ = SUB84(dVar42,0);
        local_118._0_8_ = dVar10;
        local_118._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        local_108._8_4_ = SUB84(dVar2,0);
        local_108._0_8_ = dVar48;
        local_108._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      }
    }
    lVar21 = *(longlong *)(param_1 + 0xd0);
    if (lVar21 != 0) {
      pdVar15 = (double *)FUN_1447c6d68(lVar21);
      dVar26 = pdVar15[3];
      dVar27 = pdVar15[3];
      dVar2 = *(double *)(lVar21 + 0x450);
      dVar24 = *(double *)(lVar21 + 0x458);
      dVar8 = *(double *)(lVar21 + 0x460);
      dVar3 = *(double *)(lVar21 + 0x468);
      dVar5 = *(double *)(lVar21 + 0x470);
      dVar4 = *(double *)(lVar21 + 0x478);
      dVar10 = *(double *)(lVar21 + 0x480);
      dVar42 = *(double *)(lVar21 + 0x488);
      dVar43 = pdVar15[1];
      dVar47 = pdVar15[1];
      dVar25 = pdVar15[2];
      dVar48 = pdVar15[2];
      dVar46 = dVar24 * dVar25 * -1.0 + dVar8 * dVar43 + *pdVar15 * dVar3 * 1.0 + dVar26 * dVar2;
      dVar51 = dVar2 * dVar48 * 1.0 + dVar3 * dVar47 + *pdVar15 * dVar8 * -1.0 + dVar27 * dVar24;
      dVar43 = dVar3 * dVar25 * 1.0 + ((*pdVar15 * dVar24 * 1.0 + dVar26 * dVar8) - dVar43 * dVar2);
      dVar47 = dVar8 * dVar48 * -1.0 +
               ((*pdVar15 * dVar2 * -1.0 + dVar27 * dVar3) - dVar47 * dVar24);
      dVar27 = dVar5 * dVar43 * 1.0 + dVar42 * dVar51 + dVar10 * dVar46 * -1.0 + dVar4 * dVar47;
      dVar26 = dVar10 * dVar43 * -1.0 + ((dVar46 * dVar5 * -1.0 + dVar47 * dVar42) - dVar51 * dVar4)
      ;
      local_e8._8_4_ = SUB84(dVar27,0);
      local_e8._0_8_ =
           dVar4 * dVar43 * -1.0 + dVar10 * dVar51 + dVar42 * dVar46 * 1.0 + dVar5 * dVar47;
      local_e8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      local_d8._8_4_ = SUB84(dVar26,0);
      local_d8._0_8_ =
           dVar42 * dVar43 * 1.0 + ((dVar46 * dVar4 * 1.0 + dVar47 * dVar10) - dVar51 * dVar5);
      local_d8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      FUN_1447cb614();
    }
    puVar22 = local_118;
    cVar12 = FUN_1447ca264(param_1,puVar22,pauVar1);
    if (0 < (longlong)*(int *)(param_1 + 0x600)) {
      puVar22 = (undefined1 *)(param_1 + 0x5e8);
      if (*(undefined1 **)(param_1 + 0x5f8) != (undefined1 *)0x0) {
        puVar22 = *(undefined1 **)(param_1 + 0x5f8);
      }
      pcVar23 = puVar22 + (longlong)*(int *)(param_1 + 0x600) * 0xc + -0xc;
    }
    if (*pcVar23 == '\x02') {
      if (local_11c <= 0.0) {
        uVar32 = *(undefined4 *)(param_1 + 0x380);
        uVar35 = *(undefined4 *)(param_1 + 900);
        uVar37 = *(undefined4 *)(param_1 + 0x388);
        uVar38 = *(undefined4 *)(param_1 + 0x38c);
        auVar45 = *(undefined1 (*) [16])(param_1 + 0x390);
      }
      else {
        dVar47 = local_118._0_8_;
        uVar33 = local_118._0_4_;
        uVar36 = local_118._4_4_;
        dVar43 = local_108._0_8_;
        uVar39 = local_108._0_4_;
        uVar41 = local_108._4_4_;
        dVar25 = local_108._8_8_;
        auVar6 = *(undefined1 (*) [16])(param_1 + 0x380);
        dVar26 = auVar6._0_8_;
        uVar32 = auVar6._0_4_;
        uVar35 = auVar6._4_4_;
        uVar37 = auVar6._8_4_;
        uVar38 = auVar6._12_4_;
        auVar45 = *(undefined1 (*) [16])(param_1 + 0x390);
        dVar27 = auVar45._0_8_;
        lVar21 = -(ulonglong)(9.999999747378752e-05 < ABS((double)local_118._8_8_ - auVar6._8_8_));
        auVar11._8_4_ = (int)lVar21;
        auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar47 - dVar26));
        auVar11._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        uVar16 = movmskpd(2,auVar11);
        auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar25 - auVar45._8_8_));
        auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar43 - dVar27));
        iVar19 = movmskpd((int)puVar22,auVar9);
        uVar20 = iVar19 << 2 | uVar16;
        if (uVar20 != 0) {
          auVar49._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS((double)local_118._8_8_ + auVar6._8_8_));
          auVar49._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar47 + dVar26));
          iVar19 = movmskpd(uVar16,auVar49);
          auVar29._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar25 + auVar45._8_8_));
          auVar29._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar43 + dVar27));
          uVar16 = movmskpd(uVar20,auVar29);
          if ((uVar16 & 0x3fffffff) != 0 || iVar19 != 0) {
            dVar48 = *(double *)(param_1 + 0x388);
            uVar32 = local_108._8_4_;
            uVar35 = local_108._12_4_;
            fVar40 = local_11c * *param_2;
            if (1.0 <= fVar40) {
              fVar40 = 1.0;
            }
            dVar2 = *(double *)(param_1 + 0x398);
            uVar37 = SUB84(dVar2,0);
            uVar38 = (undefined4)((ulonglong)dVar2 >> 0x20);
            if (fVar40 <= 0.0) {
              fVar40 = 0.0;
            }
            if (cVar12 != '\0') {
              fVar40 = -fVar40;
            }
            dVar47 = dVar25 * dVar2 +
                     dVar43 * dVar27 + dVar47 * dVar26 + (double)local_118._8_8_ * dVar48;
            dVar25 = dVar47 * (double)(&DAT_149931160)[0.0 <= dVar47];
            dVar43 = 1.0 - (double)fVar40;
            dVar47 = (double)(&DAT_149931160)[0.0 <= dVar47] * (double)fVar40;
            if (dVar25 < 0.9999) {
              dVar27 = dVar25;
              if (1.0 <= dVar25) {
                dVar27 = 1.0;
              }
              dVar27 = acos((double)(-(ulonglong)(dVar25 < -1.0) & 0xbff0000000000000 |
                                    ~-(ulonglong)(dVar25 < -1.0) & (ulonglong)dVar27));
              dVar26 = sin(dVar27);
              dVar43 = sin(dVar43 * dVar27);
              dVar43 = dVar43 * (1.0 / dVar26);
              dVar47 = sin(dVar47 * dVar27);
              dVar47 = dVar47 * (1.0 / dVar26);
              uVar32 = local_108._8_4_;
              uVar35 = local_108._12_4_;
              uVar37 = (undefined4)*(undefined8 *)(param_1 + 0x398);
              uVar38 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x398) >> 0x20);
              uVar39 = local_108._0_4_;
              uVar41 = local_108._4_4_;
              dVar27 = *(double *)(param_1 + 0x390);
              uVar33 = local_118._0_4_;
              uVar36 = local_118._4_4_;
              dVar26 = *(double *)(param_1 + 0x380);
              dVar48 = *(double *)(param_1 + 0x388);
            }
            dVar2 = (double)CONCAT44(uVar35,uVar32) * dVar43 +
                    (double)CONCAT44(uVar38,uVar37) * dVar47;
            dVar25 = (double)CONCAT44(uVar41,uVar39) * dVar43 + dVar27 * dVar47;
            dVar48 = (double)local_118._8_8_ * dVar43 + dVar48 * dVar47;
            dVar27 = (double)CONCAT44(uVar36,uVar33) * dVar43 + dVar26 * dVar47;
            dVar26 = dVar25 * dVar25 + dVar27 * dVar27;
            dVar47 = dVar2 * dVar2 + dVar48 * dVar48;
            auVar44._0_8_ = dVar26 + dVar47;
            auVar44._8_8_ = dVar26 + dVar47;
            auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            auVar45 = sqrtpd(auVar44,auVar44);
            auVar45 = divpd(_DAT_149934d80,auVar45);
            auVar50._0_8_ = auVar45._0_8_ * dVar25;
            auVar50._8_8_ = auVar45._8_8_ * dVar2;
            uVar7 = (ulonglong)(dVar27 * auVar45._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
            uVar32 = (undefined4)uVar7;
            uVar35 = (undefined4)(uVar7 >> 0x20);
            uVar7 = (ulonglong)(dVar48 * auVar45._8_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
            uVar37 = (undefined4)uVar7;
            uVar38 = (undefined4)(uVar7 >> 0x20);
            auVar45 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar30);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x3e0) = uVar32;
      *(undefined4 *)(param_1 + 0x3e4) = uVar35;
      *(undefined4 *)(param_1 + 1000) = uVar37;
      *(undefined4 *)(param_1 + 0x3ec) = uVar38;
      *(undefined1 (*) [16])(param_1 + 0x3f0) = auVar45;
    }
    else if (*pcVar23 == '\x01') {
      local_168 = local_11c;
      local_160 = cVar12;
      FUN_142b3039d(local_e8,local_118,pauVar1);
      uVar32 = local_d8._0_4_;
      uVar35 = local_d8._4_4_;
      uVar37 = local_d8._8_4_;
      uVar38 = local_d8._12_4_;
      uVar28 = local_e8._0_8_;
      uVar31 = local_e8._8_8_;
      goto LAB_1400ba371;
    }
  }
  else {
    local_150[0] = *param_2;
    local_148 = param_1 + 0x420;
    local_138 = &local_11c;
    plVar17 = local_130;
    if (local_128 == 0) {
      plVar17 = (longlong *)0x0;
    }
    local_140 = pauVar1;
    (**(code **)(*plVar17 + 0x58))(plVar17,local_118,local_150);
    if (local_f8 == '\0') goto LAB_1400b9de1;
    local_d8 = local_108;
    local_e8 = local_118;
    uVar32 = local_108._0_4_;
    uVar35 = local_108._4_4_;
    uVar37 = local_108._8_4_;
    uVar38 = local_108._12_4_;
    uVar28 = local_118._0_8_;
    uVar31 = local_118._8_8_;
LAB_1400ba371:
    *(undefined4 *)(param_1 + 0x3f0) = uVar32;
    *(undefined4 *)(param_1 + 0x3f4) = uVar35;
    *(undefined4 *)(param_1 + 0x3f8) = uVar37;
    *(undefined4 *)(param_1 + 0x3fc) = uVar38;
    *(undefined8 *)(param_1 + 0x3e0) = uVar28;
    *(undefined8 *)(param_1 + 1000) = uVar31;
  }
  if (*(char *)(param_1 + 0x29c) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x6c8) < 1) {
      pfVar13 = (float *)(param_1 + 0x6a8);
    }
    else {
      lVar21 = param_1 + 0x6b0;
      if (*(longlong *)(param_1 + 0x6c0) != 0) {
        lVar21 = *(longlong *)(param_1 + 0x6c0);
      }
      pfVar13 = (float *)(lVar21 + (longlong)*(int *)(param_1 + 0x6c8) * 0xc + -0xc);
    }
    fVar40 = *(float *)(param_1 + 0x330);
    fVar34 = fVar40 - *(float *)(param_1 + 0x298);
    if (1e-08 <= fVar34 * fVar34) {
      fVar40 = (1.0 / *pfVar13) * *param_2;
      if (fVar40 <= fVar34) {
        fVar34 = fVar40;
      }
      if (fVar34 <= -fVar40) {
        fVar34 = -fVar40;
      }
      fVar40 = *(float *)(param_1 + 0x298) + fVar34;
    }
  }
  else {
    fVar40 = *(float *)(param_1 + 0x330);
  }
  *(float *)(param_1 + 0x294) = fVar40;
  if (local_128 != 0) {
    if (local_130 == (longlong *)0x0) goto LAB_1400ba739;
    (**(code **)*local_130)(local_130,0);
    FUN_1446efa72(&local_130,0,0,0x10);
    local_128 = 0;
  }
  if (local_130 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1400ba739:
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400ba7ce FUN_1400ba7ce body=63 status=ok
// SIG undefined FUN_1400ba7ce(void)

void FUN_1400ba7ce(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14063a814(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1400ba8dc(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1400ba80e FUN_1400ba80e body=135 status=ok
// SIG undefined FUN_1400ba80e(void)

undefined4 * FUN_1400ba80e(undefined4 *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  
  *param_1 = 0x3f800000;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar4 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xe) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = DAT_14c8464f0;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = param_2[3];
  *(double *)(param_1 + 0x14) = *param_2;
  *(double *)(param_1 + 0x16) = dVar1;
  *(double *)(param_1 + 0x18) = dVar2;
  *(double *)(param_1 + 0x1a) = dVar3;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar5 = _finite(*param_2);
  if (iVar5 != 0) {
    iVar5 = _finite(param_2[1]);
    if (iVar5 != 0) {
      iVar5 = _finite(param_2[2]);
      if (iVar5 != 0) {
        _finite(param_2[3]);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400ba895 FUN_1400ba895 body=71 status=ok
// SIG undefined FUN_1400ba895(void)

void FUN_1400ba895(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    *(undefined2 *)((longlong)param_1 + 0xc) = 0xff02;
    *(undefined1 *)(param_1 + 10) = 0xff;
    *(undefined1 *)(param_1 + 0x13) = 0xff;
    *(undefined1 *)(param_1 + 0x1c) = 0xff;
    *(undefined1 *)(param_1 + 0x25) = 0xff;
    *(undefined1 *)(param_1 + 0x2e) = 0xff;
    *(undefined1 *)(param_1 + 0x37) = 0xff;
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1400ba8dc FUN_1400ba8dc body=226 status=ok
// SIG undefined FUN_1400ba8dc(void)

void FUN_1400ba8dc(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (ulonglong)param_2 * 0x1c0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x4a) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 6;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x1c0,8);
  }
  return;
}



// FUNCTION 1400ba9f8 FUN_1400ba9f8 body=64 status=ok
// SIG undefined FUN_1400ba9f8(void)

undefined8 * FUN_1400ba9f8(undefined8 param_1,undefined8 *param_2)

{
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1400baa38(0,param_2);
  return param_2;
}



// FUNCTION 1400baa38 FUN_1400baa38 body=263 status=ok
// SIG undefined FUN_1400baa38(void)

void FUN_1400baa38(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  ulonglong *local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1402226aa(param_2);
  uVar3 = *(uint *)((longlong)param_1 + 0x144);
  if ((uint)(*(int *)(param_2 + 8) - *(int *)(param_2 + 0x34)) < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_1400bac10(param_2,uVar3);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x48) == 0) || (*(int *)(param_2 + 0x48) < iVar2)) {
      *(int *)(param_2 + 0x48) = iVar2;
      FUN_144a56d22(param_2);
    }
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar4 = (undefined4 *)*param_1;
    puVar1 = puVar4 + (longlong)*(int *)(param_1 + 1) * 3;
    do {
      local_44 = *puVar4;
      local_40 = puVar4[1];
      local_3c = puVar4[2];
      local_58 = &local_44;
      local_50 = &local_38;
      FUN_1400bab40(param_2,&local_58);
      puVar4 = puVar4 + 3;
    } while (puVar4 != puVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bab40 FUN_1400bab40 body=206 status=ok
// SIG undefined FUN_1400bab40(void)

void FUN_1400bab40(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = (int)((ulonglong)(param_2[1] - *param_2) >> 2) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_1400bac10(param_1,uVar4);
    if (uVar4 < 4) {
      iVar3 = 1;
    }
    else {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_144a56d22(param_1);
    }
  }
  lVar5 = *param_2;
  lVar1 = param_2[1];
  if (lVar5 != lVar1) {
    do {
      FUN_1447cbafe(param_1,local_2c,lVar5,0);
      lVar5 = lVar5 + 4;
    } while (lVar5 != lVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bac10 FUN_1400bac10 body=754 status=ok
// SIG undefined FUN_1400bac10(void)

void FUN_1400bac10(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_1 + 1);
  uVar10 = param_2 - uVar14;
  if (uVar10 != 0 && (int)uVar14 <= (int)param_2) {
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    uVar9 = uVar14;
    if (iVar12 < (int)param_2) {
      FUN_1447a08a2(param_1);
      uVar9 = *(uint *)(param_1 + 1);
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar9 + uVar10;
    if (iVar12 - uVar9 < uVar10) {
      FUN_1447cc1b4(param_1);
    }
    if ((int)uVar9 < (int)param_2) {
      lVar1 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar7 = (undefined4 *)(lVar1 + uVar3 * 0xc + -8);
      do {
        iVar2 = (int)uVar3;
        if (iVar12 != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0xc) = iVar2 + -1;
        }
        puVar7[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (undefined4)param_1[6];
        }
        uVar3 = uVar3 - 1;
        *puVar7 = uVar11;
        *(int *)(param_1 + 6) = iVar2 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar7 = puVar7 + -3;
      } while ((longlong)(int)uVar9 < (longlong)uVar3);
    }
    if (uVar14 == 0) {
      *(uint *)(param_1 + 5) = uVar10;
      if (param_2 != 0) {
        uVar14 = uVar10 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar14) {
          if ((0x80 < uVar10) || (param_1[4] != 0)) {
            uVar9 = 0;
            if (0x80 < uVar10) {
              uVar9 = uVar14;
            }
            FUN_1446efa72(param_1 + 4,0,uVar9,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar10 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar10 < 0x101) {
          uVar14 = uVar14 + (uVar14 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar14 << 2));
        iVar12 = (int)param_1[5];
        iVar2 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar2 = iVar12;
        }
        if (iVar12 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar13 = -(char)(iVar12 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar2 >> 5) * 4) << (bVar13 & 0x1f)) >>
               (bVar13 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar10) {
      plVar5 = param_1 + 2;
      iVar12 = (int)param_1[5];
      if (param_2 != uVar14) {
        if (iVar12 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar2 = iVar12 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar15 = iVar12 + uVar10;
        iVar4 = iVar12 + uVar10 + -1;
        iVar6 = iVar12 + uVar10 + 0x1e;
        if (-1 < iVar4) {
          iVar6 = iVar4;
        }
        if (iVar6 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar15;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) < iVar15) {
            if (iVar15 + 0x1fU < 0xa0) {
              iVar15 = 0x80;
              iVar2 = iVar12;
            }
            else {
              uVar14 = iVar15 + 0x1fU >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar14) {
                  uVar9 = uVar14;
                }
              }
              else {
                uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar3 = FUN_144a3809e(uVar9 << 2,0);
              iVar2 = (int)(uVar3 >> 2);
              iVar15 = -0x20;
              if ((int)uVar14 <= iVar2) {
                iVar15 = iVar2 << 5;
              }
              iVar2 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar15;
            FUN_1446efbd8(plVar5,iVar2);
            iVar15 = (int)param_1[5] + uVar10;
          }
          iVar2 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar2 = iVar15;
          }
          *(int *)(param_1 + 5) = iVar15;
          if (iVar15 % 0x20 != 0) {
            plVar8 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar8 = plVar5;
            }
            bVar13 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)plVar8 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar2 >> 5) * 4) << (bVar13 & 0x1f))
                 >> (bVar13 & 0x1f);
          }
        }
      }
      FUN_1447c6044(plVar5,iVar12,uVar10,0);
      return;
    }
  }
  return;
}



// FUNCTION 1400baf02 FUN_1400baf02 body=38 status=ok
// SIG undefined FUN_1400baf02(void)

undefined8 FUN_1400baf02(undefined8 param_1,int param_2)

{
  FUN_1400baf28();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400baf28 FUN_1400baf28 body=92 status=ok
// SIG undefined FUN_1400baf28(void)

undefined4 FUN_1400baf28(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f54080;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    FUN_1400baf84(lVar1);
    FUN_1400020a8(lVar1);
  }
  FUN_144756766(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 1400baf84 FUN_1400baf84 body=61 status=ok
// SIG undefined FUN_1400baf84(void)

void FUN_1400baf84(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400bafc2 FUN_1400bafc2 body=323 status=ok
// SIG undefined FUN_1400bafc2(void)

longlong FUN_1400bafc2(longlong *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar4 = (**(code **)(*param_1 + 0x68))();
  if (lVar4 == 0) {
    lVar9 = 0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 3);
    EnterCriticalSection(lpCriticalSection);
    lVar10 = (longlong)param_2;
    lVar9 = *(longlong *)(param_1[10] + lVar10 * 8);
    if (lVar9 == 0) {
      *(longlong *)(param_1[10] + lVar10 * 8) = lVar4;
      if (-1 < (int)*(uint *)(param_1 + 0xb)) {
        *(uint *)(param_1 + 0xb) = *(uint *)(param_1 + 0xb) | 0x80000000;
      }
      if (((DAT_14ca84ef4 == '\x01') && (DAT_14ca84ef5 == '\x01')) &&
         (bVar2 = *(char *)(lVar4 + 0x9c) - 7, bVar2 < 3)) {
        uVar3 = FUN_1474422fe((&PTR_DAT_14a399f78)[bVar2],lVar4);
        *(undefined4 *)(param_1[8] + lVar10 * 4) = uVar3;
      }
      (**(code **)(*param_1 + 0x70))(param_1,param_2);
      LeaveCriticalSection(lpCriticalSection);
      lVar9 = lVar4;
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
      LOCK();
      puVar5 = (uint *)(lVar4 + 8);
      uVar1 = *puVar5;
      *puVar5 = *puVar5 - 1;
      UNLOCK();
      if ((uVar1 & 0x3fffffff) == 1) {
        puVar5 = (uint *)(lVar4 + 8);
        LOCK();
        uVar1 = *puVar5;
        *puVar5 = *puVar5 | 0x40000000;
        UNLOCK();
        if ((uVar1 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar11 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar11) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  return lVar9;
}



// FUNCTION 1400bb106 FUN_1400bb106 body=226 status=ok
// SIG undefined FUN_1400bb106(void)

longlong * FUN_1400bb106(longlong *param_1)

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
  pcVar13 = FUN_1462e2414;
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



// FUNCTION 1400bb1e9 FUN_1400bb1e9 body=233 status=ok
// SIG undefined FUN_1400bb1e9(void)

undefined8 FUN_1400bb1e9(longlong param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (((((param_1 == 0) || (param_3 == 0)) ||
       (*(char *)(*(longlong *)(param_3 + 0x28) + 0x1e8) != '\0')) ||
      ((plVar3 = *(longlong **)(param_3 + 0x100), plVar3 == (longlong *)0x0 || (plVar3[0x9a4] == 0))
      )) || (((*(byte *)(*(longlong *)(param_2 + 8) + 0x5a) & 2) == 0 ||
             (((**(code **)(*plVar3 + 0x2c0))(), DAT_14c760dd5 != '\x01' ||
              (*(int *)(DAT_14ca5c7b8 + 4) < 1)))))) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x36b8) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x36b8) + 0x28);
  }
  if (*(longlong *)(param_1 + 0x36c0) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x36c0) + 0x28);
  }
  plVar4 = *(longlong **)(param_3 + 0x28);
  if ((plVar3 != (longlong *)0x0) && (plVar3 == plVar4)) {
    cVar1 = (**(code **)(*plVar3 + 0x1a8))();
    if (cVar1 != '\0') {
      return 1;
    }
    plVar4 = *(longlong **)(param_3 + 0x28);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5 == plVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001400bb2c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar5 + 0x1a8))(plVar5);
      return uVar2;
    }
    return 0;
  }
  return 0;
}



// FUNCTION 1400bb2d8 FUN_1400bb2d8 body=135 status=ok
// SIG undefined FUN_1400bb2d8(void)

void FUN_1400bb2d8(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_144757f48(param_1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bb360 FUN_1400bb360 body=1964 status=ok
// SIG undefined FUN_1400bb360(void)

longlong * FUN_1400bb360(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined1 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined *puVar15;
  longlong *plVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  undefined1 auStack_618 [47];
  char local_5e9;
  longlong local_5e8;
  longlong local_5e0;
  longlong *local_5d8;
  ushort local_5ca;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5a9;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_590;
  undefined1 local_588 [1280];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_5e9 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb00228) && (FUN_144b3d300(&DAT_14cb00228), DAT_14cb00228 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar14 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Nanite.ForceEnableMeshes",1);
    if (plVar14 == (longlong *)0x0) {
      DAT_14cb00220 = 0;
    }
    else {
      DAT_14cb00220 = (**(code **)(*plVar14 + 0x68))(plVar14);
    }
    _Init_thread_footer(&DAT_14cb00228);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb00230) &&
     (FUN_144b3d300(&DAT_14cb00230), lVar20 = DAT_14cb00220, DAT_14cb00230 == -1)) {
    if (DAT_14cb00220 == 0) {
      DAT_14cb0022c = false;
    }
    else {
      iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar24 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar24 == 2)) {
        uVar17 = 0;
      }
      else if (iVar24 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        uVar17 = (ulonglong)(DVar10 != DVar11);
      }
      else {
        uVar17 = 1;
      }
      DAT_14cb0022c = *(int *)(lVar20 + uVar17 * 4) != 0;
    }
    _Init_thread_footer(&DAT_14cb00230);
  }
  *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) & 0xfe;
  local_5d8 = param_2 + 2;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  if (*(int *)((longlong)param_2 + 0xe4) < 0) {
    FUN_147cd488e(local_5d8,0);
  }
  if (param_1 != 0) {
    local_88 = (undefined1 *)0x0;
    local_80 = 0x2000000000;
    lVar20 = *(longlong *)(param_1 + 0xf8);
    if ((lVar20 != 0) && ((longlong)*(int *)(lVar20 + 0x160) != 0)) {
      lVar21 = *(longlong *)(lVar20 + 0x158);
      lVar20 = (longlong)*(int *)(lVar20 + 0x160) * 0x30;
      lVar23 = 0;
      uVar17 = 0;
      do {
        iVar24 = (int)uVar17;
        if ((((iVar24 < 0) || (*(int *)(param_1 + 0x108) <= iVar24)) ||
            (plVar14 = *(longlong **)(*(longlong *)(param_1 + 0x100) + uVar17 * 8),
            plVar14 == (longlong *)0x0)) &&
           ((((lVar22 = *(longlong *)(param_1 + 0xf8), lVar22 == 0 || (iVar24 < 0)) ||
             (*(int *)(lVar22 + 0x160) <= iVar24)) ||
            (plVar14 = *(longlong **)(*(longlong *)(lVar22 + 0x158) + uVar17 * 0x30),
            plVar14 == (longlong *)0x0)))) {
          plVar14 = (longlong *)0x0;
        }
        else if (DAT_14c761bc8 != 0) {
          local_78 = 0;
          uStack_70 = 0;
          plVar13 = (longlong *)(**(code **)(*plVar14 + 0x360))(plVar14,&local_78);
          if (plVar13 != (longlong *)0x0) {
            plVar14 = plVar13;
          }
        }
        uVar17 = local_80;
        uVar3 = *(undefined8 *)(lVar21 + 8 + lVar23);
        local_68 = *(undefined4 *)(lVar21 + 0x28 + lVar23);
        plVar13 = (longlong *)(lVar21 + 0x18 + lVar23);
        local_78 = *plVar13;
        uStack_70 = plVar13[1];
        lVar22 = (longlong)(int)local_80;
        uVar9 = (int)local_80 + 1;
        local_80 = CONCAT44(local_80._4_4_,uVar9);
        if (local_80._4_4_ < uVar9) {
          local_5e8 = param_1;
          local_5e0 = lVar20;
          FUN_147cd476e(local_588,uVar17 & 0xffffffff);
          param_1 = local_5e8;
          lVar20 = local_5e0;
        }
        puVar12 = local_88;
        if (local_88 == (undefined1 *)0x0) {
          puVar12 = local_588;
        }
        *(longlong **)(puVar12 + lVar22 * 0x28) = plVar14;
        *(undefined8 *)(puVar12 + lVar22 * 0x28 + 8) = uVar3;
        uVar4 = local_78._4_4_;
        uVar5 = (undefined4)uStack_70;
        uVar6 = uStack_70._4_4_;
        puVar1 = (undefined4 *)(puVar12 + lVar22 * 0x28 + 0x10);
        *puVar1 = (undefined4)local_78;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        *(undefined4 *)(puVar12 + lVar22 * 0x28 + 0x20) = local_68;
        uVar17 = (ulonglong)(iVar24 + 1);
        lVar23 = lVar23 + 0x30;
      } while (lVar20 != lVar23);
      puVar12 = local_588;
      if (local_88 != (undefined1 *)0x0) {
        puVar12 = local_88;
      }
      if ((longlong)(int)local_80 != 0) {
        local_5e0 = (longlong)(int)local_80 * 0x28;
        lVar20 = 0;
        iVar24 = 0;
        local_5e8 = param_1;
        do {
          iVar2 = (int)param_2[0x1c];
          lVar21 = (longlong)iVar2;
          *(uint *)(param_2 + 0x1c) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xe4) < iVar2 + 1U) {
            FUN_144ae8bb8(local_5d8,iVar2);
          }
          plVar14 = (longlong *)param_2[0x1a];
          if ((longlong *)param_2[0x1a] == (longlong *)0x0) {
            plVar14 = local_5d8;
          }
          plVar13 = plVar14 + lVar21 * 6;
          FUN_144b26f1b(plVar13,1);
          plVar14[lVar21 * 6 + 1] = *(longlong *)(puVar12 + lVar20 + 8);
          *(int *)(plVar14 + lVar21 * 6 + 2) = iVar24;
          plVar16 = *(longlong **)(puVar12 + lVar20);
          bVar8 = *(byte *)((longlong)plVar14 + lVar21 * 0x30 + 0x14);
          plVar14[lVar21 * 6] = (longlong)plVar16;
          *(byte *)((longlong)plVar14 + lVar21 * 0x30 + 0x14) =
               bVar8 & 0xfd | (plVar16 == (longlong *)0x0) * '\x02';
          puVar1 = (undefined4 *)(puVar12 + lVar20 + 0x14);
          uVar4 = puVar1[1];
          uVar5 = puVar1[2];
          uVar6 = puVar1[3];
          plVar14 = plVar14 + lVar21 * 6 + 4;
          *(undefined4 *)plVar14 = *puVar1;
          *(undefined4 *)((longlong)plVar14 + 4) = uVar4;
          *(undefined4 *)(plVar14 + 1) = uVar5;
          *(undefined4 *)((longlong)plVar14 + 0xc) = uVar6;
          if (plVar16 == (longlong *)0x0) {
            FUN_14003fbd6();
            plVar16 = DAT_14caea080;
            *plVar13 = (longlong)DAT_14caea080;
          }
          local_5a8 = 0;
          uStack_5a0 = 0;
          plVar14 = (longlong *)(**(code **)(*plVar16 + 0x2c0))(plVar16,&local_5a8);
          uVar9 = (**(code **)(*(longlong *)*plVar13 + 0x408))();
          local_5a9 = 0;
          local_5c8 = 0;
          uStack_5c0 = 0;
          lVar21 = (**(code **)(*plVar14 + 0x2d0))(plVar14,&local_5c8);
          bVar8 = *(byte *)((longlong)plVar13 + 0x15);
          *(byte *)((longlong)plVar13 + 0x14) =
               *(byte *)((longlong)plVar13 + 0x14) & 0x7f |
               *(char *)(lVar21 + 0x460) * '\x02' & 0x80U;
          bVar18 = *(byte *)(lVar21 + 0x460) >> 4 & 2;
          *(byte *)((longlong)plVar13 + 0x15) = bVar8 & 0xfd | bVar18;
          bVar19 = *(byte *)(lVar21 + 0x460) >> 2 & 4;
          *(byte *)((longlong)plVar13 + 0x15) = bVar8 & 0xf9 | bVar18 | bVar19;
          *(byte *)((longlong)plVar13 + 0x15) =
               bVar8 & 0xf8 | bVar18 | bVar19 | *(byte *)(lVar21 + 0x460) >> 7;
          local_78 = 0;
          uStack_70 = 0;
          if (*(code **)(*plVar14 + 0x2d0) == (code *)&LAB_14470b6e8) {
            puVar15 = (undefined *)plVar14[0x18];
            if (puVar15 == (undefined *)0x0) {
              puVar15 = &DAT_14caea5a0;
            }
          }
          else {
            puVar15 = (undefined *)(**(code **)(*plVar14 + 0x2d0))(plVar14,&local_78);
          }
          *(byte *)((longlong)plVar13 + 0x14) =
               *(byte *)((longlong)plVar13 + 0x14) & 0xdf |
               (byte)(*(uint *)(puVar15 + 0x468) >> 0x17) & 0x20;
          local_78 = 0;
          uStack_70 = 0;
          if (*(code **)(*plVar14 + 0x2d0) == (code *)&LAB_14470b6e8) {
            puVar15 = (undefined *)plVar14[0x18];
            if (puVar15 == (undefined *)0x0) {
              puVar15 = &DAT_14caea5a0;
            }
          }
          else {
            puVar15 = (undefined *)(**(code **)(*plVar14 + 0x2d0))(plVar14,&local_78);
          }
          *(byte *)((longlong)plVar13 + 0x14) =
               *(byte *)((longlong)plVar13 + 0x14) & 0xfb |
               (byte)(*(uint *)(puVar15 + 0x468) >> 10) & 4;
          cVar7 = (**(code **)(*plVar14 + 0x550))(plVar14);
          *(byte *)((longlong)plVar13 + 0x14) =
               (1 < uVar9) << 3 | cVar7 << 6 | *(byte *)((longlong)plVar13 + 0x14) & 0xb7;
          (**(code **)(*plVar14 + 0x410))(plVar14,&local_5ca);
          *(byte *)((longlong)plVar13 + 0x14) =
               *(byte *)((longlong)plVar13 + 0x14) & 0xef | (byte)(local_5ca >> 6) & 0x10;
          if (local_5e9 == '\0') {
            bVar8 = FUN_144b24cd0(plVar14,&local_5a9,0x12);
          }
          else {
            bVar8 = (**(code **)(*plVar14 + 0x340))(plVar14,0x12);
            bVar8 = bVar8 ^ 1;
          }
          *(byte *)((longlong)plVar13 + 0x15) =
               *(byte *)((longlong)plVar13 + 0x15) & 0xf7 | bVar8 << 3;
          if (uVar9 == 1) {
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 2;
          }
          if ((*(byte *)((longlong)plVar14 + 0x1d7) & 4) != 0) {
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 4;
          }
          bVar8 = *(byte *)((longlong)plVar13 + 0x14);
          bVar19 = ((*(byte *)((longlong)plVar13 + 0x15) | bVar8) >> 3 | bVar8 >> 4) & 1;
          bVar18 = bVar8 & 0xfe | bVar19;
          *(byte *)((longlong)plVar13 + 0x14) = bVar18;
          bVar8 = *(byte *)(param_2 + 0x1f);
          if (((bVar8 & 1) == 0 & bVar19) == 1) {
            local_590 = *(undefined8 *)(*(longlong *)(local_5e8 + 0xf8) + 0x18);
            FUN_1400021e4(&local_590,&local_78);
            if (&local_78 == param_2) {
              if (local_78 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*param_2 != 0) {
                FUN_1400020a8();
              }
              *param_2 = local_78;
              local_78 = 0;
              *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
              *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
            }
            FUN_14003fbd6();
            param_2[0x1e] = (longlong)DAT_14caea080;
            bVar18 = *(byte *)((longlong)plVar13 + 0x14);
            bVar8 = *(byte *)(param_2 + 0x1f);
          }
          *(byte *)(param_2 + 0x1f) = bVar18 & 1 | bVar8;
          lVar20 = lVar20 + 0x28;
          iVar24 = iVar24 + 1;
        } while (local_5e0 != lVar20);
      }
      if (local_88 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_618) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400bbb0e FUN_1400bbb0e body=86 status=ok
// SIG undefined FUN_1400bbb0e(void)

void FUN_1400bbb0e(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x48) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_1400bbb8e(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar1 = param_1;
    }
    FUN_1400bbb64(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x4c) = 4;
  return;
}



// FUNCTION 1400bbb64 FUN_1400bbb64 body=42 status=ok
// SIG undefined FUN_1400bbb64(void)

void FUN_1400bbb64(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = 0;
      ((undefined8 *)(param_1 + lVar1))[1] = 0;
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 8 + lVar1) = *(undefined8 *)(param_2 + 8 + lVar1);
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1400bbb8e FUN_1400bbb8e body=233 status=ok
// SIG undefined FUN_1400bbb8e(void)

void FUN_1400bbb8e(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 4;
    if (4 < param_2) {
      uVar2 = (longlong)(int)param_2 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar2 < 0x7ff1) {
            uVar2 = (ulonglong)
                    (ushort)(&DAT_14c841d90)
                            [0x32 - (byte)(&DAT_14c841e00)
                                          [(longlong)(int)param_2 & 0xfffffffffffffff]];
          }
          else {
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
        }
      }
      iVar1 = (int)(uVar2 >> 4);
      iVar4 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar4 = iVar1;
      }
    }
  }
  if (param_3 < iVar4) {
    FUN_1400bbc78(param_1,0,iVar4,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0x4c) = param_3;
  return;
}



// FUNCTION 1400bbc78 FUN_1400bbc78 body=132 status=ok
// SIG undefined FUN_1400bbc78(void)

void FUN_1400bbc78(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400bbcfc FUN_1400bbcfc body=63 status=ok
// SIG undefined FUN_1400bbcfc(void)

void FUN_1400bbcfc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1400bbd3c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,4);
  }
  return;
}



// FUNCTION 1400bbd3c FUN_1400bbd3c body=93 status=ok
// SIG undefined FUN_1400bbd3c(void)

ulonglong FUN_1400bbd3c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,4);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1400bbd9a FUN_1400bbd9a body=93 status=ok
// SIG undefined FUN_1400bbd9a(void)

void FUN_1400bbd9a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
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
    FUN_1400bbdf8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1400bbdf8 FUN_1400bbdf8 body=264 status=ok
// SIG undefined FUN_1400bbdf8(void)

void FUN_1400bbdf8(undefined8 *param_1,int param_2,int param_3,longlong param_4)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if ((param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,param_4);
    }
    _Src = (void *)*param_1;
    iVar3 = (int)param_4 * param_3;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar5 = (ulonglong)((uint)(0xf < iVar3) * 8);
    lVar1 = uVar5 + 7;
    uVar5 = uVar5 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar5);
    uVar4 = (longlong)_Dst + (longlong)iVar3;
    if (puVar2[1] < uVar4) {
      FUN_140023dd8(puVar2,(uint)(0xf < iVar3) * 8 + 8 + iVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar5);
      uVar4 = (longlong)iVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar4;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,param_2 * param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1400bbf02 FUN_1400bbf02 body=171 status=ok
// SIG undefined FUN_1400bbf02(void)

undefined8 * FUN_1400bbf02(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_48 [40];
  uint local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    lVar1 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x138);
    }
    uVar2 = *(uint *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x140) - 1U & param_3) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)uVar2 * 0x14);
        if (*puVar3 == param_3) {
          if (puVar3 != (uint *)0x0) {
            puVar3 = puVar3 + 1;
            goto LAB_1400bbf70;
          }
          break;
        }
        uVar2 = puVar3[3];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar3 = local_20;
  FUN_14007d9be(param_1,puVar3);
LAB_1400bbf70:
  *param_2 = *(undefined8 *)puVar3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bbfae FUN_1400bbfae body=22 status=ok
// SIG undefined FUN_1400bbfae(void)

undefined8 FUN_1400bbfae(undefined8 param_1)

{
  FUN_1400bbfc4();
  return param_1;
}



// FUNCTION 1400bbfc4 FUN_1400bbfc4 body=140 status=ok
// SIG undefined FUN_1400bbfc4(void)

undefined8 * FUN_1400bbfc4(undefined8 *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1401031ac(param_2,0,&local_48);
    local_30 = local_48;
    local_28 = (int)uStack_40 + -1;
    if ((int)uStack_40 == 0) {
      local_28 = 0;
    }
    FUN_14475bf92(param_1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bc052 FUN_1400bc052 body=12 status=ok
// SIG undefined FUN_1400bc052(void)

void FUN_1400bc052(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400bc05b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1400bc05e FUN_1400bc05e body=59 status=ok
// SIG undefined FUN_1400bc05e(void)

undefined8 * FUN_1400bc05e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478fa0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bc09a FUN_1400bc09a body=58 status=ok
// SIG undefined FUN_1400bc09a(void)

undefined8 FUN_1400bc09a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_3 + 8))(param_3);
  FUN_1402057ac(param_2,param_3,uVar1,0);
  FUN_1400bc0d4(param_3,param_2);
  return 1;
}



// FUNCTION 1400bc0d4 FUN_1400bc0d4 body=493 status=ok
// SIG undefined FUN_1400bc0d4(void)

void FUN_1400bc0d4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined4 local_c8;
  undefined1 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  byte *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*param_2 == 0) {
    puVar4 = &DAT_14c9a1308;
  }
  else {
    puVar4 = (undefined8 *)FUN_1408db3b0(*param_2,"prompt");
  }
  local_30 = (byte *)*puVar4;
  local_28 = (longlong *)puVar4[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
  }
  if ((local_30 != (byte *)0x0) && ((*local_30 & 3) != 0)) {
    if (*param_2 == 0) {
      puVar4 = &DAT_14c9a1308;
    }
    else {
      puVar4 = (undefined8 *)FUN_1408db3b0(*param_2,"responsetype");
    }
    if (((byte *)*puVar4 == (byte *)0x0) || ((*(byte *)*puVar4 & 3) == 0)) {
      local_38 = 0;
      FUN_1400bc2c2(&local_30,&local_d8);
      if (CONCAT71(uStack_d7,local_d8) == DAT_14cb8d7d0) {
        *(undefined1 *)(param_1 + 0x18) = 1;
      }
      else {
        local_38 = 0;
        FUN_1400bc2c2(&local_30);
        if (CONCAT71(uStack_d7,local_d8) == DAT_14cb8d7d8) {
          *(undefined1 *)(param_1 + 0x18) = 0;
          memset(&local_d8,0,0xa0);
          local_d8 = 1;
          local_c8 = 0xf00000d0;
          local_b8 = 4;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0xf00000d0;
          local_68 = 0x3f800000;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          FUN_1456cb166(param_1 + 0x38,&local_d8);
          FUN_1447cd732(&local_d8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 2;
        }
      }
    }
  }
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bc2c2 FUN_1400bc2c2 body=41 status=ok
// SIG undefined FUN_1400bc2c2(void)

undefined8 * FUN_1400bc2c2(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*param_1 == 0) {
    *param_2 = *param_3;
  }
  else {
    FUN_1400bc2ec(*param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1400bc2ec FUN_1400bc2ec body=362 status=ok
// SIG undefined FUN_1400bc2ec(void)

ulonglong * FUN_1400bc2ec(byte *param_1,ulonglong *param_2,ulonglong *param_3)

{
  char *_Str;
  size_t sVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_58 [40];
  char *local_30;
  int local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((char)*param_1 < '\0') || (-1 < *(short *)(param_1 + 0x20))) {
    FUN_1400bc45c(param_1 + 0x24,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (((*param_1 & 0x6b) != 1) || (_Str = *(char **)(param_1 + 8), _Str == (char *)0x0)) {
    uVar2 = *param_3;
    goto LAB_1400bc3ad;
  }
  sVar1 = strlen(_Str);
  iVar4 = (int)sVar1;
  if (iVar4 == 0) {
LAB_1400bc426:
    uVar2 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = (longlong)iVar4;
    pcVar9 = _Str + lVar5 + -1;
    uVar3 = 0;
    if (pcVar9 < _Str) {
      lVar8 = 0;
    }
    else {
      do {
        if (9 < (byte)(*pcVar9 - 0x30U)) break;
        uVar3 = uVar3 + 1;
        pcVar9 = pcVar9 + -1;
      } while (_Str <= pcVar9);
      if (uVar3 == 0 || iVar4 <= (int)uVar3) {
LAB_1400bc381:
        lVar8 = 0;
      }
      else {
        lVar8 = 0;
        if ((uVar3 < 0xb) && (lVar10 = -(ulonglong)uVar3, _Str[lVar10 + lVar5 + -1] == '_')) {
          if ((uVar3 == 1) || (_Str[lVar10 + lVar5] != '0')) {
            lVar7 = 0;
            do {
              lVar8 = (longlong)_Str[lVar10 + lVar5] + lVar7 * 10;
              lVar7 = lVar8 + -0x30;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0);
            if (lVar7 < 0x7fffffff) {
              iVar4 = ~uVar3 + iVar4;
              lVar8 = lVar8 + -0x2f;
              goto LAB_1400bc383;
            }
          }
          goto LAB_1400bc381;
        }
      }
LAB_1400bc383:
      if (iVar4 == 0) goto LAB_1400bc426;
    }
    local_24 = 0;
    local_30 = _Str;
    local_28 = iVar4;
    uVar3 = FUN_14001a6c0(&local_30,1);
    uVar6 = lVar8 << 0x20;
    uVar2 = (ulonglong)uVar3;
  }
  uVar2 = uVar2 | uVar6;
LAB_1400bc3ad:
  *param_2 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400bc45c FUN_1400bc45c body=180 status=ok
// SIG undefined FUN_1400bc45c(void)

undefined8 * FUN_1400bc45c(int *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    *param_2 = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    lVar2 = *(longlong *)(DAT_14c9a1378 + (longlong)(iVar1 / 0x199) * 8);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9a1320);
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,param_2,(ulonglong)(uint)(iVar1 % 0x199) * 0x28 + lVar2,1);
  }
  return param_2;
}



// FUNCTION 1400bc548 FUN_1400bc548 body=29 status=ok
// SIG undefined FUN_1400bc548(void)

void FUN_1400bc548(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1400bc566 FUN_1400bc566 body=31 status=ok
// SIG undefined FUN_1400bc566(void)

undefined8 FUN_1400bc566(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bc592 FUN_1400bc592 body=143 status=ok
// SIG undefined FUN_1400bc592(void)

void FUN_1400bc592(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140fba904(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146d9d70c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146d9d76c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400bc622 FUN_1400bc622 body=72 status=ok
// SIG undefined FUN_1400bc622(void)

void FUN_1400bc622(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    lVar1 = param_1;
  }
  FUN_1400bc6c1(lVar1,*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_1400bc66a(param_1);
    return;
  }
  return;
}



// FUNCTION 1400bc66a FUN_1400bc66a body=87 status=ok
// SIG undefined FUN_1400bc66a(void)

void FUN_1400bc66a(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
    if (*(void **)((longlong)param_1 + 0x88) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x88),
              (longlong)*(int *)((longlong)param_1 + 0x90) * 0x88);
      FUN_142fea3d2((longlong)param_1 + 0x88,0);
      return;
    }
  }
  return;
}



// FUNCTION 1400bc6c1 FUN_1400bc6c1 body=181 status=ok
// SIG undefined FUN_1400bc6c1(void)

void FUN_1400bc6c1(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400bc776(param_1 + 0x70);
    FUN_1400bc776(param_1 + 0x60);
    FUN_1400bc776(param_1 + 0x50);
    FUN_1400bc776(param_1 + 0x40);
    lVar1 = *(longlong *)(param_1 + 0x30);
    if (lVar1 != 0) {
      piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
      LOCK();
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
          lVar1 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar1 = FUN_145bdc178();
          }
          FUN_140028df4(lVar1,piVar2);
        }
        else {
          FUN_144705e74(piVar2);
        }
      }
    }
    FUN_1400bc7da(param_1 + 0x20);
    FUN_1400bc7da(param_1 + 0x10);
    FUN_1400bc7da(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1400bc776 FUN_1400bc776 body=99 status=ok
// SIG undefined FUN_1400bc776(void)

void FUN_1400bc776(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400bc7da FUN_1400bc7da body=99 status=ok
// SIG undefined FUN_1400bc7da(void)

void FUN_1400bc7da(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400bc83e FUN_1400bc83e body=92 status=ok
// SIG undefined FUN_1400bc83e(void)

void FUN_1400bc83e(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1400bc89a(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1400bc89a FUN_1400bc89a body=40 status=ok
// SIG undefined FUN_1400bc89a(void)

void FUN_1400bc89a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146fdeb9a(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1400bc8c2 FUN_1400bc8c2 body=170 status=ok
// SIG undefined FUN_1400bc8c2(void)

void FUN_1400bc8c2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (*param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar1 = param_1 + 8;
    }
    iVar2 = *(int *)(param_1 + 0x20);
    if ((longlong)iVar2 != 0) {
      iVar4 = 1;
      lVar5 = 0;
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar5) == *param_2) {
          if (iVar4 == 0) {
            return;
          }
          if (iVar2 - iVar4 != 0) {
            memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),(void *)(lVar1 + (lVar3 >> 0x20) * 8 + 8),
                    (longlong)(iVar2 - iVar4) << 3);
            iVar2 = *(int *)(param_1 + 0x20);
          }
          *(int *)(param_1 + 0x20) = iVar2 + -1;
          FUN_141739acc(param_1 + 8);
          *(bool *)param_1 = 0 < *(int *)(param_1 + 0x20);
          return;
        }
        lVar3 = lVar3 + 0x100000000;
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar2 << 3 != lVar5);
    }
  }
  return;
}



// FUNCTION 1400bc96c FUN_1400bc96c body=130 status=ok
// SIG undefined FUN_1400bc96c(void)

void FUN_1400bc96c(undefined1 *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*param_2 != 0) {
    puVar4 = param_1 + 8;
    puVar2 = *(undefined1 **)(param_1 + 0x18);
    puVar3 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      puVar3 = puVar4;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    lVar6 = (longlong)iVar1;
    if (lVar6 != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(puVar3 + lVar5) == *param_2) {
          return;
        }
        lVar5 = lVar5 + 8;
      } while (lVar6 * 8 - lVar5 != 0);
    }
    *(uint *)(param_1 + 0x20) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
      FUN_141736066(puVar4,iVar1);
      puVar2 = *(undefined1 **)(param_1 + 0x18);
    }
    if (puVar2 != (undefined1 *)0x0) {
      puVar4 = puVar2;
    }
    *(longlong *)(puVar4 + lVar6 * 8) = *param_2;
    *param_1 = 1;
  }
  return;
}



// FUNCTION 1400bc9ee FUN_1400bc9ee body=280 status=ok
// SIG undefined FUN_1400bc9ee(void)

void FUN_1400bc9ee(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14caf2c98 == '\x01') && (lVar2 = param_1[0x80], (longlong)(int)lVar2 != 0)) {
    lVar1 = param_1[0x7f];
    lVar3 = 0;
    do {
      local_60 = *(undefined8 *)(lVar1 + lVar3);
      local_68 = (**(code **)(*param_1 + 800))(param_1,&local_60,0);
      local_88[0] = 1;
      if (param_1[0x26] == 0) {
        local_80 = 0;
      }
      else {
        local_80 = *(undefined8 *)(param_1[0x26] + 0x58);
      }
      local_78 = param_3;
      local_70 = param_2;
      FUN_147bf2ce2(local_88);
      local_58 = local_60;
      local_50 = &local_58;
      FUN_147bee14a(param_1[0x62] + 0x2b0,&local_50);
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  (**(code **)(*param_1 + 0x308))(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400bcb0e FUN_1400bcb0e body=57 status=ok
// SIG undefined FUN_1400bcb0e(void)

void FUN_1400bcb0e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62dc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62dc8 =
         FUN_140002ddd(FUN_1464fb0cc,uVar1,L"GbxRotationTargetModifierSettings_AlphaScale");
  }
  return;
}



// FUNCTION 1400bcb48 FUN_1400bcb48 body=65 status=ok
// SIG undefined FUN_1400bcb48(void)

longlong FUN_1400bcb48(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1417dfeee(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1400bcb89(lVar2);
  return lVar2;
}



// FUNCTION 1400bcb89 FUN_1400bcb89 body=7 status=ok
// SIG undefined FUN_1400bcb89(void)

void FUN_1400bcb89(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1400bcb90 FUN_1400bcb90 body=266 status=ok
// SIG undefined FUN_1400bcb90(void)

undefined8 FUN_1400bcb90(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_1447cdf68(param_1 + 0x8a8);
  if (*(char *)(param_1 + 0xc30) == '\x01') {
    if (*(char *)(param_1 + 0xb60) == '\0') {
      if (*(int *)(param_2 + 0x28) == 0) goto LAB_1400bcbb5;
      puVar4 = *(undefined8 **)(param_2 + 0x20);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0xb64);
      if (((((undefined1 *)(ulonglong)uVar1 == &DAT_ffffffff) || ((int)uVar1 < 0)) ||
          (*(int *)(*(longlong *)(param_2 + 0x30) + 0x88) <= (int)uVar1)) ||
         (lVar2 = (longlong)
                  *(int *)(*(longlong *)(*(longlong *)(param_2 + 0x30) + 0x80) +
                          (longlong)(ulonglong)uVar1 * 4), lVar2 == -1)) goto LAB_1400bcbb5;
      puVar4 = (undefined8 *)(lVar2 * 0x60 + *(longlong *)(param_2 + 0x20));
    }
    puVar3 = (undefined8 *)(param_1 + 0xb70);
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
LAB_1400bcbb5:
  if (*(char *)(param_1 + 0xd20) == '\x01') {
    *(undefined1 *)(param_1 + 0xd20) = 0;
  }
  if ((*(char *)(param_1 + 0xc40) != '\x02') && (*(int *)(param_2 + 0x28) != 0)) {
    puVar4 = *(undefined8 **)(param_2 + 0x20);
    if (puVar4 != (undefined8 *)(param_1 + 0xcc0)) {
      puVar3 = (undefined8 *)(param_1 + 0xcc0);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar3 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined1 *)(param_1 + 0xd20) = 1;
      puVar4 = *(undefined8 **)(param_2 + 0x20);
    }
    puVar3 = &DAT_14c846480;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return 1;
}



// FUNCTION 1400bcc9a FUN_1400bcc9a body=830 status=ok
// SIG undefined FUN_1400bcc9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400bcc9a(longlong *param_1,longlong *param_2,float param_3)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  double dVar22;
  undefined1 auVar23 [16];
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar35;
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  
  auVar23 = _DAT_149934d80;
  if (1e-05 < param_3) {
    uVar3 = *(uint *)(param_1 + 1);
    if (0.99999 <= param_3) {
      FUN_142255630(*param_1,*param_2);
      return;
    }
    if ((ulonglong)uVar3 != 0) {
      dVar27 = (double)param_3;
      dVar28 = (double)param_3;
      dVar29 = (1.0 - dVar27) * 0.0;
      dVar30 = (1.0 - dVar28) * 0.0;
      lVar24 = 0;
      dVar6 = (double)DAT_149934d80;
      dVar7 = DAT_149934d80._8_8_;
      do {
        lVar4 = *param_2;
        pdVar1 = (double *)(lVar4 + 0x10 + lVar24);
        dVar12 = *pdVar1;
        dVar33 = pdVar1[1];
        lVar5 = *param_1;
        lVar25 = -(ulonglong)(0.0 <= dVar33);
        auVar37._8_4_ = (int)lVar25;
        auVar37._0_8_ = -(ulonglong)(0.0 <= dVar12);
        auVar37._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
        auVar10._12_4_ = 0x3ff00000;
        auVar10._0_12_ = ZEXT812(0);
        auVar37 = blendvpd(ZEXT816(0xbff0000000000000) << 0x40,auVar10,auVar37);
        dVar36 = auVar37._0_8_ * (1.0 - dVar27) + dVar12 * dVar27;
        dVar38 = auVar37._8_8_ * (1.0 - dVar28) + dVar33 * dVar28;
        dVar12 = *(double *)(lVar4 + lVar24) * dVar27 + dVar29;
        dVar13 = ((double *)(lVar4 + lVar24))[1] * dVar28 + dVar30;
        dVar33 = dVar36 * dVar36 + dVar12 * dVar12;
        dVar35 = dVar38 * dVar38 + dVar13 * dVar13;
        auVar34._0_8_ = dVar33 + dVar35;
        auVar34._8_8_ = dVar33 + dVar35;
        uVar26 = -(ulonglong)(1e-08 <= auVar34._8_8_);
        auVar37 = sqrtpd(auVar34,auVar34);
        auVar39 = divpd(auVar23,auVar37);
        auVar40._0_8_ = auVar39._0_8_ * dVar36;
        auVar40._8_8_ = auVar39._8_8_ * dVar38;
        auVar8._8_4_ = (int)uVar26;
        auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar34._0_8_);
        auVar8._12_4_ = (int)(uVar26 >> 0x20);
        auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar8);
        dVar32 = auVar37._8_8_;
        dVar35 = *(double *)(lVar5 + lVar24);
        dVar36 = ((double *)(lVar5 + lVar24))[1];
        pdVar1 = (double *)(lVar5 + 0x10 + lVar24);
        dVar38 = *pdVar1;
        dVar14 = pdVar1[1];
        dVar33 = (double)((ulonglong)(dVar12 * auVar39._0_8_) & -(ulonglong)(1e-08 <= auVar34._0_8_)
                         );
        dVar13 = (double)((ulonglong)(dVar13 * auVar39._8_8_) & uVar26);
        dVar31 = auVar37._0_8_;
        dVar12 = dVar35 * dVar31 * 1.0 + dVar14 * dVar13 + dVar38 * dVar33 * -1.0 + dVar36 * dVar32;
        pdVar1 = (double *)(lVar4 + 0x20 + lVar24);
        dVar15 = *pdVar1;
        dVar16 = pdVar1[1];
        pdVar1 = (double *)(lVar4 + 0x30 + lVar24);
        dVar17 = *pdVar1;
        dVar18 = pdVar1[1];
        pdVar1 = (double *)(lVar4 + 0x40 + lVar24);
        dVar19 = *pdVar1;
        dVar20 = pdVar1[1];
        pdVar1 = (double *)(lVar4 + 0x50 + lVar24);
        dVar21 = *pdVar1;
        dVar22 = pdVar1[1];
        auVar39._8_4_ = SUB84(dVar12,0);
        auVar39._0_8_ =
             dVar36 * dVar31 * -1.0 + dVar38 * dVar13 + dVar14 * dVar33 * 1.0 + dVar35 * dVar32;
        auVar39._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + lVar24) = auVar39;
        pdVar1 = (double *)(lVar5 + 0x10 + lVar24);
        *pdVar1 = dVar14 * dVar31 * 1.0 +
                  ((dVar33 * dVar36 * 1.0 + dVar32 * dVar38) - dVar35 * dVar13);
        pdVar1[1] = dVar38 * dVar31 * -1.0 +
                    ((dVar33 * dVar35 * -1.0 + dVar32 * dVar14) - dVar36 * dVar13);
        pdVar1 = (double *)(lVar5 + 0x20 + lVar24);
        dVar33 = dVar16 * dVar28 + dVar30 + pdVar1[1];
        pdVar2 = (double *)(lVar5 + 0x30 + lVar24);
        dVar12 = pdVar2[1];
        auVar9._8_4_ = SUB84(dVar33,0);
        auVar9._0_8_ = dVar15 * dVar27 + dVar29 + *pdVar1;
        auVar9._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0x20 + lVar24) = auVar9;
        pdVar1 = (double *)(lVar5 + 0x30 + lVar24);
        *pdVar1 = dVar17 * dVar27 + dVar29 + *pdVar2;
        pdVar1[1] = dVar18 * dVar28 + dVar30 + dVar12;
        pdVar1 = (double *)(lVar5 + 0x40 + lVar24);
        dVar33 = pdVar1[1];
        pdVar2 = (double *)(lVar5 + 0x50 + lVar24);
        dVar13 = *pdVar2;
        dVar12 = (dVar22 * dVar28 + dVar30 + 0.0) * pdVar2[1];
        pdVar2 = (double *)(lVar5 + 0x40 + lVar24);
        *pdVar2 = (dVar19 * dVar27 + dVar29 + dVar6) * *pdVar1;
        pdVar2[1] = (dVar20 * dVar28 + dVar30 + dVar7) * dVar33;
        auVar11._8_4_ = SUB84(dVar12,0);
        auVar11._0_8_ = (dVar21 * dVar27 + dVar29 + 1.0) * dVar13;
        auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(lVar5 + 0x50 + lVar24) = auVar11;
        lVar24 = lVar24 + 0x60;
      } while ((ulonglong)uVar3 * 0x60 != lVar24);
    }
  }
  return;
}



// FUNCTION 1400bcfd8 FUN_1400bcfd8 body=182 status=ok
// SIG undefined FUN_1400bcfd8(void)

void FUN_1400bcfd8(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  uint *local_28;
  code *local_20;
  uint **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  do {
    puVar2 = param_1;
    param_1 = *(uint **)(puVar2 + 0x42);
  } while (*(uint **)(puVar2 + 0x42) != (uint *)0x0);
  if ((((*(longlong *)(puVar2 + 0x4e) != 0) && (puVar2[1] != 0)) &&
      (uVar1 = *puVar2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == puVar2[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      local_18 = &local_28;
      local_20 = FUN_14361af80;
      local_28 = puVar2;
      FUN_140e2683c(puVar2 + 0x4e);
      FUN_1417e53e4(puVar2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bd09c FUN_1400bd09c body=124 status=ok
// SIG undefined FUN_1400bd09c(void)

void FUN_1400bd09c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144941252(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140704066(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400bd118 FUN_1400bd118 body=159 status=ok
// SIG undefined FUN_1400bd118(void)

ulonglong FUN_1400bd118(ulonglong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_14cb44458 != DAT_14cb44484) {
    uVar2 = ((uint)(uint7)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14cb44488;
    if (DAT_14cb44490 != (undefined *)0x0) {
      puVar4 = DAT_14cb44490;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cb44498 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      while (puVar1 = (ulonglong *)(DAT_14cb44450 + (longlong)iVar3 * 0x18), *puVar1 != param_1) {
        iVar3 = (int)puVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
        return puVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 1400bd1c2 FUN_1400bd1c2 body=104 status=ok
// SIG undefined FUN_1400bd1c2(void)

undefined8 FUN_1400bd1c2(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 1400bd22a FUN_1400bd22a body=102 status=ok
// SIG undefined FUN_1400bd22a(void)

undefined8 FUN_1400bd22a(longlong param_1,longlong param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  
  if ((*(byte *)(param_1 + 0xe4) & 2) != 0) {
    uVar2 = *(uint *)(*(longlong *)(param_2 + 0x3780) + 0x40 +
                     (longlong)*(int *)(param_1 + 0x34) * 0x78);
    uVar3 = (ulonglong)uVar2;
    if ((uVar2 >> (param_3 & 0x1f) & 1) != 0) {
      if (*(char *)(param_2 + 0x23f1) == '\x01') {
        bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0x1d0);
        uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
        if (DAT_14c760488 == 0) {
          if ((bVar1 & 8) == 0) {
            return 0;
          }
        }
        else if ((bVar1 & 2) != 0) {
          return 0;
        }
      }
      uVar5 = (undefined7)(uVar3 >> 8);
      uVar4 = CONCAT71(uVar5,1);
      if ((*(byte *)(*(longlong *)(param_1 + 0x28) + 0x1e9) & 1) == 0) {
        uVar4 = CONCAT71(uVar5,*(byte *)(param_2 + 0x125b0) >> 7 | param_3);
      }
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1400bd290 FUN_1400bd290 body=75 status=ok
// SIG undefined FUN_1400bd290(void)

void FUN_1400bd290(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) < param_2) {
    uVar3 = param_2 + 0x1fU >> 5;
    if (*(int *)(param_1 + 0xc) + 0x1fU < 0x20) {
      uVar2 = 4;
      if (4 < uVar3) {
        uVar2 = uVar3;
      }
    }
    else {
      uVar2 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
    }
    iVar1 = -0x20;
    if (uVar3 <= uVar2) {
      iVar1 = uVar2 << 5;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1447d0320(param_1,*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1400bd2dc FUN_1400bd2dc body=26 status=ok
// SIG undefined FUN_1400bd2dc(void)

void FUN_1400bd2dc(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400bd2f6(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 1400bd2f6 FUN_1400bd2f6 body=469 status=ok
// SIG undefined FUN_1400bd2f6(void)

void FUN_1400bd2f6(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400bd426:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400bd463:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400bd360;
LAB_1400bd355:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400bd360:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001400bd38d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400bd3e3:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400bd463;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400bd426;
code_r0x0001400bd38d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400bd3e3;
    }
  }
  goto LAB_1400bd355;
}



// FUNCTION 1400bd4cc FUN_1400bd4cc body=58 status=ok
// SIG undefined FUN_1400bd4cc(void)

void FUN_1400bd4cc(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar2 * 8);
      (**(code **)(*plVar1 + 0x70))(plVar1,param_2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 1400bd508 FUN_1400bd508 body=341 status=ok
// SIG undefined FUN_1400bd508(void)

void FUN_1400bd508(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [39];
  undefined1 local_c1;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  code *local_a8;
  longlong *local_a0;
  undefined1 local_98 [64];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x800000000;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 == 0) {
    uVar7 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar4 = local_50;
      iVar2 = *(int *)(lVar3 + lVar9);
      uVar8 = (ulonglong)iVar2;
      if ((longlong)uVar8 < 1) {
        uVar8 = (ulonglong)(uint)-iVar2;
      }
      else {
        lVar10 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          local_c1 = param_3;
          FUN_146d8b45e(local_98,uVar4 & 0xffffffff);
          param_3 = local_c1;
        }
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_98;
        }
        *(ulonglong *)(puVar6 + lVar10 * 8) = uVar7 | uVar8 << 0x20;
      }
      lVar9 = lVar9 + 4;
      uVar7 = uVar8 & 0xffffffff;
    } while ((longlong)iVar1 * 4 != lVar9);
    uVar7 = local_50 & 0xffffffff;
  }
  local_a0 = &local_c0;
  local_b0 = local_98;
  local_a8 = FUN_1429bfb4a;
  local_c0 = param_1;
  local_b8 = param_2;
  FUN_1400bd65e(uVar7);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bd65e FUN_1400bd65e body=228 status=ok
// SIG undefined FUN_1400bd65e(void)

void FUN_1400bd65e(int param_1,undefined8 *param_2,byte param_3)

{
  int iVar1;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined2 local_40;
  undefined4 *local_38;
  undefined4 local_2c;
  code *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &local_2c;
  local_2c = 0;
  local_50 = *param_2;
  local_48 = param_2[1];
  local_40 = 0;
  iVar1 = 1;
  if (DAT_14c75f14c < param_1 && 0 < DAT_14c75f14c) {
    iVar1 = (param_1 + DAT_14c75f14c + -1) / DAT_14c75f14c;
  }
  local_58 = &local_18;
  local_18 = 0;
  local_10 = 0;
  local_28 = FUN_1429afdc2;
  local_20 = &local_50;
  local_60 = (uint)(DAT_14c99384c != 0 | param_3);
  FUN_1411ca36e(L"PhysicsParallelFor",param_1,iVar1);
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bd744 FUN_1400bd744 body=2500 status=ok
// SIG undefined FUN_1400bd744(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1400bd744(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  LARGE_INTEGER LVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  size_t sVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_198 [32];
  undefined8 local_178;
  LARGE_INTEGER *local_170;
  longlong local_168;
  longlong *local_160;
  byte *local_158;
  ulonglong local_150;
  longlong *local_148;
  longlong *local_140;
  longlong *local_138;
  longlong local_130;
  LARGE_INTEGER local_128;
  longlong lStack_120;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined1 auVar15 [16];
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_160 = param_1;
  local_158 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca77348) && (FUN_144b3d300(&DAT_14ca77348), DAT_14ca77348 == -1)) {
    DAT_14ca77338 = 0;
    QueryPerformanceCounter(&local_128);
    _DAT_14ca77340 = local_128.s;
    _Init_thread_footer(&DAT_14ca77348);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca773e0) && (FUN_144b3d300(&DAT_14ca773e0), DAT_14ca773e0 == -1)) {
    uVar9 = (ulonglong)(1.0 / DAT_14c83f418);
    DAT_14ca773d8 =
         (longlong)(1.0 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar9 >> 0x3f | uVar9;
    _Init_thread_footer(&DAT_14ca773e0);
  }
  QueryPerformanceCounter(&local_128);
  uVar9 = local_128.QuadPart - (longlong)_DAT_14ca77340;
  if (DAT_14ca773d8 < (ulonglong)(local_128.QuadPart - (longlong)_DAT_14ca77340)) {
    uVar9 = DAT_14ca773d8;
  }
  DAT_14ca77338 = DAT_14ca77338 + uVar9;
  _DAT_14ca77340 = local_128.s;
  local_158[0] = 0;
  local_158[1] = 0;
  local_158[2] = 0;
  local_158[3] = 0;
  local_158[4] = 0xff;
  local_158[5] = 0xff;
  local_158[6] = 0xff;
  local_158[7] = 0xff;
  uVar6 = *(uint *)(local_160 + 0x37);
  if (uVar6 != 0) {
    uVar9 = 0;
    do {
      if ((longlong)DAT_14c760da4 != 0) {
        lVar1 = *(longlong *)(local_160[0x36] + (longlong)(int)uVar9 * 0x10);
        local_148 = (longlong *)(lVar1 + (longlong)DAT_14c760da4 * 8 + 2000);
        plVar7 = (longlong *)(lVar1 + 2000);
        local_150 = uVar9;
        do {
          lVar1 = *plVar7;
          plVar13 = (longlong *)(lVar1 + 0xb00);
          if (*(longlong **)(lVar1 + 0x1280) != (longlong *)0x0) {
            plVar13 = *(longlong **)(lVar1 + 0x1280);
          }
          local_140 = plVar7;
          if ((longlong)*(int *)(lVar1 + 0x12c0) != 0) {
            local_138 = plVar13 + (longlong)*(int *)(lVar1 + 0x12c0) * 0x50;
LAB_1400bd911:
            do {
              if ((((*(longlong *)plVar13[0xb] != 0) &&
                   ((longlong *)(*(longlong *)plVar13[0xb] + 8) != (longlong *)0x0)) &&
                  (lVar1 = *(longlong *)(*(longlong *)plVar13[0xb] + 8), lVar1 != 0)) &&
                 ((*(byte *)(lVar1 + 0x1d9) & 1) != 0)) {
                uVar8 = (**(code **)(*(longlong *)plVar13[3] + 0x40))();
                uVar9 = plVar13[5];
                if ((uVar8 == 0xffffffffffffffff) &&
                   (iVar5 = (**(code **)(**(longlong **)(*(longlong *)(*plVar13 + 0x10) + 8) + 0x128
                                        ))(), iVar5 != 0)) {
                  FUN_14317d250(local_160);
                }
                if (*(ulonglong *)(lVar1 + 0x250) <= uVar8) {
                  *(undefined1 *)(plVar13 + 6) = 0;
                  lVar11 = *(longlong *)plVar13[0xb];
                  if (lVar11 != 0) {
                    lVar2 = plVar13[0xb];
                    plVar13[0xb] = lVar11;
                    *(undefined8 *)(lVar11 + 8) = 0;
                    if (lVar2 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  *local_158 = *local_158 | 1;
                  iVar5 = *(int *)(lVar1 + 0x2a8);
                  local_168 = lVar1;
                  if ((longlong)iVar5 != 0) {
                    lVar1 = *(longlong *)(lVar1 + 0x2a0);
                    lVar11 = 0;
                    do {
                      sVar12 = 8;
                      if (*(int *)(*(longlong *)(lVar1 + lVar11) + 0x18) == 3) {
                        sVar12 = 0x58;
                      }
                      memcpy(*(void **)(lVar1 + 0x10 + lVar11),
                             (void *)((ulonglong)(uint)(*(int *)(lVar1 + 8 + lVar11) * (int)sVar12)
                                     + *(longlong *)(*(longlong *)(lVar1 + lVar11) + 0x30)),sVar12);
                      lVar11 = lVar11 + 0x18;
                    } while ((longlong)iVar5 * 0x18 != lVar11);
                  }
                  iVar5 = *(int *)(local_168 + 0x2b8);
                  if ((longlong)iVar5 != 0) {
                    lVar1 = *(longlong *)(local_168 + 0x2b0);
                    lVar11 = 0;
                    do {
                      pvVar3 = *(void **)(lVar1 + 0x10 + lVar11);
                      if (pvVar3 == (void *)0x0) {
                        sVar12 = 8;
                        if (*(int *)(*(longlong *)(lVar1 + lVar11) + 0x18) == 3) {
                          sVar12 = 0x58;
                        }
                        memcpy(&local_128,
                               (void *)((ulonglong)
                                        (uint)(*(int *)(lVar1 + 8 + lVar11) * (int)sVar12) +
                                       *(longlong *)(*(longlong *)(lVar1 + lVar11) + 0x30)),sVar12);
                        lVar2 = plVar13[0x48];
                        *(longlong *)(lVar2 + 8) = *(longlong *)(lVar2 + 8) + local_128.QuadPart;
                        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + lStack_120;
                        *(longlong *)(lVar2 + 0x18) = *(longlong *)(lVar2 + 0x18) + local_118;
                        *(longlong *)(lVar2 + 0x20) = *(longlong *)(lVar2 + 0x20) + local_110;
                        *(longlong *)(lVar2 + 0x28) = *(longlong *)(lVar2 + 0x28) + local_108;
                        *(longlong *)(lVar2 + 0x30) = *(longlong *)(lVar2 + 0x30) + local_100;
                        *(longlong *)(lVar2 + 0x38) = *(longlong *)(lVar2 + 0x38) + local_f8;
                        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + local_f0;
                        *(longlong *)(lVar2 + 0x48) = *(longlong *)(lVar2 + 0x48) + local_e8;
                        *(longlong *)(lVar2 + 0x50) = *(longlong *)(lVar2 + 0x50) + local_e0;
                        *(longlong *)(lVar2 + 0x58) = *(longlong *)(lVar2 + 0x58) + local_d8;
                      }
                      else {
                        sVar12 = 8;
                        if (*(int *)(*(longlong *)(lVar1 + lVar11) + 0x18) == 3) {
                          sVar12 = 0x58;
                        }
                        memcpy(pvVar3,(void *)((ulonglong)
                                               (uint)(*(int *)(lVar1 + 8 + lVar11) * (int)sVar12) +
                                              *(longlong *)(*(longlong *)(lVar1 + lVar11) + 0x30)),
                               sVar12);
                      }
                      lVar11 = lVar11 + 0x18;
                    } while ((longlong)iVar5 * 0x18 != lVar11);
                  }
                  if (*(int *)(local_168 + 0x298) != 0) {
                    lVar1 = *(longlong *)(*plVar13 + 0x1280);
                    lVar11 = *plVar13 + 0xb00;
                    if (lVar1 != 0) {
                      lVar11 = lVar1;
                    }
                    plVar7 = *(longlong **)(lVar11 + 0x10 + (longlong)(int)plVar13[1] * 0x280);
                    iVar5 = (**(code **)(*plVar7 + 0x80))(plVar7,&local_c8);
                    if (iVar5 < 0) {
                      local_128.QuadPart = 0;
                      lStack_120 = 0;
                      local_178 = 0;
                      local_170 = &local_128;
                      FUN_145763094(iVar5,
                                    "Queues[(uint32)QueueType].D3DCommandQueue->GetTimestampFrequency(&Frequency)"
                                    ,".\\Runtime/D3D12RHI/Private/D3D12Device.cpp",0x2ff);
                    }
                    auVar15._8_4_ = (int)((ulonglong)local_c8 >> 0x20);
                    auVar15._0_8_ = local_c8;
                    auVar15._12_4_ = 0x45300000;
                    uVar14 = (undefined4)local_c8;
                    if ((longlong)*(int *)(local_168 + 0x298) != 0) {
                      lVar1 = *(longlong *)(local_168 + 0x290);
                      local_130 = (longlong)*(int *)(local_168 + 0x298) * 0x18;
                      lVar11 = 0;
                      do {
                        pvVar3 = *(void **)(lVar1 + 0x10 + lVar11);
                        if (pvVar3 != (void *)0x0) {
                          sVar12 = 8;
                          if (*(int *)(*(longlong *)(lVar1 + lVar11) + 0x18) == 3) {
                            sVar12 = 0x58;
                          }
                          memcpy(pvVar3,(void *)((ulonglong)
                                                 (uint)(*(int *)(lVar1 + 8 + lVar11) * (int)sVar12)
                                                + *(longlong *)
                                                   (*(longlong *)(lVar1 + lVar11) + 0x30)),sVar12);
                        }
                        iVar5 = *(int *)(lVar1 + 0xc + lVar11);
                        if (iVar5 - 4U < 4) {
                          lVar2 = plVar13[0x48];
                          sVar12 = 8;
                          if (*(int *)(*(longlong *)(lVar1 + lVar11) + 0x18) == 3) {
                            sVar12 = 0x58;
                          }
                          memcpy(&local_128,
                                 (void *)((ulonglong)
                                          (uint)(*(int *)(lVar1 + 8 + lVar11) * (int)sVar12) +
                                         *(longlong *)(*(longlong *)(lVar1 + lVar11) + 0x30)),sVar12
                                );
                          LVar4 = local_128;
                          iVar5 = *(int *)(lVar2 + 0x68);
                          *(uint *)(lVar2 + 0x68) = iVar5 + 1U;
                          if (*(uint *)(lVar2 + 0x6c) < iVar5 + 1U) {
                            FUN_14479d316((longlong *)(lVar2 + 0x60),iVar5);
                          }
                          ((LARGE_INTEGER *)(*(longlong *)(lVar2 + 0x60) + (longlong)iVar5 * 8))->
                          QuadPart = (LONGLONG)LVar4;
                        }
                        else if (iVar5 == 2) {
                          plVar7 = *(longlong **)(lVar1 + 0x10 + lVar11);
                          lVar2 = *plVar7;
                          auVar16._8_4_ = (int)((ulonglong)lVar2 >> 0x20);
                          auVar16._0_8_ = lVar2;
                          auVar16._12_4_ = 0x45300000;
                          *plVar7 = (longlong)
                                    ((((double)CONCAT44(0x43300000,(int)lVar2) - 4503599627370496.0)
                                     + (auVar16._8_8_ - 1.9342813113834067e+25)) *
                                    (1000000.0 /
                                    (((double)CONCAT44(0x43300000,uVar14) - 4503599627370496.0) +
                                    (auVar15._8_8_ - 1.9342813113834067e+25))));
                        }
                        lVar11 = lVar11 + 0x18;
                      } while (local_130 != lVar11);
                    }
                  }
                  if (*(char *)(local_168 + 0x278) == '\x01') {
                    plVar13[0x48] = *(longlong *)(local_168 + 0x270);
                  }
                  iVar5 = *(int *)(local_168 + 0x248);
                  if ((longlong)iVar5 != 0) {
                    lVar1 = *(longlong *)(local_168 + 0x240);
                    lVar11 = 0;
                    do {
                      lVar2 = *(longlong *)(*(longlong *)(lVar1 + lVar11) + 0x28);
                      if (lVar2 != 0) {
                        LOCK();
                        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                        UNLOCK();
                        local_128.s.LowPart._0_1_ = 1;
                        FUN_1447439e4(lVar2,&local_128);
                      }
                      lVar11 = lVar11 + 8;
                    } while ((longlong)iVar5 * 8 != lVar11);
                  }
                  lVar1 = local_168;
                  FUN_1431774ec(local_168);
                  FUN_1400020a8(lVar1);
                  goto LAB_1400bd911;
                }
                if ((local_160[5] != 0) && ((char)plVar13[6] == '\0')) {
                  iVar5 = (**(code **)(*(longlong *)plVar13[3] + 0x48))
                                    ((longlong *)plVar13[3],*(ulonglong *)(lVar1 + 0x250),
                                     *(undefined8 *)(local_160[5] + 0x20));
                  if (iVar5 < 0) {
                    local_128.QuadPart = 0;
                    lStack_120 = 0;
                    local_178 = 0;
                    local_170 = &local_128;
                    FUN_145763094(iVar5,
                                  "CurrentQueue.Fence.D3DFence->SetEventOnCompletion(Payload->CompletionFenceValue, InterruptThread->Event)"
                                  ,".\\Runtime/D3D12RHI/Private/D3D12Submission.cpp",0x554);
                  }
                  *(undefined1 *)(plVar13 + 6) = 1;
                }
                *local_158 = *local_158 | 2;
                lVar11 = DAT_14ca77338;
                plVar7 = (longlong *)(lVar1 + 0x260);
                if (*(char *)(lVar1 + 0x268) == '\x01') {
                  lVar11 = *plVar7;
                }
                else {
                  if ((plVar7 == &DAT_14ca77338) || (uVar9 < *(ulonglong *)(lVar1 + 0x250)))
                  goto LAB_1400bdecb;
                  *(longlong *)(lVar1 + 0x260) = DAT_14ca77338;
                  *(undefined1 *)(lVar1 + 0x268) = 1;
                }
                if (lVar11 != -1) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14ca773f0) &&
                     (FUN_144b3d300(&DAT_14ca773f0), DAT_14ca773f0 == -1)) {
                    _DAT_14ca773e8 = 1.0 / DAT_14c83f418;
                    _Init_thread_footer(&DAT_14ca773f0);
                  }
                  uVar9 = DAT_14ca77338 - *plVar7;
                  lVar11 = (longlong)((double)_DAT_14c760bb8 * _DAT_14ca773e8) - uVar9;
                  if ((ulonglong)(longlong)((double)_DAT_14c760bb8 * _DAT_14ca773e8) < uVar9) {
                    auVar18._8_4_ = (int)(uVar9 >> 0x20);
                    auVar18._0_8_ = uVar9;
                    auVar18._12_4_ = 0x45300000;
                    (**(code **)(*local_160 + 0x600))
                              (local_160,lVar1,
                               (((double)CONCAT44(0x43300000,(int)uVar9) - 4503599627370496.0) +
                               (auVar18._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418);
                    *(undefined8 *)(lVar1 + 0x260) = 0xffffffffffffffff;
                    *(undefined1 *)(lVar1 + 0x268) = 1;
                  }
                  else {
                    auVar17._8_4_ = (int)((ulonglong)lVar11 >> 0x20);
                    auVar17._0_8_ = lVar11;
                    auVar17._12_4_ = 0x45300000;
                    uVar6 = (uint)(longlong)
                                  ((((double)CONCAT44(0x43300000,(int)lVar11) - 4503599627370496.0)
                                   + (auVar17._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 *
                                  1000.0);
                    if (*(uint *)(local_158 + 4) < uVar6) {
                      uVar6 = *(uint *)(local_158 + 4);
                    }
                    *(uint *)(local_158 + 4) = uVar6;
                  }
                }
              }
LAB_1400bdecb:
              iVar5 = (**(code **)(**(longlong **)(*(longlong *)(*plVar13 + 0x10) + 8) + 0x128))();
              if (iVar5 != 0) {
                FUN_14317d250(local_160);
              }
              plVar13 = plVar13 + 0x50;
            } while (plVar13 != local_138);
          }
          plVar7 = local_140 + 1;
        } while (plVar7 != local_148);
        uVar6 = *(uint *)(local_160 + 0x37);
        uVar9 = local_150;
      }
      uVar10 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar10;
    } while (uVar10 < uVar6);
  }
  if (DAT_14ca773d0 != 0) {
    FUN_14317d250(local_160);
  }
  if ((local_c0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_158;
}



// FUNCTION 1400be10a FUN_1400be10a body=4833 status=ok
// SIG undefined FUN_1400be10a(void)

uint * FUN_1400be10a(longlong param_1,uint *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  ulonglong uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  undefined1 auStack_618 [40];
  longlong local_5f0;
  uint *local_5e8;
  longlong local_5e0;
  uint local_5d8;
  int local_5d4;
  longlong *local_5d0;
  ulonglong local_5c8;
  uint *local_5c0;
  longlong *local_5b8;
  longlong local_5b0;
  longlong *local_5a8;
  longlong local_5a0;
  longlong local_598;
  undefined8 uStack_590;
  longlong local_588;
  undefined8 uStack_580;
  longlong local_578;
  undefined8 uStack_570;
  undefined1 local_560 [1024];
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150 [16];
  undefined1 *local_140;
  undefined8 local_138;
  longlong local_130 [24];
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_160 = 0;
  local_158 = 0x8000000000;
  param_2[1] = 0xffffffff;
  bVar9 = 0;
  local_5e8 = param_2;
  local_5b0 = param_1;
  do {
    *local_5e8 = 0;
    lVar11 = **(longlong **)(param_1 + 0x48);
    while (lVar11 != 0) {
      plVar23 = *(longlong **)(lVar11 + 8);
      lVar16 = *(longlong *)(param_1 + 0x48);
      *(longlong *)(param_1 + 0x48) = lVar11;
      *(undefined8 *)(lVar11 + 8) = 0;
      if (lVar16 != 0) {
        FUN_1400020a8();
      }
      lVar11 = plVar23[1];
      if ((longlong)(int)lVar11 != 0) {
        lVar16 = *plVar23;
        lVar28 = 0;
        do {
          lVar27 = *(longlong *)(lVar16 + lVar28);
          lVar12 = *(longlong *)(lVar27 + 8);
          puVar4 = (undefined8 *)FUN_14001cc68(0x10,0x10);
          *puVar4 = 0;
          puVar4[1] = lVar27;
          if (puVar4 != (undefined8 *)0x0) {
            LOCK();
            puVar30 = (undefined8 *)(lVar12 + 0x40);
            puVar1 = (undefined8 *)*puVar30;
            *puVar30 = puVar4;
            UNLOCK();
            LOCK();
            *puVar1 = puVar4;
            UNLOCK();
          }
          lVar28 = lVar28 + 8;
        } while ((longlong)(int)lVar11 * 8 != lVar28);
      }
      if (plVar23 != (longlong *)0x0) {
        if (*plVar23 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar23);
      }
      param_1 = local_5b0;
      lVar11 = **(longlong **)(local_5b0 + 0x48);
    }
    uVar3 = *(uint *)(param_1 + 0x1b8);
    if (uVar3 == 0) break;
    local_5d8 = 0;
    bVar17 = false;
    do {
      if ((longlong)DAT_14c760da4 != 0) {
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)(int)local_5d8 * 0x10);
        local_5a8 = (longlong *)(lVar11 + (longlong)DAT_14c760da4 * 8 + 2000);
        plVar23 = (longlong *)(lVar11 + 2000);
        do {
          lVar11 = *plVar23;
          lVar16 = lVar11 + 0xb00;
          if (*(longlong *)(lVar11 + 0x1280) != 0) {
            lVar16 = *(longlong *)(lVar11 + 0x1280);
          }
          if ((longlong)*(int *)(lVar11 + 0x12c0) != 0) {
            local_5a0 = (longlong)*(int *)(lVar11 + 0x12c0) * 0x280 + lVar16;
            lVar11 = lVar16;
            local_5b8 = plVar23;
            do {
              local_5f0 = lVar11;
              local_70 = (longlong *)0x0;
              local_68 = 0x1800000000;
              if (((**(longlong **)(lVar16 + 0x48) == 0) ||
                  (plVar5 = (longlong *)(**(longlong **)(lVar16 + 0x48) + 8),
                  plVar5 == (longlong *)0x0)) || (lVar11 = *plVar5, lVar11 == 0)) {
                bVar2 = false;
              }
              else {
                plVar5 = (longlong *)(lVar11 + 0x10);
                local_5e0 = lVar11;
                if (*(int *)(lVar11 + 0x20) < *(int *)(lVar11 + 0x18)) {
                  lVar16 = *(longlong *)(*plVar5 + (longlong)*(int *)(lVar11 + 0x20) * 8);
                  if (*(char *)(lVar16 + 0x20) == '\x01') {
                    lVar28 = lVar11 + 0x28;
                    do {
                      lVar27 = *(longlong *)(lVar16 + 0x10);
                      uVar22 = *(ulonglong *)(lVar16 + 0x18);
                      lVar16 = *(longlong *)(local_5e0 + 0x1a8);
                      lVar12 = lVar16;
                      if (lVar16 == 0) {
                        lVar12 = lVar28;
                      }
                      iVar13 = *(int *)(local_5e0 + 0x1b0);
                      lVar29 = (longlong)iVar13;
                      if (lVar29 != 0) {
                        lVar15 = 0;
                        do {
                          if (*(longlong *)(lVar12 + lVar15) == lVar27) {
                            uVar24 = *(ulonglong *)(lVar12 + 8 + lVar15);
                            if (uVar24 < uVar22) {
                              uVar24 = uVar22;
                            }
                            *(ulonglong *)(lVar12 + 8 + lVar15) = uVar24;
                            goto LAB_1400be391;
                          }
                          lVar15 = lVar15 + 0x10;
                        } while (lVar29 << 4 != lVar15);
                      }
                      *(uint *)(local_5e0 + 0x1b0) = iVar13 + 1U;
                      if (*(uint *)(local_5e0 + 0x1b4) < iVar13 + 1U) {
                        FUN_1473855be(lVar28,iVar13);
                        lVar16 = *(longlong *)(local_5e0 + 0x1a8);
                        plVar23 = local_5b8;
                      }
                      if (lVar16 == 0) {
                        lVar16 = lVar28;
                      }
                      *(longlong *)(lVar16 + lVar29 * 0x10) = lVar27;
                      *(ulonglong *)(lVar16 + 8 + lVar29 * 0x10) = uVar22;
LAB_1400be391:
                      iVar13 = *(int *)(local_5e0 + 0x20);
                      iVar10 = iVar13 + 1;
                      *(int *)(local_5e0 + 0x20) = iVar10;
                      if (*(int *)(local_5e0 + 0x18) <= iVar10) goto LAB_1400be419;
                      lVar16 = *(longlong *)(*plVar5 + 8 + (longlong)iVar13 * 8);
                    } while (*(char *)(lVar16 + 0x20) != '\0');
                    bVar17 = true;
                  }
                  *(byte *)local_5e8 = (byte)*local_5e8 | 2;
                  bVar2 = false;
                  lVar16 = local_5f0;
                }
                else {
LAB_1400be419:
                  FUN_14476c499(*plVar5);
                  if (*plVar5 != 0) {
                    FUN_1400020a8();
                  }
                  *plVar5 = 0;
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  *(undefined4 *)(lVar11 + 0x20) = 0;
                  FUN_14476c499(0,0);
                  lVar11 = **(longlong **)(local_5f0 + 0x48);
                  if (lVar11 != 0) {
                    lVar16 = *(longlong *)(local_5f0 + 0x48);
                    *(longlong *)(local_5f0 + 0x48) = lVar11;
                    *(undefined8 *)(lVar11 + 8) = 0;
                    if (lVar16 != 0) {
                      FUN_1400020a8();
                    }
                  }
                  uVar22 = local_68;
                  lVar11 = local_5e0;
                  *(longlong *)(local_5f0 + 0x60) = local_5e0;
                  lVar16 = (longlong)(int)local_68;
                  uVar3 = (int)local_68 + 1;
                  local_68 = CONCAT44(local_68._4_4_,uVar3);
                  if (local_68._4_4_ < uVar3) {
                    FUN_14738517c(local_130,uVar22 & 0xffffffff);
                  }
                  plVar23 = local_70;
                  if (local_70 == (longlong *)0x0) {
                    plVar23 = local_130;
                  }
                  plVar23[lVar16] = local_5f0;
                  *(byte *)local_5e8 = (byte)*local_5e8 | 1;
                  if (0 < *(int *)(lVar11 + 0x228)) {
                    iVar13 = 0;
                    do {
                      plVar23 = *(longlong **)(*(longlong *)(lVar11 + 0x220) + (longlong)iVar13 * 8)
                      ;
                      local_140 = (undefined1 *)0x0;
                      local_138 = 0x200000000;
                      local_578 = 0;
                      uStack_570 = 0;
                      local_588 = 0;
                      uStack_580 = 0;
                      local_598 = 0;
                      uStack_590 = 0;
                      iVar10 = (int)plVar23[0x14];
                      local_5d4 = iVar13;
                      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_1456afac4(iVar10);
                      }
                      local_5d0 = plVar23;
                      if (iVar10 != 0) {
                        FUN_144ad65c4(&local_598);
                        if ((longlong)(int)local_5d0[0x14] != 0) {
                          plVar23 = (longlong *)local_5d0[0x13];
                          puVar21 = (uint *)(plVar23 + (longlong)(int)local_5d0[0x14] * 2);
                          local_5c0 = puVar21;
                          do {
                            lVar11 = *plVar23;
                            if ((int)*(uint *)(lVar11 + 0x98) < 0) {
                              uVar3 = *(uint *)(lVar11 + 0x98) & 0x7fffffff;
                            }
                            else {
                              lVar16 = lVar11 + 0xa0;
                              if (*(longlong *)(lVar11 + 0xb0) != 0) {
                                lVar16 = *(longlong *)(lVar11 + 0xb0);
                              }
                              uVar3 = *(uint *)(lVar16 + (longlong)*(int *)((longlong)plVar23 + 0xc)
                                                         * 4);
                            }
                            uVar26 = *(uint *)(plVar23 + 1);
                            if (uVar3 == uVar26) goto LAB_1400be918;
                            plVar5 = &local_578;
                            lVar16 = lVar11;
                            if (((uVar3 & 0xb4) == 0) || ((int)local_5d0[1] == 0)) {
LAB_1400be5ea:
                              if (((uVar26 & 0x150c) == 0) || ((*(byte *)(lVar16 + 0x92) & 4) == 0))
                              {
                                lVar28 = *(longlong *)(lVar16 + 0x28);
                                if ((lVar28 == 0) || (((uVar26 | uVar3) & 8) == 0)) {
                                  iVar13 = *(int *)((longlong)plVar23 + 0xc);
                                  iVar10 = (int)plVar5[1];
                                  if ((longlong)iVar10 != 0) {
                                    iVar19 = iVar10 + -1;
                                    if ((((*(int *)(*plVar5 + (longlong)iVar19 * 0x20) == 0) &&
                                         (lVar11 = *plVar5 + (longlong)iVar19 * 0x20,
                                         *(longlong *)(lVar16 + 0x20) == *(longlong *)(lVar11 + 8)))
                                        && (*(int *)(lVar11 + 0x10) == iVar13)) &&
                                       ((*(uint *)(lVar11 + 0x18) == uVar3 &&
                                        (*(uint *)(lVar11 + 0x14) == uVar26)))) goto LAB_1400be906;
                                  }
                                  uVar7 = *(undefined8 *)(lVar16 + 0x20);
                                  *(uint *)(plVar5 + 1) = iVar10 + 1U;
                                  if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
                                    FUN_1447158f0(plVar5);
                                  }
                                  lVar11 = *plVar5;
                                  lVar28 = (longlong)iVar10 * 0x20;
                                  *(undefined8 *)(lVar11 + lVar28) = 0;
                                  *(undefined8 *)(lVar11 + 8 + lVar28) = uVar7;
                                  *(int *)(lVar11 + 0x10 + lVar28) = iVar13;
                                  *(uint *)(lVar11 + 0x14 + lVar28) = uVar3;
                                  *(uint *)(lVar11 + 0x18 + lVar28) = uVar26;
                                  *(undefined4 *)(lVar11 + 0x1c + lVar28) = 0;
                                  puVar21 = local_5c0;
                                  if ((uVar26 & 0x150c) != 0) {
                                    bVar9 = *(byte *)(lVar16 + 0x92);
LAB_1400be75d:
                                    puVar21 = local_5c0;
                                    if ((bVar9 & 4) != 0) goto LAB_1400be766;
                                  }
                                }
                                else {
                                  uVar7 = *(undefined8 *)(lVar16 + 0x20);
                                  lVar16 = plVar5[1];
                                  uVar3 = (int)lVar16 + 1;
                                  *(uint *)(plVar5 + 1) = uVar3;
                                  if (*(uint *)((longlong)plVar5 + 0xc) < uVar3) {
                                    FUN_1447158f0(plVar5);
                                  }
                                  lVar27 = *plVar5;
                                  lVar16 = (longlong)(int)lVar16 * 0x20;
                                  *(undefined8 *)(lVar27 + 0x18 + lVar16) = 0;
                                  *(undefined8 *)(lVar27 + lVar16) = 1;
                                  *(longlong *)(lVar27 + 8 + lVar16) = lVar28;
                                  *(undefined8 *)(lVar27 + 0x10 + lVar16) = uVar7;
                                  uVar3 = *(uint *)(lVar11 + 0x9c) & 0x7fffffff;
                                  if (uVar3 != uVar26) {
                                    iVar13 = *(int *)((longlong)plVar23 + 0xc);
                                    lVar16 = *plVar23;
                                    iVar10 = (int)plVar5[1];
                                    if ((longlong)iVar10 != 0) {
                                      lVar11 = (longlong)(iVar10 + -1) * 0x20;
                                      if (((*(int *)(*plVar5 + lVar11) == 0) &&
                                          (lVar11 = *plVar5 + lVar11,
                                          *(longlong *)(lVar16 + 0x20) == *(longlong *)(lVar11 + 8))
                                          ) && ((*(int *)(lVar11 + 0x10) == iVar13 &&
                                                ((*(uint *)(lVar11 + 0x18) == uVar3 &&
                                                 (*(uint *)(lVar11 + 0x14) == uVar26)))))) {
                                        *(int *)(plVar5 + 1) = iVar10 + -1;
                                        FUN_1447159f0(plVar5);
                                        goto LAB_1400be918;
                                      }
                                    }
                                    uVar7 = *(undefined8 *)(lVar16 + 0x20);
                                    *(uint *)(plVar5 + 1) = iVar10 + 1U;
                                    if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
                                      local_5c8 = CONCAT44(local_5c8._4_4_,iVar13);
                                      FUN_1447158f0(plVar5);
                                      iVar13 = (int)local_5c8;
                                    }
                                    lVar11 = *plVar5;
                                    lVar28 = (longlong)iVar10 * 0x20;
                                    *(undefined8 *)(lVar11 + lVar28) = 0;
                                    *(undefined8 *)(lVar11 + 8 + lVar28) = uVar7;
                                    *(int *)(lVar11 + 0x10 + lVar28) = iVar13;
                                    *(uint *)(lVar11 + 0x14 + lVar28) = uVar3;
                                    *(uint *)(lVar11 + 0x18 + lVar28) = uVar26;
                                    *(undefined4 *)(lVar11 + 0x1c + lVar28) = 0;
                                    puVar21 = local_5c0;
                                    if ((uVar26 & 0x150c) != 0) {
                                      bVar9 = *(byte *)(lVar16 + 0x92);
                                      goto LAB_1400be75d;
                                    }
                                  }
                                }
                              }
                              else {
                                iVar13 = *(int *)((longlong)plVar23 + 0xc);
                                iVar10 = (int)plVar5[1];
                                if ((longlong)iVar10 != 0) {
                                  iVar19 = iVar10 + -1;
                                  if ((((*(int *)(*plVar5 + (longlong)iVar19 * 0x20) == 0) &&
                                       (lVar11 = *plVar5 + (longlong)iVar19 * 0x20,
                                       *(longlong *)(lVar16 + 0x20) == *(longlong *)(lVar11 + 8)))
                                      && (*(int *)(lVar11 + 0x10) == iVar13)) &&
                                     ((*(uint *)(lVar11 + 0x18) == uVar3 &&
                                      (*(uint *)(lVar11 + 0x14) == uVar26)))) {
LAB_1400be906:
                                    *(int *)(plVar5 + 1) = iVar19;
                                    FUN_1447159f0(plVar5);
                                    goto LAB_1400be918;
                                  }
                                }
                                uVar7 = *(undefined8 *)(lVar16 + 0x20);
                                *(uint *)(plVar5 + 1) = iVar10 + 1U;
                                if (*(uint *)((longlong)plVar5 + 0xc) < iVar10 + 1U) {
                                  FUN_1447158f0(plVar5);
                                }
                                lVar11 = *plVar5;
                                lVar28 = (longlong)iVar10 * 0x20;
                                *(undefined8 *)(lVar11 + lVar28) = 0;
                                *(undefined8 *)(lVar11 + 8 + lVar28) = uVar7;
                                *(int *)(lVar11 + 0x10 + lVar28) = iVar13;
                                *(uint *)(lVar11 + 0x14 + lVar28) = uVar3;
                                *(uint *)(lVar11 + 0x18 + lVar28) = uVar26;
                                *(undefined4 *)(lVar11 + 0x1c + lVar28) = 0;
                                puVar21 = local_5c0;
                                if ((*(byte *)(lVar16 + 0x92) & 4) == 0) goto LAB_1400be918;
LAB_1400be766:
                                *(undefined4 *)(lVar11 + lVar28 + 4) = 0x80000000;
                                puVar21 = local_5c0;
                              }
LAB_1400be918:
                              lVar11 = (longlong)(int)uStack_590;
                              uVar3 = (int)uStack_590 + 1;
                              uStack_590 = CONCAT44(uStack_590._4_4_,uVar3);
                              if (uStack_590._4_4_ < uVar3) {
                                FUN_14736fabc(&local_598);
                              }
                              *(longlong *)(local_598 + lVar11 * 8) = *plVar23;
                            }
                            else {
                              puVar6 = (uint *)FUN_1456b17c6();
                              if (((uVar26 & ~uVar3) != 0) || ((int)puVar6[1] < 0)) {
                                lVar16 = *plVar23;
                                plVar5 = &local_588;
                                goto LAB_1400be5ea;
                              }
                              iVar13 = *(int *)((longlong)plVar23 + 0xc);
                              if (((longlong)iVar13 == -1) || (uVar26 = puVar6[8], uVar26 == 1)) {
                                *puVar6 = uVar3 | 0x80000000;
                              }
                              else {
                                uVar25 = *puVar6;
                                if ((int)uVar25 < 0) {
                                  if (uVar26 != 0) {
                                    uVar25 = 0;
                                    do {
                                      puVar14 = *(uint **)(puVar6 + 6);
                                      if (*(uint **)(puVar6 + 6) == (uint *)0x0) {
                                        puVar14 = puVar6 + 2;
                                      }
                                      puVar14[(int)uVar25] = *puVar6 & 0x7fffffff;
                                      uVar25 = uVar25 + 1;
                                    } while (uVar26 != uVar25);
                                    uVar25 = *puVar6;
                                  }
                                  *puVar6 = uVar25 & 0x7fffffff;
                                }
                                puVar14 = puVar6 + 2;
                                if (*(uint **)(puVar6 + 6) != (uint *)0x0) {
                                  puVar14 = *(uint **)(puVar6 + 6);
                                }
                                puVar14[iVar13] = uVar3;
                              }
                            }
                            plVar23 = plVar23 + 2;
                          } while ((uint *)plVar23 != puVar21);
                        }
                      }
                      local_5c0 = (uint *)(local_5d0 + 0x17);
                      uVar3 = *(uint *)(local_5d0 + 0x1a);
                      if (uVar3 == 0) {
                        uVar24 = 1;
                        uVar22 = 0;
                        iVar13 = 0;
                        uVar26 = 0;
                      }
                      else {
                        puVar21 = (uint *)local_5d0[0x19];
                        if ((uint *)local_5d0[0x19] == (uint *)0x0) {
                          puVar21 = local_5c0;
                        }
                        uVar26 = *puVar21;
                        if (uVar26 == 0) {
                          iVar13 = uVar3 + 0x1e;
                          if (-1 < (int)(uVar3 - 1)) {
                            iVar13 = uVar3 - 1;
                          }
                          uVar22 = 0;
                          uVar24 = (ulonglong)(uint)(iVar13 >> 5);
                          if (iVar13 >> 5 < 1) {
                            uVar24 = uVar22;
                          }
                          iVar13 = 0;
                          do {
                            if (uVar24 == uVar22) goto LAB_1400bea59;
                            iVar13 = iVar13 + 0x20;
                            uVar26 = puVar21[uVar22 + 1];
                            uVar22 = uVar22 + 1;
                          } while (uVar26 == 0);
                        }
                        else {
                          uVar22 = 0;
                          iVar13 = 0;
                        }
                        uVar24 = (ulonglong)(-uVar26 & uVar26);
                        uVar31 = uVar24 * 2 + 1;
                        lVar11 = 0x3f;
                        if (uVar31 != 0) {
                          for (; uVar31 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                          }
                        }
                        uVar26 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                        if ((int)uVar3 <= (int)uVar26) {
                          uVar26 = uVar3;
                        }
                      }
                      if (uVar26 != uVar3) {
                        uVar25 = 0xffffffff;
                        do {
                          lVar11 = local_5d0[0x15];
                          lVar28 = (longlong)(int)uVar26 * 0x38;
                          plVar23 = (longlong *)(lVar11 + lVar28);
                          lVar16 = *(longlong *)(lVar11 + lVar28);
                          uVar26 = *(uint *)(lVar11 + 8 + lVar28);
                          if ((int)uVar26 < 0 && (~uVar26 & 0x7fffffff) != 0) {
                            *(uint *)(lVar16 + 0x98) = uVar26;
                            uVar26 = *(uint *)((longlong)plVar23 + 0xc) & 0x7fffffff;
                            if (uVar26 != 0x7fffffff) {
                              *(uint *)(lVar16 + 0x9c) =
                                   *(uint *)(lVar16 + 0x9c) & 0x80000000 | uVar26;
                            }
                          }
                          else if (*(short *)(lVar16 + 0xdc) != 0) {
                            uVar31 = 0;
                            do {
                              if ((int)*(uint *)(plVar23 + 1) < 0) {
                                uVar26 = *(uint *)(plVar23 + 1) & 0x7fffffff;
                              }
                              else {
                                plVar5 = (longlong *)plVar23[4];
                                if ((longlong *)plVar23[4] == (longlong *)0x0) {
                                  plVar5 = plVar23 + 2;
                                }
                                uVar26 = *(uint *)((longlong)plVar5 + uVar31 * 4);
                              }
                              if (uVar26 != 0x7fffffff) {
                                iVar10 = *(int *)(lVar16 + 0xb8);
                                if (iVar10 == 1) {
                                  *(uint *)(lVar16 + 0x98) = uVar26 | 0x80000000;
                                }
                                else {
                                  uVar18 = *(uint *)(lVar16 + 0x98);
                                  if ((int)uVar18 < 0) {
                                    if (iVar10 != 0) {
                                      iVar19 = 0;
                                      do {
                                        lVar11 = *(longlong *)(lVar16 + 0xb0);
                                        if (*(longlong *)(lVar16 + 0xb0) == 0) {
                                          lVar11 = lVar16 + 0xa0;
                                        }
                                        *(uint *)(lVar11 + (longlong)iVar19 * 4) =
                                             *(uint *)(lVar16 + 0x98) & 0x7fffffff;
                                        iVar19 = iVar19 + 1;
                                      } while (iVar10 != iVar19);
                                      uVar18 = *(uint *)(lVar16 + 0x98);
                                    }
                                    *(uint *)(lVar16 + 0x98) = uVar18 & 0x7fffffff;
                                  }
                                  lVar11 = *(longlong *)(lVar16 + 0xb0);
                                  if (*(longlong *)(lVar16 + 0xb0) == 0) {
                                    lVar11 = lVar16 + 0xa0;
                                  }
                                  *(uint *)(lVar11 + uVar31 * 4) = uVar26;
                                }
                              }
                              uVar31 = uVar31 + 1;
                            } while (uVar31 < *(ushort *)(*plVar23 + 0xdc));
                          }
                          uVar25 = uVar25 & ~(uint)uVar24;
                          puVar21 = (uint *)local_5d0[0x19];
                          if ((uint *)local_5d0[0x19] == (uint *)0x0) {
                            puVar21 = local_5c0;
                          }
                          uVar18 = *(uint *)(local_5d0 + 0x1a);
                          iVar10 = (int)uVar22;
                          lVar11 = (longlong)iVar10;
                          uVar26 = puVar21[lVar11] & uVar25;
                          if (uVar26 == 0) {
                            iVar19 = uVar18 + 0x1e;
                            if (-1 < (int)(uVar18 - 1)) {
                              iVar19 = uVar18 - 1;
                            }
                            iVar19 = iVar19 >> 5;
                            iVar13 = iVar13 + 0x20;
                            iVar20 = iVar19;
                            if (iVar19 < iVar10) {
                              iVar20 = iVar10;
                            }
                            if (iVar10 < iVar19) {
                              lVar16 = 0;
                              do {
                                uVar26 = puVar21[lVar11 + lVar16 + 1];
                                if (uVar26 != 0) {
                                  uVar22 = (ulonglong)(iVar10 + (int)lVar16 + 1);
                                  uVar25 = 0xffffffff;
                                  goto LAB_1400bf0c5;
                                }
                                iVar13 = iVar13 + 0x20;
                                lVar16 = lVar16 + 1;
                              } while (iVar20 - lVar11 != lVar16);
                              uVar25 = 0xffffffff;
                              iVar10 = iVar20;
                            }
                            uVar22 = (ulonglong)(iVar10 + 1);
                            uVar26 = uVar18;
                          }
                          else {
LAB_1400bf0c5:
                            uVar24 = (ulonglong)(-uVar26 & uVar26);
                            uVar31 = uVar24 * 2 + 1;
                            lVar11 = 0x3f;
                            if (uVar31 != 0) {
                              for (; uVar31 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                              }
                            }
                            uVar26 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                            if ((int)uVar18 <= (int)uVar26) {
                              uVar26 = uVar18;
                            }
                          }
                          local_5c8 = (ulonglong)uVar3;
                        } while (uVar26 != uVar3);
                      }
LAB_1400bea59:
                      if (0 < (int)uStack_570) {
                        lVar11 = *(longlong *)(*local_5d0 + 0x1280);
                        lVar16 = *local_5d0 + 0xb00;
                        if (lVar11 != 0) {
                          lVar16 = lVar11;
                        }
                        lVar11 = (longlong)(int)local_5d0[1] * 0x280;
                        puVar4 = (undefined8 *)(lVar16 + lVar11);
                        lVar11 = *(longlong *)(lVar16 + 0x68 + lVar11);
                        if (lVar11 == 0) {
                          lVar11 = FUN_144a719cc(*puVar4,*(undefined4 *)(puVar4 + 1));
                          puVar4[0xd] = lVar11;
                        }
                        uVar7 = FUN_14474793a(*puVar4,lVar11,puVar4 + 0xe,0);
                        lVar11 = local_598;
                        lVar16 = (longlong)(int)uStack_590;
                        if (lVar16 != 0) {
                          lVar28 = 0;
                          do {
                            FUN_1447093fc(uVar7,*(undefined8 *)(lVar11 + lVar28));
                            lVar28 = lVar28 + 8;
                          } while (lVar16 * 8 != lVar28);
                        }
                        FUN_144ad5b2c(&local_578,uVar7);
                        FUN_144a537b2(uVar7);
                        uVar22 = local_138;
                        lVar11 = (longlong)(int)local_138;
                        uVar3 = (int)local_138 + 1;
                        local_138 = CONCAT44(local_138._4_4_,uVar3);
                        if (local_138._4_4_ < uVar3) {
                          FUN_147385282(local_150,uVar22 & 0xffffffff);
                        }
                        puVar8 = local_140;
                        if (local_140 == (undefined1 *)0x0) {
                          puVar8 = local_150;
                        }
                        *(undefined8 *)(puVar8 + lVar11 * 8) = uVar7;
                      }
                      if (0 < (int)uStack_580) {
                        puVar4 = *(undefined8 **)(*local_5d0 + 0x1280);
                        puVar30 = (undefined8 *)(*local_5d0 + 0xb00);
                        if (puVar4 != (undefined8 *)0x0) {
                          puVar30 = puVar4;
                        }
                        lVar11 = puVar30[0xd];
                        if (lVar11 == 0) {
                          lVar11 = FUN_144a719cc(*puVar30,*(undefined4 *)(puVar30 + 1));
                          puVar30[0xd] = lVar11;
                        }
                        uVar7 = FUN_14474793a(*puVar30,lVar11,puVar30 + 0xe,0);
                        lVar11 = local_598;
                        lVar16 = (longlong)(int)uStack_590;
                        if (lVar16 != 0) {
                          lVar28 = 0;
                          do {
                            FUN_1447093fc(uVar7,*(undefined8 *)(lVar11 + lVar28));
                            lVar28 = lVar28 + 8;
                          } while (lVar16 * 8 != lVar28);
                        }
                        FUN_144ad5b2c(&local_588,uVar7);
                        FUN_144a537b2(uVar7);
                        uVar22 = local_138;
                        lVar11 = (longlong)(int)local_138;
                        uVar3 = (int)local_138 + 1;
                        local_138 = CONCAT44(local_138._4_4_,uVar3);
                        if (local_138._4_4_ < uVar3) {
                          FUN_147385282(local_150,uVar22 & 0xffffffff);
                        }
                        puVar8 = local_140;
                        if (local_140 == (undefined1 *)0x0) {
                          puVar8 = local_150;
                        }
                        *(undefined8 *)(puVar8 + lVar11 * 8) = uVar7;
                      }
                      if (local_598 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_588 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_578 != 0) {
                        FUN_1400020a8();
                      }
                      puVar8 = local_140;
                      if (local_140 == (undefined1 *)0x0) {
                        puVar8 = local_150;
                      }
                      lVar11 = (longlong)(int)local_138;
                      if (lVar11 != 0) {
                        lVar16 = 0;
                        do {
                          plVar23 = *(longlong **)(puVar8 + lVar16);
                          lVar28 = *(longlong *)(*plVar23 + 0x1280);
                          lVar27 = *plVar23 + 0xb00;
                          if (lVar28 != 0) {
                            lVar27 = lVar28;
                          }
                          lVar12 = (longlong)(int)plVar23[1] * 0x280;
                          lVar28 = lVar27 + lVar12;
                          lVar27 = *(longlong *)(lVar27 + 0x60 + lVar12);
                          if (lVar28 == local_5f0) {
                            plVar5 = (longlong *)(lVar27 + 0x220);
                            iVar13 = *(int *)(lVar27 + 0x228);
                            *(uint *)(lVar27 + 0x228) = iVar13 + 1U;
                            if (*(uint *)(lVar27 + 0x22c) < iVar13 + 1U) {
                              FUN_144ad40f4(plVar5,iVar13);
                            }
                            lVar28 = (longlong)local_5d4;
                            uVar3 = iVar13 - local_5d4;
                            local_5d4 = local_5d4 + 1;
                            memmove((void *)(*plVar5 + lVar28 * 8 + 8),
                                    (void *)(*plVar5 + lVar28 * 8),(ulonglong)uVar3 << 3);
                            plVar5 = (longlong *)(lVar28 * 8 + *plVar5);
                          }
                          else {
                            if (lVar27 == 0) {
                              puVar4 = (undefined8 *)FUN_14001cc68(0x310,0x10);
                              uVar22 = local_68;
                              puVar4[1] = lVar28;
                              puVar4[0x35] = 0;
                              puVar4[0x36] = 0x1800000000;
                              puVar4[2] = 0;
                              puVar4[3] = 0;
                              *(undefined4 *)(puVar4 + 4) = 0;
                              puVar4[0x3c] = 0;
                              puVar4[0x3e] = 0;
                              *(undefined1 *)(puVar4 + 0x4d) = 0;
                              *(undefined1 *)(puVar4 + 0x4f) = 0;
                              puVar4[0x5c] = 0;
                              *(undefined4 *)(puVar4 + 0x5d) = 0;
                              puVar4[0x37] = 0;
                              puVar4[0x38] = 0;
                              puVar4[0x39] = 0;
                              puVar4[0x3a] = 0;
                              *(undefined2 *)(puVar4 + 0x3b) = 0;
                              puVar4[0x44] = 0;
                              puVar4[0x45] = 0;
                              puVar4[0x46] = 0;
                              puVar4[0x47] = 0;
                              puVar4[0x48] = 0;
                              puVar4[0x49] = 0;
                              puVar4[0x4a] = 0;
                              puVar4[0x4b] = 0;
                              puVar4[0x58] = 0;
                              puVar4[0x59] = 0;
                              puVar4[0x56] = 0;
                              puVar4[0x57] = 0;
                              puVar4[0x54] = 0;
                              puVar4[0x55] = 0;
                              puVar4[0x52] = 0;
                              puVar4[0x53] = 0;
                              puVar4[0x50] = 0;
                              puVar4[0x51] = 0;
                              *(undefined8 *)((longlong)puVar4 + 0x2ec) = 0xffffffff00000080;
                              *(undefined4 *)((longlong)puVar4 + 0x2f4) = 0;
                              puVar4[0x60] = 0;
                              *(undefined4 *)(puVar4 + 0x61) = 0;
                              *puVar4 = &PTR_FUN_14a349180;
                              *(undefined8 **)(lVar28 + 0x60) = puVar4;
                              lVar27 = (longlong)(int)local_68;
                              uVar3 = (int)local_68 + 1;
                              local_68 = CONCAT44(local_68._4_4_,uVar3);
                              if (local_68._4_4_ < uVar3) {
                                FUN_14738517c(local_130,uVar22 & 0xffffffff);
                              }
                              plVar5 = local_70;
                              if (local_70 == (longlong *)0x0) {
                                plVar5 = local_130;
                              }
                              plVar5[lVar27] = lVar28;
                              lVar27 = *(longlong *)(lVar28 + 0x60);
                            }
                            iVar13 = *(int *)(lVar27 + 0x228);
                            *(uint *)(lVar27 + 0x228) = iVar13 + 1U;
                            if (*(uint *)(lVar27 + 0x22c) < iVar13 + 1U) {
                              FUN_144ad40f4((longlong *)(lVar27 + 0x220),iVar13);
                            }
                            plVar5 = (longlong *)
                                     ((longlong)iVar13 * 8 + *(longlong *)(lVar27 + 0x220));
                          }
                          *plVar5 = (longlong)plVar23;
                          FUN_1431791d6(plVar23);
                          lVar16 = lVar16 + 8;
                        } while (lVar11 * 8 != lVar16);
                      }
                      FUN_1431791d6(local_5d0);
                      if (local_140 != (undefined1 *)0x0) {
                        FUN_1400020a8();
                      }
                      iVar13 = local_5d4 + 1;
                      lVar11 = local_5e0;
                    } while (iVar13 < *(int *)(local_5e0 + 0x228));
                  }
                  plVar23 = local_70;
                  if (local_70 == (longlong *)0x0) {
                    plVar23 = local_130;
                  }
                  lVar11 = local_5f0;
                  if ((longlong)(int)local_68 != 0) {
                    plVar5 = plVar23 + (int)local_68;
                    uVar3 = *local_5e8;
                    do {
                      lVar16 = *plVar23;
                      if (lVar16 != lVar11) {
                        uVar22 = FUN_143171962(lVar16,1,local_560);
                        lVar28 = *(longlong *)(lVar11 + 0x60);
                        lVar11 = lVar28 + 0x28;
                        lVar27 = *(longlong *)(lVar28 + 0x1a8);
                        lVar12 = lVar27;
                        if (lVar27 == 0) {
                          lVar12 = lVar11;
                        }
                        iVar13 = *(int *)(lVar28 + 0x1b0);
                        lVar29 = (longlong)iVar13;
                        if (lVar29 != 0) {
                          lVar15 = 0;
                          do {
                            if (*(longlong *)(lVar12 + lVar15) == lVar16 + 0x18) {
                              uVar24 = *(ulonglong *)(lVar12 + 8 + lVar15);
                              if (uVar24 < uVar22) {
                                uVar24 = uVar22;
                              }
                              *(ulonglong *)(lVar12 + 8 + lVar15) = uVar24;
                              lVar11 = local_5f0;
                              goto LAB_1400bf1f7;
                            }
                            lVar15 = lVar15 + 0x10;
                          } while (lVar29 << 4 != lVar15);
                        }
                        *(uint *)(lVar28 + 0x1b0) = iVar13 + 1U;
                        if (*(uint *)(lVar28 + 0x1b4) < iVar13 + 1U) {
                          FUN_1473855be(lVar11,iVar13);
                          lVar27 = *(longlong *)(lVar28 + 0x1a8);
                        }
                        if (lVar27 != 0) {
                          lVar11 = lVar27;
                        }
                        *(longlong *)(lVar11 + lVar29 * 0x10) = lVar16 + 0x18;
                        *(ulonglong *)(lVar11 + 8 + lVar29 * 0x10) = uVar22;
                        lVar11 = local_5f0;
                      }
LAB_1400bf1f7:
                      if (0x7f < (int)local_158) {
                        uVar3 = uVar3 | 1;
                        FUN_1447ab2a0(local_560);
                        lVar11 = local_5f0;
                      }
                      plVar23 = plVar23 + 1;
                    } while (plVar23 != plVar5);
                    *local_5e8 = uVar3;
                  }
                  FUN_143171962(lVar11,0);
                  bVar9 = 1;
                  if (0x7f < (int)local_158) {
                    *(byte *)local_5e8 = (byte)*local_5e8 | 1;
                    FUN_1447ab2a0(local_560);
                  }
                  bVar17 = true;
                  bVar2 = true;
                  lVar16 = local_5f0;
                  plVar23 = local_5b8;
                }
              }
              if (local_70 != (longlong *)0x0) {
                FUN_1400020a8();
                lVar16 = local_5f0;
                plVar23 = local_5b8;
              }
              lVar11 = local_5f0;
            } while ((bVar2) || (lVar16 = lVar16 + 0x280, lVar11 = lVar16, lVar16 != local_5a0));
          }
          plVar23 = plVar23 + 1;
        } while (plVar23 != local_5a8);
        uVar3 = *(uint *)(local_5b0 + 0x1b8);
        param_1 = local_5b0;
      }
      local_5d8 = local_5d8 + 1;
    } while (local_5d8 < uVar3);
  } while (bVar17);
  if (0 < (int)local_158) {
    *(byte *)local_5e8 = (byte)*local_5e8 | 1;
    FUN_1447ab2a0(local_560);
  }
  if ((bool)(*(longlong *)(local_5b0 + 0x28) != 0 & bVar9)) {
    SetEvent(*(HANDLE *)(*(longlong *)(local_5b0 + 0x28) + 0x20));
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return local_5e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400bf3ec FUN_1400bf3ec body=266 status=ok
// SIG undefined FUN_1400bf3ec(void)

void FUN_1400bf3ec(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  do {
    do {
      uVar2 = *param_1;
      uVar6 = (uint)uVar2;
      if ((uVar2 & 0x3ffffff) == 0) {
        return;
      }
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14274643a();
      }
      uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
      lVar3 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
      LOCK();
      uVar1 = *param_1;
      if (uVar2 == uVar1) {
        *param_1 = uVar4 | *(uint *)(lVar3 + 0x10 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      }
      UNLOCK();
    } while (uVar2 != uVar1);
    *(undefined4 *)(lVar3 + (ulonglong)(uVar6 & 0x3fff) * 0x18 + 0x10) = 0;
    lVar3 = *(longlong *)
             (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
    FUN_1447d080c(uVar6 & 0x3ffffff);
  } while (lVar3 != 0);
  return;
}



// FUNCTION 1400bf4f6 FUN_1400bf4f6 body=106 status=ok
// SIG undefined FUN_1400bf4f6(void)

undefined8 * FUN_1400bf4f6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae0e640;
  plVar3 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_14ae09a28;
  if (param_1[4] != 0) {
    LOCK();
    piVar2 = (int *)(param_1[4] + 8);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf560 FUN_1400bf560 body=96 status=ok
// SIG undefined FUN_1400bf560(void)

void FUN_1400bf560(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1400bf5c0 FUN_1400bf5c0 body=92 status=ok
// SIG undefined FUN_1400bf5c0(void)

void FUN_1400bf5c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_149f62ba0;
  puVar1 = (undefined8 *)param_1[5];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[4];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001400bf607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1400bf61c FUN_1400bf61c body=29 status=ok
// SIG undefined FUN_1400bf61c(void)

undefined8 FUN_1400bf61c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf63a FUN_1400bf63a body=38 status=ok
// SIG undefined FUN_1400bf63a(void)

undefined8 FUN_1400bf63a(undefined8 param_1,int param_2)

{
  FUN_1400bf5c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf660 FUN_1400bf660 body=29 status=ok
// SIG undefined FUN_1400bf660(void)

undefined8 FUN_1400bf660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf67e FUN_1400bf67e body=29 status=ok
// SIG undefined FUN_1400bf67e(void)

undefined8 FUN_1400bf67e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf69c FUN_1400bf69c body=29 status=ok
// SIG undefined FUN_1400bf69c(void)

undefined8 FUN_1400bf69c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf6ba FUN_1400bf6ba body=29 status=ok
// SIG undefined FUN_1400bf6ba(void)

undefined8 FUN_1400bf6ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1400bf6d8 FUN_1400bf6d8 body=132 status=ok
// SIG undefined FUN_1400bf6d8(void)

void FUN_1400bf6d8(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400bf75c FUN_1400bf75c body=581 status=ok
// SIG undefined FUN_1400bf75c(void)

void FUN_1400bf75c(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x1108);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0x110c) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0x1100);
joined_r0x0001400bf932:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x88);
    param_2 = 0;
    uVar7 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)((longlong)param_1 + 0x110c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar7 = lVar4 * 0x88;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar7 + 0xf;
        if (uVar7 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400bf7ee;
              lVar4 = uVar5 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,0);
      }
    }
LAB_1400bf7ee:
    uVar7 = uVar7 / 0x88;
    uVar6 = (uint)uVar7;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x110c) = 0x7fffffff;
      uVar7 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x1100);
    }
    else {
      *(uint *)((longlong)param_1 + 0x110c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x1100);
      if (uVar6 < 0x21) goto joined_r0x0001400bf932;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72(&DAT_00001100 + (longlong)param_1,0,uVar7,0x88);
      memmove(*(void **)((longlong)param_1 + 0x1100),param_1,(longlong)param_2 * 0x88);
      return;
    }
  }
  FUN_1446efa72(&DAT_00001100 + (longlong)param_1,param_2,uVar7,0x88);
  return;
}



// FUNCTION 1400bf9a2 FUN_1400bf9a2 body=95 status=ok
// SIG undefined FUN_1400bf9a2(void)

undefined8 * FUN_1400bf9a2(void)

{
  DWORD DVar1;
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0x11a0);
  memset(_Dst,0,0x1190);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(_Dst + 1) = DVar1;
  *_Dst = &PTR_FUN_14a7be1c0;
  _Dst[0x232] = 0;
  _Dst[0x233] = 0x100000000;
  return _Dst;
}



// FUNCTION 1400bfa02 FUN_1400bfa02 body=80 status=ok
// SIG undefined FUN_1400bfa02(void)

void FUN_1400bfa02(longlong param_1)

{
  if ((DAT_14c86a9fc == 0) &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_1400bfa52(param_1 + -0x2b8,0);
  return;
}



// FUNCTION 1400bfa52 FUN_1400bfa52 body=581 status=ok
// SIG undefined FUN_1400bfa52(void)

void FUN_1400bfa52(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (param_2 == 0) {
    lVar5 = (ulonglong)((DAT_14c7590b0 + 1U) % 3) * 0xa0 + param_1;
    lVar7 = 0;
    do {
      lVar1 = lVar5 + 0xd8 + lVar7;
      FUN_1400bfcc0(param_1 + 0x38 + lVar7,lVar1);
      iVar6 = *(int *)(lVar5 + 0xe4 + lVar7);
      FUN_1400bfc98(*(undefined8 *)(lVar5 + 0xd8 + lVar7),*(undefined4 *)(lVar5 + 0xe0 + lVar7));
      *(undefined4 *)(lVar5 + 0xe0 + lVar7) = 0;
      if ((iVar6 < 0) && (*(int *)(lVar1 + 0xc) != 0)) {
        FUN_1497e4ac0(lVar1);
      }
      lVar7 = lVar7 + 0x10;
    } while (lVar7 != 0xa0);
  }
  else {
    lVar5 = param_1 + 0xd8;
    local_60 = 0;
    do {
      lVar7 = 0;
      do {
        lVar1 = lVar5 + lVar7;
        FUN_1400bfcc0(param_1 + 0x38 + lVar7,lVar1);
        iVar6 = *(int *)(lVar5 + 0xc + lVar7);
        FUN_1400bfc98(*(undefined8 *)(lVar5 + lVar7),*(undefined4 *)(lVar5 + 8 + lVar7));
        *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
        if ((iVar6 < 0) && (*(int *)(lVar1 + 0xc) != 0)) {
          FUN_1497e4ac0(lVar1);
        }
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0xa0);
      local_60 = local_60 + 1;
      lVar5 = lVar5 + 0xa0;
    } while (local_60 != 3);
    local_60 = 3;
  }
  iVar6 = 10;
  lVar5 = 0;
  do {
    plVar2 = (longlong *)(param_1 + 0x38 + lVar5 * 0x10);
    uVar4 = *(uint *)(param_1 + 0x40 + lVar5 * 0x10);
    do {
      lVar7 = (ulonglong)uVar4 * 0x18;
      do {
        if ((int)uVar4 < 1) goto LAB_1400bfb35;
        lVar1 = *plVar2;
        piVar3 = (int *)(lVar1 + -4 + lVar7);
        uVar4 = uVar4 - 1;
        lVar7 = lVar7 + -0x18;
      } while (((uint)(DAT_14c7590b0 - *piVar3) < 0x1f) && (param_2 == 0));
      local_58 = *(longlong *)(lVar1 + lVar7);
      if (local_58 != 0) {
        LOCK();
        *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
        UNLOCK();
      }
      local_50 = *(longlong *)(lVar1 + 8 + lVar7);
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_1417c9c76(&local_58);
      FUN_1497e4af0(plVar2,uVar4);
      FUN_1497e4b5a(plVar2);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0 || param_2 != 0);
    iVar6 = 0;
LAB_1400bfb35:
    if ((((param_2 ^ 1) & iVar6 == 0) != 0) || (lVar5 = lVar5 + 1, lVar5 == 10)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1400bfc98 FUN_1400bfc98 body=40 status=ok
// SIG undefined FUN_1400bfc98(void)

void FUN_1400bfc98(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1417c9c76(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1400bfcc0 FUN_1400bfcc0 body=95 status=ok
// SIG undefined FUN_1400bfcc0(void)

void FUN_1400bfcc0(longlong *param_1,undefined8 *param_2)

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
    FUN_1497e4a2c(param_1,iVar2);
  }
  FUN_1497e49f0((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1400bfd20 FUN_1400bfd20 body=94 status=ok
// SIG undefined FUN_1400bfd20(void)

void FUN_1400bfd20(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  FUN_1400bfd7e(param_1 + 0x78);
  FUN_1400bfde2(param_1 + 0x30);
  FUN_1447d1b6b(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  FUN_1400bfe46(param_1 + 0x20);
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400bfd73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1400bfd7e FUN_1400bfd7e body=99 status=ok
// SIG undefined FUN_1400bfd7e(void)

void FUN_1400bfd7e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400bfde2 FUN_1400bfde2 body=99 status=ok
// SIG undefined FUN_1400bfde2(void)

void FUN_1400bfde2(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400bfe46 FUN_1400bfe46 body=99 status=ok
// SIG undefined FUN_1400bfe46(void)

void FUN_1400bfe46(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1400bfeaa FUN_1400bfeaa body=113 status=ok
// SIG undefined FUN_1400bfeaa(void)

void FUN_1400bfeaa(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined4 *puVar1;
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
  uint uVar14;
  longlong lVar15;
  
  uVar14 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_4 + 4) = uVar14;
  if ((uVar14 & 1) != 0) {
    lVar2 = *(longlong *)(param_2 + 0x140);
    lVar15 = (longlong)param_3 * 0x30;
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    uVar4 = *(undefined4 *)(param_1 + 0x54);
    uVar5 = *(undefined4 *)(param_1 + 0x58);
    uVar6 = *(undefined4 *)(param_1 + 0x5c);
    uVar7 = *(undefined4 *)(param_1 + 0x60);
    uVar8 = *(undefined4 *)(param_1 + 100);
    uVar9 = *(undefined4 *)(param_1 + 0x68);
    uVar10 = *(undefined4 *)(param_1 + 0x6c);
    uVar11 = *(undefined4 *)(param_1 + 0x74);
    uVar12 = *(undefined4 *)(param_1 + 0x78);
    uVar13 = *(undefined4 *)(param_1 + 0x7c);
    puVar1 = (undefined4 *)(lVar2 + 0x20 + lVar15);
    *puVar1 = *(undefined4 *)(param_1 + 0x70);
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    puVar1 = (undefined4 *)(lVar2 + 0x10 + lVar15);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    uVar14 = *(uint *)(param_4 + 4);
  }
  if ((uVar14 & 2) != 0) {
    FUN_1400bff1c((longlong)param_3 * 0x40 + *(longlong *)(param_2 + 0x150),param_1 + 0x80);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1400bff1c FUN_1400bff1c body=268 status=ok
// SIG undefined FUN_1400bff1c(void)

undefined8 * FUN_1400bff1c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    FUN_1400c0028(param_1 + 2,param_2 + 2);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400c0080(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
      }
    }
    FUN_1400c0028(param_1 + 2,param_2 + 2);
    iVar1 = *(int *)(param_2 + 5);
    pvVar2 = (void *)param_2[4];
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1447bda9e(param_1 + 4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 << 2);
      }
    }
    iVar1 = *(int *)(param_2 + 7);
    pvVar2 = (void *)param_2[6];
    *(int *)(param_1 + 7) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x3c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    }
    else {
      FUN_1400c0080(param_1 + 6,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400c0028 FUN_1400c0028 body=88 status=ok
// SIG undefined FUN_1400c0028(void)

undefined8 * FUN_1400c0028(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1400c01be(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1400c0080 FUN_1400c0080 body=317 status=ok
// SIG undefined FUN_1400c0080(void)

void FUN_1400c0080(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400c00ee;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1400c00ee:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400c01be FUN_1400c01be body=317 status=ok
// SIG undefined FUN_1400c01be(void)

void FUN_1400c01be(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1400c022c;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_1400c022c:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1400c0302 FUN_1400c0302 body=774 status=ok
// SIG undefined FUN_1400c0302(void)

int FUN_1400c0302(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,int param_6,undefined8 *param_7,char param_8)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  int local_250;
  undefined4 *local_248;
  char local_240;
  undefined8 local_238;
  undefined8 local_22c;
  undefined8 uStack_224;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined1 local_204;
  undefined8 *local_200;
  ulonglong uStack_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 local_188 [8];
  undefined1 local_180 [56];
  undefined8 local_148 [29];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_188[0] = DAT_14c96b238;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x400000000;
  local_50 = 0;
  (**(code **)(*param_1 + 0x238))(param_1,param_3,local_188);
  puVar2 = local_60;
  if ((int)local_58 < 1) goto LAB_1400c0554;
  if (param_8 == '\0') {
    cVar3 = '\0';
  }
  else {
    cVar3 = *(char *)((longlong)param_1 + 0x3a);
  }
  puVar4 = local_180;
  if (local_60 != (undefined1 *)0x0) {
    puVar4 = local_60;
  }
  local_1d8 = param_7[2];
  uStack_1d0 = (longlong *)param_7[3];
  local_1c8 = param_7[4];
  uStack_1c0 = param_7[5];
  local_1e8._0_4_ = (float)*param_7;
  local_1e8._4_4_ = (float)((ulonglong)*param_7 >> 0x20);
  local_1e8 = CONCAT44(*(float *)((longlong)param_1 + 0x244) * local_1e8._4_4_,
                       *(float *)(param_1 + 0x48) * (float)local_1e8);
  uStack_1e0._0_4_ = (float)param_7[1];
  uStack_1e0._4_4_ = (float)((ulonglong)param_7[1] >> 0x20);
  uStack_1e0 = CONCAT44(*(float *)((longlong)param_1 + 0x24c) * uStack_1e0._4_4_,
                        *(float *)(param_1 + 0x49) * (float)uStack_1e0);
  local_238 = param_4;
  if (cVar3 == '\0') {
    (**(code **)(*param_1 + 0x1f8))(param_1,&local_22c);
  }
  else {
    (**(code **)(*param_1 + 0x1f0))();
  }
  local_208 = local_21c;
  local_218 = local_22c;
  uStack_210 = uStack_224;
  local_204 = 1;
  local_200 = (undefined8 *)0x0;
  uStack_1f8 = 0;
  FUN_1400c0622(&local_1e8,&local_218);
  local_1b8 = (float)local_1e8;
  uStack_1b4 = local_1e8._4_4_;
  uStack_1b0 = (float)uStack_1e0;
  uStack_1ac = uStack_1e0._4_4_;
  local_1a8 = (undefined4)local_1d8;
  uStack_1a4 = local_1d8._4_4_;
  uStack_1a0 = (undefined4)uStack_1d0;
  uStack_19c = uStack_1d0._4_4_;
  local_198 = (undefined4)local_1c8;
  uStack_194 = local_1c8._4_4_;
  uStack_190 = (undefined4)uStack_1c0;
  uStack_18c = uStack_1c0._4_4_;
  if ((int)uStack_1f8 == 0) {
LAB_1400c04d1:
    if (local_200 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_200 != (undefined8 *)0x0) {
    (**(code **)*local_200)(local_200,0);
    FUN_1446efa72(&local_200,0,0,0x10);
    uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
    goto LAB_1400c04d1;
  }
  puVar1 = (undefined8 *)(puVar2 + 0x38);
  if (puVar2 == (undefined1 *)0x0) {
    puVar1 = local_148;
  }
  local_250 = param_6 + 1;
  local_1e8 = *param_2;
  uStack_1e0 = param_2[1];
  local_1d8 = param_2[2];
  local_1c8 = param_2[4];
  uStack_1c0 = param_2[5];
  local_248 = &local_1b8;
  local_258 = param_5;
  local_240 = cVar3;
  uStack_1d0 = param_1;
  param_6 = FUN_14016eaf2(*puVar1,&local_1e8,puVar4,local_238);
LAB_1400c0554:
  puVar2 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar2 = local_180;
  }
  FUN_1447157bd(puVar2,(int)local_58);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c060a FUN_1400c060a body=23 status=ok
// SIG undefined FUN_1400c060a(void)

void FUN_1400c060a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x260);
  uVar1 = *(undefined8 *)(param_1 + 600);
  *param_2 = *(undefined8 *)(param_1 + 0x250);
  param_2[1] = uVar1;
  return;
}



// FUNCTION 1400c0622 FUN_1400c0622 body=95 status=ok
// SIG undefined FUN_1400c0622(void)

longlong FUN_1400c0622(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1400c0682(param_2);
  cVar1 = *(char *)(puVar3 + 2);
  if (cVar1 == '\x01') {
    puVar3 = (undefined8 *)FUN_1400c06fe(puVar3);
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x03') {
      puVar3 = (undefined8 *)(param_1 + 0x20);
    }
    else {
      puVar3 = (undefined8 *)(param_1 + 0x10);
    }
  }
  uVar2 = puVar3[1];
  *(undefined8 *)(param_1 + 0x10) = *puVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = puVar3[1];
  *(undefined8 *)(param_1 + 0x20) = *puVar3;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * 0.6;
  return param_1;
}



// FUNCTION 1400c0682 FUN_1400c0682 body=123 status=ok
// SIG undefined FUN_1400c0682(void)

undefined4 * FUN_1400c0682(undefined4 *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[8] != 0) && (*(longlong **)(param_1 + 6) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 6) + 0x30))();
    if (cVar1 != '\0') {
      if (param_1[8] == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 6);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,&local_2c);
      param_1[4] = local_1c;
      *param_1 = local_2c;
      param_1[1] = uStack_28;
      param_1[2] = uStack_24;
      param_1[3] = uStack_20;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c06fe FUN_1400c06fe body=67 status=ok
// SIG undefined FUN_1400c06fe(void)

longlong FUN_1400c06fe(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1400c0742();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  return lVar2 + (ulonglong)*(byte *)(param_1 + 0x11) * 0x10 + 0x38;
}



// FUNCTION 1400c0742 FUN_1400c0742 body=221 status=ok
// SIG undefined FUN_1400c0742(void)

longlong FUN_1400c0742(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c979d50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14697351b;
    local_40 = &LAB_145d586da;
    local_48 = L"EditorSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x7d8;
    FUN_14081cfa3(L"/Script/SlateCore",L"SlateThemeManager",&DAT_14c979d50,&DAT_14697351a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c979d50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c0820 FUN_1400c0820 body=302 status=ok
// SIG undefined FUN_1400c0820(void)

bool FUN_1400c0820(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                  uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  iVar3 = DAT_14c7616c0;
  if (DAT_14c7616c0 != 0) {
    lVar4 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar4 = param_1 + 0x40;
    }
    iVar1 = *(int *)(param_1 + 0xe8);
    if ((longlong)iVar1 != 0) {
      lVar7 = 0;
      do {
        uVar2 = *(uint *)(lVar4 + 8 + lVar7);
        if (((param_5 & 3 & uVar2) != 0) && ((uVar2 & param_5 & 0x30) != 0)) {
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(lVar4 + lVar7);
          iVar1 = *(int *)(lVar4 + 4 + lVar7);
          *(int *)(param_3 + 0x10) = iVar1;
          *(int *)(lVar4 + 4 + lVar7) = iVar1 + 1;
          uVar2 = *(uint *)(lVar4 + 8 + lVar7);
          *(uint *)(lVar4 + 8 + lVar7) = uVar2 & param_5 & 0x33 | (uVar2 | param_5) & 0xc;
          uVar6 = *(undefined8 *)(lVar4 + 0x10 + lVar7);
          goto LAB_1400c0919;
        }
        lVar7 = lVar7 + 0x28;
      } while ((longlong)iVar1 * 0x28 != lVar7);
    }
    *(int *)(param_3 + 0xc) = iVar1;
    *(undefined4 *)(param_3 + 0x10) = 0;
    piVar5 = (int *)FUN_1400ede06();
    *piVar5 = iVar1;
    piVar5[1] = 1;
    piVar5[2] = param_5 & 0x3f;
    uVar6 = FUN_1417ca4bc(param_1,param_5,iVar1);
    *(undefined8 *)(piVar5 + 4) = uVar6;
LAB_1400c0919:
    FUN_144a857a8(uVar6,param_2,param_3,param_1 + 0xf0,param_4,param_5);
  }
  return iVar3 != 0;
}



// FUNCTION 1400c094e FUN_1400c094e body=856 status=ok
// SIG undefined FUN_1400c094e(void)

undefined8 FUN_1400c094e(char *param_1,double param_2)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_89 = 1;
  if (param_2 < INFINITY) {
    QueryPerformanceCounter(&local_88);
    if (param_2 <= (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) {
LAB_1400c0b38:
      bVar4 = false;
    }
    else {
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x304) != '\x01') goto LAB_1400c0b38;
      iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c8);
      bVar4 = true;
      if (iVar5 != 0) {
        uVar3 = (ulonglong)(iVar5 == 1);
        LOCK();
        piVar1 = &DAT_14c82ba50 + uVar3 * 0x20;
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if ((uint)(&DAT_14c82ba04)[uVar3 * 0x20] <= iVar5 + 1U) {
          FUN_146044b26(*(undefined8 *)(&DAT_14c82ba78 + uVar3 * 0x80));
        }
        FUN_140031ea8(&DAT_14c82ba00 + uVar3 * 0x80,1);
      }
    }
    QueryPerformanceCounter(&local_88);
    dVar7 = param_2 - ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0);
    if (0.0 < dVar7) {
      do {
        iVar5 = WaitOnAddress(param_1,&local_89,1,
                              -(int)((ulonglong)
                                     (longlong)ROUND(-0.5 - (dVar7 * 1000.0 + dVar7 * 1000.0)) >> 1)
                             );
        if ((iVar5 != 0) && (*param_1 != '\x01')) {
          uVar6 = 1;
          goto LAB_1400c0c07;
        }
        QueryPerformanceCounter(&local_88);
        dVar7 = param_2 - ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0);
      } while (0.0 < dVar7);
    }
    uVar6 = 0;
LAB_1400c0c07:
    if (!bVar4) goto LAB_1400c0c40;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    cVar2 = *(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x304);
    if ((cVar2 == '\x01') &&
       (iVar5 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2c8)
       , iVar5 != 0)) {
      uVar3 = (ulonglong)(iVar5 == 1);
      LOCK();
      piVar1 = &DAT_14c82ba50 + uVar3 * 0x20;
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((uint)(&DAT_14c82ba04)[uVar3 * 0x20] <= iVar5 + 1U) {
        FUN_146044b26(*(undefined8 *)(&DAT_14c82ba78 + uVar3 * 0x80));
      }
      FUN_140031ea8(&DAT_14c82ba00 + uVar3 * 0x80,1);
    }
    do {
      do {
        iVar5 = WaitOnAddress(param_1,&local_89,1,0xffffffff);
      } while (iVar5 == 0);
    } while (*param_1 != '\0');
    uVar6 = 1;
    if (cVar2 == '\0') goto LAB_1400c0c40;
  }
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2c8);
  if (iVar5 != 0) {
    LOCK();
    (&DAT_14c82ba50)[(ulonglong)(iVar5 == 1) * 0x20] =
         (&DAT_14c82ba50)[(ulonglong)(iVar5 == 1) * 0x20] + -1;
    UNLOCK();
  }
LAB_1400c0c40:
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1400c0ca8 FUN_1400c0ca8 body=180 status=ok
// SIG undefined FUN_1400c0ca8(void)

ulonglong FUN_1400c0ca8(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong *puStack_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = 0;
  do {
    while (uVar1 = *param_1, (uVar1 & 1) != 0) {
      if ((uVar1 < 4) && (iVar3 < 0x28)) {
        SwitchToThread();
        iVar3 = iVar3 + 1;
      }
      else {
        local_38 = 0;
        puStack_30 = (ulonglong *)0x0;
        local_28[0] = 1;
        uVar2 = uVar1 & 0xfffffffffffffffc;
        if ((uVar1 & 0xfffffffffffffffc) == 0) {
          uVar2 = local_38;
          puStack_30 = &local_38;
        }
        local_38 = uVar2;
        LOCK();
        uVar2 = *param_1;
        if (uVar1 == uVar2) {
          *param_1 = (ulonglong)((uint)uVar1 & 3) | (ulonglong)&local_38;
        }
        UNLOCK();
        if (uVar1 == uVar2) {
          FUN_1400c094e(local_28,0x7ff0000000000000);
          iVar3 = 0;
        }
      }
    }
    LOCK();
    uVar2 = *param_1;
    bVar4 = uVar1 == uVar2;
    if (bVar4) {
      *param_1 = uVar1 | 1;
      uVar2 = uVar1;
    }
    UNLOCK();
  } while (!bVar4);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1400c0d5e FUN_1400c0d5e body=170 status=ok
// SIG undefined FUN_1400c0d5e(void)

undefined8 * FUN_1400c0d5e(ulonglong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  size_t _Size;
  size_t _Alignment;
  bool bVar4;
  
  LOCK();
  bVar4 = DAT_14c82b9b8 == 0;
  if (bVar4) {
    DAT_14c82b9b8 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1400c0ca8(&DAT_14c82b9b8);
  }
  puVar2 = DAT_14c82b9b0;
  if (DAT_14c82b9b0 != (undefined8 *)0x0) {
    DAT_14c82b9b0 = (undefined8 *)*DAT_14c82b9b0;
  }
  LOCK();
  lVar1 = DAT_14c82b9b8 - 1;
  UNLOCK();
  bVar4 = 3 < DAT_14c82b9b8;
  uVar3 = (uint)DAT_14c82b9b8;
  DAT_14c82b9b8 = lVar1;
  if ((char)((uVar3 & 2) >> 1) == '\0' && bVar4) {
    FUN_1400c0e08(&DAT_14c82b9b8);
  }
  if (puVar2 != (undefined8 *)0x0) {
    return puVar2;
  }
  _Alignment = 0x40;
  if (0x40 < param_2) {
    _Alignment = (size_t)param_2;
  }
  _Size = 0x40;
  if (0x40 < param_1) {
    _Size = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c0dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = _aligned_malloc(_Size,_Alignment);
  return puVar2;
}



// FUNCTION 1400c0e08 FUN_1400c0e08 body=164 status=ok
// SIG undefined FUN_1400c0e08(void)

void FUN_1400c0e08(ulonglong *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  bool bVar8;
  
  uVar5 = param_2 & 0xfffffffffffffffe;
  while( true ) {
    LOCK();
    uVar6 = *param_1;
    bVar8 = uVar5 == uVar6;
    if (bVar8) {
      *param_1 = uVar5 | 2;
      uVar6 = uVar5;
    }
    UNLOCK();
    if (bVar8) break;
    if (uVar6 < 4) {
      return;
    }
    uVar5 = uVar6;
    if ((uVar6 & 2) != 0) {
      return;
    }
  }
  uVar5 = uVar6 | 2;
  while( true ) {
    while( true ) {
      plVar7 = (longlong *)(uVar5 & 0xfffffffffffffffc);
      puVar1 = (undefined8 *)plVar7[1];
      plVar4 = plVar7;
      while (puVar1 == (undefined8 *)0x0) {
        plVar3 = (longlong *)*plVar4;
        plVar7[1] = plVar3[1];
        plVar3[1] = (longlong)plVar4;
        plVar4 = plVar3;
        puVar1 = (undefined8 *)plVar7[1];
      }
      if ((uVar5 & 1) == 0) break;
      LOCK();
      uVar6 = *param_1;
      bVar8 = uVar5 == uVar6;
      if (bVar8) {
        *param_1 = uVar5 & 0xfffffffffffffffd;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
      if (bVar8) {
        return;
      }
    }
    puVar2 = (undefined8 *)puVar1[1];
    if (puVar2 != puVar1) break;
    LOCK();
    uVar6 = *param_1;
    bVar8 = uVar5 == uVar6;
    if (bVar8) {
      *param_1 = 0;
      uVar6 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar6;
    if (bVar8) {
LAB_1400c0e7a:
      *(undefined1 *)(puVar1 + 2) = 0;
      WakeByAddressSingle(puVar1 + 2);
      return;
    }
  }
  *puVar2 = 0;
  plVar7[1] = (longlong)puVar2;
  LOCK();
  *param_1 = *param_1 & 0xfffffffffffffffd;
  UNLOCK();
  goto LAB_1400c0e7a;
}



// FUNCTION 1400c0eac FUN_1400c0eac body=170 status=ok
// SIG undefined FUN_1400c0eac(void)

undefined8 * FUN_1400c0eac(ulonglong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  size_t _Size;
  size_t _Alignment;
  bool bVar4;
  
  LOCK();
  bVar4 = DAT_14c82b9a0 == 0;
  if (bVar4) {
    DAT_14c82b9a0 = 1;
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1400c0ca8(&DAT_14c82b9a0);
  }
  puVar2 = DAT_14c82b998;
  if (DAT_14c82b998 != (undefined8 *)0x0) {
    DAT_14c82b998 = (undefined8 *)*DAT_14c82b998;
  }
  LOCK();
  lVar1 = DAT_14c82b9a0 - 1;
  UNLOCK();
  bVar4 = 3 < DAT_14c82b9a0;
  uVar3 = (uint)DAT_14c82b9a0;
  DAT_14c82b9a0 = lVar1;
  if ((char)((uVar3 & 2) >> 1) == '\0' && bVar4) {
    FUN_1400c0e08(&DAT_14c82b9a0);
  }
  if (puVar2 != (undefined8 *)0x0) {
    return puVar2;
  }
  _Alignment = 0x40;
  if (0x40 < param_2) {
    _Alignment = (size_t)param_2;
  }
  _Size = 0x40;
  if (0x40 < param_1) {
    _Size = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400c0f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = _aligned_malloc(_Size,_Alignment);
  return puVar2;
}



// FUNCTION 1400c0f56 FUN_1400c0f56 body=840 status=ok
// SIG undefined FUN_1400c0f56(void)

void FUN_1400c0f56(int param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  size_t _Size;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  void *pvVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_a8 [40];
  void **local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  undefined8 uStack_60;
  longlong *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = (ulonglong)(param_1 + -1 + (uint)(param_1 == 0)) * 2 + 1;
  lVar15 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar14 = 1 << ((byte)lVar15 & 0x1f);
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  do {
    puVar10 = DAT_14c82b988;
    if (DAT_14c82b988 == (uint *)0x0) {
      puVar10 = _aligned_malloc(0x108,8);
      memset(puVar10,0,0x108);
      *puVar10 = 0x20;
      puVar12 = (uint *)0x0;
      LOCK();
      bVar17 = DAT_14c82b988 != (uint *)0x0;
      puVar7 = puVar10;
      if (bVar17) {
        puVar12 = DAT_14c82b988;
        puVar7 = DAT_14c82b988;
      }
      DAT_14c82b988 = puVar7;
      UNLOCK();
      if (bVar17) {
        _aligned_free(puVar10);
        puVar10 = puVar12;
      }
    }
    if (uVar14 <= *puVar10) goto LAB_1400c0fad;
    cVar8 = FUN_1400c1312(puVar10,&local_58);
  } while (cVar8 == '\0');
  local_68 = (void *)0x0;
  uStack_60 = 0;
  if ((longlong)(int)uStack_50 != 0) {
    plVar1 = local_58 + (int)uStack_50;
    plVar13 = local_58;
    do {
      lVar15 = *plVar13;
      while (uVar2 = uStack_60, puVar3 = *(undefined8 **)(lVar15 + 8), puVar3 != (undefined8 *)0x0)
      {
        *(undefined8 *)(lVar15 + 8) = *puVar3;
        *puVar3 = 0;
        if (*(undefined8 **)(lVar15 + 0x10) == puVar3) {
          *(undefined8 *)(lVar15 + 0x10) = 0;
        }
        lVar16 = (longlong)(int)uStack_60;
        uVar9 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar9);
        if (uStack_60._4_4_ < uVar9) {
          FUN_1456cb408(&local_68,uVar2 & 0xffffffff);
        }
        *(undefined8 **)((longlong)local_68 + lVar16 * 8) = puVar3;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  _Size = (ulonglong)uVar14 * 8 + 8;
  puVar10 = _aligned_malloc(_Size,8);
  memset(puVar10,0,_Size);
  plVar1 = local_58;
  *puVar10 = uVar14;
  local_78 = (void *)0x0;
  lVar15 = (longlong)(int)uStack_50;
  local_70 = (int)uStack_50;
  if (lVar15 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1456cb3d8(&local_78,uStack_50 & 0xffffffff);
    memcpy(local_78,plVar1,lVar15 << 3);
  }
  pvVar6 = local_68;
  local_80 = &local_78;
  lVar15 = (longlong)(int)uStack_60;
  if (lVar15 == 0) {
    bVar17 = true;
  }
  else {
    lVar16 = 0;
    do {
      lVar4 = *(longlong *)((longlong)pvVar6 + lVar16);
      lVar11 = FUN_1400c12a0(puVar10,(*(ulonglong *)(lVar4 + 8) * -0x34efebe6d34d3a04 +
                                      0x5b12db9242bd7ce7 +
                                      (*(ulonglong *)(lVar4 + 8) >> 0x20) * -0x5087ae1f62d043d7 >>
                                     0x20) % (ulonglong)*puVar10,&local_80);
      if (*(longlong **)(lVar11 + 0x10) == (longlong *)0x0) {
        *(longlong *)(lVar11 + 8) = lVar4;
      }
      else {
        **(longlong **)(lVar11 + 0x10) = lVar4;
      }
      *(longlong *)(lVar11 + 0x10) = lVar4;
      lVar16 = lVar16 + 8;
    } while (lVar15 * 8 != lVar16);
    bVar17 = *puVar10 != 0;
  }
  if ((local_70 != 0) && (bVar17)) {
    uVar14 = 1;
    do {
      FUN_1400c12a0(puVar10,uVar14 - 1,&local_80);
      if (local_70 == 0) break;
      bVar17 = uVar14 < *puVar10;
      uVar14 = uVar14 + 1;
    } while (bVar17);
  }
  plVar1 = local_58;
  LOCK();
  UNLOCK();
  lVar15 = (longlong)(int)uStack_50;
  DAT_14c82b988 = puVar10;
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      puVar5 = *(ulonglong **)((longlong)plVar1 + lVar16);
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 - 1;
      UNLOCK();
      if ((char)(((uint)uVar2 & 2) >> 1) == '\0' && 3 < uVar2) {
        FUN_1400c0e08();
      }
      lVar16 = lVar16 + 8;
    } while (lVar15 * 8 != lVar16);
  }
  if (local_78 != (void *)0x0) {
    free(local_78);
  }
  if (local_68 != (void *)0x0) {
    free(local_68);
  }
LAB_1400c0fad:
  if (local_58 != (longlong *)0x0) {
    free(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c12a0 FUN_1400c12a0 body=114 status=ok
// SIG undefined FUN_1400c12a0(void)

undefined8 * FUN_1400c12a0(longlong param_1,uint param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar3 = *(undefined8 **)(param_1 + 8 + (ulonglong)param_2 * 8);
  if (puVar3 == (undefined8 *)0x0) {
    param_3 = (longlong *)*param_3;
    iVar2 = (int)param_3[1];
    if ((longlong)iVar2 == 0) {
      puVar3 = (undefined8 *)FUN_1400c0d5e(0x40,0x40);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
    }
    else {
      puVar3 = *(undefined8 **)(*param_3 + -8 + (longlong)iVar2 * 8);
      *(int *)(param_3 + 1) = iVar2 + -1;
    }
    puVar1 = (undefined8 *)(param_1 + 8 + (ulonglong)param_2 * 8);
    LOCK();
    puVar4 = (undefined8 *)*puVar1;
    bVar5 = puVar4 == (undefined8 *)0x0;
    if (bVar5) {
      *puVar1 = puVar3;
      puVar4 = (undefined8 *)0x0;
    }
    UNLOCK();
    if (!bVar5) {
      FUN_1467ab492();
      puVar3 = puVar4;
    }
  }
  return puVar3;
}



// FUNCTION 1400c1312 FUN_1400c1312 body=369 status=ok
// SIG undefined FUN_1400c1312(void)

bool FUN_1400c1312(uint *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  FUN_1456cb4b6(param_2,*param_1);
  if (*param_1 != 0) {
    uVar8 = 0;
    do {
      puVar6 = *(undefined8 **)(param_1 + uVar8 * 2 + 2);
      if (*(undefined8 **)(param_1 + uVar8 * 2 + 2) == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_1400c0d5e(0x40,0x40);
        *puVar6 = 0;
        puVar6[1] = 0;
        puVar6[2] = 0;
        LOCK();
        puVar7 = *(undefined8 **)(param_1 + uVar8 * 2 + 2);
        bVar10 = puVar7 == (undefined8 *)0x0;
        if (bVar10) {
          *(undefined8 **)(param_1 + uVar8 * 2 + 2) = puVar6;
          puVar7 = (undefined8 *)0x0;
        }
        UNLOCK();
        if (!bVar10) {
          FUN_1467ab492(puVar6);
          puVar6 = puVar7;
        }
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1467ab504(param_2,iVar1);
      }
      *(undefined8 **)(*param_2 + (longlong)iVar1 * 8) = puVar6;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *param_1);
  }
  FUN_1400c1483(*param_2,(int)param_2[1]);
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      LOCK();
      bVar10 = **(longlong **)(lVar2 + lVar9) == 0;
      if (bVar10) {
        **(longlong **)(lVar2 + lVar9) = 1;
      }
      UNLOCK();
      if (!bVar10) {
        FUN_1400c0ca8();
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  puVar5 = DAT_14c82b988;
  if (DAT_14c82b988 != param_1) {
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar9 = 0;
      do {
        puVar3 = *(ulonglong **)(lVar2 + lVar9);
        LOCK();
        uVar8 = *puVar3;
        *puVar3 = *puVar3 - 1;
        UNLOCK();
        if ((char)(((uint)uVar8 & 2) >> 1) == '\0' && 3 < uVar8) {
          FUN_1400c0e08();
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar9);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
      FUN_1456cb4e0(param_2,0);
    }
  }
  return puVar5 == param_1;
}



// FUNCTION 1400c1483 FUN_1400c1483 body=563 status=ok
// SIG undefined FUN_1400c1483(void)

void FUN_1400c1483(longlong param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  float fVar16;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (1 < (int)param_2) {
    memset(local_338,0,0x2f0);
    local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
    local_348 = param_1;
    fVar16 = logf((float)(int)param_2);
    local_338[0] = (int)(longlong)(fVar16 + fVar16);
    plVar8 = &local_348;
    do {
      puVar2 = (ulonglong *)*plVar8;
      puVar9 = (ulonglong *)plVar8[1];
      iVar11 = (int)plVar8[2];
      iVar4 = (int)((ulonglong)((longlong)puVar9 - (longlong)puVar2) >> 3);
      puVar7 = puVar2;
      puVar13 = puVar9;
      if (iVar11 != 0) {
LAB_1400c151f:
        if (8 < (int)(iVar4 + 1U)) {
          uVar5 = iVar4 + 1U >> 1;
          uVar12 = puVar2[uVar5];
          puVar2[uVar5] = *puVar2;
          *puVar2 = uVar12;
          puVar6 = puVar9 + 1;
          puVar3 = puVar2;
          do {
            puVar1 = puVar3 + 1;
            puVar10 = puVar3 + 1;
            do {
              puVar3 = puVar10;
              puVar14 = puVar1;
              if (puVar9 < puVar3) break;
              puVar1 = puVar14 + 1;
              puVar10 = puVar3 + 1;
            } while (*puVar3 <= *puVar2);
            puVar1 = puVar6 + -2;
            do {
              puVar10 = puVar6;
              puVar15 = puVar1;
              puVar6 = puVar10 + -1;
              if (puVar6 <= puVar2) break;
              puVar1 = puVar15 + -1;
            } while (*puVar2 <= *puVar6);
            if (puVar6 < puVar3) goto LAB_1400c159d;
            uVar12 = *puVar3;
            *puVar3 = *puVar6;
            *puVar6 = uVar12;
          } while( true );
        }
        if (puVar2 < puVar9) {
          do {
            puVar7 = puVar2;
            if (puVar2 + 1 <= puVar9) {
              uVar12 = *puVar2;
              puVar13 = puVar2 + 1;
              do {
                if (uVar12 < *puVar13) {
                  puVar7 = puVar13;
                  uVar12 = *puVar13;
                }
                puVar13 = puVar13 + 1;
              } while (puVar13 <= puVar9);
            }
            uVar12 = *puVar7;
            *puVar7 = *puVar9;
            *puVar9 = uVar12;
            puVar9 = puVar9 + -1;
          } while (puVar2 < puVar9);
        }
        goto LAB_1400c1673;
      }
LAB_1400c16b0:
      FUN_1456cb4fa(puVar2);
LAB_1400c1673:
      plVar8 = plVar8 + -3;
    } while (&local_348 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1400c159d:
  uVar12 = *puVar2;
  *puVar2 = *puVar6;
  *puVar6 = uVar12;
  iVar11 = iVar11 + -1;
  puVar10 = puVar10 + -2;
  if ((longlong)puVar15 - (longlong)puVar7 < (longlong)puVar13 - (longlong)puVar14) {
    if (puVar3 < puVar9) {
      *plVar8 = (longlong)puVar3;
      plVar8[1] = (longlong)puVar9;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar14 = puVar2;
    if (puVar6 <= puVar2 + 1) goto LAB_1400c1673;
  }
  else {
    if (puVar2 + 1 < puVar6) {
      *plVar8 = (longlong)puVar2;
      plVar8[1] = (longlong)puVar10;
      *(int *)(plVar8 + 2) = iVar11;
      plVar8 = plVar8 + 3;
    }
    puVar2 = puVar3;
    puVar10 = puVar9;
    puVar15 = puVar9;
    if (puVar9 <= puVar3) goto LAB_1400c1673;
  }
  iVar4 = (int)((ulonglong)((longlong)puVar15 - (longlong)puVar14) >> 3);
  puVar7 = puVar14;
  puVar9 = puVar10;
  puVar13 = puVar15;
  if (iVar11 == 0) goto LAB_1400c16b0;
  goto LAB_1400c151f;
}



// FUNCTION 1400c16ce FUN_1400c16ce body=17 status=ok
// SIG undefined FUN_1400c16ce(void)

void FUN_1400c16ce(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001400c16dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x38))();
  return;
}



// FUNCTION 1400c16e4 FUN_1400c16e4 body=224 status=ok
// SIG undefined FUN_1400c16e4(void)

void * FUN_1400c16e4(void *param_1,undefined2 param_2,undefined1 param_3,undefined4 param_4)

{
  memset(param_1,0,0xc0);
  *(undefined2 *)((longlong)param_1 + 0xc0) = param_2;
  *(undefined1 *)((longlong)param_1 + 0xc2) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0x500000000;
  *(undefined8 *)((longlong)param_1 + 0x108) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0x500000000;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120) = 0;
  *(undefined8 *)((longlong)param_1 + 0x128) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  FUN_1400c1846((longlong)param_1 + 0x90,param_4,1);
  FUN_1400c1942((longlong)param_1 + 0xa0,param_4,1);
  FUN_1400c17c4((longlong)param_1 + 200,param_4,1);
  FUN_1400c17c4((longlong)param_1 + 0xf0,param_4,1);
  return param_1;
}



// FUNCTION 1400c17c4 FUN_1400c17c4 body=129 status=ok
// SIG undefined FUN_1400c17c4(void)

void FUN_1400c17c4(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x20) = param_2;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14682022a(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x18) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x20) = param_2, param_3 == '\x01')) {
      FUN_146db6778(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400c1846 FUN_1400c1846 body=165 status=ok
// SIG undefined FUN_1400c1846(void)

void FUN_1400c1846(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1400c18ec(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 6) = 0;
      puVar2 = puVar2 + 7;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_1471d8866(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_1471d88c2(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400c18ec FUN_1400c18ec body=85 status=ok
// SIG undefined FUN_1400c18ec(void)

void FUN_1400c18ec(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
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
    FUN_1400c1a26();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1400c1942 FUN_1400c1942 body=141 status=ok
// SIG undefined FUN_1400c1942(void)

void FUN_1400c1942(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400c19d0(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_1471d890c(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_1471d896c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1400c19d0 FUN_1400c19d0 body=85 status=ok
// SIG undefined FUN_1400c19d0(void)

void FUN_1400c19d0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
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
    FUN_1400c1be8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1400c1a26 FUN_1400c1a26 body=449 status=ok
// SIG undefined FUN_1400c1a26(void)

void FUN_1400c1a26(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x38);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400c1b40:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400c1b7d:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x38;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400c1a7b;
LAB_1400c1a70:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400c1a7b:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x491) goto code_r0x0001400c1aa7;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0xe + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400c1afd:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400c1b7d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400c1b40;
code_r0x0001400c1aa7:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400c1afd;
    }
  }
  goto LAB_1400c1a70;
}



// FUNCTION 1400c1be8 FUN_1400c1be8 body=450 status=ok
// SIG undefined FUN_1400c1be8(void)

void FUN_1400c1be8(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x10);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1400c1d03:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1400c1d40:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x10;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1400c1c3e;
LAB_1400c1c33:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1400c1c3e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xffb) goto code_r0x0001400c1c6a;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 4 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1400c1cc0:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1400c1d40;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1400c1d03;
code_r0x0001400c1c6a:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1400c1cc0;
    }
  }
  goto LAB_1400c1c33;
}



// FUNCTION 1400c1daa FUN_1400c1daa body=510 status=ok
// SIG undefined FUN_1400c1daa(void)

void FUN_1400c1daa(longlong *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined **local_1e0 [3];
  undefined4 local_1c8;
  longlong *local_188;
  longlong local_168;
  undefined4 local_154;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_e0;
  undefined1 local_40;
  undefined1 local_3f;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_1f8 = 0;
    uStack_1f0 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,local_1e0);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((param_1[8] != 0) && ((int)param_1[6] == 0)) {
    FUN_140de8068(local_1e0);
    local_1e0[0] = (undefined **)param_1[8];
    if (DAT_14c950c29 == '\x01') {
      if (local_1e0[0] == (undefined **)0x0) {
        local_1e0[0] = (undefined **)0x0;
      }
      else {
        FUN_1456cec3c();
        local_1e0[0] = (undefined **)param_1[8];
      }
    }
    local_1c8 = (undefined4)param_1[9];
    local_150 = (undefined4)param_1[10];
    local_e0 = *(undefined4 *)((longlong)param_1 + 0x54);
    local_154 = *(undefined4 *)((longlong)param_1 + 0x4c);
    local_40 = (undefined1)param_1[0xb];
    local_3f = *(undefined1 *)((longlong)param_1 + 0x59);
    iVar2 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
      FUN_14746757e(param_1 + 5,iVar2);
    }
    FUN_147467496((longlong)iVar2 * 0x1b8 + param_1[5],local_1e0);
    param_1[8] = 0;
    FUN_147451db2(local_1e0);
  }
  FUN_144869430(local_1e0);
  local_1e0[0] = &PTR_FUN_149e63350;
  local_150 = 0;
  local_148 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  (**(code **)(*param_1 + 0xd8))(param_1,local_1e0);
  uVar3 = local_150;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar1;
  local_1e0[0] = &PTR__purecall_149e35f70;
  if (local_188 != (longlong *)0x0) {
    if (*local_188 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_188);
  }
  if (local_168 != 0) {
    if (*(longlong *)(local_168 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_168);
  }
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  if ((local_28 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c1faa caseD_20 body=1328 status=ok
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
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  code *local_70;
  undefined1 local_68 [8];
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar2 = *(longlong **)(*param_2 + 8);
  lVar7 = *(longlong *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x20);
  local_88 = *(undefined8 *)(param_1 + 0x18);
  local_78 = lVar7;
  if ((*(uint *)(lVar7 + 8) >> 10 & 1) != 0) {
    (**(code **)(*plVar2 + 0x198))(plVar2,lVar7);
    if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(lVar7 + 0x110) != 0)) &&
       (0 < *(int *)(lVar7 + 0x58))) {
      (**(code **)(*plVar2 + 0x198))(plVar2);
    }
  }
  if (((*(byte *)(plVar2 + 5) & 5) == 0) && ((*(byte *)((longlong)plVar2 + 0x2b) & 2) == 0)) {
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))(*(longlong **)(*param_2 + 8),&local_88);
    bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    if ((bVar4 & 0x20) == 0) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&local_80);
      bVar4 = *(byte *)((longlong)plVar2 + 0x2a);
    }
    if (-1 < (char)bVar4) {
      (**(code **)(**(longlong **)(*param_2 + 8) + 0x150))(*(longlong **)(*param_2 + 8),&local_78);
      lVar7 = local_78;
    }
  }
  if (DAT_14c949118 == 0) {
    local_70 = FUN_140631fbe;
    lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar5;
    FUN_1446f470e(local_68,L"Class",1);
    local_b8 = &LAB_146891e90;
    local_c0 = (code *)&LAB_146273097;
    local_d0 = L"Engine";
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
    local_d8 = 0x20;
    local_e0 = 0x10000000;
    local_e8._0_4_ = 8;
    local_b0 = &local_70;
    FUN_14574b4b2(lVar5);
    DAT_14c949118 = lVar5;
    if (DAT_14c951858 == 0) {
      local_b0 = &local_50;
      local_50 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = (wchar_t *)0x400000000;
      local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
      local_e0 = 8;
      local_e8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar5 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_60 = (code *)&DAT_1427db2a2;
      DAT_14c948f88 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      local_98 = DAT_14c948f88;
      FUN_1446f470e(local_58,L"Struct",1);
      local_b0 = &local_60;
      local_b8 = &LAB_146891313;
      local_c0 = FUN_146272f63;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 8;
      local_e0 = 0x10000020;
      local_e8._0_4_ = 8;
      FUN_14574b4b2(local_98);
      DAT_14c948f88 = local_98;
      local_90 = DAT_14c927740;
      if (DAT_14c927740 == 0) {
        local_b0 = &local_50;
        local_50 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
        local_e0 = 8;
        local_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        local_98 = DAT_14c948f88;
      }
      DAT_14c948f88 = local_98;
      local_90 = DAT_14c927740;
      uVar6 = FUN_1400163b0();
      local_e8 = L"Struct";
      FUN_14574b446(uVar6,local_98,local_90,L"/Script/CoreUObject");
    }
    local_e8 = L"Class";
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
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c24dc FUN_1400c24dc body=958 status=ok
// SIG undefined FUN_1400c24dc(void)

void FUN_1400c24dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  short sVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *plStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((*(char *)(param_1 + 0x58) == '\x01') && (sVar3 = *(short *)(param_1 + 800), sVar3 != -1))
      && (*(longlong *)(param_1 + 0x318) != -1)) && (sVar3 != *(short *)(*param_2 + 0x5e8))) {
    sVar8 = sVar3 + 2;
    if ((short)(sVar3 + 1) != -1) {
      sVar8 = sVar3 + 1;
    }
    if (((sVar8 != *(short *)(*param_2 + 0x5e8)) || (sVar8 == -1)) || (DAT_14c872be0 == -1)) {
      iVar5 = *(int *)(param_1 + 0x314);
      FUN_14010165c(*(undefined8 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x310));
      *(undefined4 *)(param_1 + 0x310) = 0;
      if ((iVar5 < 0) && (*(int *)(param_1 + 0x314) != 0)) {
        FUN_140df8c06(param_1 + 0x308,0);
      }
      FUN_140101c22(param_1);
      FUN_140df8aa8(param_1 + 0x60);
      FUN_140df8aa8(param_1 + 0x1b0);
    }
  }
  lVar6 = *param_2;
  *(undefined2 *)(param_1 + 800) = *(undefined2 *)(lVar6 + 0x5e8);
  *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(lVar6 + 0x5e0);
  *(undefined2 *)(param_1 + 0x322) = *(undefined2 *)(lVar6 + 0x5ea);
  local_88 = param_2[1];
  local_80 = 0;
  plVar9 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_14a7be100;
  local_78 = plVar9 + 2;
  plVar9[2] = (longlong)&PTR_FUN_14a7be120;
  plVar9[3] = param_1;
  *(undefined4 *)(plVar9 + 4) = *(undefined4 *)((longlong)param_2 + 0x14);
  plVar9[5] = *param_2;
  uVar7 = DAT_14cacc368;
  plStack_70 = plVar9;
  if (plVar9 == (longlong *)0x0) {
    FUN_1447d2a40(&local_88,param_2,&local_78,DAT_14cacc368);
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    FUN_1447d2a40(&local_88,param_2,&local_78,uVar7);
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (*(char *)(param_1 + 0x59) == '\x01') {
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar6 = *param_2;
    local_98 = param_2[1];
    local_90 = 0;
    plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a7be160;
    local_78 = plVar9 + 2;
    plVar9[2] = (longlong)&PTR_FUN_14a7be1a0;
    plVar9[4] = (longlong)FUN_1433e4004;
    plVar9[6] = 0;
    plVar9[8] = (longlong)&PTR_LAB_14a7be180;
    plVar9[9] = param_1;
    *(undefined4 *)(plVar9 + 10) = uVar4;
    plVar9[0xb] = lVar6;
    uVar7 = DAT_14cacbe90;
    plStack_70 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      FUN_1447d2a40(&local_98,param_2,&local_78,DAT_14cacbe90);
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      FUN_1447d2a40(&local_98,param_2,&local_78,uVar7);
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    FUN_1447d2706(local_98 + 0x148,local_90);
  }
  plVar9 = *(longlong **)(param_1 + 0x20);
  if (plVar9 != (longlong *)0x0) {
    uStack_64 = *(undefined4 *)(param_1 + 0x28);
    local_78 = (longlong *)*param_2;
    plStack_70 = (longlong *)param_2[1];
    local_68 = (undefined4)param_2[2];
    uStack_60 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_58 = (undefined4)param_2[4];
    uStack_54 = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_50 = (undefined4)param_2[5];
    uStack_4c = *(undefined4 *)((longlong)param_2 + 0x2c);
    if ((plVar9[1] != 0) && ((*(byte *)(plVar9[1] + 0x24) & 7) != 0)) {
      FUN_144b1fcbe(&local_78,plVar9);
      FUN_144b1fd46(&local_78,*(undefined8 *)(param_1 + 0x20));
      FUN_144b1fe18(&local_78,*(undefined8 *)(param_1 + 0x20));
      plVar9 = *(longlong **)(param_1 + 0x20);
    }
    (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
  }
  *(float *)(param_1 + 0x300) = *(float *)(param_2 + 5) + *(float *)(param_1 + 0x300);
  FUN_1447d2706(local_88 + 0x148,local_80);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c289c FUN_1400c289c body=77 status=ok
// SIG undefined FUN_1400c289c(void)

void FUN_1400c289c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400c28ea();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_147103086();
      return;
    }
  }
  return;
}



// FUNCTION 1400c28ea FUN_1400c28ea body=271 status=ok
// SIG undefined FUN_1400c28ea(void)

void FUN_1400c28ea(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1400c29fa FUN_1400c29fa body=437 status=ok
// SIG undefined FUN_1400c29fa(void)

void FUN_1400c29fa(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  DWORD dwTlsIndex;
  DWORD DVar4;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = *(uint *)(param_1 + 1);
  if ((int)uVar5 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar5) {
      uVar6 = uVar5;
    }
  }
  else {
    uVar6 = uVar5 + (int)((ulonglong)((longlong)(int)uVar5 * 3) >> 3) + 0x10;
  }
  uVar7 = 0x7fffffff;
  if ((int)uVar5 <= (int)uVar6) {
    uVar7 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar7,1);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar4 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar4 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar4;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar8 = (ulonglong)(uVar7 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar5 = (uint)(uVar7 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar5 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (ulonglong)uVar7;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar5 + 8 + uVar7);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (ulonglong)uVar7 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(_Dst,local_58,(longlong)(int)param_2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c2bc0 FUN_1400c2bc0 body=230 status=ok
// SIG undefined FUN_1400c2bc0(void)

undefined8 FUN_1400c2bc0(longlong *param_1,uint *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  cVar1 = (**(code **)(*param_1 + 0x300))();
  if (cVar1 == '\0') {
    lVar2 = FUN_144837648(param_1,param_2,1);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x58) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001400c2c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x310))
                        (param_1,*(undefined8 *)(*(longlong *)(lVar2 + 0x58) + 8),lVar2,
                         *(code **)(*param_1 + 0x310));
      return uVar3;
    }
  }
  else {
    if ((int)param_1[0xb] == 1) {
      return *(undefined8 *)param_1[10];
    }
    if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
      plVar4 = param_1 + 0x13;
      if ((longlong *)param_1[0x14] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x14];
      }
      iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[0x15] - 1U & *param_2) * 4);
      if (iVar5 != -1) {
        while (lVar2 = param_1[0xc] + (longlong)iVar5 * 0x38,
              *(uint *)(param_1[0xc] + (longlong)iVar5 * 0x38) != *param_2) {
          iVar5 = *(int *)(lVar2 + 0x30);
          if (iVar5 == -1) {
            return 0;
          }
        }
        if (lVar2 == 0) {
          return 0;
        }
        if ((byte *)(lVar2 + 0x28) == (byte *)0x0) {
          return 0;
        }
        return *(undefined8 *)(param_1[10] + (ulonglong)*(byte *)(lVar2 + 0x28) * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1400c2ca6 FUN_1400c2ca6 body=147 status=ok
// SIG undefined FUN_1400c2ca6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1400c2ca6(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x358) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f8c0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f8d8) {
      FUN_144b3d300(&DAT_14cb7f8d8);
      if (DAT_14cb7f8d8 == -1) {
        _DAT_14cb7f8c0 = 0;
        uRam000000014cb7f8c8 = 0;
        _DAT_14cb7f8d0 = 0;
        _Init_thread_footer(&DAT_14cb7f8d8);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)((uint)param_1 * 0x18) + *(longlong *)(DAT_14cb7f870 + 0x350))
    ;
  }
  return puVar1;
}



// FUNCTION 1400c2d3a FUN_1400c2d3a body=235 status=ok
// SIG undefined FUN_1400c2d3a(void)

undefined8 FUN_1400c2d3a(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((int)uVar1 < 0) {
    return 0;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return 0;
  }
  puVar3 = (undefined8 *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x84)) {
    return 0;
  }
  if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
    return 0;
  }
  if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
    uVar4 = *puVar3;
  }
  else {
    uVar4 = 0;
  }
  cVar2 = FUN_1447d701e(uVar4,param_2);
  if (cVar2 != '\0') {
    return 1;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1400c2e02;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == *(int *)(param_1 + 0x84) &&
        ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_1400c2e02;
    }
  }
  uVar4 = 0;
LAB_1400c2e02:
  uVar4 = FUN_1400c2e26(uVar4,param_2);
  return uVar4;
}



// FUNCTION 1400c2e26 FUN_1400c2e26 body=219 status=ok
// SIG undefined FUN_1400c2e26(void)

undefined8 FUN_1400c2e26(longlong *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (DAT_14cb91d78 != 0) {
    SRWLock = (PSRWLOCK)(param_1 + 7);
    AcquireSRWLockShared(SRWLock);
    lVar1 = param_1[6];
    ReleaseSRWLockShared(SRWLock);
    if (0 < (longlong)(int)lVar1) {
      lVar5 = 0;
      uVar3 = 0;
      do {
        AcquireSRWLockShared(SRWLock);
        lVar2 = *(longlong *)(param_1[5] + lVar5 * 8);
        ReleaseSRWLockShared(SRWLock);
        if ((((lVar2 != 0) && (*(int *)(lVar2 + 0xc) == 1)) &&
            (lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1,lVar2 + 0x10), lVar2 != 0)) &&
           ((*param_2 != 0 && ((longlong)*(int *)(lVar2 + 0x70) != 0)))) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar4) == *param_2) {
              uVar3 = 1;
              break;
            }
            lVar4 = lVar4 + 8;
          } while ((longlong)*(int *)(lVar2 + 0x70) * 8 != lVar4);
        }
        lVar5 = lVar5 + 1;
        if (lVar5 == (int)lVar1) {
          return uVar3;
        }
      } while( true );
    }
  }
  return 0;
}



// FUNCTION 1400c2f02 FUN_1400c2f02 body=211 status=ok
// SIG undefined FUN_1400c2f02(void)

undefined8 FUN_1400c2f02(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x318);
  if ((longlong)iVar3 == 0) {
    uVar8 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x310);
    lVar9 = 0;
    uVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar9);
      if (lVar5 != 0) {
        local_48 = *param_2;
        local_40 = param_2[1];
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        cVar7 = FUN_1400c2fd6(lVar5,&local_48);
        if (cVar7 != '\0') {
          uVar8 = 1;
          break;
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar9);
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c2fd6 FUN_1400c2fd6 body=164 status=ok
// SIG undefined FUN_1400c2fd6(void)

ulonglong FUN_1400c2fd6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  undefined1 local_22;
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1400c307c(param_1,&local_22,&local_38);
  if (local_21 == '\x01') {
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0xa1));
  }
  else {
    uVar4 = 0;
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c307c FUN_1400c307c body=210 status=ok
// SIG undefined FUN_1400c307c(void)

undefined1 * FUN_1400c307c(longlong param_1,undefined1 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_3 == 0) {
    param_2[1] = 0;
  }
  else {
    FUN_1400c3152(param_1,&local_38);
    lVar3 = *param_3;
    if (local_38 == lVar3) {
      *param_2 = *(undefined1 *)(param_1 + 0xa0);
    }
    param_2[1] = local_38 == lVar3;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1400c3152 FUN_1400c3152 body=125 status=ok
// SIG undefined FUN_1400c3152(void)

undefined8 * FUN_1400c3152(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  if (0 < (longlong)*(int *)(param_1 + 0x78)) {
    lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0x10;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + -8 + lVar6);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + -0x10 + lVar6);
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      *param_2 = 0;
      param_2[1] = plVar2;
      iVar5 = (int)plVar2[1];
      do {
        if (iVar5 == 0) {
          param_2[1] = 0;
          break;
        }
        LOCK();
        iVar4 = (int)plVar2[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(plVar2 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (param_2[1] == 0) {
        return param_2;
      }
      *param_2 = uVar3;
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1400c31d0 FUN_1400c31d0 body=176 status=ok
// SIG undefined FUN_1400c31d0(void)

void FUN_1400c31d0(longlong param_1)

{
  if (*(int *)(param_1 + 0x3f4) < 0) {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
    FUN_140210e5a(param_1 + 0x378,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x3f0) = 0;
  }
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  if (*(int *)(param_1 + 0x5b4) < 0) {
    *(undefined4 *)(param_1 + 0x5b0) = 0;
    FUN_1404b2356(param_1 + 0x3f8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x634) < 0) {
    *(undefined4 *)(param_1 + 0x630) = 0;
    FUN_146d72a40(param_1 + 0x5b8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x630) = 0;
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(byte *)(param_1 + 0x374) = *(byte *)(param_1 + 0x374) & 0xcf;
  return;
}



// FUNCTION 1400c3280 FUN_1400c3280 body=118 status=ok
// SIG undefined FUN_1400c3280(void)

bool FUN_1400c3280(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x14c);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar1 != iVar2) {
    *(int *)(param_2 + 0x14c) = iVar2;
    *(uint *)(param_2 + 0x150) = *(uint *)(param_2 + 0x150) | 0x7fffffff;
    *(undefined4 *)(param_2 + 0x154) = 0xffffffff;
    iVar3 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar3 + 1U) {
      FUN_140c29ed8((longlong *)(param_1 + 0x10),iVar3);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar3 * 8) = param_2;
    FUN_1400c32f6(param_2);
  }
  return iVar1 != iVar2;
}



// FUNCTION 1400c32f6 FUN_1400c32f6 body=131 status=ok
// SIG undefined FUN_1400c32f6(void)

void FUN_1400c32f6(longlong param_1)

{
  *(ushort *)(param_1 + 0x374) = ((ushort)*(undefined4 *)(param_1 + 0x374) & 0xfffc) + 1;
  FUN_1447d93e2();
  FUN_1400c337a(param_1);
  if ((*(uint *)(param_1 + 0x374) >> 0xb & 1) != 0) {
    *(ushort *)(param_1 + 0x374) = (ushort)*(uint *)(param_1 + 0x374) & 0xefff;
    FUN_1400c337a(param_1);
    *(ushort *)(param_1 + 0x374) =
         ((ushort)*(undefined4 *)(param_1 + 0x374) & 0xf6ff) +
         (*(byte *)(param_1 + 0x376) & 0x20) * 8;
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}



// FUNCTION 1400c337a FUN_1400c337a body=52 status=ok
// SIG undefined FUN_1400c337a(void)

void FUN_1400c337a(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x375) & 0x10) == 0) {
    FUN_1400c5e04(*(undefined8 *)(param_1 + 8),param_1);
    FUN_1400c3c78(param_1);
    *(byte *)(param_1 + 0x375) = *(byte *)(param_1 + 0x375) | 0x10;
  }
  return;
}



// FUNCTION 1400c33ae FUN_1400c33ae body=376 status=ok
// SIG undefined FUN_1400c33ae(void)

void FUN_1400c33ae(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar4;
  
  dVar3 = param_2[5];
  dVar1 = param_2[6];
  dVar2 = param_3[6];
  dVar4 = param_3[5];
  *(float *)(param_1 + 0x234) = (float)(param_2[4] - param_3[4]);
  *(float *)(param_1 + 0x238) = (float)(dVar3 - dVar4);
  *(float *)(param_1 + 0x23c) = (float)(dVar1 - dVar2);
  dVar9 = param_2[2] * -1.0;
  dVar10 = param_2[3] * 1.0;
  dVar5 = *param_3;
  dVar6 = param_3[1];
  dVar7 = param_3[2];
  dVar8 = param_3[3];
  dVar1 = param_2[1];
  dVar2 = param_2[1];
  dVar3 = *param_2;
  dVar4 = *param_2;
  *(float *)(param_1 + 0x240) =
       (float)(dVar6 * dVar9 * -1.0 + ((dVar5 * dVar10 - dVar3 * dVar8 * 1.0) - dVar7 * dVar1));
  *(float *)(param_1 + 0x244) =
       (float)(dVar5 * dVar9 * 1.0 + ((dVar6 * dVar10 - dVar4 * dVar7 * -1.0) - dVar8 * dVar2));
  *(float *)(param_1 + 0x248) =
       (float)(dVar8 * dVar9 * 1.0 + dVar1 * dVar5 + (dVar10 * dVar7 - dVar3 * dVar6 * 1.0));
  *(float *)(param_1 + 0x24c) =
       (float)(dVar7 * dVar9 * -1.0 + dVar2 * dVar6 + (dVar10 * dVar8 - dVar4 * dVar5 * -1.0));
  *(ushort *)(param_1 + 0x374) =
       (ushort)*(undefined4 *)(param_1 + 0x374) & 0xffef | *(byte *)(param_1 + 0x376) & 0x10;
  return;
}



// FUNCTION 1400c3526 FUN_1400c3526 body=247 status=ok
// SIG undefined FUN_1400c3526(void)

void FUN_1400c3526(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x60);
  dVar9 = *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x58);
  dVar10 = *(double *)(param_1 + 0x120) * *(double *)(param_1 + 0x50);
  dVar1 = *(double *)(param_1 + 0x60) * *(double *)(param_1 + 0x118);
  dVar8 = *(double *)(param_1 + 0x58) * *(double *)(param_1 + 0x110);
  dVar7 = *(double *)(param_1 + 0x50) * *(double *)(param_1 + 0x108);
  dVar4 = dVar1;
  if (dVar6 <= dVar1) {
    dVar4 = dVar6;
  }
  dVar2 = dVar8;
  if (dVar9 <= dVar8) {
    dVar2 = dVar9;
  }
  dVar3 = dVar7;
  if (dVar10 <= dVar7) {
    dVar3 = dVar10;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  if (dVar8 <= dVar9) {
    dVar8 = dVar9;
  }
  if (dVar7 <= dVar10) {
    dVar7 = dVar10;
  }
  *(double *)(param_1 + 0x138) = dVar3;
  *(double *)(param_1 + 0x140) = dVar2;
  *(double *)(param_1 + 0x148) = dVar4;
  *(double *)(param_1 + 0x150) = dVar7;
  *(double *)(param_1 + 0x158) = dVar8;
  *(double *)(param_1 + 0x160) = dVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x148);
  uVar5 = *(undefined8 *)(param_1 + 0x140);
  *param_2 = *(undefined8 *)(param_1 + 0x138);
  param_2[1] = uVar5;
  param_2[5] = *(undefined8 *)(param_1 + 0x160);
  uVar5 = *(undefined8 *)(param_1 + 0x158);
  param_2[3] = *(undefined8 *)(param_1 + 0x150);
  param_2[4] = uVar5;
  return;
}



// FUNCTION 1400c361d FUN_1400c361d body=1546 status=ok
// SIG undefined FUN_1400c361d(void)

ulonglong FUN_1400c361d(undefined8 ***param_1,longlong param_2,double ***param_3)

{
  undefined8 **ppuVar1;
  char cVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined1 *puVar5;
  bool bVar6;
  double dVar7;
  undefined8 ***pppuVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_168 [32];
  undefined8 ***local_148;
  double **local_140;
  double **local_138;
  double local_130;
  double local_128;
  undefined8 ***local_120;
  undefined8 **local_110;
  double local_108;
  double local_100;
  double **local_f8;
  double **local_f0;
  undefined8 ***local_e8;
  double *local_e0;
  double *local_d8;
  undefined8 ***local_d0;
  double *local_c8;
  undefined8 ***local_c0;
  double **local_b8;
  double **local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [72];
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar9 = ((double)param_1[0x32] - *(double *)(param_2 + 0x20)) -
          ((double)param_1[0x3e] - (double)param_3[4]);
  dVar10 = ((double)param_1[0x33] - *(double *)(param_2 + 0x28)) -
           ((double)param_1[0x3f] - (double)param_3[5]);
  dVar11 = ((double)param_1[0x34] - *(double *)(param_2 + 0x30)) -
           ((double)param_1[0x40] - (double)param_3[6]);
  dVar7 = dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10;
  if (dVar7 < 9.999999747378752e-05) {
    *(undefined4 *)(param_1 + 200) = 0x7f7fffff;
LAB_1400c380b:
    puVar5 = (undefined1 *)0x0;
    goto switchD_1400c3736_caseD_12;
  }
  ppuVar4 = param_1[0x1e];
  ppuVar1 = param_1[0x1f];
  pppuVar8 = (undefined8 ***)SQRT(dVar7);
  local_100 = dVar11 / (double)pppuVar8;
  local_108 = dVar10 / (double)pppuVar8;
  local_110 = (undefined8 **)(dVar9 / (double)pppuVar8);
  *(undefined4 *)(param_1 + 200) = 0x7f7fffff;
  cVar2 = DAT_14c75f089;
  if ((double)pppuVar8 <= 0.0) goto LAB_1400c380b;
  puVar5 = (undefined1 *)0x0;
  switch(*(undefined1 *)((longlong)param_1 + 0x377)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x15:
    local_d0 = &local_f8;
    local_f8 = (double **)0x47efffffe0000000;
    local_b8 = (double **)(param_1 + 0x3a);
    local_a0 = (double)*(float *)((longlong)param_1 + 0x65c);
    local_a8 = (double)*(float *)(param_1 + 0xcb);
    local_d8 = &local_a0;
    local_e0 = &local_a8;
    local_e8 = &local_b0;
    local_f0 = (double **)&local_110;
    local_148 = &local_f0;
    local_c8 = (double *)ppuVar1;
    local_c0 = param_3;
    local_b0 = (double **)pppuVar8;
    FUN_1403df2df(local_98,ppuVar4,param_2,param_1 + 0x2e);
    if ((local_50 != 1.79769313486232e+308) || (pppuVar8 = (undefined8 ***)local_f8, NAN(local_50)))
    {
      FUN_140bd3cd0(param_1,local_98);
      pppuVar8 = (undefined8 ***)local_f8;
    }
    goto LAB_1400c3ac0;
  case 5:
    ppuVar3 = (undefined8 **)0x0;
    if (*(char *)((longlong)ppuVar4 + 0x1c) == '\0') {
      ppuVar3 = ppuVar4;
    }
    if (ppuVar1 == (undefined8 **)0x0 || *(char *)((longlong)ppuVar1 + 0x1c) != -0x75) {
      puVar5 = &DAT_00000001;
      if (*(char *)((longlong)ppuVar1 + 0x1c) == '\v' && ppuVar1 != (undefined8 **)0x0) {
        local_148 = &local_110;
        local_140 = (double **)pppuVar8;
        local_138 = (double **)param_1;
        FUN_146d3b4bc(pppuVar8,param_2,ppuVar1,param_3);
      }
      goto switchD_1400c3736_caseD_12;
    }
    local_148 = &local_110;
    local_140 = (double **)pppuVar8;
    local_138 = (double **)param_1;
    FUN_146d3b3b3(ppuVar3,param_2,ppuVar1,param_3);
    goto LAB_1400c3ac8;
  case 6:
    bVar6 = *(char *)((longlong)ppuVar4 + 0x1c) == '\0';
    goto LAB_1400c3a04;
  case 0xb:
    ppuVar3 = (undefined8 **)0x0;
    if (*(char *)((longlong)ppuVar4 + 0x1c) == '\x03') {
      ppuVar3 = ppuVar4;
    }
    if (ppuVar1 == (undefined8 **)0x0 || *(char *)((longlong)ppuVar1 + 0x1c) != -0x75) {
      puVar5 = &DAT_00000001;
      if (*(char *)((longlong)ppuVar1 + 0x1c) != '\v' || ppuVar1 == (undefined8 **)0x0)
      goto switchD_1400c3736_caseD_12;
      local_120 = &local_f0;
      local_f0 = (double **)0x47efffffe0000000;
      local_128 = (double)*(float *)((longlong)param_1 + 0x65c);
      local_130 = (double)*(float *)(param_1 + 0xcb);
      local_140 = (double **)&local_110;
      local_148 = param_3;
      local_138 = (double **)pppuVar8;
      FUN_14299b0dd(local_98,ppuVar3);
LAB_1400c39ce:
      puVar5 = &DAT_00000001;
      if ((cVar2 != '\0') || (local_50 <= (double)*(float *)((longlong)param_1 + 300))) {
        if ((local_50 != 1.79769313486232e+308) || (NAN(local_50))) {
          FUN_140bd3cd0(param_1,local_98);
        }
      }
      else {
        *(byte *)((longlong)param_1 + 0x374) = *(byte *)((longlong)param_1 + 0x374) | 2;
      }
      *(float *)(param_1 + 200) = (float)(double)local_f0;
      goto switchD_1400c3736_caseD_12;
    }
    local_120 = &local_f0;
    local_f0 = (double **)0x47efffffe0000000;
    local_128 = (double)*(float *)((longlong)param_1 + 0x65c);
    local_130 = (double)*(float *)(param_1 + 0xcb);
    local_140 = (double **)&local_110;
    local_148 = param_3;
    local_138 = (double **)pppuVar8;
    FUN_14299affc(local_98,ppuVar3);
    break;
  case 0xc:
    bVar6 = *(char *)((longlong)ppuVar4 + 0x1c) == '\x03';
LAB_1400c3a04:
    if (!bVar6) {
      ppuVar4 = (undefined8 **)0x0;
    }
LAB_1400c3a08:
    ppuVar3 = (undefined8 **)0x0;
    if (*(char *)((longlong)ppuVar1 + 0x1c) == '\f') {
      ppuVar3 = ppuVar1;
    }
    local_120 = &local_f0;
    local_f0 = (double **)0x47efffffe0000000;
    local_128 = (double)*(float *)((longlong)param_1 + 0x65c);
    local_130 = (double)*(float *)(param_1 + 0xcb);
    local_140 = (double **)&local_110;
    local_148 = param_3;
    local_138 = (double **)pppuVar8;
    FUN_1408cde4b(local_98,ppuVar4,param_2,ppuVar3);
    break;
  case 0xf:
  case 0x13:
    if (ppuVar1 == (undefined8 **)0x0 || *(char *)((longlong)ppuVar1 + 0x1c) != -0x75) {
      puVar5 = &DAT_00000001;
      if (*(char *)((longlong)ppuVar1 + 0x1c) != '\v' || ppuVar1 == (undefined8 **)0x0)
      goto switchD_1400c3736_caseD_12;
      local_120 = &local_f0;
      local_f0 = (double **)0x47efffffe0000000;
      local_128 = (double)*(float *)((longlong)param_1 + 0x65c);
      local_130 = (double)*(float *)(param_1 + 0xcb);
      local_140 = (double **)&local_110;
      local_148 = param_3;
      local_138 = (double **)pppuVar8;
      FUN_14299b29f(local_98);
      goto LAB_1400c39ce;
    }
    local_120 = &local_f0;
    local_f0 = (double **)0x47efffffe0000000;
    local_128 = (double)*(float *)((longlong)param_1 + 0x65c);
    local_130 = (double)*(float *)(param_1 + 0xcb);
    local_140 = (double **)&local_110;
    local_148 = param_3;
    local_138 = (double **)pppuVar8;
    FUN_14299b1be(local_98);
    break;
  case 0x10:
  case 0x14:
    goto LAB_1400c3a08;
  default:
    goto switchD_1400c3736_caseD_12;
  }
  pppuVar8 = (undefined8 ***)local_f0;
  if ((cVar2 != '\0') || (local_50 <= (double)*(float *)((longlong)param_1 + 300))) {
    if ((local_50 != 1.79769313486232e+308) || (NAN(local_50))) {
      FUN_140bd3cd0(param_1,local_98);
      pppuVar8 = (undefined8 ***)local_f0;
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x374) = *(byte *)((longlong)param_1 + 0x374) | 2;
  }
LAB_1400c3ac0:
  puVar5 = local_98;
  *(float *)(param_1 + 200) = (float)(double)pppuVar8;
LAB_1400c3ac8:
  puVar5 = (undefined1 *)CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
switchD_1400c3736_caseD_12:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return (ulonglong)puVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c3c28 FUN_1400c3c28 body=80 status=ok
// SIG undefined FUN_1400c3c28(void)

undefined8 FUN_1400c3c28(longlong param_1,float param_2,longlong param_3)

{
  if ((*(longlong *)(param_1 + 0x10) == 0) &&
     (FUN_1400c4eaa(param_1,(double)param_2,param_3), *(longlong *)(param_1 + 0x10) == 0)) {
    return 0;
  }
  FUN_1400c3280(*(undefined8 *)(param_3 + 8));
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(longlong *)(param_3 + 8) + 8);
  return 1;
}



// FUNCTION 1400c3c78 FUN_1400c3c78 body=242 status=ok
// SIG undefined FUN_1400c3c78(void)

void FUN_1400c3c78(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  
  if (((*(byte *)(param_1 + 0x375) & 0x40) == 0) || (DAT_14c75f0c4 != '\x01')) {
    *(undefined1 **)(param_1 + 0x34c) = &DAT_3f8000003f800000;
    *(undefined1 **)(param_1 + 0x354) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x370) = 0x3f800000;
    fVar4 = DAT_14c75f0c0;
    if (DAT_14c75f0c0 < 0.0) {
      return;
    }
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    bVar2 = 0;
    if ((plVar1 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar1 + 0xc))) {
      bVar2 = (*(byte *)(*(longlong *)(*plVar1 + 0x2c0) + 8 + (longlong)(int)plVar1[1] * 0x10) & 4)
              >> 2;
    }
    plVar1 = *(longlong **)(param_1 + 0xe8);
    bVar3 = 0;
    if ((plVar1 != (longlong *)0x0) && (bVar3 = 0, 1 < *(byte *)((longlong)plVar1 + 0xc))) {
      bVar3 = (*(byte *)(*(longlong *)(*plVar1 + 0x2c0) + 8 + (longlong)(int)plVar1[1] * 0x10) & 4)
              >> 2;
    }
    if ((bVar3 == 0) && (bVar2 == 1)) {
      *(undefined4 *)(param_1 + 0x350) = 0;
      *(undefined4 *)(param_1 + 0x358) = 0;
    }
    fVar4 = DAT_14c75f0c8;
    if (bVar2 == 0 && bVar3 == 1) {
      *(undefined4 *)(param_1 + 0x34c) = 0;
      *(undefined4 *)(param_1 + 0x354) = 0;
      fVar4 = DAT_14c75f0c8;
    }
  }
  *(float *)(param_1 + 0x370) = fVar4;
  return;
}



// FUNCTION 1400c3d6a FUN_1400c3d6a body=807 status=ok
// SIG undefined FUN_1400c3d6a(void)

bool FUN_1400c3d6a(longlong *param_1,double *param_2,longlong *param_3,double *param_4,
                  double *param_5,double *param_6)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [32];
  double *local_68;
  double *local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((DAT_14c992f08 < 1) ||
      (param_3 == (longlong *)0x0 || *(byte *)((longlong)param_3 + 0xc) == 0)) ||
     ((1 < *(byte *)((longlong)param_3 + 0xc) &&
      (*(char *)(*(longlong *)(*param_3 + 0x2c0) + 0xb + (longlong)(int)param_3[1] * 0x10) == '\x03'
      )))) {
    bVar3 = param_1 == (longlong *)0x0 || *(byte *)((longlong)param_1 + 0xc) < 2;
    if (bVar3) {
      bVar5 = false;
      cVar4 = '\0';
      if ((param_3 == (longlong *)0x0) || (*(byte *)((longlong)param_3 + 0xc) < 2))
      goto LAB_1400c3ed4;
LAB_1400c3fd3:
      lVar11 = *param_3;
      lVar8 = (longlong)(int)param_3[1];
      if ((cVar4 == '\0') &&
         ((*(ushort *)(*(longlong *)(lVar11 + 0x2c0) + 8 + lVar8 * 0x10) & 2) == 0))
      goto LAB_1400c3ed2;
      cVar4 = *(char *)(*(longlong *)(lVar11 + 0x2c0) + 0xb + lVar8 * 0x10);
      if ((cVar4 != '\x04') && (cVar4 != '\x01')) goto LAB_1400c3dde;
      plVar6 = (longlong *)(lVar11 + 0x548);
    }
    else {
      uVar1 = *(ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + (longlong)(int)param_1[1] * 0x10);
      if ((param_3 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_3 + 0xc))) {
        cVar4 = (char)((uVar1 & 2) >> 1);
        goto LAB_1400c3fd3;
      }
      if ((uVar1 & 2) == 0) goto LAB_1400c3ed2;
      lVar11 = *param_3;
      lVar8 = (longlong)(int)param_3[1];
LAB_1400c3dde:
      plVar6 = (longlong *)(lVar11 + 0x48);
    }
    lVar2 = *plVar6;
    lVar9 = lVar8 * 0x10;
    local_20 = (double)*(float *)(lVar2 + 0xc + lVar9);
    local_28 = (double)*(float *)(lVar2 + 8 + lVar9);
    local_30 = (double)*(float *)(lVar2 + 4 + lVar9);
    local_38 = (double)*(float *)(lVar2 + lVar9);
    lVar2 = *param_1;
    lVar9 = (longlong)(int)param_1[1];
    if (bVar3) {
LAB_1400c3e58:
      lVar7 = 0x48;
    }
    else {
      cVar4 = *(char *)(*(longlong *)(lVar2 + 0x2c0) + 0xb + lVar9 * 0x10);
      lVar7 = 0x548;
      if ((cVar4 != '\x01') && (cVar4 != '\x04')) goto LAB_1400c3e58;
    }
    lVar7 = *(longlong *)(lVar2 + lVar7);
    lVar10 = lVar9 * 0x10;
    local_40 = (double)*(float *)(lVar7 + 0xc + lVar10);
    local_48 = (double)*(float *)(lVar7 + 8 + lVar10);
    local_50 = (double)*(float *)(lVar7 + 4 + lVar10);
    local_58 = (double)*(float *)(lVar7 + lVar10);
    local_60 = &local_38;
    local_68 = param_4;
    cVar4 = FUN_1400c4092(lVar9 * 0x18 + *(longlong *)(lVar2 + 0x128),param_2,&local_58,
                          lVar8 * 0x18 + *(longlong *)(lVar11 + 0x128));
    if (cVar4 != '\0') {
      dVar12 = param_2[2] - param_4[2];
      dVar13 = param_2[1] - param_4[1];
      dVar14 = *param_2 - *param_4;
      dVar15 = dVar12 * dVar12 + dVar14 * dVar14 + dVar13 * dVar13;
      if (dVar15 < 9.999999747378752e-05) {
        dVar13 = 0.0;
        dVar14 = 1.0;
        dVar12 = 0.0;
        dVar15 = 0.0;
      }
      else {
        dVar15 = SQRT(dVar15);
        dVar12 = dVar12 / dVar15;
        dVar13 = dVar13 / dVar15;
        dVar14 = dVar14 / dVar15;
      }
      *param_5 = dVar14;
      param_5[1] = dVar13;
      param_5[2] = dVar12;
      *param_6 = dVar15;
      bVar5 = ABS((float)(param_5[2] * param_5[2] + *param_5 * *param_5 + param_5[1] * param_5[1]) +
                  -1.0) <= 0.0001 && 9.99999993922529e-09 <= dVar15;
      goto LAB_1400c3ed4;
    }
  }
LAB_1400c3ed2:
  bVar5 = false;
LAB_1400c3ed4:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}



// FUNCTION 1400c4092 FUN_1400c4092 body=727 status=ok
// SIG undefined FUN_1400c4092(void)

void FUN_1400c4092(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

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
  double dVar11;
  double dVar12;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined1 local_b8 [24];
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_5[2] - param_2[2];
  local_c8 = param_5[1] - param_2[1];
  local_d0 = *param_5 - *param_2;
  dVar8 = *param_4;
  dVar7 = param_4[1];
  dVar1 = param_4[2];
  dVar2 = param_6[2];
  dVar3 = *param_6;
  dVar4 = param_6[1];
  dVar11 = dVar7 * dVar2 - dVar4 * dVar1;
  dVar11 = dVar11 + dVar11;
  dVar5 = param_6[3];
  dVar9 = dVar8 * dVar4 - dVar3 * dVar7;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar1 * dVar3 - dVar2 * dVar8;
  dVar10 = dVar10 + dVar10;
  dVar12 = (dVar4 * dVar11 - dVar3 * dVar10) + dVar5 * dVar9 + dVar1;
  dVar6 = (dVar3 * dVar9 - dVar11 * dVar2) + dVar5 * dVar10 + dVar7;
  dVar10 = (dVar10 * dVar2 - dVar9 * dVar4) + dVar11 * dVar5 + dVar8;
  dVar8 = param_3[2];
  dVar7 = *param_3;
  dVar1 = param_3[1];
  dVar4 = dVar1 * dVar12 - dVar6 * dVar8;
  dVar4 = dVar4 + dVar4;
  dVar2 = param_3[3];
  dVar5 = dVar7 * dVar6 - dVar10 * dVar1;
  dVar5 = dVar5 + dVar5;
  dVar3 = dVar8 * dVar10 - dVar12 * dVar7;
  dVar3 = dVar3 + dVar3;
  dVar9 = ABS((dVar7 * dVar3 - dVar4 * dVar1) + dVar2 * dVar5 + dVar12);
  dVar7 = ABS((dVar8 * dVar4 - dVar5 * dVar7) + dVar2 * dVar3 + dVar6);
  dVar8 = ABS((dVar1 * dVar5 - dVar3 * dVar8) + dVar2 * dVar4 + dVar10);
  local_d8 = param_1[2];
  if (dVar9 <= param_1[2]) {
    local_d8 = dVar9;
  }
  local_e0 = param_1[1];
  if (dVar7 <= param_1[1]) {
    local_e0 = dVar7;
  }
  local_e8 = *param_1;
  if (dVar8 <= *param_1) {
    local_e8 = dVar8;
  }
  local_f0 = local_b8;
  local_f8 = local_a0;
  FUN_1400c436a(&local_e8,&local_d0,local_e8,local_88);
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c436a FUN_1400c436a body=481 status=ok
// SIG undefined FUN_1400c436a(void)

bool FUN_1400c436a(double *param_1,double *param_2,double *param_3,undefined1 (*param_4) [16],
                  double *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  fVar7 = DAT_14c75eff0;
  if (DAT_14c75eff0 < 0.0) {
    bVar8 = false;
  }
  else if ((DAT_14c75eff0 != 0.0) || (NAN(DAT_14c75eff0))) {
    dVar10 = *param_2;
    dVar13 = param_2[1];
    dVar1 = param_2[2];
    dVar9 = param_3[2];
    dVar11 = *param_3;
    dVar2 = param_3[1];
    dVar12 = dVar13 * dVar9 - dVar2 * dVar1;
    dVar12 = dVar12 + dVar12;
    dVar3 = param_3[3];
    dVar6 = dVar10 * dVar2 - dVar11 * dVar13;
    dVar6 = dVar6 + dVar6;
    dVar5 = dVar1 * dVar11 - dVar9 * dVar10;
    dVar5 = dVar5 + dVar5;
    dVar13 = ABS((dVar11 * dVar6 - dVar12 * dVar9) + dVar3 * dVar5 + dVar13);
    auVar4._8_4_ = SUB84(dVar13,0);
    auVar4._0_8_ = ABS((dVar5 * dVar9 - dVar6 * dVar2) + dVar12 * dVar3 + dVar10);
    auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *param_4 = auVar4;
    *(double *)param_4[1] = ABS((dVar2 * dVar12 - dVar11 * dVar5) + dVar3 * dVar6 + dVar1);
    dVar9 = (double)fVar7;
    dVar10 = param_1[2];
    dVar13 = param_1[1];
    dVar1 = *param_1;
    *param_5 = dVar9 * dVar1;
    param_5[1] = dVar13 * dVar9;
    param_5[2] = dVar10 * dVar9;
    dVar11 = *(double *)param_4[1] - dVar10 * dVar9;
    dVar13 = *(double *)(*param_4 + 8) - dVar13 * dVar9;
    dVar10 = *(double *)*param_4 - dVar9 * dVar1;
    *param_6 = dVar10;
    param_6[1] = dVar13;
    param_6[2] = dVar11;
    if (dVar10 <= dVar13) {
      dVar10 = dVar13;
    }
    if (dVar10 <= dVar11) {
      dVar10 = dVar11;
    }
    bVar8 = 0.0 < dVar10;
  }
  else {
    bVar8 = true;
  }
  return bVar8;
}



// FUNCTION 1400c454c FUN_1400c454c body=1920 status=ok
// SIG undefined FUN_1400c454c(void)

undefined8 FUN_1400c454c(longlong param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
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
  undefined *puVar20;
  undefined8 uVar21;
  int iVar22;
  ushort uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dStack_e0;
  double dStack_c0;
  double dVar4;
  
  iVar22 = *(int *)(param_1 + 0x5b0);
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  uVar6 = *(ushort *)(param_1 + 0x374);
  uVar23 = uVar6 & 0xffdf;
  *(ushort *)(param_1 + 0x374) = uVar23;
  if ((uVar6 & 0x10) == 0) {
    return 0;
  }
  lVar24 = (ulonglong)(0 < iVar22) * 8;
  dVar11 = *(double *)(&DAT_149f4e980 + lVar24) * (double)*(float *)(param_1 + 0x168);
  if (dVar11 <= 0.0) {
    return 0;
  }
  dVar31 = *(double *)(param_1 + 400) - *(double *)(param_1 + 0x1f0);
  dVar33 = *(double *)(param_1 + 0x198) - *(double *)(param_1 + 0x1f8);
  if (dVar11 < ABS(dVar31 - (double)*(float *)(param_1 + 0x234))) {
    return 0;
  }
  if (dVar11 < ABS(dVar33 - (double)*(float *)(param_1 + 0x238))) {
    return 0;
  }
  dVar35 = *(double *)(param_1 + 0x1a0) - *(double *)(param_1 + 0x200);
  if (dVar11 < ABS(dVar35 - (double)*(float *)(param_1 + 0x23c))) {
    return 0;
  }
  puVar20 = &DAT_149f4e990;
  dVar28 = *(double *)(param_1 + 0x180);
  dVar10 = *(double *)(param_1 + 0x188);
  dVar18 = *(double *)(param_1 + 0x1d0);
  dVar16 = *(double *)(param_1 + 0x1d8);
  dVar14 = *(double *)(param_1 + 0x1e0);
  dVar15 = *(double *)(param_1 + 0x1e8);
  dVar12 = dVar28 * -1.0;
  dVar13 = dVar10 * 1.0;
  dVar2 = *(double *)(param_1 + 0x170);
  dVar11 = *(double *)(param_1 + 0x170);
  dVar3 = *(double *)(param_1 + 0x178);
  dVar4 = *(double *)(param_1 + 0x178);
  dVar11 = (dVar14 * dVar12 * -1.0 + dVar4 * dVar16 + (dVar13 * dVar15 - dVar11 * dVar18 * -1.0)) *
           (double)*(float *)(param_1 + 0x24c) +
           (double)*(float *)(param_1 + 0x248) *
           (dVar15 * dVar12 * 1.0 + dVar3 * dVar18 + (dVar13 * dVar14 - dVar2 * dVar16 * 1.0)) +
           (double)*(float *)(param_1 + 0x240) *
           (dVar16 * dVar12 * -1.0 + ((dVar18 * dVar13 - dVar2 * dVar15 * 1.0) - dVar3 * dVar14)) +
           (dVar18 * dVar12 * 1.0 + ((dVar16 * dVar13 - dVar11 * dVar14 * -1.0) - dVar4 * dVar15)) *
           (double)*(float *)(param_1 + 0x244);
  if (dVar11 < *(double *)(&DAT_149f4e990 + lVar24) ||
      dVar11 == *(double *)(&DAT_149f4e990 + lVar24)) {
LAB_1400c4ca9:
    uVar21 = 0;
  }
  else {
    if (0 < iVar22) {
      dVar4 = *(double *)(param_1 + 0x170);
      dVar3 = *(double *)(param_1 + 0x178);
      dVar11 = -dVar18;
      dVar2 = -dVar16;
      dVar14 = dVar14 * -1.0;
      dVar15 = dVar15 * 1.0;
      dVar29 = dVar3 * dVar14 * -1.0 + ((dVar4 * dVar15 - dVar10 * dVar18 * 1.0) - dVar28 * dVar16);
      dVar30 = dVar4 * dVar14 * 1.0 + ((dVar3 * dVar15 - dVar28 * dVar18 * -1.0) - dVar10 * dVar16);
      dVar27 = dVar10 * dVar14 * 1.0 + dVar16 * dVar4 + (dVar28 * dVar15 - dVar18 * dVar3 * 1.0);
      dVar28 = dVar28 * dVar14 * -1.0 + dVar16 * dVar3 + (dVar10 * dVar15 - dVar18 * dVar4 * -1.0);
      dVar3 = dVar11 * dVar33 - dVar31 * dVar2;
      dVar4 = dVar14 * dVar31 - dVar35 * dVar11;
      dVar12 = dVar2 * dVar35 - dVar33 * dVar14;
      dVar3 = dVar3 + dVar3;
      dVar4 = dVar4 + dVar4;
      dVar12 = dVar12 + dVar12;
      dVar13 = (double)*(float *)(param_1 + 0x168) * 0.8;
      auVar8._8_4_ = SUB84(dVar28,0);
      auVar8._0_8_ = dVar28;
      auVar8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar9._8_4_ = SUB84(dVar27,0);
      auVar9._0_8_ = dVar30;
      auVar9._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      lVar24 = 0x68;
      lVar25 = 0;
      do {
        lVar26 = *(longlong *)(param_1 + 0x5a8);
        if (*(longlong *)(param_1 + 0x5a8) == 0) {
          lVar26 = param_1 + 0x3f8;
        }
        bVar5 = *(byte *)(lVar26 + -0x38 + lVar24);
        if ((bVar5 & 1) == 0) {
          dVar16 = (double)*(float *)(lVar26 + -0xc + lVar24);
          dVar17 = (double)*(float *)(lVar26 + -0x10 + lVar24);
          dVar10 = (double)*(float *)(lVar26 + -0x14 + lVar24);
          dStack_e0 = auVar9._8_8_;
          dVar18 = dVar17 * dVar29 - dVar30 * dVar10;
          dVar19 = dVar16 * dVar30 - dStack_e0 * dVar17;
          dVar37 = dVar10 * dVar27 - dVar16 * dVar29;
          dVar19 = dVar19 + dVar19;
          dVar37 = dVar37 + dVar37;
          dVar18 = dVar18 + dVar18;
          dStack_c0 = auVar8._8_8_;
          dVar32 = (dVar18 * dVar30 - dVar37 * dStack_e0) + dVar28 * dVar19 + dVar10 +
                   (dVar2 * dVar3 - dVar4 * dVar14) + dVar15 * dVar12 + dVar31;
          dVar34 = (dVar27 * dVar19 - dVar29 * dVar18) + dStack_c0 * dVar37 + dVar17 +
                   (dVar14 * dVar12 - dVar3 * dVar11) + dVar15 * dVar4 + dVar33;
          dVar18 = dVar18 * dVar28 + dVar16 + (dVar37 * dVar29 - dVar19 * dVar30) +
                   (dVar11 * dVar4 - dVar12 * dVar2) + dVar15 * dVar3 + dVar35;
          dVar19 = (double)*(float *)(lVar26 + -0x48 + lVar24);
          dVar17 = (double)*(float *)(lVar26 + -0x4c + lVar24);
          dVar38 = (double)*(float *)(lVar26 + -0x50 + lVar24);
          dVar37 = dVar18 - (double)*(float *)(lVar26 + lVar24);
          dVar10 = dVar34 - (double)*(float *)(lVar26 + -4 + lVar24);
          dVar16 = dVar32 - (double)*(float *)(lVar26 + -8 + lVar24);
          dVar36 = dVar37 * dVar19 + dVar16 * dVar38 + dVar10 * dVar17;
          dVar38 = dVar38 * dVar36;
          dVar17 = dVar17 * dVar36;
          dVar10 = dVar10 - dVar17;
          dVar16 = dVar16 - dVar38;
          dVar19 = dVar19 * dVar36;
          dVar37 = dVar37 - dVar19;
          if (dVar13 * dVar13 <= dVar37 * dVar37 + dVar16 * dVar16 + dVar10 * dVar10) {
            *(byte *)(lVar26 + -0x38 + lVar24) = (bVar5 & 0xe8) + 1;
            iVar22 = iVar22 + -1;
          }
          else {
            *(float *)(lVar26 + -0x5c + lVar24) = (float)(dVar32 - dVar38);
            *(float *)(lVar26 + -0x58 + lVar24) = (float)(dVar34 - dVar17);
            *(float *)(lVar26 + -0x54 + lVar24) = (float)(dVar18 - dVar19);
            *(float *)(lVar26 + -0x44 + lVar24) = (float)dVar36;
            *(byte *)(lVar26 + -0x38 + lVar24) = bVar5 & 0xe8 | 2;
            fVar1 = INFINITY;
            if ((longlong)*(int *)(param_1 + 0x16c) != -1) {
              lVar26 = *(longlong *)(param_1 + 0x5a8);
              if (*(longlong *)(param_1 + 0x5a8) == 0) {
                lVar26 = param_1 + 0x3f8;
              }
              fVar1 = *(float *)(lVar26 + 0x24 + (longlong)*(int *)(param_1 + 0x16c) * 0x6c);
            }
            if ((float)dVar36 < fVar1) {
              *(int *)(param_1 + 0x16c) = (int)lVar25;
            }
          }
        }
        else {
          iVar22 = iVar22 + -1;
        }
        lVar25 = lVar25 + 1;
        uVar7 = *(uint *)(param_1 + 0x5b0);
        lVar24 = lVar24 + 0x6c;
      } while (lVar25 < (int)uVar7);
      puVar20 = (undefined *)0x4;
      if ((int)uVar7 < 4) {
        puVar20 = (undefined *)(ulonglong)uVar7;
      }
      *(int *)(param_1 + 0x230) = (int)puVar20;
      if (iVar22 < (int)puVar20) goto LAB_1400c4ca9;
      uVar23 = *(ushort *)(param_1 + 0x374);
    }
    *(ushort *)(param_1 + 0x374) = uVar23 | 0x20;
    uVar21 = CONCAT71((int7)((ulonglong)puVar20 >> 8),1);
  }
  return uVar21;
}



// FUNCTION 1400c4ccc FUN_1400c4ccc body=346 status=ok
// SIG undefined FUN_1400c4ccc(void)

void FUN_1400c4ccc(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 5) {
    uVar6 = 4;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (4 < *(uint *)(param_1 + 0x1c)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1400c4d49;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1400c4d49:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)uVar6;
  FUN_1400c4e26(param_1,param_2,uVar6,4);
  return;
}



// FUNCTION 1400c4e26 FUN_1400c4e26 body=132 status=ok
// SIG undefined FUN_1400c4e26(void)

void FUN_1400c4e26(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1400c4eaa FUN_1400c4eaa body=768 status=ok
// SIG undefined FUN_1400c4eaa(void)

void FUN_1400c4eaa(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined1 auStack_1c8 [32];
  undefined8 *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 **local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined1 local_168;
  longlong local_160;
  undefined1 local_152;
  undefined1 local_151;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined8 *local_128 [12];
  undefined8 local_c8 [12];
  undefined8 *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_151 = *(undefined1 *)(*param_3 + 0x2a);
  local_152 = *(undefined1 *)(param_1 + 10);
  lVar2 = param_1[6];
  plVar3 = (longlong *)param_1[3];
  plVar4 = (longlong *)param_1[4];
  lVar5 = param_1[5];
  if ((*(byte *)(lVar5 + 8) & 3) == 0) {
    local_148 = FUN_146e2259e(lVar5);
  }
  else {
    local_148 = FUN_14472711d(*(undefined8 *)(lVar5 + 0x10),0);
  }
  puVar8 = &DAT_14c993de0;
  if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
    puVar8 = (undefined8 *)((longlong)(int)plVar3[1] * 8 + *(longlong *)(*plVar3 + 0x4a0));
  }
  local_138 = *puVar8;
  if ((*(byte *)(lVar5 + 8) & 3) == 0) {
    FUN_146e225aa(lVar5,local_c8);
  }
  else {
    local_128[0] = (undefined8 *)0x0;
    FUN_14472711d(*(undefined8 *)(lVar5 + 0x10),local_128);
    puVar8 = &DAT_14c846480;
    if (local_128[0] != (undefined8 *)0x0) {
      puVar8 = local_128[0];
    }
    puVar10 = local_c8;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  if ((*(byte *)(lVar2 + 8) & 3) == 0) {
    local_150 = FUN_146e2259e(lVar2);
  }
  else {
    local_150 = FUN_14472711d(*(undefined8 *)(lVar2 + 0x10),0);
  }
  puVar8 = &DAT_14c993de0;
  if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    puVar8 = (undefined8 *)((longlong)(int)plVar4[1] * 8 + *(longlong *)(*plVar4 + 0x4a0));
  }
  local_140 = *puVar8;
  if ((*(byte *)(lVar2 + 8) & 3) == 0) {
    FUN_146e225aa(lVar2,local_128);
  }
  else {
    local_68 = (undefined8 *)0x0;
    FUN_14472711d(*(undefined8 *)(lVar2 + 0x10),&local_68);
    puVar8 = &DAT_14c846480;
    if (local_68 != (undefined8 *)0x0) {
      puVar8 = local_68;
    }
    ppuVar11 = local_128;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *ppuVar11 = (undefined8 *)*puVar8;
      puVar8 = puVar8 + 1;
      ppuVar11 = ppuVar11 + 1;
    }
  }
  puVar10 = (undefined8 *)param_3[1];
  puVar8 = puVar10 + 6;
  local_130 = param_3;
  lVar9 = FUN_1400c527a(puVar8);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 8) = *puVar10;
    local_168 = local_152;
    local_170 = local_151;
    local_180 = local_128;
    local_188 = local_140;
    local_198 = local_150;
    local_1a8 = local_c8;
    local_1a0 = plVar4;
    local_190 = lVar2;
    local_178 = param_2;
    local_160 = lVar9;
    FUN_1400c51ac(plVar3,local_148,lVar5,local_138);
  }
  lVar2 = param_1[2];
  param_1[2] = lVar9;
  if (lVar2 != 0) {
    FUN_14026d0a4(param_1[1]);
    lVar9 = param_1[2];
  }
  param_1[1] = puVar8;
  uVar1 = *(undefined4 *)(local_130[1] + 8);
  *(undefined8 *)(lVar9 + 0x140) = *param_1;
  *(uint *)(param_1[2] + 0x150) = *(uint *)(param_1[2] + 0x150) & 0x7fffffff;
  *(undefined4 *)(param_1[2] + 0x148) = uVar1;
  lVar2 = param_1[2];
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)((longlong)param_1 + 0x44);
  *(undefined4 *)(lVar2 + 0x158) = *(undefined4 *)(param_1 + 7);
  *(undefined4 *)(lVar2 + 0x15c) = uVar1;
  *(undefined4 *)(lVar2 + 0x160) = uVar6;
  *(undefined4 *)(lVar2 + 0x164) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c51ac FUN_1400c51ac body=206 status=ok
// SIG undefined FUN_1400c51ac(void)

void FUN_1400c51ac(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined1 param_13,longlong param_14)

{
  longlong lVar1;
  
  *(undefined8 *)(param_14 + 0xe0) = param_1;
  *(undefined8 *)(param_14 + 0xe8) = param_6;
  *(undefined8 *)(param_14 + 0xf0) = param_2;
  *(undefined8 *)(param_14 + 0xf8) = param_7;
  lVar1 = 0;
  if ((param_3 != 0) && ((*(byte *)(param_3 + 8) & 3) != 0)) {
    lVar1 = param_3;
  }
  *(longlong *)(param_14 + 0x100) = lVar1;
  lVar1 = 0;
  if ((param_8 != 0) && ((*(byte *)(param_8 + 8) & 3) != 0)) {
    lVar1 = param_8;
  }
  *(longlong *)(param_14 + 0x108) = lVar1;
  *(undefined8 *)(param_14 + 0x110) = param_4;
  *(undefined8 *)(param_14 + 0x118) = param_9;
  FUN_1400c5624(param_14,0,param_13,param_5,param_10,param_11,param_12);
  return;
}



// FUNCTION 1400c527a FUN_1400c527a body=480 status=ok
// SIG undefined FUN_1400c527a(void)

longlong FUN_1400c527a(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[3] == 0) {
    iVar14 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar14 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
      FUN_1400c72fa(param_1,iVar14);
    }
    lVar10 = *param_1;
    lVar12 = (longlong)iVar14 * 0x20;
    iVar14 = (int)param_1[2];
    uVar7 = FUN_14001cc68((longlong)iVar14 * 0x670,0x10);
    *(undefined8 *)(lVar10 + lVar12) = uVar7;
    *(undefined8 *)(lVar10 + 8 + lVar12) = uVar7;
    *(int *)(lVar10 + 0x10 + lVar12) = iVar14;
    *(int *)(lVar10 + 0x14 + lVar12) = iVar14;
    *(undefined8 *)(lVar10 + 0x18 + lVar12) = 0xffffffff00000000;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + (int)param_1[2];
    *(int *)(param_1 + 3) = (int)param_1[3] + (int)param_1[2];
    plVar8 = (longlong *)((longlong)((int)param_1[1] + -1) * 0x20 + *param_1);
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (*(int *)((longlong)puVar2 + 0x14) == 0) {
      if ((longlong)(int)param_1[1] < 1) {
        lVar10 = -1;
      }
      else {
        piVar11 = (int *)((longlong)puVar2 + 0x14);
        iVar14 = 0x7fffffff;
        uVar13 = 0xffffffff;
        uVar15 = 0;
        do {
          iVar1 = *piVar11;
          if (0 < iVar1 && iVar1 < iVar14) {
            uVar13 = uVar15 & 0xffffffff;
            iVar14 = iVar1;
          }
          uVar15 = uVar15 + 1;
          piVar11 = piVar11 + 8;
        } while ((longlong)(int)param_1[1] != uVar15);
        lVar10 = (longlong)(int)uVar13;
      }
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      local_38 = puVar2[2];
      uStack_30 = puVar2[3];
      uVar4 = puVar2[lVar10 * 4];
      uVar5 = (puVar2 + lVar10 * 4)[1];
      uVar6 = (puVar2 + lVar10 * 4 + 2)[1];
      puVar2[2] = puVar2[lVar10 * 4 + 2];
      puVar2[3] = uVar6;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      local_48._0_4_ = (undefined4)uVar7;
      local_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar3;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      puVar2[lVar10 * 4 + 2] = local_38;
      (puVar2 + lVar10 * 4 + 2)[1] = uStack_30;
      puVar2 = puVar2 + lVar10 * 4;
      *(undefined4 *)puVar2 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar2 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_40._4_4_;
      local_48 = uVar7;
      uStack_40 = uVar3;
    }
    plVar8 = (longlong *)*param_1;
  }
  if ((longlong)*(int *)((longlong)plVar8 + 0x1c) == -1) {
    if ((int)plVar8[3] < (int)plVar8[2]) {
      lVar10 = plVar8[1];
      plVar8[1] = lVar10 + 0x670;
      *(undefined4 *)(lVar10 + 0x660) = 0xffffffff;
      *(byte *)(lVar10 + 0x664) = *(byte *)(lVar10 + 0x664) & 0xfe;
      *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + -1;
      *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
    }
    else {
      lVar10 = 0;
    }
  }
  else {
    lVar12 = *plVar8;
    lVar9 = (longlong)*(int *)((longlong)plVar8 + 0x1c) * 0x670;
    lVar10 = lVar12 + lVar9;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)(lVar12 + 0x660 + lVar9);
    *(undefined4 *)(lVar12 + 0x660 + lVar9) = 0xffffffff;
    *(int *)((longlong)plVar8 + 0x14) = *(int *)((longlong)plVar8 + 0x14) + -1;
  }
  FUN_1400c545c(lVar10);
  *(byte *)(lVar10 + 0x664) = *(byte *)(lVar10 + 0x664) | 1;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1400c545c FUN_1400c545c body=455 status=ok
// SIG undefined FUN_1400c545c(void)

void FUN_1400c545c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_149f4f140;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3ff00000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0x3ff0000000000000;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0x7f7fffff;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffffffffffff;
  param_1[0x2a] = 0xffffffff7fffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xffffffff00000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3ff00000;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x3ff0000000000000;
  param_1[0x37] = 0x3ff0000000000000;
  param_1[0x38] = 0x3ff0000000000000;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3ff00000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0x3ff0000000000000;
  param_1[0x43] = 0x3ff0000000000000;
  param_1[0x44] = 0x3ff0000000000000;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined1 **)((longlong)param_1 + 0x34c) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x354) = &DAT_3f8000003f800000;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0x3f800000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x400000000;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0x400000000;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0x400000000;
  param_1[199] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 200) = 0;
  param_1[0xcb] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  return;
}



// FUNCTION 1400c5624 FUN_1400c5624 body=1158 status=ok
// SIG undefined FUN_1400c5624(void)

void FUN_1400c5624(longlong param_1,int param_2,undefined1 param_3,undefined8 *param_4,
                  undefined8 *param_5,double param_6,byte param_7)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  byte bVar10;
  ushort uVar11;
  undefined8 uVar12;
  undefined7 uVar15;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  bool bVar20;
  bool bVar21;
  byte bVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 *local_60;
  byte local_55;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x377) = param_3;
  puVar18 = (undefined8 *)(param_1 + 0x20);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar18 = *param_4;
    param_4 = param_4 + 1;
    puVar18 = puVar18 + 1;
  }
  puVar18 = (undefined8 *)(param_1 + 0x80);
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar18 = *param_5;
    param_5 = param_5 + 1;
    puVar18 = puVar18 + 1;
  }
  *(float *)(param_1 + 300) = (float)param_6;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  local_60 = &local_54;
  local_54 = 0;
  local_68 = *(undefined8 *)(param_1 + 0x108);
  local_70 = *(undefined8 *)(param_1 + 0xf8);
  uVar12 = *(undefined8 *)(param_1 + 0xe0);
  local_78 = *(undefined8 *)(param_1 + 0xe8);
  FUN_1401997eb(&local_55,uVar12,*(undefined8 *)(param_1 + 0xf0),*(undefined8 *)(param_1 + 0x100));
  *(byte *)(param_1 + 0x376) = local_55;
  *(ushort *)(param_1 + 0x374) =
       (ushort)(param_2 == 1) << 9 |
       ((ushort)*(undefined4 *)(param_1 + 0x374) & 0xfcfd) + (local_55 & 0x20) * 8 | 2;
  dVar6 = (double)(**(code **)(**(longlong **)(param_1 + 0xf0) + 0x18))();
  dVar5 = (double)(**(code **)(**(longlong **)(param_1 + 0xf8) + 0x18))();
  plVar4 = *(longlong **)(param_1 + 0xe0);
  lVar9 = *(longlong *)(param_1 + 0xf0);
  if (lVar9 == 0) {
    plVar16 = (longlong *)CONCAT71((int7)((ulonglong)&local_55 >> 8),7);
LAB_1400c59d6:
    plVar13 = &DAT_14c993de0;
    if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
      plVar13 = (longlong *)((longlong)(int)plVar4[1] * 8 + *(longlong *)(*plVar4 + 0x4a0));
    }
    if (*plVar13 == 0) {
      if (lVar9 != 0) goto LAB_1400c5a7c;
      plVar16 = (longlong *)CONCAT71((int7)((ulonglong)plVar16 >> 8),7);
    }
    else {
      iVar3 = *(int *)(*plVar13 + 0x18);
      plVar13 = (longlong *)((ulonglong)plVar16 & 0xff);
      plVar16 = (longlong *)&DAT_00000007;
      if (iVar3 != 0) {
        plVar16 = plVar13;
      }
      if ((lVar9 != 0) && (iVar3 == 0)) {
LAB_1400c5a7c:
        plVar16 = (longlong *)
                  (CONCAT71((int7)((ulonglong)plVar16 >> 8),*(undefined1 *)(lVar9 + 0x1c)) &
                  0xffffffffffffff1f);
      }
    }
  }
  else {
    uVar15 = (undefined7)((ulonglong)uVar12 >> 8);
    plVar16 = (longlong *)(CONCAT71(uVar15,*(undefined1 *)(lVar9 + 0x1d)) & 0xffffff1f);
    plVar13 = (longlong *)(CONCAT71(uVar15,*(undefined1 *)(lVar9 + 0x1d)) & 0xffffffffffffff1e);
    if ((char)plVar13 == '\x06') goto LAB_1400c59d6;
  }
  plVar4 = *(longlong **)(param_1 + 0xe8);
  lVar9 = *(longlong *)(param_1 + 0xf8);
  if (lVar9 == 0) {
    uVar19 = CONCAT71((int7)((ulonglong)puVar18 >> 8),7);
  }
  else {
    uVar19 = CONCAT71((int7)((ulonglong)plVar13 >> 8),*(byte *)(lVar9 + 0x1d)) & 0xffffff1f;
    uVar17 = (uint)uVar19;
    if ((*(byte *)(lVar9 + 0x1d) & 0x1e) != 6) goto LAB_1400c57a5;
  }
  plVar13 = &DAT_14c993de0;
  if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    plVar13 = (longlong *)((longlong)(int)plVar4[1] * 8 + *(longlong *)(*plVar4 + 0x4a0));
  }
  if (*plVar13 == 0) {
    if (lVar9 == 0) {
      uVar17 = (uint)CONCAT71((int7)(uVar19 >> 8),7);
      goto LAB_1400c57a5;
    }
  }
  else {
    iVar3 = *(int *)(*plVar13 + 0x18);
    uVar14 = uVar19 & 0xff;
    uVar19 = 7;
    if (iVar3 != 0) {
      uVar19 = uVar14;
    }
    uVar17 = (uint)uVar19;
    if ((lVar9 == 0) || (iVar3 != 0)) goto LAB_1400c57a5;
  }
  uVar17 = (uint)CONCAT71((int7)(uVar19 >> 8),*(undefined1 *)(lVar9 + 0x1c)) & 0xffffff1f;
LAB_1400c57a5:
  local_78 = CONCAT44(local_78._4_4_,(float)dVar5);
  FUN_1400c5aac(param_1,(ulonglong)plVar16 & 0xffffffff,uVar17,(float)dVar6);
  uVar2 = *(uint *)(param_1 + 0x374);
  uVar8 = ((ushort)uVar2 & 0xfff3) + (ushort)param_7 * 4;
  *(ushort *)(param_1 + 0x374) = uVar8;
  plVar4 = *(longlong **)(param_1 + 0xe0);
  fVar24 = -1.0;
  fVar23 = -1.0;
  if ((1 < *(byte *)((longlong)plVar4 + 0xc)) && (fVar23 = -1.0, plVar4 != (longlong *)0x0)) {
    fVar23 = *(float *)(*(longlong *)(*plVar4 + 0x470) + (longlong)(int)plVar4[1] * 4);
  }
  plVar13 = *(longlong **)(param_1 + 0xe8);
  if (plVar13 != (longlong *)0x0 && 1 < *(byte *)((longlong)plVar13 + 0xc)) {
    fVar24 = *(float *)(*(longlong *)(*plVar13 + 0x470) + (longlong)(int)plVar13[1] * 4);
  }
  if (fVar23 <= fVar24) {
    fVar23 = fVar24;
  }
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  *(float *)(param_1 + 0x63c) = fVar23;
  if (*(byte *)((longlong)plVar4 + 0xc) < 2 || plVar4 == (longlong *)0x0) {
    bVar20 = false;
  }
  else {
    cVar1 = *(char *)(*(longlong *)(*plVar4 + 0x2c0) + 0xb + (longlong)(int)plVar4[1] * 0x10);
    bVar20 = cVar1 == '\x01' || cVar1 == '\x04';
  }
  if (*(byte *)((longlong)plVar13 + 0xc) < 2 || plVar13 == (longlong *)0x0) {
    bVar21 = false;
  }
  else {
    cVar1 = *(char *)(*(longlong *)(*plVar13 + 0x2c0) + 0xb + (longlong)(int)plVar13[1] * 0x10);
    bVar21 = cVar1 == '\x01' || cVar1 == '\x04';
  }
  bVar22 = 0;
  if ((plVar4 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar4 + 0xc))) {
    bVar22 = (*(byte *)(*(longlong *)(*plVar4 + 0x2c0) + 8 + (longlong)(int)plVar4[1] * 0x10) & 4)
             >> 2;
  }
  if (plVar13 == (longlong *)0x0 || *(byte *)((longlong)plVar13 + 0xc) < 2) {
    bVar10 = 0;
  }
  else {
    bVar10 = (*(byte *)(*(longlong *)(*plVar13 + 0x2c0) + 8 + (longlong)(int)plVar13[1] * 0x10) & 4)
             >> 2;
  }
  uVar7 = (ushort)(byte)((bVar20 | bVar21) & (bVar22 | bVar10)) * 0x4000;
  uVar8 = uVar8 & 0x3ff7;
  uVar11 = uVar7 + uVar8 + 0x8000;
  *(ushort *)(param_1 + 0x374) = uVar11;
  if (((DAT_14c75f0cc == '\x01') && ((uVar2 & 0xc0) == 0)) && ((bVar20 & bVar21) == 0)) {
    uVar11 = uVar7 | uVar8;
    *(ushort *)(param_1 + 0x374) = uVar11;
  }
  if ((param_7 != 0) && (((char)plVar16 == '\x06' || ((char)uVar17 == '\x06')))) {
    *(ushort *)(param_1 + 0x374) = uVar11 | 8;
  }
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c5aac FUN_1400c5aac body=855 status=ok
// SIG undefined FUN_1400c5aac(void)

void FUN_1400c5aac(longlong param_1,char param_2,char param_3,float param_4,float param_5)

{
  char cVar1;
  longlong *plVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_c8 [40];
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == '\x03') || (param_2 == '\0')) {
LAB_1400c5d78:
    if ((param_3 == '\x03') || (param_3 == '\0')) {
      *(float *)(param_1 + 0x18) = param_4;
      *(float *)(param_1 + 0x1c) = param_5;
      if (param_5 <= param_4) {
        param_4 = param_5;
      }
LAB_1400c5d99:
      *(float *)(param_1 + 0x168) = param_4 * 0.05;
      goto LAB_1400c5cc6;
    }
    if ((param_2 != '\x03') && (param_2 != '\0')) goto LAB_1400c5dc2;
    if (param_3 != '\x03') {
      *(float *)(param_1 + 0x18) = param_4;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      goto LAB_1400c5d99;
    }
    if ((param_2 == '\0') || (param_2 == '\x03')) goto LAB_1400c5cc6;
  }
  else {
    if ((param_3 != '\0') && (param_3 != '\x03')) {
      plVar2 = *(longlong **)(param_1 + 0xe0);
      fVar5 = 0.0;
      if (((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) &&
         (cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10),
         fVar5 = param_4, cVar1 != '\x01' && cVar1 != '\x04')) {
        fVar5 = 0.0;
      }
      plVar2 = *(longlong **)(param_1 + 0xe8);
      fVar4 = 0.0;
      if (((plVar2 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar2 + 0xc))) &&
         (cVar1 = *(char *)(*(longlong *)(*plVar2 + 0x2c0) + 0xb + (longlong)(int)plVar2[1] * 0x10),
         fVar4 = param_5, cVar1 != '\x01' && cVar1 != '\x04')) {
        fVar4 = 0.0;
      }
      plVar2 = *(longlong **)(param_1 + 0xf0);
      fVar6 = 0.0;
      fVar7 = 0.0;
      if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x1a) == '\x01')) {
        (**(code **)(*plVar2 + 0x80))(plVar2,&local_a0);
        dVar3 = ABS(local_88 - local_a0);
        if (ABS(local_88 - local_a0) <= ABS(local_80 - local_98)) {
          dVar3 = ABS(local_80 - local_98);
        }
        if (dVar3 <= ABS(local_78 - local_90)) {
          dVar3 = ABS(local_78 - local_90);
        }
        fVar7 = (float)dVar3;
      }
      plVar2 = *(longlong **)(param_1 + 0xf8);
      if ((plVar2 != (longlong *)0x0) && (*(char *)((longlong)plVar2 + 0x1a) == '\x01')) {
        (**(code **)(*plVar2 + 0x80))(plVar2,&local_a0);
        dVar3 = ABS(local_88 - local_a0);
        if (ABS(local_88 - local_a0) <= ABS(local_80 - local_98)) {
          dVar3 = ABS(local_80 - local_98);
        }
        if (dVar3 <= ABS(local_78 - local_90)) {
          dVar3 = ABS(local_78 - local_90);
        }
        fVar6 = (float)dVar3;
      }
      if (fVar6 <= fVar7) {
        fVar7 = fVar6;
      }
      *(float *)(param_1 + 0x168) = fVar7 * 0.1;
      fVar7 = DAT_14c993060;
      if ((fVar5 != 0.0) || (NAN(fVar5))) {
        if ((fVar4 != 0.0) || (NAN(fVar4))) {
          if (fVar4 <= fVar5) {
            fVar5 = fVar4;
          }
          *(float *)(param_1 + 0x18) = fVar5;
          *(float *)(param_1 + 0x1c) = fVar5;
        }
        else {
          fVar4 = DAT_14c993060;
          if (DAT_14c993060 <= fVar5) {
            fVar4 = fVar5;
          }
          *(float *)(param_1 + 0x18) = fVar4;
          *(undefined4 *)(param_1 + 0x1c) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x18) = 0;
        if (fVar7 <= fVar4) {
          fVar7 = fVar4;
        }
        *(float *)(param_1 + 0x1c) = fVar7;
      }
      goto LAB_1400c5cc6;
    }
    if (param_2 == '\x03') goto LAB_1400c5d78;
LAB_1400c5dc2:
    if ((param_3 != '\x03') && (param_3 != '\0')) goto LAB_1400c5cc6;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)(param_1 + 0x1c) = param_5;
  *(float *)(param_1 + 0x168) = param_5 * 0.05;
LAB_1400c5cc6:
  *(ushort *)(param_1 + 0x374) =
       (ushort)(param_3 == '\x03' || param_3 == '\0') << 7 |
       (ushort)(param_2 == '\x03' || param_2 == '\0') << 6 |
       (ushort)*(undefined4 *)(param_1 + 0x374) & 0xff3f;
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c5e04 FUN_1400c5e04 body=1167 status=ok
// SIG undefined FUN_1400c5e04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c5e04(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  longlong lVar10;
  double *pdVar11;
  double *pdVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_2 + 0x5b0) < 1) {
    uVar20 = 0xffffffff;
  }
  else {
    lVar10 = param_2 + 0x3f8;
    if (*(longlong *)(param_2 + 0x5a8) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x5a8);
    }
    uVar20 = *(undefined4 *)(lVar10 + 0x28);
  }
  local_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  pdVar11 = (double *)
            FUN_14488dbdf(*(undefined8 *)(param_2 + 0xe0),*(undefined8 *)(param_2 + 0x100),uVar20,
                          *(undefined8 *)(param_1 + 0xa0));
  local_98 = *(undefined8 *)(param_1 + 0xa8);
  uStack_90 = *(undefined8 *)(param_1 + 0xb0);
  pdVar12 = (double *)
            FUN_14488dbdf(*(undefined8 *)(param_2 + 0xe8),*(undefined8 *)(param_2 + 0x108),uVar20,
                          *(undefined8 *)(param_1 + 0xa0));
  local_88 = 0.0;
  if ((pdVar11 == (double *)0x0) || (pdVar12 == (double *)0x0)) {
    if (pdVar11 == (double *)0x0) {
      if (pdVar12 == (double *)0x0) {
        dVar16 = (double)_DAT_14c994070;
        dVar18 = dVar16;
        dVar4 = (double)_DAT_14c994088;
        fVar2 = 0.0;
        goto LAB_1400c5fb9;
      }
      dVar16 = *pdVar12;
      uVar22 = SUB84(dVar16,0);
      uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar18 = pdVar12[1];
      uVar20 = uVar22;
      uVar21 = uVar24;
      if (dVar16 <= dVar18) {
        uVar20 = SUB84(dVar18,0);
        uVar21 = (undefined4)((ulonglong)dVar18 >> 0x20);
      }
      uVar23 = SUB84(pdVar12[2],0);
      uVar26 = (undefined4)((ulonglong)pdVar12[2] >> 0x20);
      fVar2 = *(float *)(pdVar12 + 0xc);
      uVar13 = *(undefined8 *)(param_2 + 0xe8);
    }
    else {
      dVar16 = *pdVar11;
      uVar22 = SUB84(dVar16,0);
      uVar24 = (undefined4)((ulonglong)dVar16 >> 0x20);
      dVar18 = pdVar11[1];
      uVar20 = uVar22;
      uVar21 = uVar24;
      if (dVar16 <= dVar18) {
        uVar20 = SUB84(dVar18,0);
        uVar21 = (undefined4)((ulonglong)dVar18 >> 0x20);
      }
      uVar23 = SUB84(pdVar11[2],0);
      uVar26 = (undefined4)((ulonglong)pdVar11[2] >> 0x20);
      fVar2 = *(float *)(pdVar11 + 0xc);
      uVar13 = *(undefined8 *)(param_2 + 0xe0);
      pdVar12 = pdVar11;
    }
    dVar16 = (double)CONCAT44(uVar24,uVar22);
    FUN_1400c6294(pdVar12,uVar13,&local_88);
    dVar18 = (double)CONCAT44(uVar21,uVar20);
    dVar4 = (double)CONCAT44(uVar26,uVar23);
    goto LAB_1400c5fb9;
  }
  bVar9 = *(byte *)((longlong)pdVar11 + 0x65);
  if (*(byte *)((longlong)pdVar11 + 0x65) < *(byte *)((longlong)pdVar12 + 0x65)) {
    bVar9 = *(byte *)((longlong)pdVar12 + 0x65);
  }
  dVar16 = pdVar12[2];
  dVar18 = pdVar11[2];
  uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
  if (bVar9 == 0) {
    dVar16 = (dVar16 + dVar18) * 0.5;
LAB_1400c5f08:
    uVar22 = SUB84(dVar16,0);
    uVar24 = (int)((ulonglong)dVar16 >> 0x20);
  }
  else {
    uVar21 = (undefined4)((ulonglong)dVar16 >> 0x20);
    if (bVar9 == 1) {
      uVar22 = SUB84(dVar18,0);
      uVar24 = uVar20;
      if (dVar16 <= dVar18) {
        uVar22 = SUB84(dVar16,0);
        uVar24 = uVar21;
      }
    }
    else {
      if (bVar9 == 2) {
        dVar16 = dVar16 * dVar18;
        goto LAB_1400c5f08;
      }
      uVar22 = 0;
      uVar24 = 0;
      if ((bVar9 == 3) && (uVar22 = SUB84(dVar18,0), uVar24 = uVar20, dVar18 <= dVar16)) {
        uVar22 = SUB84(dVar16,0);
        uVar24 = uVar21;
      }
    }
  }
  dVar6 = (double)CONCAT44(uVar24,uVar22);
  dVar4 = (double)CONCAT44(uVar24,uVar22);
  uVar15 = *(uint *)((longlong)pdVar11 + 100);
  if ((byte)*(uint *)((longlong)pdVar11 + 100) < (byte)*(uint *)((longlong)pdVar12 + 100)) {
    uVar15 = *(uint *)((longlong)pdVar12 + 100);
  }
  dVar18 = *pdVar12;
  dVar3 = *pdVar11;
  uVar20 = SUB84(dVar3,0);
  uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
  uVar14 = uVar15 & 0xff;
  if ((char)uVar15 == '\0') {
    dVar16 = pdVar11[1];
    if (dVar3 <= dVar16) {
      uVar20 = SUB84(dVar16,0);
      uVar21 = (undefined4)((ulonglong)dVar16 >> 0x20);
    }
    dVar17 = dVar18;
    if (dVar18 <= pdVar12[1]) {
      dVar17 = pdVar12[1];
    }
    dVar16 = (dVar18 + dVar3) * 0.5;
    dVar18 = (dVar17 + (double)CONCAT44(uVar21,uVar20)) * 0.5;
LAB_1400c5f58:
    uVar27 = SUB84(dVar18,0);
    uVar28 = (int)((ulonglong)dVar18 >> 0x20);
  }
  else {
    uVar25 = (undefined4)((ulonglong)dVar18 >> 0x20);
    uVar23 = uVar20;
    uVar26 = uVar21;
    if (uVar14 == 1) {
      if (dVar18 <= dVar3) {
        uVar23 = SUB84(dVar18,0);
        uVar26 = uVar25;
      }
      dVar16 = pdVar11[1];
      if (dVar3 <= dVar16) {
        uVar20 = SUB84(dVar16,0);
        uVar21 = (undefined4)((ulonglong)dVar16 >> 0x20);
      }
      if (dVar18 <= pdVar12[1]) {
        dVar18 = pdVar12[1];
      }
      if (dVar18 <= (double)CONCAT44(uVar21,uVar20)) {
        uVar20 = SUB84(dVar18,0);
        uVar21 = (undefined4)((ulonglong)dVar18 >> 0x20);
      }
LAB_1400c61a4:
      dVar16 = (double)CONCAT44(uVar26,uVar23);
      uVar27 = uVar20;
      uVar28 = uVar21;
    }
    else {
      if (uVar14 == 2) {
        dVar16 = dVar18 * dVar3;
        dVar17 = pdVar11[1];
        if (dVar3 <= dVar17) {
          uVar20 = SUB84(dVar17,0);
          uVar21 = (undefined4)((ulonglong)dVar17 >> 0x20);
        }
        if (dVar18 <= pdVar12[1]) {
          dVar18 = pdVar12[1];
        }
        dVar18 = dVar18 * (double)CONCAT44(uVar21,uVar20);
        goto LAB_1400c5f58;
      }
      dVar16 = 0.0;
      uVar27 = 0;
      uVar28 = 0;
      if (uVar14 == 3) {
        if (dVar3 <= dVar18) {
          uVar23 = SUB84(dVar18,0);
          uVar26 = uVar25;
        }
        dVar16 = pdVar11[1];
        if (dVar3 <= dVar16) {
          uVar20 = SUB84(dVar16,0);
          uVar21 = (undefined4)((ulonglong)dVar16 >> 0x20);
        }
        if (dVar18 <= pdVar12[1]) {
          dVar18 = pdVar12[1];
        }
        if ((double)CONCAT44(uVar21,uVar20) <= dVar18) {
          uVar20 = SUB84(dVar18,0);
          uVar21 = (undefined4)((ulonglong)dVar18 >> 0x20);
        }
        goto LAB_1400c61a4;
      }
    }
  }
  dVar3 = (double)CONCAT44(uVar28,uVar27);
  dVar18 = (double)CONCAT44(uVar28,uVar27);
  FUN_1400c6294(pdVar11,*(undefined8 *)(param_2 + 0xe0),&local_88);
  FUN_1400c6294(pdVar12,*(undefined8 *)(param_2 + 0xe8),&local_88);
  fVar19 = *(float *)(pdVar12 + 0xc);
  fVar1 = *(float *)(pdVar11 + 0xc);
  if ((char)uVar15 == '\0') {
    fVar2 = (fVar19 + fVar1) * 0.5;
    goto LAB_1400c5fb9;
  }
  if (uVar14 == 1) {
    dVar18 = dVar3;
    dVar4 = dVar6;
    fVar2 = fVar1;
    if (fVar1 < fVar19) goto LAB_1400c5fb9;
  }
  else {
    if (uVar14 == 2) {
      fVar2 = fVar19 * fVar1;
      goto LAB_1400c5fb9;
    }
    dVar18 = (double)CONCAT44(uVar28,uVar27);
    dVar4 = (double)CONCAT44(uVar24,uVar22);
    fVar2 = 0.0;
    if ((uVar14 != 3) || (dVar18 = dVar3, dVar4 = dVar6, fVar2 = fVar1, fVar19 < fVar1))
    goto LAB_1400c5fb9;
  }
  dVar18 = dVar3;
  dVar4 = dVar6;
  fVar2 = fVar19;
LAB_1400c5fb9:
  fVar8 = DAT_14c75f1e8;
  fVar7 = DAT_14c75f1e0;
  fVar1 = DAT_14c75f1dc;
  fVar19 = DAT_14c75f1d4;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    uVar15 = 0;
  }
  else {
    uVar15 = ~-(uint)(DAT_14c75f1d8 < 0.0) & (uint)DAT_14c75f1d8 |
             (uint)(float)dVar4 & -(uint)(DAT_14c75f1d8 < 0.0);
  }
  bVar5 = DAT_14c75f1d4 < 0.0;
  dVar4 = *(double *)(param_1 + 0xb8);
  *(uint *)(param_2 + 0x344) = uVar15;
  uVar15 = -(uint)(fVar8 < 0.0);
  *(uint *)(param_2 + 0x348) = ~uVar15 & (uint)fVar8 | (uint)(float)dVar4 & uVar15;
  uVar15 = -(uint)(fVar1 < 0.0);
  *(uint *)(param_2 + 0x340) =
       ~uVar15 & (uint)fVar1 |
       (~-(uint)(fVar19 < 0.0) & (uint)fVar19 | (uint)(float)dVar18 & -(uint)(fVar19 < 0.0)) &
       uVar15;
  if (bVar5) {
    fVar19 = (float)dVar16;
  }
  *(float *)(param_2 + 0x33c) = fVar19;
  *(float *)(param_2 + 0x368) = -(float)local_88;
  *(undefined1 **)(param_2 + 0x34c) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_2 + 0x354) = &DAT_3f8000003f800000;
  uVar15 = -(uint)(fVar7 < 0.0);
  *(uint *)(param_2 + 0x36c) = ~uVar15 & (uint)fVar7 | (uint)fVar2 & uVar15;
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1400c6294 FUN_1400c6294 body=175 status=ok
// SIG undefined FUN_1400c6294(void)

void FUN_1400c6294(longlong param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  if ((*(char *)(param_1 + 0x78) != '\0') && (fVar4 = *(float *)(param_1 + 0x7c), 0.0 < fVar4)) {
    if (*(char *)(param_1 + 0x78) == '\x02') {
      dVar3 = (double)fVar4;
    }
    else {
      dVar3 = 0.0;
      if (param_2 != (longlong *)0x0) {
        if (*(char *)(*(longlong *)(*param_2 + 0x158) + (longlong)(int)param_2[1]) == '\x01') {
          if (0.5 <= fVar4) {
            fVar4 = 0.5;
          }
          lVar1 = *(longlong *)(*param_2 + 0x110);
          lVar2 = (longlong)(int)param_2[1] * 0x30;
          dVar5 = ABS(*(double *)(lVar1 + 0x28 + lVar2) - *(double *)(lVar1 + 0x10 + lVar2));
          dVar6 = ABS(*(double *)(lVar1 + 0x20 + lVar2) - *(double *)(lVar1 + 8 + lVar2));
          dVar3 = ABS(*(double *)(lVar1 + 0x18 + lVar2) - *(double *)(lVar1 + lVar2));
          if (dVar6 <= dVar3) {
            dVar3 = dVar6;
          }
          if (dVar5 <= dVar3) {
            dVar3 = dVar5;
          }
          dVar3 = dVar3 * (double)fVar4;
        }
      }
    }
    dVar5 = *param_3;
    if (*param_3 <= dVar3) {
      dVar5 = dVar3;
    }
    *param_3 = dVar5;
  }
  return;
}



// FUNCTION 1400c6344 FUN_1400c6344 body=402 status=ok
// SIG undefined FUN_1400c6344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c6344(longlong param_1)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if (((plVar1 == (longlong *)0x0) || (*(byte *)((longlong)plVar1 + 0xc) < 2)) ||
     ((*(ushort *)(*(longlong *)(*plVar1 + 0x2c0) + 8 + (longlong)(int)plVar1[1] * 0x10) & 2) == 0))
  {
    fVar4 = 0.0;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x80))(*(longlong **)(param_1 + 0xf0),&local_60);
    dVar3 = ABS(local_48 - local_60);
    if (ABS(local_40 - local_58) <= ABS(local_48 - local_60)) {
      dVar3 = ABS(local_40 - local_58);
    }
    if (ABS(local_38 - local_50) <= dVar3) {
      dVar3 = ABS(local_38 - local_50);
    }
    fVar4 = (float)dVar3;
  }
  plVar1 = *(longlong **)(param_1 + 0xe8);
  if ((plVar1 == (longlong *)0x0) || (*(byte *)((longlong)plVar1 + 0xc) < 2)) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = 0.0;
    if ((*(ushort *)(*(longlong *)(*plVar1 + 0x2c0) + 8 + (longlong)(int)plVar1[1] * 0x10) & 2) != 0
       ) {
      (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x80))
                (*(longlong **)(param_1 + 0xf8),&local_60);
      dVar3 = ABS(local_48 - local_60);
      if (ABS(local_40 - local_58) <= ABS(local_48 - local_60)) {
        dVar3 = ABS(local_40 - local_58);
      }
      if (ABS(local_38 - local_50) <= dVar3) {
        dVar3 = ABS(local_38 - local_50);
      }
      fVar2 = (float)dVar3;
    }
  }
  if (fVar4 <= fVar2) {
    fVar4 = fVar2;
  }
  *(float *)(param_1 + 0x658) = DAT_14c75eff0 * fVar4;
  *(float *)(param_1 + 0x65c) = fVar4 * _DAT_14c75eff4;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c64d8 FUN_1400c64d8 body=183 status=ok
// SIG undefined FUN_1400c64d8(void)

undefined8 * FUN_1400c64d8(float *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 3.4028235e+38 || param_1[3] == 3.4028235e+38) {
    *(float *)(param_2 + 1) = param_1[2];
    *param_2 = *(undefined8 *)param_1;
    *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 3);
    *(float *)((longlong)param_2 + 0x14) = param_1[5];
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_38 = &local_24;
  FUN_141917be0(param_3,param_1,param_1 + 3,param_2);
  *(undefined4 *)((longlong)param_2 + 0x14) = local_1c;
  *(undefined8 *)((longlong)param_2 + 0xc) = local_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c6592 FUN_1400c6592 body=222 status=ok
// SIG undefined FUN_1400c6592(void)

double * FUN_1400c6592(double *param_1,double *param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  undefined1 auStack_58 [32];
  double *local_38;
  double local_30;
  double dStack_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pdVar1 = param_1 + 3;
  bVar3 = *param_1 == 1.79769313486232e+308 || param_1[3] == 1.79769313486232e+308;
  if (DAT_14c992590 == '\x01') {
    if (bVar3) {
LAB_1400c6601:
      param_2[2] = param_1[2];
      dVar2 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = dVar2;
      dVar2 = param_1[4];
      param_2[3] = *pdVar1;
      param_2[4] = dVar2;
      param_2[5] = param_1[5];
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    local_38 = &local_30;
    FUN_141917b30(param_3,param_1,pdVar1,param_2);
  }
  else {
    if (bVar3) goto LAB_1400c6601;
    local_38 = &local_30;
    FUN_141917a80(param_3,param_1,pdVar1,param_2);
  }
  param_2[5] = local_20;
  param_2[3] = local_30;
  param_2[4] = dStack_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1400c6673 FUN_1400c6673 body=381 status=ok
// SIG undefined FUN_1400c6673(void)

bool FUN_1400c6673(char param_1,longlong param_2,char param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    if (param_1 == '\v') {
      return false;
    }
  }
  else {
    uVar4 = *(uint *)(param_2 + 8);
    if ((*(byte *)(param_2 + 0x71 + (ulonglong)((uVar4 & 3) == 0) * 8) & 1) == 0) {
      return false;
    }
    uVar8 = (ulonglong)((uVar4 & 3) == 0);
    if ((((*(int *)(param_2 + 0x58 + uVar8 * 8) == 0) && (*(int *)(param_2 + 0x5c + uVar8 * 8) == 0)
         ) && (*(int *)(param_2 + 0x60 + uVar8 * 8) == 0)) &&
       (*(int *)(param_2 + uVar8 * 8 + 100) == 0)) {
      return false;
    }
    cVar3 = *(char *)(param_2 + 0x70 + (ulonglong)((uVar4 & 3) == 0) * 8);
    if (param_1 == '\v') {
      if (cVar3 != '\x03') {
        return false;
      }
    }
    else if (cVar3 == '\x03') {
      return false;
    }
  }
  if (param_4 == 0) {
    if (param_3 != '\v') {
      return true;
    }
  }
  else {
    uVar4 = *(uint *)(param_4 + 8);
    if ((*(byte *)(param_4 + 0x71 + (ulonglong)((uVar4 & 3) == 0) * 8) & 1) != 0) {
      uVar8 = (ulonglong)((uVar4 & 3) == 0);
      lVar1 = uVar8 * 8 + 0x58;
      uVar5 = *(uint *)(param_4 + 0x5c + uVar8 * 8);
      bVar7 = *(int *)(param_4 + 0x58 + uVar8 * 8) == 0;
      bVar6 = *(int *)(param_4 + 0x60 + uVar8 * 8) == 0;
      if ((((!bVar7 || uVar5 != 0) || !bVar6) || (*(int *)(param_4 + 0xc + lVar1) != 0)) &&
         ((*(char *)(param_4 + 0x70 + (ulonglong)((uVar4 & 3) == 0) * 8) == '\x03') ==
          (param_3 == '\v'))) {
        if (param_2 == 0) {
          return true;
        }
        uVar8 = (ulonglong)((*(byte *)(param_2 + 8) & 3) == 0);
        lVar2 = uVar8 * 8 + 0x58;
        uVar4 = *(uint *)(param_2 + 0x5c + uVar8 * 8);
        if (((*(int *)(param_2 + 0x58 + uVar8 * 8) == 0) && (uVar4 == 0)) &&
           ((*(int *)(param_2 + 0x60 + uVar8 * 8) == 0 && (*(int *)(param_2 + 0xc + lVar2) == 0))))
        {
          return true;
        }
        if (((bVar7 && uVar5 == 0) && bVar6) && (*(int *)(param_4 + 0xc + lVar1) == 0)) {
          return true;
        }
        if ((uVar5 >> (*(uint *)(param_2 + 0xc + lVar2) >> 0x15 & 0x1f) & 1) != 0) {
          return (uVar4 >> (*(uint *)(param_4 + 0xc + lVar1) >> 0x15 & 0x1f) & 1) != 0;
        }
      }
    }
  }
  return false;
}


