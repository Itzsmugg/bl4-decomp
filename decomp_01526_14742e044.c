// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14742e044 FUN_14742e044 body=98 status=ok
// SIG undefined FUN_14742e044(void)

void FUN_14742e044(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_14742dfc6();
  return;
}



// FUNCTION 14742e0a8 FUN_14742e0a8 body=72 status=ok
// SIG undefined FUN_14742e0a8(void)

void FUN_14742e0a8(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < param_2) {
    FUN_14742de7a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  FUN_14471858a(lVar2 + (longlong)iVar1 * 4,param_2);
  return;
}



// FUNCTION 14742e0f0 FUN_14742e0f0 body=63 status=ok
// SIG undefined FUN_14742e0f0(void)

int FUN_14742e0f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar3;
  iVar1 = *(int *)(lVar2 + lVar4 * 8);
  if (iVar1 == *(int *)(lVar2 + 4 + lVar4 * 8)) {
    *(int *)(param_1 + 0x10) = iVar3;
    FUN_14742e130();
  }
  else {
    *(int *)(lVar2 + lVar4 * 8) = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 14742e130 FUN_14742e130 body=84 status=ok
// SIG undefined FUN_14742e130(void)

void FUN_14742e130(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = 1;
  if (1 < uVar1) {
    if ((((longlong)(int)(uVar2 - uVar1) & 0x1ffffffffffff800U) == 0) &&
       ((int)(uVar2 * 2) <= (int)(uVar1 * 3))) {
      return;
    }
    uVar3 = uVar1;
    if ((int)(uVar2 - uVar1) < 0x41) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_14742c210();
  return;
}



// FUNCTION 14742e184 FUN_14742e184 body=87 status=ok
// SIG undefined FUN_14742e184(void)

void FUN_14742e184(longlong param_1,int param_2)

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
  FUN_14008dcb8();
  return;
}



// FUNCTION 14742e1dc FUN_14742e1dc body=20 status=ok
// SIG undefined FUN_14742e1dc(void)

void FUN_14742e1dc(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1400f15b2(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14742e1f0 FUN_14742e1f0 body=98 status=ok
// SIG undefined FUN_14742e1f0(void)

void FUN_14742e1f0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  uVar2 = 1;
  if (1 < uVar1) {
    if (*(uint *)(param_1 + 0x14) < 2) {
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
  }
  *(uint *)(param_1 + 0x14) = uVar2;
  FUN_14742c598();
  return;
}



// FUNCTION 14742e254 FUN_14742e254 body=93 status=ok
// SIG undefined FUN_14742e254(void)

void FUN_14742e254(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar2 = 0x20;
    if (0x20 < uVar1) {
      uVar3 = uVar1;
      if (0x20 < *(uint *)(param_1 + 0x8c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0x8c) = uVar2;
    FUN_14742c710();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14742e2b2 FUN_14742e2b2 body=229 status=ok
// SIG undefined FUN_14742e2b2(void)

void FUN_14742e2b2(undefined8 *param_1,int param_2,int param_3)

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
      FUN_1456bd9fc(param_3,4);
    }
    _Src = (void *)*param_1;
    iVar4 = param_3 * 4;
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
      memcpy(_Dst,_Src,(longlong)param_2 << 2);
      return;
    }
  }
  return;
}



// FUNCTION 14742e398 FUN_14742e398 body=72 status=ok
// SIG undefined FUN_14742e398(void)

void FUN_14742e398(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + param_2;
  if ((uint)(*(int *)(param_1 + 0x14) - iVar1) < param_2) {
    FUN_14742e044(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  FUN_14471858a(lVar2 + (longlong)iVar1 * 4,param_2);
  return;
}



// FUNCTION 14742e3e0 FUN_14742e3e0 body=244 status=ok
// SIG undefined FUN_14742e3e0(void)

void FUN_14742e3e0(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 14742e4d4 FUN_14742e4d4 body=244 status=ok
// SIG undefined FUN_14742e4d4(void)

void FUN_14742e4d4(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 14742e5c8 FUN_14742e5c8 body=87 status=ok
// SIG undefined FUN_14742e5c8(void)

void FUN_14742e5c8(longlong param_1,int param_2)

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
  FUN_14742e2b2();
  return;
}



// FUNCTION 14742e620 FUN_14742e620 body=14 status=ok
// SIG undefined FUN_14742e620(void)

void FUN_14742e620(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14742e62e FUN_14742e62e body=93 status=ok
// SIG undefined FUN_14742e62e(void)

void FUN_14742e62e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x208);
  if (param_2 <= (int)uVar1) {
    uVar2 = 0x40;
    if (0x40 < uVar1) {
      uVar3 = uVar1;
      if (0x40 < *(uint *)(param_1 + 0x20c)) {
        uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar2 = 0x7fffffff;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar3;
      }
    }
    *(uint *)(param_1 + 0x20c) = uVar2;
    FUN_14742c7f0();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14742e68c FUN_14742e68c body=93 status=ok
// SIG undefined FUN_14742e68c(void)

void FUN_14742e68c(longlong param_1,int param_2)

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
  FUN_1400335d4();
  return;
}



// FUNCTION 14742e6ea FUN_14742e6ea body=87 status=ok
// SIG undefined FUN_14742e6ea(void)

void FUN_14742e6ea(longlong param_1,int param_2)

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
  FUN_1400b4552();
  return;
}



// FUNCTION 14742e742 FUN_14742e742 body=114 status=ok
// SIG undefined FUN_14742e742(void)

void FUN_14742e742(longlong *param_1,int param_2)

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



// FUNCTION 14742e7b4 FUN_14742e7b4 body=63 status=ok
// SIG undefined FUN_14742e7b4(void)

int FUN_14742e7b4(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  lVar4 = (longlong)iVar3;
  iVar1 = *(int *)(lVar2 + lVar4 * 8);
  if (iVar1 == *(int *)(lVar2 + 4 + lVar4 * 8)) {
    *(int *)(param_1 + 0x10) = iVar3;
    FUN_14742e7f4();
  }
  else {
    *(int *)(lVar2 + lVar4 * 8) = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 14742e7f4 FUN_14742e7f4 body=84 status=ok
// SIG undefined FUN_14742e7f4(void)

void FUN_14742e7f4(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = 1;
  if (1 < uVar1) {
    if ((((longlong)(int)(uVar2 - uVar1) & 0x1ffffffffffff800U) == 0) &&
       ((int)(uVar2 * 2) <= (int)(uVar1 * 3))) {
      return;
    }
    uVar3 = uVar1;
    if ((int)(uVar2 - uVar1) < 0x41) {
      uVar3 = uVar2;
    }
  }
  if (uVar3 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_14742c0a8();
  return;
}



// FUNCTION 14742e848 FUN_14742e848 body=102 status=ok
// SIG undefined FUN_14742e848(void)

undefined8 * FUN_14742e848(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14742c188(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_14742dbbe(param_1 + 0xb);
  return param_1;
}



// FUNCTION 14742e8ae FUN_14742e8ae body=241 status=ok
// SIG undefined FUN_14742e8ae(void)

void FUN_14742e8ae(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 14742e9a0 FUN_14742e9a0 body=598 status=ok
// SIG undefined FUN_14742e9a0(void)

undefined4 *
FUN_14742e9a0(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined8 param_5,undefined1 *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
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
  plVar9 = param_1 + 0xb;
  plVar3 = (longlong *)param_1[0xc];
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = plVar9;
  }
  plVar10 = param_1 + 8;
  do {
    lVar7 = (longlong)(int)uVar4;
    if (*(uint *)((longlong)plVar6 + lVar7 * 4) == param_3) {
      plVar8 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar8 = plVar10;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar8 + lVar7 * 4) * 0x10)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar10 + lVar7 * 4);
        goto LAB_14742ea87;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(uVar1 * 3) <=
      (ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5)) {
    local_58 = (undefined4 *)param_1[9];
    if (local_58 == (undefined4 *)0x0) {
      local_60[0] = (undefined4)*plVar10;
    }
    param_1[9] = 0;
    local_50 = (undefined4)param_1[10];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
    param_1[10] = 0x100000000;
    if (plVar3 == (longlong *)0x0) {
      local_78[0] = (undefined4)*plVar9;
    }
    param_1[0xc] = 0;
    local_68 = (undefined4)param_1[0xd];
    local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
    param_1[0xd] = 0x100000000;
    *(uint *)(param_1 + 0xe) = uVar1 * 2 + 1;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    uVar4 = uVar1 * 2 + 2;
    local_70 = plVar3;
    if ((int)uVar4 < 0) {
LAB_14742ebf0:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    local_80 = local_58;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 10) = 0;
      uVar4 = 0;
    }
    else {
      FUN_144736f2a(plVar10);
      iVar2 = (int)param_1[10];
      uVar4 = (int)param_1[0xe] + 1;
      *(int *)(param_1 + 10) = iVar2 + (int)param_1[0xe] + 1;
      if ((uint)(*(int *)((longlong)param_1 + 0x54) - iVar2) < uVar4) {
        FUN_14742dd0c(plVar10,iVar2);
        uVar4 = (int)param_1[0xe] + 1;
      }
      if ((int)uVar4 < 0) goto LAB_14742ebf0;
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_144737024(plVar9);
        uVar4 = (int)param_1[0xe] + 1;
      }
    }
    FUN_14742e0a8(plVar9,uVar4);
    plVar9 = (longlong *)local_78;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    puVar11 = local_60;
    if (local_80 != (undefined4 *)0x0) {
      puVar11 = local_80;
    }
    uVar4 = 0;
    do {
      if (!SBORROW4(0,*(int *)((longlong)plVar9 + (longlong)(int)uVar4 * 4))) {
        FUN_14742e8ae(param_1,puVar11[(int)uVar4]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar1);
  }
  uVar5 = FUN_14742ebf8(param_1,param_4,param_5,param_3);
  FUN_14742e8ae(param_1,uVar5,param_3);
  *param_6 = 0;
LAB_14742ea87:
  *param_2 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14742ebf8 FUN_14742ebf8 body=195 status=ok
// SIG undefined FUN_14742ebf8(void)

int FUN_14742ebf8(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if ((int)param_1[7] < 1) {
    iVar5 = (int)param_1[1];
    uVar3 = *param_2;
    uVar1 = *param_3;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_14742ecbc(param_1,iVar5);
    }
    lVar4 = *param_1;
    *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10) = uVar3;
    *(undefined4 *)(lVar4 + 8 + (longlong)iVar5 * 0x10) = uVar1;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_1447372a8(param_1 + 2,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 4 + param_1[2]);
  }
  else {
    iVar5 = FUN_14742e0f0(param_1 + 4);
    lVar4 = *param_1;
    lVar6 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar4 + lVar6) = *param_2;
    *(undefined4 *)(lVar4 + 8 + lVar6) = *param_3;
    puVar7 = (undefined4 *)((longlong)iVar5 * 4 + param_1[2]);
  }
  *puVar7 = param_4;
  return iVar5;
}



// FUNCTION 14742ecbc FUN_14742ecbc body=87 status=ok
// SIG undefined FUN_14742ecbc(void)

void FUN_14742ecbc(longlong param_1,int param_2)

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
  FUN_14742ca0e();
  return;
}



// FUNCTION 14742ed14 FUN_14742ed14 body=102 status=ok
// SIG undefined FUN_14742ed14(void)

undefined8 * FUN_14742ed14(undefined8 *param_1)

{
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 1;
  FUN_14742c188(param_1 + 4);
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x100000000;
  param_1[0xe] = 0;
  param_1[10] = &DAT_100000001;
  FUN_14742dbbe(param_1 + 0xb);
  return param_1;
}



// FUNCTION 14742ed7a FUN_14742ed7a body=241 status=ok
// SIG undefined FUN_14742ed7a(void)

void FUN_14742ed7a(longlong param_1,undefined4 param_2,uint param_3)

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



// FUNCTION 14742ee6c FUN_14742ee6c body=598 status=ok
// SIG undefined FUN_14742ee6c(void)

undefined4 *
FUN_14742ee6c(longlong *param_1,undefined4 *param_2,uint param_3,longlong *param_4,
             undefined8 param_5,undefined1 *param_6)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 auStack_a8 [40];
  undefined4 *local_80;
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
  plVar9 = param_1 + 0xb;
  plVar3 = (longlong *)param_1[0xc];
  plVar6 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = plVar9;
  }
  plVar10 = param_1 + 8;
  do {
    lVar7 = (longlong)(int)uVar4;
    if (*(uint *)((longlong)plVar6 + lVar7 * 4) == param_3) {
      plVar8 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar8 = plVar10;
      }
      if (*param_4 ==
          *(longlong *)(*param_1 + (longlong)*(int *)((longlong)plVar8 + lVar7 * 4) * 0x10)) {
        *param_6 = 1;
        if ((longlong *)param_1[9] != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[9];
        }
        uVar5 = *(undefined4 *)((longlong)plVar10 + lVar7 * 4);
        goto LAB_14742ef53;
      }
    }
    uVar4 = uVar4 + 1 & uVar1;
  } while (uVar4 != (*(int *)((longlong)param_1 + 0x74) + param_3 + 1 & uVar1));
  if ((ulonglong)(uVar1 * 3) <=
      (ulonglong)(((longlong)(int)param_1[1] - (longlong)(int)param_1[7]) * 5)) {
    local_58 = (undefined4 *)param_1[9];
    if (local_58 == (undefined4 *)0x0) {
      local_60[0] = (undefined4)*plVar10;
    }
    param_1[9] = 0;
    local_50 = (undefined4)param_1[10];
    local_4c = *(undefined4 *)((longlong)param_1 + 0x54);
    param_1[10] = 0x100000000;
    if (plVar3 == (longlong *)0x0) {
      local_78[0] = (undefined4)*plVar9;
    }
    param_1[0xc] = 0;
    local_68 = (undefined4)param_1[0xd];
    local_64 = *(undefined4 *)((longlong)param_1 + 0x6c);
    param_1[0xd] = 0x100000000;
    *(uint *)(param_1 + 0xe) = uVar1 * 2 + 1;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    uVar4 = uVar1 * 2 + 2;
    local_70 = plVar3;
    if ((int)uVar4 < 0) {
LAB_14742f0bc:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar4);
    }
    local_80 = local_58;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 10) = 0;
      uVar4 = 0;
    }
    else {
      FUN_144736f2a(plVar10);
      iVar2 = (int)param_1[10];
      uVar4 = (int)param_1[0xe] + 1;
      *(int *)(param_1 + 10) = iVar2 + (int)param_1[0xe] + 1;
      if ((uint)(*(int *)((longlong)param_1 + 0x54) - iVar2) < uVar4) {
        FUN_14742dd0c(plVar10,iVar2);
        uVar4 = (int)param_1[0xe] + 1;
      }
      if ((int)uVar4 < 0) goto LAB_14742f0bc;
      if (*(int *)((longlong)param_1 + 0x6c) < (int)uVar4) {
        FUN_144737024(plVar9);
        uVar4 = (int)param_1[0xe] + 1;
      }
    }
    FUN_14742e0a8(plVar9,uVar4);
    plVar9 = (longlong *)local_78;
    if (plVar3 != (longlong *)0x0) {
      plVar9 = plVar3;
    }
    puVar11 = local_60;
    if (local_80 != (undefined4 *)0x0) {
      puVar11 = local_80;
    }
    uVar4 = 0;
    do {
      if (!SBORROW4(0,*(int *)((longlong)plVar9 + (longlong)(int)uVar4 * 4))) {
        FUN_14742ed7a(param_1,puVar11[(int)uVar4]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 <= uVar1);
  }
  uVar5 = FUN_14742f0c4(param_1,param_4,param_5,param_3);
  FUN_14742ed7a(param_1,uVar5,param_3);
  *param_6 = 0;
LAB_14742ef53:
  *param_2 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14742f0c4 FUN_14742f0c4 body=195 status=ok
// SIG undefined FUN_14742f0c4(void)

int FUN_14742f0c4(longlong *param_1,undefined8 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  if ((int)param_1[7] < 1) {
    iVar5 = (int)param_1[1];
    uVar3 = *param_2;
    uVar1 = *param_3;
    *(uint *)(param_1 + 1) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
      FUN_14742f188(param_1,iVar5);
    }
    lVar4 = *param_1;
    *(undefined8 *)(lVar4 + (longlong)iVar5 * 0x10) = uVar3;
    *(undefined4 *)(lVar4 + 8 + (longlong)iVar5 * 0x10) = uVar1;
    iVar2 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
      FUN_1447372a8(param_1 + 2,iVar2);
    }
    puVar7 = (undefined4 *)((longlong)iVar2 * 4 + param_1[2]);
  }
  else {
    iVar5 = FUN_14742e0f0(param_1 + 4);
    lVar4 = *param_1;
    lVar6 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar4 + lVar6) = *param_2;
    *(undefined4 *)(lVar4 + 8 + lVar6) = *param_3;
    puVar7 = (undefined4 *)((longlong)iVar5 * 4 + param_1[2]);
  }
  *puVar7 = param_4;
  return iVar5;
}



