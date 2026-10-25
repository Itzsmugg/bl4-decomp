// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d12d62 FUN_147d12d62 body=53 status=ok
// SIG undefined FUN_147d12d62(void)

void FUN_147d12d62(void)

{
  FUN_147d12d98();
  if (DAT_14cb059c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb059a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d12d98 FUN_147d12d98 body=344 status=ok
// SIG undefined FUN_147d12d98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d12d98(void)

{
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined *local_28;
  uint local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0x100000000;
  local_28 = &DAT_14cb059b0;
  local_20 = 0xffffffff;
  iStack_1c = 0;
  local_18 = 0;
  if (DAT_14cb059c8 != 0) {
    FUN_1449c0562(&local_30);
  }
  local_58 = &DAT_14cb059a0;
  local_50 = local_30;
  local_48 = local_28;
  local_40 = local_20;
  iStack_3c = iStack_1c;
  local_38 = local_18;
  local_34 = local_14;
  if (iStack_1c < *(int *)(local_28 + 0x18)) {
    do {
      if (*(longlong *)(*local_58 + (longlong)iStack_3c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_50._4_4_;
      FUN_1449c0562(&local_50);
    } while (iStack_3c < *(int *)(local_48 + 0x18));
  }
  DAT_14cb059a8 = 0;
  if (DAT_14cb059ac != 0) {
    FUN_1446f4a44(&DAT_14cb059a0,0);
  }
  _DAT_14cb059d0 = 0xffffffff;
  DAT_14cb059c8 = 0;
  if (0x80 < DAT_14cb059cc) {
    DAT_14cb059cc = 0x80;
    FUN_1446efbd8(&DAT_14cb059b0,0);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d12ef2 FUN_147d12ef2 body=82 status=ok
// SIG undefined FUN_147d12ef2(void)

void FUN_147d12ef2(undefined8 *param_1)

{
  undefined8 *_Dst;
  void *_Src;
  
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    _Src = (void *)*param_1;
    _Dst = param_1 + 1;
    if (_Src != _Dst) {
      memmove(_Dst,_Src,(longlong)*(int *)(param_1 + 0x21) << 5);
      FUN_1400020a8(_Src);
      *param_1 = _Dst;
    }
  }
  return;
}



// FUNCTION 147d12f44 FUN_147d12f44 body=139 status=ok
// SIG undefined FUN_147d12f44(void)

void FUN_147d12f44(undefined8 *param_1,int param_2,uint param_3)

{
  undefined8 *_Src;
  undefined8 uVar1;
  void *pvVar2;
  
  _Src = param_1 + 1;
  pvVar2 = (void *)*param_1;
  if (param_3 < 9) {
    if (pvVar2 != _Src) {
      memmove(_Src,pvVar2,(longlong)param_2 << 5);
      FUN_1400020a8(pvVar2);
      *param_1 = _Src;
    }
  }
  else {
    if (pvVar2 == _Src) {
      pvVar2 = (void *)FUN_14001fdce(0,(longlong)(int)param_3 << 5,0);
      *param_1 = pvVar2;
      memcpy(pvVar2,_Src,(longlong)param_2 << 5);
      return;
    }
    uVar1 = FUN_14001fdce(pvVar2,(longlong)(int)param_3 << 5,0);
    *param_1 = uVar1;
  }
  return;
}



// FUNCTION 147d12fd0 FUN_147d12fd0 body=82 status=ok
// SIG undefined FUN_147d12fd0(void)

void FUN_147d12fd0(undefined8 *param_1)

{
  undefined8 *_Dst;
  void *_Src;
  
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
    _Src = (void *)*param_1;
    _Dst = param_1 + 1;
    if (_Src != _Dst) {
      memmove(_Dst,_Src,(longlong)*(int *)(param_1 + 0x41) << 3);
      FUN_1400020a8(_Src);
      *param_1 = _Dst;
    }
  }
  return;
}



// FUNCTION 147d13022 FUN_147d13022 body=119 status=ok
// SIG undefined FUN_147d13022(void)

void FUN_147d13022(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (*(int *)(param_1 + 0x10c) != 0) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 5,0);
      iVar2 = (int)(uVar3 >> 5);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_147d12f44(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 147d1309a FUN_147d1309a body=63 status=ok
// SIG undefined FUN_147d1309a(void)

ulonglong FUN_147d1309a(double param_1)

{
  return ~-(ulonglong)(ABS(param_1) < 9.999999747378752e-06) & (ulonglong)param_1 |
         *(ulonglong *)(&DAT_14aa816b0 + (ulonglong)(param_1 < 0.0) * 8) &
         -(ulonglong)(ABS(param_1) < 9.999999747378752e-06);
}



// FUNCTION 147d130da FUN_147d130da body=125 status=ok
// SIG undefined FUN_147d130da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_147d130da(double param_1)

{
  double dVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05d10) {
    FUN_144b3d300(&DAT_14cb05d10);
    if (DAT_14cb05d10 == -1) {
      _DAT_14cb05d08 = 0.43429448190325176;
      _Init_thread_footer(&DAT_14cb05d10);
    }
  }
  dVar1 = log(param_1);
  return dVar1 * _DAT_14cb05d08;
}



// FUNCTION 147d13158 FUN_147d13158 body=117 status=ok
// SIG undefined FUN_147d13158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_147d13158(float param_1)

{
  float fVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb05d18) {
    FUN_144b3d300(&DAT_14cb05d18);
    if (DAT_14cb05d18 == -1) {
      _DAT_14cb05d14 = 0.43429446;
      _Init_thread_footer(&DAT_14cb05d18);
    }
  }
  fVar1 = logf(param_1);
  return fVar1 * _DAT_14cb05d14;
}



// FUNCTION 147d131cd FUN_147d131cd body=280 status=ok
// SIG undefined FUN_147d131cd(void)

void FUN_147d131cd(byte param_1,longlong *param_2,undefined1 (*param_3) [16])

{
  char cVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  longlong lVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  
  bVar7 = 0x1c;
  if (param_1 < 0x1c) {
    bVar7 = param_1;
  }
  lVar6 = (ulonglong)bVar7 * 0x10;
  cVar1 = (&DAT_14aa842ba)[lVar6];
  if ((longlong)cVar1 == 1) {
    if ((byte)(&DAT_14aa842b9)[lVar6] - 1 < 4) {
      pdVar2 = (double *)*param_2;
      switch((uint)(byte)(&DAT_14aa842b9)[lVar6]) {
      case 1:
        dVar5 = (double)*(float *)pdVar2;
        break;
      case 2:
        dVar5 = *pdVar2;
        break;
      case 3:
        dVar5 = (double)(int)*(float *)pdVar2;
        break;
      case 4:
        dVar5 = (double)*(byte *)pdVar2;
      }
    }
    else {
      dVar5 = 0.0;
    }
    uVar10 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar5;
    auVar3._12_4_ = uVar10;
    *param_3 = auVar3;
    auVar4._8_4_ = SUB84(dVar5,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = uVar10;
    param_3[1] = auVar4;
    return;
  }
  uVar8 = 4;
  if (cVar1 < '\x04') {
    uVar8 = (int)cVar1;
  }
  if ('\0' < cVar1) {
    bVar7 = (&DAT_14aa842b9)[lVar6];
    uVar9 = 0;
    do {
      if (bVar7 - 1 < 4) {
        lVar6 = *param_2;
        switch((uint)bVar7) {
        case 1:
          dVar5 = (double)*(float *)(lVar6 + uVar9 * 8);
          break;
        case 2:
          dVar5 = *(double *)(lVar6 + uVar9 * 8);
          break;
        case 3:
          dVar5 = (double)*(int *)(lVar6 + uVar9 * 8);
          break;
        case 4:
          dVar5 = (double)*(byte *)(lVar6 + uVar9 * 8);
        }
      }
      else {
        dVar5 = 0.0;
      }
      *(double *)(*param_3 + uVar9 * 8) = dVar5;
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    if ('\x03' < cVar1) {
      return;
    }
  }
  memset(*param_3 + (longlong)cVar1 * 8,0,(ulonglong)(3 - uVar8) * 8 + 8);
  return;
}



// FUNCTION 147d132e5 FUN_147d132e5 body=264 status=ok
// SIG undefined FUN_147d132e5(void)

void FUN_147d132e5(byte param_1,longlong *param_2,float *param_3)

{
  char cVar1;
  double *pdVar2;
  float fVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  
  bVar5 = 0x1c;
  if (param_1 < 0x1c) {
    bVar5 = param_1;
  }
  lVar4 = (ulonglong)bVar5 * 0x10;
  cVar1 = (&DAT_14aa842ba)[lVar4];
  if ((longlong)cVar1 == 1) {
    if ((byte)(&DAT_14aa842b9)[lVar4] - 1 < 4) {
      pdVar2 = (double *)*param_2;
      switch((uint)(byte)(&DAT_14aa842b9)[lVar4]) {
      case 1:
        fVar3 = (float)(int)*(float *)pdVar2;
        break;
      case 2:
        fVar3 = (float)(int)*pdVar2;
        break;
      case 3:
        fVar3 = *(float *)pdVar2;
        break;
      case 4:
        fVar3 = (float)(uint)(*(char *)pdVar2 != '\0');
      }
    }
    else {
      fVar3 = 0.0;
    }
    *param_3 = fVar3;
    param_3[1] = fVar3;
    param_3[2] = fVar3;
    param_3[3] = fVar3;
    return;
  }
  uVar6 = 4;
  if (cVar1 < '\x04') {
    uVar6 = (int)cVar1;
  }
  if ('\0' < cVar1) {
    bVar5 = (&DAT_14aa842b9)[lVar4];
    uVar7 = 0;
    do {
      fVar3 = 0.0;
      if (bVar5 - 1 < 4) {
        lVar4 = *param_2;
        switch((uint)bVar5) {
        case 1:
          fVar3 = (float)(int)*(float *)(lVar4 + uVar7 * 8);
          break;
        case 2:
          fVar3 = (float)(int)*(double *)(lVar4 + uVar7 * 8);
          break;
        case 3:
          fVar3 = *(float *)(lVar4 + uVar7 * 8);
          break;
        case 4:
          fVar3 = (float)(uint)(*(char *)(lVar4 + uVar7 * 8) != '\0');
        }
      }
      param_3[uVar7] = fVar3;
      uVar7 = uVar7 + 1;
    } while (uVar6 != uVar7);
    if ('\x03' < cVar1) {
      return;
    }
  }
  memset(param_3 + cVar1,0,(ulonglong)(3 - uVar6) * 4 + 4);
  return;
}



// FUNCTION 147d133ed FUN_147d133ed body=271 status=ok
// SIG undefined FUN_147d133ed(void)

void FUN_147d133ed(byte param_1,longlong *param_2,float *param_3)

{
  char cVar1;
  double *pdVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  
  bVar4 = 0x1c;
  if (param_1 < 0x1c) {
    bVar4 = param_1;
  }
  lVar3 = (ulonglong)bVar4 * 0x10;
  cVar1 = (&DAT_14aa842ba)[lVar3];
  if ((longlong)cVar1 == 1) {
    if ((byte)(&DAT_14aa842b9)[lVar3] - 1 < 4) {
      pdVar2 = (double *)*param_2;
      switch((uint)(byte)(&DAT_14aa842b9)[lVar3]) {
      case 1:
        fVar7 = *(float *)pdVar2;
        break;
      case 2:
        fVar7 = (float)*pdVar2;
        break;
      case 3:
        fVar7 = (float)*(int *)pdVar2;
        break;
      case 4:
        fVar7 = (float)*(byte *)pdVar2;
      }
    }
    else {
      fVar7 = 0.0;
    }
    *param_3 = fVar7;
    param_3[1] = fVar7;
    param_3[2] = fVar7;
    param_3[3] = fVar7;
    return;
  }
  uVar5 = 4;
  if (cVar1 < '\x04') {
    uVar5 = (int)cVar1;
  }
  if ('\0' < cVar1) {
    bVar4 = (&DAT_14aa842b9)[lVar3];
    uVar6 = 0;
    do {
      if (bVar4 - 1 < 4) {
        lVar3 = *param_2;
        switch((uint)bVar4) {
        case 1:
          fVar7 = *(float *)(lVar3 + uVar6 * 8);
          break;
        case 2:
          fVar7 = (float)*(double *)(lVar3 + uVar6 * 8);
          break;
        case 3:
          fVar7 = (float)*(int *)(lVar3 + uVar6 * 8);
          break;
        case 4:
          fVar7 = (float)*(byte *)(lVar3 + uVar6 * 8);
        }
      }
      else {
        fVar7 = 0.0;
      }
      param_3[uVar6] = fVar7;
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
    if ('\x03' < cVar1) {
      return;
    }
  }
  memset(param_3 + cVar1,0,(ulonglong)(3 - uVar5) * 4 + 4);
  return;
}



// FUNCTION 147d134fc FUN_147d134fc body=64 status=ok
// SIG undefined FUN_147d134fc(void)

void FUN_147d134fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147d1353c FUN_147d1353c body=220 status=ok
// SIG undefined FUN_147d1353c(void)

int FUN_147d1353c(uint param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if (DAT_14cb059a8 != DAT_14cb059d4) {
    puVar8 = &DAT_14cb059d8;
    if (DAT_14cb059e0 != (undefined *)0x0) {
      puVar8 = DAT_14cb059e0;
    }
    iVar1 = *(int *)(puVar8 + (ulonglong)(DAT_14cb059e8 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_2[1];
LAB_147d13596:
      lVar9 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(DAT_14cb059a0 + 8 + lVar9);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar4 = 0;
        do {
          uVar6 = *(ushort *)(*(longlong *)(DAT_14cb059a0 + lVar9) + lVar4);
          uVar7 = (ulonglong)uVar6;
          uVar5 = *(ushort *)(*param_2 + lVar4);
          if (uVar6 == uVar5) {
            if (uVar6 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar5 | uVar6)) goto LAB_147d1360d;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            uVar10 = (ulonglong)uVar5;
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar10]) goto LAB_147d1360d;
          }
          lVar4 = lVar4 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_147d135fe;
    }
  }
  return -1;
LAB_147d1360d:
  if (uVar6 == uVar5) {
    return iVar1;
  }
LAB_147d135fe:
  iVar1 = *(int *)(DAT_14cb059a0 + 0x18 + lVar9);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_147d13596;
}



// FUNCTION 147d13618 FUN_147d13618 body=73 status=ok
// SIG undefined FUN_147d13618(void)

void FUN_147d13618(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = 0;
  bVar2 = DAT_14c950c29;
  do {
    lVar1 = *(longlong *)(param_2 + lVar3 * 8);
    *(longlong *)(param_1 + lVar3 * 8) = lVar1;
    if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
      FUN_14689c22e();
      bVar2 = DAT_14c950c29;
    }
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 147d13662 FUN_147d13662 body=108 status=ok
// SIG undefined FUN_147d13662(void)

longlong FUN_147d13662(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"Transform",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"TransformPositionHigh",0);
  return param_1;
}



// FUNCTION 147d136ce FUN_147d136ce body=123 status=ok
// SIG undefined FUN_147d136ce(void)

void FUN_147d136ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_144a928e2(local_68,param_3);
  FUN_1447f9c4a(param_2,param_1 + 0xe0,local_68,0);
  FUN_1447f9a48(param_2,param_1 + 0xe6,&DAT_14c846330,0);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1374a FUN_147d1374a body=167 status=ok
// SIG undefined FUN_147d1374a(void)

longlong FUN_147d1374a(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",0);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"TextureComponentReplicate",0);
  FUN_1474409b8(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"TextureComponentReplicateAlpha",0);
  return param_1;
}



// FUNCTION 147d137f2 FUN_147d137f2 body=42 status=ok
// SIG undefined FUN_147d137f2(void)

void FUN_147d137f2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1400d0b52();
  FUN_1400d0a4e(param_1,param_2,param_4);
  return;
}



// FUNCTION 147d1381c FUN_147d1381c body=112 status=ok
// SIG undefined FUN_147d1381c(void)

longlong FUN_147d1381c(longlong param_1,longlong param_2)

{
  FUN_147d1374a();
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined2 *)(param_1 + 0x104) = 0;
  FUN_1474409b8(param_1 + 0x100,*(undefined8 *)(param_2 + 0x28),L"Gamma",0);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined2 *)(param_1 + 0x10c) = 0;
  FUN_1474409b8(param_1 + 0x108,*(undefined8 *)(param_2 + 0x28),L"ClipRef",1);
  return param_1;
}



// FUNCTION 147d1388c FUN_147d1388c body=191 status=ok
// SIG undefined FUN_147d1388c(void)

void FUN_147d1388c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400d0b52();
  local_58 = param_6;
  local_54 = param_5;
  FUN_1400d0a4e(param_1,param_2,param_4);
  FUN_1447e4b92(param_2,param_1 + 0x100,&local_54,0);
  FUN_1447e4b92(param_2,param_1 + 0x108,&local_58,0);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1394c FUN_147d1394c body=354 status=ok
// SIG undefined FUN_147d1394c(void)

longlong FUN_147d1394c(longlong param_1,longlong param_2)

{
  FUN_147d1381c();
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x13e) = 0;
  FUN_1474409b8(param_1 + 0x110,*(undefined8 *)(param_2 + 0x28),L"SmoothWidth",0);
  FUN_1474409b8(param_1 + 0x116,*(undefined8 *)(param_2 + 0x28),L"EnableShadow",0);
  FUN_1474409b8(param_1 + 0x11c,*(undefined8 *)(param_2 + 0x28),L"ShadowDirection",0);
  FUN_1474409b8(param_1 + 0x122,*(undefined8 *)(param_2 + 0x28),L"ShadowColor",0);
  FUN_1474409b8(param_1 + 0x128,*(undefined8 *)(param_2 + 0x28),L"ShadowSmoothWidth",0);
  FUN_1474409b8(param_1 + 0x12e,*(undefined8 *)(param_2 + 0x28),L"EnableGlow",0);
  FUN_1474409b8(param_1 + 0x134,*(undefined8 *)(param_2 + 0x28),L"GlowColor",0);
  FUN_1474409b8(param_1 + 0x13a,*(undefined8 *)(param_2 + 0x28),L"GlowOuterRadius",0);
  FUN_1474409b8(param_1 + 0x140,*(undefined8 *)(param_2 + 0x28),L"GlowInnerRadius",0);
  return param_1;
}



// FUNCTION 147d13aae FUN_147d13aae body=559 status=ok
// SIG undefined FUN_147d13aae(void)

void FUN_147d13aae(longlong param_1,undefined8 param_2,undefined8 param_3,float param_4,uint param_5
                  ,undefined8 param_6,byte param_7,double *param_8,undefined8 param_9,
                  undefined8 param_10,uint *param_11)

{
  byte bVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 auStack_98 [44];
  float local_6c;
  float local_68;
  uint local_64;
  ulonglong local_60;
  
  puVar3 = param_11;
  bVar1 = param_7;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400d0b52(param_1,param_2,0);
  local_64 = param_5;
  local_6c = param_4;
  FUN_1400d0a4e(param_1,param_2,param_3);
  FUN_1447e4b92(param_2,param_1 + 0x100,&local_6c,0);
  FUN_1447e4b92(param_2,param_1 + 0x108,&local_64,0);
  FUN_1447e4b92(param_2,param_1 + 0x110,&param_6,0);
  local_64 = (uint)bVar1;
  FUN_144abbe48(param_2,param_1 + 0x116,&local_64,0);
  uVar2 = param_9;
  if (bVar1 != 0) {
    local_68 = (float)param_8[1];
    local_6c = (float)*param_8;
    FUN_1472f9f03(param_2,param_1 + 0x11c,&local_6c,0);
    FUN_1447e4998(param_2,param_1 + 0x122,uVar2,0);
    FUN_1447e4b92(param_2,param_1 + 0x128,&param_10,0);
  }
  local_6c = (float)(*puVar3 & 1);
  FUN_144abbe48(param_2,param_1 + 0x12e,&local_6c,0);
  if ((*puVar3 & 1) != 0) {
    FUN_1447e4998(param_2,param_1 + 0x134,puVar3 + 1,0);
    local_68 = (float)*(double *)(puVar3 + 8);
    local_6c = (float)*(double *)(puVar3 + 6);
    FUN_1472f9f03(param_2,param_1 + 0x13a,&local_6c,0);
    local_68 = (float)*(double *)(puVar3 + 0xc);
    local_6c = (float)*(double *)(puVar3 + 10);
    FUN_1472f9f03(param_2,param_1 + 0x140,&local_6c,0);
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d13cde FUN_147d13cde body=98 status=ok
// SIG undefined FUN_147d13cde(void)

longlong FUN_147d13cde(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  return param_1;
}



// FUNCTION 147d13d40 FUN_147d13d40 body=28 status=ok
// SIG undefined FUN_147d13d40(void)

void FUN_147d13d40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140076ed4(param_2,param_1 + 0xe0,param_1 + 0xe4,param_3);
  return;
}



// FUNCTION 147d13d5c FUN_147d13d5c body=173 status=ok
// SIG undefined FUN_147d13d5c(void)

longlong FUN_147d13d5c(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"InTexture",1);
  FUN_147440a6c(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"InTextureSampler",0);
  FUN_1474409b8(param_1 + 0xe8,*(undefined8 *)(param_2 + 0x28),L"ColorWeights",0);
  FUN_1474409b8(param_1 + 0xee,*(undefined8 *)(param_2 + 0x28),L"Gamma",0);
  return param_1;
}



// FUNCTION 147d13e0a FUN_147d13e0a body=156 status=ok
// SIG undefined FUN_147d13e0a(void)

void FUN_147d13e0a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140076ed4(param_2,param_1 + 0xe0,param_1 + 0xe4,param_3);
  FUN_144a928e2(local_68,param_4);
  FUN_1447f9c4a(param_2,param_1 + 0xe8,local_68,0);
  FUN_1447e4b92(param_2,param_1 + 0xee,&stack0x00000028,0);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d13ea8 FUN_147d13ea8 body=42 status=ok
// SIG undefined FUN_147d13ea8(void)

void FUN_147d13ea8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147d13ed6 FUN_147d13ed6 body=42 status=ok
// SIG undefined FUN_147d13ed6(void)

void FUN_147d13ed6(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147d13f04 FUN_147d13f04 body=42 status=ok
// SIG undefined FUN_147d13f04(void)

void FUN_147d13f04(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147d13f3a FUN_147d13f3a body=39 status=ok
// SIG undefined FUN_147d13f3a(void)

void FUN_147d13f3a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147d13662(uVar1,param_1);
  return;
}



// FUNCTION 147d13f62 FUN_147d13f62 body=61 status=ok
// SIG undefined FUN_147d13f62(void)

longlong FUN_147d13f62(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  return lVar1;
}



// FUNCTION 147d13fa0 FUN_147d13fa0 body=42 status=ok
// SIG undefined FUN_147d13fa0(void)

void FUN_147d13fa0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147d13fd6 FUN_147d13fd6 body=39 status=ok
// SIG undefined FUN_147d13fd6(void)

void FUN_147d13fd6(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147d1374a(uVar1,param_1);
  return;
}



// FUNCTION 147d13ffe FUN_147d13ffe body=57 status=ok
// SIG undefined FUN_147d13ffe(void)

longlong FUN_147d13ffe(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return lVar1;
}



// FUNCTION 147d14038 FUN_147d14038 body=42 status=ok
// SIG undefined FUN_147d14038(void)

void FUN_147d14038(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x100);
  return;
}



// FUNCTION 147d1406e FUN_147d1406e body=39 status=ok
// SIG undefined FUN_147d1406e(void)

void FUN_147d1406e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147d1374a(uVar1,param_1);
  return;
}



// FUNCTION 147d14096 FUN_147d14096 body=57 status=ok
// SIG undefined FUN_147d14096(void)

longlong FUN_147d14096(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x100,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return lVar1;
}



// FUNCTION 147d140d0 FUN_147d140d0 body=42 status=ok
// SIG undefined FUN_147d140d0(void)

void FUN_147d140d0(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147d14106 FUN_147d14106 body=93 status=ok
// SIG undefined FUN_147d14106(void)

longlong FUN_147d14106(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147d1374a(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x100) = 0;
  *(undefined2 *)(lVar1 + 0x104) = 0;
  FUN_1474409b8(lVar1 + 0x100,*(undefined8 *)(param_1 + 0x28),L"Gamma",0);
  return lVar1;
}



// FUNCTION 147d14164 FUN_147d14164 body=68 status=ok
// SIG undefined FUN_147d14164(void)

longlong FUN_147d14164(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  return lVar1;
}



// FUNCTION 147d141a8 FUN_147d141a8 body=42 status=ok
// SIG undefined FUN_147d141a8(void)

void FUN_147d141a8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147d141de FUN_147d141de body=93 status=ok
// SIG undefined FUN_147d141de(void)

longlong FUN_147d141de(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147d1374a(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x100) = 0;
  *(undefined2 *)(lVar1 + 0x104) = 0;
  FUN_1474409b8(lVar1 + 0x100,*(undefined8 *)(param_1 + 0x28),L"Gamma",0);
  return lVar1;
}



// FUNCTION 147d1423c FUN_147d1423c body=68 status=ok
// SIG undefined FUN_147d1423c(void)

longlong FUN_147d1423c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  return lVar1;
}



// FUNCTION 147d14280 FUN_147d14280 body=42 status=ok
// SIG undefined FUN_147d14280(void)

void FUN_147d14280(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x108);
  return;
}



// FUNCTION 147d142b6 FUN_147d142b6 body=93 status=ok
// SIG undefined FUN_147d142b6(void)

longlong FUN_147d142b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147d1374a(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0x100) = 0;
  *(undefined2 *)(lVar1 + 0x104) = 0;
  FUN_1474409b8(lVar1 + 0x100,*(undefined8 *)(param_1 + 0x28),L"Gamma",0);
  return lVar1;
}



// FUNCTION 147d14314 FUN_147d14314 body=68 status=ok
// SIG undefined FUN_147d14314(void)

longlong FUN_147d14314(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x108,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  return lVar1;
}



// FUNCTION 147d14358 FUN_147d14358 body=42 status=ok
// SIG undefined FUN_147d14358(void)

void FUN_147d14358(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147d1438e FUN_147d1438e body=39 status=ok
// SIG undefined FUN_147d1438e(void)

void FUN_147d1438e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147d1381c(uVar1,param_1);
  return;
}