// FUNCTION 14742f188 FUN_14742f188 body=87 status=ok
// SIG undefined FUN_14742f188(void)

void FUN_14742f188(longlong param_1,int param_2)

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
  FUN_14742c8c2();
  return;
}



// FUNCTION 14742f1e0 FUN_14742f1e0 body=20 status=ok
// SIG undefined FUN_14742f1e0(void)

void FUN_14742f1e0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_14742f1f4(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}



// FUNCTION 14742f1f4 FUN_14742f1f4 body=239 status=ok
// SIG undefined FUN_14742f1f4(void)

void FUN_14742f1f4(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  int iVar2;
  ulonglong *puVar3;
  void *_Dst;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x48);
    }
    _Src = (void *)*param_1;
    iVar2 = param_3 * 0x48;
    puVar3 = TlsGetValue(DAT_14ca954e4);
    uVar4 = (ulonglong)((uint)(0xf < iVar2) * 8);
    lVar1 = uVar4 + 7;
    uVar4 = uVar4 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar3 + lVar1 & uVar4);
    uVar5 = (longlong)_Dst + (longlong)iVar2;
    if (puVar3[1] < uVar5) {
      FUN_140023dd8(puVar3,iVar2 + (uint)(0xf < iVar2) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar3 & uVar4);
      uVar5 = (longlong)iVar2 + (longlong)_Dst;
    }
    *puVar3 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 * 0x48);
      return;
    }
  }
  return;
}



// FUNCTION 14742f2e4 FUN_14742f2e4 body=87 status=ok
// SIG undefined FUN_14742f2e4(void)

void FUN_14742f2e4(longlong param_1,int param_2)

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
  FUN_14742f1f4();
  return;
}



// FUNCTION 14742f33c FUN_14742f33c body=56 status=ok
// SIG undefined FUN_14742f33c(void)

undefined8 * FUN_14742f33c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38baa0;
  FUN_144725486();
  FUN_14631f37e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f374 FUN_14742f374 body=75 status=ok
// SIG undefined FUN_14742f374(void)

void FUN_14742f374(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14742caf6(param_1,1);
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14742f3c0 FUN_14742f3c0 body=38 status=ok
// SIG undefined FUN_14742f3c0(void)

undefined8 FUN_14742f3c0(undefined8 param_1,int param_2)

{
  FUN_14631f37e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f3e6 FUN_14742f3e6 body=108 status=ok
// SIG undefined FUN_14742f3e6(void)

void FUN_14742f3e6(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x1c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      iVar2 = FUN_144a3809e(lVar3,0);
      iVar4 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar4 = iVar2;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar4;
    FUN_14742d0b0(param_1,param_2,iVar4,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14742f454 FUN_14742f454 body=89 status=ok
// SIG undefined FUN_14742f454(void)

void FUN_14742f454(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14742f4ad FUN_14742f4ad body=33 status=ok
// SIG undefined FUN_14742f4ad(void)

void FUN_14742f4ad(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
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
  return;
}



// FUNCTION 14742f4ce FUN_14742f4ce body=56 status=ok
// SIG undefined FUN_14742f4ce(void)

undefined8 * FUN_14742f4ce(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38bc50;
  FUN_144725486();
  FUN_14631f430(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f506 FUN_14742f506 body=38 status=ok
// SIG undefined FUN_14742f506(void)

undefined8 FUN_14742f506(undefined8 param_1,int param_2)

{
  FUN_14631f430();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f52c FUN_14742f52c body=93 status=ok
// SIG undefined FUN_14742f52c(void)

void FUN_14742f52c(longlong param_1,int param_2)

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
  FUN_1402a9a3c();
  return;
}



// FUNCTION 14742f58a FUN_14742f58a body=116 status=ok
// SIG undefined FUN_14742f58a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14742f58a(void)

{
  _DAT_14ca955b0 = 0xffffffff;
  _DAT_14ca955b4 = 0x105;
  DAT_14ca955b6 = 0;
  DAT_14ca955a8 = &PTR_FUN_14a38bce0;
  DAT_14ca955b8 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca955c0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca955c0,4000);
  DAT_14ca955e8 = 0;
  _DAT_14ca955f0 = 0;
  _DAT_14ca955f8 = 0;
  uRam000000014ca95600 = 0;
  _DAT_14ca95608 = 0;
  uRam000000014ca95610 = 0;
  return;
}



// FUNCTION 14742f5fe FUN_14742f5fe body=56 status=ok
// SIG undefined FUN_14742f5fe(void)

undefined8 * FUN_14742f5fe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38bcb0;
  FUN_144725486();
  FUN_14631f4c4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f636 FUN_14742f636 body=38 status=ok
// SIG undefined FUN_14742f636(void)

undefined8 FUN_14742f636(undefined8 param_1,int param_2)

{
  FUN_14631f4c4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f65c FUN_14742f65c body=229 status=ok
// SIG undefined FUN_14742f65c(void)

void FUN_14742f65c(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong *puVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456bd9fc(param_3,0x40);
    }
    _Src = (void *)*param_1;
    uVar4 = param_3 * 0x40;
    puVar2 = TlsGetValue(DAT_14ca954e4);
    uVar3 = (ulonglong)((uint)(0xf < (int)uVar4) * 8);
    lVar1 = uVar3 + 7;
    uVar3 = uVar3 ^ 0xfffffffffffffff8;
    _Dst = (void *)(*puVar2 + lVar1 & uVar3);
    uVar5 = (longlong)_Dst + (longlong)(int)uVar4;
    if (puVar2[1] < uVar5) {
      FUN_140023dd8(puVar2,uVar4 | (uint)(0xf < (int)uVar4) * 8 + 8);
      _Dst = (void *)(lVar1 + *puVar2 & uVar3);
      uVar5 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar5;
    *param_1 = _Dst;
    if (param_2 != 0 && _Src != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,_Src,(longlong)param_2 << 6);
      return;
    }
  }
  return;
}



// FUNCTION 14742f742 FUN_14742f742 body=78 status=ok
// SIG undefined FUN_14742f742(void)

void FUN_14742f742(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if ((((longlong)(iVar2 - iVar1) & 0x3ffffffffffff00U) != 0) || (iVar1 * 3 < iVar2 * 2)) {
    if ((iVar2 != iVar1) && (iVar1 == 0 || 0x40 < iVar2 - iVar1)) {
      *(int *)(param_1 + 0xc) = iVar1;
      FUN_14742f65c(param_1,iVar1,iVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14742f790 FUN_14742f790 body=29 status=ok
// SIG undefined FUN_14742f790(void)

undefined8 FUN_14742f790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14742f7ae FUN_14742f7ae body=258 status=ok
// SIG undefined FUN_14742f7ae(void)

void FUN_14742f7ae(void)

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
              0x110) < DAT_14ca963f0) {
    FUN_144b3d300(&DAT_14ca963f0);
    if (DAT_14ca963f0 == -1) {
      FUN_14742f964(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FEnqueueCopyTexturePass";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x329;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca96370,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14321f0f0);
      _Init_thread_footer(&DAT_14ca963f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742f8b2 FUN_14742f8b2 body=177 status=ok
// SIG undefined FUN_14742f8b2(void)

void FUN_14742f8b2(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_4;
  if ((((iVar1 < 0) || (iVar2 = param_4[1], iVar2 < 0)) ||
      (iVar4 = param_4[2] - iVar1, iVar4 == 0 || param_4[2] < iVar1)) ||
     (iVar3 = param_4[3] - iVar2, iVar3 == 0 || param_4[3] < iVar2)) {
    local_10 = DAT_14c9a52a0;
    local_18 = DAT_14c9a5298;
    local_28 = DAT_14c9a5298;
    local_20 = DAT_14c9a52a0;
  }
  else {
    local_18 = CONCAT44(iVar2,iVar1);
    local_10 = 0;
    local_28 = CONCAT44(iVar3,iVar4);
    local_20 = 1;
  }
  local_30 = &local_28;
  local_38 = 0;
  (**(code **)(*param_1 + 8))();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14742f964 FUN_14742f964 body=226 status=ok
// SIG undefined FUN_14742f964(void)

longlong * FUN_14742f964(longlong *param_1)

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
  pcVar13 = FUN_14742fa48;
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



// FUNCTION 14742fa48 FUN_14742fa48 body=130 status=ok
// SIG undefined FUN_14742fa48(void)

undefined1 * FUN_14742fa48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x32a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14742faca;
}



// FUNCTION 14742face FUN_14742face body=87 status=ok
// SIG undefined FUN_14742face(void)

void FUN_14742face(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar2 = uVar1;
  if (0 < (int)uVar1) {
    do {
      FUN_141220b8a(*(undefined8 *)(*param_1 + -8 + (ulonglong)uVar1 * 8));
      uVar1 = *(uint *)(param_1 + 1);
      bVar3 = 1 < uVar2;
      uVar2 = uVar2 - 1;
    } while (0 < (int)uVar1 && bVar3);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14742fb2e FUN_14742fb2e body=32 status=ok
// SIG undefined FUN_14742fb2e(void)

undefined8 FUN_14742fb2e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FTexture");
  return param_2;
}



// FUNCTION 14742fb4e FUN_14742fb4e body=65 status=ok
// SIG undefined FUN_14742fb4e(void)

void FUN_14742fb4e(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a38cef0;
  if (param_1[9] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[9] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1401c051c(param_1);
  return;
}



// FUNCTION 14742fb90 FUN_14742fb90 body=47 status=ok
// SIG undefined FUN_14742fb90(void)

void FUN_14742fb90(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x18) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x10), lVar1 != 0))
     && ((*(double *)(lVar1 + 0x58) != -3.4028234663852886e+38 || (NAN(*(double *)(lVar1 + 0x58)))))
     ) {
    *(undefined8 *)(lVar1 + 0x58) = 0xc7efffffe0000000;
  }
  return;
}



// FUNCTION 14742fbc0 FUN_14742fbc0 body=32 status=ok
// SIG undefined FUN_14742fbc0(void)

undefined8 FUN_14742fbc0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FTextureReference");
  return param_2;
}



// FUNCTION 14742fbe0 FUN_14742fbe0 body=55 status=ok
// SIG undefined FUN_14742fbe0(void)

void FUN_14742fbe0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a38cd70;
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xb) = uVar1;
  *param_1 = &PTR_FUN_14a38cff0;
  lVar2 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14742fc18 FUN_14742fc18 body=32 status=ok
// SIG undefined FUN_14742fc18(void)

undefined8 FUN_14742fc18(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FVertexBuffer");
  return param_2;
}



// FUNCTION 14742fc38 FUN_14742fc38 body=46 status=ok
// SIG undefined FUN_14742fc38(void)

void FUN_14742fc38(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a38d040;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}



// FUNCTION 14742fc66 FUN_14742fc66 body=55 status=ok
// SIG undefined FUN_14742fc66(void)

void FUN_14742fc66(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a38cd70;
  uVar1 = *(undefined4 *)(param_2 + 0xb);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xb) = uVar1;
  *param_1 = &PTR_FUN_14a38d070;
  lVar2 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14742fc9e FUN_14742fc9e body=32 status=ok
// SIG undefined FUN_14742fc9e(void)

undefined8 FUN_14742fc9e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FIndexBuffer");
  return param_2;
}



// FUNCTION 14742fcbe FUN_14742fcbe body=103 status=ok
// SIG undefined FUN_14742fcbe(void)

void FUN_14742fcbe(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a38d0c0;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14742fd5e FUN_14742fd5e body=1342 status=ok
// SIG undefined FUN_14742fd5e(void)

void FUN_14742fd5e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_168 [32];
  double local_148;
  wchar_t *local_140;
  wchar_t *local_138;
  uint local_130;
  undefined8 local_128;
  undefined8 local_120;
  uint local_118;
  uint local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  wchar_t *local_d0;
  int local_c8;
  wchar_t *local_c0;
  int local_b8;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  wchar_t *local_a0;
  int local_98;
  wchar_t *local_90;
  int local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_d8 = param_1 + 0x10;
  FUN_14490b2fc();
  local_100 = param_2;
  FUN_1468161aa(param_2,L"Pooled Render Targets:");
  dVar7 = 0.0;
  dVar8 = 0.0;
  local_e0 = param_1;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar15 = 0;
    uVar11 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar15 * 8);
      if (lVar6 != 0) {
        local_e8 = CONCAT44(local_e8._4_4_,uVar11);
        iVar10 = FUN_14490b346(lVar6);
        uVar16 = iVar10 + 0x3ffU >> 10;
        uVar3 = *(uint *)(lVar6 + 0x6c);
        uVar11 = 0;
        if (2 < uVar3) {
          uVar11 = uVar16;
        }
        local_f0 = *(undefined8 *)
                    ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(lVar6 + 0x50) * 0x30));
        local_f8 = *(undefined8 *)(lVar6 + 0x28);
        local_104 = (uint)*(byte *)(lVar6 + 0x60);
        bVar1 = *(byte *)(lVar6 + 99);
        pwVar12 = L"     ";
        if ((bVar1 & 1) != 0) {
          FUN_140002266(&local_90,L"[%3d]",*(undefined2 *)(lVar6 + 0x5e));
          pwVar12 = L"";
          if (local_88 != 0) {
            pwVar12 = local_90;
          }
        }
        uVar2 = *(ushort *)(lVar6 + 0x5c);
        if (uVar2 < 2) {
          local_140 = L"cube";
          if ((*(byte *)(lVar6 + 99) & 2) == 0) {
            local_140 = L"    ";
          }
        }
        else {
          FUN_140002266(&local_a0,L"x%3d",uVar2);
          local_140 = L"";
          if (local_98 != 0) {
            local_140 = local_a0;
          }
        }
        local_120 = local_f0;
        local_128 = local_f8;
        local_130 = local_104;
        local_148 = (double)CONCAT44(local_148._4_4_,*(undefined4 *)(lVar6 + 0x58));
        local_138 = pwVar12;
        local_118 = uVar3;
        FUN_140047918(local_100,L"  %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s) Unused frames: %d",
                      (double)((float)uVar16 * 0.0009765625),*(undefined4 *)(lVar6 + 0x54));
        iVar10 = (int)local_e8;
        if ((1 < uVar2) && (local_a0 != (wchar_t *)0x0)) {
          FUN_1400020a8();
        }
        param_1 = local_e0;
        uVar11 = iVar10 + uVar11;
        if (((bVar1 & 1) != 0) && (local_90 != (wchar_t *)0x0)) {
          FUN_1400020a8();
        }
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x30));
    dVar8 = (double)((float)uVar11 * 0.0009765625);
  }
  uVar13 = 0;
  local_a4 = 0;
  local_a8 = 0;
  local_ac = 0;
  FUN_14489abb8(param_1,&local_a4,&local_ac,&local_a8);
  uVar9 = local_100;
  local_140 = (wchar_t *)CONCAT44(local_140._4_4_,local_a4);
  local_148 = dVar8;
  FUN_140047918(local_100,L"%.3fMB total, %.3fMB used, %.3fMB unused, %d render targets",
                (double)((float)local_ac * 0.0009765625),(double)((float)local_a8 * 0.0009765625));
  FUN_1468161aa(uVar9,L"Deferred Render Targets:");
  iVar10 = *(int *)(param_1 + 0x40);
  if (0 < iVar10) {
    lVar15 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar15 * 8);
      if (lVar6 != 0) {
        local_f0 = *(undefined8 *)
                    ((longlong)&DAT_14c873410 + (ulonglong)((uint)*(byte *)(lVar6 + 0x50) * 0x30));
        local_f8 = *(undefined8 *)(lVar6 + 0x28);
        local_104 = (uint)*(byte *)(lVar6 + 0x60);
        bVar1 = *(byte *)(lVar6 + 99);
        pwVar12 = L"     ";
        if ((bVar1 & 1) != 0) {
          FUN_140002266(&local_c0,L"[%3d]",*(undefined2 *)(lVar6 + 0x5e));
          pwVar12 = L"";
          if (local_b8 != 0) {
            pwVar12 = local_c0;
          }
        }
        uVar2 = *(ushort *)(lVar6 + 0x5c);
        local_e8 = uVar13;
        if (uVar2 < 2) {
          pwVar14 = L"cube";
          if ((*(byte *)(lVar6 + 99) & 2) == 0) {
            pwVar14 = L"    ";
          }
        }
        else {
          FUN_140002266(&local_d0,L"x%3d",uVar2);
          pwVar14 = L"";
          if (local_c8 != 0) {
            pwVar14 = local_d0;
          }
        }
        uVar4 = *(undefined4 *)(lVar6 + 0x54);
        uVar5 = *(undefined4 *)(lVar6 + 0x58);
        iVar10 = FUN_14490b346(lVar6);
        local_120 = local_f0;
        local_128 = local_f8;
        local_130 = local_104;
        local_148 = (double)CONCAT44(local_148._4_4_,uVar5);
        local_140 = pwVar14;
        local_138 = pwVar12;
        FUN_140047918(local_100,L"  %6.3fMB %4dx%4d%s%s %2dmip(s) %s (%s)",
                      (double)((float)(iVar10 + 0x3ffU >> 10) * 0.0009765625),uVar4);
        param_1 = local_e0;
        uVar13 = local_e8;
        if ((1 < uVar2) && (local_d0 != (wchar_t *)0x0)) {
          FUN_1400020a8();
        }
        if (((bVar1 & 1) != 0) && (local_c0 != (wchar_t *)0x0)) {
          FUN_1400020a8();
        }
        iVar10 = FUN_14490b346(lVar6);
        uVar13 = (ulonglong)((int)uVar13 + (iVar10 + 0x3ffU >> 10));
        iVar10 = *(int *)(param_1 + 0x40);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar10);
    dVar7 = (double)((float)uVar13 * 0.0009765625);
  }
  FUN_140047918(local_100,L"%.3fMB Deferred total",SUB84(dVar7,0));
  FUN_144a6a7be(local_d8);
  if ((local_80 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1474302aa FUN_1474302aa body=82 status=ok
// SIG undefined FUN_1474302aa(void)

longlong * FUN_1474302aa(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1474302fc FUN_1474302fc body=82 status=ok
// SIG undefined FUN_1474302fc(void)

longlong * FUN_1474302fc(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 14743034e FUN_14743034e body=332 status=ok
// SIG undefined FUN_14743034e(void)

longlong * FUN_14743034e(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  param_2 = param_2 + 3;
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  return param_1;
}



// FUNCTION 14743049a FUN_14743049a body=124 status=ok
// SIG undefined FUN_14743049a(void)

ulonglong FUN_14743049a(ulonglong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  
  bVar1 = DAT_14c760e14;
  cVar2 = FUN_147430516();
  if (cVar2 == '\0') {
    param_1 = param_1 & 0xffff;
    if (*(longlong *)(&DAT_14ca814b0 + param_1 * 0x3c) == DAT_14ca838f8) {
      uVar3 = CONCAT71((int7)(param_1 >> 8),*(undefined1 *)(&DAT_14ca814c8 + param_1 * 0xf)) &
              0xffffffffffffff01;
    }
    else {
      uVar3 = 0;
    }
    if ((char)uVar3 != '\0') {
      return uVar3;
    }
    if (bVar1 == 0) {
      return uVar3;
    }
    if ((DAT_14ca964f0 != '\x01') || ((DAT_14c760e14 & 1) == 0)) {
      uVar4 = (undefined7)(uVar3 >> 8);
      if ((*(byte *)(&DAT_14ca814c8 + param_1 * 0xf) & 0x20) != 0) {
        return CONCAT71(uVar4,1);
      }
      if (*(longlong *)(&DAT_14ca814b0 + param_1 * 0x3c) == DAT_14ca81498) {
        return CONCAT71(uVar4,(&DAT_14ca814b8)[param_1 * 0xf] == 1);
      }
    }
  }
  return 0;
}



// FUNCTION 147430516 FUN_147430516 body=133 status=ok
// SIG undefined FUN_147430516(void)

bool FUN_147430516(ulonglong param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  bool bVar6;
  
  cVar1 = FUN_14743086d();
  bVar6 = true;
  if (cVar1 == '\0') {
    uVar5 = 1 << ((byte)param_1 & 0x1f);
    uVar3 = (uint)(param_1 & 0xffff);
    if ((&DAT_14ca814b8)[(param_1 & 0xffff) * 0xf] == 1) {
      puVar2 = &DAT_14ca96938;
      if (DAT_14ca96988 != (undefined4 *)0x0) {
        puVar2 = DAT_14ca96988;
      }
      uVar4 = (ulonglong)(uVar3 >> 5);
      if ((puVar2[uVar4] & uVar5) != 0) {
        return true;
      }
    }
    else {
      uVar4 = (ulonglong)(uVar3 >> 5);
    }
    puVar2 = &DAT_14ca96b08;
    if (DAT_14ca96b58 != (undefined4 *)0x0) {
      puVar2 = DAT_14ca96b58;
    }
    if ((puVar2[uVar4] & uVar5) == 0) {
      bVar6 = DAT_14ca964d8 == 1;
    }
  }
  return bVar6;
}



// FUNCTION 14743059b FUN_14743059b body=136 status=ok
// SIG undefined FUN_14743059b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14743059b(undefined4 param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca96a10) {
    FUN_144b3d300(&DAT_14ca96a10);
    if (DAT_14ca96a10 == -1) {
      FUN_140056680(&DAT_14ca969f8,L"r.Mobile.Forward.EnableClusteredReflections");
      _DAT_14ca96a08 = 0;
      atexit((_func_5014 *)&LAB_143224a54);
      _Init_thread_footer(&DAT_14ca96a10);
    }
  }
  FUN_144a847a6(&DAT_14ca969f8,param_1);
  return;
}



// FUNCTION 147430623 FUN_147430623 body=165 status=ok
// SIG undefined FUN_147430623(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147430623(uint param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca969b0) {
    FUN_144b3d300(&DAT_14ca969b0);
    if (DAT_14ca969b0 == -1) {
      FUN_140056680(&DAT_14ca96998,L"r.Mobile.ScreenSpaceReflections");
      _DAT_14ca969a8 = 0;
      atexit((_func_5014 *)&LAB_143224a21);
      _Init_thread_footer(&DAT_14ca969b0);
    }
  }
  if ((&DAT_14ca814b8)[((ulonglong)param_1 & 0xffff) * 0xf] == 1) {
    uVar1 = FUN_144a847a6(&DAT_14ca96998,(ulonglong)param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1474306c8 FUN_1474306c8 body=70 status=ok
// SIG undefined FUN_1474306c8(void)

bool FUN_1474306c8(ushort param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  
  if (((&DAT_14ca814b8)[(ulonglong)param_1 * 0xf] == 1) &&
     ((*(byte *)((longlong)&DAT_14ca814c8 + (ulonglong)param_1 * 0x3c + 1) & 2) != 0)) {
    puVar1 = &DAT_14ca96c28;
    if (DAT_14ca96c78 != (undefined4 *)0x0) {
      puVar1 = DAT_14ca96c78;
    }
    bVar2 = ((uint)puVar1[param_1 >> 5] >> (param_1 & 0x1f) & 1) != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 14743070e FUN_14743070e body=7 status=ok
// SIG undefined FUN_14743070e(void)

undefined1 FUN_14743070e(void)

{
  return DAT_14ca964dc;
}



// FUNCTION 147430715 FUN_147430715 body=165 status=ok
// SIG undefined FUN_147430715(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147430715(uint param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca969d0) {
    FUN_144b3d300(&DAT_14ca969d0);
    if (DAT_14ca969d0 == -1) {
      FUN_140056680(&DAT_14ca969b8,L"r.Mobile.EnableCapsuleShadows");
      _DAT_14ca969c8 = 0;
      atexit((_func_5014 *)&LAB_143224a32);
      _Init_thread_footer(&DAT_14ca969d0);
    }
  }
  if ((&DAT_14ca814b8)[((ulonglong)param_1 & 0xffff) * 0xf] == 1) {
    uVar1 = FUN_144a847a6(&DAT_14ca969b8,(ulonglong)param_1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1474307ba FUN_1474307ba body=179 status=ok
// SIG undefined FUN_1474307ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1474307ba(uint param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca969f0) {
    FUN_144b3d300(&DAT_14ca969f0);
    if (DAT_14ca969f0 == -1) {
      FUN_140056680(&DAT_14ca969d8,L"r.Mobile.EnableCapsuleDirectShadows");
      _DAT_14ca969e8 = 0;
      atexit((_func_5014 *)&LAB_143224a43);
      _Init_thread_footer(&DAT_14ca969f0);
    }
  }
  if ((&DAT_14ca814b8)[((ulonglong)param_1 & 0xffff) * 0xf] == 1) {
    cVar1 = FUN_147430715((ulonglong)param_1);
    if (cVar1 != '\0') {
      uVar2 = FUN_144a847a6(&DAT_14ca969d8,param_1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 14743086d FUN_14743086d body=147 status=ok
// SIG undefined FUN_14743086d(void)

ulonglong FUN_14743086d(uint param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  uVar4 = (ulonglong)param_1;
  if ((DAT_14ca964dc == '\0') && (cVar1 = FUN_143065fca(uVar4), cVar1 == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = 0 < DAT_14c760e10;
  }
  bVar2 = FUN_1474307ba(uVar4);
  uVar4 = uVar4 & 0xffff;
  if (((&DAT_14ca814b8)[uVar4 * 0xf] == 1) &&
     ((*(byte *)((longlong)&DAT_14ca814c8 + uVar4 * 0x3c + 1) & 2) != 0)) {
    puVar5 = &DAT_14ca96c28;
    if (DAT_14ca96c78 != (undefined4 *)0x0) {
      puVar5 = DAT_14ca96c78;
    }
    uVar3 = uVar4 >> 5;
    uVar4 = CONCAT71((uint7)(uVar4 >> 0xd),1);
    if (((uint)puVar5[uVar3] >> (param_1 & 0x1f) & 1) != 0) {
      return uVar4;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),(DAT_14c760e14 & DAT_14ca964f0 ^ 1) & (bVar6 | bVar2));
}



// FUNCTION 147430900 FUN_147430900 body=3 status=ok
// SIG undefined FUN_147430900(void)

undefined8 FUN_147430900(void)

{
  return 0;
}



// FUNCTION 147430903 FUN_147430903 body=324 status=ok
// SIG undefined FUN_147430903(void)

bool FUN_147430903(uint param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96a20) && (FUN_144b3d300(&DAT_14ca96a20), DAT_14ca96a20 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Mobile.Shadow.CSMShaderCullingMethod",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca96a18 = 0;
    }
    else {
      DAT_14ca96a18 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca96a20);
  }
  lVar1 = DAT_14ca96a18;
  if ((DAT_14ca964f0 != '\x01') || (bVar2 = true, (DAT_14c760e14 & 1) == 0)) {
    if (DAT_14ca96a18 != 0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) == 0x40000002) {
        uVar4 = 0;
      }
      else {
        bVar3 = FUN_144a61b4f();
        uVar4 = (ulonglong)(bVar3 ^ 1);
      }
      if ((*(uint *)(lVar1 + uVar4 * 4) & 0xf) == 5) {
        uVar4 = (ulonglong)param_1 & 0xffff;
        if (((&DAT_14ca814b8)[uVar4 * 0xf] == 1) &&
           ((*(byte *)((longlong)&DAT_14ca814c8 + uVar4 * 0x3c + 1) & 2) != 0)) {
          puVar6 = &DAT_14ca96c28;
          if (DAT_14ca96c78 != (undefined4 *)0x0) {
            puVar6 = DAT_14ca96c78;
          }
          return ((uint)puVar6[uVar4 >> 5] >> ((uint)uVar4 & 0x1f) & 1) != 0;
        }
      }
    }
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 147430a47 FUN_147430a47 body=202 status=ok
// SIG undefined FUN_147430a47(void)

undefined8 FUN_147430a47(longlong *param_1)

{
  bool bVar1;
  ushort uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    (**(code **)(*param_1 + 0xa8))(0,&local_38);
    if (0 < (int)uStack_30) {
      lVar5 = 0;
      do {
        uVar2 = FUN_14741398a(*(undefined8 *)(local_38 + lVar5 * 8));
        if ((((DAT_14c760e34 != 0) &&
             (lVar3 = (ulonglong)uVar2 * 0x3c,
             (*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) != 0)) &&
            (((&DAT_14ca814c8)[(ulonglong)uVar2 * 0xf] & 0x20000000) != 0)) &&
           ((*(uint *)(&DAT_14ca814cc + lVar3) & 8) != 0)) {
          bVar1 = true;
          goto LAB_147430ad6;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)uStack_30);
    }
    bVar1 = false;
LAB_147430ad6:
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    uVar4 = 1;
    if (bVar1) goto LAB_147430aee;
  }
  uVar4 = 0;
LAB_147430aee:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147430b12 FUN_147430b12 body=335 status=ok
// SIG undefined FUN_147430b12(void)

undefined8 FUN_147430b12(undefined4 param_1)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca96ff0) && (FUN_144b3d300(&DAT_14ca96ff0), DAT_14ca96ff0 == -1)) {
    FUN_140056680(&DAT_14ca96fd8,L"r.SkinCache.CompileShaders");
    DAT_14ca96fe8 = 0;
    atexit((_func_5014 *)&LAB_143226522);
    _Init_thread_footer(&DAT_14ca96ff0);
  }
  FUN_144a82b37(&local_20,param_1);
  if (DAT_14ca96fe8 == 0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar2 = DAT_14ca96fd8;
    if (DAT_14ca96fe0 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    DAT_14ca96fe8 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar2,1);
  }
  cVar1 = FUN_14002b5e0(local_20,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != (short)param_1)) {
    if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 147430c75 FUN_147430c75 body=146 status=ok
// SIG undefined FUN_147430c75(void)

undefined8 FUN_147430c75(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97020) && (FUN_144b3d300(&DAT_14ca97020), DAT_14ca97020 == -1)) {
    DAT_14ca97018 = (longlong *)FUN_14631badc();
    _Init_thread_footer(&DAT_14ca97020);
  }
  if (DAT_14ca97018 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14ca97018 + 8))(DAT_14ca97018,param_1);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  cVar1 = FUN_147430b12(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_145978645(param_1);
  return uVar2;
}



// FUNCTION 147430d07 FUN_147430d07 body=214 status=ok
// SIG undefined FUN_147430d07(void)

undefined1 FUN_147430d07(void)

{
  longlong lVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97080) {
    FUN_144b3d300(&DAT_14ca97080);
    if (DAT_14ca97080 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.RayTracing.UseReferenceBasedResidency",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14ca97078 = 0;
      }
      else {
        DAT_14ca97078 = (**(code **)(*plVar5 + 0x60))(plVar5);
      }
      _Init_thread_footer(&DAT_14ca97080);
    }
  }
  lVar1 = DAT_14ca97078;
  if (DAT_14ca97078 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar2 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar2 ^ 1);
    }
    uVar3 = *(undefined1 *)(lVar1 + uVar4);
  }
  return uVar3;
}



// FUNCTION 147430ddd FUN_147430ddd body=11 status=ok
// SIG undefined FUN_147430ddd(void)

bool FUN_147430ddd(void)

{
  return DAT_14c760e38 != 0;
}



// FUNCTION 147430de8 FUN_147430de8 body=70 status=ok
// SIG undefined FUN_147430de8(void)

bool FUN_147430de8(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14ca970e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return 0 < *(int *)(lVar1 + uVar3 * 4);
}