// FUNCTION 147d143b6 FUN_147d143b6 body=87 status=ok
// SIG undefined FUN_147d143b6(void)

longlong FUN_147d143b6(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  return lVar1;
}



// FUNCTION 147d1440e FUN_147d1440e body=42 status=ok
// SIG undefined FUN_147d1440e(void)

void FUN_147d1440e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x110);
  return;
}



// FUNCTION 147d14444 FUN_147d14444 body=39 status=ok
// SIG undefined FUN_147d14444(void)

void FUN_147d14444(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147d1381c(uVar1,param_1);
  return;
}



// FUNCTION 147d1446c FUN_147d1446c body=87 status=ok
// SIG undefined FUN_147d1446c(void)

longlong FUN_147d1446c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x110,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  return lVar1;
}



// FUNCTION 147d144c4 FUN_147d144c4 body=42 status=ok
// SIG undefined FUN_147d144c4(void)

void FUN_147d144c4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0x148);
  return;
}



// FUNCTION 147d144fa FUN_147d144fa body=39 status=ok
// SIG undefined FUN_147d144fa(void)

void FUN_147d144fa(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x148,0x10);
  FUN_147d1394c(uVar1,param_1);
  return;
}



// FUNCTION 147d14522 FUN_147d14522 body=113 status=ok
// SIG undefined FUN_147d14522(void)

longlong FUN_147d14522(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0x148,0x10);
  FUN_147432e26(lVar1);
  *(undefined4 *)(lVar1 + 0x108) = 0;
  *(undefined2 *)(lVar1 + 0x10c) = 0;
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0xfe) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0x13e) = 0;
  return lVar1;
}



// FUNCTION 147d14594 FUN_147d14594 body=42 status=ok
// SIG undefined FUN_147d14594(void)

void FUN_147d14594(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147d145de FUN_147d145de body=39 status=ok
// SIG undefined FUN_147d145de(void)

void FUN_147d145de(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147d13cde(uVar1,param_1);
  return;
}



// FUNCTION 147d14606 FUN_147d14606 body=51 status=ok
// SIG undefined FUN_147d14606(void)

longlong FUN_147d14606(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  return lVar1;
}



// FUNCTION 147d1463a FUN_147d1463a body=42 status=ok
// SIG undefined FUN_147d1463a(void)

void FUN_147d1463a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 147d14684 FUN_147d14684 body=39 status=ok
// SIG undefined FUN_147d14684(void)

void FUN_147d14684(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147d13d5c(uVar1,param_1);
  return;
}



// FUNCTION 147d146ac FUN_147d146ac body=60 status=ok
// SIG undefined FUN_147d146ac(void)

longlong FUN_147d146ac(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147432e26(lVar1);
  *(undefined8 *)(lVar1 + 0xe0) = 0;
  *(undefined8 *)(lVar1 + 0xe8) = 0;
  *(undefined4 *)(lVar1 + 0xf0) = 0;
  return lVar1;
}



// FUNCTION 147d146f4 FUN_147d146f4 body=257 status=ok
// SIG undefined FUN_147d146f4(void)

void FUN_147d146f4(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((DAT_14cb0d2b0 != 0) && (*(char *)(DAT_14cb0d2b0 + 0xd59) == '\x01')) {
    FUN_14793d058(&local_28,0x10,1,0);
    uVar5 = (ulonglong)local_18;
    lVar3 = local_28;
    if ((int)local_18 < local_20 && -1 < (int)local_18) {
      iVar2 = local_20;
      do {
        lVar1 = *(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8);
        uVar4 = (uint)uVar5;
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x294) < *(int *)(lVar1 + 0x268))) {
          FUN_147d252e4(local_40,lVar1,0);
          FUN_147d2548a(local_40);
          lVar3 = local_28;
          iVar2 = local_20;
          uVar4 = local_18;
        }
        uVar5 = (longlong)(int)uVar4;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_18 = (uint)uVar5;
          if ((longlong)iVar2 <= (longlong)uVar5) break;
        } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_18 < iVar2));
    }
    if (lVar3 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d147f6 FUN_147d147f6 body=79 status=ok
// SIG undefined FUN_147d147f6(void)

undefined8 * FUN_147d147f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1447a6eca(param_1,iVar1);
      FUN_1447a6e5e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d14846 FUN_147d14846 body=107 status=ok
// SIG undefined FUN_147d14846(void)

ulonglong FUN_147d14846(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x4b0))();
  if (0 < (longlong)(int)plVar2[1]) {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*plVar2 + uVar3 * 8);
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 0x38) == *param_2)) &&
          (*(int *)(lVar1 + 0x3c) == param_2[1])) &&
         ((*(int *)(lVar1 + 0x40) == param_2[2] && (*(int *)(lVar1 + 0x44) == param_2[3])))) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((longlong)(int)plVar2[1] != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 147d148b2 FUN_147d148b2 body=102 status=ok
// SIG undefined FUN_147d148b2(void)

void FUN_147d148b2(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  switchD_143c3d4dc::caseD_38();
  if (param_1[0x1d] != 0) {
    FUN_147d2130c(param_1[0x1d],param_2);
  }
  lVar1 = (**(code **)(*param_1 + 0x370))(param_1);
  FUN_14484255c(param_2,(longlong)*(int *)(lVar1 + 0xc) << 6);
  uVar2 = (**(code **)(*param_1 + 0x310))(param_1);
  uVar2 = FUN_14793bbb2(uVar2);
  FUN_14484255c(param_2,uVar2);
  return;
}



// FUNCTION 147d14980 FUN_147d14980 body=73 status=ok
// SIG undefined FUN_147d14980(void)

void FUN_147d14980(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  switchD_143c3d4dc::caseD_2e();
  uVar2 = (**(code **)(*param_1 + 0x3f8))(param_1);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 147d149d0 FUN_147d149d0 body=68 status=ok
// SIG undefined FUN_147d149d0(void)

void FUN_147d149d0(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  *(int *)(local_10 + 0x94) = *(int *)(local_10 + 0x94) + 1;
  FUN_1468be722();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d14a1c FUN_147d14a1c body=1369 status=ok
// SIG undefined FUN_147d14a1c(void)

void FUN_147d14a1c(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_238 [40];
  undefined1 local_210 [8];
  undefined8 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_238;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x388))();
  uVar8 = 0;
  if (puVar4 == (undefined8 *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    if (0 < *(int *)(puVar4 + 1)) {
      lVar5 = *(longlong *)*puVar4;
      iVar6 = 0;
      if (0 < (longlong)*(int *)(lVar5 + 0x18)) {
        lVar7 = 0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + *(int *)(*(longlong *)(lVar5 + 0x10) + 8 + lVar7);
          lVar7 = lVar7 + 0xf8;
        } while ((longlong)*(int *)(lVar5 + 0x18) * 0xf8 - lVar7 != 0);
      }
      uVar8 = *(undefined4 *)(lVar5 + 0xec);
    }
  }
  uVar1 = (**(code **)(*param_1 + 0x3c0))(param_1);
  uVar2 = FUN_147d14fa6(param_1);
  uVar3 = FUN_147d14ff0(param_1);
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,uVar2);
  FUN_1446ddc76(&local_a0,"NaniteTriangles",1);
  local_80 = local_a0;
  local_78 = (undefined4)local_98;
  uStack_74 = local_98._4_4_;
  uStack_70 = (undefined4)uStack_90;
  uStack_6c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,uVar3);
  FUN_1446ddc76(&local_c8,"NaniteVertices",1);
  local_c0 = local_c8;
  local_b8 = (undefined4)local_98;
  uStack_b4 = local_98._4_4_;
  uStack_b0 = (undefined4)uStack_90;
  uStack_ac = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,uVar8);
  FUN_1446ddc76(&local_f0,"Vertices",1);
  local_e8 = local_f0;
  local_e0 = (undefined4)local_98;
  uStack_dc = local_98._4_4_;
  uStack_d8 = (undefined4)uStack_90;
  uStack_d4 = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_d0 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,iVar6);
  FUN_1446ddc76(&local_118,"Triangles",1);
  local_110 = local_118;
  local_108 = (undefined4)local_98;
  uStack_104 = local_98._4_4_;
  uStack_100 = (undefined4)uStack_90;
  uStack_fc = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_f8 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,uVar1);
  FUN_1446ddc76(&local_140,&DAT_14aa8fb77,1);
  local_138 = local_140;
  local_130 = (undefined4)local_98;
  uStack_12c = local_98._4_4_;
  uStack_128 = (undefined4)uStack_90;
  uStack_124 = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_120 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,*(undefined4 *)(lVar5 + 8));
  FUN_1446ddc76(&local_168,"Bones",1);
  local_160 = local_168;
  local_158 = (undefined4)local_98;
  uStack_154 = local_98._4_4_;
  uStack_150 = (undefined4)uStack_90;
  uStack_14c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_148 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  lVar5 = (**(code **)(*param_1 + 0x430))(param_1);
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,*(undefined4 *)(lVar5 + 8));
  FUN_1446ddc76(&local_190,"MorphTargets",1);
  local_188 = local_190;
  local_180 = (undefined4)local_98;
  uStack_17c = local_98._4_4_;
  uStack_178 = (undefined4)uStack_90;
  uStack_174 = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_170 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_98 = 0;
  uStack_90 = 0;
  FUN_144a83b10(&local_98,(int)param_1[0xa1]);
  FUN_1446ddc76(&local_1b8,"SkinWeightProfiles",1);
  local_1b0 = local_1b8;
  local_1a8 = (undefined4)local_98;
  uStack_1a4 = local_98._4_4_;
  uStack_1a0 = (undefined4)uStack_90;
  uStack_19c = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_198 = 2;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_98,L"%llu",0);
  FUN_1446ddc76(&local_1e0,"EstTotalCompressedSize",1);
  local_1d8 = local_1e0;
  local_1d0 = (undefined4)local_98;
  uStack_1cc = local_98._4_4_;
  uStack_1c8 = (undefined4)uStack_90;
  uStack_1c4 = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_1c0 = 0x800000002;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_98,L"%llu",0);
  FUN_1446ddc76(&local_208,"EstNaniteCompressedSize",1);
  local_200 = local_208;
  local_1f8 = (undefined4)local_98;
  uStack_1f4 = local_98._4_4_;
  uStack_1f0 = (undefined4)uStack_90;
  uStack_1ec = uStack_90._4_4_;
  local_98 = 0;
  uStack_90 = 0;
  local_1e8 = 0x800000002;
  FUN_1407c67d8(param_2);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_210,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_210);
  if ((local_60 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d14f76 FUN_147d14f76 body=47 status=ok
// SIG undefined FUN_147d14f76(void)

int FUN_147d14f76(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x18) < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x10) + 8 + lVar2);
      lVar2 = lVar2 + 0xf8;
    } while ((longlong)*(int *)(param_1 + 0x18) * 0xf8 - lVar2 != 0);
  }
  return iVar1;
}



// FUNCTION 147d14fa6 FUN_147d14fa6 body=74 status=ok
// SIG undefined FUN_147d14fa6(void)

undefined4 FUN_147d14fa6(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x388))();
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = FUN_147d213a4(lVar2);
    uVar3 = 0;
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x388))(param_1);
      if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8)) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x98);
      }
    }
  }
  return uVar3;
}



// FUNCTION 147d14ff0 FUN_147d14ff0 body=74 status=ok
// SIG undefined FUN_147d14ff0(void)

undefined4 FUN_147d14ff0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x388))();
  uVar3 = 0;
  if (lVar2 != 0) {
    cVar1 = FUN_147d213a4(lVar2);
    uVar3 = 0;
    if (cVar1 != '\0') {
      lVar2 = (**(code **)(*param_1 + 0x388))(param_1);
      if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 8)) {
        uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 0x9c);
      }
    }
  }
  return uVar3;
}



// FUNCTION 147d1503a FUN_147d1503a body=56 status=ok
// SIG undefined FUN_147d1503a(void)

void FUN_147d1503a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_147d15074(param_1,param_2,local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d15074 FUN_147d15074 body=220 status=ok
// SIG undefined FUN_147d15074(void)

undefined8 FUN_147d15074(longlong *param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  *param_3 = -1;
  if ((param_2 != 0) && ((int)param_1[0x85] != *(int *)((longlong)param_1 + 0x454))) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    plVar2 = param_1 + 0x8b;
    if ((longlong *)param_1[0x8c] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x8c];
    }
    iVar4 = *(int *)((longlong)plVar2 +
                    (ulonglong)
                    ((int)param_1[0x8d] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) +
                    ((int)param_2 << 0x10 | (uint)(ushort)param_2) + (uVar1 << 0x13 | uVar1) +
                    (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      while (plVar2 = (longlong *)(param_1[0x84] + (longlong)iVar4 * 0x14), *plVar2 != param_2) {
        iVar4 = *(int *)((longlong)plVar2 + 0xc);
        if (iVar4 == -1) {
          return 0;
        }
      }
      plVar3 = plVar2 + 1;
      if (plVar3 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
        *param_3 = (int)*plVar3;
        plVar2 = (longlong *)(**(code **)(*param_1 + 0x430))();
        return *(undefined8 *)(*plVar2 + (longlong)(int)*plVar3 * 8);
      }
    }
  }
  return 0;
}



// FUNCTION 147d15150 FUN_147d15150 body=201 status=ok
// SIG undefined FUN_147d15150(void)

undefined8 FUN_147d15150(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  *param_3 = 0xffffffff;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c))) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x238);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x240) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar3 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0x1f8) + (longlong)iVar3 * 0x90,
            *(longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar3 * 0x90) != param_2) {
        iVar3 = *(int *)(lVar2 + 0x80);
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (lVar2 == 0) {
        return 0;
      }
      if (lVar2 == -0x10) {
        return 0;
      }
      *param_3 = *(undefined4 *)(lVar2 + 0x78);
      return *(undefined8 *)(lVar2 + 0x70);
    }
  }
  return 0;
}



// FUNCTION 147d1521a FUN_147d1521a body=60 status=ok
// SIG undefined FUN_147d1521a(void)

int FUN_147d1521a(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar1 = param_1[0x9d];
  lVar3 = (**(code **)(*param_1 + 0x3f0))();
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x3f0))(param_1);
    iVar2 = *(int *)(lVar3 + 0x1b0);
  }
  return iVar2 + (int)lVar1;
}



// FUNCTION 147d15256 FUN_147d15256 body=110 status=ok
// SIG undefined FUN_147d15256(void)

undefined8 FUN_147d15256(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)param_1[0x9d];
  if (param_2 < (int)param_1[0x9d]) {
    param_1 = param_1 + 0x9c;
    iVar3 = param_2;
LAB_147d15270:
    uVar2 = *(undefined8 *)(*param_1 + (longlong)iVar3 * 8);
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
      if (iVar3 < *(int *)(lVar1 + 0x1b0)) {
        lVar1 = (**(code **)(*param_1 + 0x3f0))(param_1);
        param_1 = (longlong *)(lVar1 + 0x1a8);
        goto LAB_147d15270;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 147d152c4 FUN_147d152c4 body=88 status=ok
// SIG undefined FUN_147d152c4(void)

void FUN_147d152c4(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    lVar1 = FUN_14099beef();
    *(byte *)(lVar1 + 0xb8) = *(byte *)(lVar1 + 0xb8) | 0x20;
    FUN_1406555d4(lVar1,param_1,0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x2b8) = lVar1;
  }
  return;
}



// FUNCTION 147d15330 FUN_147d15330 body=199 status=ok
// SIG undefined FUN_147d15330(void)

void FUN_147d15330(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    local_30 = *(longlong *)(param_2 + 0x10);
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x80];
    *(uint *)(param_1 + 0x80) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x404) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x7f,iVar1);
    }
    *(longlong *)(param_1[0x7f] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d153f8 FUN_147d153f8 body=281 status=ok
// SIG undefined FUN_147d153f8(void)

void FUN_147d153f8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x400);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d1544b:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147d1546d;
        }
        else {
          if (lVar5 != 0) goto LAB_147d1544b;
LAB_147d1546d:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x400);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x400);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x3f8) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x3f8) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x400);
            }
            *(int *)(param_1 + 0x400) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x3f8));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 147d15512 FUN_147d15512 body=203 status=ok
// SIG undefined FUN_147d15512(void)

undefined8 * FUN_147d15512(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x388))();
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x310))(param_1);
    lVar3 = (longlong)*(int *)(*(longlong *)*puVar1 + 0x18);
    if (lVar3 < 1) {
      iVar5 = 0;
    }
    else {
      lVar4 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + *(int *)(*(longlong *)(*(longlong *)*puVar1 + 0x10) + 8 + lVar4);
        lVar4 = lVar4 + 0xf8;
      } while (lVar3 * 0xf8 - lVar4 != 0);
    }
    FUN_140002266(&local_30,L"%d Triangles, %d Bones",iVar5,*(undefined4 *)(lVar2 + 8));
    if ((undefined8 *)&local_30 == param_2) {
      if (CONCAT44(uStack_2c,local_30) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_2 = local_30;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_2c;
      *(undefined4 *)(param_2 + 1) = uStack_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d155de FUN_147d155de body=106 status=ok
// SIG undefined FUN_147d155de(void)

undefined8 FUN_147d155de(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x388))();
  if ((plVar1 != (longlong *)0x0) && ((longlong)(int)plVar1[1] != 0)) {
    lVar2 = 0;
    do {
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(*(longlong *)(*plVar1 + lVar2) + 0x18))) {
        lVar2 = *(longlong *)(*(longlong *)(*plVar1 + lVar2) + 0x10);
        if (*(int *)(lVar2 + 0x30 + (ulonglong)param_2 * 0xf8) == 0) {
          return 0;
        }
        lVar2 = *(longlong *)(lVar2 + (ulonglong)param_2 * 0xf8 + 0x28);
        return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(int *)(lVar2 + 8) != 0);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)plVar1[1] * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 147d15648 FUN_147d15648 body=377 status=ok
// SIG undefined FUN_147d15648(void)

longlong FUN_147d15648(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0x2d8);
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2d0) + lVar6 * 8);
      if (lVar5 != 0) {
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_88 = 0;
        if (param_2 == 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
        }
        else {
          FUN_1400bbfae(&local_80,param_2);
          uStack_a0 = CONCAT44(uStack_7c,local_80);
          local_98 = CONCAT44(uStack_74,uStack_78);
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          uStack_90 = CONCAT44(uStack_6c,local_70);
          local_88 = CONCAT44(uStack_64,uStack_68);
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if (cVar2 != '\0') {
            uVar1 = *(uint *)(param_2 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
              local_a8 = 0;
              goto LAB_147d15751;
            }
          }
          FUN_14485c47a(&local_a8,param_2);
        }
LAB_147d15751:
        cVar2 = FUN_144a7afa6(lVar5 + 0x120,&uStack_a0);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        if (cVar2 != '\0') goto LAB_147d1578f;
        iVar3 = *(int *)(param_1 + 0x2d8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  lVar5 = 0;
LAB_147d1578f:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d157c2 FUN_147d157c2 body=123 status=ok
// SIG undefined FUN_147d157c2(void)

void FUN_147d157c2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 147d1583e FUN_147d1583e body=88 status=ok
// SIG undefined FUN_147d1583e(void)

undefined8 * FUN_147d1583e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d1efea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d15896 FUN_147d15896 body=587 status=ok
// SIG undefined FUN_147d15896(void)

void FUN_147d15896(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8 [3];
  undefined8 local_a0 [12];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar10 = (longlong *)(param_1 + -0xe0);
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x308))(plVar10);
  uVar1 = *(uint *)(lVar3 + 0x28);
  uVar13 = (ulonglong)uVar1;
  FUN_140ee6e62(param_2,uVar13);
  FUN_147d15ae2(param_3,uVar1);
  local_b8[0] = 0;
  local_b8[1] = 0;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x308))(plVar10);
  local_b8[2] = *(undefined8 *)(lVar3 + 0x30);
  local_a0[0]._0_4_ = *(undefined4 *)(lVar3 + 0x38);
  uVar4 = (**(code **)(*(longlong *)(param_1 + -0xe0) + 0x308))(plVar10);
  FUN_144a39936(uVar4,local_b8 + 2,local_b8);
  if (0 < (int)uVar1) {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar2) < uVar1) {
      FUN_1446f84a2(param_2);
    }
    memset((void *)((longlong)iVar2 * 8 + *param_2),0,uVar13 * 8);
    FUN_147d15b0c(param_3,uVar1);
    lVar3 = (**(code **)(*plVar10 + 0x308))(plVar10);
    local_c8 = (void *)0x0;
    local_c0 = *(int *)(lVar3 + 0x28);
    lVar8 = (longlong)local_c0;
    _Src = *(void **)(lVar3 + 0x20);
    if (lVar8 == 0) {
      local_bc = 0;
    }
    else {
      FUN_140816eac(&local_c8,local_c0,0);
      memcpy(local_c8,_Src,lVar8 * 0xc);
    }
    lVar3 = 1;
    lVar8 = 0;
    uVar12 = 0;
    do {
      *(undefined8 *)(*param_2 + uVar12 * 8) = *(undefined8 *)((longlong)local_c8 + lVar8);
      lVar9 = (longlong)*(int *)((longlong)local_c8 + lVar8 + 8);
      if (lVar9 == -1) {
        puVar7 = (undefined8 *)(lVar8 * 8 + local_b8[0]);
        puVar11 = local_a0;
        for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        plVar10 = (longlong *)(*param_3 + lVar3 * 8);
        plVar10[-1] = 0;
      }
      else {
        lVar9 = *(longlong *)((longlong)local_c8 + lVar9 * 0xc);
        puVar7 = (undefined8 *)(lVar8 * 8 + local_b8[0]);
        puVar11 = local_a0;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar11 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        }
        plVar10 = (longlong *)(*param_3 + lVar3 * 8);
        plVar10[-1] = lVar9;
      }
      plVar6 = local_b8 + 2;
      for (lVar9 = 0xd; lVar9 != 0; lVar9 = lVar9 + -1) {
        *plVar10 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar10 = plVar10 + 1;
      }
      uVar12 = uVar12 + 1;
      lVar3 = lVar3 + 0xe;
      lVar8 = lVar8 + 0xc;
    } while (uVar13 != uVar12);
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d15ae2 FUN_147d15ae2 body=41 status=ok
// SIG undefined FUN_147d15ae2(void)

void FUN_147d15ae2(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_147d1f11e();
  return;
}



// FUNCTION 147d15b0c FUN_147d15b0c body=62 status=ok
// SIG undefined FUN_147d15b0c(void)

void FUN_147d15b0c(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140813296(param_1,iVar1);
  }
  FUN_147d1f18b((longlong)iVar1 * 0x70 + *param_1,param_2);
  return;
}



// FUNCTION 147d15b4a FUN_147d15b4a body=249 status=ok
// SIG undefined FUN_147d15b4a(void)

/* WARNING: Removing unreachable block (ram,0x000147d15c0b) */

longlong * FUN_147d15b4a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x430))();
  lVar4 = plVar7[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *plVar7;
    lVar8 = 0;
    uVar5 = local_58;
    uVar6 = local_50;
    do {
      local_50 = uVar6;
      local_58 = uVar5;
      local_60 = *(undefined8 *)(*(longlong *)(lVar2 + lVar8) + 0x18);
      FUN_1400021e4(&local_60,&local_58);
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1447a1bd6(param_2,iVar1);
      }
      lVar3 = *param_2;
      lVar9 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar9) = 0;
      *(undefined8 *)(lVar3 + lVar9) = local_58;
      local_58 = 0;
      uVar5 = local_58;
      *(undefined4 *)(lVar3 + 8 + lVar9) = (undefined4)local_50;
      *(undefined4 *)(lVar3 + 0xc + lVar9) = local_50._4_4_;
      local_50 = 0;
      uVar6 = local_50;
      local_50 = 0;
      local_58 = 0;
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d15c44 FUN_147d15c44 body=258 status=ok
// SIG undefined FUN_147d15c44(void)

int FUN_147d15c44(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar5 = *(int *)(param_1 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar2 = param_1 + 0x28;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x40) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x40);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c != iVar4) || (uStack_48 != lVar2)) {
    do {
      iVar3 = *(int *)(*local_78 + 4 + (longlong)iStack_5c * 0x10);
      if (iVar3 < iVar5) {
        iVar5 = iVar3;
      }
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d15d48 FUN_147d15d48 body=53 status=ok
// SIG undefined FUN_147d15d48(void)

undefined4 FUN_147d15d48(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x3a0))();
  if (cVar1 == '\0') {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x398))(param_1);
  }
  else {
    param_1 = param_1 + 0x4b;
  }
  return (int)*param_1;
}



// FUNCTION 147d15db2 FUN_147d15db2 body=82 status=ok
// SIG undefined FUN_147d15db2(void)

undefined8 FUN_147d15db2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (DAT_14cb06c10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb06c10 = FUN_14171c317(FUN_1463ffa90,uVar1,L"ESkeletalMeshAsyncProperties");
  }
  FUN_140c12002(DAT_14cb06c10,param_2,param_3);
  return param_2;
}



// FUNCTION 147d15e04 FUN_147d15e04 body=238 status=ok
// SIG undefined FUN_147d15e04(void)