// FUNCTION 147430e2e FUN_147430e2e body=70 status=ok
// SIG undefined FUN_147430e2e(void)

bool FUN_147430e2e(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14ca970f8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return 0 < *(int *)(lVar1 + uVar3 * 4);
}



// FUNCTION 147430e74 FUN_147430e74 body=72 status=ok
// SIG undefined FUN_147430e74(void)

bool FUN_147430e74(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = DAT_14ca97158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144a61b4f();
    uVar2 = (uVar2 ^ 1) & 0xff;
  }
  return 0 < *(int *)(lVar1 + uVar2 * 4);
}



// FUNCTION 147430ebc FUN_147430ebc body=93 status=ok
// SIG undefined FUN_147430ebc(void)

uint FUN_147430ebc(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  
  lVar1 = DAT_14ca97188;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  uVar5 = *(int *)(lVar1 + uVar4 * 4) + 3U & 0xfffffffc;
  if (0xff < uVar5) {
    uVar5 = 0x100;
  }
  uVar3 = 0x14;
  if (0x14 < uVar5) {
    uVar3 = uVar5;
  }
  return uVar3;
}



// FUNCTION 147430f19 FUN_147430f19 body=164 status=ok
// SIG undefined FUN_147430f19(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_147430f19(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca972f8) {
    FUN_144b3d300(&DAT_14ca972f8);
    if (DAT_14ca972f8 == -1) {
      FUN_140056680(&DAT_14ca972e0,L"r.Substrate.BytesPerPixel");
      _DAT_14ca972f0 = 0;
      atexit((_func_5014 *)&LAB_143226d04);
      _Init_thread_footer(&DAT_14ca972f8);
    }
  }
  iVar1 = FUN_144a7e43e(&DAT_14ca972e0,param_1);
  uVar2 = iVar1 + 3U & 0xfffffffc;
  if (0xff < uVar2) {
    uVar2 = 0x100;
  }
  if (uVar2 < 0x15) {
    uVar2 = 0x14;
  }
  return uVar2;
}



// FUNCTION 147430fbd FUN_147430fbd body=368 status=ok
// SIG undefined FUN_147430fbd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_147430fbd(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined1 local_38 [8];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97318) && (FUN_144b3d300(&DAT_14ca97318), DAT_14ca97318 == -1)) {
    FUN_140056680(&DAT_14ca97300,L"r.Substrate.ClosuresPerPixel");
    _DAT_14ca97310 = 0;
    atexit((_func_5014 *)&LAB_143226d15);
    _Init_thread_footer(&DAT_14ca97318);
  }
  iVar2 = FUN_144a7e43e(&DAT_14ca97300,param_1);
  if (DAT_14ca9731c == 0 && DAT_14c872ce0 != 0) {
    FUN_1431ed9c0(local_38,param_1);
    FUN_1400021e4(local_38,&local_30);
    puVar4 = local_30;
    if (local_28 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    local_48 = &DAT_14c872ce8;
    cVar1 = FUN_1414d73b6(DAT_14c872ce0,puVar4,L"MaxClosuresPerPixel",&DAT_14ca9731c);
    iVar3 = iVar2;
    if (cVar1 != '\0') {
      iVar3 = DAT_14ca9731c;
    }
    DAT_14ca9731c = iVar3;
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar3 = DAT_14ca9731c;
  if (iVar2 < DAT_14ca9731c) {
    iVar3 = iVar2;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2;
}



// FUNCTION 14743112e FUN_14743112e body=220 status=ok
// SIG undefined FUN_14743112e(void)

bool FUN_14743112e(void)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97328) {
    FUN_144b3d300(&DAT_14ca97328);
    if (DAT_14ca97328 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GBufferFormat",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97320 = 0;
      }
      else {
        DAT_14ca97320 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97328);
    }
  }
  lVar1 = DAT_14ca97320;
  if (DAT_14ca97320 == 0) {
    bVar2 = false;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_144a61b4f();
      uVar3 = (uVar3 ^ 1) & 0xff;
    }
    bVar2 = 1 < *(int *)(lVar1 + uVar3 * 4);
  }
  return bVar2;
}



// FUNCTION 14743120a FUN_14743120a body=45 status=ok
// SIG undefined FUN_14743120a(void)

uint FUN_14743120a(char param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_14743112e();
  uVar2 = iVar1 * 4 + 4;
  if (param_1 == '\0') {
    iVar1 = FUN_147430ebc();
    uVar2 = uVar2 + iVar1;
  }
  else {
    uVar2 = uVar2 | 0x20;
  }
  return uVar2;
}



// FUNCTION 147431237 FUN_147431237 body=72 status=ok
// SIG undefined FUN_147431237(void)

bool FUN_147431237(void)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = DAT_14ca97278;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144a61b4f();
    uVar2 = (uVar2 ^ 1) & 0xff;
  }
  return 0 < *(int *)(lVar1 + uVar2 * 4);
}



// FUNCTION 14743127f FUN_14743127f body=118 status=ok
// SIG undefined FUN_14743127f(void)

bool FUN_14743127f(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca97170;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
    uVar6 = 0;
  }
  else {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  lVar3 = DAT_14ca972c0;
  if (*(int *)(lVar2 + uVar6 * 4) < 1) {
    bVar5 = false;
  }
  else {
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    bVar5 = 0 < *(int *)(lVar3 + uVar6 * 4);
  }
  return bVar5;
}



// FUNCTION 1474312f5 FUN_1474312f5 body=307 status=ok
// SIG undefined FUN_1474312f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1474312f5(ulonglong param_1)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  bool bVar7;
  
  iVar3 = FUN_14743112e();
  uVar6 = param_1 & 0xffff;
  if (iVar3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(byte *)(&DAT_14ca814c8 + uVar6 * 0xf) & 8) == 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97368) && (FUN_144b3d300(&DAT_14ca97368), DAT_14ca97368 == -1)) {
    FUN_140056680(&DAT_14ca97350,L"r.Substrate.DBufferPass");
    _DAT_14ca97360 = 0;
    atexit((_func_5014 *)&LAB_143226d37);
    _Init_thread_footer(&DAT_14ca97368);
  }
  lVar1 = DAT_14ca97170;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar4 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar4 = (ulonglong)(bVar2 ^ 1);
  }
  if (0 < *(int *)(lVar1 + uVar4 * 4)) {
    puVar5 = &DAT_14ca96b08;
    if (DAT_14ca96b58 != (undefined4 *)0x0) {
      puVar5 = DAT_14ca96b58;
    }
    if (!bVar7 && ((uint)puVar5[uVar6 >> 5] >> ((uint)uVar6 & 0x1f) & 1) != 0) {
      iVar3 = FUN_144a7e43e(&DAT_14ca97350,param_1 & 0xffffffff);
      return 0 < iVar3;
    }
  }
  return false;
}



// FUNCTION 147431428 FUN_147431428 body=44 status=ok
// SIG undefined FUN_147431428(void)

void FUN_147431428(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 14743147a FUN_14743147a body=87 status=ok
// SIG undefined FUN_14743147a(void)

longlong FUN_14743147a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 1474314d2 FUN_1474314d2 body=145 status=ok
// SIG undefined FUN_1474314d2(void)

void FUN_1474314d2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147431564 FUN_147431564 body=44 status=ok
// SIG undefined FUN_147431564(void)

void FUN_147431564(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 14743159c FUN_14743159c body=87 status=ok
// SIG undefined FUN_14743159c(void)

longlong FUN_14743159c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 1474315f4 FUN_1474315f4 body=145 status=ok
// SIG undefined FUN_1474315f4(void)

void FUN_1474315f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147431686 FUN_147431686 body=44 status=ok
// SIG undefined FUN_147431686(void)

void FUN_147431686(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1474316be FUN_1474316be body=87 status=ok
// SIG undefined FUN_1474316be(void)

longlong FUN_1474316be(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 147431716 FUN_147431716 body=145 status=ok
// SIG undefined FUN_147431716(void)

void FUN_147431716(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 1474317a8 FUN_1474317a8 body=44 status=ok
// SIG undefined FUN_1474317a8(void)

void FUN_1474317a8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1474317e0 FUN_1474317e0 body=87 status=ok
// SIG undefined FUN_1474317e0(void)

longlong FUN_1474317e0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 147431838 FUN_147431838 body=145 status=ok
// SIG undefined FUN_147431838(void)

void FUN_147431838(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 1474318ca FUN_1474318ca body=44 status=ok
// SIG undefined FUN_1474318ca(void)

void FUN_1474318ca(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 1474318fe FUN_1474318fe body=87 status=ok
// SIG undefined FUN_1474318fe(void)

longlong FUN_1474318fe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 147431956 FUN_147431956 body=145 status=ok
// SIG undefined FUN_147431956(void)

void FUN_147431956(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 1474319e8 FUN_1474319e8 body=44 status=ok
// SIG undefined FUN_1474319e8(void)

void FUN_1474319e8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147431a1c FUN_147431a1c body=87 status=ok
// SIG undefined FUN_147431a1c(void)

longlong FUN_147431a1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 147431a74 FUN_147431a74 body=145 status=ok
// SIG undefined FUN_147431a74(void)

void FUN_147431a74(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147431b06 FUN_147431b06 body=44 status=ok
// SIG undefined FUN_147431b06(void)

void FUN_147431b06(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147431b3a FUN_147431b3a body=87 status=ok
// SIG undefined FUN_147431b3a(void)

longlong FUN_147431b3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"UnresolvedSurface",1);
  return lVar1;
}



// FUNCTION 147431b92 FUN_147431b92 body=145 status=ok
// SIG undefined FUN_147431b92(void)

void FUN_147431b92(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe8,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}



// FUNCTION 147431c24 FUN_147431c24 body=44 status=ok
// SIG undefined FUN_147431c24(void)

void FUN_147431c24(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147431c76 FUN_147431c76 body=39 status=ok
// SIG undefined FUN_147431c76(void)

void FUN_147431c76(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147431f34(uVar1,param_1);
  return;
}



// FUNCTION 147431c9e FUN_147431c9e body=160 status=ok
// SIG undefined FUN_147431c9e(void)

void FUN_147431c9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  puVar1[0x1c] = 0;
  *(undefined2 *)(puVar1 + 0x1d) = 0;
  return;
}



// FUNCTION 147431d3e FUN_147431d3e body=44 status=ok
// SIG undefined FUN_147431d3e(void)

void FUN_147431d3e(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147431d76 FUN_147431d76 body=39 status=ok
// SIG undefined FUN_147431d76(void)

void FUN_147431d76(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147431ff2(uVar1,param_1);
  return;
}



// FUNCTION 147431d9e FUN_147431d9e body=156 status=ok
// SIG undefined FUN_147431d9e(void)

void FUN_147431d9e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1c] = 0;
  return;
}



// FUNCTION 147431e3a FUN_147431e3a body=44 status=ok
// SIG undefined FUN_147431e3a(void)

void FUN_147431e3a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf0);
  return;
}



// FUNCTION 147431e6e FUN_147431e6e body=39 status=ok
// SIG undefined FUN_147431e6e(void)

void FUN_147431e6e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf0,0x10);
  FUN_147431ff2(uVar1,param_1);
  return;
}



// FUNCTION 147431e96 FUN_147431e96 body=156 status=ok
// SIG undefined FUN_147431e96(void)

void FUN_147431e96(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x54) = 0xffff;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *(uint *)(puVar1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)puVar1 + 0xd4) = 0xffffffff;
  *(undefined4 *)(puVar1 + 0x1d) = 0;
  puVar1[0x1c] = 0;
  return;
}



// FUNCTION 147431f32 FUN_147431f32 body=1 status=ok
// SIG undefined FUN_147431f32(void)

void FUN_147431f32(void)

{
  return;
}



// FUNCTION 147431f34 FUN_147431f34 body=110 status=ok
// SIG undefined FUN_147431f34(void)

longlong FUN_147431f34(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  FUN_147440a6c(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"UnresolvedSurface",1);
  FUN_1474409b8(param_1 + 0xe4,*(undefined8 *)(param_2 + 0x28),L"SingleSampleIndex",1);
  return param_1;
}



// FUNCTION 147431fa2 FUN_147431fa2 body=78 status=ok
// SIG undefined FUN_147431fa2(void)

void FUN_147431fa2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_144abbe48(param_2,param_1 + 0xe4,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147431ff2 FUN_147431ff2 body=111 status=ok
// SIG undefined FUN_147431ff2(void)

longlong FUN_147431ff2(longlong param_1,longlong param_2)

{
  thunk_FUN_147432e9e();
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  FUN_1474409b8(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x28),L"PositionMinMax",1);
  FUN_1474409b8(param_1 + 0xe6,*(undefined8 *)(param_2 + 0x28),L"UVMinMax",1);
  return param_1;
}



// FUNCTION 147432062 FUN_147432062 body=378 status=ok
// SIG undefined FUN_147432062(void)

void FUN_147432062(longlong param_1,undefined8 param_2,int *param_3,int *param_4,uint param_5,
                  uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *param_3;
  iVar2 = param_3[1];
  iVar3 = param_3[2];
  iVar4 = param_3[3];
  local_88 = (float)*param_4 / ((float)param_5 * 0.5) + -1.0;
  local_84 = 1.0 - (float)param_4[1] / ((float)param_6 * 0.5);
  local_80 = (float)param_4[2] / ((float)param_5 * 0.5) + -1.0;
  local_7c = 1.0 - (float)param_4[3] / ((float)param_6 * 0.5);
  FUN_1449dacb8(param_2,param_1 + 0xe0,&local_88,0);
  local_88 = (float)iVar1;
  local_84 = (float)iVar2;
  local_80 = (float)iVar3;
  local_7c = (float)iVar4;
  FUN_1449dacb8(param_2,param_1 + 0xe6,&local_88,0);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474321dd FUN_1474321dd body=178 status=ok
// SIG undefined FUN_1474321dd(void)

void FUN_1474321dd(void)

{
  FUN_145c1161c();
  FUN_14741cb5d(&DAT_14ca97450);
  FUN_1460b04be();
  FUN_14741cb5d(&DAT_14ca97578);
  FUN_1460b072e();
  FUN_14741cb5d(&DAT_14ca976a0);
  FUN_1460b099e();
  FUN_14741cb5d(&DAT_14ca977c8);
  FUN_1460b0c0e();
  FUN_14741cb5d(&DAT_14ca978f0);
  FUN_1460b0e7e();
  FUN_14741cb5d(&DAT_14ca97a18);
  FUN_1460b10ee();
  FUN_14741cb5d(&DAT_14ca97b40);
  FUN_1460455a2();
  FUN_14741cb5d(&DAT_14ca97c68);
  FUN_145ee189a();
  FUN_14741cb5d(&DAT_14ca97d90);
  FUN_1460b135e();
  FUN_14741cb5d(&DAT_14ca97eb8);
  return;
}



// FUNCTION 147432290 FUN_147432290 body=44 status=ok
// SIG undefined FUN_147432290(void)

void FUN_147432290(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1474322c0 FUN_1474322c0 body=69 status=ok
// SIG undefined FUN_1474322c0(void)

void FUN_1474322c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_1474337a4(param_1);
  }
  param_1[10] = 0xfefefefefefefefe;
  param_1[8] = 0xfefefefefefefefe;
  param_1[9] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14743230a FUN_14743230a body=57 status=ok
// SIG undefined FUN_14743230a(void)

void FUN_14743230a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743d4c0(param_1);
  }
  param_1[10] = 0xfefefefefefefefe;
  param_1[0xb] = 0xfefefefefefefefe;
  param_1[8] = 0xfefefefefefefefe;
  param_1[9] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147432386 FUN_147432386 body=21 status=ok
// SIG undefined FUN_147432386(void)

undefined * FUN_147432386(void)

{
  FUN_146069c5a();
  return &DAT_14ca98138;
}



// FUNCTION 1474323be FUN_1474323be body=52 status=ok
// SIG undefined FUN_1474323be(void)

void FUN_1474323be(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1 + 1);
  }
  param_1[2] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474323f6 FUN_1474323f6 body=92 status=ok
// SIG undefined FUN_1474323f6(void)

void FUN_1474323f6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_147438e88(param_1 + 6);
    FUN_144a886ae(param_1 + 4);
    FUN_144a886ae(param_1 + 2);
    FUN_144a886ae(param_1);
  }
  param_1[8] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147432455 FUN_147432455 body=61 status=ok
// SIG undefined FUN_147432455(void)

void FUN_147432455(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147432492(param_1,param_2[1]);
  if (lVar1 != 0) {
    FUN_140212e80(*param_2,&DAT_149e2b5d6,*(undefined8 *)(lVar1 + 0x18));
    return;
  }
  FUN_146826b22(param_2);
  return;
}



// FUNCTION 147432492 FUN_147432492 body=200 status=ok
// SIG undefined FUN_147432492(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147432492(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((DAT_14ca9843f & 2) == 0) {
    DAT_14ca9843f = DAT_14ca9843f | 3;
    _DAT_14ca983e0 = L"TIndexedPtr<FShaderType>";
    _DAT_14ca983f8 = &LAB_147432660;
    _DAT_14ca98400 = FUN_147432702;
    _DAT_14ca98408 = &LAB_147432726;
    _DAT_14ca98410 = &LAB_147432734;
    _DAT_14ca98418 = &LAB_147432742;
    _DAT_14ca983f0 = &LAB_14743274a;
    _DAT_14ca98430 = 0x800000008;
    _DAT_14ca98438 = 8;
    DAT_14ca9843c = 0;
    uVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000147432557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,&DAT_14ca983d8,uVar1 >> 1 & 0xffffffff,*(code **)(*param_2 + 0x10));
  return;
}



// FUNCTION 14743255a FUN_14743255a body=61 status=ok
// SIG undefined FUN_14743255a(void)

void FUN_14743255a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_147432598(param_1,param_2[1]);
  if (lVar1 != 0) {
    FUN_140212e80(*param_2,&DAT_149e2b5d6,*(undefined8 *)(lVar1 + 8));
    return;
  }
  FUN_146826b22(param_2);
  return;
}



// FUNCTION 147432598 FUN_147432598 body=200 status=ok
// SIG undefined FUN_147432598(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147432598(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 & 1) == 0) {
    return;
  }
  if ((DAT_14ca984a7 & 2) == 0) {
    DAT_14ca984a7 = DAT_14ca984a7 | 3;
    _DAT_14ca98448 = L"TIndexedPtr<FVertexFactoryType>";
    _DAT_14ca98460 = &LAB_147432758;
    _DAT_14ca98468 = FUN_1474327fa;
    _DAT_14ca98470 = &LAB_14743281e;
    _DAT_14ca98478 = &LAB_14743282c;
    _DAT_14ca98480 = &LAB_14743283a;
    _DAT_14ca98458 = &LAB_147432842;
    _DAT_14ca98498 = 0x800000008;
    _DAT_14ca984a0 = 8;
    DAT_14ca984a4 = 0;
    uVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014743265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))
            (param_2,&DAT_14ca98440,uVar1 >> 1 & 0xffffffff,*(code **)(*param_2 + 0x10));
  return;
}



// FUNCTION 147432665 FUN_147432665 body=155 status=ok
// SIG undefined FUN_147432665(void)

void FUN_147432665(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_146827ffc();
  lVar3 = FUN_147432492(param_2,uVar2);
  if (lVar3 == 0) {
    local_28 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_146827ff0(param_1);
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_3,lVar3);
    local_28 = (ulonglong)uVar1 * 2 + 1;
  }
  FUN_146826a6c(param_1,&local_28,8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147432702 FUN_147432702 body=36 status=ok
// SIG undefined FUN_147432702(void)

undefined8
FUN_147432702(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_147432492(param_2,*param_1);
  *param_4 = uVar1;
  return 8;
}



// FUNCTION 14743275d FUN_14743275d body=155 status=ok
// SIG undefined FUN_14743275d(void)

void FUN_14743275d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = FUN_146827ffc();
  lVar3 = FUN_147432598(param_2,uVar2);
  if (lVar3 == 0) {
    local_28 = 0;
  }
  else {
    plVar4 = (longlong *)FUN_146827ff0(param_1);
    uVar1 = (**(code **)(*plVar4 + 8))(plVar4,param_3,lVar3);
    local_28 = (ulonglong)uVar1 * 2 + 1;
  }
  FUN_146826a6c(param_1,&local_28,8);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474327fa FUN_1474327fa body=36 status=ok
// SIG undefined FUN_1474327fa(void)

undefined8
FUN_1474327fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_147432598(param_2,*param_1);
  *param_4 = uVar1;
  return 8;
}



// FUNCTION 147432850 FUN_147432850 body=162 status=ok
// SIG undefined FUN_147432850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_147432850(void)

{
  if ((DAT_14ca984a7 & 2) == 0) {
    DAT_14ca984a7 = DAT_14ca984a7 | 3;
    _DAT_14ca98448 = L"TIndexedPtr<FVertexFactoryType>";
    _DAT_14ca98460 = &LAB_147432758;
    _DAT_14ca98468 = FUN_1474327fa;
    _DAT_14ca98470 = &LAB_14743281e;
    _DAT_14ca98478 = &LAB_14743282c;
    _DAT_14ca98480 = &LAB_14743283a;
    _DAT_14ca98458 = &LAB_147432842;
    _DAT_14ca98498 = 0x800000008;
    _DAT_14ca984a0 = 8;
    DAT_14ca984a4 = 0;
  }
  return &DAT_14ca98440;
}



// FUNCTION 1474328f2 FUN_1474328f2 body=8 status=ok
// SIG undefined FUN_1474328f2(void)

undefined8 * FUN_1474328f2(void)

{
  return &DAT_14ca98540;
}



// FUNCTION 1474328fa FUN_1474328fa body=115 status=ok
// SIG undefined FUN_1474328fa(void)

undefined4 FUN_1474328fa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  cVar1 = FUN_14743296e(param_1 + 8);
  if (cVar1 == '\0') {
    FUN_147432a6a(param_1 + 0x38,param_2,param_3,&local_24);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743296e FUN_14743296e body=251 status=ok
// SIG undefined FUN_14743296e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14743296e(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((DAT_14ca9843f & 2) == 0) {
    DAT_14ca9843f = DAT_14ca9843f | 3;
    _DAT_14ca983e0 = L"TIndexedPtr<FShaderType>";
    _DAT_14ca983f8 = &LAB_147432660;
    _DAT_14ca98400 = FUN_147432702;
    _DAT_14ca98408 = &LAB_147432726;
    _DAT_14ca98410 = &LAB_147432734;
    _DAT_14ca98418 = &LAB_147432742;
    _DAT_14ca983f0 = &LAB_14743274a;
    _DAT_14ca98430 = 0x800000008;
    _DAT_14ca98438 = 8;
    DAT_14ca9843c = 0;
  }
  if (param_2 == &DAT_14ca983d8) {
    local_28 = param_3;
    uVar1 = FUN_147439e40(param_1 + 0x20);
    *param_4 = uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2 == &DAT_14ca983d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147432a6a FUN_147432a6a body=238 status=ok
// SIG undefined FUN_147432a6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147432a6a(longlong param_1,undefined *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((DAT_14ca984a7 & 2) == 0) {
    DAT_14ca984a7 = DAT_14ca984a7 | 3;
    _DAT_14ca98448 = L"TIndexedPtr<FVertexFactoryType>";
    _DAT_14ca98460 = &LAB_147432758;
    _DAT_14ca98468 = FUN_1474327fa;
    _DAT_14ca98470 = &LAB_14743281e;
    _DAT_14ca98478 = &LAB_14743282c;
    _DAT_14ca98480 = &LAB_14743283a;
    _DAT_14ca98458 = &LAB_147432842;
    _DAT_14ca98498 = 0x800000008;
    _DAT_14ca984a0 = 8;
    DAT_14ca984a4 = 0;
  }
  if (param_2 == &DAT_14ca98440) {
    local_18 = param_3;
    uVar1 = FUN_147439ea8(param_1 + 0x20);
    *param_4 = uVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147432b5a FUN_147432b5a body=363 status=ok
// SIG undefined FUN_147432b5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147432b5a(longlong param_1,undefined *param_2,int param_3)

{
  longlong lVar1;
  
  if ((DAT_14ca9843f & 2) == 0) {
    DAT_14ca9843f = DAT_14ca9843f | 3;
    _DAT_14ca983e0 = L"TIndexedPtr<FShaderType>";
    _DAT_14ca983f8 = &LAB_147432660;
    _DAT_14ca98400 = FUN_147432702;
    _DAT_14ca98408 = &LAB_147432726;
    _DAT_14ca98410 = &LAB_147432734;
    _DAT_14ca98418 = &LAB_147432742;
    _DAT_14ca983f0 = &LAB_14743274a;
    _DAT_14ca98430 = 0x800000008;
    _DAT_14ca98438 = 8;
    DAT_14ca9843c = 0;
  }
  if (param_2 == &DAT_14ca983d8) {
    lVar1 = 0x28;
  }
  else {
    if ((DAT_14ca984a7 & 2) == 0) {
      DAT_14ca984a7 = DAT_14ca984a7 | 3;
      _DAT_14ca98448 = L"TIndexedPtr<FVertexFactoryType>";
      _DAT_14ca98460 = &LAB_147432758;
      _DAT_14ca98468 = FUN_1474327fa;
      _DAT_14ca98470 = &LAB_14743281e;
      _DAT_14ca98478 = &LAB_14743282c;
      _DAT_14ca98480 = &LAB_14743283a;
      _DAT_14ca98458 = &LAB_147432842;
      _DAT_14ca98498 = 0x800000008;
      _DAT_14ca984a0 = 8;
      DAT_14ca984a4 = 0;
    }
    if (param_2 != &DAT_14ca98440) {
      return 0;
    }
    lVar1 = 0x58;
  }
  return *(undefined8 *)(*(longlong *)(param_1 + lVar1) + (longlong)param_3 * 8);
}



// FUNCTION 147432cc6 FUN_147432cc6 body=351 status=ok
// SIG undefined FUN_147432cc6(void)

void FUN_147432cc6(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146826d2c();
  local_2c = *(int *)(param_1 + 0x30);
  local_30 = *(int *)(param_1 + 0x60);
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  puVar2 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_30,4);
    }
    else {
      FUN_14572512c(param_2,&local_30);
    }
  }
  else {
    local_30 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (0 < local_2c) {
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar3 * 8) + 0x28);
      FUN_144adc1bc(param_2,&local_38);
      lVar3 = lVar3 + 1;
    } while (lVar3 < local_2c);
  }
  if (0 < local_30) {
    lVar3 = 0;
    do {
      local_38 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + lVar3 * 8) + 0x20);
      FUN_144adc1bc(param_2,&local_38);
      lVar3 = lVar3 + 1;
    } while (lVar3 < local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147432e26 FUN_147432e26 body=120 status=ok
// SIG undefined FUN_147432e26(void)

void FUN_147432e26(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(uint *)(param_1 + 0x1a) = (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  return;
}



// FUNCTION 147432e9e FUN_147432e9e body=420 status=ok
// SIG undefined FUN_147432e9e(void)

undefined8 * FUN_147432e9e(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0xffff;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = *param_2;
  param_1[0x19] = param_2[0xb];
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)param_2[6];
  FUN_147433044(0,param_2[5]);
  plVar6 = (longlong *)FUN_14743dd86();
  plVar6 = (longlong *)*plVar6;
  if (plVar6 != (longlong *)0x0) {
    puVar1 = param_1 + 0x14;
    local_60 = param_1 + 0x16;
    do {
      uVar8 = param_2[5];
      local_58 = *(wchar_t **)(plVar6[2] + 0x18);
      if (local_58 == (wchar_t *)0x0) {
        local_50 = 0;
      }
      else {
        sVar7 = wcslen(local_58);
        local_50 = (int)sVar7;
      }
      cVar5 = FUN_14743c56c(uVar8,&local_58);
      if (cVar5 != '\0') {
        lVar3 = plVar6[2];
        iVar2 = *(int *)(param_1 + 0x15);
        *(uint *)(param_1 + 0x15) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xac) < iVar2 + 1U) {
          FUN_147434fae(puVar1,iVar2);
        }
        uVar4 = *puVar1;
        uVar9 = ((longlong)uVar4 >> 0x18) + (longlong)puVar1;
        if ((uVar4 & 1) == 0) {
          uVar9 = uVar4;
        }
        *(undefined8 *)(uVar9 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + 0x28);
        uVar8 = FUN_147433758(local_60);
        FUN_147440b96(uVar8,param_2[5],*(undefined8 *)(plVar6[2] + 0x18),1);
      }
      plVar6 = (longlong *)*plVar6;
    } while (plVar6 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147433044 FUN_147433044 body=1810 status=ok
// SIG undefined FUN_147433044(void)

void FUN_147433044(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  bool bVar4;
  short sVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong *puVar12;
  int iVar13;
  longlong lVar14;
  short *psVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  short *psVar21;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong *local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong *local_78;
  uint uStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar6 = param_2 + 2;
  local_80 = 0x100000000;
  uStack_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  local_c8 = param_1;
  local_78 = plVar6;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_80);
  }
  local_90 = uStack_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  iVar13 = 0;
  iVar16 = 0;
  iVar11 = 0;
  local_a8 = param_2;
  if (iStack_6c < (int)local_78[3]) {
    iVar11 = 0;
    iVar16 = 0;
    iVar13 = 0;
    do {
      switch(*(undefined1 *)(*local_a8 + 0x16 + (longlong)iStack_8c * 0x20)) {
      case 1:
        iVar11 = iVar11 + 1;
        break;
      case 2:
      case 5:
        iVar16 = iVar16 + 1;
        break;
      case 3:
      case 6:
        iVar13 = iVar13 + 1;
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < (int)local_98[3]);
  }
  lVar20 = local_c8;
  local_c0 = (ulonglong *)(local_c8 + 0x58);
  FUN_1474337e6(local_c0,iVar11);
  local_b0 = (ulonglong *)(lVar20 + 0x68);
  FUN_147433810(local_b0,iVar16);
  local_b8 = (ulonglong *)(lVar20 + 0x78);
  FUN_147433810(local_b8,iVar13);
  local_80 = 0x100000000;
  uStack_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  local_78 = plVar6;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_80);
  }
  local_90 = uStack_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  lVar20 = local_c8;
  local_a8 = param_2;
  if (iStack_6c < (int)local_78[3]) {
    puVar17 = (ulonglong *)(local_c8 + 0x88);
    do {
      lVar7 = *local_a8;
      lVar19 = (longlong)iStack_8c * 0x20;
      bVar1 = *(byte *)(lVar7 + 0x16 + lVar19);
      if (bVar1 < 7) {
        psVar15 = (short *)(lVar7 + lVar19 + 0x10);
        puVar12 = local_b0;
        switch(bVar1) {
        case 0:
          uVar10 = (ulonglong)*(uint *)(lVar20 + 0x90);
          if ((int)*(uint *)(lVar20 + 0x90) < 1) {
            sVar5 = *psVar15;
LAB_1474333e8:
            local_78 = (longlong *)0x0;
            local_80._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 0x14 + lVar19),sVar5);
            iStack_6c = 0;
            uStack_70 = 1;
            FUN_147438958(&local_78,0);
            plVar6 = (longlong *)(((longlong)local_78 >> 0x18) + (longlong)&local_78);
            if (((ulonglong)local_78 & 1) == 0) {
              plVar6 = local_78;
            }
            *(undefined4 *)plVar6 = *(undefined4 *)(lVar7 + 0x12 + lVar19);
            iVar11 = *(int *)(lVar20 + 0x90);
            *(uint *)(lVar20 + 0x90) = iVar11 + 1U;
            if (*(uint *)(lVar20 + 0x94) < iVar11 + 1U) {
              FUN_147438caa(puVar17,iVar11);
            }
            uVar10 = *puVar17;
            uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)puVar17;
            if ((uVar10 & 1) == 0) {
              uVar8 = uVar10;
            }
            FUN_14743a0d0(uVar8 + (longlong)iVar11 * 0x18,&local_80);
            FUN_144a886ae(&local_78);
          }
          else {
            lVar14 = 0;
            bVar4 = false;
            do {
              uVar8 = *puVar17;
              sVar5 = *psVar15;
              uVar18 = ((longlong)uVar8 >> 0x18) + (longlong)puVar17;
              if ((uVar8 & 1) == 0) {
                uVar18 = uVar8;
              }
              psVar21 = (short *)(uVar18 + lVar14 * 0x18);
              while (*psVar21 != sVar5) {
                lVar14 = lVar14 + 1;
                psVar21 = psVar21 + 0xc;
                if ((int)uVar10 <= lVar14) {
                  lVar20 = local_c8;
                  if (bVar4) goto switchD_147433260_caseD_4;
                  goto LAB_1474333e8;
                }
              }
              iVar11 = *(int *)(psVar21 + 8);
              *(uint *)(psVar21 + 8) = iVar11 + 1U;
              if (*(uint *)(psVar21 + 10) < iVar11 + 1U) {
                FUN_147438958(psVar21 + 4,iVar11);
              }
              uVar10 = *(ulonglong *)(psVar21 + 4);
              uVar8 = (longlong)psVar21 + ((longlong)uVar10 >> 0x18) + 8;
              if ((uVar10 & 1) == 0) {
                uVar8 = uVar10;
              }
              *(undefined4 *)(uVar8 + (longlong)iVar11 * 4) = *(undefined4 *)(lVar7 + 0x12 + lVar19)
              ;
              psVar21[1] = psVar21[1] + *(short *)(lVar7 + 0x14 + lVar19);
              uVar10 = (ulonglong)*(int *)(local_c8 + 0x90);
              lVar14 = lVar14 + 1;
              bVar4 = true;
              lVar20 = local_c8;
            } while (lVar14 < (longlong)uVar10);
          }
          break;
        case 1:
          iVar11 = *(int *)(lVar20 + 0x60);
          *(uint *)(lVar20 + 0x60) = iVar11 + 1U;
          if (*(uint *)(lVar20 + 100) < iVar11 + 1U) {
            FUN_147439400(local_c0,iVar11);
          }
          uVar10 = *local_c0;
          uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)local_c0;
          if ((uVar10 & 1) == 0) {
            uVar8 = uVar10;
          }
          *(short *)(uVar8 + (longlong)iVar11 * 2) = *psVar15;
          break;
        case 3:
        case 6:
          puVar12 = local_b8;
        default:
          if (puVar12 != (ulonglong *)0x0) {
            iVar11 = (int)puVar12[1];
            lVar14 = (longlong)iVar11;
            *(uint *)(puVar12 + 1) = iVar11 + 1U;
            if (*(uint *)((longlong)puVar12 + 0xc) < iVar11 + 1U) {
              FUN_1474390cc(puVar12,iVar11);
            }
            uVar10 = *puVar12;
            uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)puVar12;
            if ((uVar10 & 1) == 0) {
              uVar8 = uVar10;
            }
            uVar2 = *(undefined1 *)(lVar7 + lVar19 + 0x16);
            uVar3 = *(undefined1 *)psVar15;
            *(undefined2 *)(uVar8 + lVar14 * 4) = *(undefined2 *)(lVar7 + lVar19 + 0x12);
            *(undefined1 *)(uVar8 + 2 + lVar14 * 4) = uVar3;
            *(undefined1 *)(uVar8 + 3 + lVar14 * 4) = uVar2;
          }
          break;
        case 4:
          break;
        }
      }