void FUN_147d15e04(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined1 local_80 [24];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = *(undefined8 *)(param_3 + 4);
    local_a0 = local_a0 & 0xffffffffffffff00;
    local_a8 = local_a8 & 0xffffffff00000000;
    FUN_147a0ff94(param_2,&local_48,&local_68,0);
    *(longlong *)(param_1 + 0x30) = local_48;
    if (local_48 != 0) {
      FUN_144a79a9c(param_4,local_80);
      local_88 = *(undefined8 *)(param_3 + 4);
      local_98 = *param_3;
      uStack_94 = param_3[1];
      uStack_90 = param_3[2];
      uStack_8c = param_3[3];
      local_a8 = param_1 + 0x38;
      local_a0 = param_1 + 0x50;
      FUN_147a0f996(param_2,*(undefined8 *)(param_1 + 0x30),&local_98,local_80);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d15ef4 FUN_147d15ef4 body=165 status=ok
// SIG undefined FUN_147d15ef4(void)

undefined8 * FUN_147d15ef4(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [96];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3 != 0) {
    cVar2 = FUN_147d15f9c(param_1,local_98);
    if (cVar2 == '\0') {
      uVar1 = *(undefined8 *)(param_3 + 0x268);
      *param_2 = *(undefined8 *)(param_3 + 0x260);
      param_2[1] = uVar1;
      uVar3 = (undefined4)*(undefined8 *)(param_3 + 0x270);
      uVar4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x270) >> 0x20);
    }
    else {
      uVar3 = (undefined4)local_28;
      uVar4 = (undefined4)((ulonglong)local_28 >> 0x20);
      *param_2 = local_38;
      param_2[1] = uStack_30;
    }
    param_2[2] = CONCAT44(uVar4,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_b8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d15f9c FUN_147d15f9c body=1090 status=ok
// SIG undefined FUN_147d15f9c(void)

bool FUN_147d15f9c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_248 [32];
  undefined8 local_228 [16];
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [136];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  iVar1 = FUN_144909502(param_3,*(undefined8 *)(param_1 + 0x30));
  if (iVar1 != -1) {
    FUN_1401ff402(param_3,local_128,iVar1);
    dVar4 = *(double *)(param_1 + 0x50);
    uVar6 = 0;
    uVar7 = 0x3ff00000;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    if ((dVar4 != 0.0) || (uVar8 = uVar6, uVar9 = uVar7, NAN(dVar4))) {
      if ((dVar4 != 90.0) || (NAN(dVar4))) {
        if ((dVar4 != 180.0) || (NAN(dVar4))) {
          if ((dVar4 != 270.0) || (NAN(dVar4))) {
            dVar5 = sin(dVar4 * 0.017453292519943295);
            uVar12 = SUB84(dVar5,0);
            uVar13 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar4 = cos(dVar4 * 0.017453292519943295);
            uVar8 = SUB84(dVar4,0);
            uVar9 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          else {
            uVar8 = 0;
            uVar9 = 0;
            uVar12 = 0;
            uVar13 = 0xbff00000;
          }
        }
        else {
          uVar8 = 0;
          uVar9 = 0xbff00000;
        }
      }
      else {
        uVar8 = 0;
        uVar9 = 0;
        uVar12 = 0;
        uVar13 = 0x3ff00000;
      }
    }
    dVar4 = *(double *)(param_1 + 0x58);
    if ((dVar4 != 0.0) || (uVar14 = uVar6, uVar15 = uVar7, NAN(dVar4))) {
      if ((dVar4 != 90.0) || (NAN(dVar4))) {
        if ((dVar4 != 180.0) || (NAN(dVar4))) {
          if ((dVar4 != 270.0) || (NAN(dVar4))) {
            dVar5 = sin(dVar4 * 0.017453292519943295);
            uVar10 = SUB84(dVar5,0);
            uVar11 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar4 = cos(dVar4 * 0.017453292519943295);
            uVar14 = SUB84(dVar4,0);
            uVar15 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          else {
            uVar14 = 0;
            uVar15 = 0;
            uVar10 = 0;
            uVar11 = 0xbff00000;
          }
        }
        else {
          uVar14 = 0;
          uVar15 = 0xbff00000;
          uVar10 = 0;
          uVar11 = 0;
        }
      }
      else {
        uVar14 = 0;
        uVar15 = 0;
        uVar10 = 0;
        uVar11 = 0x3ff00000;
      }
    }
    dVar4 = *(double *)(param_1 + 0x60);
    uVar16 = 0;
    uVar17 = 0;
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      if ((dVar4 != 90.0) || (NAN(dVar4))) {
        if ((dVar4 != 180.0) || (NAN(dVar4))) {
          if ((dVar4 != 270.0) || (NAN(dVar4))) {
            dVar5 = sin(dVar4 * 0.017453292519943295);
            uVar16 = SUB84(dVar5,0);
            uVar17 = (undefined4)((ulonglong)dVar5 >> 0x20);
            dVar4 = cos(dVar4 * 0.017453292519943295);
            uVar6 = SUB84(dVar4,0);
            uVar7 = (undefined4)((ulonglong)dVar4 >> 0x20);
          }
          else {
            uVar6 = 0;
            uVar7 = 0;
            uVar16 = 0;
            uVar17 = 0xbff00000;
          }
        }
        else {
          uVar6 = 0;
          uVar7 = 0xbff00000;
        }
      }
      else {
        uVar6 = 0;
        uVar7 = 0;
        uVar16 = 0;
        uVar17 = 0x3ff00000;
      }
    }
    local_198 = *(double *)(param_1 + 0x68);
    local_1a8 = (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar15,uVar14) * local_198;
    local_1a0 = (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar11,uVar10) * local_198;
    local_198 = local_198 * (double)CONCAT44(uVar13,uVar12);
    local_190 = 0;
    dVar4 = (double)CONCAT44(uVar13,uVar12) * (double)CONCAT44(uVar17,uVar16);
    local_178 = *(double *)(param_1 + 0x70);
    local_188 = (dVar4 * (double)CONCAT44(uVar15,uVar14) -
                (double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar7,uVar6)) * local_178;
    local_180 = (dVar4 * (double)CONCAT44(uVar11,uVar10) +
                (double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar7,uVar6)) * local_178;
    local_178 = -(double)CONCAT44(uVar17,uVar16) * (double)CONCAT44(uVar9,uVar8) * local_178;
    local_170 = 0;
    dVar4 = (double)CONCAT44(uVar13,uVar12) * (double)CONCAT44(uVar7,uVar6);
    local_158 = *(double *)(param_1 + 0x78);
    local_168 = -(dVar4 * (double)CONCAT44(uVar15,uVar14) +
                 (double)CONCAT44(uVar11,uVar10) * (double)CONCAT44(uVar17,uVar16)) * local_158;
    local_160 = ((double)CONCAT44(uVar15,uVar14) * (double)CONCAT44(uVar17,uVar16) -
                (double)CONCAT44(uVar11,uVar10) * dVar4) * local_158;
    local_158 = (double)CONCAT44(uVar9,uVar8) * (double)CONCAT44(uVar7,uVar6) * local_158;
    local_150 = 0;
    local_148 = *(undefined8 *)(param_1 + 0x38);
    local_140 = *(undefined8 *)(param_1 + 0x40);
    local_138 = *(undefined8 *)(param_1 + 0x48);
    local_130 = 0x3ff0000000000000;
    FUN_1447fea8d(local_228,&local_1a8,local_128);
    puVar3 = local_228;
    for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d163e0 FUN_147d163e0 body=1568 status=ok
// SIG undefined FUN_147d163e0(void)

undefined8
FUN_147d163e0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4,
             double *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_368 [32];
  undefined1 local_348 [128];
  undefined8 local_2c8 [16];
  double local_248;
  double local_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  double local_220;
  double local_218;
  undefined8 local_210;
  double local_208;
  double local_200;
  double local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [136];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (param_3 != 0) {
    iVar1 = FUN_144909502(param_3,*(undefined8 *)(param_1 + 0x30));
    if (iVar1 != -1) {
      FUN_1401ff402(param_3,local_148,iVar1);
      dVar5 = *(double *)(param_1 + 0x50);
      uVar11 = 0;
      uVar12 = 0x3ff00000;
      uVar15 = 0;
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
      if ((dVar5 != 0.0) || (uVar13 = uVar11, uVar14 = uVar12, NAN(dVar5))) {
        if ((dVar5 != 90.0) || (NAN(dVar5))) {
          if ((dVar5 != 180.0) || (NAN(dVar5))) {
            if ((dVar5 != 270.0) || (NAN(dVar5))) {
              dVar10 = sin(dVar5 * 0.017453292519943295);
              uVar17 = SUB84(dVar10,0);
              uVar18 = (undefined4)((ulonglong)dVar10 >> 0x20);
              dVar5 = cos(dVar5 * 0.017453292519943295);
              uVar13 = SUB84(dVar5,0);
              uVar14 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            else {
              uVar13 = 0;
              uVar14 = 0;
              uVar17 = 0;
              uVar18 = 0xbff00000;
            }
          }
          else {
            uVar13 = 0;
            uVar14 = 0xbff00000;
          }
        }
        else {
          uVar13 = 0;
          uVar14 = 0;
          uVar17 = 0;
          uVar18 = 0x3ff00000;
        }
      }
      dVar5 = *(double *)(param_1 + 0x58);
      if ((dVar5 != 0.0) || (uVar19 = uVar11, uVar20 = uVar12, NAN(dVar5))) {
        if ((dVar5 != 90.0) || (NAN(dVar5))) {
          if ((dVar5 != 180.0) || (NAN(dVar5))) {
            if ((dVar5 != 270.0) || (NAN(dVar5))) {
              dVar10 = sin(dVar5 * 0.017453292519943295);
              uVar15 = SUB84(dVar10,0);
              uVar16 = (undefined4)((ulonglong)dVar10 >> 0x20);
              dVar5 = cos(dVar5 * 0.017453292519943295);
              uVar19 = SUB84(dVar5,0);
              uVar20 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            else {
              uVar19 = 0;
              uVar20 = 0;
              uVar15 = 0;
              uVar16 = 0xbff00000;
            }
          }
          else {
            uVar19 = 0;
            uVar20 = 0xbff00000;
            uVar15 = 0;
            uVar16 = 0;
          }
        }
        else {
          uVar19 = 0;
          uVar20 = 0;
          uVar15 = 0;
          uVar16 = 0x3ff00000;
        }
      }
      dVar5 = *(double *)(param_1 + 0x60);
      uVar21 = 0;
      uVar22 = 0;
      if ((dVar5 != 0.0) || (NAN(dVar5))) {
        if ((dVar5 != 90.0) || (NAN(dVar5))) {
          if ((dVar5 != 180.0) || (NAN(dVar5))) {
            if ((dVar5 != 270.0) || (NAN(dVar5))) {
              dVar10 = sin(dVar5 * 0.017453292519943295);
              uVar21 = SUB84(dVar10,0);
              uVar22 = (undefined4)((ulonglong)dVar10 >> 0x20);
              dVar5 = cos(dVar5 * 0.017453292519943295);
              uVar11 = SUB84(dVar5,0);
              uVar12 = (undefined4)((ulonglong)dVar5 >> 0x20);
            }
            else {
              uVar11 = 0;
              uVar12 = 0;
              uVar21 = 0;
              uVar22 = 0xbff00000;
            }
          }
          else {
            uVar11 = 0;
            uVar12 = 0xbff00000;
          }
        }
        else {
          uVar11 = 0;
          uVar12 = 0;
          uVar21 = 0;
          uVar22 = 0x3ff00000;
        }
      }
      local_1b8 = *(double *)(param_1 + 0x68);
      local_1c8 = (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar20,uVar19) * local_1b8;
      local_1c0 = (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar16,uVar15) * local_1b8;
      local_1b8 = local_1b8 * (double)CONCAT44(uVar18,uVar17);
      local_1b0 = 0;
      dVar5 = (double)CONCAT44(uVar18,uVar17) * (double)CONCAT44(uVar22,uVar21);
      local_198 = *(double *)(param_1 + 0x70);
      local_1a8 = (dVar5 * (double)CONCAT44(uVar20,uVar19) -
                  (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar12,uVar11)) * local_198;
      local_1a0 = (dVar5 * (double)CONCAT44(uVar16,uVar15) +
                  (double)CONCAT44(uVar20,uVar19) * (double)CONCAT44(uVar12,uVar11)) * local_198;
      local_198 = -(double)CONCAT44(uVar22,uVar21) * (double)CONCAT44(uVar14,uVar13) * local_198;
      local_190 = 0;
      dVar5 = (double)CONCAT44(uVar18,uVar17) * (double)CONCAT44(uVar12,uVar11);
      local_178 = *(double *)(param_1 + 0x78);
      local_188 = -(dVar5 * (double)CONCAT44(uVar20,uVar19) +
                   (double)CONCAT44(uVar16,uVar15) * (double)CONCAT44(uVar22,uVar21)) * local_178;
      local_180 = ((double)CONCAT44(uVar20,uVar19) * (double)CONCAT44(uVar22,uVar21) -
                  (double)CONCAT44(uVar16,uVar15) * dVar5) * local_178;
      local_178 = (double)CONCAT44(uVar14,uVar13) * (double)CONCAT44(uVar12,uVar11) * local_178;
      local_170 = 0;
      local_168 = *(undefined8 *)(param_1 + 0x38);
      local_160 = *(undefined8 *)(param_1 + 0x40);
      local_158 = *(undefined8 *)(param_1 + 0x48);
      local_150 = 0x3ff0000000000000;
      dVar9 = *param_5;
      dVar5 = param_5[1];
      dVar10 = param_5[2];
      dVar6 = sin(dVar9 * 0.01745329238474369);
      dVar7 = sin(dVar5 * 0.01745329238474369);
      dVar8 = sin(dVar10 * 0.01745329238474369);
      sin(0.0);
      dVar9 = cos(dVar9 * 0.01745329238474369);
      dVar5 = cos(dVar5 * 0.01745329238474369);
      dVar10 = cos(dVar10 * 0.01745329238474369);
      cos(0.0);
      local_248 = dVar9 * dVar5;
      local_240 = dVar7 * dVar9;
      local_230 = 0;
      local_228 = dVar6 * dVar8 * dVar5 - dVar7 * dVar10;
      local_220 = dVar6 * dVar8 * dVar7 + dVar5 * dVar10;
      local_218 = -dVar8 * dVar9;
      local_210 = 0;
      local_208 = -(dVar6 * dVar10 * dVar5 + dVar7 * dVar8);
      local_200 = dVar5 * dVar8 - dVar7 * dVar6 * dVar10;
      local_1f8 = dVar9 * dVar10;
      local_1f0 = 0;
      local_1e8 = *param_4;
      local_1e0 = param_4[1];
      local_1d8 = param_4[2];
      local_1d0 = 0x3ff0000000000000;
      local_238 = dVar6;
      FUN_1447fea8d(local_348,&local_248,&local_1c8);
      FUN_1447fea8d(local_2c8,local_348,local_148);
      puVar4 = local_2c8;
      for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_2 = *puVar4;
        puVar4 = puVar4 + 1;
        param_2 = param_2 + 1;
      }
      uVar2 = 1;
      goto LAB_147d167fe;
    }
  }
  uVar2 = 0;
LAB_147d167fe:
  if ((local_c0 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16a02 FUN_147d16a02 body=245 status=ok
// SIG undefined FUN_147d16a02(void)

undefined4 FUN_147d16a02(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined1 local_e8 [24];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined1 local_b8 [96];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_3 == 0) || (*(longlong *)(param_3 + 0xa8) == param_2)) ||
     (*(longlong *)(param_2 + 0x1c8) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_147d15f9c(param_1,local_b8,param_3);
    if ((char)uVar1 != '\0') {
      local_d0 = local_58;
      uStack_cc = uStack_54;
      uStack_c8 = uStack_50;
      uStack_c4 = uStack_4c;
      local_c0 = local_48;
      local_f8 = 0;
      FUN_1413dd462(param_2,&local_d0,0,0);
      FUN_144a90b9e(local_b8,local_e8);
      FUN_1417b27fe(param_2,local_e8,0);
      (**(code **)(**(longlong **)(param_2 + 0x1c8) + 0x490))
                (*(longlong **)(param_2 + 0x1c8),param_3,&DAT_14cadada0,
                 *(undefined8 *)(param_1 + 0x28));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16b0a FUN_147d16b0a body=266 status=ok
// SIG undefined FUN_147d16b0a(void)

void FUN_147d16b0a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_2c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d15150(param_1,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16c16 FUN_147d16c16 body=116 status=ok
// SIG undefined FUN_147d16c16(void)

void FUN_147d16c16(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x3d0))(param_1,&local_50);
  *(undefined8 *)(param_3 + 0xc) = local_20;
  param_3[8] = local_30;
  param_3[9] = uStack_2c;
  param_3[10] = uStack_28;
  param_3[0xb] = uStack_24;
  param_3[4] = local_40;
  param_3[5] = uStack_3c;
  param_3[6] = uStack_38;
  param_3[7] = uStack_34;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16c8c FUN_147d16c8c body=134 status=ok
// SIG undefined FUN_147d16c8c(void)

void FUN_147d16c8c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  if (param_3[3] != 0) {
    FUN_1400020a8();
  }
  param_3[3] = 0;
  param_3[4] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16d14 FUN_147d16d14 body=42 status=ok
// SIG undefined FUN_147d16d14(void)

void FUN_147d16d14(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x408))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d16d42 FUN_147d16d42 body=41 status=ok
// SIG undefined FUN_147d16d42(void)

void FUN_147d16d42(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x450))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d16dc4 FUN_147d16dc4 body=49 status=ok
// SIG undefined FUN_147d16dc4(void)

void FUN_147d16dc4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3b8))();
  FUN_147d147f6(param_3,uVar1);
  return;
}



// FUNCTION 147d16df6 FUN_147d16df6 body=49 status=ok
// SIG undefined FUN_147d16df6(void)

void FUN_147d16df6(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x4b8))();
  FUN_147d16e28(param_3,uVar1);
  return;
}



// FUNCTION 147d16e28 FUN_147d16e28 body=88 status=ok
// SIG undefined FUN_147d16e28(void)

undefined8 * FUN_147d16e28(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a14fc2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d16e80 FUN_147d16e80 body=296 status=ok
// SIG undefined FUN_147d16e80(void)

void FUN_147d16e80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147d1e8e8(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d16faa FUN_147d16faa body=139 status=ok
// SIG undefined FUN_147d16faa(void)

void FUN_147d16faa(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d17036(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17036 FUN_147d17036 body=90 status=ok
// SIG undefined FUN_147d17036(void)

undefined8 * FUN_147d17036(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x2f8);
  _Src = *(void **)(param_1 + 0x2f0);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_147d1e9a0(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 147d17090 FUN_147d17090 body=164 status=ok
// SIG undefined FUN_147d17090(void)

void FUN_147d17090(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_147d15648(param_1,local_28);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17156 FUN_147d17156 body=88 status=ok
// SIG undefined FUN_147d17156(void)

undefined8 * FUN_147d17156(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d1f1b8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147d171ae FUN_147d171ae body=42 status=ok
// SIG undefined FUN_147d171ae(void)

void FUN_147d171ae(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x410))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d171d8 FUN_147d171d8 body=43 status=ok
// SIG undefined FUN_147d171d8(void)

void FUN_147d171d8(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x418))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d17204 FUN_147d17204 body=42 status=ok
// SIG undefined FUN_147d17204(void)

void FUN_147d17204(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3a8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d1722e FUN_147d1722e body=42 status=ok
// SIG undefined FUN_147d1722e(void)

void FUN_147d1722e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x338))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d17258 FUN_147d17258 body=42 status=ok
// SIG undefined FUN_147d17258(void)

void FUN_147d17258(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x3f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147d17282 FUN_147d17282 body=162 status=ok
// SIG undefined FUN_147d17282(void)

void FUN_147d17282(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d15256(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17332 FUN_147d17332 body=231 status=ok
// SIG undefined FUN_147d17332(void)

void FUN_147d17332(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d155de(param_1,local_24);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1741a FUN_147d1741a body=117 status=ok
// SIG undefined FUN_147d1741a(void)

void FUN_147d1741a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d15b4a(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17490 FUN_147d17490 body=83 status=ok
// SIG undefined FUN_147d17490(void)

void FUN_147d17490(longlong *param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = param_1[0x9d];
  lVar3 = (**(code **)(*param_1 + 0x3f0))();
  if (lVar3 == 0) {
    iVar2 = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x3f0))(param_1);
    iVar2 = *(int *)(lVar3 + 0x1b0);
  }
  *param_3 = iVar2 + (int)lVar1;
  return;
}



// FUNCTION 147d174e4 FUN_147d174e4 body=293 status=ok
// SIG undefined FUN_147d174e4(void)

void FUN_147d174e4(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  void *pvStack_30;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  pvStack_30 = (void *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = 0;
  FUN_1446ef9c4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  _Src = pvStack_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_70 = local_48;
  local_68 = (undefined4)uStack_40;
  uStack_64 = uStack_40._4_4_;
  uStack_60 = (undefined4)local_38;
  uStack_5c = local_38._4_4_;
  local_58 = (void *)0x0;
  lVar1 = (longlong)(int)local_28;
  local_50 = (int)local_28;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_28 & 0xffffffff,0);
    memcpy(local_58,_Src,lVar1 * 2);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (pvStack_30 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1760a FUN_147d1760a body=138 status=ok
// SIG undefined FUN_147d1760a(void)

void FUN_147d1760a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17696 FUN_147d17696 body=187 status=ok
// SIG undefined FUN_147d17696(void)

void FUN_147d17696(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d147f6(param_1 + 0x198,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17752 FUN_147d17752 body=187 status=ok
// SIG undefined FUN_147d17752(void)

void FUN_147d17752(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1ea02(param_1 + 0x490,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1780e FUN_147d1780e body=289 status=ok
// SIG undefined FUN_147d1780e(void)

void FUN_147d1780e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147d1e8e8(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17930 FUN_147d17930 body=187 status=ok
// SIG undefined FUN_147d17930(void)

void FUN_147d17930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d1eb00(param_1 + 0x2f0,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d179ec FUN_147d179ec body=179 status=ok
// SIG undefined FUN_147d179ec(void)

void FUN_147d179ec(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  lVar1 = local_20;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  *(longlong *)(param_1 + 0x518) = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17aa0 FUN_147d17aa0 body=156 status=ok
// SIG undefined FUN_147d17aa0(void)

void FUN_147d17aa0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)(param_1 + 0x520) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17b3e FUN_147d17b3e body=160 status=ok
// SIG undefined FUN_147d17b3e(void)

void FUN_147d17b3e(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x400))(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d17c26 FUN_147d17c26 body=1951 status=ok
// SIG undefined FUN_147d17c26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d17c26(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  longlong lVar17;
  undefined1 uVar18;
  longlong lVar19;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  longlong local_340;
  longlong *local_338;
  undefined8 local_330;
  undefined4 local_328;
  int local_31c;
  longlong local_318;
  undefined4 local_30c;
  longlong local_308;
  ulonglong local_300;
  longlong local_2f8;
  longlong local_2f0;
  longlong *local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined8 uStack_288;
  longlong local_280;
  uint local_278;
  uint local_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  uint uStack_248;
  uint uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined2 uStack_22a;
  undefined4 uStack_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  longlong local_200;
  uint uStack_1f8;
  uint uStack_1f4;
  undefined4 local_1f0;
  undefined8 uStack_1ec;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined8 uStack_150;
  longlong *local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  uint uStack_78;
  undefined4 uStack_74;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (((*(int *)(DAT_14cb06b78 + 4) != 0) && (*(int *)(DAT_14cb06ba8 + 4) != 0)) &&
     (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xd0))(),
     (int)(uint)*(byte *)(*(longlong *)(param_1 + 0x2a8) + 0x1b) <= iVar7)) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xf0))
              (*(longlong **)(param_1 + 0x2a0),*(undefined8 *)(param_2 + 0x110));
    lVar9 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xc0))();
    if (((lVar9 != 0) && (*(int *)(lVar9 + 8) != -1)) &&
       (cVar6 = FUN_1474283cc(lVar9), cVar6 != '\0')) {
      uStack_240 = 0;
      uStack_23c = 0;
      uStack_238 = 0;
      local_250 = 0;
      uStack_248 = 0;
      uStack_244 = 0;
      uStack_230 = 0xff;
      uStack_22c = 0;
      uStack_22b = 1;
      uStack_228 = 0;
      local_1e0 = 0;
      local_220 = 0;
      uStack_218 = 0;
      uStack_214 = 0;
      local_210 = 0;
      uStack_20c = 0;
      uStack_208 = 0;
      local_200 = 0;
      uStack_1f8 = 0;
      uStack_1f4 = 0;
      local_1f0 = 0;
      uStack_1ec = 0;
      local_258 = lVar9;
      iVar7 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xd0))();
      local_300 = CONCAT44(local_300._4_4_,iVar7);
      lVar11 = (longlong)iVar7;
      if (*(int *)(*(longlong *)(param_1 + 0x2e0) + 8 + lVar11 * 0x10) == *(int *)(lVar9 + 0x60)) {
        lVar17 = *(longlong *)(**(longlong **)(param_1 + 0x2a8) + lVar11 * 8);
        local_2e8 = (longlong *)(*(longlong *)(param_1 + 0x2e0) + lVar11 * 0x10);
        local_31c = 0;
        uVar12 = 0;
        uVar8 = 0;
        local_2e0 = lVar11;
        if (0 < *(int *)(lVar17 + 0x18)) {
          lVar19 = 0x48;
          lVar11 = 0;
          lVar13 = 0;
          local_31c = 0;
          local_318 = param_1;
          local_308 = lVar9;
          local_2f0 = param_2;
          do {
            lVar4 = local_2f0;
            lVar9 = local_308;
            param_2 = local_2f0;
            param_1 = local_318;
            uVar12 = uStack_1f4;
            uVar8 = uStack_1f8;
            if ((int)local_2e8[1] <= lVar13) break;
            local_2f8 = *(longlong *)(lVar17 + 0x10);
            lVar9 = *local_2e8;
            local_b0 = (longlong *)0x0;
            local_a8 = 0x100000000;
            local_90 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            uStack_88 = 0xffffffff;
            local_80 = 0xff0000ffffffff;
            uStack_78 = uStack_78 & 0xffffff00;
            uStack_74 = 0x40c00f07;
            local_70 = local_70 & 0xfc;
            FUN_141793e06(&local_158);
            local_330 = 0;
            local_348 = (undefined4)lVar13;
            local_328 = 1;
            local_340 = lVar9 + lVar11;
            local_338 = &local_158;
            FUN_144727972(local_318,*(undefined8 *)(lVar4 + 0x148),lVar17,local_300 & 0xffffffff);
            uVar12 = uStack_248;
            lVar9 = (longlong)(int)uStack_248;
            uStack_248 = uStack_248 + 1;
            if (uStack_244 < uStack_248) {
              FUN_147471df6(&local_250,uVar12);
            }
            lVar4 = local_250;
            lVar9 = lVar9 * 0xf0;
            *(undefined8 *)(local_250 + 0xa8 + lVar9) = 0;
            plVar10 = local_b0;
            if (local_b0 == (longlong *)0x0) {
              plVar10 = &local_158;
            }
            FUN_144739392(local_250 + lVar9,plVar10,local_a8 & 0xffffffff,0);
            *(byte *)(lVar4 + 0xe8 + lVar9) = local_70;
            puVar1 = (undefined4 *)(lVar4 + 0xd8 + lVar9);
            *puVar1 = (undefined4)local_80;
            puVar1[1] = local_80._4_4_;
            puVar1[2] = uStack_78;
            puVar1[3] = uStack_74;
            puVar1 = (undefined4 *)(lVar4 + 200 + lVar9);
            *puVar1 = (undefined4)local_90;
            puVar1[1] = local_90._4_4_;
            puVar1[2] = (undefined4)uStack_88;
            puVar1[3] = uStack_88._4_4_;
            puVar1 = (undefined4 *)(lVar4 + 0xb8 + lVar9);
            *puVar1 = (undefined4)local_a0;
            puVar1[1] = local_a0._4_4_;
            puVar1[2] = (undefined4)uStack_98;
            puVar1[3] = uStack_98._4_4_;
            local_31c = local_31c + *(int *)(local_2f8 + lVar19);
            FUN_1446fc232();
            lVar13 = lVar13 + 1;
            lVar11 = lVar11 + 0x18;
            lVar19 = lVar19 + 0xf8;
            lVar9 = local_308;
            param_2 = local_2f0;
            param_1 = local_318;
            uVar12 = uStack_1f4;
            uVar8 = uStack_1f8;
          } while (lVar13 < *(int *)(lVar17 + 0x18));
        }
        uStack_1f8 = uVar8 + 1;
        local_318 = lVar17;
        if (uVar12 < uStack_1f8) {
          FUN_140518214(&local_200,uVar8);
        }
        puVar14 = (undefined8 *)(param_1 + 0x100);
        puVar15 = (undefined8 *)((longlong)(int)uVar8 * 0x80 + local_200);
        for (lVar11 = 0x10; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar15 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar15 = puVar15 + 1;
        }
        local_30c = *(undefined4 *)(local_318 + 0xe8);
        local_348 = 1;
        plVar10 = (longlong *)
                  (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x28))
                            (*(longlong **)(param_1 + 0x2a0),*(undefined8 *)(param_2 + 0x148),
                             local_300 & 0xffffffff,0);
        lVar11 = (**(code **)(*plVar10 + 0x30))(plVar10);
        if (((*(byte *)(param_1 + 0x2cc) & 1) != 0) && ((*(byte *)(lVar11 + 0x29) & 4) != 0)) {
          local_158 = 0;
          uStack_150 = 0;
          iVar7 = *(int *)(local_318 + 0x18);
          local_2f0 = param_2;
          if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar7);
          }
          local_300 = lVar9 + 0x58;
          local_308 = lVar9;
          if ((iVar7 != 0) && (FUN_1472c1754(&local_158), 0 < *(int *)(local_318 + 0x18))) {
            lVar11 = 4;
            lVar13 = 0xc;
            lVar17 = 0;
            local_2f8 = local_2e0 * 3;
            lVar9 = local_318;
            plVar10 = local_2e8;
            uVar16 = local_30c;
            iVar7 = local_31c;
            do {
              uVar5 = uStack_150;
              if ((int)plVar10[1] <= lVar17) break;
              lVar19 = *(longlong *)(lVar9 + 0x10);
              iVar2 = *(int *)(*plVar10 + lVar13);
              if (((((longlong)iVar2 < 0) ||
                   (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 8),
                   *(int *)(lVar4 + 8 + local_2f8 * 8) <= iVar2)) ||
                  (*(char *)(*(longlong *)(lVar4 + local_2f8 * 8) + (longlong)iVar2) == '\0')) &&
                 (*(char *)(lVar19 + 0xec + lVar11) == '\0')) {
                uVar18 = *(undefined1 *)(lVar19 + 10 + lVar11);
              }
              else {
                uVar18 = 0;
              }
              uVar12 = *(uint *)(lVar19 + lVar11);
              uVar3 = *(undefined4 *)(lVar19 + 4 + lVar11);
              lVar19 = (longlong)(int)uStack_150;
              uVar8 = (int)uStack_150 + 1;
              uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
              if (uStack_150._4_4_ < uVar8) {
                FUN_1471b2628(&local_158,uVar5 & 0xffffffff);
                lVar9 = local_318;
                plVar10 = local_2e8;
                uVar16 = local_30c;
                iVar7 = local_31c;
              }
              *(undefined8 *)(local_158 + lVar19 * 0x28) = 0;
              *(undefined8 *)(local_158 + 8 + lVar19 * 0x28) = 3;
              *(undefined4 *)(local_158 + 0x10 + lVar19 * 0x28) = uVar16;
              *(int *)(local_158 + 0x14 + lVar19 * 0x28) = iVar7;
              *(uint *)(local_158 + 0x18 + lVar19 * 0x28) = uVar12 / 3;
              *(undefined4 *)(local_158 + 0x1c + lVar19 * 0x28) = uVar3;
              *(undefined2 *)(local_158 + 0x20 + lVar19 * 0x28) = 0x100;
              *(undefined1 *)(local_158 + 0x22 + lVar19 * 0x28) = uVar18;
              lVar17 = lVar17 + 1;
              lVar11 = lVar11 + 0xf8;
              lVar13 = lVar13 + 0x18;
            } while (lVar17 < *(int *)(lVar9 + 0x18));
          }
          FUN_14737756a(local_300,&local_158);
          uVar12 = uStack_248;
          lVar9 = local_250;
          local_1d8 = 0;
          local_1d0 = uStack_248;
          if (uStack_248 == 0) {
            local_1cc = 0;
          }
          else {
            FUN_147471e8a(&local_1d8,uStack_248,0);
            FUN_147471efc(local_1d8,lVar9,uVar12);
          }
          local_1c8 = 0;
          local_1c4 = *(int *)(local_318 + 0xec);
          local_1c0 = local_1c4 * 0xc;
          local_1bc = *(undefined4 *)(local_308 + 0x50);
          local_1b8 = local_308;
          local_1b0 = (**(code **)(**(longlong **)(param_1 + 0x2a0) + 200))();
          param_2 = local_2f0;
          local_1a8 = 1;
          local_1a4 = 0;
          local_198 = _DAT_14c846250;
          uStack_190 = DAT_14c846258;
          local_188 = _DAT_14c846260;
          uStack_180 = _DAT_14c846268;
          local_178 = _DAT_14c846270;
          uStack_170 = _DAT_14c846278;
          local_168 = DAT_14c846280;
          uStack_164 = DAT_14c846284;
          uStack_160 = DAT_14c846288;
          uStack_15c = DAT_14c84628c;
          FUN_147ceea5a(local_2f0,&local_1d8);
          FUN_14005bcf4(local_158,uStack_150 & 0xffffffff);
          if (local_158 != 0) {
            FUN_1400020a8();
          }
        }
        local_2d8 = local_258;
        uStack_2c8 = CONCAT44(uStack_244,uStack_248);
        local_2d0 = local_250;
        local_250 = 0;
        uStack_248 = 0;
        uStack_244 = 0;
        local_2c0 = CONCAT44(uStack_23c,uStack_240);
        uStack_2ac = CONCAT22(uStack_22a,CONCAT11(uStack_22b,uStack_22c));
        _uStack_2b8 = CONCAT44(uStack_234,uStack_238);
        uStack_2b0 = uStack_230;
        uStack_2a8 = uStack_228;
        local_2a0 = (undefined4)local_220;
        uStack_29c = local_220._4_4_;
        uStack_298 = uStack_218;
        uStack_294 = uStack_214;
        local_220 = 0;
        uStack_218 = 0;
        uStack_214 = 0;
        local_290 = CONCAT44(uStack_20c,local_210);
        uStack_288 = CONCAT44(uStack_204,uStack_208);
        local_280 = local_200;
        local_200 = 0;
        local_278 = uStack_1f8;
        local_274 = uStack_1f4;
        uStack_1f8 = 0;
        uStack_1f4 = 0;
        local_270 = local_1f0;
        uStack_26c = (undefined4)uStack_1ec;
        uStack_268 = uStack_1ec._4_4_;
        uStack_264 = uStack_1e4;
        local_260 = local_1e0;
        local_1e0 = 0;
        FUN_147cee9b0(param_2);
      }
      FUN_1472aaabe(&local_258);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d183c6 FUN_147d183c6 body=64 status=ok
// SIG undefined FUN_147d183c6(void)

void FUN_147d183c6(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d1f3c8();
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
    }
  }
  return;
}



// FUNCTION 147d18407 FUN_147d18407 body=390 status=ok
// SIG undefined FUN_147d18407(void)

double * FUN_147d18407(double *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                      longlong param_5,int param_6)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  ulonglong uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  iVar1 = *(int *)(param_5 + 0x24);
  if (iVar1 < 1) {
    dVar4 = 0.0;
    dVar5 = 0.0;
    dVar3 = 0.0;
  }
  else {
    param_6 = *(int *)(param_3 + 0x10) + param_6;
    dVar3 = 0.0;
    iVar8 = 0;
    dVar5 = 0.0;
    dVar4 = 0.0;
    do {
      uVar6 = FUN_147ccec3a(param_5,param_6,iVar8);
      lVar2 = *(longlong *)(param_4 + 0x28);
      uVar7 = (ulonglong)(uint)(*(int *)(param_4 + 0x30) * param_6);
      dVar11 = (double)*(float *)(lVar2 + 4 + uVar7);
      dVar9 = (double)*(float *)(lVar2 + uVar7);
      dVar10 = (double)*(float *)(lVar2 + 8 + uVar7);
      dVar12 = (double)((float)uVar6 * 1.5259022e-05);
      dVar4 = dVar4 + (dVar9 * DAT_14c846410 + dVar11 * DAT_14c846430 + dVar10 * DAT_14c846450 +
                      DAT_14c846470) * dVar12;
      dVar5 = dVar5 + (dVar10 * DAT_14c846448 + dVar11 * DAT_14c846428 + dVar9 * DAT_14c846408 +
                      DAT_14c846468) * dVar12;
      dVar3 = dVar3 + (dVar10 * DAT_14c846440 + dVar11 * DAT_14c846420 + dVar9 * DAT_14c846400 +
                      DAT_14c846460) * dVar12;
      iVar8 = iVar8 + 1;
    } while (iVar1 != iVar8);
  }
  *param_1 = dVar3;
  param_1[1] = dVar5;
  param_1[2] = dVar4;
  return param_1;
}



// FUNCTION 147d1858d FUN_147d1858d body=135 status=ok
// SIG undefined FUN_147d1858d(void)

undefined8
FUN_147d1858d(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if ((longlong)iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = iVar1 - 1;
    piVar5 = (int *)(*(longlong *)(param_3 + 0x10) + 0x48);
    lVar6 = 0;
    iVar4 = 0;
    do {
      iVar2 = *piVar5;
      if (param_5 < iVar2 + iVar4) {
        param_5 = param_5 - iVar4;
        uVar3 = (uint)lVar6;
        goto LAB_147d185db;
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 0x3e;
      iVar4 = iVar2 + iVar4;
    } while (iVar1 != lVar6);
  }
  param_5 = 0;
LAB_147d185db:
  FUN_147d18407(param_1,(ulonglong)uVar3 * 0xf8,
                *(longlong *)(param_3 + 0x10) + (ulonglong)uVar3 * 0xf8,param_3 + 0xb8,param_4,
                param_5);
  return param_1;
}



// FUNCTION 147d18614 FUN_147d18614 body=72 status=ok
// SIG undefined FUN_147d18614(void)

void FUN_147d18614(longlong param_1,int param_2,undefined4 *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_3 = 0;
  *param_4 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar4 = 0x48;
    lVar5 = 0;
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x10);
      *param_3 = (int)lVar5;
      iVar3 = *(int *)(lVar1 + lVar4) + iVar2;
      if (param_2 < iVar3) {
        *param_4 = param_2 - iVar2;
        return;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0xf8;
      iVar2 = iVar3;
    } while (lVar5 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 147d1865c FUN_147d1865c body=952 status=ok
// SIG undefined FUN_147d1865c(void)

void FUN_147d1865c(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                  ,float *param_6,float *param_7,float *param_8)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  float fVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  param_6[2] = DAT_14c846338;
  *(undefined8 *)param_6 = DAT_14c846330;
  param_7[2] = DAT_14c846338;
  *(undefined8 *)param_7 = DAT_14c846330;
  param_8[2] = DAT_14c846338;
  *(undefined8 *)param_8 = DAT_14c846330;
  iVar1 = *(int *)(param_4 + 0x24);
  lVar2 = *(longlong *)(param_3 + 0x60);
  uVar16 = (ulonglong)(uint)(*(int *)(param_2 + 0x10) + param_5);
  if (*(char *)(param_3 + 0x81) == '\x01') {
    auVar18 = pmovsxwd(in_XMM0,*(undefined8 *)(lVar2 + uVar16 * 0x10));
    fVar26 = (float)auVar18._0_4_ * 3.051851e-05;
    fVar27 = (float)auVar18._4_4_ * 3.051851e-05;
    fVar28 = (float)auVar18._8_4_ * 3.051851e-05;
    auVar18 = pmovsxwd(auVar18,*(undefined8 *)(lVar2 + 8 + uVar16 * 0x10));
    fVar31 = (float)auVar18._0_4_ * 3.051851e-05;
    fVar32 = (float)auVar18._4_4_ * 3.051851e-05;
    fVar33 = (float)auVar18._8_4_ * 3.051851e-05;
    fVar34 = (float)auVar18._12_4_ * 3.051851e-05;
  }
  else {
    auVar18 = pmovsxbd(in_XMM0,*(undefined4 *)(lVar2 + uVar16 * 8));
    fVar26 = (float)auVar18._0_4_ * 0.007874016;
    fVar27 = (float)auVar18._4_4_ * 0.007874016;
    fVar28 = (float)auVar18._8_4_ * 0.007874016;
    auVar18 = pmovsxbd(auVar18,*(undefined4 *)(lVar2 + 4 + uVar16 * 8));
    fVar31 = (float)auVar18._0_4_ * 0.007874016;
    fVar32 = (float)auVar18._4_4_ * 0.007874016;
    fVar33 = (float)auVar18._8_4_ * 0.007874016;
    fVar34 = (float)auVar18._12_4_ * 0.007874016;
  }
  if (0 < iVar1) {
    fVar3 = (fVar32 * fVar28 - fVar33 * fVar27) * fVar34;
    fVar4 = (fVar33 * fVar26 - fVar28 * fVar31) * fVar34;
    fVar34 = (fVar31 * fVar27 - fVar26 * fVar32) * fVar34;
    iVar15 = 0;
    do {
      uVar14 = FUN_147ccec3a(param_4,uVar16,iVar15);
      fVar13 = DAT_14c846278;
      fVar12 = DAT_14c846274;
      fVar11 = DAT_14c846270;
      fVar10 = DAT_14c846268;
      fVar9 = DAT_14c846264;
      fVar8 = DAT_14c846260;
      fVar7 = (float)DAT_14c846258;
      fVar6 = DAT_14c846254;
      fVar5 = DAT_14c846250;
      fVar20 = fVar26 * DAT_14c846254;
      fVar22 = fVar26 * (float)DAT_14c846258;
      fVar24 = fVar27 * DAT_14c846264;
      fVar25 = fVar27 * DAT_14c846268;
      fVar29 = fVar28 * DAT_14c846274;
      fVar30 = fVar28 * DAT_14c846278;
      fVar19 = DAT_14c846280 * 0.0;
      fVar21 = DAT_14c846284 * 0.0;
      fVar23 = DAT_14c846288 * 0.0;
      fVar17 = (float)uVar14 * 1.5259022e-05;
      *param_6 = (fVar28 * DAT_14c846270 + fVar27 * DAT_14c846260 + fVar26 * DAT_14c846250 + fVar19)
                 * fVar17 + *param_6;
      param_6[1] = (fVar29 + fVar24 + fVar20 + fVar21) * fVar17 + param_6[1];
      param_6[2] = (fVar30 + fVar25 + fVar22 + fVar23) * fVar17 + param_6[2];
      *param_7 = (fVar34 * fVar11 + fVar4 * fVar8 + fVar3 * fVar5 + fVar19) * fVar17 + *param_7;
      param_7[1] = (fVar34 * fVar12 + fVar4 * fVar9 + fVar3 * fVar6 + fVar21) * fVar17 + param_7[1];
      param_7[2] = (fVar34 * fVar13 + fVar4 * fVar10 + fVar3 * fVar7 + fVar23) * fVar17 + param_7[2]
      ;
      *param_8 = (fVar11 * fVar33 + fVar8 * fVar32 + fVar5 * fVar31 + fVar19) * fVar17 + *param_8;
      param_8[1] = (fVar12 * fVar33 + fVar9 * fVar32 + fVar6 * fVar31 + fVar21) * fVar17 +
                   param_8[1];
      param_8[2] = (fVar13 * fVar33 + fVar10 * fVar32 + fVar7 * fVar31 + fVar23) * fVar17 +
                   param_8[2];
      iVar15 = iVar15 + 1;
    } while (iVar1 != iVar15);
  }
  return;
}



// FUNCTION 147d18a14 FUN_147d18a14 body=167 status=ok
// SIG undefined FUN_147d18a14(void)

void FUN_147d18a14(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar1 = *(int *)(param_2 + 0x18);
  if ((longlong)iVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = iVar1 - 1;
    piVar6 = (int *)(*(longlong *)(param_2 + 0x10) + 0x48);
    lVar3 = 0;
    iVar4 = 0;
    do {
      iVar2 = *piVar6;
      if (param_4 < iVar2 + iVar4) {
        param_4 = param_4 - iVar4;
        uVar5 = (uint)lVar3;
        goto LAB_147d18a7a;
      }
      lVar3 = lVar3 + 1;
      piVar6 = piVar6 + 0x3e;
      iVar4 = iVar2 + iVar4;
    } while (iVar1 != lVar3);
  }
  param_4 = 0;
LAB_147d18a7a:
  FUN_147d1865c(param_5,*(longlong *)(param_2 + 0x10) + (ulonglong)uVar5 * 0xf8,param_2 + 0x30,
                param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 147d18abc FUN_147d18abc body=143 status=ok
// SIG undefined FUN_147d18abc(void)

undefined8 FUN_147d18abc(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144750a86(*(longlong *)(param_1 + 0x28),local_28,0,0);
    FUN_144a882a8(param_2,local_28,L"[ClothTick]");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140056680(param_2,L"<NULL>[ClothTick]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d18b4c FUN_147d18b4c body=38 status=ok
// SIG undefined FUN_147d18b4c(void)

undefined8 FUN_147d18b4c(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"SkeletalMeshComponentClothTick",1);
  return param_2;
}



// FUNCTION 147d18b72 FUN_147d18b72 body=143 status=ok
// SIG undefined FUN_147d18b72(void)

undefined8 FUN_147d18b72(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_144750a86(*(longlong *)(param_1 + 0x28),local_28,0,0);
    FUN_144a882a8(param_2,local_28,L"[EndPhysicsTick]");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_140056680(param_2,L"<NULL>[EndPhysicsTick]");
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147d18c02 FUN_147d18c02 body=38 status=ok
// SIG undefined FUN_147d18c02(void)

undefined8 FUN_147d18c02(undefined8 param_1,undefined8 param_2)

{
  FUN_1446f470e(param_2,L"SkeletalMeshComponentEndPhysicsTick",1);
  return param_2;
}



// FUNCTION 147d18c28 FUN_147d18c28 body=197 status=ok
// SIG undefined FUN_147d18c28(void)

void FUN_147d18c28(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xc90) == 0) {
    lVar1 = FUN_14099beef(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xc90) = lVar1;
  }
  lVar1 = FUN_144a81888(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_144a81888(param_1);
    uVar2 = FUN_144a81888(param_1);
    FUN_147d152c4(uVar2);
    lVar1 = *(longlong *)(lVar1 + 0x2b8);
    FUN_14058b5a6(*(undefined8 *)(param_1 + 0xc90),lVar1);
    *(longlong *)(*(longlong *)(param_1 + 0xc90) + 0x2d0) = lVar1 + 0xd8;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xc90) + 0x31) = 3;
  FUN_1401841e8(*(undefined8 *)(param_1 + 0xc90));
                    /* WARNING: Could not recover jumptable at 0x000147d18c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xc90) + 0x2a0))();
  return;
}



// FUNCTION 147d18cee FUN_147d18cee body=24 status=ok
// SIG undefined FUN_147d18cee(void)

bool FUN_147d18cee(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xb98))();
  return lVar1 != 0;
}



// FUNCTION 147d18d06 FUN_147d18d06 body=336 status=ok
// SIG undefined FUN_147d18d06(void)

void FUN_147d18d06(longlong *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
                  undefined4 param_5,char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)((longlong)param_1 + 0x2dd) & 0x20) == 0) {
    iVar2 = (int)param_1[0x19b];
    *(uint *)(param_1 + 0x19b) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xcdc) < iVar2 + 1U) {
      FUN_147d1f53c(param_1 + 0x19a,iVar2);
    }
    lVar3 = param_1[0x19a];
    lVar9 = (longlong)iVar2 * 0x30;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    *(undefined8 *)(lVar3 + 0x10 + lVar9) = *(undefined8 *)(param_2 + 4);
    puVar1 = (undefined4 *)(lVar3 + lVar9);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(undefined4 *)(lVar3 + 0x18 + lVar9) = param_3;
    *(float *)(lVar3 + 0x1c + lVar9) = param_4;
    *(undefined4 *)(lVar3 + 0x20 + lVar9) = param_5;
    *(char *)(lVar3 + 0x24 + lVar9) = param_6;
    *(undefined4 *)(lVar3 + 0x28 + lVar9) = 0;
    *(undefined4 *)(lVar3 + 0x2c + lVar9) = DAT_14c75b13c;
    fVar11 = (float)(**(code **)(*param_1 + 0x8d8))(param_1);
    lVar3 = param_1[0x1af];
    if ((longlong)(int)lVar3 != 0) {
      if (fVar11 <= 0.0001) {
        fVar11 = 0.0001;
      }
      lVar9 = param_1[0x1ae];
      lVar10 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar9 + lVar10);
        fVar12 = param_4;
        if (param_6 == '\0') {
          fVar12 = (float)FUN_1401edbbc(uVar4);
          fVar12 = fVar12 * (param_4 / fVar11);
        }
        FUN_1417e5aae(uVar4,param_2,param_3,fVar12,(char)param_5,param_6);
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar10);
    }
  }
  return;
}



// FUNCTION 147d18e56 FUN_147d18e56 body=341 status=ok
// SIG undefined FUN_147d18e56(void)

void FUN_147d18e56(longlong *param_1,undefined4 *param_2,undefined4 param_3,float param_4,
                  undefined4 param_5,char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  
  if ((*(byte *)((longlong)param_1 + 0x2dd) & 0x40) == 0) {
    iVar2 = (int)param_1[0x19b];
    *(uint *)(param_1 + 0x19b) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xcdc) < iVar2 + 1U) {
      FUN_147d1f53c(param_1 + 0x19a,iVar2);
    }
    lVar3 = param_1[0x19a];
    lVar9 = (longlong)iVar2 * 0x30;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    *(undefined8 *)(lVar3 + 0x10 + lVar9) = *(undefined8 *)(param_2 + 4);
    puVar1 = (undefined4 *)(lVar3 + lVar9);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(undefined4 *)(lVar3 + 0x18 + lVar9) = param_3;
    *(float *)(lVar3 + 0x1c + lVar9) = param_4;
    *(undefined4 *)(lVar3 + 0x20 + lVar9) = param_5;
    *(char *)(lVar3 + 0x24 + lVar9) = param_6;
    *(undefined4 *)(lVar3 + 0x28 + lVar9) = 1;
    *(undefined4 *)(lVar3 + 0x2c + lVar9) = DAT_14c75b13c;
    fVar11 = (float)(**(code **)(*param_1 + 0x8d8))(param_1);
    lVar3 = param_1[0x1af];
    if ((longlong)(int)lVar3 != 0) {
      if (fVar11 <= 0.0001) {
        fVar11 = 0.0001;
      }
      lVar9 = param_1[0x1ae];
      lVar10 = 0;
      do {
        uVar4 = *(undefined8 *)(lVar9 + lVar10);
        fVar12 = param_4;
        if (param_6 == '\0') {
          fVar12 = (float)FUN_1401edbbc(uVar4);
          fVar12 = fVar12 * (param_4 / fVar11);
        }
        FUN_147c48170(uVar4,param_2,param_3,fVar12,(char)param_5,param_6,1);
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar10);
    }
  }
  return;
}



// FUNCTION 147d18fac FUN_147d18fac body=58 status=ok
// SIG undefined FUN_147d18fac(void)

void FUN_147d18fac(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      FUN_1417e5934(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  return;
}



// FUNCTION 147d18fe6 FUN_147d18fe6 body=431 status=ok
// SIG undefined FUN_147d18fe6(void)

void FUN_147d18fe6(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_148 [32];
  undefined1 local_128 [32];
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined1 local_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar6 = *(int *)(param_1 + 0xce0);
  if ((((longlong)iVar6 != -1) && (iVar6 < *(int *)(param_1 + 0xd78))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar6 * 8),
     *(longlong *)(lVar1 + 0x138) != 0)) {
    FUN_1447f067c(lVar1,local_c8,1,0);
    dVar3 = param_2[2] - local_98;
    dVar5 = param_2[1] - dStack_a0;
    dVar4 = *param_2 - local_a8;
    local_a8 = *param_2;
    dStack_a0 = param_2[1];
    local_98 = param_2[2];
    uStack_90 = 0;
    FUN_140043566(lVar1,local_c8,1,1);
    iVar6 = *(int *)(param_1 + 0xd78);
    if (0 < iVar6) {
      uVar7 = 0;
      do {
        if (uVar7 != *(uint *)(param_1 + 0xce0)) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xd70) + uVar7 * 8);
          FUN_1447f067c(uVar2,local_128,1,0);
          local_f8 = local_f8 + dVar3;
          dStack_100 = dStack_100 + dVar5;
          local_108 = local_108 + dVar4;
          uStack_f0 = 0;
          FUN_140043566(uVar2,local_128,1);
          iVar6 = *(int *)(param_1 + 0xd78);
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < (longlong)iVar6);
    }
    FUN_1401c9320(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d19196 FUN_147d19196 body=84 status=ok
// SIG undefined FUN_147d19196(void)

void FUN_147d19196(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a7484c(param_2,local_38);
  (**(code **)(*param_1 + 0x860))(param_1,local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d191ec FUN_147d191ec body=780 status=ok
// SIG undefined FUN_147d191ec(void)

void FUN_147d191ec(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_198 [32];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar8 = *(int *)(param_1 + 0xce0);
  if ((((longlong)iVar8 != -1) && (iVar8 < *(int *)(param_1 + 0xd78))) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar8 * 8),
     *(longlong *)(lVar1 + 0x138) != 0)) {
    FUN_1447f067c(lVar1,&local_118,1,0);
    dVar7 = dStack_110;
    dVar15 = local_118;
    dVar6 = local_108 * -1.0;
    dVar10 = dStack_100 * 1.0;
    dVar11 = *param_2;
    dVar12 = param_2[1];
    dVar13 = param_2[2];
    dVar14 = param_2[3];
    local_118 = dVar11;
    dStack_110 = dVar12;
    local_108 = dVar13;
    dStack_100 = dVar14;
    FUN_140043566(lVar1,&local_118,1,1);
    iVar8 = *(int *)(param_1 + 0xd78);
    if (0 < iVar8) {
      dVar4 = dVar12 * dVar6 * -1.0 + ((dVar11 * dVar10 - dVar15 * dVar14 * 1.0) - dVar7 * dVar13);
      dVar5 = dVar11 * dVar6 * 1.0 + ((dVar12 * dVar10 - dVar15 * dVar13 * -1.0) - dVar7 * dVar14);
      dVar3 = dVar14 * dVar6 * 1.0 + dVar7 * dVar11 + (dVar10 * dVar13 - dVar15 * dVar12 * 1.0);
      dVar6 = dVar13 * dVar6 * -1.0 + dVar7 * dVar12 + (dVar10 * dVar14 - dVar15 * dVar11 * -1.0);
      uVar9 = 0;
      do {
        if (uVar9 != *(uint *)(param_1 + 0xce0)) {
          uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0xd70) + uVar9 * 8);
          FUN_1447f067c(uVar2,&local_178,1,0);
          dVar15 = dVar3 * local_178;
          dVar10 = local_178 * dVar5;
          dVar11 = local_178 * dVar4;
          dVar12 = dStack_170 * dVar4;
          dVar13 = dStack_170 * dVar5;
          dVar14 = local_168 * dVar3;
          local_178 = dVar5 * local_168 * -1.0 +
                      dVar3 * dStack_170 + dVar6 * local_178 * 1.0 + dVar4 * dStack_160;
          dStack_170 = dVar4 * local_168 * 1.0 +
                       dVar6 * dStack_170 + dVar15 * -1.0 + dVar5 * dStack_160;
          local_168 = local_168 * dVar6 * 1.0 + ((dVar10 * 1.0 + dStack_160 * dVar3) - dVar12);
          dStack_160 = dVar14 * -1.0 + ((dVar11 * -1.0 + dStack_160 * dVar6) - dVar13);
          FUN_140043566(uVar2,&local_178,1);
          iVar8 = *(int *)(param_1 + 0xd78);
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar8);
    }
    FUN_1401c9320(param_1);
  }
  if ((local_b0 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1951e FUN_147d1951e body=123 status=ok
// SIG undefined FUN_147d1951e(void)

void FUN_147d1951e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  code *local_28;
  undefined8 *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = &local_18;
  local_28 = FUN_1436b9d10;
  local_30 = param_6;
  local_38 = param_5;
  local_48 = 0;
  local_40 = param_4;
  local_18 = param_1;
  FUN_140aa342c();
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1959a FUN_147d1959a body=440 status=ok
// SIG undefined FUN_147d1959a(void)

void FUN_147d1959a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,char param_10)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  code **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  code *local_a0;
  longlong *local_98;
  code *local_90;
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = FUN_144a81888();
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_144a81888(param_1);
    lVar1 = (**(code **)(*plVar2 + 0x310))(plVar2);
    local_80 = lVar1;
    if (param_10 == '\0') {
      local_98 = &local_80;
      local_d0 = &local_a0;
      local_a0 = FUN_1436b9d98;
      local_b8 = param_8;
      local_c0 = param_7;
      local_c8 = param_6;
      local_d8 = param_5;
      FUN_140aa2244(param_1,param_2,param_3,param_4);
    }
    else {
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = 0;
      local_68[1] = 0;
      FUN_1407a57f6(local_68 + 2,*(undefined4 *)(lVar1 + 0x38),1);
      FUN_1403ed7b2(local_68,*(undefined4 *)(lVar1 + 0x38),1);
      local_88 = &local_80;
      local_d0 = &local_90;
      local_90 = FUN_1436b9d58;
      local_b8 = param_8;
      local_c0 = param_7;
      local_c8 = param_6;
      local_d8 = param_5;
      local_78 = local_68 + 2;
      local_70 = local_68;
      FUN_140aa2244(param_1,param_2,param_3,param_4);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_68[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_68[4] ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d19754 FUN_147d19754 body=104 status=ok
// SIG undefined FUN_147d19754(void)

void FUN_147d19754(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (0 < (int)param_1[0x1af]) {
    lVar1 = 0;
    do {
      FUN_1405a2f88(*(undefined8 *)(param_1[0x1ae] + lVar1 * 8),param_2,0,1);
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[0x1af]);
  }
  FUN_14048cdd2(param_1,(int)param_1[0x19c]);
  FUN_14048cbac(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147d197b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xce8))(param_1);
  return;
}



// FUNCTION 147d197bc FUN_147d197bc body=76 status=ok
// SIG undefined FUN_147d197bc(void)

void FUN_147d197bc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_1412b4a80(param_1 + 0x410);
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      FUN_1412b4a80(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8),param_2);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  return;
}



// FUNCTION 147d19808 FUN_147d19808 body=96 status=ok
// SIG undefined FUN_147d19808(void)

void FUN_147d19808(undefined8 param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  undefined1 auStack_58 [32];
  code **local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_10 = local_28;
  local_38 = &local_18;
  local_18 = FUN_1436b9fc6;
  local_28[0] = param_3;
  local_20 = param_1;
  FUN_14593616e(param_1,*param_2,param_4,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1986a FUN_147d1986a body=159 status=ok
// SIG undefined FUN_147d1986a(void)

void FUN_147d1986a(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  code **local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  code *local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,*param_2,1,0xffffffff);
  if (lVar1 != 0) {
    local_48 = *(undefined8 *)(param_3 + 4);
    local_30 = &local_58;
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    local_68 = &local_38;
    local_38 = FUN_1436ba086;
    local_40 = param_1;
    FUN_14593616e(param_1,*param_2,param_4,0);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1990a FUN_147d1990a body=75 status=ok
// SIG undefined FUN_147d1990a(void)

undefined4 * FUN_147d1990a(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  uVar1 = (undefined4)DAT_14c8464e0;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  lVar5 = (**(code **)(*param_1 + 0x7b8))(uVar1,*param_3,1,0xffffffff);
  if (lVar5 != 0) {
    FUN_14141a1f8(lVar5,param_2);
  }
  return param_2;
}



// FUNCTION 147d19956 FUN_147d19956 body=156 status=ok
// SIG undefined FUN_147d19956(void)

void FUN_147d19956(longlong *param_1,undefined8 *param_2,undefined1 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_38 = &local_20;
  local_20 = &LAB_1436ba0ec;
  local_21 = param_3;
  iVar2 = FUN_14593616e(param_1,*param_2,param_4,0);
  if (iVar2 != 0) {
    cVar1 = (**(code **)(*param_1 + 0x480))(param_1,0);
    if (cVar1 != '\0') {
      FUN_14048cdd2(param_1,(int)param_1[0x19c]);
    }
    FUN_14048cbac(param_1);
    (**(code **)(*param_1 + 0xce8))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d199f4 FUN_147d199f4 body=121 status=ok
// SIG undefined FUN_147d199f4(void)

void FUN_147d199f4(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x7b8))(param_1,*param_2,1,0xffffffff);
  if (lVar2 != 0) {
    FUN_1405a2f88(lVar2,param_3,0,1);
    cVar1 = (**(code **)(*param_1 + 0x480))(param_1,0);
    if (cVar1 != '\0') {
      FUN_14048cdd2(param_1,(int)param_1[0x19c]);
    }
    FUN_14048cbac(param_1);
                    /* WARNING: Could not recover jumptable at 0x000147d19a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xce8))(param_1);
    return;
  }
  return;
}



// FUNCTION 147d19a6e FUN_147d19a6e body=152 status=ok
// SIG undefined FUN_147d19a6e(void)

void FUN_147d19a6e(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar2 != 0) && (0 < (int)param_1[0x1b1])) {
    lVar3 = 0;
    do {
      if (param_4 == '\0') {
LAB_147d19ad4:
        FUN_147c54290(*(undefined8 *)(param_1[0x1b0] + lVar3 * 8),param_3,param_2);
      }
      else {
        iVar1 = FUN_144992686(lVar2,*(undefined8 *)
                                     (*(longlong *)(param_1[0x1b0] + lVar3 * 8) + 0x50));
        if ((iVar1 == -1) ||
           (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar1 * 8) + 0x30) ==
            '\0')) goto LAB_147d19ad4;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x1b1]);
  }
  return;
}



// FUNCTION 147d19b06 FUN_147d19b06 body=152 status=ok
// SIG undefined FUN_147d19b06(void)

void FUN_147d19b06(longlong *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar2 != 0) && (0 < (int)param_1[0x1b1])) {
    lVar3 = 0;
    do {
      if (param_4 == '\0') {
LAB_147d19b6c:
        FUN_147c5436c(*(undefined8 *)(param_1[0x1b0] + lVar3 * 8),param_3,param_2);
      }
      else {
        iVar1 = FUN_144992686(lVar2,*(undefined8 *)
                                     (*(longlong *)(param_1[0x1b0] + lVar3 * 8) + 0x50));
        if ((iVar1 == -1) ||
           (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar1 * 8) + 0x30) ==
            '\0')) goto LAB_147d19b6c;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x1b1]);
  }
  return;
}



// FUNCTION 147d19b9e FUN_147d19b9e body=128 status=ok
// SIG undefined FUN_147d19b9e(void)

void FUN_147d19b9e(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar3 != 0) && (iVar2 = (int)param_1[0x1b1], 0 < iVar2)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x1b0] + lVar4 * 8);
      if (*(longlong *)(lVar1 + 0x48) == param_2) {
        FUN_147d19c1e(*(undefined8 *)(*(longlong *)(lVar3 + 0x50) + lVar4 * 8),param_3,lVar1,param_4
                     );
        iVar2 = (int)param_1[0x1b1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 147d19c1e FUN_147d19c1e body=82 status=ok
// SIG undefined FUN_147d19c1e(void)

void FUN_147d19c1e(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x2b8) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x2b0);
      lVar2 = (longlong)*(int *)(param_1 + 0x2b8) * 0x168;
      do {
        if (*(longlong *)(lVar1 + 0x160) == param_2) goto LAB_147d19c64;
        lVar1 = lVar1 + 0x168;
        lVar2 = lVar2 + -0x168;
      } while (lVar2 != 0);
    }
    if (param_4 == '\0') {
      return;
    }
  }
  lVar1 = param_1 + 0x2c0;
LAB_147d19c64:
  FUN_147c53afc(param_3,lVar1);
  return;
}



// FUNCTION 147d19c70 FUN_147d19c70 body=118 status=ok
// SIG undefined FUN_147d19c70(void)

void FUN_147d19c70(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar3 != 0) && (iVar2 = (int)param_1[0x1b1], 0 < iVar2)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x1b0] + lVar4 * 8);
      if (lVar1 != 0) {
        FUN_147d19c1e(*(undefined8 *)(*(longlong *)(lVar3 + 0x50) + lVar4 * 8),param_2,lVar1,param_3
                     );
        iVar2 = (int)param_1[0x1b1];
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 147d19ce6 FUN_147d19ce6 body=189 status=ok
// SIG undefined FUN_147d19ce6(void)

void FUN_147d19ce6(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar2 != 0) && (0 < (int)param_1[0x1b1])) {
    lVar3 = 0;
    do {
      if (param_5 == '\0') {
LAB_147d19d60:
        FUN_147c547e6(*(undefined8 *)(param_1[0x1b0] + lVar3 * 8),param_2,param_3,param_4);
      }
      else {
        iVar1 = FUN_144992686(lVar2,*(undefined8 *)
                                     (*(longlong *)(param_1[0x1b0] + lVar3 * 8) + 0x50));
        if ((iVar1 == -1) ||
           (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0x40) + (longlong)iVar1 * 8) + 0x30) ==
            '\0')) goto LAB_147d19d60;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x1b1]);
  }
  return;
}



// FUNCTION 147d19da4 FUN_147d19da4 body=138 status=ok
// SIG undefined FUN_147d19da4(void)

void FUN_147d19da4(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (((lVar3 != 0) && (uVar2 = (**(code **)(*param_1 + 0x570))(param_1), (uVar2 & 0xfffffffe) == 2)
      ) && (0 < (int)param_1[0x1af])) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x1ae] + lVar3 * 8);
      if (((lVar1 != 0) && (lVar4 = FUN_140aa2aee(lVar1), lVar4 != 0)) &&
         (*(char *)(lVar4 + 0x30) != '\0')) {
        FUN_1405a2f88(lVar1,*(char *)(lVar4 + 0x30) == '\x02',0,1);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[0x1af]);
  }
  return;
}



// FUNCTION 147d19e2e FUN_147d19e2e body=20 status=ok
// SIG undefined FUN_147d19e2e(void)

void FUN_147d19e2e(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0xc61) = *(byte *)(param_1 + 0xc61) & 0xdf | param_2 << 5;
  return;
}



// FUNCTION 147d19e42 FUN_147d19e42 body=131 status=ok
// SIG undefined FUN_147d19e42(void)

void FUN_147d19e42(longlong *param_1,float param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x480))(param_1,0);
  if (0.0 < param_2 != (bool)cVar1) {
    (**(code **)(*param_1 + 0x690))(param_1,0.0 < param_2);
  }
  if (param_2 < 1.0) {
    *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) & 0xdf;
    FUN_1417ef39a(param_1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 147d19ec6 FUN_147d19ec6 body=134 status=ok
// SIG undefined FUN_147d19ec6(void)

void FUN_147d19ec6(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_24;
  local_38 = &local_20;
  local_20 = &LAB_1436ba100;
  local_24 = param_3;
  iVar1 = FUN_14593616e(param_1,*param_2,param_5);
  if (iVar1 != 0) {
    *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) & 0xdf;
    FUN_14048cbac(param_1);
    (**(code **)(*param_1 + 0xce8))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d19f4e FUN_147d19f4e body=129 status=ok
// SIG undefined FUN_147d19f4e(void)

void FUN_147d19f4e(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined4 local_24;
  undefined1 *local_20;
  undefined4 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_24;
  local_38 = &local_20;
  local_20 = &LAB_1436ba110;
  local_24 = param_3;
  iVar1 = FUN_14593616e(param_1,*param_2,1);
  if (iVar1 != 0) {
    *(byte *)((longlong)param_1 + 0xc61) = *(byte *)((longlong)param_1 + 0xc61) & 0xdf;
    FUN_14048cbac(param_1);
    (**(code **)(*param_1 + 0xce8))(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d19fd0 FUN_147d19fd0 body=77 status=ok
// SIG undefined FUN_147d19fd0(void)

undefined8 FUN_147d19fd0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0xb98))();
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x58) == (int)param_1[0x1b1])) &&
     (iVar1 = FUN_147c7d842(lVar2,param_2), iVar1 != -1)) {
    return *(undefined8 *)(param_1[0x1b0] + (longlong)iVar1 * 8);
  }
  return 0;
}



// FUNCTION 147d1a01e FUN_147d1a01e body=26 status=ok
// SIG undefined FUN_147d1a01e(void)

undefined8 FUN_147d1a01e(longlong param_1,uint param_2)

{
  if (param_2 < *(uint *)(param_1 + 0xd88)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xd80) + (longlong)(int)param_2 * 8);
  }
  return 0;
}



// FUNCTION 147d1a038 FUN_147d1a038 body=116 status=ok
// SIG undefined FUN_147d1a038(void)

void FUN_147d1a038(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_68 [32];
  code **local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  code *local_18;
  undefined4 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_10 = &local_38;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_48 = &local_18;
  local_18 = FUN_1436ba130;
  local_20 = param_4;
  FUN_14593616e(local_38,param_3,param_5,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1a0ae FUN_147d1a0ae body=116 status=ok
// SIG undefined FUN_147d1a0ae(void)

void FUN_147d1a0ae(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined1 auStack_68 [32];
  code **local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  code *local_18;
  undefined4 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_10 = &local_38;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_48 = &local_18;
  local_18 = FUN_1436ba162;
  local_20 = param_4;
  FUN_14593616e(local_38,param_3,param_5,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1a124 FUN_147d1a124 body=557 status=ok
// SIG undefined FUN_147d1a124(void)

void FUN_147d1a124(longlong *param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar5 = (**(code **)(*param_1 + 0xb98))();
  lVar6 = FUN_144a81888(param_1);
  if (((lVar5 != 0) && (lVar6 != 0)) && (0 < (int)param_1[0x1b1])) {
    lVar6 = 0;
    do {
      lVar11 = *(longlong *)(param_1[0x1b0] + lVar6 * 8);
      if (((lVar11 != 0) && (cVar1 = FUN_1458fc4aa(lVar11), cVar1 != '\0')) &&
         ((iVar3 = FUN_144909502(param_1,*(undefined8 *)(lVar11 + 0x50)), iVar3 != -1 &&
          (0 < *(int *)(lVar5 + 0x48))))) {
        lVar11 = 0;
        do {
          lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x40) + lVar11 * 8);
          iVar4 = FUN_144909502(param_1,*(undefined8 *)(lVar9 + 0x28));
          if (iVar4 != -1) {
            if (iVar4 != iVar3) {
              plVar7 = (longlong *)FUN_144a81888(param_1);
              uVar8 = (**(code **)(*plVar7 + 0x310))(plVar7);
              cVar1 = FUN_1404183aa(uVar8,iVar4,iVar3);
              if (cVar1 == '\0') goto LAB_147d1a1f9;
            }
            lVar10 = *(longlong *)(param_1[0x1ae] + lVar11 * 8);
            if ((lVar10 != 0) &&
               ((cVar1 = FUN_144a7c526(lVar10), cVar1 == '\0' ||
                (*(longlong *)(lVar10 + 0x138) == 0)))) {
              FUN_1405a2f88(lVar10,1,0,1);
            }
            lVar9 = FUN_147d19fd0(param_1,*(undefined8 *)(lVar9 + 0x28));
            if (lVar9 != 0) {
              bVar2 = *(byte *)(lVar9 + 0x1dc);
              if ((((bVar2 & 1) != 0) || ((*(byte *)(lVar9 + 0x1ec) & 1) != 0)) ||
                 ((*(byte *)(lVar9 + 0x1fc) & 1) != 0)) {
                FUN_147c54174(lVar9,0,0,0);
                bVar2 = *(byte *)(lVar9 + 0x1dc);
              }
              if ((((bVar2 & 2) != 0) || ((*(byte *)(lVar9 + 0x1ec) & 2) != 0)) ||
                 ((*(byte *)(lVar9 + 0x1fc) & 2) != 0)) {
                FUN_147c541fe(lVar9,0);
              }
              cVar1 = *(char *)(lVar9 + 0x268);
              lVar10 = 0x234;
              if (((cVar1 == '\x01') && (lVar10 = 0x224, (*(byte *)(lVar9 + 0x214) & 1) != 0)) ||
                 ((*(byte *)(lVar9 + lVar10) & 1) != 0)) {
                FUN_147c54290(lVar9,0);
                cVar1 = *(char *)(lVar9 + 0x268);
              }
              lVar10 = 0x234;
              if (((cVar1 == '\x01') && (lVar10 = 0x224, (*(byte *)(lVar9 + 0x214) & 2) != 0)) ||
                 ((*(byte *)(lVar9 + lVar10) & 2) != 0)) {
                FUN_147c5436c(lVar9,0);
              }
            }
          }
LAB_147d1a1f9:
          lVar11 = lVar11 + 1;
        } while (lVar11 < *(int *)(lVar5 + 0x48));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x1b1]);
  }
  return;
}



// FUNCTION 147d1a352 FUN_147d1a352 body=59 status=ok
// SIG undefined FUN_147d1a352(void)

undefined8 * FUN_147d1a352(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xb98))();
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_147c7d86e(lVar1,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 147d1a38e FUN_147d1a38e body=79 status=ok
// SIG undefined FUN_147d1a38e(void)

void FUN_147d1a38e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_140690180(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147d1a3d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x950))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147d1a3de FUN_147d1a3de body=117 status=ok
// SIG undefined FUN_147d1a3de(void)

void FUN_147d1a3de(longlong *param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined1 **local_38;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_21;
  local_38 = &local_20;
  local_20 = &LAB_1436ba18e;
  local_21 = param_2;
  iVar1 = FUN_14593616e(param_1,param_3,param_4,0);
  if (0 < iVar1) {
    (**(code **)(*param_1 + 0x950))(param_1,1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1a454 FUN_147d1a454 body=220 status=ok
// SIG undefined FUN_147d1a454(void)

undefined8 * FUN_147d1a454(longlong *param_1,undefined8 *param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (lVar3 != 0) {
    iVar2 = FUN_147c7d842(lVar3,param_3);
    if ((iVar2 != -1) && (iVar2 < (int)param_1[0x1b1])) {
      if (*(longlong *)(param_1[0x1b0] + (longlong)iVar2 * 8) == 0) {
LAB_147d1a4c1:
        *(undefined4 *)(param_2 + 1) = 0;
        *param_2 = 0;
        if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
      if (param_4 == '\0') {
        cVar1 = FUN_1458fc4aa();
        if (cVar1 != '\0') goto LAB_147d1a4c1;
      }
      local_38 = 0;
      FUN_14485c47a(&local_38,param_1);
      *param_2 = local_38;
      *(int *)(param_2 + 1) = iVar2;
      goto LAB_147d1a4f4;
    }
  }
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0;
LAB_147d1a4f4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 147d1a532 FUN_147d1a532 body=274 status=ok
// SIG undefined FUN_147d1a532(void)

void FUN_147d1a532(longlong *param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar5 != 0) && (0 < (int)param_1[0x1b1])) {
    lVar5 = 0;
    do {
      if ((*(longlong *)(param_1[0x1b0] + lVar5 * 8) != 0) &&
         ((param_2 != '\0' || (cVar4 = FUN_1458fc4aa(), cVar4 == '\0')))) {
        local_88 = 0;
        local_78 = (longlong *)0x0;
        local_90 = 0;
        FUN_14485c47a(&local_90,param_1);
        uVar3 = local_90;
        if (local_88 != 0) {
          plVar6 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar6 = local_68;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_147d1f8d0(param_3,iVar1);
        }
        lVar2 = *param_3;
        *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = uVar3;
        *(int *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[0x1b1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d1a646 FUN_147d1a646 body=523 status=ok
// SIG undefined FUN_147d1a646(void)

void FUN_147d1a646(longlong *param_1,longlong param_2,char param_3,char param_4,char param_5,
                  longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_b8;
  longlong local_a8 [4];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar6 = (**(code **)(*param_1 + 0xb98))();
  if ((lVar6 != 0) && (0 < (int)param_1[0x1b1])) {
    lVar6 = 0;
    local_d8 = param_2;
    do {
      lVar2 = *(longlong *)(param_1[0x1b0] + lVar6 * 8);
      if ((lVar2 != 0) && ((param_5 != '\0' || (cVar5 = FUN_1458fc4aa(lVar2), cVar5 == '\0')))) {
        if ((param_3 != '\0') && (*(longlong *)(lVar2 + 0x50) == param_2)) {
          local_88 = 0;
          local_78 = (longlong *)0x0;
          local_d0 = 0;
          FUN_14485c47a(&local_d0,param_1);
          uVar4 = local_d0;
          if (local_88 != 0) {
            plVar7 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar7 = local_68;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          iVar1 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
            FUN_147d1f8d0(param_6,iVar1);
          }
          lVar3 = *param_6;
          *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = uVar4;
          *(int *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = (int)lVar6;
          param_2 = local_d8;
        }
        if ((param_4 != '\0') && (*(longlong *)(lVar2 + 0x58) == param_2)) {
          local_c8 = 0;
          local_b8 = (longlong *)0x0;
          local_d0 = 0;
          FUN_14485c47a(&local_d0,param_1);
          uVar4 = local_d0;
          if (local_c8 != 0) {
            plVar7 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar7 = local_a8;
            }
            (**(code **)(*plVar7 + 0x10))();
          }
          iVar1 = (int)param_6[1];
          *(uint *)(param_6 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
            FUN_147d1f8d0(param_6,iVar1);
          }
          lVar2 = *param_6;
          *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = uVar4;
          *(int *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = (int)lVar6;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[0x1b1]);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d1a852 FUN_147d1a852 body=301 status=ok
// SIG undefined FUN_147d1a852(void)

void FUN_147d1a852(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (lVar3 != 0) {
    iVar2 = FUN_147c7d842(lVar3,param_4);
    if ((iVar2 != -1) && (iVar2 < (int)param_1[0x1b1])) {
      lVar3 = *(longlong *)(param_1[0x1b0] + (longlong)iVar2 * 8);
      cVar1 = FUN_1458fc4aa(lVar3);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0xb98))(param_1);
        lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,*(undefined8 *)(lVar3 + 0x50),1,0xffffffff);
        if (lVar4 != 0) {
          cVar1 = FUN_144a7c526(lVar4);
          if ((cVar1 == '\0') || (*(longlong *)(lVar4 + 0x138) == 0)) {
            FUN_1405a2f88(lVar4,1,0,1);
          }
        }
        FUN_1407a4724(lVar3);
        FUN_147d1a124(param_1);
        local_48 = param_3[2];
        local_58 = *param_3;
        uStack_50 = param_3[1];
        local_78 = *param_2;
        uStack_74 = param_2[1];
        uStack_70 = param_2[2];
        uStack_6c = param_2[3];
        local_68 = *(undefined8 *)(param_2 + 4);
        (**(code **)(*param_1 + 0x6b8))(param_1,&local_78,&local_58,param_4);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1a980 FUN_147d1a980 body=424 status=ok
// SIG undefined FUN_147d1a980(void)

void FUN_147d1a980(longlong *param_1,undefined8 param_2,float param_3,float param_4,float param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (lVar3 != 0) {
    iVar2 = FUN_147c7d842(lVar3,param_2);
    if ((iVar2 != -1) && (iVar2 < (int)param_1[0x1b1])) {
      lVar3 = *(longlong *)(param_1[0x1b0] + (longlong)iVar2 * 8);
      cVar1 = FUN_1458fc4aa(lVar3);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0xb98))(param_1);
        lVar4 = (**(code **)(*param_1 + 0x7b8))(param_1,*(undefined8 *)(lVar3 + 0x50),1,0xffffffff);
        if (lVar4 != 0) {
          cVar1 = FUN_144a7c526(lVar4);
          if ((cVar1 != '\0') && (*(longlong *)(lVar4 + 0x138) != 0)) {
            FUN_1405a2f88(lVar4,1,0,1);
          }
        }
        uVar5 = 2;
        if (param_3 != 0.0) {
          uVar5 = param_3 < 180.0;
        }
        if (NAN(param_3)) {
          uVar5 = param_3 < 180.0;
        }
        *(undefined1 *)(lVar3 + 0x178) = uVar5;
        *(float *)(lVar3 + 0x170) = param_3;
        FUN_147c5383a(lVar3);
        uVar5 = 2;
        if (param_4 != 0.0) {
          uVar5 = param_4 < 180.0;
        }
        if (NAN(param_4)) {
          uVar5 = param_4 < 180.0;
        }
        *(undefined1 *)(lVar3 + 0x194) = uVar5;
        *(float *)(lVar3 + 400) = param_4;
        FUN_147c5383a(lVar3);
        uVar5 = 2;
        if (param_5 != 0.0) {
          uVar5 = param_5 < 180.0;
        }
        if (NAN(param_5)) {
          uVar5 = param_5 < 180.0;
        }
        *(undefined1 *)(lVar3 + 0x179) = uVar5;
        *(float *)(lVar3 + 0x174) = param_5;
        FUN_147c5383a(lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147d1ab28 FUN_147d1ab28 body=157 status=ok
// SIG undefined FUN_147d1ab28(void)

void FUN_147d1ab28(longlong *param_1,undefined8 param_2,float *param_3,float *param_4,float *param_5
                  )

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = (**(code **)(*param_1 + 0xb98))();
  if (lVar3 != 0) {
    iVar2 = FUN_147c7d842(lVar3,param_2);
    if ((iVar2 != -1) && (iVar2 < (int)param_1[0x1b1])) {
      uVar1 = *(undefined8 *)(param_1[0x1b0] + (longlong)iVar2 * 8);
      fVar4 = (float)FUN_147c54708(uVar1);
      *param_3 = fVar4 * 57.295776;
      fVar4 = (float)FUN_147c54712(uVar1);
      *param_5 = fVar4 * 57.295776;
      fVar4 = (float)FUN_147c5471c(uVar1);
      *param_4 = fVar4 * 57.295776;
    }
  }
  return;
}



// FUNCTION 147d1abc6 FUN_147d1abc6 body=58 status=ok
// SIG undefined FUN_147d1abc6(void)

void FUN_147d1abc6(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0xd78)) {
    lVar1 = 0;
    do {
      FUN_1400bcfd8(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xd78));
  }
  return;
}



// FUNCTION 147d1ac00 FUN_147d1ac00 body=144 status=ok
// SIG undefined FUN_147d1ac00(void)

float * FUN_147d1ac00(float *param_1)

{
  undefined8 in_stack_00000028;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  double local_50;
  double local_48;
  double local_40;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = local_38;
  local_38[0] = 0;
  local_38[1] = 0;
  local_68 = in_stack_00000028;
  FUN_147d1ac91(&local_50);
  *param_1 = (float)local_50;
  param_1[1] = (float)local_48;
  param_1[2] = (float)local_40;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1ac91 FUN_147d1ac91 body=984 status=ok
// SIG undefined FUN_147d1ac91(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_147d1ac91(undefined1 (*param_1) [16],longlong param_2,int param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_4 + 0x18);
  if ((longlong)iVar2 < 1) {
    param_3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = iVar2 - 1;
    piVar9 = (int *)(*(longlong *)(param_4 + 0x10) + 0x48);
    lVar8 = 0;
    iVar10 = 0;
    do {
      iVar3 = *piVar9;
      if (param_3 < iVar3 + iVar10) {
        param_3 = param_3 - iVar10;
        uVar6 = (uint)lVar8;
        goto LAB_147d1ad2b;
      }
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 0x3e;
      iVar10 = iVar3 + iVar10;
    } while (iVar2 != lVar8);
    param_3 = 0;
  }
LAB_147d1ad2b:
  lVar11 = *(longlong *)(param_4 + 0x10) + (ulonglong)uVar6 * 0xf8;
  lVar8 = FUN_144a81888(param_2);
  if (lVar8 == 0) {
LAB_147d1ad9c:
    local_c8 = param_6;
    local_d8 = param_5;
    local_d0 = param_3;
    FUN_147a10b15(&local_a8,param_2,lVar11,param_4 + 0xb8);
    dVar12 = (double)(float)uStack_a0;
    dVar15 = (double)local_a8._4_4_;
    dVar16 = (double)(float)local_a8;
  }
  else {
    plVar7 = (longlong *)FUN_144a81888(param_2);
    lVar8 = (**(code **)(*plVar7 + 0x4b8))(plVar7);
    if ((((*(int *)(lVar8 + 8) < 1) || ((*(byte *)(param_2 + 0xc62) & 4) != 0)) ||
        (*(float *)(param_2 + 0xc78) <= 0.0)) ||
       ((*(int *)(lVar11 + 0x30) == 0 || (*(int *)(*(longlong *)(lVar11 + 0x28) + 8) == 0))))
    goto LAB_147d1ad9c;
    local_a8 = *(undefined8 *)(lVar11 + 0x54);
    uStack_a0 = *(undefined8 *)(lVar11 + 0x5c);
    cVar5 = FUN_147d1c33e(param_2,&local_a8,param_3,param_1);
    if (cVar5 == '\0') goto LAB_147d1ad9c;
    dVar16 = *(double *)*param_1 - *(double *)(param_2 + 0x260);
    dVar19 = *(double *)(*param_1 + 8) - *(double *)(param_2 + 0x268);
    dVar13 = *(double *)param_1[1] - *(double *)(param_2 + 0x270);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x280);
    dVar12 = -*(double *)(param_2 + 0x240);
    dVar17 = -*(double *)(param_2 + 0x248);
    dVar15 = *(double *)(param_2 + 0x250) * -1.0;
    dVar18 = *(double *)(param_2 + 600) * 1.0;
    dVar21 = dVar16 * dVar15 - dVar12 * dVar13;
    dVar20 = dVar19 * dVar12 - dVar16 * dVar17;
    dVar4 = dVar13 * dVar17 - dVar19 * dVar15;
    dVar4 = dVar4 + dVar4;
    dVar21 = dVar21 + dVar21;
    dVar20 = dVar20 + dVar20;
    auVar14 = divpd(_DAT_149934d80,auVar1);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar14._0_8_) *
             ((dVar20 * dVar17 - dVar21 * dVar15) + dVar18 * dVar4 + dVar16);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar14._8_8_) *
             (*(double *)(param_2 + 0x240) * dVar20 + dVar15 * dVar4 + dVar18 * dVar21 + dVar19);
    dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(param_2 + 0x290))) *
             (dVar18 * dVar20 + dVar13 + (dVar21 * dVar12 - dVar4 * dVar17));
    auVar1._8_4_ = SUB84(dVar15,0);
    auVar1._0_8_ = dVar16;
    auVar1._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *param_1 = auVar1;
    *(double *)param_1[1] = dVar12;
    if (1.0 < *(float *)(param_2 + 0xc78) || *(float *)(param_2 + 0xc78) == 1.0) goto LAB_147d1adec;
    local_c8 = param_6;
    local_d8 = param_5;
    local_d0 = param_3;
    FUN_147a10b15(&local_b4,param_2,lVar11,param_4 + 0xb8);
    dVar20 = (double)*(float *)(param_2 + 0xc78);
    dVar17 = (double)(1.0 - *(float *)(param_2 + 0xc78));
    dVar12 = (double)local_ac * dVar17 + dVar12 * dVar20;
    dVar15 = (double)local_b0 * dVar17 + dVar15 * dVar20;
    dVar16 = (double)local_b4 * dVar17 + dVar16 * dVar20;
  }
  *(double *)*param_1 = dVar16;
  *(double *)(*param_1 + 8) = dVar15;
  *(double *)param_1[1] = dVar12;
LAB_147d1adec:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1b06a FUN_147d1b06a body=984 status=ok
// SIG undefined FUN_147d1b06a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_147d1b06a(undefined1 (*param_1) [16],longlong param_2,int param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar2 = *(int *)(param_4 + 0x18);
  if ((longlong)iVar2 < 1) {
    param_3 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = iVar2 - 1;
    piVar9 = (int *)(*(longlong *)(param_4 + 0x10) + 0x48);
    lVar8 = 0;
    iVar10 = 0;
    do {
      iVar3 = *piVar9;
      if (param_3 < iVar3 + iVar10) {
        param_3 = param_3 - iVar10;
        uVar6 = (uint)lVar8;
        goto LAB_147d1b104;
      }
      lVar8 = lVar8 + 1;
      piVar9 = piVar9 + 0x3e;
      iVar10 = iVar3 + iVar10;
    } while (iVar2 != lVar8);
    param_3 = 0;
  }
LAB_147d1b104:
  lVar11 = *(longlong *)(param_4 + 0x10) + (ulonglong)uVar6 * 0xf8;
  lVar8 = FUN_144a81888(param_2);
  if (lVar8 == 0) {
LAB_147d1b175:
    local_c8 = param_6;
    local_d8 = param_5;
    local_d0 = param_3;
    FUN_147a110d1(&local_a8,param_2,lVar11,param_4 + 0xb8);
    dVar12 = (double)(float)uStack_a0;
    dVar15 = (double)local_a8._4_4_;
    dVar16 = (double)(float)local_a8;
  }
  else {
    plVar7 = (longlong *)FUN_144a81888(param_2);
    lVar8 = (**(code **)(*plVar7 + 0x4b8))(plVar7);
    if ((((*(int *)(lVar8 + 8) < 1) || ((*(byte *)(param_2 + 0xc62) & 4) != 0)) ||
        (*(float *)(param_2 + 0xc78) <= 0.0)) ||
       ((*(int *)(lVar11 + 0x30) == 0 || (*(int *)(*(longlong *)(lVar11 + 0x28) + 8) == 0))))
    goto LAB_147d1b175;
    local_a8 = *(undefined8 *)(lVar11 + 0x54);
    uStack_a0 = *(undefined8 *)(lVar11 + 0x5c);
    cVar5 = FUN_147d1c33e(param_2,&local_a8,param_3,param_1);
    if (cVar5 == '\0') goto LAB_147d1b175;
    dVar16 = *(double *)*param_1 - *(double *)(param_2 + 0x260);
    dVar19 = *(double *)(*param_1 + 8) - *(double *)(param_2 + 0x268);
    dVar13 = *(double *)param_1[1] - *(double *)(param_2 + 0x270);
    auVar1 = *(undefined1 (*) [16])(param_2 + 0x280);
    dVar12 = -*(double *)(param_2 + 0x240);
    dVar17 = -*(double *)(param_2 + 0x248);
    dVar15 = *(double *)(param_2 + 0x250) * -1.0;
    dVar18 = *(double *)(param_2 + 600) * 1.0;
    dVar21 = dVar16 * dVar15 - dVar12 * dVar13;
    dVar20 = dVar19 * dVar12 - dVar16 * dVar17;
    dVar4 = dVar13 * dVar17 - dVar19 * dVar15;
    dVar4 = dVar4 + dVar4;
    dVar21 = dVar21 + dVar21;
    dVar20 = dVar20 + dVar20;
    auVar14 = divpd(_DAT_149934d80,auVar1);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar14._0_8_) *
             ((dVar20 * dVar17 - dVar21 * dVar15) + dVar18 * dVar4 + dVar16);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar14._8_8_) *
             (*(double *)(param_2 + 0x240) * dVar20 + dVar15 * dVar4 + dVar18 * dVar21 + dVar19);
    dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_2 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(param_2 + 0x290))) *
             (dVar18 * dVar20 + dVar13 + (dVar21 * dVar12 - dVar4 * dVar17));
    auVar1._8_4_ = SUB84(dVar15,0);
    auVar1._0_8_ = dVar16;
    auVar1._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    *param_1 = auVar1;
    *(double *)param_1[1] = dVar12;
    if (1.0 < *(float *)(param_2 + 0xc78) || *(float *)(param_2 + 0xc78) == 1.0) goto LAB_147d1b1c5;
    local_c8 = param_6;
    local_d8 = param_5;
    local_d0 = param_3;
    FUN_147a110d1(&local_b4,param_2,lVar11,param_4 + 0xb8);
    dVar20 = (double)*(float *)(param_2 + 0xc78);
    dVar17 = (double)(1.0 - *(float *)(param_2 + 0xc78));
    dVar12 = (double)local_ac * dVar17 + dVar12 * dVar20;
    dVar15 = (double)local_b0 * dVar17 + dVar15 * dVar20;
    dVar16 = (double)local_b4 * dVar17 + dVar16 * dVar20;
  }
  *(double *)*param_1 = dVar16;
  *(double *)(*param_1 + 8) = dVar15;
  *(double *)param_1[1] = dVar12;
LAB_147d1b1c5:
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1b444 FUN_147d1b444 body=1379 status=ok
// SIG undefined FUN_147d1b444(void)

void FUN_147d1b444(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  int local_100;
  undefined8 local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  float local_b4;
  float fStack_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f0 = param_2;
  local_e8 = param_1;
  lVar7 = FUN_144a81888();
  lVar16 = local_e8;
  if (lVar7 != 0) {
    plVar8 = (longlong *)FUN_144a81888(local_e8);
    lVar7 = (**(code **)(*plVar8 + 0x4b8))(plVar8);
    plVar8 = local_f0;
    local_c8 = param_4;
    if (((*(int *)(lVar7 + 8) < 1) || ((*(byte *)(lVar16 + 0xc62) & 4) != 0)) ||
       (*(float *)(lVar16 + 0xc78) <= 0.0)) {
      *(undefined4 *)(local_f0 + 1) = 0;
      if (*(int *)((longlong)local_f0 + 0xc) == 0) {
        iVar5 = 0;
        iVar14 = 0;
      }
      else {
        FUN_140678446(local_f0,0);
        iVar14 = (int)plVar8[1];
        iVar5 = *(int *)((longlong)plVar8 + 0xc);
      }
      uVar6 = *(uint *)(param_4 + 0xec);
      *(uint *)(plVar8 + 1) = uVar6 + iVar14;
      if ((uint)(iVar5 - iVar14) < uVar6) {
        FUN_140c0b6f2(plVar8);
      }
      lVar16 = local_e8;
      plVar8 = local_f0;
      iVar14 = *(int *)(param_4 + 0x18);
      if (0 < iVar14) {
        lVar7 = param_4 + 0xb8;
        lVar13 = 0;
        do {
          lVar9 = *(longlong *)(param_4 + 0x10);
          lVar11 = lVar13 * 0xf8;
          iVar5 = *(int *)(lVar9 + 0x48 + lVar11);
          if (iVar5 != 0) {
            local_d8 = lVar9 + lVar11;
            iVar14 = *(int *)(lVar9 + 0x10 + lVar11);
            iVar12 = 0;
            local_d0 = lVar13;
            do {
              local_108 = param_5;
              local_100 = iVar12;
              local_f8 = param_3;
              FUN_147a110d1(&local_a8,lVar16,local_d8,lVar7);
              lVar13 = *plVar8;
              lVar9 = (longlong)(iVar14 + iVar12);
              *(undefined4 *)(lVar13 + 8 + lVar9 * 0xc) = uStack_a0;
              *(ulonglong *)(lVar13 + lVar9 * 0xc) = CONCAT44(uStack_a4,local_a8);
              iVar12 = iVar12 + 1;
            } while (iVar5 != iVar12);
            iVar14 = *(int *)(local_c8 + 0x18);
            param_4 = local_c8;
            lVar13 = local_d0;
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar14);
      }
    }
    else {
      local_e0 = (longlong *)FUN_1436b60bc(lVar16);
      plVar8 = local_f0;
      if ((int)local_e0[1] != *(int *)((longlong)local_e0 + 0x34)) {
        *(undefined4 *)(local_f0 + 1) = 0;
        if (*(int *)((longlong)local_f0 + 0xc) == 0) {
          iVar5 = 0;
          iVar14 = 0;
        }
        else {
          FUN_140678446(local_f0,0);
          iVar14 = (int)plVar8[1];
          iVar5 = *(int *)((longlong)plVar8 + 0xc);
        }
        uVar6 = *(uint *)(param_4 + 0xec);
        *(uint *)(plVar8 + 1) = uVar6 + iVar14;
        if ((uint)(iVar5 - iVar14) < uVar6) {
          FUN_140c0b6f2(plVar8);
        }
        plVar8 = local_f0;
        if (0 < *(int *)(param_4 + 0x18)) {
          local_d8 = param_4 + 0xb8;
          lVar16 = 0;
          local_c0 = local_e0 + 7;
          do {
            lVar7 = *(longlong *)(param_4 + 0x10) + lVar16 * 0xf8;
            if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x30 + lVar16 * 0xf8) != 0) &&
               (*(int *)(*(longlong *)(lVar7 + 0x28) + 8) != 0)) {
              local_a8 = *(undefined4 *)(lVar7 + 0x54);
              uStack_a4 = *(undefined4 *)(lVar7 + 0x58);
              uStack_a0 = *(undefined4 *)(lVar7 + 0x5c);
              uStack_9c = *(undefined4 *)(lVar7 + 0x60);
              uVar10 = FUN_144a81888(local_e8);
              uVar6 = FUN_147d14846(uVar10,&local_a8);
              lVar9 = local_d8;
              lVar13 = local_e8;
              if ((uVar6 != 0xffffffff) && ((int)local_e0[1] != *(int *)((longlong)local_e0 + 0x34))
                 ) {
                plVar15 = (longlong *)local_e0[8];
                if ((longlong *)local_e0[8] == (longlong *)0x0) {
                  plVar15 = local_c0;
                }
                iVar14 = *(int *)((longlong)plVar15 + (ulonglong)((int)local_e0[9] - 1U & uVar6) * 4
                                 );
                if (iVar14 != -1) {
                  do {
                    lVar11 = *local_e0 + (longlong)iVar14 * 0x110;
                    if (*(uint *)(*local_e0 + (longlong)iVar14 * 0x110) == uVar6) {
                      plVar15 = (longlong *)(lVar11 + 0x10);
                      if (plVar15 != (longlong *)0x0 && lVar11 != 0) {
                        iVar14 = *(int *)(lVar7 + 0x10);
                        iVar5 = *(int *)(lVar11 + 0x18);
                        if (*(int *)(lVar7 + 0x48) < *(int *)(lVar11 + 0x18)) {
                          iVar5 = *(int *)(lVar7 + 0x48);
                        }
                        if (1.0 < *(float *)(local_e8 + 0xc78) ||
                            *(float *)(local_e8 + 0xc78) == 1.0) {
                          if (iVar5 != 0) {
                            iVar12 = 0;
                            do {
                              lVar16 = *plVar15;
                              lVar7 = *local_f0;
                              lVar13 = (longlong)(iVar14 + iVar12);
                              *(undefined4 *)(lVar7 + 8 + lVar13 * 0xc) =
                                   *(undefined4 *)(lVar16 + 8 + (longlong)iVar12 * 0xc);
                              *(undefined8 *)(lVar7 + lVar13 * 0xc) =
                                   *(undefined8 *)(lVar16 + (longlong)iVar12 * 0xc);
                              iVar12 = iVar12 + 1;
                            } while (iVar5 != iVar12);
                          }
                        }
                        else if (iVar5 != 0) {
                          iVar12 = 0;
                          do {
                            lVar16 = *plVar15;
                            lVar11 = (longlong)iVar12;
                            fVar1 = *(float *)(lVar16 + lVar11 * 0xc);
                            fVar2 = *(float *)(lVar16 + 4 + lVar11 * 0xc);
                            fVar3 = *(float *)(lVar16 + 8 + lVar11 * 0xc);
                            local_108 = param_5;
                            local_100 = iVar12;
                            local_f8 = param_3;
                            FUN_147a110d1(&local_b4,lVar13,lVar7,lVar9);
                            fVar4 = *(float *)(lVar13 + 0xc78);
                            fVar17 = 1.0 - fVar4;
                            lVar16 = *local_f0;
                            lVar11 = (longlong)(iVar14 + iVar12);
                            *(float *)(lVar16 + lVar11 * 0xc) = fVar17 * local_b4 + fVar1 * fVar4;
                            *(float *)(lVar16 + 4 + lVar11 * 0xc) =
                                 fStack_b0 * fVar17 + fVar2 * fVar4;
                            *(float *)(lVar16 + 8 + lVar11 * 0xc) =
                                 local_ac * fVar17 + fVar3 * fVar4;
                            iVar12 = iVar12 + 1;
                          } while (iVar5 != iVar12);
                        }
                        goto LAB_147d1b7db;
                      }
                      break;
                    }
                    iVar14 = *(int *)(lVar11 + 0x100);
                  } while (iVar14 != -1);
                }
              }
            }
            lVar13 = local_e8;
            iVar14 = *(int *)(lVar7 + 0x48);
            local_d0 = lVar16;
            if (iVar14 != 0) {
              iVar5 = *(int *)(lVar7 + 0x10);
              iVar12 = 0;
              do {
                local_108 = param_5;
                local_100 = iVar12;
                local_f8 = param_3;
                FUN_147a110d1(&local_b4,lVar13,lVar7,local_d8);
                lVar16 = *plVar8;
                lVar9 = (longlong)(iVar5 + iVar12);
                *(float *)(lVar16 + 8 + lVar9 * 0xc) = local_ac;
                *(ulonglong *)(lVar16 + lVar9 * 0xc) = CONCAT44(fStack_b0,local_b4);
                iVar12 = iVar12 + 1;
              } while (iVar14 != iVar12);
            }
            lVar16 = local_d0 + 1;
            param_4 = local_c8;
          } while (lVar16 < *(int *)(local_c8 + 0x18));
        }
      }
    }
  }
LAB_147d1b7db:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d1b9a8 FUN_147d1b9a8 body=183 status=ok
// SIG undefined FUN_147d1b9a8(void)

void FUN_147d1b9a8(undefined8 param_1,int param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if ((longlong)iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = iVar1 - 1;
    piVar5 = (int *)(*(longlong *)(param_3 + 0x10) + 0x48);
    lVar6 = 0;
    iVar4 = 0;
    do {
      iVar2 = *piVar5;
      if (param_2 < iVar2 + iVar4) {
        param_2 = param_2 - iVar4;
        uVar3 = (uint)lVar6;
        goto LAB_147d1ba16;
      }
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 0x3e;
      iVar4 = iVar2 + iVar4;
    } while (iVar1 != lVar6);
  }
  param_2 = 0;
LAB_147d1ba16:
  FUN_147a12333(param_1,*(longlong *)(param_3 + 0x10) + (ulonglong)uVar3 * 0xf8,param_3 + 0x30,
                param_4,param_2,param_5,param_6,param_7,param_8);
  return;
}



// FUNCTION 147d1ba60 FUN_147d1ba60 body=357 status=ok
// SIG undefined FUN_147d1ba60(void)

void FUN_147d1ba60(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar5 = FUN_144a81888();
  if (lVar5 != 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) == 0) {
      iVar4 = 0;
      iVar7 = 0;
    }
    else {
      FUN_140678446(param_2,0);
      iVar7 = (int)param_2[1];
      iVar4 = *(int *)((longlong)param_2 + 0xc);
    }
    uVar3 = *(int *)(param_4 + 0xec) * 3;
    *(uint *)(param_2 + 1) = uVar3 + iVar7;
    if ((uint)(iVar4 - iVar7) < uVar3) {
      FUN_140c0b6f2(param_2);
    }
    iVar7 = *(int *)(param_4 + 0x18);
    if (0 < iVar7) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(param_4 + 0x10);
        lVar6 = lVar5 * 0xf8;
        iVar4 = *(int *)(lVar1 + 0x48 + lVar6);
        if (iVar4 != 0) {
          iVar7 = *(int *)(lVar1 + 0x10 + lVar6) * 3;
          iVar8 = 0;
          do {
            lVar2 = *param_2;
            FUN_147a12333(param_1,lVar1 + lVar6,param_4 + 0x30,param_5,iVar8,param_3,
                          lVar2 + (longlong)iVar7 * 0xc,lVar2 + (longlong)(iVar7 + 1) * 0xc,
                          lVar2 + (longlong)(iVar7 + 2) * 0xc);
            iVar8 = iVar8 + 1;
            iVar7 = iVar7 + 3;
          } while (iVar4 != iVar8);
          iVar7 = *(int *)(param_4 + 0x18);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar7);
    }
  }
  return;
}



// FUNCTION 147d1bbc6 FUN_147d1bbc6 body=55 status=ok
// SIG undefined FUN_147d1bbc6(void)

void FUN_147d1bbc6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_3,1,0xffffffff);
  if (lVar1 != 0) {
    FUN_140bf8e30(lVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 147d1bbfe FUN_147d1bbfe body=44 status=ok
// SIG undefined FUN_147d1bbfe(void)

undefined8 FUN_147d1bbfe(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 8)) & 0xffffffffffffff04;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
  }
  return uVar3;
}



// FUNCTION 147d1bc2a FUN_147d1bc2a body=91 status=ok
// SIG undefined FUN_147d1bc2a(void)

void FUN_147d1bc2a(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined1 **local_28;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_19;
  local_28 = &local_18;
  local_18 = &LAB_1436ba19c;
  local_19 = param_2;
  FUN_14593616e(param_1,param_3,param_4,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1bc86 FUN_147d1bc86 body=243 status=ok
// SIG undefined FUN_147d1bc86(void)

void FUN_147d1bc86(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14c8464f0;
  local_68 = (undefined4)DAT_14c8464e0;
  uStack_64 = DAT_14c8464e0._4_4_;
  uStack_60 = (undefined4)DAT_14c8464e8;
  uStack_5c = DAT_14c8464e8._4_4_;
  local_50 = (undefined4)DAT_14c8464e0;
  uStack_4c = DAT_14c8464e0._4_4_;
  uStack_48 = (undefined4)DAT_14c8464e8;
  uStack_44 = DAT_14c8464e8._4_4_;
  local_40 = DAT_14c8464f0;
  local_38 = 0;
  local_30 = 0xbf800000;
  cVar1 = FUN_1436b6160();
  if (cVar1 == '\0') {
    param_3[2] = DAT_14c8464f0;
    uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_3 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_3[1] = uVar2;
    param_4[2] = DAT_14c8464f0;
    uVar2 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *param_4 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_4[1] = uVar2;
    uVar3 = 0xbf800000;
    uVar2 = 0;
  }
  else {
    param_3[2] = local_58;
    *param_3 = CONCAT44(uStack_64,local_68);
    param_3[1] = CONCAT44(uStack_5c,uStack_60);
    param_4[2] = local_40;
    *param_4 = CONCAT44(uStack_4c,local_50);
    param_4[1] = CONCAT44(uStack_44,uStack_48);
    uVar2 = local_38;
    uVar3 = local_30;
  }
  *param_5 = uVar2;
  *param_6 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1bd7a FUN_147d1bd7a body=424 status=ok
// SIG undefined FUN_147d1bd7a(void)

uint FUN_147d1bd7a(longlong param_1,void *param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8 [4];
  float local_1a4;
  undefined4 local_104;
  undefined4 local_d8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1448abda6(param_1);
  }
  if (*(char *)(param_1 + 0xc70) < '\0') {
    local_78 = param_4[2];
    local_88 = *param_4;
    uStack_80 = param_4[1];
    local_a8 = *param_3;
    uStack_a4 = param_3[1];
    uStack_a0 = param_3[2];
    uStack_9c = param_3[3];
    local_98 = *(undefined8 *)(param_3 + 4);
    local_1b8 = param_5;
    uVar4 = FUN_1479eebf0(param_1,param_2);
  }
  else {
    uVar4 = 0;
    memset(local_1a8,0,0x100);
    local_d8 = 0xffffffff;
    local_1a4 = 1.0;
    local_104 = 0xffffffff;
    if (0 < *(int *)(param_1 + 0xd78)) {
      fVar6 = 3.4028235e+38;
      lVar5 = 0;
      uVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar5 * 8);
        if (lVar1 != 0) {
          local_1b0 = *(undefined1 *)(param_5 + 0x13);
          local_1b8 = CONCAT71(local_1b8._1_7_,*(undefined1 *)(param_5 + 0x10));
          cVar3 = FUN_143606068(lVar1,local_1a8,param_3,param_4);
          fVar2 = local_1a4;
          if ((cVar3 != '\0') && (uVar4 = 1, local_1a4 < fVar6)) {
            memcpy(param_2,local_1a8,0x100);
            fVar6 = fVar2;
          }
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xd78));
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffff01;
}



// FUNCTION 147d1bf24 FUN_147d1bf24 body=414 status=ok
// SIG undefined FUN_147d1bf24(void)

uint FUN_147d1bf24(longlong param_1,void *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined1 local_188 [4];
  float local_184;
  undefined4 local_e4;
  undefined4 local_b8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(char *)(param_1 + 0xc70) < '\0') {
    local_58 = param_4[2];
    local_68 = *param_4;
    uStack_60 = param_4[1];
    local_88 = *param_3;
    uStack_84 = param_3[1];
    uStack_80 = param_3[2];
    uStack_7c = param_3[3];
    local_78 = *(undefined8 *)(param_3 + 4);
    local_198 = param_7;
    local_1a0 = param_6;
    local_1a8 = param_5;
    uVar3 = FUN_14597bfdc(param_1,param_2);
  }
  else {
    uVar3 = 0;
    memset(local_188,0,0x100);
    local_b8 = 0xffffffff;
    local_184 = 1.0;
    local_e4 = 0xffffffff;
    if (0 < *(int *)(param_1 + 0xd78)) {
      lVar4 = 0;
      uVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar4 * 8);
        if (lVar1 != 0) {
          local_198 = param_7;
          local_1a0 = param_6;
          local_1a8 = param_5;
          cVar2 = FUN_14597c210(lVar1,local_188,param_3,param_4);
          if ((cVar2 != '\0') &&
             ((uVar3 == 0 || (uVar3 = 1, local_184 < *(float *)((longlong)param_2 + 4))))) {
            memcpy(param_2,local_188,0x100);
            uVar3 = 1;
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0xd78));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return uVar3 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1c0c4 FUN_147d1c0c4 body=119 status=ok
// SIG undefined FUN_147d1c0c4(void)

undefined8 FUN_147d1c0c4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0xd78);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xd70);
    lVar4 = 0;
    do {
      uVar3 = FUN_143606076(*(undefined8 *)(lVar2 + lVar4),param_2,param_3,param_4,0,0);
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 147d1c13c FUN_147d1c13c body=430 status=ok
// SIG undefined FUN_147d1c13c(void)

void FUN_147d1c13c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  bool bVar14;
  int local_6c;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0xe70);
    lVar10 = (longlong)iVar1;
    if (lVar10 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xe68);
      cVar4 = FUN_144729dda(lVar2);
      bVar14 = true;
      if (cVar4 != '\0') {
        lVar5 = FUN_14479d2ce(lVar2);
        bVar14 = lVar5 == param_2;
      }
      local_6c = 0;
      iVar7 = 0;
LAB_147d1c1bd:
      do {
        if (iVar7 + 1 < iVar1) {
          lVar8 = (longlong)iVar7;
          lVar9 = lVar8 + 2;
          lVar5 = lVar2 + 0x48 + lVar8 * 0x48;
          bVar3 = true;
          lVar12 = -1;
          do {
            cVar4 = FUN_144729dda(lVar5);
            iVar11 = (int)lVar12;
            if (cVar4 == '\0') {
              if (bVar14 == false) {
                iVar13 = iVar7 - iVar11;
                iVar11 = -iVar11;
                goto LAB_147d1c288;
              }
            }
            else {
              lVar6 = FUN_14479d2ce(lVar5);
              if ((lVar6 == param_2) != bVar14) {
                iVar13 = iVar7 - iVar11;
                break;
              }
            }
            bVar3 = lVar9 < lVar10;
            lVar12 = lVar12 + -1;
            lVar9 = lVar9 + 1;
            lVar5 = lVar5 + 0x48;
            iVar13 = iVar1;
          } while (lVar8 - lVar10 != lVar12);
        }
        else {
          bVar3 = false;
          iVar13 = iVar7 + 1;
        }
        iVar11 = iVar13 - iVar7;
        if (bVar14 != false) {
          FUN_1403c5a35(lVar2 + (longlong)iVar7 * 0x48,iVar11);
          bVar14 = false;
          iVar7 = iVar13;
          if (!bVar3) break;
          goto LAB_147d1c1bd;
        }
LAB_147d1c288:
        if (local_6c != iVar7) {
          memmove((void *)(lVar2 + (longlong)local_6c * 0x48),
                  (void *)(lVar2 + (longlong)iVar7 * 0x48),(longlong)iVar11 * 0x48);
        }
        local_6c = local_6c + iVar11;
        bVar14 = true;
        iVar7 = iVar13;
      } while (bVar3);
      *(int *)(param_1 + 0xe70) = local_6c;
    }
  }
  return;
}



// FUNCTION 147d1c2ea FUN_147d1c2ea body=84 status=ok
// SIG undefined FUN_147d1c2ea(void)

void FUN_147d1c2ea(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe74);
  FUN_1403c5a35(*(undefined8 *)(param_1 + 0xe68),*(undefined4 *)(param_1 + 0xe70));
  *(undefined4 *)(param_1 + 0xe70) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xe74) != 0)) {
    FUN_147d20352(param_1 + 0xe68);
    return;
  }
  return;
}



// FUNCTION 147d1c33e FUN_147d1c33e body=229 status=ok
// SIG undefined FUN_147d1c33e(void)

undefined8 FUN_147d1c33e(undefined8 param_1,undefined8 param_2,uint param_3,double *param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  
  lVar4 = FUN_144a81888();
  if (lVar4 != 0) {
    uVar5 = FUN_144a81888(param_1);
    uVar3 = FUN_147d14846(uVar5,param_2);
    if (uVar3 != 0xffffffff) {
      plVar6 = (longlong *)FUN_1436b60bc(param_1);
      if ((int)plVar6[1] != *(int *)((longlong)plVar6 + 0x34)) {
        plVar8 = plVar6 + 7;
        if ((longlong *)plVar6[8] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar6[8];
        }
        iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar6[9] - 1U & uVar3) * 4);
        if (iVar9 != -1) {
          do {
            lVar4 = *plVar6 + (longlong)iVar9 * 0x110;
            if (*(uint *)(*plVar6 + (longlong)iVar9 * 0x110) == uVar3) goto LAB_147d1c395;
            iVar9 = *(int *)(lVar4 + 0x100);
          } while (iVar9 != -1);
        }
      }
      lVar4 = 0;
LAB_147d1c395:
      plVar6 = (longlong *)(lVar4 + 0x10);
      if (lVar4 == 0) {
        plVar6 = (longlong *)0x0;
      }
      if ((int)param_3 < 0) {
        return 0;
      }
      if (plVar6 == (longlong *)0x0) {
        return 0;
      }
      if ((int)param_3 < (int)plVar6[1]) {
        lVar4 = *plVar6;
        uVar7 = (ulonglong)param_3;
        fVar1 = *(float *)(lVar4 + 8 + uVar7 * 0xc);
        fVar2 = *(float *)(lVar4 + 4 + uVar7 * 0xc);
        *param_4 = (double)*(float *)(lVar4 + uVar7 * 0xc);
        param_4[1] = (double)fVar2;
        param_4[2] = (double)fVar1;
        return CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 147d1c424 FUN_147d1c424 body=163 status=ok
// SIG undefined FUN_147d1c424(void)

void FUN_147d1c424(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = FUN_144a81888();
  lVar1 = DAT_14cb07778;
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0xe50) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar2 ^ 1);
    }
    if (*(int *)(lVar1 + uVar4 * 4) != 0) {
      if ((*(byte *)(param_1 + 0x89c) < 4) || ((*(byte *)(param_1 + 0x89f) & 0x40) != 0)) {
        FUN_1436b839c(param_1,param_2,param_3);
        return;
      }
      *(undefined1 *)(param_1 + 0xc5e) = 2;
    }
  }
  return;
}



// FUNCTION 147d1c4c8 FUN_147d1c4c8 body=8 status=ok
// SIG undefined FUN_147d1c4c8(void)

void FUN_147d1c4c8(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xc5e) = 2;
  return;
}



// FUNCTION 147d1c4da FUN_147d1c4da body=84 status=ok
// SIG undefined FUN_147d1c4da(void)

void FUN_147d1c4da(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd70);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(longlong *)(lVar3 + 0x138) != 0) {
        FUN_1417e5362(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147d1c52e FUN_147d1c52e body=86 status=ok
// SIG undefined FUN_147d1c52e(void)

undefined8 FUN_147d1c52e(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x7b8))(param_1,param_2,1,0xffffffff);
  if (lVar1 == 0) {
    fVar2 = 0.0;
    uVar4 = 0;
  }
  else {
    if (param_3 == '\0') {
      fVar2 = 1.0;
    }
    else {
      fVar2 = *(float *)(lVar1 + 0xe0);
    }
    uVar3 = FUN_1401edbbc(lVar1);
    uVar4 = (undefined4)((ulonglong)uVar3 >> 0x20);
    fVar2 = (float)uVar3 * fVar2;
  }
  return CONCAT44(uVar4,fVar2);
}



// FUNCTION 147d1c584 FUN_147d1c584 body=420 status=ok
// SIG undefined FUN_147d1c584(void)

double * FUN_147d1c584(longlong param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar6 = *(int *)(param_1 + 0xd78);
  dVar3 = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  dVar5 = DAT_14c8464e0;
  if (iVar6 < 1) {
    dVar9 = 0.0;
  }
  else {
    fVar10 = 0.0;
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + lVar7 * 8);
      if (*(longlong *)(lVar2 + 0x138) != 0) {
        fVar1 = *(float *)(lVar2 + 0xe0);
        fVar8 = (float)FUN_1401edbbc(lVar2);
        fVar8 = fVar8 * fVar1;
        FUN_1417e57d6(lVar2,local_f8);
        dVar9 = (double)fVar8;
        dVar5 = dVar5 + dVar9 * local_d8;
        dVar4 = dVar4 + local_d0 * dVar9;
        dVar3 = dVar3 + local_c8 * dVar9;
        fVar10 = fVar10 + fVar8;
        iVar6 = *(int *)(param_1 + 0xd78);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
    dVar9 = (double)fVar10;
  }
  dVar9 = 1.0 / dVar9;
  *param_2 = dVar9 * dVar5;
  param_2[1] = dVar4 * dVar9;
  param_2[2] = dVar3 * dVar9;
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1c72a FUN_147d1c72a body=92 status=ok
// SIG undefined FUN_147d1c72a(void)

void FUN_147d1c72a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140e1c5ee(param_1 + 0x410);
  iVar1 = *(int *)(param_1 + 0xd78);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd70);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (*(longlong *)(lVar3 + 0x138) != 0) {
        FUN_140e1c5ee(lVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 147d1c786 FUN_147d1c786 body=9 status=ok
// SIG undefined FUN_147d1c786(void)

void FUN_147d1c786(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc9c) = param_2;
  return;
}



// FUNCTION 147d1c798 FUN_147d1c798 body=8 status=ok
// SIG undefined FUN_147d1c798(void)

void FUN_147d1c798(longlong param_1)

{
  *(undefined1 *)(param_1 + 0xc5e) = 1;
  return;
}



// FUNCTION 147d1c7a0 FUN_147d1c7a0 body=251 status=ok
// SIG undefined FUN_147d1c7a0(void)

undefined4
FUN_147d1c7a0(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  void *pvVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_5c = 0x7f7fffff;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  local_70 = param_7;
  local_78 = param_6;
  local_80 = param_5;
  local_98 = &local_5c;
  local_90 = param_3;
  local_88 = param_4;
  uVar2 = FUN_147c68af6(lVar3,param_1 + 0xd70,1,&local_58);
  pvVar1 = local_58;
  if (0 < (int)uStack_50) {
    memcpy(param_2,local_58,0x100);
  }
  if (pvVar1 != (void *)0x0) {
    FUN_1400020a8(pvVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1c89c FUN_147d1c89c body=201 status=ok
// SIG undefined FUN_147d1c89c(void)

ulonglong FUN_147d1c89c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,char param_8)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = param_2[1];
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  cVar3 = FUN_147c68af6(lVar4,param_1 + 0xd70,0,param_2,param_3,param_4,param_5,param_6,param_7,0);
  if ((param_8 != '\0') && ((int)lVar2 < (int)param_2[1])) {
    FUN_1479b52d2(param_2);
  }
  if (cVar3 != '\0') {
    iVar1 = (int)param_2[1];
    if (0 < (longlong)iVar1) {
      return CONCAT71((int7)iVar1,*(undefined1 *)(*param_2 + -0x53 + (longlong)iVar1 * 0x100)) &
             0xffffffffffffff01;
    }
  }
  return 0;
}



// FUNCTION 147d1c966 FUN_147d1c966 body=292 status=ok
// SIG undefined FUN_147d1c966(void)

undefined4
FUN_147d1c966(longlong param_1,void *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  void *pvVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_5c;
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_5c = 0x7f7fffff;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  local_70 = param_9;
  local_78 = param_8;
  local_80 = param_7;
  local_88 = param_6;
  local_90 = param_5;
  local_a8 = &local_5c;
  local_a0 = param_3;
  local_98 = param_4;
  uVar2 = FUN_147c68e5c(lVar3,param_1 + 0xd70,1,&local_58);
  pvVar1 = local_58;
  if (0 < (int)uStack_50) {
    memcpy(param_2,local_58,0x100);
  }
  if (pvVar1 != (void *)0x0) {
    FUN_1400020a8(pvVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1ca8c FUN_147d1ca8c body=245 status=ok
// SIG undefined FUN_147d1ca8c(void)

ulonglong FUN_147d1ca8c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,char param_10)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = param_2[1];
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  cVar3 = FUN_147c68e5c(lVar4,param_1 + 0xd70,0,param_2,param_3,param_4,param_5,param_6,param_7,
                        param_8,param_9,0);
  if ((param_10 != '\0') && ((int)lVar2 < (int)param_2[1])) {
    FUN_1479b52d2(param_2);
  }
  if (cVar3 != '\0') {
    iVar1 = (int)param_2[1];
    if (0 < (longlong)iVar1) {
      return CONCAT71((int7)iVar1,*(undefined1 *)(*param_2 + -0x53 + (longlong)iVar1 * 0x100)) &
             0xffffffffffffff01;
    }
  }
  return 0;
}



// FUNCTION 147d1cb82 FUN_147d1cb82 body=78 status=ok
// SIG undefined FUN_147d1cb82(void)

void FUN_147d1cb82(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined4 in_R10D;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_R10D >> 8),*(undefined1 *)(param_1 + 0x2d3)) & 0xffffff10;
  FUN_147c691b8(param_5,param_1 + 0xd70,CONCAT31((int3)(uVar1 >> 8),(byte)uVar1 >> 4),param_7,
                param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 147d1cbd0 FUN_147d1cbd0 body=167 status=ok
// SIG undefined FUN_147d1cbd0(void)

longlong FUN_147d1cbd0(longlong *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if ((cVar1 == '\0') && (lVar2 = FUN_147d23654(param_1,param_2,param_3), lVar2 != 0)) {
    lVar5 = (ulonglong)
            ((uint)((uint)(*(int *)(lVar2 + 0x170) - *(int *)(lVar2 + 0x16c)) < 2 & param_4) ^
            *(uint *)(lVar2 + 0x168)) * 0x10;
    plVar4 = (longlong *)(lVar2 + lVar5 + 0x148);
    lVar5 = *(longlong *)(lVar2 + 0x148 + lVar5);
    plVar3 = (longlong *)(lVar2 + (ulonglong)*(uint *)(lVar2 + 0x168) * 0x10 + 0x148);
    plVar6 = plVar4;
    if (param_4 != 0) {
      plVar6 = plVar3;
    }
    if (lVar5 != 0) {
      plVar6 = plVar4;
    }
    if (*plVar6 != 0) {
      if (lVar5 == 0) {
        plVar4 = plVar3;
      }
      return plVar4[1];
    }
  }
  return 0;
}



// FUNCTION 147d1cc78 FUN_147d1cc78 body=76 status=ok
// SIG undefined FUN_147d1cc78(void)

undefined8
FUN_147d1cc78(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x40))();
  if (((cVar1 == '\0') && (lVar2 = FUN_147d23654(param_1,param_2,param_3), lVar2 != 0)) &&
     (lVar2 = FUN_147adbd9a(lVar2,param_5), lVar2 != 0)) {
    return *(undefined8 *)(lVar2 + 0x30);
  }
  return 0;
}



// FUNCTION 147d1ccc4 FUN_147d1ccc4 body=569 status=ok
// SIG undefined FUN_147d1ccc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_147d1ccc4(undefined8 *param_1,longlong *param_2,uint param_3,int param_4,undefined8 param_5,
             undefined1 param_6)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
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
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  char cVar20;
  undefined4 uVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  undefined8 unaff_RBX;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar20 = (**(code **)(*param_2 + 0x40))(param_2);
  if (((cVar20 == '\0') &&
      (plVar22 = (longlong *)FUN_147d23654(param_2,param_3,param_4), plVar22 != (longlong *)0x0)) &&
     (plVar22 = (longlong *)(**(code **)(*plVar22 + 0x60))(plVar22), plVar22 != (longlong *)0x0)) {
    uVar25 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_6);
    plVar1 = plVar22 + 2;
    cVar20 = FUN_147adbdfa(plVar1,uVar25 & 0xffffffff);
    if (cVar20 != '\0') {
      plVar4 = (longlong *)param_2[8];
      uVar3 = *(uint *)(plVar4 + 1);
      uVar24 = 0;
      if ((ulonglong)uVar3 != 0) {
        uVar26 = (uint)*(byte *)((longlong)plVar4 + 0x1c);
        if ((int)(uint)*(byte *)((longlong)plVar4 + 0x1c) < (int)param_3) {
          uVar26 = param_3;
        }
        if ((int)(uVar3 - 1) <= (int)uVar26) {
          uVar26 = uVar3 - 1;
        }
        uVar28 = (ulonglong)uVar26;
        if ((int)uVar26 < 1) {
          uVar28 = uVar24;
        }
        if ((int)uVar28 < (int)uVar3) {
          lVar27 = uVar28 << 0x20;
          do {
            if (*(int *)(*(longlong *)(*plVar4 + uVar28 * 8) + 0xec) != 0) {
              uVar24 = *(ulonglong *)(*plVar4 + (lVar27 >> 0x1d));
              break;
            }
            uVar28 = uVar28 + 1;
            lVar27 = lVar27 + 0x100000000;
            uVar24 = 0;
          } while (uVar3 != uVar28);
        }
      }
      lVar27 = *(longlong *)(uVar24 + 0x10);
      *(undefined4 *)param_1 = 0;
      param_1[2] = 0;
      uVar19 = DAT_14c846258;
      param_1[4] = _DAT_14c846250;
      param_1[5] = uVar19;
      uVar19 = _DAT_14c846268;
      param_1[6] = _DAT_14c846260;
      param_1[7] = uVar19;
      uVar19 = _DAT_14c846278;
      param_1[8] = _DAT_14c846270;
      param_1[9] = uVar19;
      uVar6 = DAT_14c84628c;
      uVar5 = DAT_14c846288;
      uVar21 = DAT_14c846284;
      *(undefined4 *)(param_1 + 10) = DAT_14c846280;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar21;
      *(undefined4 *)(param_1 + 0xb) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
      (**(code **)(*plVar22 + 0x18))(plVar22,&local_50);
      param_1[1] = local_50;
      if (local_50 != 0) {
        LOCK();
        puVar2 = (uint *)(local_50 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      uVar21 = (**(code **)(*plVar22 + 0x28))
                         (plVar22,*(undefined4 *)(lVar27 + 0x10 + (longlong)param_4 * 0xf8),0);
      *(undefined4 *)param_1 = uVar21;
      lVar27 = FUN_147adbe52(plVar1,uVar25 & 0xffffffff);
      param_1[2] = *(undefined8 *)(lVar27 + 8);
      puVar23 = (undefined4 *)FUN_147adbe9e(plVar1,uVar25 & 0xffffffff);
      uVar21 = puVar23[1];
      uVar5 = puVar23[2];
      uVar6 = puVar23[3];
      uVar7 = puVar23[4];
      uVar8 = puVar23[5];
      uVar9 = puVar23[6];
      uVar10 = puVar23[7];
      uVar11 = puVar23[8];
      uVar12 = puVar23[9];
      uVar13 = puVar23[10];
      uVar14 = puVar23[0xb];
      uVar15 = puVar23[0xc];
      uVar16 = puVar23[0xd];
      uVar17 = puVar23[0xe];
      uVar18 = puVar23[0xf];
      *(undefined4 *)(param_1 + 4) = *puVar23;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar21;
      *(undefined4 *)(param_1 + 5) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
      *(undefined4 *)(param_1 + 6) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar8;
      *(undefined4 *)(param_1 + 7) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 8) = uVar11;
      *(undefined4 *)((longlong)param_1 + 0x44) = uVar12;
      *(undefined4 *)(param_1 + 9) = uVar13;
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar14;
      *(undefined4 *)(param_1 + 10) = uVar15;
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar16;
      *(undefined4 *)(param_1 + 0xb) = uVar17;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar18;
      if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar19 = DAT_14c846258;
  param_1[4] = _DAT_14c846250;
  param_1[5] = uVar19;
  uVar19 = _DAT_14c846268;
  param_1[6] = _DAT_14c846260;
  param_1[7] = uVar19;
  uVar19 = _DAT_14c846278;
  param_1[8] = _DAT_14c846270;
  param_1[9] = uVar19;
  uVar6 = DAT_14c84628c;
  uVar5 = DAT_14c846288;
  uVar21 = DAT_14c846284;
  *(undefined4 *)(param_1 + 10) = DAT_14c846280;
  *(undefined4 *)((longlong)param_1 + 0x54) = uVar21;
  *(undefined4 *)(param_1 + 0xb) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 147d1cefe FUN_147d1cefe body=1123 status=ok
// SIG undefined FUN_147d1cefe(void)

longlong FUN_147d1cefe(longlong param_1,longlong *param_2,uint param_3,undefined1 param_4,
                      undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  char cVar10;
  int *piVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [32];
  int *local_88;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar10 = (**(code **)(*param_2 + 0x40))();
  if (cVar10 == '\0') {
    plVar6 = (longlong *)param_2[8];
    uVar3 = *(uint *)(plVar6 + 1);
    uVar15 = 0;
    if ((ulonglong)uVar3 != 0) {
      uVar16 = (uint)*(byte *)((longlong)plVar6 + 0x1c);
      if ((int)(uint)*(byte *)((longlong)plVar6 + 0x1c) < (int)param_3) {
        uVar16 = param_3;
      }
      if ((int)(uVar3 - 1) <= (int)uVar16) {
        uVar16 = uVar3 - 1;
      }
      uVar18 = (ulonglong)uVar16;
      if ((int)uVar16 < 1) {
        uVar18 = uVar15;
      }
      if ((int)uVar18 < (int)uVar3) {
        lVar17 = uVar18 << 0x20;
        do {
          if (*(int *)(*(longlong *)(*plVar6 + uVar18 * 8) + 0xec) != 0) {
            uVar15 = *(ulonglong *)(*plVar6 + (lVar17 >> 0x1d));
            break;
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0x100000000;
          uVar15 = 0;
        } while (uVar3 != uVar18);
      }
    }
    local_80 = CONCAT71(local_80._1_7_,param_4);
    iVar4 = *(int *)(uVar15 + 0xec);
    lVar17 = FUN_147d23654(param_2,param_3,0);
    iVar5 = *(int *)(lVar17 + 0x140);
    piVar11 = (int *)FUN_147d2369c(param_2,param_3);
    plVar6 = (longlong *)(piVar11 + 4);
    puVar7 = *(undefined8 **)(piVar11 + 4);
    if ((puVar7 != (undefined8 *)0x0) && (*piVar11 == iVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
    }
    puVar8 = *(undefined8 **)(piVar11 + 6);
    if (puVar8 != puVar7) {
      *(undefined8 **)(piVar11 + 6) = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
      }
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar8 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
    lVar17 = *(longlong *)(piVar11 + 0xc);
    lVar14 = *(longlong *)(piVar11 + 0xe);
    if (lVar14 != lVar17) {
      *(longlong *)(piVar11 + 0xe) = lVar17;
      if (lVar17 != 0) {
        LOCK();
        *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
        UNLOCK();
      }
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
    uVar3 = iVar4 * 3;
    local_88 = (int *)&local_49;
    local_49 = 0;
    local_58 = param_5;
    uVar16 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar16 = DAT_14ca84e48;
    }
    local_78 = uVar16 + (uVar16 == 0);
    uStack_70 = 0x4109;
    uVar16 = DAT_14ca84e48;
    if (uVar3 < DAT_14ca84e48) {
      uVar16 = uVar3;
    }
    local_68 = 0;
    iStack_74 = uVar16 + (uVar16 == 0);
    lVar17 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70);
    plVar12 = (longlong *)FUN_1449609de(param_1,lVar17);
    puVar7 = (undefined8 *)*plVar12;
    puVar8 = (undefined8 *)*plVar6;
    cVar10 = (char)local_80;
    if (puVar8 != puVar7) {
      *plVar6 = (longlong)puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
        UNLOCK();
      }
      if (puVar8 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar8 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
    }
    local_78 = CONCAT31(local_78._1_3_,0xd);
    iStack_74 = 0;
    uStack_70 = 0xffffffff;
    local_68 = 0;
    lVar13 = FUN_14002bb54(*(longlong *)(piVar11 + 4) + 0x38,*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(*(longlong *)(piVar11 + 4) + 0x28));
    lVar14 = *(longlong *)(piVar11 + 0xc);
    if (lVar14 != lVar13) {
      *(longlong *)(piVar11 + 0xc) = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
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
    if (cVar10 != '\0') {
      puVar7 = *(undefined8 **)(piVar11 + 4);
      puVar8 = *(undefined8 **)(piVar11 + 6);
      if (puVar8 != puVar7) {
        *(undefined8 **)(piVar11 + 6) = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
          UNLOCK();
        }
        if (puVar8 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(puVar8 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      lVar14 = *(longlong *)(piVar11 + 0xc);
      lVar13 = *(longlong *)(piVar11 + 0xe);
      if (lVar13 != lVar14) {
        *(longlong *)(piVar11 + 0xe) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        if (lVar13 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar13 + 8);
          uVar3 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar3 & 0x3fffffff) == 1) {
            FUN_144a54812();
          }
        }
      }
    }
    *piVar11 = iVar5;
    *(undefined4 *)(lVar17 + 0x58) = 0x78;
    local_80 = *(undefined8 *)(*(longlong *)param_2[8] + (longlong)(int)param_3 * 8);
    lVar14 = FUN_147d219ae(param_2,param_3);
    iVar4 = *(int *)(lVar14 + 8);
    local_78 = 0;
    iStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = 0;
    FUN_147ade61a(&local_78,iVar4,1);
    if (0 < (longlong)iVar4) {
      lVar14 = 0;
      do {
        lVar13 = *(longlong *)(*plVar6 + 0x28);
        lVar9 = *(longlong *)(CONCAT44(iStack_74,local_78) + lVar14 * 8);
        if (lVar9 != lVar13) {
          *(longlong *)(CONCAT44(iStack_74,local_78) + lVar14 * 8) = lVar13;
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          if (lVar9 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar9 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
        }
        lVar14 = lVar14 + 1;
      } while (iVar4 != lVar14);
    }
    local_88 = &local_78;
    (**(code **)(*param_2 + 0xe8))(param_2,*(undefined8 *)(param_1 + 0x18),local_80,param_3);
    FUN_147ade7c3(CONCAT44(iStack_74,local_78),uStack_70);
    if (CONCAT44(iStack_74,local_78) != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar17 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar17;
}



// FUNCTION 147d1d380 FUN_147d1d380 body=608 status=ok
// SIG undefined FUN_147d1d380(void)

longlong FUN_147d1d380(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar9 = (**(code **)(*param_2 + 0x40))();
  if (cVar9 == '\0') {
    plVar11 = (longlong *)param_2[8];
    uVar3 = *(uint *)(plVar11 + 1);
    uVar13 = 0;
    if ((ulonglong)uVar3 != 0) {
      uVar15 = (uint)*(byte *)((longlong)plVar11 + 0x1c);
      if ((int)(uint)*(byte *)((longlong)plVar11 + 0x1c) < (int)param_3) {
        uVar15 = param_3;
      }
      if ((int)(uVar3 - 1) <= (int)uVar15) {
        uVar15 = uVar3 - 1;
      }
      uVar17 = (ulonglong)uVar15;
      if ((int)uVar15 < 1) {
        uVar17 = uVar13;
      }
      if ((int)uVar17 < (int)uVar3) {
        lVar16 = uVar17 << 0x20;
        do {
          if (*(int *)(*(longlong *)(*plVar11 + uVar17 * 8) + 0xec) != 0) {
            uVar13 = *(ulonglong *)(*plVar11 + (lVar16 >> 0x1d));
            break;
          }
          uVar17 = uVar17 + 1;
          lVar16 = lVar16 + 0x100000000;
          uVar13 = 0;
        } while (uVar3 != uVar17);
      }
    }
    iVar4 = *(int *)(uVar13 + 0xec);
    lVar16 = FUN_147d23654(param_2,param_3,0);
    iVar5 = *(int *)(lVar16 + 0x140);
    lVar16 = FUN_147d2369c(param_2,param_3);
    if ((*(longlong *)(lVar16 + 0x20) != 0) && (*(int *)(lVar16 + 4) == iVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    uVar3 = iVar4 * 2;
    local_68 = &local_39;
    local_39 = 0;
    uVar15 = 8;
    if (DAT_14ca84e48 < 8) {
      uVar15 = DAT_14ca84e48;
    }
    local_60 = uVar15 + (uVar15 == 0);
    if (DAT_14ca84e48 <= uVar3) {
      uVar3 = DAT_14ca84e48;
    }
    local_50 = 0;
    local_5c = CONCAT44(0x4109,uVar3 + (uVar3 == 0));
    local_48 = param_4;
    lVar10 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70);
    plVar11 = (longlong *)FUN_1449609de(param_1,lVar10);
    puVar6 = (undefined8 *)*plVar11;
    puVar7 = *(undefined8 **)(lVar16 + 0x20);
    if (puVar7 != puVar6) {
      *(undefined8 **)(lVar16 + 0x20) = puVar6;
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
        UNLOCK();
      }
      if (puVar7 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar7 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar7)(puVar7,1);
        }
      }
    }
    uVar14 = 0x3f;
    if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
      uVar14 = 0x23;
    }
    local_60 = CONCAT31(local_60._1_3_,uVar14);
    local_5c = 0xffffffff00000000;
    local_50 = 0;
    lVar12 = FUN_14002bb54(*(longlong *)(lVar16 + 0x20) + 0x38,*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(*(longlong *)(lVar16 + 0x20) + 0x28));
    lVar8 = *(longlong *)(lVar16 + 0x40);
    if (lVar8 != lVar12) {
      *(longlong *)(lVar16 + 0x40) = lVar12;
      if (lVar12 != 0) {
        LOCK();
        *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar8 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    *(int *)(lVar16 + 4) = iVar5;
    *(undefined4 *)(lVar10 + 0x58) = 0x78;
  }
  else {
    lVar10 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 147d1d5fc FUN_147d1d5fc body=561 status=ok
// SIG undefined FUN_147d1d5fc(void)

longlong FUN_147d1d5fc(longlong param_1,longlong *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  undefined8 local_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar8 = (**(code **)(*param_2 + 0x40))();
  if (cVar8 == '\0') {
    plVar10 = (longlong *)param_2[8];
    uVar3 = *(uint *)(plVar10 + 1);
    uVar12 = 0;
    if ((ulonglong)uVar3 != 0) {
      uVar13 = (uint)*(byte *)((longlong)plVar10 + 0x1c);
      if ((int)(uint)*(byte *)((longlong)plVar10 + 0x1c) < (int)param_3) {
        uVar13 = param_3;
      }
      if ((int)(uVar3 - 1) <= (int)uVar13) {
        uVar13 = uVar3 - 1;
      }
      uVar15 = (ulonglong)uVar13;
      if ((int)uVar13 < 1) {
        uVar15 = uVar12;
      }
      if ((int)uVar15 < (int)uVar3) {
        lVar14 = uVar15 << 0x20;
        do {
          if (*(int *)(*(longlong *)(*plVar10 + uVar15 * 8) + 0xec) != 0) {
            uVar12 = *(ulonglong *)(*plVar10 + (lVar14 >> 0x1d));
            break;
          }
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x100000000;
          uVar12 = 0;
        } while (uVar3 != uVar15);
      }
    }
    uVar3 = *(uint *)(uVar12 + 0xec);
    lVar14 = FUN_147d23654(param_2,param_3,0);
    iVar4 = *(int *)(lVar14 + 0x140);
    lVar14 = FUN_147d2369c(param_2,param_3);
    if ((*(longlong *)(lVar14 + 0x28) != 0) && (*(int *)(lVar14 + 8) == iVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    local_68 = &local_39;
    local_39 = 0;
    uVar13 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar13 = DAT_14ca84e48;
    }
    local_60 = uVar13 + (uVar13 == 0);
    uVar13 = DAT_14ca84e48;
    if (uVar3 < DAT_14ca84e48) {
      uVar13 = uVar3;
    }
    local_50 = 0;
    local_5c = CONCAT44(0x4109,uVar13 + (uVar13 == 0));
    local_48 = param_4;
    lVar9 = FUN_144738de6(param_1 + 0x188,param_1 + 0x70);
    plVar10 = (longlong *)FUN_1449609de(param_1,lVar9);
    puVar5 = (undefined8 *)*plVar10;
    puVar6 = *(undefined8 **)(lVar14 + 0x28);
    if (puVar6 != puVar5) {
      *(undefined8 **)(lVar14 + 0x28) = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
    local_60 = CONCAT31(local_60._1_3_,0x25);
    local_5c = 0xffffffff00000000;
    local_50 = 0;
    lVar11 = FUN_14002bb54(*(longlong *)(lVar14 + 0x28) + 0x38,*(undefined8 *)(param_1 + 0x18),
                           *(undefined8 *)(*(longlong *)(lVar14 + 0x28) + 0x28));
    lVar7 = *(longlong *)(lVar14 + 0x48);
    if (lVar7 != lVar11) {
      *(longlong *)(lVar14 + 0x48) = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      if (lVar7 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar7 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    *(int *)(lVar14 + 8) = iVar4;
    *(undefined4 *)(lVar9 + 0x58) = 0x78;
  }
  else {
    lVar9 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
}



// FUNCTION 147d1d848 FUN_147d1d848 body=358 status=ok
// SIG undefined FUN_147d1d848(void)

void FUN_147d1d848(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  longlong lStack_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  if (cVar3 != '\0') goto LAB_147d1d87c;
  puVar4 = (undefined4 *)FUN_147d2369c(param_2,param_3);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_88[0] = *puVar4;
  lVar2 = *(longlong *)(puVar4 + 0xc);
  if (lVar2 != 0) {
    local_80 = *(undefined8 *)(*(longlong *)(puVar4 + 4) + 0x28);
    local_60 = *(undefined8 *)(puVar4 + 0xe);
    lStack_68 = lVar2;
  }
  lVar5 = *(longlong *)(puVar4 + 0x10);
  if (lVar5 == 0) {
    lVar7 = *(longlong *)(puVar4 + 0x12);
    if (lVar7 != 0) goto LAB_147d1d925;
    if (lVar2 == 0) goto LAB_147d1d87c;
  }
  else {
    uStack_78 = *(undefined8 *)(*(longlong *)(puVar4 + 8) + 0x28);
    lVar7 = *(longlong *)(puVar4 + 0x12);
    lStack_58 = lVar5;
    if (lVar7 != 0) {
LAB_147d1d925:
      local_70 = *(undefined8 *)(*(longlong *)(puVar4 + 10) + 0x28);
      local_50 = lVar7;
    }
  }
  lVar2 = param_2[0x46];
  lVar5 = FUN_147d219ae(param_2,param_3);
  iVar1 = *(int *)(lVar5 + 8);
  if (0 < (longlong)iVar1) {
    uVar8 = 0;
    do {
      uVar6 = FUN_147d23654(param_2,param_3,uVar8 & 0xffffffff);
      lVar5 = *(longlong *)(*(longlong *)(lVar2 + (longlong)param_3 * 0xa0 + 0x28) + uVar8 * 8);
      if (lVar5 != 0) {
        FUN_147add784(lVar5,param_1,uVar6,local_88);
      }
      uVar8 = uVar8 + 1;
    } while ((longlong)iVar1 != uVar8);
  }
LAB_147d1d87c:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d1d9b0 FUN_147d1d9b0 body=369 status=ok
// SIG undefined FUN_147d1d9b0(void)

void FUN_147d1d9b0(longlong *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_58;
  ulonglong uStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar6 = (**(code **)(*param_1 + 0x40))();
  if (cVar6 == '\0') {
    piVar7 = (int *)FUN_147d2369c(param_1,param_2);
    if (((*piVar7 != 0) || (piVar7[1] != 0)) || (piVar7[2] != 0)) {
      FUN_14793b110(piVar7);
      lVar4 = param_1[0x46];
      lVar8 = FUN_147d219ae(param_1,param_2);
      iVar3 = *(int *)(lVar8 + 8);
      if (0 < (longlong)iVar3) {
        lVar8 = 0;
        do {
          lVar5 = *(longlong *)(*(longlong *)(lVar4 + (longlong)param_2 * 0xa0 + 0x28) + lVar8 * 8);
          if (lVar5 != 0) {
            FUN_147adcfcc(lVar5,&DAT_14ca85100);
          }
          lVar8 = lVar8 + 1;
        } while (iVar3 != lVar8);
      }
      lVar4 = *(longlong *)(*(longlong *)param_1[8] + (longlong)param_2 * 8);
      local_48 = *(longlong *)(lVar4 + 200);
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_58 = 0;
      uStack_50 = 0;
      FUN_147d1db22(&local_58,&local_48,iVar3);
      local_68 = &local_58;
      (**(code **)(*param_1 + 0xe8))(param_1,&DAT_14ca85100,lVar4,param_2);
      FUN_147ade7c3(local_58,uStack_50 & 0xffffffff);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_48 != 0) {
        LOCK();
        puVar1 = (uint *)(local_48 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1db22 FUN_147d1db22 body=94 status=ok
// SIG undefined FUN_147d1db22(void)

void FUN_147d1db22(longlong *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  FUN_147d2040c(param_1,param_3);
  if (0 < param_3) {
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_147ade6fe(param_1,iVar1);
      }
      lVar2 = *param_2;
      *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d1db84 FUN_147d1db84 body=121 status=ok
// SIG undefined FUN_147d1db84(void)

void FUN_147d1db84(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 1) {
    *(undefined4 *)(param_1 + 1) = 1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 1U - iVar1) {
      FUN_147d204b2(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(ulonglong)(1U - iVar1) << 4);
    return;
  }
  if (iVar1 == 1) {
    return;
  }
  FUN_147d20538(param_1,iVar1 + -1);
  FUN_147d20588(param_1);
  return;
}



// FUNCTION 147d1dbfe FUN_147d1dbfe body=100 status=ok
// SIG undefined FUN_147d1dbfe(void)

void FUN_147d1dbfe(longlong param_1)

{
  if (((*(char *)(param_1 + 0x50) == '\0') && (DAT_14c872bf0 == '\0')) &&
     (*(undefined4 *)(param_1 + 0x48) = 0, *(int *)(param_1 + 0x4c) != 0)) {
    FUN_14024fde8(param_1 + 0x40,0);
  }
  if (((*(char *)(param_1 + 0x78) == '\0') && (DAT_14c872bf0 == '\0')) &&
     (*(undefined4 *)(param_1 + 0x70) = 0, *(int *)(param_1 + 0x74) != 0)) {
    FUN_140552fc6(param_1 + 0x68,0);
    return;
  }
  return;
}



// FUNCTION 147d1dc62 FUN_147d1dc62 body=592 status=ok
// SIG undefined FUN_147d1dc62(void)

void FUN_147d1dc62(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x88))();
    FUN_1446f470e(local_30,L"IndexBuffer",1);
    FUN_1400e5d6e(param_2,local_30,(longlong)iVar6);
  }
  iVar6 = *(int *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xec);
  FUN_1446f470e(local_30,L"PositionVertexBuffer",1);
  FUN_1400e5d6e(param_2,local_30,iVar6 * iVar3);
  iVar6 = *(int *)(param_1 + 0xa8);
  iVar3 = *(int *)(param_1 + 0xa4);
  iVar4 = *(int *)(param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 0xac);
  FUN_1446f470e(local_30,L"TexcoordBuffer and TangentBuffer",1);
  FUN_1400e5d6e(param_2,local_30,(iVar6 * iVar3 + iVar4) * iVar5);
  iVar6 = *(int *)(param_1 + 0x1b8);
  bVar1 = *(byte *)(param_1 + 0x160);
  bVar2 = *(byte *)(param_1 + 0x161);
  iVar3 = *(int *)(param_1 + 0x17c);
  FUN_1446f470e(local_30,L"SkinWeightVertexBuffer",1);
  FUN_1400e5d6e(param_2,local_30,((uint)bVar1 + (uint)bVar2 + 2) * iVar3 + iVar6 * 4);
  uVar7 = FUN_1409d5c68(param_1 + 0xf8);
  FUN_1446f470e(local_30,L"ColorVertexBuffer",1);
  FUN_1400e5d6e(param_2,local_30,uVar7);
  iVar6 = *(int *)(param_1 + 0x200);
  iVar3 = *(int *)(param_1 + 0x204);
  FUN_1446f470e(local_30,L"ClothVertexBuffer",1);
  FUN_1400e5d6e(param_2,local_30,iVar6 * iVar3);
  uVar8 = FUN_1433f342e(param_1 + 0x298);
  FUN_1446f470e(local_30,L"SkinWeightProfilesData",1);
  FUN_1400e5d6e(param_2,local_30,uVar8);
  iVar6 = FUN_14793c302(param_1 + 0x380);
  FUN_1446f470e(local_30,L"VertexAttributeData",1);
  FUN_1400e5d6e(param_2,local_30,(longlong)iVar6);
  iVar6 = FUN_147cce9e4(param_1 + 0x3d0);
  FUN_1446f470e(local_30,L"HalfEdgeBuffer",1);
  FUN_1400e5d6e(param_2,local_30,(longlong)iVar6);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1deb4 FUN_147d1deb4 body=83 status=ok
// SIG undefined FUN_147d1deb4(void)

bool FUN_147d1deb4(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  bool bVar5;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x18);
  if ((longlong)uVar2 < 1) {
    bVar4 = false;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x30);
    bVar4 = true;
    uVar3 = 1;
    do {
      if ((*piVar1 != 0) && (*(int *)(*(longlong *)(piVar1 + -2) + 8) != 0)) {
        return bVar4;
      }
      bVar4 = uVar3 < uVar2;
      piVar1 = piVar1 + 0x3e;
      bVar5 = uVar3 != uVar2;
      uVar3 = uVar3 + 1;
    } while (bVar5);
  }
  return bVar4;
}



// FUNCTION 147d1df08 FUN_147d1df08 body=48 status=ok
// SIG undefined FUN_147d1df08(void)

longlong FUN_147d1df08(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d1df38 FUN_147d1df38 body=48 status=ok
// SIG undefined FUN_147d1df38(void)

longlong FUN_147d1df38(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d1df68 FUN_147d1df68 body=48 status=ok
// SIG undefined FUN_147d1df68(void)

longlong FUN_147d1df68(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d1df98 FUN_147d1df98 body=48 status=ok
// SIG undefined FUN_147d1df98(void)

longlong FUN_147d1df98(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xe0;
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d1e020 FUN_147d1e020 body=110 status=ok
// SIG undefined FUN_147d1e020(void)

undefined1 FUN_147d1e020(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar4);
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_3 + 0x10 + lVar4);
      lVar4 = lVar4 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d1e0b6 FUN_147d1e0b6 body=59 status=ok
// SIG undefined FUN_147d1e0b6(void)

undefined8 FUN_147d1e0b6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e1cc FUN_147d1e1cc body=59 status=ok
// SIG undefined FUN_147d1e1cc(void)

undefined8 FUN_147d1e1cc(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e2ec FUN_147d1e2ec body=59 status=ok
// SIG undefined FUN_147d1e2ec(void)

undefined8 FUN_147d1e2ec(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e38e FUN_147d1e38e body=71 status=ok
// SIG undefined FUN_147d1e38e(void)

void FUN_147d1e38e(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  FUN_1400b22c2(param_2 + 2,"Clothing");
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 147d1e3d6 FUN_147d1e3d6 body=71 status=ok
// SIG undefined FUN_147d1e3d6(void)

void FUN_147d1e3d6(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  FUN_1400b22c2(param_2 + 2,"Clothing");
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  return;
}



// FUNCTION 147d1e41e FUN_147d1e41e body=48 status=ok
// SIG undefined FUN_147d1e41e(void)

void FUN_147d1e41e(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d1e464 FUN_147d1e464 body=149 status=ok
// SIG undefined FUN_147d1e464(void)

undefined8 FUN_147d1e464(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_3 + lVar7);
      uVar3 = *puVar1;
      lVar2 = param_2 + 0x10 + lVar7;
      *(undefined8 *)(lVar2 + -0xb) = *(undefined8 *)((longlong)puVar1 + 5);
      *(undefined8 *)(lVar2 + -0x10) = uVar3;
      FUN_144a787a6(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x10) = puVar1[4];
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 5);
      *(undefined8 *)(lVar2 + 0x20) = puVar1[6];
      uVar4 = *(undefined4 *)((longlong)puVar1 + 0x3c);
      uVar5 = *(undefined4 *)(puVar1 + 8);
      uVar6 = *(undefined4 *)((longlong)puVar1 + 0x44);
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(puVar1 + 7);
      *(undefined4 *)(lVar2 + 0x2c) = uVar4;
      *(undefined4 *)(lVar2 + 0x30) = uVar5;
      *(undefined4 *)(lVar2 + 0x34) = uVar6;
      FUN_144a787a6(param_2 + lVar7 + 0x48,param_3 + lVar7 + 0x48);
      lVar7 = lVar7 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d1e522 FUN_147d1e522 body=59 status=ok
// SIG undefined FUN_147d1e522(void)

undefined8 FUN_147d1e522(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e5c0 FUN_147d1e5c0 body=52 status=ok
// SIG undefined FUN_147d1e5c0(void)

void FUN_147d1e5c0(longlong param_1)

{
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 147d1e63c FUN_147d1e63c body=38 status=ok
// SIG undefined FUN_147d1e63c(void)

undefined8 FUN_147d1e63c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined4 *)(param_3 + lVar1);
      puVar4 = (undefined4 *)(param_2 + lVar1);
      for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d1e68a FUN_147d1e68a body=59 status=ok
// SIG undefined FUN_147d1e68a(void)

undefined8 FUN_147d1e68a(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e790 FUN_147d1e790 body=116 status=ok
// SIG undefined FUN_147d1e790(void)

undefined8 FUN_147d1e790(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_4 != 0) {
    lVar5 = 0;
    do {
      *(undefined8 *)(param_2 + lVar5) = *(undefined8 *)(param_3 + lVar5);
      FUN_144a787a6();
      puVar1 = (undefined8 *)(param_2 + 0x18 + lVar5);
      puVar3 = (undefined8 *)(param_3 + lVar5 + 0x18);
      puVar4 = puVar1;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(param_3 + lVar5 + 0x68);
      lVar5 = lVar5 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d1e82c FUN_147d1e82c body=59 status=ok
// SIG undefined FUN_147d1e82c(void)

undefined8 FUN_147d1e82c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d1e872 FUN_147d1e872 body=38 status=ok
// SIG undefined FUN_147d1e872(void)

void FUN_147d1e872(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 147d1e8e8 FUN_147d1e8e8 body=54 status=ok
// SIG undefined FUN_147d1e8e8(void)

void FUN_147d1e8e8(longlong *param_1)

{
  FUN_147d1e91e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d1e91e FUN_147d1e91e body=128 status=ok
// SIG undefined FUN_147d1e91e(void)

void FUN_147d1e91e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147d1e9a0 FUN_147d1e9a0 body=98 status=ok
// SIG undefined FUN_147d1e9a0(void)

void FUN_147d1e9a0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d1ea02 FUN_147d1ea02 body=74 status=ok
// SIG undefined FUN_147d1ea02(void)

undefined8 * FUN_147d1ea02(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147d1ea4c(param_1,iVar1);
    FUN_147d1eaae(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 147d1ea4c FUN_147d1ea4c body=98 status=ok
// SIG undefined FUN_147d1ea4c(void)

void FUN_147d1ea4c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 147d1eaae FUN_147d1eaae body=82 status=ok
// SIG undefined FUN_147d1eaae(void)

void FUN_147d1eaae(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if ((lVar1 != 0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 147d1eb00 FUN_147d1eb00 body=74 status=ok
// SIG undefined FUN_147d1eb00(void)

undefined8 * FUN_147d1eb00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147d1eb4a(param_1,iVar1);
    FUN_147d1ebac(*param_1,uVar2,iVar1);
  }
  return param_1;
}