switchD_147433260_caseD_4:
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while (iStack_8c < (int)local_98[3]);
  }
  uVar10 = *(ulonglong *)(lVar20 + 0x88);
  lVar7 = (longlong)uVar10 >> 0x18;
  uVar18 = uVar10 & 1;
  uVar8 = lVar20 + 0x88 + lVar7;
  if (uVar18 == 0) {
    uVar8 = uVar10;
  }
  uVar9 = 0;
  if ((longlong)*(int *)(lVar20 + 0x90) != 0) {
    lVar7 = (longlong)*(int *)(lVar20 + 0x90) * 0x18;
    puVar17 = (ulonglong *)(uVar8 + 8);
    do {
      uVar10 = *puVar17;
      uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)puVar17;
      if ((uVar10 & 1) == 0) {
        uVar8 = uVar10;
      }
      FUN_14743a1ab(uVar8,(int)puVar17[1]);
      puVar17 = puVar17 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
    uVar9 = *(undefined4 *)(lVar20 + 0x90);
    uVar10 = *(ulonglong *)(lVar20 + 0x88);
    uVar18 = (ulonglong)((uint)uVar10 & 1);
    lVar7 = (longlong)uVar10 >> 0x18;
  }
  uVar8 = lVar7 + lVar20 + 0x88;
  if (uVar18 == 0) {
    uVar8 = uVar10;
  }
  FUN_14743a50e(uVar8,uVar9);
  uVar10 = *(ulonglong *)(lVar20 + 0x58);
  uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)local_c0;
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_14743aa68(uVar8,*(undefined4 *)(lVar20 + 0x60));
  uVar10 = *(ulonglong *)(lVar20 + 0x68);
  uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)local_b0;
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_14743addd(uVar8,*(undefined4 *)(lVar20 + 0x70));
  uVar10 = *(ulonglong *)(lVar20 + 0x78);
  uVar8 = ((longlong)uVar10 >> 0x18) + (longlong)local_b8;
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_14743addd(uVar8,*(undefined4 *)(lVar20 + 0x80));
  uVar10 = *(ulonglong *)(lVar20 + 0x88);
  uVar8 = ((longlong)uVar10 >> 0x18) + lVar20 + 0x88;
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  iVar11 = *(int *)(lVar20 + 0x90);
  if ((longlong)iVar11 != 0) {
    puVar17 = (ulonglong *)(uVar8 + 8);
    do {
      local_a8._0_2_ = (short)puVar17[-1];
      FUN_144859ac6(&local_a8,2,0);
      local_a8 = (longlong *)CONCAT62(local_a8._2_6_,*(undefined2 *)((longlong)puVar17 + -6));
      FUN_144859ac6(&local_a8,2);
      local_a8 = (longlong *)CONCAT44(local_a8._4_4_,(int)puVar17[1]);
      FUN_144859ac6(&local_a8,4);
      uVar10 = *puVar17;
      uVar18 = ((longlong)uVar10 >> 0x18) + (longlong)puVar17;
      if ((uVar10 & 1) == 0) {
        uVar18 = uVar10;
      }
      FUN_144859ac6(uVar18,(int)puVar17[1] << 2,0);
      puVar12 = puVar17 + 2;
      puVar17 = puVar17 + 3;
    } while (puVar12 != (ulonglong *)(uVar8 + (longlong)iVar11 * 0x18));
  }
  lVar20 = local_c8;
  local_a8._0_4_ = *(undefined4 *)(local_c8 + 0x60);
  FUN_144859ac6(&local_a8,4,0);
  uVar10 = *(ulonglong *)(lVar20 + 0x58);
  uVar8 = (longlong)local_c0 + ((longlong)uVar10 >> 0x18);
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_144859ac6(uVar8,*(int *)(lVar20 + 0x60) * 2,0);
  local_a8._0_4_ = *(undefined4 *)(lVar20 + 0x70);
  FUN_144859ac6(&local_a8,4,0);
  uVar10 = *(ulonglong *)(lVar20 + 0x68);
  uVar8 = (longlong)local_b0 + ((longlong)uVar10 >> 0x18);
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_144859ac6(uVar8,*(int *)(lVar20 + 0x70) << 2,0);
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar20 + 0x80));
  FUN_144859ac6(&local_a8,4,0);
  uVar10 = *(ulonglong *)(lVar20 + 0x78);
  uVar8 = (longlong)local_b8 + ((longlong)uVar10 >> 0x18);
  if ((uVar10 & 1) == 0) {
    uVar8 = uVar10;
  }
  FUN_144859ac6(uVar8,*(int *)(lVar20 + 0x80) << 2,0);
  *(undefined8 *)(lVar20 + 0x98) = 0;
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147433758 FUN_147433758 body=75 status=ok
// SIG undefined FUN_147433758(void)

longlong FUN_147433758(ulonglong *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1472f5ad2(param_1,iVar2);
  }
  uVar3 = *param_1;
  uVar4 = ((longlong)uVar3 >> 0x18) + (longlong)param_1;
  if ((uVar3 & 1) == 0) {
    uVar4 = uVar3;
  }
  lVar1 = uVar4 + (longlong)iVar2 * 2;
  FUN_14743a00b(lVar1);
  return lVar1;
}



// FUNCTION 1474337a4 FUN_1474337a4 body=57 status=ok
// SIG undefined FUN_1474337a4(void)

void FUN_1474337a4(longlong param_1)

{
  FUN_144a886ae(param_1 + 0x40);
  FUN_144a886ae(param_1 + 0x30);
  FUN_144a886ae(param_1 + 0x20);
  FUN_144a886ae(param_1 + 0x10);
  FUN_144a886ae(param_1);
  return;
}



// FUNCTION 1474337de FUN_1474337de body=8 status=ok
// SIG undefined FUN_1474337de(void)

undefined * FUN_1474337de(void)

{
  return &DAT_14ca98520;
}



// FUNCTION 1474337e6 FUN_1474337e6 body=41 status=ok
// SIG undefined FUN_1474337e6(void)

void FUN_1474337e6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14743a012();
  return;
}



// FUNCTION 147433810 FUN_147433810 body=41 status=ok
// SIG undefined FUN_147433810(void)

void FUN_147433810(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14743a070();
  return;
}



// FUNCTION 14743383a FUN_14743383a body=8 status=ok
// SIG undefined FUN_14743383a(void)

undefined * FUN_14743383a(void)

{
  return &DAT_14ca98520;
}



// FUNCTION 147433842 FUN_147433842 body=8 status=ok
// SIG undefined FUN_147433842(void)

undefined * FUN_147433842(void)

{
  return &DAT_14ca98520;
}



// FUNCTION 14743384a FUN_14743384a body=156 status=ok
// SIG undefined FUN_14743384a(void)

longlong FUN_14743384a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  
  FUN_140999504();
  if (DAT_14ca985a8 != DAT_14ca985d4) {
    lVar2 = *param_1;
    puVar4 = &DAT_14ca985d8;
    if (DAT_14ca985e0 != (undefined *)0x0) {
      puVar4 = DAT_14ca985e0;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (DAT_14ca985e8 - 1U &
                              (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      while (plVar1 = (longlong *)(DAT_14ca985a0 + (longlong)iVar3 * 0x18), *plVar1 != lVar2) {
        iVar3 = (int)plVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 1474338e6 FUN_1474338e6 body=92 status=ok
// SIG undefined FUN_1474338e6(void)

void FUN_1474338e6(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  if (uVar3 != 0) {
    lVar2 = FUN_147432492(uVar3 + 0xc0);
    FUN_14279010a(uVar3,*(undefined8 *)(lVar2 + 0x10),param_2,(uint)uVar1 & 0xffffff01);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 147433942 FUN_147433942 body=89 status=ok
// SIG undefined FUN_147433942(void)

uint FUN_147433942(uint param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = 0;
      if (param_1 != 0) {
        for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if ((code *)(&DAT_14ca98610)[uVar1] == (code *)0x0) {
        uVar3 = *(uint *)(&DAT_14ca98710 + (ulonglong)uVar1 * 4);
      }
      else {
        uVar3 = (*(code *)(&DAT_14ca98610)[uVar1])();
      }
      if (uVar4 < uVar3) {
        uVar4 = uVar3;
      }
      bVar2 = (byte)uVar1 & 0x1f;
      param_1 = param_1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
    } while (param_1 != 0);
  }
  return uVar4;
}



// FUNCTION 14743399c FUN_14743399c body=44 status=ok
// SIG undefined FUN_14743399c(void)

void FUN_14743399c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xf8);
  return;
}



// FUNCTION 1474339e8 FUN_1474339e8 body=39 status=ok
// SIG undefined FUN_1474339e8(void)

void FUN_1474339e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0xf8,0x10);
  FUN_147439582(uVar1,param_1);
  return;
}



// FUNCTION 147433a10 FUN_147433a10 body=154 status=ok
// SIG undefined FUN_147433a10(void)

void * FUN_147433a10(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
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
  *(undefined8 *)((longlong)_Dst + 0xe0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
  *(undefined2 *)((longlong)_Dst + 0xf0) = 0;
  return _Dst;
}



// FUNCTION 147433aaa FUN_147433aaa body=44 status=ok
// SIG undefined FUN_147433aaa(void)

void FUN_147433aaa(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe8);
  return;
}



// FUNCTION 147433af6 FUN_147433af6 body=87 status=ok
// SIG undefined FUN_147433af6(void)

longlong FUN_147433af6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xe8,0x10);
  thunk_FUN_147432e9e(lVar1,param_1);
  *(undefined4 *)(lVar1 + 0xe0) = 0;
  FUN_147440a6c(lVar1 + 0xe0,*(undefined8 *)(param_1 + 0x28),L"RecordArgBuffer",1);
  return lVar1;
}



// FUNCTION 147433b4e FUN_147433b4e body=138 status=ok
// SIG undefined FUN_147433b4e(void)

void * FUN_147433b4e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe8);
  memset(_Dst,0,0xe8);
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



// FUNCTION 147433bd8 FUN_147433bd8 body=216 status=ok
// SIG undefined FUN_147433bd8(void)

void FUN_147433bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_48 = 0;
  local_50 = 0;
  local_58 = param_4;
  cVar1 = FUN_140aa9920(DAT_14c892f54,param_1,param_2,param_3);
  if (cVar1 == '\0') {
    FUN_143227259(&local_38);
    puVar2 = local_38;
    if (local_30 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/RenderCore/Private/ShaderCodeArchive.cpp",0x1ab,
                  L"ShaderCodeArchive::DecompressShader(): Could not decompress shader with Oodle. %s"
                  ,puVar2);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147433cb2 FUN_147433cb2 body=761 status=ok
// SIG undefined FUN_147433cb2(void)

void FUN_147433cb2(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  FUN_1401d5472(param_2,param_1);
  FUN_1401d5472(param_2,param_1 + 2);
  FUN_14743b3a6(param_2,param_1 + 4);
  FUN_14743b6f8(param_2,param_1 + 6);
  FUN_14743ba50(param_2,param_1 + 8);
  FUN_1447a84cc(param_2,param_1 + 10);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar6 = *(uint *)(param_1 + 1);
    uVar9 = (ulonglong)((uVar6 - 1) + (uint)(uVar6 == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar3 & 0x1f);
    if (0xffff < uVar7) {
      uVar7 = 0x10000;
    }
    if ((int)param_1[0xd] != 0) {
      *(undefined8 *)((longlong)param_1 + 100) = 0;
      if (param_1[0xe] != 0) {
        FUN_1400020a8();
      }
      param_1[0xe] = (longlong)&DAT_14c7585e0;
      if (param_1[0xf] != 0) {
        FUN_1400020a8();
      }
      param_1[0xf] = 0;
    }
    *(uint *)(param_1 + 0xc) = uVar7;
    *(uint *)(param_1 + 0xd) = uVar6;
    if (uVar6 != 0) {
      *(uint *)((longlong)param_1 + 100) = uVar7 - 1;
      uVar9 = (ulonglong)(uVar7 << 2);
      pvVar2 = (void *)FUN_14001cc68(uVar9 + (uVar9 == 0),0x10);
      param_1[0xe] = (longlong)pvVar2;
      uVar5 = 0;
      lVar3 = FUN_14001cc68((ulonglong)uVar6 << 2,0x10);
      param_1[0xf] = lVar3;
      memset(pvVar2,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),uVar9);
    }
    if (0 < (int)param_1[1]) {
      uVar6 = 1;
      lVar3 = 0;
      uVar9 = 0;
      do {
        uVar7 = *(uint *)(*param_1 + lVar3);
        if (*(uint *)(param_1 + 0xd) <= uVar9) {
          iVar1 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar4 = 1 << ((byte)iVar1 & 0x1f);
          if (uVar4 < 0x21) {
            uVar4 = 0x20;
          }
          FUN_1404b04e2(param_1 + 0xc,uVar4);
        }
        uVar8 = (ulonglong)(uVar7 & *(uint *)((longlong)param_1 + 100));
        *(undefined4 *)(param_1[0xf] + uVar9 * 4) = *(undefined4 *)(param_1[0xe] + uVar8 * 4);
        *(int *)(param_1[0xe] + uVar8 * 4) = (int)uVar9;
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 + 2;
        lVar3 = lVar3 + 0x14;
      } while ((longlong)uVar9 < (longlong)(int)param_1[1]);
    }
    uVar6 = *(uint *)(param_1 + 3);
    uVar9 = (ulonglong)((uVar6 - 1) + (uint)(uVar6 == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar7 = 1 << ((byte)lVar3 & 0x1f);
    if (0xffff < uVar7) {
      uVar7 = 0x10000;
    }
    if ((int)param_1[0x11] != 0) {
      *(undefined8 *)((longlong)param_1 + 0x84) = 0;
      if (param_1[0x12] != 0) {
        FUN_1400020a8();
      }
      param_1[0x12] = (longlong)&DAT_14c7585e0;
      if (param_1[0x13] != 0) {
        FUN_1400020a8();
      }
      param_1[0x13] = 0;
    }
    *(uint *)(param_1 + 0x10) = uVar7;
    *(uint *)(param_1 + 0x11) = uVar6;
    if (uVar6 != 0) {
      *(uint *)((longlong)param_1 + 0x84) = uVar7 - 1;
      uVar9 = (ulonglong)(uVar7 << 2);
      pvVar2 = (void *)FUN_14001cc68(uVar9 + (uVar9 == 0),0x10);
      param_1[0x12] = (longlong)pvVar2;
      uVar5 = 0;
      lVar3 = FUN_14001cc68((ulonglong)uVar6 << 2,0x10);
      param_1[0x13] = lVar3;
      memset(pvVar2,(int)CONCAT71((int7)((ulonglong)uVar5 >> 8),0xff),uVar9);
    }
    if (0 < (int)param_1[3]) {
      uVar6 = 1;
      lVar3 = 0;
      uVar9 = 0;
      do {
        uVar7 = *(uint *)(param_1[2] + lVar3);
        if (*(uint *)(param_1 + 0x11) <= uVar9) {
          iVar1 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar1 == 0; iVar1 = iVar1 + -1) {
            }
          }
          uVar4 = 1 << ((byte)iVar1 & 0x1f);
          if (uVar4 < 0x21) {
            uVar4 = 0x20;
          }
          FUN_1404b04e2(param_1 + 0x10,uVar4);
        }
        uVar8 = (ulonglong)(uVar7 & *(uint *)((longlong)param_1 + 0x84));
        *(undefined4 *)(param_1[0x13] + uVar9 * 4) = *(undefined4 *)(param_1[0x12] + uVar8 * 4);
        *(int *)(param_1[0x12] + uVar8 * 4) = (int)uVar9;
        uVar9 = uVar9 + 1;
        uVar6 = uVar6 + 2;
        lVar3 = lVar3 + 0x14;
      } while ((longlong)uVar9 < (longlong)(int)param_1[3]);
    }
  }
  return;
}



// FUNCTION 147433fac FUN_147433fac body=246 status=ok
// SIG undefined FUN_147433fac(void)

undefined8 *
FUN_147433fac(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  void *_Src;
  
  FUN_1459ad2de(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_14a391740;
  param_1[6] = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x16] = 0x400;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = &DAT_14c7585e0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x400;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = &DAT_14c7585e0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x20));
  return param_1;
}



// FUNCTION 1474340a2 FUN_1474340a2 body=135 status=ok
// SIG undefined FUN_1474340a2(void)

void FUN_1474340a2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14743bc54(param_1,iVar1);
    }
    FUN_14743bc38((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_14743bce8(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_14743bd4e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14743412a FUN_14743412a body=243 status=ok
// SIG undefined FUN_14743412a(void)

void FUN_14743412a(longlong *param_1)

{
  if ((int)param_1[0x11] != 0) {
    *(undefined8 *)((longlong)param_1 + 0x84) = 0;
    if (param_1[0x12] != 0) {
      FUN_1400020a8();
    }
    param_1[0x12] = (longlong)&DAT_14c7585e0;
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    param_1[0x13] = 0;
  }
  if ((int)param_1[0xd] != 0) {
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1[0xe] = (longlong)&DAT_14c7585e0;
    if (param_1[0xf] != 0) {
      FUN_1400020a8();
    }
    param_1[0xf] = 0;
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 14743421e FUN_14743421e body=145 status=ok
// SIG undefined FUN_14743421e(void)

void FUN_14743421e(longlong param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  (**(code **)(*(longlong *)*param_3 + 0x18))();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  lVar3 = *(longlong *)(param_1 + 0xf0);
  lVar5 = (longlong)param_2 * 0x18;
  (**(code **)(*(longlong *)*param_3 + 0x10))
            ((longlong *)*param_3,*(undefined8 *)(lVar3 + 8 + lVar5),0,
             *(undefined4 *)(lVar2 + 8 + lVar5));
  puVar4 = *(undefined8 **)(lVar3 + lVar5);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)(lVar3 + lVar5) = 0;
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001474342a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x100));
  return;
}



// FUNCTION 1474342b0 FUN_1474342b0 body=202 status=ok
// SIG undefined FUN_1474342b0(void)

ulonglong FUN_1474342b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined8 *puVar3;
  PSRWLOCK SRWLock;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  SRWLock = (PSRWLOCK)(param_1 + 0x100);
  AcquireSRWLockShared(SRWLock);
  if (((*(uint *)((longlong)param_2 + 0x14) & 0x7fffffff) == 0) ||
     (puVar3 = (undefined8 *)*param_2, puVar3 == (undefined8 *)0x0)) {
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    local_20 = puVar3;
    ReleaseSRWLockShared(SRWLock);
    if (puVar3 != (undefined8 *)0x0) {
      bVar2 = *(byte *)(puVar3 + 0x14);
      if ((bVar2 & 1) == 0) {
        FUN_14009fd82(DAT_14c82b500,&local_20,0xff);
      }
      uVar4 = CONCAT71((int7)((ulonglong)SRWLock >> 8),bVar2) ^ 1;
      if (local_20 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_20 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_20)(local_20,1);
        }
      }
      goto LAB_147434357;
    }
  }
  uVar4 = 0;
LAB_147434357:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14743437c FUN_14743437c body=78 status=ok
// SIG undefined FUN_14743437c(void)

void FUN_14743437c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  lVar1 = FUN_144a61150(param_1,param_2);
  *(uint *)(lVar1 + 0x14) =
       *(uint *)(lVar1 + 0x14) & 0x80000000 | *(uint *)(lVar1 + 0x14) + 1 & 0x7fffffff;
                    /* WARNING: Could not recover jumptable at 0x0001474343c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x138));
  return;
}



// FUNCTION 1474343d0 FUN_1474343d0 body=86 status=ok
// SIG undefined FUN_1474343d0(void)

undefined8 * FUN_1474343d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434426 FUN_147434426 body=38 status=ok
// SIG undefined FUN_147434426(void)

undefined8 FUN_147434426(undefined8 param_1,int param_2)

{
  FUN_1401c051c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743444c FUN_14743444c body=38 status=ok
// SIG undefined FUN_14743444c(void)

undefined8 FUN_14743444c(undefined8 param_1,int param_2)

{
  FUN_14742fb4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434472 FUN_147434472 body=38 status=ok
// SIG undefined FUN_147434472(void)

undefined8 FUN_147434472(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434498 FUN_147434498 body=38 status=ok
// SIG undefined FUN_147434498(void)

undefined8 FUN_147434498(undefined8 param_1,int param_2)

{
  FUN_14631f922();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474344be FUN_1474344be body=38 status=ok
// SIG undefined FUN_1474344be(void)

undefined8 FUN_1474344be(undefined8 param_1,int param_2)

{
  FUN_14003f39a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1474344e4 FUN_1474344e4 body=38 status=ok
// SIG undefined FUN_1474344e4(void)

undefined8 FUN_1474344e4(undefined8 param_1,int param_2)

{
  FUN_14742fcbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743450a FUN_14743450a body=38 status=ok
// SIG undefined FUN_14743450a(void)

undefined8 FUN_14743450a(undefined8 param_1,int param_2)

{
  FUN_14099d7b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434530 FUN_147434530 body=38 status=ok
// SIG undefined FUN_147434530(void)

undefined8 FUN_147434530(undefined8 param_1,int param_2)

{
  FUN_143227374();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434594 FUN_147434594 body=70 status=ok
// SIG undefined FUN_147434594(void)

void FUN_147434594(longlong param_1,int param_2,longlong *param_3)

{
  uint uVar1;
  int *piVar2;
  
  if (*(int *)(*(longlong *)(param_1 + 0x70) + 4 + (longlong)param_2 * 0x10) != 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x70) + (longlong)param_2 * 0x10);
    uVar1 = 0;
    do {
      FUN_1449e3bb0(param_3,(longlong)(int)(*piVar2 + uVar1) * 4 + *param_3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)piVar2[1]);
  }
  return;
}



// FUNCTION 14743461c FUN_14743461c body=55 status=ok
// SIG undefined FUN_14743461c(void)

undefined8 *
FUN_14743461c(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  lVar2 = param_1[0xc];
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x14);
  uVar3 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x14);
  return param_2;
}



// FUNCTION 147434752 FUN_147434752 body=132 status=ok
// SIG undefined FUN_147434752(void)

void FUN_147434752(longlong param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x68);
  lVar3 = (longlong)param_2;
  if (*(int *)(lVar1 + 4 + lVar3 * 8) != 0) {
    uVar2 = 0;
    do {
      local_3c = *(undefined4 *)
                  (*(longlong *)(param_1 + 0x98) +
                  (longlong)(int)(*(int *)(lVar1 + lVar3 * 8) + uVar2) * 4);
      FUN_144aa221c(param_3,&local_3c);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(lVar1 + 4 + lVar3 * 8));
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1474347d8 FUN_1474347d8 body=58 status=ok
// SIG undefined FUN_1474347d8(void)

undefined8 *
FUN_1474347d8(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4);
  lVar2 = param_1[9];
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar4 * 0x14);
  uVar3 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar3;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar4 * 0x14);
  return param_2;
}



// FUNCTION 147434838 FUN_147434838 body=12 status=ok
// SIG undefined FUN_147434838(void)

void FUN_147434838(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147434841. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 147434844 FUN_147434844 body=57 status=ok
// SIG undefined FUN_147434844(void)

undefined8 * FUN_147434844(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a3919c0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14743487e FUN_14743487e body=99 status=ok
// SIG undefined FUN_14743487e(void)

void FUN_14743487e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_144a787a6(param_1[0x15],param_1 + 0x16);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001474348d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147434a02 FUN_147434a02 body=48 status=ok
// SIG undefined FUN_147434a02(void)

void FUN_147434a02(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 147434a32 FUN_147434a32 body=85 status=ok
// SIG undefined FUN_147434a32(void)

void FUN_147434a32(longlong param_1,int param_2)

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
  FUN_140160c4e();
  return;
}



// FUNCTION 147434a8c FUN_147434a8c body=115 status=ok
// SIG undefined FUN_147434a8c(void)

void FUN_147434a8c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_14322d242(param_1 + 0x15);
  FUN_1400809da(param_1 + 0x17);
  puVar2 = (undefined8 *)param_1[0x16];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147434af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 147434b04 FUN_147434b04 body=113 status=ok
// SIG undefined FUN_147434b04(void)

void FUN_147434b04(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140299c46(0xa8);
    FUN_14004710c(200);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140299c46(param_1 + 0x15);
  FUN_14004710c(param_1 + 0x19);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147434b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147434b7a FUN_147434b7a body=107 status=ok
// SIG undefined FUN_147434b7a(void)

void FUN_147434b7a(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14ca96778;
  if (param_1 <= (int)DAT_14ca96778) {
    iVar2 = 0x10;
    if (0x10 < DAT_14ca96778) {
      lVar5 = (longlong)(int)DAT_14ca96778;
      if (0x10 < DAT_14ca9677c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14ca9677c = iVar2;
    FUN_147434be6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14ca96778);
}



// FUNCTION 147434be6 FUN_147434be6 body=142 status=ok
// SIG undefined FUN_147434be6(void)

void FUN_147434be6(int param_1,uint param_2)

{
  if (param_2 < 0x11) {
    if (DAT_14ca96770 == (void *)0x0) {
      return;
    }
    memmove(&DAT_14ca966f0,DAT_14ca96770,(longlong)param_1 << 3);
    param_1 = 0;
    param_2 = 0;
  }
  else if (DAT_14ca96770 == (void *)0x0) {
    FUN_1446efa72(&DAT_14ca96770,0,param_2,8);
    memmove(DAT_14ca96770,&DAT_14ca966f0,(longlong)param_1 << 3);
    return;
  }
  FUN_1446efa72(&DAT_14ca96770,param_1,param_2,8);
  return;
}



// FUNCTION 147434c74 FUN_147434c74 body=61 status=ok
// SIG undefined FUN_147434c74(void)

undefined8 * FUN_147434c74(undefined8 *param_1,int param_2)

{
  FUN_147434ce2(param_1 + 0xe);
  *param_1 = &PTR_LAB_14a38c150;
  FUN_1449b67f0(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434cbc FUN_147434cbc body=38 status=ok
// SIG undefined FUN_147434cbc(void)

undefined8 FUN_147434cbc(undefined8 param_1,int param_2)

{
  FUN_147434ce2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147434ce2 FUN_147434ce2 body=147 status=ok
// SIG undefined FUN_147434ce2(void)

void FUN_147434ce2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x78) == '\x01') {
    *(undefined1 *)(param_1 + 0x78) = 0;
  }
  lVar3 = param_1 + 0x40;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x58);
  }
  FUN_1447241a4(lVar3,*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
  }
  FUN_14472427c(lVar3,*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    puVar1 = (uint *)(*(longlong *)(param_1 + 0x10) + 8);
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



// FUNCTION 147434db4 FUN_147434db4 body=31 status=ok
// SIG undefined FUN_147434db4(void)

undefined8
FUN_147434db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147434eba(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147434df0 FUN_147434df0 body=70 status=ok
// SIG undefined FUN_147434df0(void)

void FUN_147434df0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = FUN_1457fb358();
  FUN_1467ac8f2(param_1,uVar3,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147434e36 FUN_147434e36 body=37 status=ok
// SIG undefined FUN_147434e36(void)

void FUN_147434e36(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147434e5c FUN_147434e5c body=93 status=ok
// SIG undefined FUN_147434e5c(void)

void FUN_147434e5c(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = FUN_1457fb358();
  FUN_1467ac78e(param_1,param_2,uVar2,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147434eba FUN_147434eba body=96 status=ok
// SIG undefined FUN_147434eba(void)

void FUN_147434eba(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147434f1a(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar4 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar4 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_1457fb358();
  FUN_1467ac844(param_1,param_2,uVar3,uVar1,uVar4);
  return;
}



// FUNCTION 147434f1a FUN_147434f1a body=59 status=ok
// SIG undefined FUN_147434f1a(void)

void FUN_147434f1a(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147434f56(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147435034();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147434f56 FUN_147434f56 body=87 status=ok
// SIG undefined FUN_147434f56(void)

void FUN_147434f56(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147434fae(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 8),0,(longlong)(int)param_2 << 3);
  return;
}



// FUNCTION 147434fae FUN_147434fae body=132 status=ok
// SIG undefined FUN_147434fae(void)

void FUN_147434fae(longlong param_1,int param_2)

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
    FUN_144a7f90c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147435034 FUN_147435034 body=62 status=ok
// SIG undefined FUN_147435034(void)

void FUN_147435034(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147435072(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147435072 FUN_147435072 body=93 status=ok
// SIG undefined FUN_147435072(void)

ulonglong FUN_147435072(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1474350de FUN_1474350de body=31 status=ok
// SIG undefined FUN_1474350de(void)

undefined8
FUN_1474350de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1474354e2(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 14743511a FUN_14743511a body=74 status=ok
// SIG undefined FUN_14743511a(void)

void FUN_14743511a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_1474351ec();
  FUN_1467ac8f2(param_1,&DAT_14ca99020,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147435164 FUN_147435164 body=37 status=ok
// SIG undefined FUN_147435164(void)

void FUN_147435164(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 14743518a FUN_14743518a body=97 status=ok
// SIG undefined FUN_14743518a(void)

void FUN_14743518a(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1474351ec();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca99020,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 1474351ec FUN_1474351ec body=200 status=ok
// SIG undefined FUN_1474351ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474351ec(void)

{
  if ((DAT_14ca99087 & 2) != 0) {
    return;
  }
  DAT_14ca99087 = DAT_14ca99087 | 2;
  _DAT_14ca99028 = L"FParameterStructReference";
  _DAT_14ca99040 = FUN_146826540;
  _DAT_14ca99048 = FUN_146825d77;
  _DAT_14ca99050 = FUN_146825fd6;
  _DAT_14ca99058 = FUN_1407e02ea;
  _DAT_14ca99060 = FUN_146826273;
  _DAT_14ca99038 = &LAB_1474352b4;
  _DAT_14ca99078 = 0xffffffff00000004;
  _DAT_14ca99080 = 2;
  DAT_14ca99084 = 0;
  _DAT_14ca99068 = &LAB_1474352bc;
  FUN_1474352c0();
  FUN_1407e00cc(&DAT_14ca99020);
  return;
}



// FUNCTION 1474352c0 FUN_1474352c0 body=275 status=ok
// SIG undefined FUN_1474352c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474352c0(void)

{
  FUN_1474353d4();
  _DAT_14ca99088 = L"BufferIndex";
  DAT_14ca990b2 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99090 = &DAT_14ca84cb0;
  _DAT_14ca990a0 = &LAB_14682652b;
  _DAT_14ca990a8 = 0x100000000;
  _DAT_14ca990b0 = 0;
  _DAT_14ca99098 = DAT_14ca99030;
  DAT_14ca99030 = &DAT_14ca99088;
  return;
}



// FUNCTION 1474353d4 FUN_1474353d4 body=270 status=ok
// SIG undefined FUN_1474353d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474353d4(void)

{
  _DAT_14ca990b8 = L"ByteOffset";
  DAT_14ca990e2 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca990c0 = &DAT_14ca84cb0;
  _DAT_14ca990d0 = &LAB_14682652b;
  _DAT_14ca990d8 = &DAT_100000002;
  _DAT_14ca990e0 = 0;
  _DAT_14ca990c8 = DAT_14ca99030;
  DAT_14ca99030 = &DAT_14ca990b8;
  return;
}



// FUNCTION 1474354e2 FUN_1474354e2 body=100 status=ok
// SIG undefined FUN_1474354e2(void)

void FUN_1474354e2(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147435546(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_1474351ec();
  FUN_1467ac844(param_1,param_2,&DAT_14ca99020,uVar1,uVar3);
  return;
}



// FUNCTION 147435546 FUN_147435546 body=59 status=ok
// SIG undefined FUN_147435546(void)

void FUN_147435546(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147435582(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147435660();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147435582 FUN_147435582 body=87 status=ok
// SIG undefined FUN_147435582(void)

void FUN_147435582(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1474355da(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 4),0,(longlong)(int)param_2 << 2);
  return;
}



// FUNCTION 1474355da FUN_1474355da body=132 status=ok
// SIG undefined FUN_1474355da(void)

void FUN_1474355da(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147435660 FUN_147435660 body=62 status=ok
// SIG undefined FUN_147435660(void)

void FUN_147435660(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14743569e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,2);
  }
  return;
}



// FUNCTION 14743569e FUN_14743569e body=93 status=ok
// SIG undefined FUN_14743569e(void)

ulonglong FUN_14743569e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,2);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14743570a FUN_14743570a body=31 status=ok
// SIG undefined FUN_14743570a(void)

undefined8
FUN_14743570a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_147435c28(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147435746 FUN_147435746 body=74 status=ok
// SIG undefined FUN_147435746(void)

void FUN_147435746(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_147435818();
  FUN_1467ac8f2(param_1,&DAT_14ca99150,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147435790 FUN_147435790 body=37 status=ok
// SIG undefined FUN_147435790(void)

void FUN_147435790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1474357b6 FUN_1474357b6 body=97 status=ok
// SIG undefined FUN_1474357b6(void)

void FUN_1474357b6(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_147435818();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca99150,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147435818 FUN_147435818 body=200 status=ok
// SIG undefined FUN_147435818(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147435818(void)

{
  if ((DAT_14ca991b7 & 2) != 0) {
    return;
  }
  DAT_14ca991b7 = DAT_14ca991b7 | 2;
  _DAT_14ca99158 = L"FBindlessResourceParameter";
  _DAT_14ca99170 = FUN_146826540;
  _DAT_14ca99178 = FUN_146825d77;
  _DAT_14ca99180 = FUN_146825fd6;
  _DAT_14ca99188 = FUN_1407e02ea;
  _DAT_14ca99190 = FUN_146826273;
  _DAT_14ca99168 = &LAB_1474358e0;
  _DAT_14ca991a8 = 0xffffffff00000006;
  _DAT_14ca991b0 = 2;
  DAT_14ca991b4 = 0;
  _DAT_14ca99198 = &LAB_1474358ee;
  FUN_1474358f2();
  FUN_1407e00cc(&DAT_14ca99150);
  return;
}



// FUNCTION 1474358f2 FUN_1474358f2 body=275 status=ok
// SIG undefined FUN_1474358f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1474358f2(void)

{
  FUN_147435a06();
  _DAT_14ca991b8 = L"ByteOffset";
  DAT_14ca991e2 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca991c0 = &DAT_14ca84cb0;
  _DAT_14ca991d0 = &LAB_14682652b;
  _DAT_14ca991d8 = 0x100000000;
  _DAT_14ca991e0 = 0;
  _DAT_14ca991c8 = DAT_14ca99160;
  DAT_14ca99160 = &DAT_14ca991b8;
  return;
}



// FUNCTION 147435a06 FUN_147435a06 body=275 status=ok
// SIG undefined FUN_147435a06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147435a06(void)

{
  FUN_147435b1a();
  _DAT_14ca991e8 = L"GlobalConstantOffset";
  DAT_14ca99212 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca991f0 = &DAT_14ca84cb0;
  _DAT_14ca99200 = &LAB_14682652b;
  _DAT_14ca99208 = &DAT_100000002;
  _DAT_14ca99210 = 0;
  _DAT_14ca991f8 = DAT_14ca99160;
  DAT_14ca99160 = &DAT_14ca991e8;
  return;
}



// FUNCTION 147435b1a FUN_147435b1a body=270 status=ok
// SIG undefined FUN_147435b1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147435b1a(void)

{
  _DAT_14ca99218 = L"BaseType";
  DAT_14ca99242 = FUN_140850cc5();
  if ((DAT_14ca84aa7 & 2) == 0) {
    DAT_14ca84aa7 = DAT_14ca84aa7 | 3;
    _DAT_14ca84a48 = L"EUniformBufferBaseType";
    _DAT_14ca84a60 = &LAB_1474141a8;
    _DAT_14ca84a68 = &LAB_1474141b4;
    _DAT_14ca84a70 = &LAB_1474141c0;
    _DAT_14ca84a78 = &LAB_1474141c6;
    _DAT_14ca84a80 = &LAB_1474141ca;
    _DAT_14ca84a58 = &LAB_1474141d0;
    _DAT_14ca84a98 = &DAT_100000001;
    _DAT_14ca84aa0 = 1;
    DAT_14ca84aa4 = 0;
  }
  _DAT_14ca99220 = &DAT_14ca84a40;
  _DAT_14ca99230 = &LAB_14682652b;
  _DAT_14ca99238 = &DAT_100000004;
  _DAT_14ca99240 = 0;
  _DAT_14ca99228 = DAT_14ca99160;
  DAT_14ca99160 = &DAT_14ca99218;
  return;
}



// FUNCTION 147435c28 FUN_147435c28 body=100 status=ok
// SIG undefined FUN_147435c28(void)

void FUN_147435c28(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_147435c8c(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_147435818();
  FUN_1467ac844(param_1,param_2,&DAT_14ca99150,uVar1,uVar3);
  return;
}



// FUNCTION 147435c8c FUN_147435c8c body=59 status=ok
// SIG undefined FUN_147435c8c(void)

void FUN_147435c8c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_147435cc8(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_147435dba();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147435cc8 FUN_147435cc8 body=94 status=ok
// SIG undefined FUN_147435cc8(void)

void FUN_147435cc8(ulonglong *param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_147435d26(param_1);
  }
  uVar2 = *param_1;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  memset((void *)(uVar3 + (longlong)iVar1 * 6),0,(longlong)(int)param_2 * 6);
  return;
}



// FUNCTION 147435d26 FUN_147435d26 body=146 status=ok
// SIG undefined FUN_147435d26(void)

void FUN_147435d26(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 6,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 6)) {
      uVar5 = uVar4 / 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_144a7f90c(param_1,param_2,uVar5,6,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147435dba FUN_147435dba body=62 status=ok
// SIG undefined FUN_147435dba(void)

void FUN_147435dba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147435df8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,6,2);
  }
  return;
}



// FUNCTION 147435df8 FUN_147435df8 body=110 status=ok
// SIG undefined FUN_147435df8(void)

ulonglong FUN_147435df8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 6) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147435e31;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 6,2);
      param_2 = param_2 / 6;
    }
  }
LAB_147435e31:
  return param_2 & 0xffffffff;
}



// FUNCTION 147435e74 FUN_147435e74 body=31 status=ok
// SIG undefined FUN_147435e74(void)

undefined8
FUN_147435e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14743638c(param_2,param_1,param_4);
  return 0x10;
}



// FUNCTION 147435eb0 FUN_147435eb0 body=74 status=ok
// SIG undefined FUN_147435eb0(void)

void FUN_147435eb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  FUN_147435f82();
  FUN_1467ac8f2(param_1,&DAT_14ca992b0,uVar1,uVar2,param_3,param_4);
  return;
}



// FUNCTION 147435efa FUN_147435efa body=37 status=ok
// SIG undefined FUN_147435efa(void)

void FUN_147435efa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_144a886ae(param_1);
  }
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 147435f20 FUN_147435f20 body=97 status=ok
// SIG undefined FUN_147435f20(void)

void FUN_147435f20(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_147435f82();
  FUN_1467ac78e(param_1,param_2,&DAT_14ca992b0,uVar1,0);
  FUN_146826a6c(param_2,param_1 + 8,4);
  FUN_146826a6c(param_2,param_1 + 8,4);
  return;
}



// FUNCTION 147435f82 FUN_147435f82 body=200 status=ok
// SIG undefined FUN_147435f82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147435f82(void)

{
  if ((DAT_14ca99317 & 2) != 0) {
    return;
  }
  DAT_14ca99317 = DAT_14ca99317 | 2;
  _DAT_14ca992b8 = L"FResourceParameter";
  _DAT_14ca992d0 = FUN_146826540;
  _DAT_14ca992d8 = FUN_146825d77;
  _DAT_14ca992e0 = FUN_146825fd6;
  _DAT_14ca992e8 = FUN_1407e02ea;
  _DAT_14ca992f0 = FUN_146826273;
  _DAT_14ca992c8 = &LAB_14743604a;
  _DAT_14ca99308 = 0xffffffff00000004;
  _DAT_14ca99310 = 2;
  DAT_14ca99314 = 0;
  _DAT_14ca992f8 = &LAB_147436052;
  FUN_147436056();
  FUN_1407e00cc(&DAT_14ca992b0);
  return;
}



// FUNCTION 147436056 FUN_147436056 body=275 status=ok
// SIG undefined FUN_147436056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147436056(void)

{
  FUN_14743616a();
  _DAT_14ca99318 = L"ByteOffset";
  DAT_14ca99342 = FUN_140850cc5();
  if ((DAT_14ca84d17 & 2) == 0) {
    DAT_14ca84d17 = DAT_14ca84d17 | 3;
    _DAT_14ca84cb8 = L"unsigned short";
    _DAT_14ca84cd0 = &LAB_147413ebe;
    _DAT_14ca84cd8 = &LAB_147413eca;
    _DAT_14ca84ce0 = &LAB_147413ed8;
    _DAT_14ca84ce8 = &LAB_1431edfe0;
    _DAT_14ca84cf0 = &LAB_147413ede;
    _DAT_14ca84cc8 = &LAB_147413ee6;
    _DAT_14ca84d08 = &DAT_200000002;
    _DAT_14ca84d10 = 2;
    DAT_14ca84d14 = 0;
  }
  _DAT_14ca99320 = &DAT_14ca84cb0;
  _DAT_14ca99330 = &LAB_14682652b;
  _DAT_14ca99338 = 0x100000000;
  _DAT_14ca99340 = 0;
  _DAT_14ca99328 = DAT_14ca992c0;
  DAT_14ca992c0 = &DAT_14ca99318;
  return;
}



// FUNCTION 14743616a FUN_14743616a body=275 status=ok
// SIG undefined FUN_14743616a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14743616a(void)

{
  FUN_14743627e();
  _DAT_14ca99348 = L"BaseIndex";
  DAT_14ca99372 = FUN_140850cc5();
  if ((DAT_14ca7704f & 2) == 0) {
    DAT_14ca7704f = DAT_14ca7704f | 3;
    _DAT_14ca76ff0 = L"unsigned char";
    _DAT_14ca77008 = &LAB_147376b82;
    _DAT_14ca77010 = &LAB_147376b8e;
    _DAT_14ca77018 = &LAB_147376b9a;
    _DAT_14ca77020 = &LAB_143168ea0;
    _DAT_14ca77028 = &LAB_147376ba0;
    _DAT_14ca77000 = &LAB_147376ba8;
    _DAT_14ca77040 = &DAT_100000001;
    _DAT_14ca77048 = 1;
    DAT_14ca7704c = 0;
  }
  _DAT_14ca99350 = &DAT_14ca76fe8;
  _DAT_14ca99360 = &LAB_14682652b;
  _DAT_14ca99368 = &DAT_100000002;
  _DAT_14ca99370 = 0;
  _DAT_14ca99358 = DAT_14ca992c0;
  DAT_14ca992c0 = &DAT_14ca99348;
  return;
}



// FUNCTION 14743627e FUN_14743627e body=270 status=ok
// SIG undefined FUN_14743627e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14743627e(void)

{
  _DAT_14ca99378 = L"BaseType";
  DAT_14ca993a2 = FUN_140850cc5();
  if ((DAT_14ca84aa7 & 2) == 0) {
    DAT_14ca84aa7 = DAT_14ca84aa7 | 3;
    _DAT_14ca84a48 = L"EUniformBufferBaseType";
    _DAT_14ca84a60 = &LAB_1474141a8;
    _DAT_14ca84a68 = &LAB_1474141b4;
    _DAT_14ca84a70 = &LAB_1474141c0;
    _DAT_14ca84a78 = &LAB_1474141c6;
    _DAT_14ca84a80 = &LAB_1474141ca;
    _DAT_14ca84a58 = &LAB_1474141d0;
    _DAT_14ca84a98 = &DAT_100000001;
    _DAT_14ca84aa0 = 1;
    DAT_14ca84aa4 = 0;
  }
  _DAT_14ca99380 = &DAT_14ca84a40;
  _DAT_14ca99390 = &LAB_14682652b;
  _DAT_14ca99398 = &DAT_100000003;
  _DAT_14ca993a0 = 0;
  _DAT_14ca99388 = DAT_14ca992c0;
  DAT_14ca992c0 = &DAT_14ca99378;
  return;
}



// FUNCTION 14743638c FUN_14743638c body=100 status=ok
// SIG undefined FUN_14743638c(void)

void FUN_14743638c(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  FUN_1474363f0(param_3,*(undefined4 *)(param_1 + 8));
  uVar2 = *param_3;
  uVar3 = ((longlong)uVar2 >> 0x18) + (longlong)param_3;
  if ((uVar2 & 1) == 0) {
    uVar3 = uVar2;
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  FUN_147435f82();
  FUN_1467ac844(param_1,param_2,&DAT_14ca992b0,uVar1,uVar3);
  return;
}



// FUNCTION 1474363f0 FUN_1474363f0 body=59 status=ok
// SIG undefined FUN_1474363f0(void)

void FUN_1474363f0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 - iVar1 != 0 && iVar1 <= param_2) {
    FUN_14743642c(param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 8) = param_2;
    FUN_14743650a();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}


